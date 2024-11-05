using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public TriggerEventTag triggerEventTag;
    public GameObject bullet;
    public Animation bomb;
    private float speed = 30f; // �ӵ��ٶ�
    private Monster fireMonster;
    private Vector3 firePosition;
    private float lifeTime = 5f; // �ӵ�����������
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
        // �ƶ��ӵ�
        if (firePosition != null && !isMoveEnd)
        {
            MoveToTarget();
        }

        // ��ѡ�������������ڣ�����ʱ�������
        lifeTime -= Time.deltaTime;
        if (lifeTime <= 0)
        {
            Destroy(gameObject); // ����ʱ�������
        }
    }
    void MoveToTarget()
    {
        // �����ƶ�����
        Vector3 direction = (firePosition - transform.position).normalized;
        //transform.rotation = Quaternion.LookRotation(direction);
        // �ƶ��ӵ�
        float moveSpeed = speed * Time.deltaTime;
        transform.position += direction * moveSpeed;

        // ����Ƿ񵽴�Ŀ��λ��
        if (Vector3.Distance(transform.position, firePosition) <= moveSpeed)
        {
            isMoveEnd = true;
            if (fireMonster != null)
            {
                //fireMonster.OnHit(_numeric);
                OnAttack(fireMonster);
            }
            //Destroy(gameObject); // �����ӵ�
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
            Destroy(gameObject); // �����ӵ�
        }
    }
    IEnumerator PlayAnimationItor(Animation animation, string clipName)
    {
        animation.Play(clipName);

        //yield return new WaitForSeconds(animation[clipName].length);
        yield return new WaitForSeconds(1);

        Destroy(gameObject); // �����ӵ�
        //Debug.LogWarning("��ը��ɣ�");
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
