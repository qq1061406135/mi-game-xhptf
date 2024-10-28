using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class GameController : GameScene
{
   
    public static GameController instance;

    public HeroSpawner heroSpawner;

    public MonsterSpawner monsterSpawner;

    public GameObject skillNode;

    Numeric _numeric;

    [HideInInspector]
    public UIGame uiGame;

    public LevelConfig levelConfig;

    public override void OnAwake()
    {
        base.OnAwake();
        instance = this;
        _numeric = new Numeric();
        Init();
    }

    public override void OnStart()
    {
        base.OnStart();
    }

    public async Task Init()
    {
        //levelConfig = ConfigComponent.Instance.levelConfigs.Find(p=>p.Id == GameData.Instance.curMapConfig.LevelId);
        //if (levelConfig == null)
        //{
        //    Log.Debug("关卡数据未查找到---请检查 " + GameData.Instance.curMapConfig.LevelId);
        //    return;
        //}

        //var ary = GameData.Instance.curMapConfig.SpawnPoint.Split(',');
        //Unit selfUnit = await UnitManager.Instance.createUnit(GameData.Instance.userData);
        //selfUnit.gameObject.transform.position = new Vector3(int.Parse(ary[0]), int.Parse(ary[1]));

        //await GameEntry.UI.Open<UIGame>(UIConfigs.UIGame);
        ////关闭加载界面  关闭主界面
        //await initJoystick();

        //camera.GetComponent<CameraFollow>().SetTarget(selfUnit.gameObject.transform);
        _numeric.Set(NumericType.Coin, 100);

        uiGame = await GameEntry.UI.Open<UIGame>(UIConfigs.UIGame);

        startBattle();
    }

    public void OnDestroy()
    {
        instance = null;
        //BooleanManager.Instance.GameStart = false;
    }
    //游戏波次开始
    public void startBattle()
    {
        monsterSpawner.start(10,10);
    }
    //队列结束
    public void endQueue()
    {
        startBattle();
    }

    public bool subCoin(int coin)
    {
        int nowCoin = _numeric.GetAsInt(NumericType.Coin);
        if (nowCoin >= coin)
        {
            nowCoin -= coin;
            _numeric.Set(NumericType.Coin, nowCoin);
            uiGame.updateCoinTxt(nowCoin);
            return true;
        }
        return false;
    }

    public void addCoin(int coin)
    {
        int nowCoin = _numeric.GetAsInt(NumericType.Coin);
        nowCoin += coin;
        _numeric.Set(NumericType.Coin, nowCoin);
        uiGame.updateCoinTxt(nowCoin);

    }
    /// <summary>
    /// 初始化地图中的怪物数据
    /// </summary>
    /// <returns></returns>
    //private async Task initMonster()
    //{
    //    string[] monsters = levelConfig.Monsters.Split(',');
    //    for(int i = 0; i < monsters.Length; i++)
    //    {
    //        //获取怪物数据
    //        int levelMonsterid = int.Parse(monsters[i]);
    //        LevelMonsterConfig levelMonsterConfig = ConfigComponent.Instance.levelMonsterConfigs.Find(p=>p.Id == levelMonsterid);
    //        if(levelMonsterConfig == null)
    //        {
    //            Log.Debug("未查找到关卡怪物配置----  " + levelMonsterid);
    //            continue;
    //        }
    //        MonsterConfig monsterConfig = ConfigComponent.Instance.monsterConfigs.Find(p => p.Id == levelMonsterConfig.MonsterId);
    //        if(monsterConfig == null)
    //        {
    //            Log.Debug("未查找到怪物配置   " + levelMonsterConfig.MonsterId);
    //            continue;
    //        }
    //        //加载怪物  实例化怪物
    //        GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(monsterConfig.Res);
    //        GameObject monster = Instantiate(fab);
    //        monster.GetComponent<Monster>().SetMonsterConfig(levelMonsterConfig,monsterConfig);
    //    }
    //}

    //private async Task initJoystick()
    //{
    //    await GameEntry.UI.Open<UIJoystick>(UIConfigs.UIJoystick);
    //}


}
