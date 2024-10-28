using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class MainController : GameScene
{

    public Camera camera;
    //[HideInInspector]
    //public Transform player;
    //[HideInInspector]
    //public PlayerComponent playerComponent;


    private void Awake()
    {
        init();
    }


    private async Task init()
    {
        ////读取当前数据 --- 加载角色
        //PlayerConfig playerConfig = GameEntry.Config.playerConfigs.Find(p => p.Id == GameData.Instance.userData.configId);
        //if (playerConfig == null)
        //{
        //    Log.Debug("未查找到角色 请检查数据 " + GameData.Instance.userData.playerId);
        //    return;
        //}

        //var fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(playerConfig.Res);
        ////实例化到地图中
        //GameObject player = Instantiate(fab);
        //this.player = player.transform;
        //playerComponent = player.GetComponent<PlayerComponent>();
        //playerComponent.Init(GameData.Instance.userData, playerConfig);
        
        //this.player.position = new Vector3(0, 0);

        //camera.GetComponent<CameraFollow>().SetTarget(this.player);

        //Unit selfUnit = await UnitManager.Instance.createUnit(GameData.Instance.userData);

        ////关闭加载界面  关闭主界面
        //await initJoystick();

        //camera.GetComponent<CameraFollow>().SetTarget(selfUnit.gameObject.transform);

        Log.Debug("加载完成  --  显示主界面");
        //显示主界面
        await GameEntry.UI.Open<UIMain>(UIConfigs.UIMain);

        GameEntry.UI.Close<UISelectServer>(UIConfigs.UISelectServer);

    }

    private async Task initJoystick()
    {
        await GameEntry.UI.Open<UIJoystick>(UIConfigs.UIJoystick);
    }
}
