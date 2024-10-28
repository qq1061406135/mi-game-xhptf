using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Init 
{
    public static void Run()
    {
        Log.Debug("---------------------------热更完成---启动游戏");
        ResourceComponent.Instance.LoadSceneAsync("Assets/Res/Login/Launcher.unity");
    }

}
