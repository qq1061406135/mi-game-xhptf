using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameData
{
    private static GameData _isntance;
    public static GameData Instance
    {
        get
        {
            if (_isntance == null)
            {
                _isntance = new GameData();
            }
            return _isntance;
        }
    }

    public string host = "http://192.168.3.21:3001/";
    public string account;


    /// <summary>
    /// 用户数据
    /// </summary>
    public UserData userData;


    public SceneData curSceneData;

    /// <summary>
    /// 当前进入的地图id
    /// </summary>
    public MapConfig curMapConfig;


    public event SyncUnitPackageItemRemoveEvent syncUnitPackageItemRemoveEvent;
    public event SyncUnitPackageItemAddEvent syncUnitPackageItemAddEvent;
    public event SyncUnitPackageItemUpdateEvent syncUnitPackageItemUpdateEvent;

    public List<ActivityData> activityDatas= new List<ActivityData>();

    public void SyncUnitPackageItemRemoveEvent(string uid)
    {
        syncUnitPackageItemRemoveEvent?.Invoke(uid);
    }

    public void SyncUnitPackageItemAddEvent(UnitPackageItemData itemData)
    {
        syncUnitPackageItemAddEvent?.Invoke(itemData);
    }
    public void SyncUnitPackageItemUpdateEvent(UnitPackageItemData itemData)
    {
        syncUnitPackageItemUpdateEvent?.Invoke(itemData);
    }

    /// <summary>
    /// 是否处于主场景
    /// </summary>
    /// <returns></returns>
    public bool IsMainScene()
    {
        return curSceneData.Uid == 1;
    }
}
