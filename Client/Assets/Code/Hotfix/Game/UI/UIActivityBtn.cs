using Google.Protobuf.WellKnownTypes;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIActivityBtn : MonoBehaviour
{
    public int activityId;
    public ActivityData activityData;
    private void Start()
    {
        //���
        ActivityData activityData = GameData.Instance.activityDatas.Find(p => p.ConfigId == activityId);
        this.activityData = activityData;
        if (activityData != null)
        {

        }
        else
        {
            gameObject.SetActive(false);
        }
    }

    public void OnClick()
    {
        if (activityData != null)
        {
            DateTime openTime = TimeInfo.Instance.ToDateTime(long.Parse(activityData.OpenTime));
            DateTime curTime = TimeHelper.DateTimeNow();
            if (curTime >= openTime)
            {
                DateTime endTIme = TimeInfo.Instance.ToDateTime(long.Parse(activityData.CloseTime));
                if (curTime <= endTIme)
                {
                    ActivityConfig config = ConfigComponent.Instance.activityConfigs.Find(p=>p.Id == activityId);
                    if(config != null)
                    {
                        OpenActivityView();
                    }
                    else
                    {
                        GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip, "δ���ҵ�����ñ�");
                    }
                }
                else
                {
                    GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip, "��Ѿ�����");
                }
            }
            else
            {
                GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip, "���δ��ʼ");
            }
        }
        else
        {
            GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip, "�δ����");
        }
    }

    public void OpenActivityView()
    {
        if (activityData.ConfigId == 2001)
        {
            GameEntry.UI.Open<UISignIn7>(UIConfigs.UISignIn7,activityData);
        }
    }

    //����Ƿ��ڻʱ����
}
