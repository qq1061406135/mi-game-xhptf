using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting.FullSerializer;
using UnityEngine;

public class UILayerBase : MonoBehaviour
{
    UIConfig _config;

    Canvas _canvas;


    protected Canvas Canvas
    {
        get { return _canvas; }
    }
    public void SetConfig(UIConfig config)
    {
        _config = config;
    }

    public void SetCanvas(Canvas canvas)
    {
        _canvas = canvas;
    }

    public Camera GetCamera()
    {
        return GameEntry.UI.UICamera;
    }

    public virtual bool Show(object param = null)
    {
        if (gameObject.activeSelf)
        {
            return false;
        }

        gameObject.SetActive(true);
        return true;
    }

    public virtual bool Hide()
    {
        if (!gameObject.activeSelf)
        {
            return false;
        }
        gameObject.SetActive(false);
        return true;
    }

    public virtual Vector2 GetUISize()
    {
        return GameEntry.UI.GetUISize(_config.Layer);
    }

    public virtual void Close()
    {
        Destroy(gameObject);
    }


    public void Remove()
    {
        GameEntry.UI.Close<UILayerBase>(_config,this);
    }
}