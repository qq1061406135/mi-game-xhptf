using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEditor;
using UnityEngine;

public class UILogin : UILayerBase
{
    public TMPro.TMP_InputField inputAccount;
    public TMPro.TMP_InputField inputPassword;
    public void Start()
    {

        inputAccount.text = "1";
        inputPassword.text = "1";

    }
    public void OnClick()
    {
        LoginHandler();
    }

    public void OnRegisterClick()
    {
        RegisterHandler();
    }

    public async Task RegisterHandler()
    {
        await GameEntry.UI.Open<UIRegister>(UIConfigs.UIRegister);
        Remove();
    }

    public void LoginHandler()
    {
        Log.Debug("开始登录");
        try
        {
            Dictionary<string, string> data = new Dictionary<string, string>();
            data.Add("account", inputAccount.text);
            data.Add("password", inputPassword.text);
            //LoginResponse response = await GameEntry.Http.PostRequest<LoginResponse>(GameData.Instance.host + "api/login", data);
            //if (response.code == StatusCode.Success)
            //{
            //    Log.Debug("----------------登录成功");
            //    GameData.Instance.account = inputAccount.text;
            //    await GameEntry.UI.Open<UISelectServer>(UIConfigs.UISelectServer);
            //    //await GameEntry.Config.LoadConfigs();
            //    //await ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Main/Main.unity");
            //    //Log.Debug("加载完成  --  显示主界面");
            //    ////显示主界面
            //    //await GameEntry.UI.Open<UIMain>(UIConfigs.UIMain);
            //    Remove();
            //}

            GameEntry.Http.PostRequest<LoginResponse>(GameData.Instance.host + "api/login", data, (response) =>
            {
                GameData.Instance.account = inputAccount.text;
                OnLoginSuccess(response);

            });
        }
        catch (Exception e)
        {
            Log.Debug("----- " + e.ToString());
        }
    }

    public async Task OnLoginSuccess(LoginResponse response)
    {
        if(response.code == StatusCode.Success)
        {
            await GameEntry.UI.Open<UISelectServer>(UIConfigs.UISelectServer);
            Remove();
        }
        
    }

    public void OnTripleTownClick()
    {
        GameEntry.UI.Open<UITripleTown>(UIConfigs.UITripleTown);

    }
}
