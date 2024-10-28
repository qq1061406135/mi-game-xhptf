[System.Serializable]
public class LevelMonsterConfig
{
    // 怪物数据
    public int Id { get; set; }
    // 怪物名字
    public string Name { get; set; }
    // 怪物id
    public int MonsterId { get; set; }
    // 等级
    public int Level { get; set; }
    // 血量
    public int Hp { get; set; }
    // 攻击
    public int Atk { get; set; }
    // 防御
    public int Def { get; set; }
    // 防御率
    public int BloRate { get; set; }
    // 移动速度
    public float MoveSpeed { get; set; }
    // 攻击速度
    public float AttackSpeed { get; set; }
    // 范围
    public string SpawnPointRound { get; set; }
    // 出生点
    public string SpawnPoint { get; set; }
    // 怪物类型
    public int Type { get; set; }
}
