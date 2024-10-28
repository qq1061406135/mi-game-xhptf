[System.Serializable]
public class HeroBuffConfig
{
    // 技能Buff
    public int Id { get; set; }
    // Buff类型
    public int Type { get; set; }
    // 描述
    public string Desc { get; set; }
    // buff预设
    public string res { get; set; }
    // 持续时间
    public float ContinuedTime { get; set; }
    // 间隔多久生效一次
    public float Interval { get; set; }
    // 生效值
    public float Value { get; set; }
}
