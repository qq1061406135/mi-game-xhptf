using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Init 
{
    public static void Run()
    {
        Log.Debug("---------------------------�ȸ����---������Ϸ");
        ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Login/Launcher.unity");
    }

}
