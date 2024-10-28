using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class UIRegister : UILayerBase
{
    public TMPro.TMP_InputField inputAccount;
    public TMPro.TMP_InputField inputPassword;


    public void OnLoginClick()
    {
        LoginHandler();
    }

    public void OnRegisterClick()
    {

        RegisterHandler();
    }

    public async Task LoginHandler()
    {

        await GameEntry.UI.Open<UILogin>(UIConfigs.UILogin);
        Remove();
    }

    public void RegisterHandler()
    {
        Log.Debug("开始注册");
        Dictionary<string, string> data = new Dictionary<string, string>();
        data.Add("account", inputAccount.text);
        data.Add("password", inputPassword.text);
        if(inputAccount.text == "" || inputPassword.text == "")
        {
            Log.Debug("字段不能为空");
            return;
        }

        //LoginResponse response = await GameEntry.Http.PostRequest<LoginResponse>(GameData.Instance.host + "api/register", data);
        //if (response.code == StatusCode.Success)
        //{
        //    Log.Debug("----------------注册成功");
        //    GameData.Instance.account = inputAccount.text;
        //    await GameEntry.UI.Open<UISelectServer>(UIConfigs.UISelectServer);
        //    Remove();
        //}

         GameEntry.Http.PostRequest<LoginResponse>(GameData.Instance.host + "api/register", data, (response) =>
         {
             OnRegisterHandler(response);
         });
        
    }

    public async Task OnRegisterHandler(LoginResponse response)
    {
        if (response.code == StatusCode.Success)
        {
            GameData.Instance.account = inputAccount.text;
            await GameEntry.UI.Open<UISelectServer>(UIConfigs.UISelectServer);
            Remove();
        }
    }

}
