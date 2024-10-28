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
        //检测
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
                        GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip, "未查找到活动配置表");
                    }
                }
                else
                {
                    GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip, "活动已经结束");
                }
            }
            else
            {
                GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip, "活动尚未开始");
            }
        }
        else
        {
            GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip, "活动未开启");
        }
    }

    public void OpenActivityView()
    {
        if (activityData.ConfigId == 2001)
        {
            GameEntry.UI.Open<UISignIn7>(UIConfigs.UISignIn7,activityData);
        }
    }

    //检测是否在活动时间内
}
