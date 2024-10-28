using System;


public static class TimeHelper
{
    /// <summary>
    /// һ����λ���ʱ�� ����
    /// </summary>
    public const long OneDay = 86400000;
    /// <summary>
    /// һ����λСʱ��ʱ�� ����
    /// </summary>
    public const long Hour = 3600000;
    /// <summary>
    /// һ����λ���ӵ�ʱ�� ����
    /// </summary>
    public const long Minute = 60000;
    /// <summary>
    /// һ�ܵ�ʱ��  ����
    /// </summary>
    public const long OneWeek = 604800000;

    /// <summary>
    /// �ͻ��˵�ǰʱ���  ��λ����
    /// </summary>
    /// <returns></returns>
    public static long ClientNow()
    {
        return TimeInfo.Instance.ClientNow();
    }
    /// <summary>
    /// �ͻ��˵�ǰʱ��� ��λ��
    /// </summary>
    /// <returns></returns>
    public static long ClientNowSeconds()
    {
        return ClientNow() / 1000;
    }
    /// <summary>
    /// ��ȡϵͳ��ǰʱ��
    /// </summary>
    /// <returns></returns>
    public static DateTime DateTimeNow()
    {
        return DateTime.Now;
    }
    /// <summary>
    /// ��ȡ������ʱ��� ��λ����
    /// </summary>
    /// <returns></returns>
    public static long ServerNow()
    {
        return TimeInfo.Instance.ServerNow();
    }
    /// <summary>
    /// ������ʱ��� ��λ��
    /// </summary>
    /// <returns></returns>
    public static long ServerNowSeconds()
    {
        return ClientNow() / 1000;
    }
    /// <summary>
    /// ��ʱ���ת��ʱ��  ��λ����
    /// </summary>
    /// <param name="timeStamp"></param>
    /// <returns></returns>
    public static DateTime ToDateTime(long timeStamp)
    {
        return TimeInfo.Instance.ToDateTime(timeStamp);
    }
    /// <summary>
    /// �ͻ���֡ʱ�䣨ÿ֡������£�
    /// </summary>
    /// <returns></returns>
    public static long ClientFrameTime()
    {
        return TimeInfo.Instance.ClientFrameTime();
    }

    /// <summary>
    /// ������֡ʱ�䣨ÿ֡������£�
    /// </summary>
    /// <returns></returns>
    public static long ServerFrameTime()
    {
        return TimeInfo.Instance.ServerFrameTime();
    }

    /// <summary>
    /// ��ȡ����ʱ���
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
    /// ��ȡ����ʱ����������
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
    /// ��ȡ����ʱ������Сʱ
    /// </summary>
    /// <param name="dateStart"></param>
    /// <param name="dateEnd"></param>
    /// <returns></returns>
    public static int DateDiffHours(DateTime dateStart, DateTime dateEnd)
    {
        return DateDiff(dateStart, dateEnd).Hours;
    }

    /// <summary>
    /// ��ȡ��ǰ���ڼ�
    /// </summary>
    /// <returns></returns>
    public static DayOfWeek DataTimeNowDayOfWeek()
    {
        return DateTimeNow().DayOfWeek;
    }

    /// <summary>
    /// ��ȡ����ʱ�䵱ǰ�ܡ�  1��1�� ����1   1��8 ����2 
    /// </summary>
    /// <param name="curTime"></param>
    /// <returns></returns>
    public static int GetTheWeekNum(DateTime curTime)
    {
        // ��ȡ����1��1�յ� ʱ��
        DateTime dateTime = new DateTime(curTime.Year, 1, 1);
        //��ȡ��ǰʱ�� ���һ��� ����
        int dayCount = (int)(DateTime.Now - dateTime).TotalDays;
        //Ŀ�����ھ�������һ�ܵ�һ���������sundayΪ0��mondayΪ1��
        dayCount += Convert.ToInt32(dateTime.DayOfWeek);
        //��ȡ���ڻ������С����
        return (int)Math.Ceiling(dayCount / 7.0);
    }

}

