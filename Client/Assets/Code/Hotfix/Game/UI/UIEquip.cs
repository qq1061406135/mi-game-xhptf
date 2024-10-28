using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIEquip : UILayerBase
{
    public Transform content;

    public GameObject itemFab;

    public Dictionary<string,UIEquipItem> items = new Dictionary<string, UIEquipItem>();

    // Start is called before the first frame update
    void Start()
    {
        //获取背包数量
        for(int i = 0; i < GameData.Instance.userData.itemDatas.Count; i++)
        {
            updateItem(GameData.Instance.userData.itemDatas[i]);
        }

        GameData.Instance.syncUnitPackageItemRemoveEvent += OnSyncUnitPackageItemRemoveEventHandler;
        GameData.Instance.syncUnitPackageItemAddEvent += OnSyncUnitPackageItemAddEventHandler;
        GameData.Instance.syncUnitPackageItemUpdateEvent += OnSyncUnitPackageItemUpdateEventHandler;
    }

    private void updateItem(UnitPackageItemData itemData)
    {
        var obj = GameObject.Instantiate(itemFab, content);
        UIEquipItem item = obj.GetComponent<UIEquipItem>();//
        item.updateItem(itemData);
        items.Add(itemData.Uid, item);
    }

    private void OnSyncUnitPackageItemAddEventHandler(UnitPackageItemData itemData)
    {
        updateItem(itemData);
    }
    private void OnSyncUnitPackageItemUpdateEventHandler(UnitPackageItemData itemData)
    {
        items.TryGetValue(itemData.Uid, out UIEquipItem item);
        if (item != null)
        {
            item.updateItem(itemData);
        }
    }
    private void OnSyncUnitPackageItemRemoveEventHandler(string uid)
    {
        items.TryGetValue(uid, out UIEquipItem item);
        if (item != null)
        {
            item.Remove();
            items.Remove(uid);
        }
    }
}
