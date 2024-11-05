using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trap : MonoBehaviour
{

    [HideInInspector]
    public int id;
    [HideInInspector]
    public int level;

    private float fireRate = 1f; // 发射间隔（秒）
    private float nextFireTime = 0f;
    private List<Monster> fireMonster;

    private TrapConfig config;
    private TrapSkillConfig attackConfig;
    private Numeric _numeric;
    void Start()
    {

    }

    public void SetTrapConfig(TrapConfig c)
    {
        config = c;
        attackConfig = ConfigComponent.Instance.trapSkillConfigs.Find(p => p.Id == config.Attack);
        fireRate = attackConfig.Cd;
        _numeric = new Numeric();
        _numeric.Set(NumericType.Atk, config.Atk * attackConfig.Hurt);
        _numeric.Set(NumericType.BuffId, attackConfig.BuffId);
    }

    // Update is called once per frame
    void Update()
    {

        // 检查是否可以发射
        if (Time.time >= nextFireTime)
        {
            fireMonster = GameController.instance.monsterSpawner.GetNearbyEnemyInRadius(transform, 1.2f);
            Fire();
            nextFireTime = Time.time + fireRate; // 设置下次发射时间
        }
    }
    void Fire()
    {
        if(fireMonster != null && fireMonster.Count > 0)
        {
            foreach (Monster m in fireMonster)
            {
                if (m)
                {
                    m.OnAttack(_numeric);
                }
            }
        }
    }
}
