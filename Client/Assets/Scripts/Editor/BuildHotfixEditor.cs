using System.IO;
using UnityEditor;

//[InitializeOnLoad]
//public class Startup
//{
//    private const string ScriptAssembliesDir = "HybridCLRData/HotUpdateDlls/WebGL/";
//    private const string CodeDir = "Assets/Res/Code/";
//    private const string HotfixDll = "Hotfix.dll";
//    //private const string HotfixPdb = "Hotfix.pdb";

//    static Startup()
//    {
//        File.Copy(Path.Combine(ScriptAssembliesDir, HotfixDll), Path.Combine(CodeDir, "Hotfix.dll.bytes"), true);
//        //File.Copy(Path.Combine(ScriptAssembliesDir, HotfixPdb), Path.Combine(CodeDir, "Hotfix.pdb.bytes"), true);
//        Log.Debug($"复制Hotfix.dll, Hotfix.pdb到Res/Code完成");
//        AssetDatabase.Refresh();//将项目视图进行刷新
//    }
//}
