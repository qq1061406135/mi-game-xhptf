using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class ConfigComponent
{
    private static ConfigComponent _isntance;
    public static ConfigComponent Instance
    {
        get
        {
            if (_isntance == null)
            {
                _isntance = new ConfigComponent();
            }
            return _isntance;
        }
    }

    public List<MapConfig> mapConfigs = new List<MapConfig>();
    public List<LevelConfig> levelConfigs = new List<LevelConfig>();
    public List<LevelMonsterConfig> levelMonsterConfigs = new List<LevelMonsterConfig>();
    public List<MonsterConfig> monsterConfigs = new List<MonsterConfig>();
    public List<PlayerConfig> playerConfigs = new List<PlayerConfig>();

    public List<SkillConfig> skillConfigs = new List<SkillConfig>();
    public List<SkillBranchConfig> skillBranchConfigs = new List<SkillBranchConfig>();
    public List<SkillBranchLevelConfig> skillBranchLevelConfigs = new List<SkillBranchLevelConfig>();

    public List<ItemConfig> itemConfigs = new List<ItemConfig>();

    public List<ActivityConfig> activityConfigs = new List<ActivityConfig>();
    public List<SignIn7Config> signIn7Configs = new List<SignIn7Config>();

    public List<HeroConfig> heroConfigs = new List<HeroConfig>();
    public List<HeroSkillConfig> heroSkillConfigs = new List<HeroSkillConfig>();
    public List<HeroBuffConfig> heroBuffConfigs = new List<HeroBuffConfig>();
    public async Task LoadConfigs()
    {
        Log.Debug("LoadConfigs ---------------------");
        string[] ts = new string[14] { "MapConfig", "LevelConfig", "LevelMonsterConfig", "MonsterConfig" , "PlayerConfig",
        "SkillConfig","SkillBranchConfig","SkillBranchLevelConfig","ItemConfig","ActivityConfig","SignIn7Config","HeroConfig","HeroSkillConfig","HeroBuffConfig"};
        for (int i = 0; i < ts.Length; i++)
        {
            string t = ts[i];
            TextAsset tx = await ResourceComponent.Instance.LoadAssetAsync<TextAsset>("Assets/Res/Config/" + ts[i] + ".json");
            switch (t)
            {
                case "MapConfig":
                    {
                        mapConfigs = JsonConvert.DeserializeObject<List<MapConfig>>(tx.text);
                        break;
                    }
                case "LevelConfig":
                    {
                        levelConfigs = JsonConvert.DeserializeObject<List<LevelConfig>>(tx.text);
                        break;
                    }
                case "LevelMonsterConfig":
                    {
                        levelMonsterConfigs = JsonConvert.DeserializeObject<List<LevelMonsterConfig>>(tx.text);
                        break;
                    }
                case "MonsterConfig":
                    {
                        monsterConfigs = JsonConvert.DeserializeObject<List<MonsterConfig>>(tx.text);
                        break;
                    }
                case "PlayerConfig":
                    {
                        playerConfigs = JsonConvert.DeserializeObject<List<PlayerConfig>>(tx.text);
                        break;
                    }
                case "SkillConfig":
                    {
                        skillConfigs = JsonConvert.DeserializeObject<List<SkillConfig>>(tx.text);
                        break;
                    }

                case "SkillBranchConfig":
                    {
                        skillBranchConfigs = JsonConvert.DeserializeObject<List<SkillBranchConfig>>(tx.text);
                        break;
                    }

                case "SkillBranchLevelConfig":
                    {
                        skillBranchLevelConfigs = JsonConvert.DeserializeObject<List<SkillBranchLevelConfig>>(tx.text);
                        break;
                    }
                case "ItemConfig":
                    {
                        itemConfigs = JsonConvert.DeserializeObject<List<ItemConfig>>(tx.text);
                        break;
                    }
                case "ActivityConfig":
                    {
                        activityConfigs = JsonConvert.DeserializeObject<List<ActivityConfig>>(tx.text);
                        break;
                    }
                case "SignIn7Config":
                    {
                        signIn7Configs = JsonConvert.DeserializeObject<List<SignIn7Config>>(tx.text);
                        break;
                    }
                case "HeroConfig":
                    {
                        heroConfigs = JsonConvert.DeserializeObject<List<HeroConfig>>(tx.text);
                        break;
                    }
                case "HeroSkillConfig":
                    {
                        heroSkillConfigs = JsonConvert.DeserializeObject<List<HeroSkillConfig>>(tx.text);
                        break;
                    }
                case "HeroBuffConfig":
                    {
                        heroBuffConfigs = JsonConvert.DeserializeObject<List<HeroBuffConfig>>(tx.text);
                        break;
                    }

            }
        }
    }
}

