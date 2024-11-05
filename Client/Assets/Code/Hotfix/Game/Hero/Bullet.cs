using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public TriggerEventTag triggerEventTag;
    public GameObject bullet;
    public Animation bomb;
    private float speed = 30f; // 子弹速度
    private Monster fireMonster;
    private Vector3 firePosition;
    private float lifeTime = 5f; // 子弹的生命周期
    private Numeric _numeric;
    private HeroSkillConfig skillConfig;
    private bool isMoveEnd = false;

    // Start is called before the first frame update
    void Start()
    {
        //_numeric.Set(NumericType.Atk, 10f);
    }

    public void SetTargetPostion(Monster monster, HeroSkillConfig skill,int atk)
    {
        fireMonster = monster;
        firePosition = fireMonster.transform.position;
        skillConfig = skill;
        _numeric = new Numeric();
        _numeric.Set(NumericType.Atk, atk* skill.Hurt);
        _numeric.Set(NumericType.BuffId, skill.BuffId);
    }

    // Update is called once per frame
    void Update()
    {
        // 移动子弹
        if (firePosition != null && !isMoveEnd)
        {
            MoveToTarget();
        }

        // 可选：定义生命周期，超出时间后销毁
        lifeTime -= Time.deltaTime;
        if (lifeTime <= 0)
        {
            Destroy(gameObject); // 超出时间后销毁
        }
    }
    void MoveToTarget()
    {
        // 计算移动方向
        Vector3 direction = (firePosition - transform.position).normalized;
        //transform.rotation = Quaternion.LookRotation(direction);
        // 移动子弹
        float moveSpeed = speed * Time.deltaTime;
        transform.position += direction * moveSpeed;

        // 检查是否到达目标位置
        if (Vector3.Distance(transform.position, firePosition) <= moveSpeed)
        {
            isMoveEnd = true;
            if (fireMonster != null)
            {
                //fireMonster.OnHit(_numeric);
                OnAttack(fireMonster);
            }
            //Destroy(gameObject); // 销毁子弹
            BulletBomb();
        }
    }

    void BulletBomb()
    {
        if (bomb)
        {
            bullet.SetActive(false);
            bomb.gameObject.SetActive(true);
            StartCoroutine(PlayAnimationItor(bomb, "heroBulletBomb"));
        }
        else
        {
            Destroy(gameObject); // 销毁子弹
        }
    }
    IEnumerator PlayAnimationItor(Animation animation, string clipName)
    {
        animation.Play(clipName);

        //yield return new WaitForSeconds(animation[clipName].length);
        yield return new WaitForSeconds(1);

        Destroy(gameObject); // 销毁子弹
        //Debug.LogWarning("爆炸完成！");
    }

    void OnAttack(Monster fireMonster)
    {
        fireMonster.OnAttack(_numeric);
        if (skillConfig.Num != 1)
        {
            List<Monster> nearbyMonsters = GameController.instance.monsterSpawner.GetMonsterInRadius(fireMonster, skillConfig.Range * 0.25f);
            if (nearbyMonsters != null)
            {
                if (skillConfig.Num > 1 && skillConfig.Num > nearbyMonsters.Count)
                {
                    //nearbyMonsters.RemoveRange(skillConfig.Num, nearbyMonsters.Count - skillConfig.Num);
                }
                foreach (Monster m in nearbyMonsters)
                {
                    m.OnAttack(_numeric);
                }
            }
        }
    }
}
