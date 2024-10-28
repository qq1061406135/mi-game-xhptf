using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public static class NumericType
{
    public const int Max = 10000;

    public const int Coin = 100;

    public const int Speed = 1000;
    public const int SpeedBase = Speed * 10 + 1;
    public const int SpeedAdd = Speed * 10 + 2;
    public const int SpeedPct = Speed * 10 + 3;
    public const int SpeedFinalAdd = Speed * 10 + 4;
    public const int SpeedFinalPct = Speed * 10 + 5;

    public const int Hp = 1001;
    public const int HpBase = Hp * 10 + 1;

    public const int MaxHp = 1002;
    public const int MaxHpBase = MaxHp * 10 + 1;
    public const int MaxHpAdd = MaxHp * 10 + 2;
    public const int MaxHpPct = MaxHp * 10 + 3;
    public const int MaxHpFinalAdd = MaxHp * 10 + 4;
    public const int MaxHpFinalPct = MaxHp * 10 + 5;

    public const int Atk = 1003;
    public const int AtkBase = Atk * 10 + 1;
    public const int AtkAdd = Atk * 10 + 2;
    public const int AtkPct = Atk * 10 + 3;
    public const int AtkFinalAdd = Atk * 10 + 4;
    public const int AtkFinalPct = Atk * 10 + 5;

    public const int Def = 1004;
    public const int DefBase = Def * 10 + 1;
    public const int DefAdd = Def * 10 + 2;
    public const int DefPct = Def * 10 + 3;
    public const int DefFinalAdd = Def * 10 + 4;
    public const int DefFinalPct = Def * 10 + 5;

    public const int AttackRange = 1005;
    public const int AttackRangeBase = AttackRange * 10 + 1;
    public const int AttackRangeAdd = AttackRange * 10 + 2;
    public const int AttackRangePct = AttackRange * 10 + 3;
    public const int AttackRangeFinalAdd = AttackRange * 10 + 4;
    public const int AttackRangeFinalPct = AttackRange * 10 + 5;


    public const int AttackSpeed = 1006;
    public const int AttackSpeedBase = AttackSpeed * 10 + 1;
    public const int AttackSpeedAdd = AttackSpeed * 10 + 2;
    public const int AttackSpeedPct = AttackSpeed * 10 + 3;
    public const int AttackSpeedFinalAdd = AttackSpeed * 10 + 4;
    public const int AttackSpeedFinalPct = AttackSpeed * 10 + 5;

    public const int BuffId = 1008;

}

public class Numeric
{
    public Dictionary<int, long> NumericDic = new Dictionary<int, long>();
    public long this[int numericType]
    {
        get
        {
            return this.GetByKey(numericType);
        }
        set
        {
            this.Insert(numericType, value);
        }
    }

    public float GetAsFloat(int numericType)
    {
        return (float)GetByKey(numericType) / 10000;
    }

    public int GetAsInt(int numericType)
    {
        return (int)GetByKey(numericType);
    }

    public long GetAsLong(int numericType)
    {
        return GetByKey(numericType);
    }

    public void Set(int nt, float value)
    {
        this[nt] = (long)(value * 10000);
    }

    public void Set(int nt, int value)
    {
        this[nt] = value;
    }

    public void Set(int nt, long value)
    {
        this[nt] = value;
    }

    public void SetNoEvent(int numericType, long value)
    {
        Insert(numericType, value, false);
    }

    public void Insert(int numericType, long value, bool isPublicEvent = true)
    {
        long oldValue = GetByKey(numericType);
        if (oldValue == value)
        {
            return;
        }

        NumericDic[numericType] = value;

        if (numericType >= NumericType.Max)
        {
            Update(numericType, isPublicEvent);
            return;
        }

    }

    public long GetByKey(int key)
    {
        long value = 0;
        NumericDic.TryGetValue(key, out value);
        return value;
    }

    public void Update(int numericType, bool isPublicEvent)
    {
        int final = (int)numericType / 10;
        int bas = final * 10 + 1;
        int add = final * 10 + 2;
        int pct = final * 10 + 3;
        int finalAdd = final * 10 + 4;
        int finalPct = final * 10 + 5;

        // 一个数值可能会多种情况影响，比如速度,加个buff可能增加速度绝对值100，也有些buff增加10%速度，所以一个值可以由5个值进行控制其最终结果
        // final = (((base + add) * (100 + pct) / 100) + finalAdd) * (100 + finalPct) / 100;
        long result = (long)(((GetByKey(bas) + GetByKey(add)) * (100 + GetAsFloat(pct)) / 100f + GetByKey(finalAdd)) *
            (100 + GetAsFloat(finalPct)) / 100f);
        Insert(final, result, isPublicEvent);
    }
}
