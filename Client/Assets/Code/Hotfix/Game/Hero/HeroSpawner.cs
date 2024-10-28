using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeroSpawner : MonoBehaviour
{
    public GameObject heroPrefab; // 怪物预制体
    public Transform spawnPoint; // 生成点

    public GameObject seatNode; // 位置点
    private Transform[] seatTransforms;

    private Hero[] heros;
    // Start is called before the first frame update
    void Start()
    {
        heros = new Hero[24];
        seatTransforms = new Transform[24];
        for (int i = 0;i < seatNode.transform.childCount; i++)
        {
            seatTransforms[i] = seatNode.transform.GetChild(i);
        }
    }
    /// <summary>
    /// 生成一个英雄
    /// </summary>
    public async void SpawnHero()
    {
        int index = -1;
        for(int i = 0;i < heros.Length; i++)
        {
            if(heros[i] == null)
            {
                index = i;
                break;
            }
        }
        if (index > -1 && heroPrefab != null && heroPrefab != null)
        {
            HeroConfig config = GetHeroConfig();
            GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(config.Res);
            GameObject hero = Instantiate(fab, spawnPoint.transform);
            hero.transform.position = new Vector3(seatTransforms[index].position.x, seatTransforms[index].position.y, seatTransforms[index].position.z);
            Hero h = hero.GetComponent<Hero>();
            h.SetHeroConfig(config);
            heros[index] = h;
        }
        else if(index == -1)
        {

        }
        else
        {
            Debug.LogWarning("Enemy prefab or spawn point is not set.");
        }
    }
    /// <summary>
    /// 抽取一个英雄
    /// </summary>
    /// <returns></returns>
    public HeroConfig GetHeroConfig()
    {
        //HeroConfig config = ConfigComponent.Instance.heroConfigs.Find(p => p.Id == 2006);


        System.Random random = new System.Random();
        int randomIndex = random.Next(ConfigComponent.Instance.heroConfigs.Count);
        HeroConfig config = ConfigComponent.Instance.heroConfigs[randomIndex];

        return config;
    }


}
