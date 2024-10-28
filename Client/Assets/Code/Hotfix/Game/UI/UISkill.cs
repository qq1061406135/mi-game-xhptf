using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

[System.Serializable]
public class Skills
{
    public GameObject skill;
    public Skills[] childs;
}

public class UISkill : UILayerBase
{

    public Skills skill1;
    public TextMeshProUGUI attributeTxt;

    // Start is called before the first frame update
    void Start()
    {
        //初始化界面
        //获取角色配置
        PlayerConfig playerConfig = ConfigComponent.Instance.playerConfigs.Find(p => p.Id == GameData.Instance.userData.configId);

        attributeTxt.text = GameData.Instance.userData.uAttributePoint.ToString();
        updateSkillItem(playerConfig.Skill, skill1);
    }


    private async void updateSkillItem(int skillId, Skills skills)
    {
        SkillBranchConfig skillBranchConfig = ConfigComponent.Instance.skillBranchConfigs.Find(p => p.Id == skillId);
        skills.skill.transform.Find("txt").GetComponent<TMPro.TextMeshProUGUI>().text = skillBranchConfig.Name;
        //查看当前是否还有分支
        string[] bs = skillBranchConfig.Branch.Split(',');
        for (int i = 0; i < bs.Length; i++)
        {
            if (i >= skills.childs.Length)
            {
                break;
            }
            updateSkillItem(int.Parse(bs[i]), skills.childs[i]);
        }
    }

}
