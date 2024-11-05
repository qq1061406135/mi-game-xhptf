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
        // 初始化资源系统
        YooAssets.Initialize();
        YooAssets.SetCacheSystemDisableCacheOnWebGL();


        // 创建默认的资源包
        resourcePackage = YooAssets.CreatePackage("DefaultPackage");

        // 设置该资源包为默认的资源包，可以使用YooAssets相关加载接口加载该资源包内容。
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
        // 注意：GameQueryServices.cs 太空战机的脚本类，详细见StreamingAssetsHelper.cs
        string defaultHostServer = "http://47.116.2.196/game/xhq/1.0.0";
        string fallbackHostServer = "http://47.116.2.196/game/xhq/1.0.0";
        var initParameters = new WebPlayModeParameters();
        initParameters.BuildinQueryServices = new GameQueryServices();
        initParameters.RemoteServices = new RemoteServices(defaultHostServer, fallbackHostServer);
        var initOperation = resourcePackage.InitializeAsync(initParameters);
        await initOperation.Task;

        if (initOperation.Status == EOperationStatus.Succeed)
        {
            Debug.Log("资源包初始化成功！");
            //InitComplete?.Invoke();
            return true;
        }
        else
        {
            Debug.LogError($"资源包初始化失败：{initOperation.Error}");
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
        //Log.Debug("InitializeYooAsset 初始化完成");

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
            Log.Debug("加载资源失败  路径为空");
            return null;
        }

        ResourcePackage package = YooAssets.GetPackage(packageName);
        if (package == null)
        {
            Log.Debug("资源包没有初始化 " +  packageName);
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
            Log.Debug("加载资源失败  路径为空");
            return;
        }

        ResourcePackage package = YooAssets.GetPackage(packageName);
        if (package == null)
        {
            Log.Debug("资源包没有初始化 " + packageName);
            return;
        }

        var handler = package.LoadSceneAsync(path);
        await handler.Task;
    }
}
