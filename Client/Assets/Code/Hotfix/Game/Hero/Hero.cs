using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Spine.Unity;

public class Hero : MonoBehaviour
{

    public GameObject bulletPrefab; // 子弹预制体
    public Transform firePoint; // 发射点
    public GameObject skin;
    public SkeletonAnimation skeletonAnimation;
    private float fireRate = 1f; // 发射间隔（秒）

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
            // 检查是否可以发射
            if (Time.time >= nextFireTime)
            {
                Fire();
                nextFireTime = Time.time + fireRate; // 设置下次发射时间
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
            // 实例化子弹
            GameObject bullet = Instantiate(bulletPrefab, GameController.instance.skillNode.transform);
            bullet.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);

            Bullet b = bullet.GetComponent<Bullet>();
            b.SetTargetPostion(fireMonster, attackConfig,config.Atk);
        }
        else
        {
            Debug.LogWarning("子弹预制体或发射点未设置！");
        }
    }
}
