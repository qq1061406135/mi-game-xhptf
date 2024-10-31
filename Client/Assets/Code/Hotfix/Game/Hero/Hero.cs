using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Spine.Unity;

public class Hero : MonoBehaviour
{

    public GameObject bulletPrefab; // �ӵ�Ԥ����
    public Transform firePoint; // �����
    public GameObject skin;
    public SkeletonAnimation skeletonAnimation;
    private float fireRate = 1f; // ���������룩

    private Monster fireMonster;
    private float nextFireTime = 0f;

    public HeroConfig config;
    private HeroSkillConfig attackConfig;
    // Start is called before the first frame update
    void Start()
    {
    }

    public void SetHeroConfig(HeroConfig c)
    {
        config = c;
        attackConfig = ConfigComponent.Instance.heroSkillConfigs.Find(p => p.Id == config.Attack);
        SetBulletPrefab();
    }

    public async void SetBulletPrefab()
    {
        GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(attackConfig.Res);
        if(fab != null)
        {
            bulletPrefab = fab;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(fireMonster != null && bulletPrefab != null)
        {
            // ����Ƿ���Է���
            if (Time.time >= nextFireTime)
            {
                Fire();
                nextFireTime = Time.time + fireRate; // �����´η���ʱ��
            }
        }
        else
        {
            fireMonster = GameController.instance.monsterSpawner.GetNearestEnemy(transform);
        }
    }
    void Fire()
    {
        if (bulletPrefab != null && fireMonster != null)
        {
            Vector3 scale = skin.transform.localScale;
            if (fireMonster.transform.position.x < transform.position.x)
            {
                scale.Set(-1, 1, 1);
            }
            else
            {
                scale.Set(1, 1, 1);
            }
            skin.transform.localScale = scale;

            if(skeletonAnimation != null)
            {
                skeletonAnimation.AnimationState.SetAnimation(0, "Attack01", false);
            }
            // ʵ�����ӵ�
            GameObject bullet = Instantiate(bulletPrefab, GameController.instance.skillNode.transform);
            bullet.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);

            Bullet b = bullet.GetComponent<Bullet>();
            b.SetTargetPostion(fireMonster, attackConfig,config.Atk);
        }
        else
        {
            Debug.LogWarning("�ӵ�Ԥ��������δ���ã�");
        }
    }
}
