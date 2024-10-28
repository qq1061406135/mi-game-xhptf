using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
public class UIComponent : MonoBehaviour
{
    public GameObject Hidden;
    public GameObject Low;
    public GameObject Mid;
    public GameObject High;
    private Dictionary<UILayer, GameObject> _uiMap = new Dictionary<UILayer, GameObject>();
    private Dictionary<string, UILayerBase> _uiDict = new Dictionary<string, UILayerBase>();
    private List<UILayerBase> _uis = new List<UILayerBase>();
    private Dictionary<UILayer, Vector2> _uiMapSize = new Dictionary<UILayer, Vector2>();

    public Camera UICamera;

    private void Awake()
    {
        _uiMap.Add(UILayer.Hidden, Hidden);
        _uiMap.Add(UILayer.Low, Low);
        _uiMap.Add(UILayer.Mid, Mid);
        _uiMap.Add(UILayer.High, High);

        initLayerSize(UILayer.Hidden, Hidden);
        initLayerSize(UILayer.Low, Low);
        initLayerSize(UILayer.Mid, Mid);
        initLayerSize(UILayer.High, High);

    }


    private void initLayerSize(UILayer uILayer, GameObject obj)
    {
        CanvasScaler canvasScaler = obj.GetComponent<CanvasScaler>();
        _uiMapSize.Add(uILayer, canvasScaler.referenceResolution);
    }

    public Vector2 GetUISize(UILayer uILayer)
    {
        return _uiMapSize[uILayer];
    }

    public Transform GetUI(UILayer uILayer)
    {
        return _uiMap[uILayer].transform;
    }

    public async Task<T> Open<T>(UIConfig config, object param = null) where T : UILayerBase
    {
        try
        {
            Log.Debug(config.Path);
            if (config == null)
            {
                Log.Debug("�������ÿ�");
                return null;
            }
            if (config.IsSigngle)
            {
                if (_uiDict.ContainsKey(config.Path))
                {
                    Log.Debug("�����Ѵ��� {0}", config.Path);
                    return null;
                }
                GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(config.Path);
                GameObject ui = GameObject.Instantiate(fab, _uiMap[config.Layer].transform);
                T layerBase = ui.GetComponent<T>();
                if (layerBase == null)
                {
                    Log.Debug("δ���ҵ�����ű�{0}", config.Path);
                    return null;
                }
                layerBase.SetConfig(config);
                //TODO ���Ż� ���滭��
                layerBase.SetCanvas(_uiMap[config.Layer].GetComponent<Canvas>());
                _uiDict.Add(config.Path, layerBase);
                layerBase.Show(param);
                return layerBase;
            }
            else
            {
                GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(config.Path);
                GameObject ui = GameObject.Instantiate(fab, _uiMap[config.Layer].transform);
                T layerBase = ui.GetComponent<T>();
                if (layerBase == null)
                {
                    Log.Debug("δ���ҵ�����ű�{0}", config.Path);
                    return null;
                }
                layerBase.SetConfig(config);
                layerBase.SetCanvas(_uiMap[config.Layer].GetComponent<Canvas>());
                _uis.Add(layerBase);
                layerBase.Show(param);
                return layerBase;
            }
        }
        catch (Exception ex)
        {
            Log.Debug(ex.ToString());
            return null;
        }
    }

    public void Close<T>(UIConfig config, object param = null) where T : UILayerBase
    {
        if (config == null)
        {
            Log.Debug("�������ÿ�");
        }
        if (config.IsSigngle)
        {
            _uiDict.TryGetValue(config.Path, out UILayerBase uILayerBase);
            if (uILayerBase)
            {
                uILayerBase.Close();
                _uiDict.Remove(config.Path);
                Log.Debug("������� ִ���Ƴ����� {0}", config.Path);
            }
            else
            {
                Log.Debug("���治���ڴ���  {0}", config.Path);
            }
        }
        else
        {
            if (param is UILayerBase layer)
            {
                _uis.Remove(layer);
                layer.Close();
                Log.Debug("������� ִ���Ƴ����� {0}", config.Path);
            }
        }
    }

    public T Get<T>(UIConfig config) where T : UILayerBase
    {
        if (config.IsSigngle)
        {
            if (_uiDict.ContainsKey(config.Path))
            {
                Log.Debug("�����Ѵ��� {0}", config.Path);
                return (_uiDict[config.Path]) as T;
            }
        }
        return null;
    }

}
