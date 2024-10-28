using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using HybridCLR;
using YooAsset;
using System.Data.SqlTypes;
using System.Linq;
public class Init : MonoBehaviour
{
    // Start is called before the first frame update
    private static List<string> AOTMetaAssemblyFiles { get; } = new List<string>()
    {
        //"mscorlib.dll.bytes",
        "System.dll.bytes",
        "System.Core.dll.bytes",
        "UnityEngine.CoreModule.dll.bytes",
        "Newtonsoft.Json.dll.bytes",
        "Google.Protobuf.dll.bytes"
    };

    private static Dictionary<string, byte[]> s_assetDatas = new Dictionary<string, byte[]>();

    public TextAsset mscorlib;

    public void Awake()
    {
        Application.runInBackground = true;
        DontDestroyOnLoad(this.gameObject);
        // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
        LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(mscorlib.bytes, HomologousImageMode.SuperSet);
        Debug.Log($"LoadMetadataForAOTAssembly:mscorlib. mode:{HomologousImageMode.SuperSet} ret:{err}");

        Launcher();
    }

    public async System.Threading.Tasks.Task Launcher()
    {
        bool isSuccess = await ResourceComponent.Instance.Init();
        if (isSuccess)
        {
            Log.Debug("初始化成功");
            //加载代码包
            // Editor环境下，HotUpdate.dll.bytes已经被自动加载，不需要加载，重复加载反而会出问题。

#if !UNITY_EDITOR

            //检测资源更新
            var package = YooAssets.GetPackage("DefaultPackage");

            // 先获取最新的资源版本
            var versionOperation = package.UpdatePackageVersionAsync();
            await versionOperation.Task;
            if(versionOperation.Status == EOperationStatus.Succeed)
            {
                Log.Debug("如果获取远端资源版本成功，说明当前网络连接通畅，可以走正常更新流程。");
                Log.Debug("PackageVersion  " + versionOperation.PackageVersion);
                bool autoSaveVersion = false; //注意：延迟保存本地版本
                var manifestOperation = package.UpdatePackageManifestAsync(versionOperation.PackageVersion, autoSaveVersion);
                await manifestOperation.Task;

                if (manifestOperation.Status != EOperationStatus.Succeed)
                {
                    Log.Debug("请检查本地网络，资源清单更新失败！");
                    return;
                }

                // 创建下载器和下载逻辑省略

                // 注意：下载完成之后再保存本地版本
                manifestOperation.SavePackageVersion();
                Log.Debug("PackageVersion 2  " + versionOperation.PackageVersion);
            }
            else
            {
                // 如果获取远端资源版本失败，说明当前网络无连接。
                // 在正常开始游戏之前，需要验证本地清单内容的完整性。
                var downloader = package.CreateResourceDownloader(1, 1, 60);
                if (downloader.TotalDownloadCount > 0)
                {
                    // 资源内容本地并不完整，需要提示玩家联网更新。
                    Log.Debug("请检查本地网络，有新的游戏内容需要更新！");
                    return;
                }
                Log.Debug("更新失败----跳过更新");
            }


            for (int i = 0; i <  AOTMetaAssemblyFiles.Count; i++)
            {
                TextAsset c = await ResourceComponent.Instance.LoadAssetAsync<TextAsset>("Assets/Res/Code/"+ AOTMetaAssemblyFiles[i]);
                Debug.Log($"dll:{AOTMetaAssemblyFiles[i]}  size:{c.bytes.Length}");
                s_assetDatas[AOTMetaAssemblyFiles[i]] = c.bytes;
            }



            TextAsset code = await ResourceComponent.Instance.LoadAssetAsync<TextAsset>("Assets/Res/Code/Hotfix.dll.bytes");
            Log.Debug($"加载成功");
            Log.Debug(code.bytes.Length.ToString());
            try
            {
                LoadMetadataForAOTAssemblies();


                Assembly hotUpdateAss = Assembly.Load(code.bytes);

                Log.Debug($"加载成功1");


                Type type = hotUpdateAss.GetType("Init");
                Log.Debug($"加载成功2");
                type.GetMethod("Run").Invoke(null, null);
            }
            catch (Exception ex)
            {
                Log.Debug("----------------------");

                Log.Error(ex.ToString());
            }
            
#else
            //Editor下无需加载，直接查找获得HotUpdate程序集
           Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "Hotfix");

            Type type = hotUpdateAss.GetType("Init");
            Log.Debug($"加载成功2");
            type.GetMethod("Run").Invoke(null, null);
#endif

        }
        await System.Threading.Tasks.Task.CompletedTask;
    }

    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    private static void LoadMetadataForAOTAssemblies()
    {
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in AOTMetaAssemblyFiles)
        {
            Debug.Log(aotDllName);
            byte[] dllBytes = ReadBytesFromStreamingAssets(aotDllName);
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }

    public static byte[] ReadBytesFromStreamingAssets(string dllName)
    {
        return s_assetDatas[dllName];
    }
    // 当你需要销毁这个对象时：
    void DestroyMyObject()
    {
        Destroy(gameObject);
    }
}
