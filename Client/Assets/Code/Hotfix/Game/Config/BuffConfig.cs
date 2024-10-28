[System.Serializable]
public class BuffConfig
{
    // 技能Buff
    public int Id { get; set; }
    // Buff类型
    public int Type { get; set; }
    // 持续时间
    public float ContinuedTime { get; set; }
    // 间隔多久生效一次
    public float Interval { get; set; }
    // 生效值
    public float Value { get; set; }
}
