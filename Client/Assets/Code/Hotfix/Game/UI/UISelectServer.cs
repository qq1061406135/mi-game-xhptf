using Google.Protobuf;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.VisualScripting;
using UnityEngine;

public class UISelectServer : UILayerBase
{
    public TMPro.TextMeshProUGUI serverTxt;
    private ServerData[] serverDatas;
    private PlayerData[] playerDatas;
    private ServerData serverData;
    private void Start()
    {
        GameData.Instance.userData = new UserData();
        initServerInofs();
    }

    private async void initServerInofs()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data.Add("account", GameData.Instance.account);
        //GameEntry.Http.PostRequest<GetServersResponse>(GameData.Instance.host + "api/getservers", data, (response) =>
        //{
        //    onGetServerSuccess(response);
        //});
        try
        {
            await ConfigComponent.Instance.LoadConfigs();
        }
        catch (Exception ex)
        {
            Log.Debug("onGetServerSuccess  " + ex.ToString());
        }

    }

    private async Task onGetServerSuccess(GetServersResponse response)
    {
        if (response.code == StatusCode.Success)
        {
            if (response.servers.Length > 0)
            {
                serverDatas = response.servers;
                playerDatas = response.players;
                try
                {
                    await ConfigComponent.Instance.LoadConfigs();
                }
                catch (Exception ex)
                {
                    Log.Debug("onGetServerSuccess  " + ex.ToString());
                }

                await initView();
            }
            else
            {

                Log.Debug("服务器数据为空");
            }
        }
    }

    private async Task initView()
    {
        if (playerDatas.Length == 0)
        {
            //暂时没有选择服务器
            serverData = serverDatas[0];
        }
        else
        {
            for (int i = 0; i < serverDatas.Length; i++)
            {
                if (serverDatas[i].serverid == playerDatas[0].region)
                {
                    serverData = serverDatas[i];
                    break;
                }
            }
        }
        updateView();
    }

    public void changeServerData(ServerData serverData)
    {
        this.serverData = serverData;
        this.updateView();
    }

    public void updateView()
    {
        serverTxt.text = serverData.servername;
    }

    public async void OnIntoGameClick()
    {
        //IntoGameHandler();
        Log.Debug("----- ---------");
        await ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Main/Main.unity");
        //await GameEntry.UI.Open<UIMain>(UIConfigs.UIMain);
        //Remove();
    }

    public void IntoGameHandler()
    {
        NetManager.Instance.init(serverData);
    }

    public void onChangeServerClick()
    {
        GameEntry.UI.Open<UISelectServerRegion>(UIConfigs.UISelectServerRegion,serverDatas);
    }
}
