[System.Serializable]
public class HeroSkillConfig
{
    // 技能唯一id
    public int Id { get; set; }
    // 技能名
    public string Name { get; set; }
    // 技能类型
    public int SkillType { get; set; }
    // 描述
    public string Desc { get; set; }
    // 技能预设
    public string Res { get; set; }
    // 范围
    public float Range { get; set; }
    // 数量
    public int Num { get; set; }
    // 冷却
    public float Cd { get; set; }
    // 伤害倍率
    public float Hurt { get; set; }
    // buff索引
    public int BuffId { get; set; }
}
