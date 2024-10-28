using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class UISignIn7Item : MonoBehaviour
{
    public TextMeshProUGUI descTxt;
    public TextMeshProUGUI dayTxt;


    public void UpdateItem(int day, string desc)
    {
        dayTxt.text = "µÚ" + day + "Ìì";
        descTxt.text = desc;
    }
}
