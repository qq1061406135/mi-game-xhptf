using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class UIGame : UILayerBase
{
    public Transform leftNode;

    public TextMeshProUGUI monsterTxt;

    public TextMeshProUGUI coinTxt;

    public TextMeshProUGUI summonCostTxt;

    public GameObject leqenBtnFab;

    private void Start()
    {
    }

    public void InitTrap()
    {

    }

    /// <summary>
    /// 修改怪物数量显示
    /// </summary>
    public void updateMonsterInfo(int num)
    {
        monsterTxt.text = num + "/" + "60";
    }
    /// <summary>
    /// 修改金币数量
    /// </summary>
    /// <param name="num"></param>
    public void updateCoinTxt(int num)
    {
        coinTxt.text = num.ToString();
    }
    public void updateCostTxt(int num)
    {
        summonCostTxt.text = num.ToString();
    }
    /// <summary>
    /// 更新召唤传说按钮
    /// </summary>
    public void updateLeqentBtn()
    {
        List<HeroConfig> list = GameController.instance.heroSpawner.GetSafetyLeqent();
        if(leftNode.childCount > 0)
        {
            for(int i = 0;i < leftNode.childCount; i++)
            {
                Destroy(leftNode.GetChild(i).gameObject);
            }
        }
        if(list.Count > 0)
        {
            for(int i = 0;i < list.Count; i++)
            {
                GameObject btnPef = Instantiate(leqenBtnFab, leftNode.transform);
                LeqentBtn c = btnPef.GetComponent<LeqentBtn>();
                c.SetLeqentInfo(list[i]);
            }
        }
    }

    public async void OnBackClick()
    {
        //退出
        //NetManager.Instance.SendExitLevel((msg) =>
        //{
        //    Log.Debug("退出成功=-- ");
        //    GameEntry.UI.Close<UIGame>(UIConfigs.UIGame);
        //});
        await ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Main/Main.unity");
        //await GameEntry.UI.Open<UIMain>(UIConfigs.UIMain);
        GameEntry.UI.Close<UIGame>(UIConfigs.UIGame);
    }
    /// <summary>
    /// 打开召唤传说界面
    /// </summary>
    public void OnLeqentClick()
    {
        GameEntry.UI.Open<UILeqent>(UIConfigs.UILeqent);
    }
    /// <summary>
    /// 点击孵化
    /// </summary>
    public void OnSpawnClick()
    {
        if (GameController.instance.subCoin(GameController.instance.cost))
        {
            GameController.instance.cost += 2;
            updateCostTxt(GameController.instance.cost);
            GameController.instance.heroSpawner.SpawnHero();
        }
        else
        {
            Log.Debug("金币不足=-- ");
        }
    }
}
