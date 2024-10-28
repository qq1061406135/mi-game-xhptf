using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class MonsterBuff : MonoBehaviour
{
    private Monster monster;
    /// <summary>
    /// buff配置
    /// </summary>
    private Dictionary<int, HeroBuffConfig> buffConfig = new Dictionary<int, HeroBuffConfig>();
    /// <summary>
    /// buff列表
    /// </summary>
    private Dictionary<int,float> buffDic = new Dictionary<int, float>();
    /// <summary>
    /// buff特效
    /// </summary>
    private Dictionary<int,GameObject> buffEffect = new Dictionary<int, GameObject>();
    /// <summary>
    /// 持续伤害列表
    /// </summary>
    private Dictionary<int, DotBuff> buffDot = new Dictionary<int, DotBuff>();

    private float speedBuff = 1f;
    private List<int> cleanList = new List<int>();

    private void Start()
    {
        monster = gameObject.GetComponent<Monster>();
    }
    public void AddBuff(int id,float atk)
    {
        //Debug.LogWarning("添加buffId" + id);
        HeroBuffConfig config = ConfigComponent.Instance.heroBuffConfigs.Find(p => p.Id == id);
        if (buffDic.ContainsKey(id))
        {
            buffDic[id] = config.ContinuedTime;
        }
        else
        {
            buffConfig.Add(id, config);
            buffDic.Add(id, config.ContinuedTime);
            SetBuffEffect(id,config);
        }
        SetDotBuff(config, atk);
    }

    void RmoveBuff(int id)
    {
        buffConfig.Remove(id);
        buffDic.Remove(id);
        RemoveBuffEffect(id);
    }

    /// <summary>
    /// 设置持续伤害buff
    /// </summary>
    /// <param name="config"></param>
    void SetDotBuff(HeroBuffConfig config, float atk)
    {
        if ((BuffType)config.Type == BuffType.FLAME || (BuffType)config.Type == BuffType.TRAP_FLAME)
        {
            if (buffDot.ContainsKey(config.Type))
            {
                int damage = buffDot[config.Type].damage.GetAsInt(NumericType.Atk);
                if (damage >= atk)
                {
                    buffDot[config.Type].UpdateBuff(atk, config.Interval, config.ContinuedTime);
                }
            }
            else
            {
                DotBuff dot = new DotBuff();
                dot.Init(atk,config.Interval,config.ContinuedTime);
                buffDot.Add(config.Type, dot);
            }
        }
    }
    void RemoveDotBuff(int type)
    {
        if (buffDot.ContainsKey(type))
        {
            buffDot.Remove(type);
        }
    }
    async void SetBuffEffect(int id, HeroBuffConfig config)
    {
        if (!buffEffect.ContainsKey(id))
        {
            GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(config.res);
            if(monster != null)
            {
                GameObject buff = Instantiate(fab, transform);
                buffEffect.Add(id, buff);
            }
        }
    }
    void RemoveBuffEffect(int id)
    {
        if (buffEffect.ContainsKey(id))
        {
            GameObject buff = buffEffect[id];
            Destroy(buff);
            buffEffect.Remove(id);
        }
    }
    public float GetSpeedBuff()
    {
        return speedBuff;
    }
    void Update()
    {
        speedBuff = 1f;
        for (int i = 0;i < buffDic.Count; i++)
        {
            var item = buffDic.ElementAt(i);
            buffDic[item.Key] = item.Value - Time.deltaTime;
            if(buffConfig[item.Key].Type == 1 && speedBuff > buffConfig[item.Key].Value)
            {
                speedBuff = buffConfig[item.Key].Value;
            }
            if (buffDic[item.Key] <= 0)
            {
                cleanList.Add(item.Key);
            }
        }
        for(int i = 0;i < buffDot.Count; i++)
        {
            var item = buffDot.ElementAt(i);
            DotBuff dot = buffDot[item.Key];
            dot.accTime += Time.deltaTime;
            dot.time -= Time.deltaTime;
            if (dot.accTime >= dot.interval)
            {
                monster.OnHit(dot.damage);
            }
            if(dot.time <= 0)
            {
                RemoveDotBuff(item.Key);
            }
        }
        if(cleanList.Count > 0)
        {
            for(int i = 0;i < cleanList.Count; i++)
            {
                RmoveBuff(cleanList[i]);
            }
            cleanList.Clear();
        }
    }
}

public class DotBuff
{
    /// <summary>
    /// 伤害
    /// </summary>
    public Numeric damage;
    /// <summary>
    /// 间隔
    /// </summary>
    public float interval;
    /// <summary>
    /// 持续时间
    /// </summary>
    public float time;
    /// <summary>
    /// 结算时间
    /// </summary>
    public float accTime;

    public void Init(float d,float i,float t)
    {
        damage = new Numeric();
        damage.Set(NumericType.Atk,d);
        interval = i;
        time = t;
        accTime = 0;
    }

    public void UpdateBuff(float d, float i, float t)
    {
        damage = new Numeric();
        damage.Set(NumericType.Atk, d);
        interval = i;
        time = t;
    }
}
