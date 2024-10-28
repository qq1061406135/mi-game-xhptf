using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class StateComponent : MonoBehaviour
{
    [Tooltip("血量节点")]
    public Transform healthTrans;
    [Tooltip("角色血量")]
    public int health;

    private int _health;
    [Tooltip("是否死亡")]
    public bool isDie;

    public TextMeshPro nameTxt;

    public BooleanManager Bool
    {
        get
        {
            return BooleanManager.Instance;
        }
    }

    public void Start()
    {
        _health = health;

        if (GameData.Instance.IsMainScene())
        {
            HideState();
        }

    }

    public void initHealth(int h)
    {
        _health = h;
        health = h;
        Log.Debug("初始化血量 " + h);
    }

    public void Update()
    {
        if (health != 0 && _health != 0)
        {
            healthTrans.localScale = new Vector3(Mathf.Clamp01(health / (float)_health), 1, 1);
        }
    }

    public void OnHit(int h)
    {
        Log.Debug("伤害血量 " + h);
        health -= h;
        if (health <= 0)
        {
            isDie = true;
        }
    }

    public void HideState()
    {
        this.gameObject.SetActive(false);
    }

}
