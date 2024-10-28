[System.Serializable]
public class EquipConfig
{
    // 装备唯一id
    public int Id { get; set; }
    // 基础预设
    public string SpineRes { get; set; }
    // 图标
    public string Icon { get; set; }
    // 装备名
    public string Name { get; set; }
    // 部位
    public int Position { get; set; }
    // 攻击
    public int Atk { get; set; }
    // 防御
    public int Def { get; set; }
    // 血量
    public int Hp { get; set; }
    // 速度
    public float Speed { get; set; }
    // 攻击速度（时间）
    public float AttackSpeed { get; set; }
    // 攻击范围
    public int AttackRange { get; set; }
}
