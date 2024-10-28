using System;


public static class TimeHelper
{
    /// <summary>
    /// 一个单位天的时间 毫秒
    /// </summary>
    public const long OneDay = 86400000;
    /// <summary>
    /// 一个单位小时的时间 毫秒
    /// </summary>
    public const long Hour = 3600000;
    /// <summary>
    /// 一个单位分钟的时间 毫秒
    /// </summary>
    public const long Minute = 60000;
    /// <summary>
    /// 一周的时间  毫秒
    /// </summary>
    public const long OneWeek = 604800000;

    /// <summary>
    /// 客户端当前时间戳  单位毫秒
    /// </summary>
    /// <returns></returns>
    public static long ClientNow()
    {
        return TimeInfo.Instance.ClientNow();
    }
    /// <summary>
    /// 客户端当前时间戳 单位秒
    /// </summary>
    /// <returns></returns>
    public static long ClientNowSeconds()
    {
        return ClientNow() / 1000;
    }
    /// <summary>
    /// 获取系统当前时间
    /// </summary>
    /// <returns></returns>
    public static DateTime DateTimeNow()
    {
        return DateTime.Now;
    }
    /// <summary>
    /// 获取服务器时间戳 单位毫秒
    /// </summary>
    /// <returns></returns>
    public static long ServerNow()
    {
        return TimeInfo.Instance.ServerNow();
    }
    /// <summary>
    /// 服务器时间戳 单位秒
    /// </summary>
    /// <returns></returns>
    public static long ServerNowSeconds()
    {
        return ClientNow() / 1000;
    }
    /// <summary>
    /// 将时间戳转化时间  单位毫秒
    /// </summary>
    /// <param name="timeStamp"></param>
    /// <returns></returns>
    public static DateTime ToDateTime(long timeStamp)
    {
        return TimeInfo.Instance.ToDateTime(timeStamp);
    }
    /// <summary>
    /// 客户端帧时间（每帧都会更新）
    /// </summary>
    /// <returns></returns>
    public static long ClientFrameTime()
    {
        return TimeInfo.Instance.ClientFrameTime();
    }

    /// <summary>
    /// 服务器帧时间（每帧都会更新）
    /// </summary>
    /// <returns></returns>
    public static long ServerFrameTime()
    {
        return TimeInfo.Instance.ServerFrameTime();
    }

    /// <summary>
    /// 获取两个时间差
    /// </summary>
    /// <param name="dateStart"></param>
    /// <param name="dateEnd"></param>
    /// <returns></returns>
    public static TimeSpan DateDiff(DateTime dateStart, DateTime dateEnd)
    {
        DateTime start = Convert.ToDateTime(dateStart.ToShortDateString());

        DateTime end = Convert.ToDateTime(dateEnd.ToShortDateString());

        TimeSpan sp = end.Subtract(start);
        return sp;
        //return sp.Days;
    }
    /// <summary>
    /// 获取两个时间相差的天数
    /// </summary>
    /// <param name="dateStart"></param>
    /// <param name="dateEnd"></param>
    /// <returns></returns>
    public static int DateDiffDay(DateTime dateStart, DateTime dateEnd)
    {
        return DateDiff(dateStart, dateEnd).Days;
    }

    public static int DateDiffDay(long dateStart, long dateEnd)
    {
        return DateDiffDay(ToDateTime(dateStart), ToDateTime(dateEnd));
    }

    /// <summary>
    /// 获取两个时间相差的小时
    /// </summary>
    /// <param name="dateStart"></param>
    /// <param name="dateEnd"></param>
    /// <returns></returns>
    public static int DateDiffHours(DateTime dateStart, DateTime dateEnd)
    {
        return DateDiff(dateStart, dateEnd).Hours;
    }

    /// <summary>
    /// 获取当前星期几
    /// </summary>
    /// <returns></returns>
    public static DayOfWeek DataTimeNowDayOfWeek()
    {
        return DateTimeNow().DayOfWeek;
    }

    /// <summary>
    /// 获取传入时间当前周。  1月1日 返回1   1月8 返回2 
    /// </summary>
    /// <param name="curTime"></param>
    /// <returns></returns>
    public static int GetTheWeekNum(DateTime curTime)
    {
        // 获取当年1月1日的 时间
        DateTime dateTime = new DateTime(curTime.Year, 1, 1);
        //获取当前时间 与第一天的 天数
        int dayCount = (int)(DateTime.Now - dateTime).TotalDays;
        //目标日期距离该年第一周第一天的天数（sunday为0，monday为1）
        dayCount += Convert.ToInt32(dateTime.DayOfWeek);
        //获取大于或等于最小整数
        return (int)Math.Ceiling(dayCount / 7.0);
    }

}

