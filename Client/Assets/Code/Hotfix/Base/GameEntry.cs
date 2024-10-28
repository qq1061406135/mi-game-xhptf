using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public partial class GameEntry : MonoBehaviour
{
    public static bool IsInit;
    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
        InitBuiltinComponents();

        IsInit = true;
        //Test  ����
        Init();
    }
    async Task Init()
    {
        //////await ResourceComponent.Instance.LoadSceneAsync("Assets/Game/G/Jump/Jump.unity");
        //////await ResourceComponent.Instance.LoadSceneAsync("Assets/Game/G/ChineseChess/Chess.unity"); 
        //////Debug.Log("LoadOver");
        ////await ResourceComponent.Instance.LoadSceneAsync("Assets/Game/G/MowRVO/Mow.unity");

        //////await ResourceComponent.Instance.LoadSceneAsync("Assets/Game/G/DeadRising/City.unity");

        //////await ResourceComponent.Instance.LoadSceneAsync("Assets/Game/G/Merger/MainScene.unity");
        //////GameEntry.UI.ChangeScreen(ScreenType.LandscapeScreen, new Vector2(1280, 720));
        //////await ResourceComponent.Instance.LoadSceneAsync("Assets/Game/G/Devil/Devil.unity")
        //////GameEntry.UI.ChangeScreen(ScreenType.LandscapeScreen, new Vector2(1920, 1080));
        ////// await ResourceComponent.Instance.LoadSceneAsync("Assets/Game/G/AutoCultivation/AutoCultivation.unity");
        //////GameEntry.UI.ChangeScreen(ScreenType.LandscapeScreen, new Vector2(1920, 1080));
        ////await ResourceComponent.Instance.LoadSceneAsync("Assets/Game/G/Bomberman/Game.unity");

        ////����ȸ�------

        ////����������
        //ResourceComponent.Instance.InitComplete += () =>
        //{
        //    LoadComplete();
        //};

        Log.Debug("��ʼ�����----");

        await GameEntry.UI.Open<UISelectServer>(UIConfigs.UISelectServer);


        GameObject f = GameObject.Find("Canvas");
        if (f)
        {
            f.SendMessage("DestroyMyObject");
        }
    }

    //public async Task LoadComplete()
    //{

    //    //����ʾ��¼����
    //    //GameEntry.UI.Open<UILogin>(UIConfigs.UILogin);

    //    //await Config.LoadConfigs();

    //    //await ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Main/Main.unity");
    //    //Log.Debug("�������  --  ��ʾ������");
    //    ////��ʾ������
    //    //await GameEntry.UI.Open<UIMain>(UIConfigs.UIMain,1);
    //}

}
