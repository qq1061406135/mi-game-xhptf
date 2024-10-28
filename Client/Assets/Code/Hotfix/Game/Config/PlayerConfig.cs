[System.Serializable]
public class PlayerConfig
{
    // 角色唯一id
    public int Id { get; set; }
    // 基础预设
    public string Res { get; set; }
    // 职业名
    public string Name { get; set; }
    // 角色类型 
    public int Type { get; set; }
    // 特效
    public string CastRes { get; set; }
    // 攻击类型
    public int AtkType { get; set; }
    // 血量
    public int Hp { get; set; }
    // 攻击
    public int Atk { get; set; }
    // 防御
    public int Def { get; set; }
    // 速度
    public float Speed { get; set; }
    // 攻击范围
    public float AttackRange { get; set; }
    // 默认解锁技能
    public int Skill { get; set; }
    // 属性点
    public string UnlockSkillPoints { get; set; }
}
