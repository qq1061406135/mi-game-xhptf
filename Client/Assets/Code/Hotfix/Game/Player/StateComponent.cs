using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class StateComponent : MonoBehaviour
{
    [Tooltip("Ѫ���ڵ�")]
    public Transform healthTrans;
    [Tooltip("��ɫѪ��")]
    public int health;

    private int _health;
    [Tooltip("�Ƿ�����")]
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
        Log.Debug("��ʼ��Ѫ�� " + h);
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
        Log.Debug("�˺�Ѫ�� " + h);
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
