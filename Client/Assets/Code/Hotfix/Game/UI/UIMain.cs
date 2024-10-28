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

        ////��ȡ�ؿ�����
        //MapConfig mapConfig = GameEntry.Config.mapConfigs.Find(p=>p.Id == mapid);
        //GameData.Instance.curMapConfig = mapConfig;

        //await ResourceComponent.Instance.LoadSceneAsync(mapConfig.Map);
        //Log.Debug("�������  --  ��ʾ������");
        ////��ʾ������
        await ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Game/Scenes/Level1.unity");
        //await GameEntry.UI.Open<UIGame>(UIConfigs.UIGame);
        Remove();
        


        //���ͽ���ؿ����󵽷�����

        //NetManager.Instance.SendIntoLevel(mapid, (msg) =>
        //{
        //    if(msg.Code == StatusCode.Success)
        //    {
        //        Log.Debug("�л��ɹ�");
        //        GameEntry.UI.Close<UIMain>(UIConfigs.UIMain);
        //    }
        //    else
        //    {
        //        GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip,msg.Msg);
        //    }
        //});

    }
}
