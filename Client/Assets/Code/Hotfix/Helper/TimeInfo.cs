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
    /// 根据时间戳获取时间 
    /// </summary>  
    public DateTime ToDateTime(long timeStamp)
    {
        return dt.AddTicks(timeStamp * 10000);
    }

    // 线程安全
    public long ClientNow()
    {
        return (DateTime.UtcNow.Ticks - this.dt1970.Ticks) / 10000;
    }
    /// <summary>
    /// 服务器时间  当前客户端时间 + 服务器减去客户端时间
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
    /// 客户端帧时间（每帧都会更新） 单位毫秒
    /// </summary>
    /// <returns></returns>
    public long ClientFrameTime()
    {
        return this.FrameTime;
    }

    /// <summary>
    /// 服务器帧时间（每帧都会更新） 单位毫秒
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
