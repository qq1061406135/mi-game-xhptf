[System.Serializable]
public class ActivityConfig
{
    // 活动id
    public int Id { get; set; }
    // 活动名
    public string Name { get; set; }
    // 描述
    public string Desc { get; set; }
    // 活动类型
    public int Type { get; set; }
    // 开启条件
    public int OpeningConditionsType { get; set; }
    // 开启条件值
    public int OpeningConditionsValue { get; set; }
    // 开启时间
    public string OpenTime { get; set; }
    // 关闭时间
    public string CloseTime { get; set; }
    // 使用哪个数据库
    public string Database { get; set; }
}
