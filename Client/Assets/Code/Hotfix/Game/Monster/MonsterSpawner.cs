using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class MonsterSpawner : MonoBehaviour
{
    public GameObject enemyPrefab; // 怪物预制体
    public Transform spawnPoint; // 生成点
    public float spawnInterval = 0.5f; // 生成间隔

    public Transform[] waypoints; // 路径点数组

    public GameObject trapNode;//陷阱点位置

    public GameObject timeNode;
    public TextMeshPro nameTxt;

    private List<Monster> monsters;

    private void Start()
    {
        monsters = new List<Monster>();
    }

    public void start(MonsterConfig config, float time)
    {
        StartCoroutine(CountDown(config, time));
        LoadEnemyPrefab(config);
    }

    public async void LoadEnemyPrefab(MonsterConfig config)
    {
        GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(config.Res);
        if(fab != null)
        {
            enemyPrefab = fab;
        }
    }

    /// <summary>
    /// 波次倒计时
    /// </summary>
    /// <param name="num"></param>
    /// <returns></returns>
    public IEnumerator CountDown(MonsterConfig config, float time)
    {
        timeNode.SetActive(true);
        nameTxt.text = "3";
        yield return new WaitForSeconds(1f); // 等待指定的时间
        nameTxt.text = "2";
        yield return new WaitForSeconds(1f); // 等待指定的时间
        nameTxt.text = "1";
        yield return new WaitForSeconds(1f); // 等待指定的时间
        timeNode.SetActive(false);

        StopCoroutine(CountDown(config, time));
        CreateMonster(config);
        StartCoroutine(BattleCountDown(time));
    }

    /// <summary>
    /// 当前波次倒计时
    /// </summary>
    /// <param name="time">当前波次等待时间</param>
    /// <returns></returns>
    public IEnumerator BattleCountDown(float time)
    {
        yield return new WaitForSeconds(time); // 等待指定的时间
        StopCoroutine(BattleCountDown(time));
        GameController.instance.endQueue();
    }
    /// <summary>
    /// 开始创建怪物
    /// </summary>
    /// <param name="num">怪物数量</param>
    public void CreateMonster(MonsterConfig config)
    {
        StartCoroutine(SpawnEnemies(config));
    }

    /// <summary>
    /// 等待指定时间创建怪物
    /// </summary>
    /// <param name="num">怪物数量</param>
    /// <returns></returns>
    private IEnumerator SpawnEnemies(MonsterConfig config)
    {
        //while (true)
        //{
        //    SpawnEnemy();
        //    yield return new WaitForSeconds(spawnInterval); // 等待指定的时间
        //}
        Debug.Log("怪物数量-----" + config.Num);
        for(int i = 0;i < config.Num; i++)
        {
            SpawnEnemy(config);
            yield return new WaitForSeconds(spawnInterval); // 等待指定的时间
        }
    }
    /// <summary>
    /// 创建每一个怪物
    /// </summary>
    private void SpawnEnemy(MonsterConfig config)
    {
        if (enemyPrefab != null && spawnPoint != null)
        {
            GameObject monster = Instantiate(enemyPrefab, spawnPoint.transform);
            monster.transform.position = new Vector3(waypoints[0].position.x, waypoints[0].position.y, waypoints[0].position.z);
            Monster m = monster.GetComponent<Monster>();
            m.SetMonsterInfo(config, waypoints);
            monsters.Add(m);
            GameController.instance.uiGame.updateMonsterInfo(monsters.Count);
            if(monsters.Count >= 60)
            {
                GameController.instance.GameOver();
            }
        }
        else
        {
            Debug.LogWarning("Enemy prefab or spawn point is not set.");
        }
    }
    /// <summary>
    /// 获取最近的一个敌人
    /// </summary>
    /// <param name="transform">英雄坐标</param>
    /// <returns></returns>
    public Monster GetNearestEnemy(Transform transform)
    {
        Monster nearestEnemy = null;
        float closestDistanceSqr = Mathf.Infinity;
        Vector3 currentPosition = transform.position;
        foreach(Monster monster in monsters)
        {
            // 计算当前距离
            float distanceSqr = (monster.transform.position - currentPosition).sqrMagnitude;
            if(distanceSqr < closestDistanceSqr)
            {
                closestDistanceSqr = distanceSqr;
                nearestEnemy = monster;
            }
        }
        return nearestEnemy;
    }
    /// <summary>
    /// 获取目标周围的敌人
    /// </summary>
    /// <param name="targetMonster">目标怪物</param>
    /// <param name="radius">半径</param>
    /// <returns></returns>
    public List<Monster> GetMonsterInRadius(Monster targetMonster, float radius)
    {
        List<Monster> nearbyMonsters = new List<Monster>();
        foreach (Monster monster in monsters)
        {
            if(targetMonster != monster)
            {
                float distance = Vector3.Distance(targetMonster.transform.position, monster.transform.position);
                if(distance <= radius)
                {
                    nearbyMonsters.Add(monster);
                }
            }
        }
        return nearbyMonsters;
    }
    /// <summary>
    /// 获取范围内敌人
    /// </summary>
    /// <param name="transform"></param>
    /// <param name="radius"></param>
    /// <returns></returns>
    public List<Monster> GetNearbyEnemyInRadius(Transform transform, float radius)
    {
        List<Monster> nearbyMonsters = new List<Monster>();
        foreach (Monster monster in monsters)
        {
            float distance = Vector3.Distance(transform.position, monster.transform.position);
            if (distance <= radius)
            {
                nearbyMonsters.Add(monster);
            }
        }
        return nearbyMonsters;
    }

    /// <summary>
    /// 击杀一个怪物
    /// </summary>
    /// <param name="monster"></param>
    public void killMonster(Monster monster)
    {
        for (int i = 0; i < monsters.Count; i++)
        {
            if (monsters[i].GetInstanceID() == monster.GetInstanceID())
            {
                monsters.RemoveAt(i);
                break;
            }
        }
        Log.Debug("击杀怪物 " + monster.name + "---------------- 剩余怪物：" + monsters.Count);
        GameController.instance.uiGame.updateMonsterInfo(monsters.Count);
    }
}
