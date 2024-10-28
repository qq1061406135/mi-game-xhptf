using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIGameSkillBtn : MonoBehaviour
{
    public TMPro.TextMeshProUGUI skillNameTxt;
    public Image maskImg;
    public int position;

    private float time = 0;

    private SkillBranchLevelConfig branchLevelConfig;
    private SkillConfig skillConfig;
    //public PlayerWeaponComponent weapon;

    private void Start()
    {
        //weapon = UnitManager.Instance.selfUnit.player.weapon;

    }
    public void updateSkill(UnitSkillData unitSkillData)
    {
        skillConfig = ConfigComponent.Instance.skillConfigs.Find(p => p.Id == unitSkillData.ConfigId);
        branchLevelConfig = ConfigComponent.Instance.skillBranchLevelConfigs.Find(p => p.Id == unitSkillData.ConfigId && p.Level == unitSkillData.Level);
        skillNameTxt.text = skillConfig.Name;

    }

    public void Update()
    {
        if (branchLevelConfig == null)
        {
            return;
        }
        time -= Time.deltaTime;
        if (time < 0)
        {
            onFire();
        }

        maskImg.fillAmount = Mathf.Clamp01(time / branchLevelConfig.CD);

    }

    public void onFire()
    {
        //查询当前是否有目标-----
        //获取角色组件---
        List<Monster> monsters = MonsterManager.Instance.getRangeTargetMonsters(UnitManager.Instance.selfUnit.player.center.transform.position, UnitManager.Instance.selfUnit.GetNumeric().GetAsFloat(NumericType.AttackRange));
        if (monsters.Count == 0)
        {

        }
        else
        {
            time = branchLevelConfig.CD;
            Log.Debug("使用技能 " + branchLevelConfig.Id);
           // weapon.onFireHandler.Invoke(skillConfig, weapon.atkTargets[0]);
            UnitManager.Instance.selfUnit.player.OnFireHandler(skillConfig, monsters[0].transform);
        }
    }
}
