using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIItemInfo : UILayerBase
{
    public TextMeshProUGUI nameTxt;
    public TextMeshProUGUI descTxt;

    public GameObject btnWear;
    public GameObject btnUnWear;


    public override bool Show(object param = null)
    {
        base.Show(param);
        if(param is UnitPackageItemData itemData)
        {
            updateItemInfo(itemData);
        }else if(param is UnitEquipData unitEquip)
        {
            updateWearEquipInfo(unitEquip);
        }

        return true;
    }
    public void updateItemInfo(UnitPackageItemData itemData)
    {
        ItemConfig itemConfig = ConfigComponent.Instance.itemConfigs.Find(p => p.Id == itemData.ConfigId);
        if (itemConfig != null)
        {
            this.nameTxt.text = itemConfig.Name;
            descTxt.text = itemData.Uid;
            if (itemConfig.Type == (int)ItemType.Equip)
            {
                //��ѯ��������
                UnitEquipData equipData = GameData.Instance.userData.equipDatas.Find(p=>p.Uid == itemData.Uid);
                if(equipData != null)
                {
                    //��ȡ��Ӧװ��λ�Ƿ�����Դ�����װ��
                    UnitEquipData wearEquipData = GameData.Instance.userData.equipDatas.Find(p=>p.Position == equipData.Position && p.Position!=0);

                    btnWear.SetActive(wearEquipData == null || wearEquipData.Uid != wearEquipData.Uid);
                    btnUnWear.SetActive(wearEquipData != null && wearEquipData.Uid == equipData.Uid);
                    btnWear.GetComponent<Button>().onClick.AddListener(() =>
                    {
                        Log.Debug("------------------����");
                        NetManager.Instance.SendWearEquip(equipData.Uid,true, OnWearHandler);
                    });

                    btnUnWear.GetComponent<Button>().onClick.AddListener(() =>
                    {
                        Log.Debug("------------------ж��");
                        NetManager.Instance.SendWearEquip(equipData.Uid, false, OnUnWearClick);
                    });
                }
                else
                {
                    btnUnWear.SetActive(false);
                    btnWear.SetActive(false);
                }
            }
            else
            {
                btnUnWear.SetActive(false);
                btnWear.SetActive(false);
            }
        }
        else
        {
            btnUnWear.SetActive(false);
            btnWear.SetActive(false);
        }
    }

    public void updateWearEquipInfo(UnitEquipData unitEquip)
    {
        //��ȡ��������----------
        ItemConfig itemConfig = ConfigComponent.Instance.itemConfigs.Find(p=>p.Id== unitEquip.ConfigId);
        if (itemConfig != null)
        {
            this.nameTxt.text = itemConfig.Name;
            descTxt.text = unitEquip.Uid;

            btnWear.SetActive(false);
            btnUnWear.SetActive(true);
            btnUnWear.GetComponent<Button>().onClick.AddListener(() =>
            {
                Log.Debug("------------------ж��");
                NetManager.Instance.SendWearEquip(unitEquip.Uid, false, OnUnWearClick);
            });
        }
        else
        {
            Log.Debug("δ���ҵ�װ������ " + unitEquip.ConfigId);
        }

    }


    public void OnWearHandler(S2C_WearEquipResponse response)
    {
        Remove();
    }

    public void OnUnWearClick(S2C_WearEquipResponse response)
    {
        Remove();
    }

}
