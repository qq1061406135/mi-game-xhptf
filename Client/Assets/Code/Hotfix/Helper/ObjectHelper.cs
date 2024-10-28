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
    /// ����uiλ��  ��ui���� ����Ļ����ת��ΪCanvas�еı�������  
    /// </summary>
    /// <param name="element">��Ҫ���õ�λ��</param>
    /// <param name="mousePosition">ui����</param>
    /// <param name="camera">���</param>
    public static void SetUIElementPosition(RectTransform element, Vector3 mousePosition, Camera camera = null)
    {
        if(camera == null)
        {
            camera = Camera.main;
        }
        // ����Ļ����ת��ΪCanvas�еı�������
        RectTransformUtility.ScreenPointToLocalPointInRectangle(
            element.parent as RectTransform,
            mousePosition,
            camera,
            out Vector2 localPosition
        );

        // ����UIԪ�صı���λ��
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
            s = "�ٶ�";
        }else if(final == NumericType.Hp)
        {
            s = "Ѫ��";
        }else if(final == NumericType.Atk)
        {
            s = "����";
        }
        else if (final == NumericType.Def)
        {
            s = "����";
        }
        else if (final == NumericType.AttackRange)
        {
            s = "������Χ";
        }
        else if (final == NumericType.AttackSpeed)
        {
            s = "�����ٶ�";
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

