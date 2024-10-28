using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public partial class GameEntry : MonoBehaviour
{
    /// <summary>
    /// 携程组件
    /// </summary>
    public static CoroutineComponent Coroutine
    {
        get;
        private set;
    }
    public static UIComponent UI
    {
        get;
        private set;
    }

    public static MainCameraComponent ManCamera
    {
        get;
        private set;
    }


    public static HttpComponent Http;

    public static WebSocketComponent WebSocket;


    /// <summary>
    /// 初始化内置组件
    /// </summary>
    private void InitBuiltinComponents()
    {
        Coroutine = GetComponentInChildren<CoroutineComponent>();

        UI = GetComponentInChildren<UIComponent>();

        ManCamera = GetComponentInChildren<MainCameraComponent>();

        //Config = GetComponentInChildren<ConfigComponent>();

        Http = GetComponentInChildren<HttpComponent>();

        WebSocket = GetComponentInChildren<WebSocketComponent>();
        //Sql = SqlComponent.Instance;
        //Sql.Init("table_game.db");
    }
}