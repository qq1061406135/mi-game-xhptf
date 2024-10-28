using Google.Protobuf;
using System;
using System.Threading.Tasks;
using UnityEngine;

enum NetType
{
    /**
     * 登录消息
     */
    Login,

    /**
     * 心跳包
     */
    HeartBeat,

    CreatePlayer,

    /**
     * 进入游戏
     */
    IntoGame,

    /// <summary>
    /// 登录数据同步完成
    /// </summary>
    LoginEnd,


    /// <summary>
    /// 同步角色数据
    /// </summary>
    SyncUnitDataNotify,
    /// <summary>
    /// 同步角色属性
    /// </summary>
    SyncUnitAttributesDataNotify,

    /// <summary>
    /// 同步角色装备数据
    /// </summary>
    SyncUnitEquipNotify,
}


public class NetManager
{
    private static NetManager _isntance;
    public static NetManager Instance
    {
        get
        {
            if (_isntance == null)
            {
                _isntance = new NetManager();
            }
            return _isntance;
        }
    }

    public Action syncEquips;

    private bool _isConnecting;
    /// <summary>
    /// 初始化接口
    /// </summary>
    public void init(ServerData serverData)
    {
        if (_isConnecting)
        {
            return;
        }
        _isConnecting = true;

        GameEntry.WebSocket.RegisterNotify(MessageType.SyncUnitDataNotify.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.SyncUnitAttributesDataNotify.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.SyncUnitEquipNotify.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.SyncSkillDataNotify.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.LoginEnd.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.SyncUnitPackageNotify.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.SyncUnitPosition.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.UnitIntoScene.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.UnitExitScene.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.ChangeToScene.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.SyncMonster.ToString(), onReceive);
        GameEntry.WebSocket.RegisterNotify(MessageType.SyncActivityDatas.ToString(), onReceive);
        




        GameEntry.WebSocket.Connect($"ws://{serverData.serverip}:{serverData.serverport}", () =>
        {
            Log.Debug("连接成功");
            login();
        }, () =>
        {
            _isConnecting = false;
        });
    }


    public void login()
    {
        Log.Debug("发送登录请求");
        //发送登录数据
        C2S_LoginGameMsg msg = new C2S_LoginGameMsg();
        msg.Account = GameData.Instance.account;
        GameEntry.WebSocket.Send(MessageType.Login.ToString(), msg.ToByteArray(), onReceive);
    }

    public void createPlayer(int configId, string playerName, int sex, Action<S2C_CreatePlayerResponse> action)
    {
        C2S_CreatePlayerRequest msg = new C2S_CreatePlayerRequest();
        msg.ConfigId = configId;
        msg.PlayerName = playerName;
        msg.Sex = sex;

        GameEntry.WebSocket.Send(MessageType.CreatePlayer.ToString(), msg.ToByteArray(), (string type, byte[] msg) =>
        {
            action.Invoke(S2C_CreatePlayerResponse.Parser.ParseFrom(msg));
        });
    }

    public void intoGame()
    {
        C2S_IntoGameMsg msg = new C2S_IntoGameMsg();

        GameEntry.WebSocket.Send(MessageType.IntoGame.ToString(), msg.ToByteArray(), onReceive);
    }


    private void onReceive(string type, byte[] msg)
    {
        switch ((MessageType)Enum.Parse(typeof(MessageType), type))
        {
            case MessageType.Login:
                onLoginHandler(S2C_LoginGameMsg.Parser.ParseFrom(msg));
                break;
            case MessageType.SyncUnitDataNotify:
                onSyncUnitDataHandler(S2C_SyncUnitDataNotify.Parser.ParseFrom(msg));
                break;
            case MessageType.SyncUnitAttributesDataNotify:
                onSyncUnitAttributesDataNotify(S2C_SyncUnitAttributesDataNotify.Parser.ParseFrom(msg));
                break;
            case MessageType.SyncUnitEquipNotify:
                onSyncUnitEquipDataNotify(S2C_SyncEquipDataNotify.Parser.ParseFrom(msg));
                break;
            case MessageType.SyncSkillDataNotify:
                onSyncSkillDataNotify(S2C_SyncSkillDataNotify.Parser.ParseFrom(msg));
                break;
            case MessageType.SyncUnitPackageNotify:
                onSyncUnitPackageDataNotify(S2C_SyncUnitPackageDataNotify.Parser.ParseFrom(msg));
                break;
            case MessageType.SyncUnitPosition:
                onSyncUnitPosititonMsg(S2C_SyncUnitPositionMsg.Parser.ParseFrom(msg));
                break;
            case MessageType.ChangeToScene:
                onChangeToSceneMsg(S2C_ChangeToSceneMsg.Parser.ParseFrom(msg));
                break;
            case MessageType.UnitExitScene:
                onUnitExitScenenMsg(S2C_UnitExitSceneMsg.Parser.ParseFrom(msg));
                break;
            case MessageType.UnitIntoScene:
                onUnitIntoSceneMsg(S2C_UnitIntoSceneMsg.Parser.ParseFrom(msg));
                break;
            case MessageType.LoginEnd:
                onLoginEndHandler();
                break;
            case MessageType.SyncMonster:
                onSyncMonsterNotify(S2C_SyncMonsterNotify.Parser.ParseFrom(msg));
                break;
            case MessageType.SyncActivityDatas:
                onSyncActivityNotify(S2C_SyncActivityDatasNotify.Parser.ParseFrom(msg));
                break;
        }
    }


