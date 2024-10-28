using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;


public class Unit
{
    public string uid;
    public GameObject gameObject;
    public PlayerComponent player;

    public bool isDestroy;

    //public Vector3 position = Vector3.zero;
    public void Destroy()
    {
        Log.Debug("销毁实例 --- " + uid);

        GameObject.Destroy(gameObject);
        gameObject = null;
        isDestroy = true;
    }

    private Vector3 position = Vector3.zero;
    public Vector3 Position
    {
        get
        {
            return position;
        }
        set
        {
            position = value;
            if(gameObject)
                gameObject.transform.position = position;
        }
    }

    public bool IsSelf()
    {
        return uid == GameData.Instance.userData.playerId;
    }

    public Numeric GetNumeric()
    {
        return player.numeric;
    }
}

public class UnitManager
{
    private static UnitManager _isntance;
    public static UnitManager Instance
    {
        get
        {
            if (_isntance == null)
            {
                _isntance = new UnitManager();
            }
            return _isntance;
        }
    }
    public Unit selfUnit;

    public List<Unit> unitList = new List<Unit>();

    public async Task<Unit> createUnit(UserData userData)
    {
        //读取当前数据 --- 加载角色
        PlayerConfig playerConfig = ConfigComponent.Instance.playerConfigs.Find(p => p.Id == userData.configId);
        if (playerConfig == null)
        {
            Log.Debug("未查找到角色 请检查数据 " + userData.playerId + "  configId=" + userData.configId);
            return null;
        }
        selfUnit = new Unit();
        selfUnit.uid = userData.playerId;
        Log.Debug("创建实例---- " + userData.playerId + " configId = "+ userData.configId);

        var fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(playerConfig.Res);
        //实例化到地图中
        GameObject player = GameObject.Instantiate(fab);
        selfUnit.gameObject = player;

        selfUnit.player = player.GetComponent<PlayerComponent>();
        selfUnit.player.Init(GameData.Instance.userData, playerConfig);
        unitList.Add(selfUnit);
        return selfUnit;
    }

    public async Task<Unit> createOtherUnit(UnitData unitData)
    {
        UserData userData = new UserData();
        userData.serialize(unitData);

        Log.Debug($"新的玩家进入游戏 ---- {userData.playerId}");
        //读取当前数据 --- 加载角色
        PlayerConfig playerConfig = ConfigComponent.Instance.playerConfigs.Find(p => p.Id == userData.configId);
        if (playerConfig == null)
        {
            Log.Debug("未查找到角色 请检查数据 " + userData.playerId);
            return null;
        }

        Unit unit = new Unit();
        unit.uid = userData.playerId;
        Log.Debug("创建实例---- " + userData.playerId + " configId = " + userData.configId);

        var fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(playerConfig.Res);
        if(unit.isDestroy == true)
        {
            Log.Debug($"实例以销毁----------------- {userData.playerName}   {userData.playerId}");
            return null;
        }

        //实例化到地图中
        GameObject player = GameObject.Instantiate(fab);
        unit.gameObject = player;

        unit.player = player.GetComponent<PlayerComponent>();
        unit.player.Init(userData, playerConfig);
        unit.Position = new Vector3(unitData.Pos[0], unitData.Pos[1], unitData.Pos[2]);
        unitList.Add(unit);

        return unit;
    }
    
    public void exitUnit(string playerId)
    {
        Unit unit = unitList.Find(p=>p.uid == playerId);
        if (unit != null)
        {
            unitList.Remove(unit);
            unit.Destroy();
        }
    }

    public void clearAll()
    {
        for(int i = 0; i < unitList.Count; i++)
        {
            if (!unitList[i].IsSelf())
            {
                unitList[i].Destroy();
            }
            
        }
        unitList.Clear();

        //unitList.Add(selfUnit);
    }
}
