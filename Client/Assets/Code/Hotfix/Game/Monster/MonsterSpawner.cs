using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class MonsterSpawner : MonoBehaviour
{
    public GameObject enemyPrefab; // ����Ԥ����
    public Transform spawnPoint; // ���ɵ�
    public float spawnInterval = 0.5f; // ���ɼ��

    public Transform[] waypoints; // ·��������

    public GameObject trapNode;//�����λ��

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
    /// ���ε���ʱ
    /// </summary>
    /// <param name="num"></param>
    /// <returns></returns>
    public IEnumerator CountDown(MonsterConfig config, float time)
    {
        timeNode.SetActive(true);
        nameTxt.text = "3";
        yield return new WaitForSeconds(1f); // �ȴ�ָ����ʱ��
        nameTxt.text = "2";
        yield return new WaitForSeconds(1f); // �ȴ�ָ����ʱ��
        nameTxt.text = "1";
        yield return new WaitForSeconds(1f); // �ȴ�ָ����ʱ��
        timeNode.SetActive(false);

        StopCoroutine(CountDown(config, time));
        CreateMonster(config);
        StartCoroutine(BattleCountDown(time));
    }

    /// <summary>
    /// ��ǰ���ε���ʱ
    /// </summary>
    /// <param name="time">��ǰ���εȴ�ʱ��</param>
    /// <returns></returns>
    public IEnumerator BattleCountDown(float time)
    {
        yield return new WaitForSeconds(time); // �ȴ�ָ����ʱ��
        StopCoroutine(BattleCountDown(time));
        GameController.instance.endQueue();
    }
    /// <summary>
    /// ��ʼ��������
    /// </summary>
    /// <param name="num">��������</param>
    public void CreateMonster(MonsterConfig config)
    {
        StartCoroutine(SpawnEnemies(config));
    }

    /// <summary>
    /// �ȴ�ָ��ʱ�䴴������
    /// </summary>
    /// <param name="num">��������</param>
    /// <returns></returns>
    private IEnumerator SpawnEnemies(MonsterConfig config)
    {
        //while (true)
        //{
        //    SpawnEnemy();
        //    yield return new WaitForSeconds(spawnInterval); // �ȴ�ָ����ʱ��
        //}
        Debug.Log("��������-----" + config.Num);
        for(int i = 0;i < config.Num; i++)
        {
            SpawnEnemy(config);
            yield return new WaitForSeconds(spawnInterval); // �ȴ�ָ����ʱ��
        }
    }
    /// <summary>
    /// ����ÿһ������
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
    /// ��ȡ�����һ������
    /// </summary>
    /// <param name="transform">Ӣ������</param>
    /// <returns></returns>
    public Monster GetNearestEnemy(Transform transform)
    {
        Monster nearestEnemy = null;
        float closestDistanceSqr = Mathf.Infinity;
        Vector3 currentPosition = transform.position;
        foreach(Monster monster in monsters)
        {
            // ���㵱ǰ����
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
    /// ��ȡĿ����Χ�ĵ���
    /// </summary>
    /// <param name="targetMonster">Ŀ�����</param>
    /// <param name="radius">�뾶</param>
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
    /// ��ȡ��Χ�ڵ���
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
    /// ��ɱһ������
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
        Log.Debug("��ɱ���� " + monster.name + "---------------- ʣ����" + monsters.Count);
        GameController.instance.uiGame.updateMonsterInfo(monsters.Count);
    }
}
