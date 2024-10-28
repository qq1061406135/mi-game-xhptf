using Google.Protobuf.Collections;
using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserData
{
    public int maxMapId = 10001;
    public string playerId;
    public int level;
    public string playerName;
    public int money;
    public int exp;
    public int sex;
    public int configId;
    public string createTime;
    public int type;


    public Dictionary<int, long> numericDic = new Dictionary<int, long>();

    public List<UnitSkillData> skillDatas = new List<UnitSkillData>();
    public List<UnitSkillPositionData> skillPositionDatas = new List<UnitSkillPositionData>();

    public List<UnitEquipData> equipDatas = new List<UnitEquipData>();
    public List<UnitPackageItemData> itemDatas = new List<UnitPackageItemData>();

    public int attributePoint;
    public int uAttributePoint;

    

    public void serialize(UnitData unitData)
    {
        playerId = unitData.PlayerId;
        level = unitData.Level;
        money = unitData.Money;
        exp = unitData.Exp;
        sex = unitData.Sex;
        configId = unitData.ConfigId;
        createTime = unitData.CreateTime;
        type = unitData.Type;
    }

    public void deserialize()
    {

    }

    public void serialize(RepeatedField<UnitAttributeData> attributeDatas,int attributePoint,int uAttributePoint)
    {
        numericDic.Clear();
        for (int i = 0; i < attributeDatas.Count; i++)
        {
            numericDic.Add(attributeDatas[i].Type, attributeDatas[i].Value);
        }
        this.attributePoint = attributePoint;
        this.uAttributePoint = uAttributePoint;
    }

    public void serialize(RepeatedField<UnitSkillData> skillDatas, RepeatedField<UnitSkillPositionData> positionDatas)
    {
        this.skillDatas.Clear();
        skillPositionDatas.Clear();
        for (int i = 0; i < skillDatas.Count; i++)
        {
            this.skillDatas.Add(skillDatas[i]);
        }
        for (int i = 0; i < positionDatas.Count; i++)
        {
            this.skillPositionDatas.Add(positionDatas[i]);
        }
    }

    public void serialize(RepeatedField<UnitEquipData> equipDatas)
    {
        //this.equipDatas.Clear();
        ////同步装备数据--
        //this.equipDatas.AddRange(equipDatas);

        for(int i = 0;i < equipDatas.Count; i++)
        {
            UnitEquipData equipData = this.equipDatas.Find(p=>p.Uid == equipDatas[i].Uid);
            if (equipData != null)
            {
                this.equipDatas.Remove(equipData);
            }
            this.equipDatas.Add(equipDatas[i]);
        }
    }

    public void serialize(RepeatedField<UnitPackageItemData> itemDatas)
    {
        for(int i =0; i < itemDatas.Count;i++)
        {
            UnitPackageItemData itemData = itemDatas[i];
            if(itemData.Num == 0)
            {
                Log.Debug("移除道具" + itemData.Uid + " ConfigId=" + itemData.ConfigId);
                int index = this.itemDatas.FindIndex(p=>p.Uid == itemData.Uid);
                if (index != -1)
                {
                    this.itemDatas.RemoveAt(index);
                }

               GameData.Instance.SyncUnitPackageItemRemoveEvent(itemData.Uid);
            }
            else
            {
                UnitPackageItemData unitPackageItem = this.itemDatas.Find(p=>p.Uid ==itemData.Uid);
                if(unitPackageItem != null)
                {
                    Log.Debug("同步道具 " + itemData.Uid + " ConfigId=" + itemData.ConfigId + " Num="+itemData.Num);
                    unitPackageItem.Num = itemData.Num;
                    GameData.Instance.SyncUnitPackageItemUpdateEvent(itemData);
                }
                else
                {
                    Log.Debug("添加道具 " + itemData.Uid + " ConfigId=" + itemData.ConfigId + " Num="+itemData.Num);
                    GameData.Instance.SyncUnitPackageItemAddEvent(itemData);
                    this.itemDatas.Add(itemData);
                }
            }
        }
    }
}
