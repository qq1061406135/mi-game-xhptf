using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIEquipItem : MonoBehaviour
{
    public TextMeshProUGUI numTxt;
    public Image iconImg;

    UnitPackageItemData itemData;


    public void updateItem(UnitPackageItemData itemData)
    {
        this.numTxt.text = itemData.Num.ToString();
        this.itemData = itemData;

        ItemConfig itemConfig = ConfigComponent.Instance.itemConfigs.Find(p => p.Id == itemData.ConfigId);
        ResourceComponent.Instance.LoadSprite(iconImg, itemConfig.Icon);
    }

    public void onClick()
    {
        GameEntry.UI.Open<UIItemInfo>(UIConfigs.UIItemInfo, itemData);
    }

    public void Remove()
    {
        GameObject.Destroy(this.gameObject);
    }
}
