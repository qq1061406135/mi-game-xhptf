using System;
using UnityEngine;

public class JsonHelper
{
    public static T[] FromJson<T>(string json)
    {
        try
        {
            Wrapper<T> wrapper = JsonUtility.FromJson<Wrapper<T>>(json);
            return wrapper.Items;

        }
        catch(Exception e)
        {
            Log.Debug(e.ToString());
            return null;
        }
    }

    public static string ToJson<T>(T[] array)
    {
        Wrapper<T> wrapper = new Wrapper<T>();
        wrapper.Items = array;
        return JsonUtility.ToJson(wrapper);
    }

    [System.Serializable]
    private class Wrapper<T>
    {
        public T[] Items;
    }
}