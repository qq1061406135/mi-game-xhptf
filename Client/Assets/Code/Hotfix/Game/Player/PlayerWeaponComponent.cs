using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerWeaponComponent : MonoBehaviour
{
    public Action<SkillConfig, Transform> onFireHandler;
    private float _time = 2;

    public List<Transform> atkTargets = new List<Transform>();

    public void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.CompareTag("Enemy"))
        {
            Transform t = atkTargets.Find(p=>p == collision.transform);
            if(t == null)
            {
                atkTargets.Add(collision.transform);
            }
        }
    }

    public void OnTriggerExit2D(Collider2D collision)
    {
        atkTargets.Remove(collision.transform);
    }
}
