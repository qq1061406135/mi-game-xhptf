[System.Serializable]
public class DropConfig
{
    // 掉落id
    public int Id { get; set; }
    // 描述
    public string Desc { get; set; }
    // 权重
    public int Rate { get; set; }
    // 分组
    public int Team { get; set; }
    // 掉落类型
    public int Type { get; set; }
    // 掉落道具
    public string Items { get; set; }
    // 额外数据
    public string AddData { get; set; }
}
