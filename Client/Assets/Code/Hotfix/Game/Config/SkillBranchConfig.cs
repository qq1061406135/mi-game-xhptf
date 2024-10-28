[System.Serializable]
public class SkillBranchConfig
{
    // 技能效果 对应技能id 个位技能等级
    public int Id { get; set; }
    // 分支名
    public string Name { get; set; }
    // 当前分支深度
    public int BranchDepth { get; set; }
    // 分支下一个阶段可以学习的技能效果id
    public string Branch { get; set; }
    // 最大等级
    public int MaxLevel { get; set; }
    // 技能速度 0 直接在目标上方释放 其他值为移动速度
    public float Speed { get; set; }
}
