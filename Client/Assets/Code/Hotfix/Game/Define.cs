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
     * �·�
     */
    Clothe,
    /**
     * ����
     */
    Trouser,
    /**
     * Ь��
     */
    Shoe,
    /**
     * ����
     */
    Hand,
    /**
     * ����
     */
    Necklace,
    /**
     * ��ָ
     */
    Ring
}


public enum LevelConditionType
{
    /// <summary>
    /// ��ɱ����ٷֱ�
    /// </summary>
    KillMonsterPercent = 1
}

public delegate void SyncUnitPackageItemRemoveEvent(string uid);
public delegate void SyncUnitPackageItemAddEvent(UnitPackageItemData itemData);
public delegate void SyncUnitPackageItemUpdateEvent(UnitPackageItemData itemData);
