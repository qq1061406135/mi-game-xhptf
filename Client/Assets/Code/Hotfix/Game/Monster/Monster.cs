using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class Monster : MonoBehaviour
{
    public Transform skin;

    public TriggerEventComponent trigger;
    public StateComponent state;

    private Transform[] waypoints; // ·��������
    private float moveSpeed = 1f; // �ƶ��ٶ�
    private int currentWaypointIndex = 0; // ��ǰĿ��·��������

    private float speed = 1;
    private MonsterBuff monsterBuff;

    MonsterConfig _config;
    Numeric _numeric;
    private void Start()
    {
        //trigger.onTriggerEnterAction += OnTriggerEnterHandler;
        monsterBuff = gameObject.AddComponent<MonsterBuff>();
        _numeric = new Numeric();
        _numeric.Set(NumericType.HpBase, 100f);
        state.initHealth(_numeric.GetAsInt(NumericType.Hp));
    }

    public void setWaypoints(Transform[] points)
    {
        waypoints = points;
    }

    public void SetMonsterConfig(LevelMonsterConfig levelMonster,MonsterConfig config, MonsterData monsterData)
    {
        _config = config;

        Dictionary<int, long> numericDic = new Dictionary<int, long>();
        for (int i = 0; i < monsterData.AttributeData.Count; i++)
        {
            numericDic.Add(monsterData.AttributeData[i].Type, monsterData.AttributeData[i].Value);
        }
        Numeric numeric = new Numeric();
        numeric.NumericDic = numericDic;
        _numeric = numeric;

        transform.position = new Vector3(monsterData.Pos[0], monsterData.Pos[1]);
        speed = _numeric.GetAsFloat(NumericType.Speed);

        state.initHealth(_numeric.GetAsInt(NumericType.Hp));
        state.nameTxt.text = levelMonster.Name;

    }

    public void SetMonsterConfig(LevelMonsterConfig levelMonster, MonsterConfig config)
    {
        _config = config;
        speed = levelMonster.MoveSpeed;

        string[] pos = levelMonster.SpawnPoint.Split(',');
        transform.position = new Vector3(float.Parse(pos[0]), float.Parse(pos[1]));
        _numeric = new Numeric();
        _numeric.Set(NumericType.HpBase, levelMonster.Hp);
        _numeric.Set(NumericType.AtkBase, levelMonster.Atk);
        _numeric.Set(NumericType.DefBase, levelMonster.Def);
        _numeric.Set(NumericType.SpeedBase, levelMonster.MoveSpeed);

        state.initHealth(_numeric.GetAsInt(NumericType.Hp));
        state.nameTxt.text = levelMonster.Name;
    }

    void Update()
    {
        //if (followPlayer == true)
        //{
        //    body.MovePosition(Vector3.MoveTowards(this.transform.position, _player.position, _numeric.GetAsFloat(NumericType.Speed) * Time.deltaTime));
        //    skin.transform.localScale = new Vector3(_player.transform.position.x < this.transform.position.x ? -1 : 1, 1, 1);
        //}

        if (waypoints==null || waypoints.Length == 0) return;

        // �����ƶ�����
        Vector3 direction = (waypoints[currentWaypointIndex].position - transform.position).normalized;

        float buffSpeed = monsterBuff.GetSpeedBuff();
        // �ƶ�����
        transform.position += direction * moveSpeed * Time.deltaTime * buffSpeed;

        // ����Ƿ񵽴�Ŀ��·����
        if (Vector3.Distance(transform.position, waypoints[currentWaypointIndex].position) < 0.1f)
        {
            currentWaypointIndex++;

            // ����������һ��·���㣬�򷵻����
            if (currentWaypointIndex >= waypoints.Length)
            {
                currentWaypointIndex = 0; // ѭ���ص���һ��·����
            }
        }

    }

    public void OnAttack()
    {

    }
    public void OnHit(Numeric numeric)
    {
        //��ȡ��ǰѪ��
        //Debug.LogWarning("����");
        if(numeric.GetAsInt(NumericType.BuffId) > 0)
        {
            monsterBuff.AddBuff(numeric.GetAsInt(NumericType.BuffId), numeric.GetAsInt(NumericType.Atk));
        }
        state.OnHit(numeric.GetAsInt(NumericType.Atk));
        if (state.isDie)
        {
            GameController.instance.monsterSpawner.killMonster(this);
            GameController.instance.addCoin(5);
            GameObject.Destroy(gameObject);
        }
    }
}
