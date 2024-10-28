using UnityEngine;
using System;
using System.Collections.Generic;
using UnityWebSocket;

class WebRequest
{
    public string type;
    public byte[] msg;
    public int rpcId;
}

public class WebResponse
{
    public string type;
    public string data;
    public int rpcId;
}
public class WebSocketComponent : MonoBehaviour
{
    private WebSocket websocket;

    private int rpcId = 1;

    private Dictionary<int, Action<string, byte[]>> _calls = new Dictionary<int, Action<string, byte[]>>();

    private Dictionary<string,Action<string, byte[]>> _notifys = new Dictionary<string, Action<string, byte[]>>();

    Action successCallBack;
    Action failCallBack;
    public void Connect(string uri, Action success, Action fail = null)
    {
        //// 替换为你的 WebSocket 服务器地址
        websocket = new WebSocket(uri);
        successCallBack = success;
        failCallBack = fail;
        //websocket.OnOpen += () =>
        //{
        //    Debug.Log("WebSocket 连接成功！");
        //    success.Invoke();
        //};

        //websocket.OnError += (e) =>
        //{
        //    Debug.LogError("WebSocket 错误：" + e);
        //    _notifys.Clear();
        //    fail?.Invoke();
        //};

        //websocket.OnClose += (e) =>
        //{
        //    Debug.Log("WebSocket 关闭，代码：" + e);
        //    _notifys.Clear();
        //    fail?.Invoke();
        //};

        //websocket.OnMessage += (bytes) =>
        //{
        //    Log.Debug("接收到消息--------------------------------");
        //    try
        //    {
        //        // 接收消息
        //        var message = System.Text.Encoding.UTF8.GetString(bytes);
        //        Debug.Log("收到消息：" + message);

        //        var obj = JsonUtility.FromJson<WebResponse>(message) as WebResponse;
        //        //获取是否存在回调----
        //        if (_calls.TryGetValue(obj.rpcId, out var call))
        //        {
        //            call(obj.type, ConvertStringToByteArray(obj.data));
        //        }
        //        else if (_notifys.ContainsKey(obj.type))
        //        {
        //            _notifys[obj.type].Invoke(obj.type, ConvertStringToByteArray(obj.data));
        //        }
        //        else
        //        {
        //            Log.Error("消息未监听：" + obj.type);
        //        }
        //        _calls.Remove(obj.rpcId);

        //    }
        //    catch (Exception ex)
        //    {
        //        Log.Error("消息处理错误 ");
        //        Log.Error(ex.ToString());
        //    }

        //};

        //// 连接到服务器
        //websocket.Connect();

        websocket.OnOpen += Socket_OnOpen;
        websocket.OnMessage += Socket_OnMessage;
        websocket.OnClose += Socket_OnClose;
        websocket.OnError += Socket_OnError;
        websocket.ConnectAsync();
        // 可以在连接成功后发送消息
        //SendMessage("Hello, WebSocket!");
    }

    private void Socket_OnOpen(object sender, OpenEventArgs e)
    {
        //AddLog(string.Format("Connected: {0}", address));
        Log.Debug("Socket_Open ");
        successCallBack?.Invoke();
    }

    private void Socket_OnMessage(object sender, MessageEventArgs e)
    {
        //if (e.IsBinary)
        //{
        //    AddLog(string.Format("Receive Bytes ({1}): {0}", e.Data, e.RawData.Length));
        //}
        //else if (e.IsText)
        //{
        //    AddLog(string.Format("Receive: {0}", e.Data));
        //}
        //receiveCount += 1;

        Log.Debug("Socket_OnMessage  " + e.Data);
        Log.Debug("接收到消息--------------------------------");
        try
        {
            var obj = JsonUtility.FromJson<WebResponse>(e.Data) as WebResponse;
            //获取是否存在回调----
            if (_calls.TryGetValue(obj.rpcId, out var call))
            {
                call(obj.type, ConvertStringToByteArray(obj.data));
            }
            else if (_notifys.ContainsKey(obj.type))
            {
                _notifys[obj.type].Invoke(obj.type, ConvertStringToByteArray(obj.data));
            }
            else
            {
                Log.Error("消息未监听：" + obj.type);
            }
            _calls.Remove(obj.rpcId);

        }
        catch (Exception ex)
        {
            Log.Error("消息处理错误 ");
            Log.Error(ex.ToString());
        }
    }

    private void Socket_OnClose(object sender, CloseEventArgs e)
    {
        Debug.LogError("WebSocket 关闭：" + e);
        _notifys.Clear();
        failCallBack?.Invoke();
    }

    private void Socket_OnError(object sender, ErrorEventArgs e)
    {
        Debug.LogError("WebSocket 错误：" + e);
        _notifys.Clear();
        failCallBack?.Invoke();
    }

    private void OnApplicationQuit()
    {
        if (websocket != null && websocket.ReadyState != WebSocketState.Closed)
        {
            websocket.CloseAsync();
        }
    }


    public static byte[] ConvertStringToByteArray(string input)
    {
        // 去除字符串中的大括号和逗号，并按冒号分割键值对
        string[] keyValuePairs = input.Replace("{", "").Replace("}", "").Split(',');

        // 创建字节数组
        byte[] bytes = new byte[keyValuePairs.Length];

        // 遍历键值对数组，将每个值转换为字节填充到字节数组中
        for (int i = 0; i < keyValuePairs.Length; i++)
        {
            string[] pair = keyValuePairs[i].Split(':');
            if (pair.Length == 2)
            {
                // 获取字节值
                byte value = Convert.ToByte(pair[1]);
                bytes[i] = value;
            }
        }

        return bytes;
    }

    public void Send(string type, byte[] data)
    {
        if (websocket.ReadyState == WebSocketState.Open)
        {
            WebRequest request = new WebRequest();
            request.type = type;
            request.msg = data;
            request.rpcId = 0;
            //rpcId++;
            websocket.SendAsync(JsonUtility.ToJson(request));
        }
    }

    public void Send(string type, byte[] data, Action<string, byte[]> action)
    {
        try
        {
            if (websocket.ReadyState == WebSocketState.Open)
            {
                WebRequest request = new WebRequest();
                request.type = type;
                request.msg = data;
                request.rpcId = rpcId;
                rpcId++;
                _calls.Add(request.rpcId, action);
                websocket.SendAsync(JsonUtility.ToJson(request));
            }
            else
            {
                Log.Debug("未连接");
            }
        }
        catch (Exception ex)
        {
            Log.Debug("Send err  " + type);
            Log.Debug(ex.ToString());
        }

    }

    private void Update()
    {
//#if !UNITY_WEBGL || UNITY_EDITOR
//        if (websocket != null)
//        {
//            websocket.DispatchMessageQueue();
//        }
//#endif
    }


    public void RegisterNotify(string tppe, Action<string, byte[]> action)
    {
        _notifys.Add(tppe, action);
    }

}