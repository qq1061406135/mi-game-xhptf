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
        Log.Debug("��ʼ������   " + monsterDatas.Count);
        for (int i = 0; i < monsterDatas.Count; i++)
        {
            MonsterData monsterData = monsterDatas[i];
            //��ѯ��������
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
                    Log.Debug("δ���ҵ�����Ԥ��---- " + monsterConfig.Res);
                }
            }
            else
            {
                Log.Debug("δ���ҵ�����---" + monsterData.ConfigId);
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
        Log.Debug("��ɱ���� "+ monster.name+ "---------------- ʣ����" + monsters.Count);


        //��ȡ��ǰ�ؿ�����
        LevelConfig levelConfig = ConfigComponent.Instance.levelConfigs.Find(p => p.Id == GameData.Instance.curMapConfig.LevelId);
        if (levelConfig != null)
        {
            if (levelConfig.ConditionType == (int)LevelConditionType.KillMonsterPercent)
            {
                //Log.Debug("��ɱ����----------------   " + ((1 - monsters.Count / (float)maxMonsterCount) * 100) + "  levelConfig.ConditionValue=" + levelConfig.ConditionValue);

                if ((1 - monsters.Count / (float)maxMonsterCount) * 100 >= levelConfig.ConditionValue)
                {
                    Log.Debug("�ؿ������Ѿ��ﵽ------------ִ��boss����");
                }
            }
        }
        else
        {
            Log.Debug("δ���ҵ��ؿ�  " + levelConfig.Id);
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
        // ����������
        result.Sort((a, b) => Vector2.Distance(pos, a.transform.position).CompareTo(Vector2.Distance(pos, b.transform.position)));
        return result;

        //// ����������
        //result.Sort((a, b) => Vector3.Distance(pos, a.transform.position).CompareTo(Vector3.Distance(pos, b.transform.position)));
        //return result;


        //detectionLayerMask = (1 << LayerMask.NameToLayer("Enemy")) | (1 << LayerMask.NameToLayer("Ob"));
        // ���˳�����


        //List<Collider2D> enemies = new List<Collider2D>();
        //Collider2D[] collider2Ds = Physics2D.OverlapCircleAll(pos, range, LayerMask.NameToLayer("Enemy"));
        //enemies.AddRange(collider2Ds);
        //// ���վ�������
        //enemies = enemies.OrderBy(collider => Vector2.Distance(pos, collider.transform.position)).ToList();
        //return enemies;

        //// ��ָ���뾶�ڼ��������ײ��
        //Collider2D[] hitColliders = Physics2D.OverlapCircleAll(pos, range,LayerMask.GetMask("Enemy"));

        //// ����һ���б�洢��⵽�����弰�����
        //List<KeyValuePair<Collider2D, float>> detectedObjects = new List<KeyValuePair<Collider2D, float>>();

        //foreach (var hitCollider in hitColliders)
        //{
        //    // ����ÿ�����嵽���ĵ�ľ���
        //    float distance = Vector2.Distance(pos, hitCollider.transform.position);
        //    detectedObjects.Add(new KeyValuePair<Collider2D, float>(hitCollider, distance));
        //}

        //// ����������
        //detectedObjects.Sort((x, y) => x.Value.CompareTo(y.Value));

        //// �����⵽����������б�
        //foreach (var detectedObject in detectedObjects)
        //{
        //    Debug.Log($"Object: {detectedObject.Key.name}, Distance: {detectedObject.Value}");
        //}

        //return detectedObjects;
    }
}
