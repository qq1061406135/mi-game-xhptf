using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIGameOver : UILayerBase
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public async void OnBackClick()
    {
        //退出
        //NetManager.Instance.SendExitLevel((msg) =>
        //{
        //    Log.Debug("退出成功=-- ");
        //    GameEntry.UI.Close<UIGame>(UIConfigs.UIGame);
        //});
        GameEntry.UI.Close<UILeqent>(UIConfigs.UIGameOver);
        await ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Main/Main.unity");
        GameEntry.UI.Close<UIGame>(UIConfigs.UIGame);
    }

}
