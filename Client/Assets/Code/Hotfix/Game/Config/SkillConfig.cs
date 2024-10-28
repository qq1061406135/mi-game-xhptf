[System.Serializable]
public class SkillConfig
{
    // 技能唯一id
    public int Id { get; set; }
    // 技能名
    public string Name { get; set; }
    // 技能对应职业
    public int PlayerType { get; set; }
    // 对应技能位
    public int Position { get; set; }
    // 是否属于被动技能
    public int IsPassive { get; set; }
    // 描述
    public string Desc { get; set; }
    // 技能预设
    public string Res { get; set; }
}
