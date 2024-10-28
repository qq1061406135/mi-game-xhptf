using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class UIComTip : UILayerBase
{
    public TextMeshProUGUI tipTxt;

    public Transform content;

    public override bool Show(object param = null)
    {
        tipTxt.text = param.ToString();

        StartCoroutine(DoMove());
        return base.Show(param);
    }

    // 定义一个协程
    IEnumerator DoMove()
    {
        Debug.Log("Coroutine started!");

        float dt = 0;
        float time = Time.time;
        while (true)
        {
            dt += Time.deltaTime;
            content.Translate(new Vector3(0, Time.deltaTime * 1, 0));
            // 等待 2 秒
            yield return new WaitForSeconds(Time.deltaTime);
            if (dt > 1)
            {
                break;
            }
        }

        Remove();
        Debug.Log("2 seconds have passed!");
    }
}
