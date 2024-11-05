[System.Serializable]
public class MonsterConfig
{
    // 波次
    public int Id { get; set; }
    // 基础预设
    public string Res { get; set; }
    // 名字
    public string Name { get; set; }
    // 怪物类型
    public int Type { get; set; }
    // 数量
    public int Num { get; set; }
    // 生命
    public float Hp { get; set; }
    // 防御
    public float Def { get; set; }
    // 魔法防御
    public float MDef { get; set; }
    // 速度
    public float Speed { get; set; }
}
