using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class UIRoleInfo : UILayerBase
{

    public Transform content;

    public GameObject itemFab;

    public override bool Show(object param = null)
    {
        base.Show(param);

        Numeric numeric = (Numeric)param;
        foreach (var item in numeric.NumericDic)
        {
            string attribute = item.Key.AttributeTypeToStr();
            if (attribute != "")
            {
                GameObject child = Instantiate(itemFab, content);
                child.transform.Find("attributeTxt").GetComponent<TextMeshProUGUI>().text = attribute;
                child.transform.Find("valueTxt").GetComponent<TextMeshProUGUI>().text = item.Key.AttributeValueToStr(item.Value);
            }
        }

        return true;
    }

}
