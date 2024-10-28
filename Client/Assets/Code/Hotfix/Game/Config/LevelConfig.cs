[System.Serializable]
public class LevelConfig
{
    // 关卡配置id
    public int Id { get; set; }
    // 普通怪ID
    public string Monsters { get; set; }
    // boss的怪物id
    public string BossId { get; set; }
    // 通关条件 
    public int ConditionType { get; set; }
    // 通关值
    public int ConditionValue { get; set; }
}
