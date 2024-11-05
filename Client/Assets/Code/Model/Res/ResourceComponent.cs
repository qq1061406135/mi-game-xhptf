using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using YooAsset;

public class ResourceComponent 
{
    private static ResourceComponent _isntance;
    public static ResourceComponent Instance
    {
        get 
        {
            if(_isntance == null)
            {
                _isntance = new ResourceComponent();
            }
            return _isntance; 
        }
    }

    private ResourcePackage resourcePackage;

    public Action InitComplete;

    public async Task<bool> Init()
    {
        // ��ʼ����Դϵͳ
        YooAssets.Initialize();
        YooAssets.SetCacheSystemDisableCacheOnWebGL();


        // ����Ĭ�ϵ���Դ��
        resourcePackage = YooAssets.CreatePackage("DefaultPackage");

        // ���ø���Դ��ΪĬ�ϵ���Դ��������ʹ��YooAssets��ؼ��ؽӿڼ��ظ���Դ�����ݡ�
        YooAssets.SetDefaultPackage(resourcePackage);


#if UNITY_EDITOR
        //StartCoroutine(InitializeYooAsset());
        return await InitializeYooAsset();
#elif UNITY_WEBGL
        //StartCoroutine(InitializeYooAssetWebGL());
        return await InitializeYooAssetWebGL();
#endif
        return false;
    }

    private async Task<bool> InitializeYooAssetWebGL()
    {
        // ע�⣺GameQueryServices.cs ̫��ս���Ľű��࣬��ϸ��StreamingAssetsHelper.cs
        string defaultHostServer = "http://47.116.2.196/game/xhq/1.0.0";
        string fallbackHostServer = "http://47.116.2.196/game/xhq/1.0.0";
        var initParameters = new WebPlayModeParameters();
        initParameters.BuildinQueryServices = new GameQueryServices();
        initParameters.RemoteServices = new RemoteServices(defaultHostServer, fallbackHostServer);
        var initOperation = resourcePackage.InitializeAsync(initParameters);
        await initOperation.Task;

        if (initOperation.Status == EOperationStatus.Succeed)
        {
            Debug.Log("��Դ����ʼ���ɹ���");
            //InitComplete?.Invoke();
            return true;
        }
        else
        {
            Debug.LogError($"��Դ����ʼ��ʧ�ܣ�{initOperation.Error}");
            return false;
        }
    }

    private async Task<bool> InitializeYooAsset()
    {
        //var initParameters = new EditorSimulateModeParameters();
        //var simulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild(EDefaultBuildPipeline.BuiltinBuildPipeline, "DefaultPackage");
        //initParameters.SimulateManifestFilePath = simulateManifestFilePath;
        //yield return resourcePackage.InitializeAsync(initParameters);
        //InitComplete?.Invoke();
        //Log.Debug("InitializeYooAsset ��ʼ�����");

        var initParameters = new EditorSimulateModeParameters();
        var simulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild(EDefaultBuildPipeline.BuiltinBuildPipeline, "DefaultPackage");
        initParameters.SimulateManifestFilePath = simulateManifestFilePath;
        InitializationOperation operation = resourcePackage.InitializeAsync(initParameters);
        await operation.Task;
        return true;
    }

    //public async Task LoadSprite(SpriteRenderer sp,string path, string packageName = "DefaultPackage")
    //{
    //    Sprite s = await LoadAssetAsync<Sprite>(path, packageName);
    //    if (s)
    //    {
    //        if (!sp.IsDestroyed())
    //        {
    //            sp.sprite = s;
    //        }
    //    }
    //}

    public async Task LoadSprite(Image img, string path, string packageName = "DefaultPackage")
    {
        Texture2D texture = await LoadAssetAsync<Texture2D>(path, packageName);
        if (texture != null)
        {
            if (!img.IsDestroyed())
            {
                Sprite sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), Vector2.one * 0.5f);
                img.sprite = sprite;
                img.SetNativeSize();
            }
        }
        else
        {
            Log.Debug("LoadSprite --- error " + path);
        }
    }

    public async Task<T> LoadAssetAsync<T>(string name,string packageName = "DefaultPackage") where  T : UnityEngine.Object
    {

        Log.Debug("LoadAssetAsync   " + name + "  packageName = "+ packageName);
        if (string.IsNullOrEmpty(name))
        {
            Log.Debug("������Դʧ��  ·��Ϊ��");
            return null;
        }

        ResourcePackage package = YooAssets.GetPackage(packageName);
        if (package == null)
        {
            Log.Debug("��Դ��û�г�ʼ�� " +  packageName);
            return null;
        }

        AssetHandle handle = package.LoadAssetAsync(name);
        await handle.Task;
        return handle.AssetObject as T;
    }

    public async Task LoadSceneAsync(string path, string packageName = "DefaultPackage")
    {
        if (string.IsNullOrEmpty(path))
        {
            Log.Debug("������Դʧ��  ·��Ϊ��");
            return;
        }

        ResourcePackage package = YooAssets.GetPackage(packageName);
        if (package == null)
        {
            Log.Debug("��Դ��û�г�ʼ�� " + packageName);
            return;
        }

        var handler = package.LoadSceneAsync(path);
        await handler.Task;
    }
}
