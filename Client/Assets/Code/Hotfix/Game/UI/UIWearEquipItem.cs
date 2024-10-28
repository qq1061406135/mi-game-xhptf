using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIWearEquipItem : MonoBehaviour
{
    public TextMeshProUGUI numTxt;

    public Image iconImg;

    UnitEquipData equipData;

    public EquipPosition position;
    private void Start()
    {
        updateItem();
        NetManager.Instance.syncEquips += updateItem;
    }

    public void OnDestroy()
    {
        NetManager.Instance.syncEquips -= updateItem;
    }

    public void updateItem()
    {
        //获取对应装备位是否存在以穿戴的装备
        equipData = GameData.Instance.userData.equipDatas.Find(p => p.Position == (int)position);
        if (equipData != null)
        {

            ItemConfig itemConfig = ConfigComponent.Instance.itemConfigs.Find(p => p.Id == equipData.ConfigId);
            ResourceComponent.Instance.LoadSprite(iconImg, itemConfig.Icon);
            if (itemConfig != null)
            {
                this.numTxt.text = itemConfig.Name;
            }
        }
        else
        {
            this.numTxt.text = "";
        }
    }

    public void onClick()
    {
        if(equipData != null)
        {
            GameEntry.UI.Open<UIItemInfo>(UIConfigs.UIItemInfo, equipData);
        }
        else
        {
            GameEntry.UI.Open<UIComTip>(UIConfigs.UIComTip, "当前未穿戴装备");
        }
    }
}
