[System.Serializable]
public class SkillBranchLevelConfig
{
    // 唯一id
    public int Id { get; set; }
    // 名字
    public string Name { get; set; }
    // 等级
    public int Level { get; set; }
    // cd冷却时间
    public float CD { get; set; }
    // 技能数量
    public int SkillNum { get; set; }
    // 技能目标数量
    public int SkillTargetNum { get; set; }
    // 技能buff
    public int BuffiId { get; set; }
    // 技能范围 0 不是范围伤害
    public float Range { get; set; }
    // 范围伤害 在范围伤害类型下生效
    public float RangeAtk { get; set; }
    // 是否穿透
    public int IsPierce { get; set; }
    // 穿透伤害
    public float PierceAtk { get; set; }
    // 是否击退
    public int IsRepel { get; set; }
}
