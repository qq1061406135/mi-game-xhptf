using UnityEngine;
using System.Threading.Tasks;
using System;
using System.Reflection;
using System.Collections.Generic;

public class CsvConfig
{
    public int Id { get; set; }

    public virtual void EndParser()
    {

    }

    public virtual void StartParser()
    {

    }
}
partial class CsvHelper
{
    public static async Task<List<T>> Parser<T>(string filePath, char separator = '|') where T : CsvConfig
    {
        List<T> sourceList = new List<T>();

        try
        {
            TextAsset csvAsset = await ResourceComponent.Instance.LoadAssetAsync<TextAsset>(filePath);
            // 读取 CSV 文件
            string[] lines = csvAsset.text.Split(new[] { '\n', '\r' }, StringSplitOptions.RemoveEmptyEntries);
            string[] headers = lines[0].Split(separator);
            Type type = typeof(T);
            for (int i = 2; i < lines.Length; i++)
            {
                string[] fields = lines[i].Split(separator);
                // 创建类的实例
                T instance = (T)Activator.CreateInstance(type);
                (instance as CsvConfig).StartParser();
                for (int j = 0; j < headers.Length; j++)
                {
                    string header = headers[j];
                    string field = fields[j];

                    // 使用反射获取类的属性
                    PropertyInfo property = type.GetProperty(header);

                    if (property != null)
                    {
                        // 使用反射动态赋值
                        object value = Convert.ChangeType(field, property.PropertyType);
                        property.SetValue(instance, value);
                    }
                }
                sourceList.Add(instance);
                (instance as CsvConfig).EndParser();
            }

        }
        catch (Exception ex)
        {
            Log.Debug("加载错误：" + ex.Message);
        }
        return sourceList;
    }
}
