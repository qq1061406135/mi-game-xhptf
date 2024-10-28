[System.Serializable]
public class MapConfig
{
    // 唯一标识
    public int Id { get; set; }
    // 难度等级
    public int Level { get; set; }
    // 场景名
    public string Name { get; set; }
    // 场景
    public string Map { get; set; }
    // 出生点
    public string SpawnPoint { get; set; }
    // 关卡配置id
    public int LevelId { get; set; }
    // 最大人数
    public int MaxNum { get; set; }
}
