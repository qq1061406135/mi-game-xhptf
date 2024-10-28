using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UISelectServerRegion : UILayerBase
{
    public GameObject itemFab;
    public Transform content;
    

    public override bool Show(object param = null)
    {
        bool s = base.Show(param);
        ServerData[] serverDatas = (ServerData[])param;
        for(int i = 0;i<serverDatas.Length;i++)
        {
            ServerData serverData = serverDatas[i];
            GameObject item = GameObject.Instantiate(itemFab, content);
            item.transform.GetChild(0).GetComponent<TMPro.TextMeshProUGUI>().text = serverDatas[i].servername;
            item.GetComponent<Button>().onClick.AddListener(() =>
            {
                UISelectServer uISelectServer = GameEntry.UI.Get<UISelectServer>(UIConfigs.UISelectServer);
                if (uISelectServer)
                {
                    uISelectServer.changeServerData(serverData);
                }
            });
        }
        return true;
    }
}
