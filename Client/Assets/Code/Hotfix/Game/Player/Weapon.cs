using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum WeaponType
{
    WeaponMelee,
    WeaponRange,
    WeaponRangeAd
}

public class Weapon : MonoBehaviour
{

    [HideInInspector]
    public PlayerComponent player;


}
