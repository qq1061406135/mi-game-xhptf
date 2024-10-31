using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;

public class HeroSpawner : MonoBehaviour
{
    public GameObject heroPrefab; // 怪物预制体
    public Transform spawnPoint; // 生成点

    public GameObject seatNode; // 位置点
    private Transform[] seatTransforms;

    private Hero[] heros;
    private Dictionary<HeroQualityType, List<HeroConfig>> spawnerDic = new Dictionary<HeroQualityType, List<HeroConfig>>();
    private Dictionary<int,int[]> leqentDic = new Dictionary<int, int[]>();//传说英雄
    // Start is called before the first frame update

    void Start()
    {
        heros = new Hero[24];
        seatTransforms = new Transform[24];
        for (int i = 0;i < seatNode.transform.childCount; i++)
        {
            seatTransforms[i] = seatNode.transform.GetChild(i);
        }
        InitLeqent();
    }

    private void InitLeqent()
    {
        List<HeroConfig> heroConfigs = ConfigComponent.Instance.heroConfigs;
        for(int i = 0;i < heroConfigs.Count; i++)
        {
            HeroConfig config = heroConfigs[i];
            HeroQualityType type = (HeroQualityType)config.Type;
            if (type == HeroQualityType.RED)
            {
                string merge = config.Merge;
                string[] parts = merge.Split(',');
                int[] ids = new int[parts.Length];
                for (int j = 0; j < parts.Length; j++)
                {
                    if (int.TryParse(parts[j], out int number))
                    {
                        ids[j] = number;
                    }
                }
                leqentDic.Add(config.Id, ids);
            }
            else
            {
                if (!spawnerDic.ContainsKey((HeroQualityType)config.Type))
                {
                    spawnerDic.Add(type, new List<HeroConfig>());
                }
                spawnerDic[type].Add(config);
            }
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
        if (index > -1)
        {
            HeroConfig config = GetHeroConfig();
            GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(config.Res);
            if (fab != null)
            {
                GameObject hero = Instantiate(fab, spawnPoint.transform);
                hero.transform.position = new Vector3(seatTransforms[index].position.x, seatTransforms[index].position.y, seatTransforms[index].position.z);
                Hero h = hero.GetComponent<Hero>();
                h.SetHeroConfig(config);
                heros[index] = h;
                GameController.instance.uiGame.updateLeqentBtn();
            }
            else
            {
                Debug.LogWarning("Enemy prefab or spawn point is not set.");
            }
        }
        else if(index == -1)
        {
            Debug.LogWarning("没有空位.");
        }
        else
        {

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
    /// <summary>
    /// 生成传说英雄
    /// </summary>
    /// <param name="id">英雄id</param>
    /// <returns></returns>
    public async void SpawnLeqentHero(int id)
    {
        int index = -1;
        for (int i = 0; i < heros.Length; i++)
        {
            if (heros[i] == null)
            {
                index = i;
                break;
            }
        }

        HeroConfig config = ConfigComponent.Instance.heroConfigs.Find(p => p.Id == id);
        List<int> indexs = GetIsLeqent(config);
        if (indexs != null)
        {
            GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(config.Res);
            if (fab != null)
            {
                ClearLeqentNeedHero(indexs);
                GameObject hero = Instantiate(fab, spawnPoint.transform);
                hero.transform.position = new Vector3(seatTransforms[index].position.x, seatTransforms[index].position.y, seatTransforms[index].position.z);
                Hero h = hero.GetComponent<Hero>();
                h.SetHeroConfig(config);
                heros[index] = h;
            }
            else
            {
                Debug.LogWarning("Enemy prefab or spawn point is not set.");
            }
        }
        else
        {

        }
    }
    /// <summary>
    /// 清理召唤传说需要的前置英雄
    /// </summary>
    /// <param name="indexs"></param>
    private void ClearLeqentNeedHero(List<int> indexs)
    {
        for(int i = 0;i < indexs.Count; i++)
        {
            if(heros[indexs[i]] != null)
            {
                GameObject.Destroy(heros[indexs[i]].gameObject);
                heros[indexs[i]] = null;
            }
        }
    }
    /// <summary>
    /// 获取召唤传说需要的英雄
    /// </summary>
    /// <param name="config"></param>
    /// <returns></returns>
    private List<int> GetIsLeqent(HeroConfig config)
    {
        int[] ids = leqentDic[config.Id];
        int[] clonedIds = (int[])ids.Clone();
        List<int> indexs = new List<int>();
        for(int i = 0;i < heros.Length; i++)
        {
            if(heros[i] != null)
            {
                int id = heros[i].config.Id;
                int index = Array.IndexOf(clonedIds, id);
                if(index > -1)
                {
                    clonedIds[index] = 0;
                    indexs.Add(i);
                }
            }
        }
        if(indexs.Count == ids.Length)
        {
            return indexs;
        }
        return null;
    }
    /// <summary>
    /// 获取已经可以激活的传说
    /// </summary>
    /// <returns></returns>
    public List<HeroConfig> GetSafetyLeqent()
    {
        List<HeroConfig> leqentLis = new List<HeroConfig>();
        for(int i = 0;i < leqentDic.Count; i++)
        {
            var item = leqentDic.ElementAt(i);
            int id = item.Key;
            HeroConfig config = ConfigComponent.Instance.heroConfigs.Find(p => p.Id == id);
            if (GetIsLeqent(config) != null)
            {
                leqentLis.Add(config);
            }
        }
        return leqentLis;
    }

}
