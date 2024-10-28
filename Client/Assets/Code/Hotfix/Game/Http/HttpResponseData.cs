using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StatusCode
{
    public const int Fail = 0;
    public const int Success = 1;
}

[System.Serializable]
public class HttpResponse
{
    public string msg;
    public int code;
    public int actorId;
}
[System.Serializable]
public class LoginResponse :HttpResponse
{

}

[System.Serializable]
public class GetServersResponse : HttpResponse
{
    public ServerData[] servers;
    public PlayerData[] players;
}

