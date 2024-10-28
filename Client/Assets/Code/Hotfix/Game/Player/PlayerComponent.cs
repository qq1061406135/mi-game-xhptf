using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using UnityEngine.UIElements;

[RequireComponent(typeof(InputController))]
//[RequireComponent(typeof(PlayerStateComponent))]
public class PlayerComponent : MonoBehaviour
{
    /// <summary>
    /// 武器组件
    /// </summary>
    //public PlayerWeaponComponent weapon;
    /// <summary>
    /// 角色状态
    /// </summary>
    public StateComponent playerState;
    /// <summary>
    /// 2d灯光
    /// </summary>
    public Light2D light2D;
    /// <summary>
    /// 数值
    /// </summary>
    public Numeric numeric;

    public Transform center;

    public Transform weaponPos;

    private UserData _userData;
    private PlayerConfig _playerConfig;

    private InputController _inputColltroller;
    public InputController inputController
    {
        get
        {
            if (_inputColltroller == null)
            {
                _inputColltroller = GetComponent<InputController>();
            }
            return _inputColltroller;
        }
    }

    public BooleanManager Bool
    {
        get
        {
            return BooleanManager.Instance;
        }
    }

    private void Start()
    {
        //weapon.onFireHandler += (skillConfig,target) =>
        //{
        //    OnFireHandler(skillConfig, target);
        //};

        light2D.gameObject.SetActive(isSelf());
    }

    public void Init(UserData userData,PlayerConfig playerConfig)
    {
        _userData = userData;
        _playerConfig = playerConfig;
        numeric = new Numeric();
        numeric.NumericDic = CopyHelper.DeepCopy(userData.numericDic);

        inputController.playerSpeed = numeric.GetAsFloat(NumericType.Speed)*5;
        playerState.initHealth(numeric.GetAsInt(NumericType.Hp));
        playerState.nameTxt.text = userData.playerName;

    }

    public void ChangeSpeed(int type,float speed)
    {
        numeric.Set(type, speed);
        inputController.playerSpeed = numeric.GetAsFloat(NumericType.Speed)*5;
    }

    public async Task OnFireHandler(SkillConfig skillConfig,Transform target)
    {
        //if(branchLevelConfig.IsRepel)
        //if(branchLevelConfig.Sp == 1)
        // 获取当前装备----发射小刀
        SkillBranchConfig skillBranchConfig = ConfigComponent.Instance.skillBranchConfigs.Find(p=>p.Id == skillConfig.Id);

        GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(skillConfig.Res);
        GameObject obj = Instantiate(fab);
        obj.transform.position = weaponPos.position;
        BoltSHooter boltSHooter = obj.GetComponent<BoltSHooter>();

        if (skillBranchConfig.Speed == 0)
        {
            obj.transform.position = target.position;
        }
        else
        {
            obj.transform.position = transform.position;
        }
        boltSHooter.ChangeSpeed(skillBranchConfig.Speed);
        boltSHooter.SetTarget(target, numeric, TriggerEventTag.Enemy);

        //GameController.instance.camera.GetComponent<CameraScreenShake>().Shake(0.1f, 0.05f);
    }


    public bool isSelf()
    {
        return _userData.playerId == GameData.Instance.userData.playerId;
    }
}