    private async Task onLoginHandler(S2C_LoginGameMsg msg)
    {
        Log.Debug("onLoginhandler" + msg.RpcId);
        if (msg.Code == StatusCode.Success)
        {
            Log.Debug("登录成功");
            if (msg.UnitData.Type == 0)
            {
                Log.Debug("未创建角色--- 打开角色创建界面");

                GameData.Instance.userData.serialize(msg.UnitData);

                await GameEntry.UI.Open<UICreatePlayer>(UIConfigs.UICreatePlayer);

                GameEntry.UI.Close<UISelectServer>(UIConfigs.UISelectServer);
            }
            else
            {
                GameData.Instance.userData.serialize(msg.UnitData);
                //发送进入游戏的请求-------------------------------
                Log.Debug("已经创建了角色 保存数据后直接进入游戏");
                intoGame();
            }
        }
        else
        {
            GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip, msg.Msg);
            await GameEntry.UI.Open<UILogin>(UIConfigs.UILogin);
            GameEntry.UI.Close<UISelectServer>(UIConfigs.UISelectServer);
        }
    }

    private void onSyncUnitDataHandler(S2C_SyncUnitDataNotify msg)
    {
        Log.Debug("同步角色数据");
        GameData.Instance.userData.serialize(msg.UnitData);
    }

    /// <summary>
    /// 同步角色属性
    /// </summary>
    /// <param name="msg"></param>
    private void onSyncUnitAttributesDataNotify(S2C_SyncUnitAttributesDataNotify msg)
    {
        GameData.Instance.userData.serialize(msg.AttributeData, msg.AttributePoint, msg.UattributePoint);
    }

    /// <summary>
    /// 同步装备数据
    /// </summary>
    /// <param name="msg"></param>
    private void onSyncUnitEquipDataNotify(S2C_SyncEquipDataNotify msg)
    {
        Log.Debug("同步装备数据");
        GameData.Instance.userData.serialize(msg.EquipDatas);
        syncEquips?.Invoke();
    }

    /// <summary>
    /// 同步技能数据
    /// </summary>
    /// <param name="msg"></param>
    private void onSyncSkillDataNotify(S2C_SyncSkillDataNotify msg)
    {
        Log.Debug("同步技能数据");
        GameData.Instance.userData.serialize(msg.SkillDatas, msg.SkillPosDatas);
    }

    private void onSyncUnitPackageDataNotify(S2C_SyncUnitPackageDataNotify msg)
    {
        Log.Debug("同步道具数据");
        GameData.Instance.userData.serialize(msg.ItemData);
    }

    private void onSyncUnitPosititonMsg(S2C_SyncUnitPositionMsg msg)
    {
        Unit unit = UnitManager.Instance.unitList.Find(p => p.uid == msg.Uid);
        if (unit != null)
        {
            unit.Position = new Vector3(msg.Pos[0], msg.Pos[1], msg.Pos[2]);
        }
    }

    private void onChangeToSceneMsg(S2C_ChangeToSceneMsg msg)
    {

        Log.Debug("场景切换-- " + GameData.Instance.curSceneData + " To " + msg.SceneName);
        GameData.Instance.curSceneData = new SceneData();
        GameData.Instance.curSceneData.SceneName = msg.SceneName;
        GameData.Instance.curSceneData.SceneId = msg.SceneId;
        GameData.Instance.curSceneData.Uid = msg.Uid;

        //接收到场景切换的请求---
        //清理实例数据
        UnitManager.Instance.clearAll();

        onChangeSceneHandler();
    }

    private void onUnitExitScenenMsg(S2C_UnitExitSceneMsg msg)
    {
        UnitManager.Instance.exitUnit(msg.PlayerId);
    }

    private void onUnitIntoSceneMsg(S2C_UnitIntoSceneMsg msg)
    {
        UnitManager.Instance.createOtherUnit(msg.UnitData);

    }

    private void onSyncMonsterNotify(S2C_SyncMonsterNotify msg)
    {
        if(msg.Type == 1)
        {
            //创建
            MonsterManager.Instance.initMonster(msg.MonsterDats);
        }
    }

    private void onSyncActivityNotify(S2C_SyncActivityDatasNotify msg)
    {
        GameData.Instance.activityDatas.AddRange(msg.ActivityDatas);
        Log.Debug("同步活动数据");
    }

    private async Task onLoginEndHandler()
    {
        GameData.Instance.curSceneData = new SceneData();
        GameData.Instance.curSceneData.SceneName = "主场景";
        GameData.Instance.curSceneData.SceneId = 0;
        GameData.Instance.curSceneData.Uid = 1;

        //移除界面
        GameEntry.UI.Close<UILogin>(UIConfigs.UILogin);
        GameEntry.UI.Close<UIRegister>(UIConfigs.UIRegister);
        GameEntry.UI.Close<UISelectServer>(UIConfigs.UISelectServer);
        GameEntry.UI.Close<UICreatePlayer>(UIConfigs.UICreatePlayer);

        //await ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Main/Main.unity");
    }

    private async Task onChangeSceneHandler()
    {
        if (GameData.Instance.curSceneData.Uid == 1)
        {
            Log.Debug("切换主场景--");
            await ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Main/Main.unity");
            NetManager.Instance.SendChangeToSceneComplete();
        }
        else
        {
            //获取关卡配置
            MapConfig mapConfig = ConfigComponent.Instance.mapConfigs.Find(p => p.Id == GameData.Instance.curSceneData.SceneId);
            if (mapConfig != null)
            {
                Log.Debug("加载其他场景----------------- " + GameData.Instance.curSceneData.SceneName);
                GameData.Instance.curMapConfig = mapConfig;
                await ResourceComponent.Instance.LoadSceneAsync(mapConfig.Map);
                NetManager.Instance.SendChangeToSceneComplete();

            }
            else
            {
                Log.Error("切换场景失败--未查找到场景配置  " + GameData.Instance.curSceneData.SceneId);
            }
        }
    }

    public void SendDrop(int teamId, Action<S2C_DropItemResponse> action)
    {

        C2S_DropItemRequest msg = new C2S_DropItemRequest();
        msg.TeamId = teamId;

        GameEntry.WebSocket.Send(MessageType.DropItem.ToString(), msg.ToByteArray(), (type, msg) =>
        {
            action.Invoke(S2C_DropItemResponse.Parser.ParseFrom(msg));
        });
    }

    public void SendWearEquip(string uid, bool wear, Action<S2C_WearEquipResponse> action)
    {
        C2S_WearEquipRequest request = new C2S_WearEquipRequest();
        request.Uid = uid;
        request.Wear = wear;
        GameEntry.WebSocket.Send(MessageType.WearEquip.ToString(), request.ToByteArray(), (type, msg) =>
        {
            action.Invoke(S2C_WearEquipResponse.Parser.ParseFrom(msg));
        });
    }

    public void SendIntoLevel(int levelId, Action<S2C_IntoLevelResponse> action)
    {
        C2S_IntoLevelRequest request = new C2S_IntoLevelRequest();
        request.LevelId = levelId;
        GameEntry.WebSocket.Send(MessageType.IntoLevel.ToString(), request.ToByteArray(), (type, msg) =>
        {
            action.Invoke(S2C_IntoLevelResponse.Parser.ParseFrom(msg));
        });
    }

    public void SendExitLevel(Action<S2C_BackToHomeResponse> action)
    {
        C2S_BackToHomeRequest request = new C2S_BackToHomeRequest();
        GameEntry.WebSocket.Send(MessageType.BackToHome.ToString(), request.ToByteArray(), (type, msg) =>
        {
            action.Invoke(S2C_BackToHomeResponse.Parser.ParseFrom(msg));
        });
    }

    public void SendSyncPosition(Vector3 pos)
    {
        C2S_SyncUnitPositionMsg msg = new C2S_SyncUnitPositionMsg();
        msg.Pos.AddRange(new float[3] { pos.x, pos.y, pos.z });

        GameEntry.WebSocket.Send(MessageType.SyncUnitPosition.ToString(), msg.ToByteArray());
    }

    public void SendChangeToSceneComplete()
    {
        C2S_ChangeToSceneCompelteMsg msg = new C2S_ChangeToSceneCompelteMsg();
        GameEntry.WebSocket.Send(MessageType.ChangeToSceneComplete.ToString(), msg.ToByteArray());
    }

}
