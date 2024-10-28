[System.Serializable]
public class ItemConfig
{
    // id和其他需要对应上
    public int Id { get; set; }
    // 道具名
    public string Name { get; set; }
    // 图标
    public string Icon { get; set; }
    // 道具类型
    public int Type { get; set; }
    // 最大叠加数量
    public int MaxNum { get; set; }
}
