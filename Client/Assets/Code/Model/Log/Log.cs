using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Log
{
    public static void Debug(string log)
    {
        UnityEngine.Debug.Log(log);
    }
    public static void Debug(string log, params object[] ps)
    {
        UnityEngine.Debug.Log(string.Format(log, ps));
    }

    public static void Error(string log)
    {
        UnityEngine.Debug.LogError(log);
    }
}
