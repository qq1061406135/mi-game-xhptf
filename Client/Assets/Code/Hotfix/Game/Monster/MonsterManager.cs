using Google.Protobuf.Collections;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UIElements;

public class MonsterManager
{
    private static MonsterManager _instance;
    public static MonsterManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = new MonsterManager();
            }
            return _instance;
        }
    }

    public List<Monster> monsters = new List<Monster>();
    public int maxMonsterCount = 0;

    public async Task initMonster(RepeatedField<MonsterData> monsterDatas)
    {
        Log.Debug("初始化怪物   " + monsterDatas.Count);
        for (int i = 0; i < monsterDatas.Count; i++)
        {
            MonsterData monsterData = monsterDatas[i];
            //查询怪物配置
            LevelMonsterConfig levelMonsterConfig = ConfigComponent.Instance.levelMonsterConfigs.Find(p => p.Id == monsterData.ConfigId);
            if (levelMonsterConfig != null)
            {
                MonsterConfig monsterConfig = ConfigComponent.Instance.monsterConfigs.Find(p => p.Id == levelMonsterConfig.MonsterId);
                GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(monsterConfig.Res);
                if (fab != null)
                {
                    GameObject obj = GameObject.Instantiate(fab);
                    obj.name = monsterData.Name + monsterData.Uid;
                    Monster monster = obj.GetComponent<Monster>();
                    monster.SetMonsterConfig(levelMonsterConfig, monsterConfig, monsterData);
                    this.monsters.Add(monster);
                }
                else
                {
                    Log.Debug("未查找到怪物预设---- " + monsterConfig.Res);
                }
            }
            else
            {
                Log.Debug("未查找到怪物---" + monsterData.ConfigId);
            }
        }

        maxMonsterCount = monsters.Count;
    }

    public void killMonster(Monster monster)
    {
        for (int i = 0;i < monsters.Count;i++)
        {
            if (monsters[i].name == monster.name)
            {
                monsters.RemoveAt(i);
                break;
            }
        }
        //monsters.Remove(monster);
        Log.Debug("击杀怪物 "+ monster.name+ "---------------- 剩余怪物：" + monsters.Count);


        //获取当前关卡类型
        LevelConfig levelConfig = ConfigComponent.Instance.levelConfigs.Find(p => p.Id == GameData.Instance.curMapConfig.LevelId);
        if (levelConfig != null)
        {
            if (levelConfig.ConditionType == (int)LevelConditionType.KillMonsterPercent)
            {
                //Log.Debug("击杀怪物----------------   " + ((1 - monsters.Count / (float)maxMonsterCount) * 100) + "  levelConfig.ConditionValue=" + levelConfig.ConditionValue);

                if ((1 - monsters.Count / (float)maxMonsterCount) * 100 >= levelConfig.ConditionValue)
                {
                    Log.Debug("关卡进度已经达到------------执行boss环节");
                }
            }
        }
        else
        {
            Log.Debug("未查找到关卡  " + levelConfig.Id);
        }
    }

    public List<Monster> getRangeTargetMonsters(Vector2 pos, float range)
    {
        List<Monster> result = new List<Monster>();
        for (int i = 0; i < monsters.Count; i++)
        {
            if (range >= Vector2.Distance(pos, monsters[i].transform.position))
            {
                result.Add(monsters[i]);
            }
        }
        // 按距离排序
        result.Sort((a, b) => Vector2.Distance(pos, a.transform.position).CompareTo(Vector2.Distance(pos, b.transform.position)));
        return result;

        //// 按距离排序
        //result.Sort((a, b) => Vector3.Distance(pos, a.transform.position).CompareTo(Vector3.Distance(pos, b.transform.position)));
        //return result;


        //detectionLayerMask = (1 << LayerMask.NameToLayer("Enemy")) | (1 << LayerMask.NameToLayer("Ob"));
        // 过滤出敌人


        //List<Collider2D> enemies = new List<Collider2D>();
        //Collider2D[] collider2Ds = Physics2D.OverlapCircleAll(pos, range, LayerMask.NameToLayer("Enemy"));
        //enemies.AddRange(collider2Ds);
        //// 按照距离排序
        //enemies = enemies.OrderBy(collider => Vector2.Distance(pos, collider.transform.position)).ToList();
        //return enemies;

        //// 在指定半径内检测所有碰撞体
        //Collider2D[] hitColliders = Physics2D.OverlapCircleAll(pos, range,LayerMask.GetMask("Enemy"));

        //// 创建一个列表存储检测到的物体及其距离
        //List<KeyValuePair<Collider2D, float>> detectedObjects = new List<KeyValuePair<Collider2D, float>>();

        //foreach (var hitCollider in hitColliders)
        //{
        //    // 计算每个物体到中心点的距离
        //    float distance = Vector2.Distance(pos, hitCollider.transform.position);
        //    detectedObjects.Add(new KeyValuePair<Collider2D, float>(hitCollider, distance));
        //}

        //// 按距离排序
        //detectedObjects.Sort((x, y) => x.Value.CompareTo(y.Value));

        //// 输出检测到的最近物体列表
        //foreach (var detectedObject in detectedObjects)
        //{
        //    Debug.Log($"Object: {detectedObject.Key.name}, Distance: {detectedObject.Value}");
        //}

        //return detectedObjects;
    }
}
