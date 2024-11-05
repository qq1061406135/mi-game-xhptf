[System.Serializable]
public class TrapConfig
{
    // 陷阱Id
    public int Id { get; set; }
    // 陷阱类型
    public int Type { get; set; }
    // 陷阱等级
    public int Level { get; set; }
    // 描述
    public string Desc { get; set; }
    // icon图片
    public string icon { get; set; }
    // buff预设
    public string res { get; set; }
    // 攻击力
    public int Atk { get; set; }
    // 攻击技能
    public int Attack { get; set; }
    // 生效值
    public int BuffId { get; set; }
}
