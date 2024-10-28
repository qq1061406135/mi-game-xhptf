using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ObjectHelper
{

    public static void SetTopSiblingIndex(this Transform self)
    {
        self.SetSiblingIndex(self.childCount);
    }

    /// <summary>
    /// 设置ui位置  将ui坐标 将屏幕坐标转换为Canvas中的本地坐标  
    /// </summary>
    /// <param name="element">需要设置的位置</param>
    /// <param name="mousePosition">ui坐标</param>
    /// <param name="camera">相机</param>
    public static void SetUIElementPosition(RectTransform element, Vector3 mousePosition, Camera camera = null)
    {
        if(camera == null)
        {
            camera = Camera.main;
        }
        // 将屏幕坐标转换为Canvas中的本地坐标
        RectTransformUtility.ScreenPointToLocalPointInRectangle(
            element.parent as RectTransform,
            mousePosition,
            camera,
            out Vector2 localPosition
        );

        // 设置UI元素的本地位置
        element.localPosition = localPosition;
    }

    public static void SetUIPosition(this RectTransform self,Vector3 uiPos,Camera camera = null)
    {
        SetUIElementPosition(self,uiPos,camera);
    }


    public static string AttributeTypeToStr(this int self)
    {
        string s = "";
        int final = (int)self / 10;
        if(self < NumericType.Max)
        {
            final = self;
        }

        int bas = final * 10 + 1;

        if(self == bas)
        {
            return s;
        }
        if (final == NumericType.Speed )
        {
            s = "速度";
        }else if(final == NumericType.Hp)
        {
            s = "血量";
        }else if(final == NumericType.Atk)
        {
            s = "攻击";
        }
        else if (final == NumericType.Def)
        {
            s = "防御";
        }
        else if (final == NumericType.AttackRange)
        {
            s = "攻击范围";
        }
        else if (final == NumericType.AttackSpeed)
        {
            s = "攻击速度";
        }

        int add = final * 10 + 2;
        int pct = final * 10 + 3;
        int finalAdd = final * 10 + 4;
        int finalPct = final * 10 + 5;


        return s;
    }

    public static string AttributeValueToStr(this int self,long value)
    {
        int final = (int)self / 10;
        if (self < NumericType.Max)
        {
            final = self;
        }

        float str = value;
        if(final.IsFloat())
        {
            str = value / 10000f;
        }

        return str.ToString();
    }

    public static bool IsFloat(this int self)
    {
        return self == NumericType.Speed || self == NumericType.AttackRange;
    }
}

