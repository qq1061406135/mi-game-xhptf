using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum ItemType
{
    Equip = 10,
}

public enum EquipPosition
{
    Weapon = 1,
    /**
     * 衣服
     */
    Clothe,
    /**
     * 裤子
     */
    Trouser,
    /**
     * 鞋子
     */
    Shoe,
    /**
     * 护手
     */
    Hand,
    /**
     * 项链
     */
    Necklace,
    /**
     * 戒指
     */
    Ring
}


public enum LevelConditionType
{
    /// <summary>
    /// 击杀怪物百分比
    /// </summary>
    KillMonsterPercent = 1
}

public delegate void SyncUnitPackageItemRemoveEvent(string uid);
public delegate void SyncUnitPackageItemAddEvent(UnitPackageItemData itemData);
public delegate void SyncUnitPackageItemUpdateEvent(UnitPackageItemData itemData);
