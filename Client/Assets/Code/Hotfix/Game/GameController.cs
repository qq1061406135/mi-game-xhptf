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
        //    Log.Debug("�ؿ�����δ���ҵ�---���� " + GameData.Instance.curMapConfig.LevelId);
        //    return;
        //}

        //var ary = GameData.Instance.curMapConfig.SpawnPoint.Split(',');
        //Unit selfUnit = await UnitManager.Instance.createUnit(GameData.Instance.userData);
        //selfUnit.gameObject.transform.position = new Vector3(int.Parse(ary[0]), int.Parse(ary[1]));

        //await GameEntry.UI.Open<UIGame>(UIConfigs.UIGame);
        ////�رռ��ؽ���  �ر�������
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
    //��Ϸ���ο�ʼ
    public void startBattle()
    {
        monsterSpawner.start(10,10);
    }
    //���н���
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
    /// ��ʼ����ͼ�еĹ�������
    /// </summary>
    /// <returns></returns>
    //private async Task initMonster()
    //{
    //    string[] monsters = levelConfig.Monsters.Split(',');
    //    for(int i = 0; i < monsters.Length; i++)
    //    {
    //        //��ȡ��������
    //        int levelMonsterid = int.Parse(monsters[i]);
    //        LevelMonsterConfig levelMonsterConfig = ConfigComponent.Instance.levelMonsterConfigs.Find(p=>p.Id == levelMonsterid);
    //        if(levelMonsterConfig == null)
    //        {
    //            Log.Debug("δ���ҵ��ؿ���������----  " + levelMonsterid);
    //            continue;
    //        }
    //        MonsterConfig monsterConfig = ConfigComponent.Instance.monsterConfigs.Find(p => p.Id == levelMonsterConfig.MonsterId);
    //        if(monsterConfig == null)
    //        {
    //            Log.Debug("δ���ҵ���������   " + levelMonsterConfig.MonsterId);
    //            continue;
    //        }
    //        //���ع���  ʵ��������
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
