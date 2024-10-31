[System.Serializable]
public class HeroConfig
{
    // 角色唯一id
    public int Id { get; set; }
    // 基础预设
    public string Res { get; set; }
    // 名字
    public string Name { get; set; }
    // 角色品质
    public int Type { get; set; }
    // 攻击类型
    public int AtkType { get; set; }
    // 攻击
    public int Atk { get; set; }
    // 速度
    public float Speed { get; set; }
    // 普攻技能
    public int Attack { get; set; }
    // 主动技能
    public int Skill { get; set; }
    // 合成
    public string Merge { get; set; }
}
