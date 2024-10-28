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
        // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
        LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(mscorlib.bytes, HomologousImageMode.SuperSet);
        Debug.Log($"LoadMetadataForAOTAssembly:mscorlib. mode:{HomologousImageMode.SuperSet} ret:{err}");

        Launcher();
    }

    public async System.Threading.Tasks.Task Launcher()
    {
        bool isSuccess = await ResourceComponent.Instance.Init();
        if (isSuccess)
        {
            Log.Debug("��ʼ���ɹ�");
            //���ش����
            // Editor�����£�HotUpdate.dll.bytes�Ѿ����Զ����أ�����Ҫ���أ��ظ����ط���������⡣

#if !UNITY_EDITOR

            //�����Դ����
            var package = YooAssets.GetPackage("DefaultPackage");

            // �Ȼ�ȡ���µ���Դ�汾
            var versionOperation = package.UpdatePackageVersionAsync();
            await versionOperation.Task;
            if(versionOperation.Status == EOperationStatus.Succeed)
            {
                Log.Debug("�����ȡԶ����Դ�汾�ɹ���˵����ǰ��������ͨ���������������������̡�");
                Log.Debug("PackageVersion  " + versionOperation.PackageVersion);
                bool autoSaveVersion = false; //ע�⣺�ӳٱ��汾�ذ汾
                var manifestOperation = package.UpdatePackageManifestAsync(versionOperation.PackageVersion, autoSaveVersion);
                await manifestOperation.Task;

                if (manifestOperation.Status != EOperationStatus.Succeed)
                {
                    Log.Debug("���鱾�����磬��Դ�嵥����ʧ�ܣ�");
                    return;
                }

                // �����������������߼�ʡ��

                // ע�⣺�������֮���ٱ��汾�ذ汾
                manifestOperation.SavePackageVersion();
                Log.Debug("PackageVersion 2  " + versionOperation.PackageVersion);
            }
            else
            {
                // �����ȡԶ����Դ�汾ʧ�ܣ�˵����ǰ���������ӡ�
                // ��������ʼ��Ϸ֮ǰ����Ҫ��֤�����嵥���ݵ������ԡ�
                var downloader = package.CreateResourceDownloader(1, 1, 60);
                if (downloader.TotalDownloadCount > 0)
                {
                    // ��Դ���ݱ��ز�����������Ҫ��ʾ����������¡�
                    Log.Debug("���鱾�����磬���µ���Ϸ������Ҫ���£�");
                    return;
                }
                Log.Debug("����ʧ��----��������");
            }


            for (int i = 0; i <  AOTMetaAssemblyFiles.Count; i++)
            {
                TextAsset c = await ResourceComponent.Instance.LoadAssetAsync<TextAsset>("Assets/Res/Code/"+ AOTMetaAssemblyFiles[i]);
                Debug.Log($"dll:{AOTMetaAssemblyFiles[i]}  size:{c.bytes.Length}");
                s_assetDatas[AOTMetaAssemblyFiles[i]] = c.bytes;
            }



            TextAsset code = await ResourceComponent.Instance.LoadAssetAsync<TextAsset>("Assets/Res/Code/Hotfix.dll.bytes");
            Log.Debug($"���سɹ�");
            Log.Debug(code.bytes.Length.ToString());
            try
            {
                LoadMetadataForAOTAssemblies();


                Assembly hotUpdateAss = Assembly.Load(code.bytes);

                Log.Debug($"���سɹ�1");


                Type type = hotUpdateAss.GetType("Init");
                Log.Debug($"���سɹ�2");
                type.GetMethod("Run").Invoke(null, null);
            }
            catch (Exception ex)
            {
                Log.Debug("----------------------");

                Log.Error(ex.ToString());
            }
            
#else
            //Editor��������أ�ֱ�Ӳ��һ��HotUpdate����
           Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "Hotfix");

            Type type = hotUpdateAss.GetType("Init");
            Log.Debug($"���سɹ�2");
            type.GetMethod("Run").Invoke(null, null);
#endif

        }
        await System.Threading.Tasks.Task.CompletedTask;
    }

    /// <summary>
    /// Ϊaot assembly����ԭʼmetadata�� ��������aot�����ȸ��¶��С�
    /// һ�����غ����AOT���ͺ�����Ӧnativeʵ�ֲ����ڣ����Զ��滻Ϊ����ģʽִ��
    /// </summary>
    private static void LoadMetadataForAOTAssemblies()
    {
        /// ע�⣬����Ԫ�����Ǹ�AOT dll����Ԫ���ݣ������Ǹ��ȸ���dll����Ԫ���ݡ�
        /// �ȸ���dll��ȱԪ���ݣ�����Ҫ���䣬�������LoadMetadataForAOTAssembly�᷵�ش���
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in AOTMetaAssemblyFiles)
        {
            Debug.Log(aotDllName);
            byte[] dllBytes = ReadBytesFromStreamingAssets(aotDllName);
            // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }

    public static byte[] ReadBytesFromStreamingAssets(string dllName)
    {
        return s_assetDatas[dllName];
    }
    // ������Ҫ�����������ʱ��
    void DestroyMyObject()
    {
        Destroy(gameObject);
    }
}
