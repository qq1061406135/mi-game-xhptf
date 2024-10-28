using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEditor;
using UnityEngine;

public class UIMain : UILayerBase
{

    public void OnStartGameClick()
    {
        Log.Debug("OnStartGameClick");
        StartGame(10001);
    }

    public void OnEquipClick()
    {
        GameEntry.UI.Open<UIEquip>(UIConfigs.UIEquip);

    }

    public void OnSkillClick()
    {
        GameEntry.UI.Open<UISkill>(UIConfigs.UISkill);
    }

    public void OnDropClick()
    {
        NetManager.Instance.SendDrop(1000, (msg) =>
        {
            Log.Debug(msg.DropDatas.Count.ToString());
        });
    }

    public void OnRoleInfoClick()
    {
        Numeric numeric = new Numeric();
        numeric.NumericDic = GameData.Instance.userData.numericDic;
        GameEntry.UI.Open<UIRoleInfo>(UIConfigs.UIRoleInfo, numeric);

    }

    public async void StartGame(int mapid)
    {
        //GameEntry.UI.Close<UIJoystick>(UIConfigs.UIJoystick);

        ////读取关卡数据
        //MapConfig mapConfig = GameEntry.Config.mapConfigs.Find(p=>p.Id == mapid);
        //GameData.Instance.curMapConfig = mapConfig;

        //await ResourceComponent.Instance.LoadSceneAsync(mapConfig.Map);
        //Log.Debug("加载完成  --  显示主界面");
        ////显示主界面
        await ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Game/Scenes/Level1.unity");
        //await GameEntry.UI.Open<UIGame>(UIConfigs.UIGame);
        Remove();
        


        //发送进入关卡请求到服务器

        //NetManager.Instance.SendIntoLevel(mapid, (msg) =>
        //{
        //    if(msg.Code == StatusCode.Success)
        //    {
        //        Log.Debug("切换成功");
        //        GameEntry.UI.Close<UIMain>(UIConfigs.UIMain);
        //    }
        //    else
        //    {
        //        GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip,msg.Msg);
        //    }
        //});

    }
}
