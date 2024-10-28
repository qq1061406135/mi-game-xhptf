using LitJson;
using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

public class HttpComponent : MonoBehaviour
{
    public IEnumerator PostRequest(string url, string data,Action<string> action,Action failAction = null)
    {
        Debug.Log("PostRequest  1 " + url);
        UnityWebRequest request = new UnityWebRequest(url, "POST");
        byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(data);
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");
        Debug.Log("PostRequest  2 " + url);

        yield return request.SendWebRequest();

        Debug.Log("PostRequest  3 " + url);

        if (request.result == UnityWebRequest.Result.Success)
        {
            Debug.Log("Response: " + request.downloadHandler.text);
            action.Invoke(request.downloadHandler.text);
        }
        else
        {
            Debug.LogError("HTTP POST failed with error: " + request.error);
            failAction?.Invoke();
        }
        request.Dispose();
    }

    public void PostRequest<T>(string url,Dictionary<string,string> data, Action<T> action, Action failAction = null)
    {
        Log.Debug("PostRequest " + url);
        Action<string> a = (txt) =>
        {
            if (txt != null && txt != "")
            {
                action.Invoke(JsonConvert.DeserializeObject<T>(txt));
            }
        };
        StartCoroutine(PostRequest(url, JsonConvert.SerializeObject(data), a, failAction));
        //string txt = await PostRequest(url, JsonConvert.SerializeObject(data));
        //Log.Debug("PostRequest txt " + txt);
        //if (txt != null && txt != "")
        //{
        //    return JsonConvert.DeserializeObject<T>(txt);    
        //}
        //return default(T);
    }


}
