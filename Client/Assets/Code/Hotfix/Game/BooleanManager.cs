using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BooleanManager 
{
    private static BooleanManager _isntance;
    public static BooleanManager Instance
    {
        get
        {
            if (_isntance == null)
            {
                _isntance = new BooleanManager();
            }
            return _isntance;
        }
    }

    //internal bool GameStart = false;
    internal bool Music = true;
    internal bool Sound = true;
    internal bool Vibration = true;
}
