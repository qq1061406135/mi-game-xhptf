using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
public static class CopyHelper
{
    /// <summary>
    /// 将需要拷贝的对象进行序列化，将其转化为二进制流。
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="obj"></param>
    /// <returns></returns>
    public static byte[] Serialize<T>(T obj)
    {
        BinaryFormatter formatter = new BinaryFormatter();
        using (MemoryStream stream = new MemoryStream())
        {
            formatter.Serialize(stream, obj);
            return stream.ToArray();
        }
    }
    /// <summary>
    /// 将二进制流进行反序列化，生成一个新的对象。
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="data"></param>
    /// <returns></returns>
    public static T Deserialize<T>(byte[] data)
    {
        BinaryFormatter formatter = new BinaryFormatter();
        using (MemoryStream stream = new MemoryStream(data))
        {
            return (T)formatter.Deserialize(stream);
        }
    }
    /// <summary>
    /// 深度拷贝
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="obj"></param>
    /// <returns></returns>
    public static T DeepCopy<T>(T obj)
    {
        byte[] data = Serialize(obj);
        return Deserialize<T>(data);
    }
}
