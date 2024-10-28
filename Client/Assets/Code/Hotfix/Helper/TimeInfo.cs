using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeInfo 
{
    private static TimeInfo _isntance;
    public static TimeInfo Instance
    {
        get
        {
            if (_isntance == null)
            {
                _isntance = new TimeInfo();
            }
            return _isntance;
        }
    }

    private int timeZone;

    public int TimeZone
    {
        get
        {
            return this.timeZone;
        }
        set
        {
            this.timeZone = value;
            dt = dt1970.AddHours(TimeZone);
        }
    }

    private DateTime dt1970;
    private DateTime dt;

    public long FrameTime;
    public long ServerMinusClientTime { private get; set; }
    public TimeInfo()
    {
        this.dt1970 = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
        this.dt = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
        this.FrameTime = this.ClientNow();
    }

    /// <summary> 
    /// ����ʱ�����ȡʱ�� 
    /// </summary>  
    public DateTime ToDateTime(long timeStamp)
    {
        return dt.AddTicks(timeStamp * 10000);
    }

    // �̰߳�ȫ
    public long ClientNow()
    {
        return (DateTime.UtcNow.Ticks - this.dt1970.Ticks) / 10000;
    }
    /// <summary>
    /// ������ʱ��  ��ǰ�ͻ���ʱ�� + ��������ȥ�ͻ���ʱ��
    /// </summary>
    /// <returns></returns>
    public long ServerNow()
    {
        return ClientNow() + Instance.ServerMinusClientTime;
    }
    public void Update()
    {
        this.FrameTime = this.ClientNow();
    }
    /// <summary>
    /// �ͻ���֡ʱ�䣨ÿ֡������£� ��λ����
    /// </summary>
    /// <returns></returns>
    public long ClientFrameTime()
    {
        return this.FrameTime;
    }

    /// <summary>
    /// ������֡ʱ�䣨ÿ֡������£� ��λ����
    /// </summary>
    /// <returns></returns>
    public long ServerFrameTime()
    {
        return this.FrameTime + Instance.ServerMinusClientTime;
    }

    public long Transition(DateTime d)
    {
        return (d.Ticks - dt.Ticks) / 10000;
    }
}
