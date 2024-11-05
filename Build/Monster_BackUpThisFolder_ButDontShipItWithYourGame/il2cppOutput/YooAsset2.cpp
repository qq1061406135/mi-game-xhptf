#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<YooAsset.AllAssetsHandle>
struct Action_1_t5AD92E5BF5CD65FFFEC3380D95162CDEE40C6DE4;
// System.Action`1<YooAsset.AssetHandle>
struct Action_1_t8A357F9957A727C9D85A7C8D5B8FF423F7CD1B0D;
// System.Action`1<YooAsset.AsyncOperationBase>
struct Action_1_t2B402C842742EFCB5D9827C1981184ECC4F57FDF;
// System.Action`1<YooAsset.RawFileHandle>
struct Action_1_t4E8A78AAE4D3D94225030626B69248DBEA0690BE;
// System.Action`1<YooAsset.SceneHandle>
struct Action_1_tAB2D36EC9101D1E3344D0A2493599AF9C7B12D57;
// System.Action`1<YooAsset.SubAssetsHandle>
struct Action_1_tF835693B61B023DA9730598D7984F238BA777E44;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.List`1<YooAsset.AsyncOperationBase>
struct List_1_t4F5C3340A86A42936A99CE1A6B886F090535F6ED;
// System.Collections.Generic.List`1<YooAsset.BundleInfo>
struct List_1_t943237520EBA876AFFDDA7CEB2622319659097AE;
// System.Collections.Generic.List`1<YooAsset.DebugPackageData>
struct List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6;
// System.Collections.Generic.List`1<YooAsset.DebugProviderInfo>
struct List_1_t4DFB46B24368137D834DCCB7BF2ADC98F76EEB3A;
// System.Collections.Generic.List`1<YooAsset.DownloaderBase>
struct List_1_t01C551675E768AA47C6770802F3DE41710533C48;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A;
// System.Collections.Generic.List`1<YooAsset.ResourcePackage>
struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// YooAsset.AssetInfo[]
struct AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// YooAsset.DebugPackageData[]
struct DebugPackageDataU5BU5D_t1D87AEDCDA89F9FA2851AB5431A97DD8164F7F7D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// YooAsset.ResourcePackage[]
struct ResourcePackageU5BU5D_t88F68884F4F9B7D283AC85B0ADF90F35053C21D1;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// YooAsset.AllAssetsHandle
struct AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// YooAsset.AssetHandle
struct AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3;
// YooAsset.AssetInfo
struct AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// YooAsset.AsyncOperationBase
struct AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// YooAsset.BufferWriter
struct BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886;
// YooAsset.CRC32Algorithm
struct CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A;
// YooAsset.CacheManager
struct CacheManager_tE1367D7F36C98B0DD8F96443EAF5A09CC8B83AA8;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// YooAsset.DebugPackageData
struct DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9;
// YooAsset.DebugReport
struct DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// YooAsset.DownloadManager
struct DownloadManager_tFA03763588A252CEC73CAAB480A6EBA3A9A2AC8D;
// YooAsset.DownloadRequestDelegate
struct DownloadRequestDelegate_t8E1F5C86FCE3954D557AA2830E9C174E6E3F5489;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// YooAsset.GameAsyncOperation
struct GameAsyncOperation_t381D498F36A436967E38E553EDDF3A77DFAD7160;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// YooAsset.IBundleQuery
struct IBundleQuery_t73C83DDA79D523D2EFEF3B3AB30B04BD2614D19E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// YooAsset.ILogger
struct ILogger_tDF24C2D094417567E0429274CBA0896EF501517C;
// YooAsset.IPlayMode
struct IPlayMode_t95BB7C5618240D1D311DEDD78AB74B4A13FC4B55;
// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// YooAsset.PackageAsset
struct PackageAsset_t1A8378733AF6E05264E4FC8D3EA1C24668313C91;
// YooAsset.PersistentManager
struct PersistentManager_t599AF63AB53EB9F9220CB52613466E05099DB186;
// YooAsset.ProviderBase
struct ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758;
// YooAsset.RawFileHandle
struct RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3;
// YooAsset.ResourceDownloaderOperation
struct ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3;
// YooAsset.ResourceImporterOperation
struct ResourceImporterOperation_tF8A4EBDE73A54A2E5C9494E415A9D552ED41AF53;
// YooAsset.ResourceLoader
struct ResourceLoader_t5EA4AE0141C336DF8857D4D47B9E365A27FE835D;
// YooAsset.ResourceManager
struct ResourceManager_tC27DBE237BAEAC755E5EB6AC4EB2B549387C3BDA;
// YooAsset.ResourcePackage
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022;
// YooAsset.ResourceUnpackerOperation
struct ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// YooAsset.SafeProxy
struct SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// YooAsset.SceneHandle
struct SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// YooAsset.SubAssetsHandle
struct SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// YooAsset.YooAssetsDriver
struct YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5;
// YooAsset.DownloaderOperation/OnDownloadError
struct OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206;
// YooAsset.DownloaderOperation/OnDownloadOver
struct OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6;
// YooAsset.DownloaderOperation/OnDownloadProgress
struct OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6;
// YooAsset.DownloaderOperation/OnStartDownloadFile
struct OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CacheHelper_tAFCCA6B5598438301AAD32DBF12E435D28FCC155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral1D29DEA29AB1C5A91F32D93F1959B09C88B25F5E;
IL2CPP_EXTERN_C String_t* _stringLiteral2EE202C5315CE67BC1F4ABEBB5BFF740404AE2F8;
IL2CPP_EXTERN_C String_t* _stringLiteral33442AF2D181B07DBC17846AF710AB966B95B524;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral5A330F95B9B9004009DFA7DB9F4ED598080FFFDB;
IL2CPP_EXTERN_C String_t* _stringLiteral6B7ACFA699A95389F6B76095C514C2217B23A2A7;
IL2CPP_EXTERN_C String_t* _stringLiteral6F01E96250419380D036DBE7005BF02DB2648D96;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9896AE071E6E32C91E8C214612408897432E807E;
IL2CPP_EXTERN_C String_t* _stringLiteralA929F9B4FD405482CE681D9E9297AF08F5469025;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC9440BDB8F65D5F4B9B344FC7163CA6FC6516A;
IL2CPP_EXTERN_C String_t* _stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB4991BC03A4611590A823E483ACA6B929AD3B6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4BCBDD7CCF79370EF7363440DFA9118B516F3B1;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF87A431DC9F1307C86F60CAA8615A161A82FC149;
IL2CPP_EXTERN_C String_t* _stringLiteralFACFABE7F5FF35F0556F38330D454B4E4A451170;
IL2CPP_EXTERN_C const RuntimeMethod* CRC32Algorithm_Append_m511C8C217AAA52C291FEE8B84FB4B5C9525C6605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CRC32Algorithm_Append_m51A8BD82A3E35087AF901F20F1B729DB2E842AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CRC32Algorithm_ComputeAndWriteToEnd_m03BEFA574B4D8FD25A4FF9EF8BDD0B11C371807B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CRC32Algorithm_ComputeAndWriteToEnd_m5E5DF4FB46B097C467B42A4797951F87C345F8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CRC32Algorithm_IsValidWithCrcAtEnd_m30821801841FF86CD3CC5C76C6369044F897B87F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m971585063A81736B51FEDF8EDDF8B6F250C37006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF4CB7EA6B869DC2BEA6EFE63005DD675B1A444CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_m07AEFD7479ADCFB1171724F07E35825315C650B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_m7724399261CC03A4C4D5E688F864367446BA754A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_m7D9917BB0E61F93FFCD7EAB49D337CA03C75301F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_m8D4356F525CD5A5738B8BA775C034C84C3E877BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YooAssets_CheckException_mF5811ACFDE01F79D582D519E29CBCB9128E99B34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YooAssets_CreatePackage_mD27980614DE50342AB503DB840EE5CEC998E9807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YooAssets_DebugCheckDefaultPackageValid_m65FA749C73F641D08442DCFCBD0ED7FB491D7F90_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<YooAsset.DebugPackageData>
struct List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DebugPackageDataU5BU5D_t1D87AEDCDA89F9FA2851AB5431A97DD8164F7F7D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DebugPackageDataU5BU5D_t1D87AEDCDA89F9FA2851AB5431A97DD8164F7F7D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int64>
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<YooAsset.ResourcePackage>
struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ResourcePackageU5BU5D_t88F68884F4F9B7D283AC85B0ADF90F35053C21D1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ResourcePackageU5BU5D_t88F68884F4F9B7D283AC85B0ADF90F35053C21D1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// YooAsset.AssetInfo
struct AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456  : public RuntimeObject
{
	// YooAsset.PackageAsset YooAsset.AssetInfo::_packageAsset
	PackageAsset_t1A8378733AF6E05264E4FC8D3EA1C24668313C91* ____packageAsset_0;
	// System.String YooAsset.AssetInfo::_providerGUID
	String_t* ____providerGUID_1;
	// System.String YooAsset.AssetInfo::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_2;
	// System.Type YooAsset.AssetInfo::<AssetType>k__BackingField
	Type_t* ___U3CAssetTypeU3Ek__BackingField_3;
	// System.String YooAsset.AssetInfo::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_4;
};

// YooAsset.AsyncOperationBase
struct AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032  : public RuntimeObject
{
	// System.Action`1<YooAsset.AsyncOperationBase> YooAsset.AsyncOperationBase::_callback
	Action_1_t2B402C842742EFCB5D9827C1981184ECC4F57FDF* ____callback_0;
	// System.Boolean YooAsset.AsyncOperationBase::IsFinish
	bool ___IsFinish_1;
	// System.String YooAsset.AsyncOperationBase::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_2;
	// System.UInt32 YooAsset.AsyncOperationBase::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_3;
	// YooAsset.EOperationStatus YooAsset.AsyncOperationBase::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_4;
	// System.String YooAsset.AsyncOperationBase::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_5;
	// System.Single YooAsset.AsyncOperationBase::<Progress>k__BackingField
	float ___U3CProgressU3Ek__BackingField_6;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> YooAsset.AsyncOperationBase::_taskCompletionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ____taskCompletionSource_7;
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// YooAsset.CacheHelper
struct CacheHelper_tAFCCA6B5598438301AAD32DBF12E435D28FCC155  : public RuntimeObject
{
};

struct CacheHelper_tAFCCA6B5598438301AAD32DBF12E435D28FCC155_StaticFields
{
	// System.Boolean YooAsset.CacheHelper::DisableUnityCacheOnWebGL
	bool ___DisableUnityCacheOnWebGL_0;
	// YooAsset.BufferWriter YooAsset.CacheHelper::SharedBuffer
	BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* ___SharedBuffer_1;
};

// YooAsset.DebugPackageData
struct DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9  : public RuntimeObject
{
	// System.String YooAsset.DebugPackageData::PackageName
	String_t* ___PackageName_0;
	// System.Collections.Generic.List`1<YooAsset.DebugProviderInfo> YooAsset.DebugPackageData::ProviderInfos
	List_1_t4DFB46B24368137D834DCCB7BF2ADC98F76EEB3A* ___ProviderInfos_1;
};

// YooAsset.DebugReport
struct DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D  : public RuntimeObject
{
	// System.Int32 YooAsset.DebugReport::FrameCount
	int32_t ___FrameCount_0;
	// System.Collections.Generic.List`1<YooAsset.DebugPackageData> YooAsset.DebugReport::PackageDatas
	List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6* ___PackageDatas_1;
};

// YooAsset.DownloadHelper
struct DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B  : public RuntimeObject
{
};

struct DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_StaticFields
{
	// System.Collections.Generic.List`1<System.Int64> YooAsset.DownloadHelper::<ClearFileResponseCodes>k__BackingField
	List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* ___U3CClearFileResponseCodesU3Ek__BackingField_0;
	// YooAsset.DownloadRequestDelegate YooAsset.DownloadHelper::RequestDelegate
	DownloadRequestDelegate_t8E1F5C86FCE3954D557AA2830E9C174E6E3F5489* ___RequestDelegate_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// YooAsset.FileUtility
struct FileUtility_t5449A663405CBC365480B6DCAC03B177EA2C383B  : public RuntimeObject
{
};

// YooAsset.HandleBase
struct HandleBase_t571827F810EAE331C05542D54B2C396C605DB4DA  : public RuntimeObject
{
	// YooAsset.AssetInfo YooAsset.HandleBase::_assetInfo
	AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ____assetInfo_0;
	// YooAsset.ProviderBase YooAsset.HandleBase::<Provider>k__BackingField
	ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758* ___U3CProviderU3Ek__BackingField_1;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// YooAsset.HashUtility
struct HashUtility_tC80280D7F13E8274BB51D195E5E00FC87C5AC83D  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// YooAsset.OperationSystem
struct OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31  : public RuntimeObject
{
};

struct OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_StaticFields
{
	// System.Collections.Generic.List`1<YooAsset.AsyncOperationBase> YooAsset.OperationSystem::_operations
	List_1_t4F5C3340A86A42936A99CE1A6B886F090535F6ED* ____operations_0;
	// System.Collections.Generic.List`1<YooAsset.AsyncOperationBase> YooAsset.OperationSystem::_newList
	List_1_t4F5C3340A86A42936A99CE1A6B886F090535F6ED* ____newList_1;
	// System.Diagnostics.Stopwatch YooAsset.OperationSystem::_watch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ____watch_2;
	// System.Int64 YooAsset.OperationSystem::_frameTime
	int64_t ____frameTime_3;
	// System.Int64 YooAsset.OperationSystem::<MaxTimeSlice>k__BackingField
	int64_t ___U3CMaxTimeSliceU3Ek__BackingField_4;
};

// YooAsset.PathUtility
struct PathUtility_t820434FFD3142C7DEBC33F8C6DA67F3C5068BBD7  : public RuntimeObject
{
};

// YooAsset.ResourcePackage
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022  : public RuntimeObject
{
	// System.Boolean YooAsset.ResourcePackage::_isInitialize
	bool ____isInitialize_0;
	// System.String YooAsset.ResourcePackage::_initializeError
	String_t* ____initializeError_1;
	// YooAsset.EOperationStatus YooAsset.ResourcePackage::_initializeStatus
	int32_t ____initializeStatus_2;
	// YooAsset.EPlayMode YooAsset.ResourcePackage::_playMode
	int32_t ____playMode_3;
	// YooAsset.CacheManager YooAsset.ResourcePackage::_cacheMgr
	CacheManager_tE1367D7F36C98B0DD8F96443EAF5A09CC8B83AA8* ____cacheMgr_4;
	// YooAsset.PersistentManager YooAsset.ResourcePackage::_persistentMgr
	PersistentManager_t599AF63AB53EB9F9220CB52613466E05099DB186* ____persistentMgr_5;
	// YooAsset.DownloadManager YooAsset.ResourcePackage::_downloadMgr
	DownloadManager_tFA03763588A252CEC73CAAB480A6EBA3A9A2AC8D* ____downloadMgr_6;
	// YooAsset.ResourceManager YooAsset.ResourcePackage::_resourceMgr
	ResourceManager_tC27DBE237BAEAC755E5EB6AC4EB2B549387C3BDA* ____resourceMgr_7;
	// YooAsset.ResourceLoader YooAsset.ResourcePackage::_resourceLoader
	ResourceLoader_t5EA4AE0141C336DF8857D4D47B9E365A27FE835D* ____resourceLoader_8;
	// YooAsset.IBundleQuery YooAsset.ResourcePackage::_bundleQuery
	RuntimeObject* ____bundleQuery_9;
	// YooAsset.IPlayMode YooAsset.ResourcePackage::_playModeImpl
	RuntimeObject* ____playModeImpl_10;
	// System.String YooAsset.ResourcePackage::PackageName
	String_t* ___PackageName_11;
};

// YooAsset.SafeProxy
struct SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E  : public RuntimeObject
{
	// System.UInt32[] YooAsset.SafeProxy::_table
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____table_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// YooAsset.StringUtility
struct StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686  : public RuntimeObject
{
};

struct StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields
{
	// System.Text.StringBuilder YooAsset.StringUtility::_cacheBuilder
	StringBuilder_t* ____cacheBuilder_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// YooAsset.YooAssets
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56  : public RuntimeObject
{
};

struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields
{
	// System.Boolean YooAsset.YooAssets::_isInitialize
	bool ____isInitialize_0;
	// UnityEngine.GameObject YooAsset.YooAssets::_driver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____driver_1;
	// System.Collections.Generic.List`1<YooAsset.ResourcePackage> YooAsset.YooAssets::_packages
	List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* ____packages_2;
	// YooAsset.ResourcePackage YooAsset.YooAssets::_defaultPackage
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ____defaultPackage_3;
};

// YooAsset.YooLogger
struct YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF  : public RuntimeObject
{
};

struct YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields
{
	// YooAsset.ILogger YooAsset.YooLogger::Logger
	RuntimeObject* ___Logger_0;
};

// System.Collections.Generic.List`1/Enumerator<YooAsset.ResourcePackage>
struct Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// YooAsset.AllAssetsHandle
struct AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE  : public HandleBase_t571827F810EAE331C05542D54B2C396C605DB4DA
{
	// System.Action`1<YooAsset.AllAssetsHandle> YooAsset.AllAssetsHandle::_callback
	Action_1_t5AD92E5BF5CD65FFFEC3380D95162CDEE40C6DE4* ____callback_2;
};

// YooAsset.AssetHandle
struct AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3  : public HandleBase_t571827F810EAE331C05542D54B2C396C605DB4DA
{
	// System.Action`1<YooAsset.AssetHandle> YooAsset.AssetHandle::_callback
	Action_1_t8A357F9957A727C9D85A7C8D5B8FF423F7CD1B0D* ____callback_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// YooAsset.CRC32Algorithm
struct CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	// System.UInt32 YooAsset.CRC32Algorithm::_currentCrc
	uint32_t ____currentCrc_4;
};

struct CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields
{
	// YooAsset.SafeProxy YooAsset.CRC32Algorithm::_proxy
	SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* ____proxy_5;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// YooAsset.DownloaderOperation
struct DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
	// YooAsset.DownloadManager YooAsset.DownloaderOperation::_downloadMgr
	DownloadManager_tFA03763588A252CEC73CAAB480A6EBA3A9A2AC8D* ____downloadMgr_9;
	// System.String YooAsset.DownloaderOperation::_packageName
	String_t* ____packageName_10;
	// System.Int32 YooAsset.DownloaderOperation::_downloadingMaxNumber
	int32_t ____downloadingMaxNumber_11;
	// System.Int32 YooAsset.DownloaderOperation::_failedTryAgain
	int32_t ____failedTryAgain_12;
	// System.Int32 YooAsset.DownloaderOperation::_timeout
	int32_t ____timeout_13;
	// System.Collections.Generic.List`1<YooAsset.BundleInfo> YooAsset.DownloaderOperation::_bundleInfoList
	List_1_t943237520EBA876AFFDDA7CEB2622319659097AE* ____bundleInfoList_14;
	// System.Collections.Generic.List`1<YooAsset.DownloaderBase> YooAsset.DownloaderOperation::_downloaders
	List_1_t01C551675E768AA47C6770802F3DE41710533C48* ____downloaders_15;
	// System.Collections.Generic.List`1<YooAsset.DownloaderBase> YooAsset.DownloaderOperation::_removeList
	List_1_t01C551675E768AA47C6770802F3DE41710533C48* ____removeList_16;
	// System.Collections.Generic.List`1<YooAsset.DownloaderBase> YooAsset.DownloaderOperation::_failedList
	List_1_t01C551675E768AA47C6770802F3DE41710533C48* ____failedList_17;
	// System.Boolean YooAsset.DownloaderOperation::_isPause
	bool ____isPause_18;
	// System.Int64 YooAsset.DownloaderOperation::_lastDownloadBytes
	int64_t ____lastDownloadBytes_19;
	// System.Int32 YooAsset.DownloaderOperation::_lastDownloadCount
	int32_t ____lastDownloadCount_20;
	// System.Int64 YooAsset.DownloaderOperation::_cachedDownloadBytes
	int64_t ____cachedDownloadBytes_21;
	// System.Int32 YooAsset.DownloaderOperation::_cachedDownloadCount
	int32_t ____cachedDownloadCount_22;
	// YooAsset.DownloaderOperation/ESteps YooAsset.DownloaderOperation::_steps
	int32_t ____steps_23;
	// System.Int32 YooAsset.DownloaderOperation::<TotalDownloadCount>k__BackingField
	int32_t ___U3CTotalDownloadCountU3Ek__BackingField_24;
	// System.Int64 YooAsset.DownloaderOperation::<TotalDownloadBytes>k__BackingField
	int64_t ___U3CTotalDownloadBytesU3Ek__BackingField_25;
	// YooAsset.DownloaderOperation/OnDownloadOver YooAsset.DownloaderOperation::<OnDownloadOverCallback>k__BackingField
	OnDownloadOver_t42B784EDC39A773684AF38DCE8B6F4BADF82E0D6* ___U3COnDownloadOverCallbackU3Ek__BackingField_26;
	// YooAsset.DownloaderOperation/OnDownloadProgress YooAsset.DownloaderOperation::<OnDownloadProgressCallback>k__BackingField
	OnDownloadProgress_tBE0A65BD0027A02B8CD1EA74A709E17A58B866C6* ___U3COnDownloadProgressCallbackU3Ek__BackingField_27;
	// YooAsset.DownloaderOperation/OnDownloadError YooAsset.DownloaderOperation::<OnDownloadErrorCallback>k__BackingField
	OnDownloadError_t35039D2911B5CFD49EF3A4B02A7F0C7D80285206* ___U3COnDownloadErrorCallbackU3Ek__BackingField_28;
	// YooAsset.DownloaderOperation/OnStartDownloadFile YooAsset.DownloaderOperation::<OnStartDownloadFileCallback>k__BackingField
	OnStartDownloadFile_tB7A432CAC4DC47EF9279EBD4EE01EC27C248F2F9* ___U3COnStartDownloadFileCallbackU3Ek__BackingField_29;
};

// YooAsset.GameAsyncOperation
struct GameAsyncOperation_t381D498F36A436967E38E553EDDF3A77DFAD7160  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// YooAsset.RawFileHandle
struct RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3  : public HandleBase_t571827F810EAE331C05542D54B2C396C605DB4DA
{
	// System.Action`1<YooAsset.RawFileHandle> YooAsset.RawFileHandle::_callback
	Action_1_t4E8A78AAE4D3D94225030626B69248DBEA0690BE* ____callback_2;
};

// YooAsset.SceneHandle
struct SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9  : public HandleBase_t571827F810EAE331C05542D54B2C396C605DB4DA
{
	// System.Action`1<YooAsset.SceneHandle> YooAsset.SceneHandle::_callback
	Action_1_tAB2D36EC9101D1E3344D0A2493599AF9C7B12D57* ____callback_2;
	// System.String YooAsset.SceneHandle::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// YooAsset.SubAssetsHandle
struct SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B  : public HandleBase_t571827F810EAE331C05542D54B2C396C605DB4DA
{
	// System.Action`1<YooAsset.SubAssetsHandle> YooAsset.SubAssetsHandle::_callback
	Action_1_tF835693B61B023DA9730598D7984F238BA777E44* ____callback_2;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_6;
};

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B  : public MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A
{
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;
};

struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_StaticFields
{
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K_9;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// YooAsset.ResourceDownloaderOperation
struct ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3  : public DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2
{
};

// YooAsset.ResourceImporterOperation
struct ResourceImporterOperation_tF8A4EBDE73A54A2E5C9494E415A9D552ED41AF53  : public DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2
{
};

// YooAsset.ResourceUnpackerOperation
struct ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4  : public DownloaderOperation_tEE91FBFFA070669BBA7646811B466214EA3207F2
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// YooAsset.DownloadRequestDelegate
struct DownloadRequestDelegate_t8E1F5C86FCE3954D557AA2830E9C174E6E3F5489  : public MulticastDelegate_t
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// YooAsset.YooAssetsDriver
struct YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields
{
	// System.Int32 YooAsset.YooAssetsDriver::LastestUpdateFrame
	int32_t ___LastestUpdateFrame_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// YooAsset.AssetInfo[]
struct AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9  : public RuntimeArray
{
	ALIGN_FIELD (8) AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* m_Items[1];

	inline AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void YooAsset.SafeProxy::Init(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___poly0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HashAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, const RuntimeMethod* method) ;
// System.UInt32 YooAsset.CRC32Algorithm::AppendInternal(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_AppendInternal_m60C297C2EADED13A9A9332DB0573A31752BD93A9 (uint32_t ___initial0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.UInt32 YooAsset.CRC32Algorithm::Append(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_Append_m511C8C217AAA52C291FEE8B84FB4B5C9525C6605 (uint32_t ___initial0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method) ;
// System.UInt32 YooAsset.CRC32Algorithm::Append(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_Append_m51A8BD82A3E35087AF901F20F1B729DB2E842AAB (uint32_t ___initial0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.UInt32 YooAsset.CRC32Algorithm::ComputeAndWriteToEnd(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_ComputeAndWriteToEnd_m5E5DF4FB46B097C467B42A4797951F87C345F8F6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.UInt32 YooAsset.SafeProxy::Append(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SafeProxy_Append_m4537F0777BF86A68EF103F1E127BBDA372D4353E (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___crc0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void YooAsset.SafeProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy__ctor_m20D5BAFBED63005F32518A267B10569A87AFA329 (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String YooAsset.StringUtility::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m07AEFD7479ADCFB1171724F07E35825315C650B9 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String YooAsset.StringUtility::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m7D9917BB0E61F93FFCD7EAB49D337CA03C75301F (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String YooAsset.StringUtility::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m8D4356F525CD5A5738B8BA775C034C84C3E877BC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2 (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151 (StringBuilder_t* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m2476A52B6C6738848014276E41712CE8ADEA5FEC (String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void YooAsset.FileUtility::CreateFileDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateFileDirectory_m90273796131B15E9BA5870D08F41352C5C5C2819 (String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void YooAsset.FileUtility::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateDirectory_m311236A72F49AEDBE56AB2C65283DAC6967B3FD0 (String_t* ___directory0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// System.Int64 System.IO.FileInfo::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_mAECE8A858AA77E4CA5425A67AF6370C54A9C598E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::BytesSHA1(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_BytesSHA1_m9DA320D5E747DA7161CDF99E6B8648585EA95753 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::StreamSHA1(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamSHA1_mC2D465A888291D6B848E5F5DFBE07D31BFA3EAAD (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::FileSHA1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileSHA1_m4F1792B20F400860B5DD5669D3508B2248E620B2 (String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void YooAsset.YooLogger::Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Exception_m00152217F2FD40BFBEF98D3C2BE17D018948954F (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* HashAlgorithm_Create_m39BE979174AC571177E62B96D41910D750DDF867 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___inputStream0, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_ToString_m64E6F070ECC66294F44F4D163C97A7C9F891FF41 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashBytes0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::BytesMD5(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_BytesMD5_m8CE3F5934C56918CDF90836B8503136DE93D6F3E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::StreamMD5(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamMD5_m68993D697571177ECD1352744D3BFAA890A8C33B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::FileMD5(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileMD5_m8DFF39ECC307616E803DF95DA1EC47A32ED37AE2 (String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067 (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* __this, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::BytesCRC32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_BytesCRC32_m850D3A402A79C649B8DD839C30ED31B3C88F20C8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::StreamCRC32(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamCRC32_mE6FDBEB13FC8C779311EE2F6AF899B00259010B9 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::FileCRC32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileCRC32_m382201CFB240F691614D32D5B1E8944162B6330E (String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void YooAsset.CRC32Algorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm__ctor_m294E2814CE76E07DF72E04905B4900D80FD10F7B (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<YooAsset.YooAssetsDriver>()
inline YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void YooAsset.OperationSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationSystem_Initialize_mB098338799B27A985F659DBD1C4F0E98A2EF26FF (const RuntimeMethod* method) ;
// System.Void YooAsset.OperationSystem::DestroyAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationSystem_DestroyAll_m2146DB124C24096832367B5BAC665D523193CDE4 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<YooAsset.ResourcePackage>::GetEnumerator()
inline Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, const RuntimeMethod* method)
{
	Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<YooAsset.ResourcePackage>::Dispose()
inline void Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<YooAsset.ResourcePackage>::get_Current()
inline ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827* __this, const RuntimeMethod* method)
{
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void YooAsset.ResourcePackage::DestroyPackage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcePackage_DestroyPackage_m218AF595F5FCA61623CC0ADD3EACA493A8E6ECD9 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<YooAsset.ResourcePackage>::MoveNext()
inline bool Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void System.Collections.Generic.List`1<YooAsset.ResourcePackage>::Clear()
inline void List_1_Clear_m971585063A81736B51FEDF8EDDF8B6F250C37006_inline (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void YooAsset.OperationSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationSystem_Update_m14AD41127B49ABB5BDCDFF9BAA474F258585DC8A (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<YooAsset.ResourcePackage>::get_Item(System.Int32)
inline ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046 (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void YooAsset.ResourcePackage::UpdatePackage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcePackage_UpdatePackage_m357E84E1333D3C774D10244776A1D709538C886C (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<YooAsset.ResourcePackage>::get_Count()
inline int32_t List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_inline (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void YooAsset.YooAssets::CheckException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_CheckException_mF5811ACFDE01F79D582D519E29CBCB9128E99B34 (String_t* ___packageName0, const RuntimeMethod* method) ;
// System.Boolean YooAsset.YooAssets::ContainsPackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YooAssets_ContainsPackage_m2A01F6C27195F188A2BAD95D931C77E9E78B8C62 (String_t* ___packageName0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void YooAsset.ResourcePackage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcePackage__ctor_m862FA89D0D7DEB3D0D78E9183EE2FFECA7DA97B3 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___packageName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<YooAsset.ResourcePackage>::Add(T)
inline void List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_inline (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// YooAsset.ResourcePackage YooAsset.YooAssets::GetPackageInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_GetPackageInternal_mFEF478EF4E7CF5A787889ACE6F49CBFD5FBD9AA2 (String_t* ___packageName0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void YooAsset.YooLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Error_m71B0932917D567D1F0D8AA66396747A6D9CE928B (String_t* ___info0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<YooAsset.ResourcePackage>::Remove(T)
inline bool List_1_Remove_mF4CB7EA6B869DC2BEA6EFE63005DD675B1A444CE (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void YooAsset.OperationSystem::StartOperation(System.String,YooAsset.AsyncOperationBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationSystem_StartOperation_m35A36762662A443088F72DC6D74C1BFF7D3201C7 (String_t* ___packageName0, AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032* ___operation1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void YooAsset.DownloadHelper::set_ClearFileResponseCodes(System.Collections.Generic.List`1<System.Int64>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DownloadHelper_set_ClearFileResponseCodes_mB2BC4C20E053B91ECFEBE2D04B71B8EEC0072AE9_inline (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* ___value0, const RuntimeMethod* method) ;
// System.Void YooAsset.YooLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Warning_mC903CB4ABE0854A803317EAE07ADE9D79A2E8121 (String_t* ___info0, const RuntimeMethod* method) ;
// System.Void YooAsset.OperationSystem::set_MaxTimeSlice(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OperationSystem_set_MaxTimeSlice_mFA4EF030005990EAD63A26ADC0EEA26671365A62_inline (int64_t ___value0, const RuntimeMethod* method) ;
// System.Void YooAsset.DebugReport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugReport__ctor_m5569E5C90FF7700A571ABA2F4B4D07A320457E43 (DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// YooAsset.DebugPackageData YooAsset.ResourcePackage::GetDebugPackageData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* ResourcePackage_GetDebugPackageData_mAD38FFF02B859916E6D0F09CDC307B94C7B09820 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<YooAsset.DebugPackageData>::Add(T)
inline void List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_inline (List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6* __this, DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Boolean YooAsset.ResourcePackage::IsNeedDownloadFromRemote(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourcePackage_IsNeedDownloadFromRemote_mFA53BFED3CAC8F0ADABD2C7C874D6D92801807DB (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, const RuntimeMethod* method) ;
// System.Boolean YooAsset.ResourcePackage::IsNeedDownloadFromRemote(YooAsset.AssetInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourcePackage_IsNeedDownloadFromRemote_m03B3BAAFB9DA506BF815136D45A415C0FB022D54 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, const RuntimeMethod* method) ;
// YooAsset.AssetInfo[] YooAsset.ResourcePackage::GetAssetInfos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9* ResourcePackage_GetAssetInfos_mE6348F8DFF65DCCEAE8A6FB0C34668C429802FBE (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// YooAsset.AssetInfo[] YooAsset.ResourcePackage::GetAssetInfos(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9* ResourcePackage_GetAssetInfos_m4018DA404673ADB6E3FB0153E1926A5DE42F3459 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tags0, const RuntimeMethod* method) ;
// YooAsset.AssetInfo YooAsset.ResourcePackage::GetAssetInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ResourcePackage_GetAssetInfo_mE2742035E89CFCEA80E51CC229BBCD676FDA50C0 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, const RuntimeMethod* method) ;
// YooAsset.AssetInfo YooAsset.ResourcePackage::GetAssetInfo(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ResourcePackage_GetAssetInfo_m7254B7D622C7EB563B6CD0A2ED5C99AA1642E2DB (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, Type_t* ___type1, const RuntimeMethod* method) ;
// YooAsset.AssetInfo YooAsset.ResourcePackage::GetAssetInfoByGUID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ResourcePackage_GetAssetInfoByGUID_mCCA3E16974DF506C2889284E792A45FDBE8AB12A (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___assetGUID0, const RuntimeMethod* method) ;
// YooAsset.AssetInfo YooAsset.ResourcePackage::GetAssetInfoByGUID(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ResourcePackage_GetAssetInfoByGUID_m2B31D11A1BCD6232ADB7F643AFA0367E7ED7B30F (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___assetGUID0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Boolean YooAsset.ResourcePackage::CheckLocationValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourcePackage_CheckLocationValid_mE0FF731E63B7B72EB162465FB1F6563F34CAAF0B (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, const RuntimeMethod* method) ;
// YooAsset.RawFileHandle YooAsset.ResourcePackage::LoadRawFileSync(YooAsset.AssetInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* ResourcePackage_LoadRawFileSync_m01199D0841482106613E7A583C911542D3F465D1 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, const RuntimeMethod* method) ;
// YooAsset.RawFileHandle YooAsset.ResourcePackage::LoadRawFileSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* ResourcePackage_LoadRawFileSync_m9562D28857E14742E3C227267B5C308D2AE7B491 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, const RuntimeMethod* method) ;
// YooAsset.RawFileHandle YooAsset.ResourcePackage::LoadRawFileAsync(YooAsset.AssetInfo,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* ResourcePackage_LoadRawFileAsync_mA37D73EA9B5C7BA1C0A1E183C1D92C0E6ED1E6C0 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, uint32_t ___priority1, const RuntimeMethod* method) ;
// YooAsset.RawFileHandle YooAsset.ResourcePackage::LoadRawFileAsync(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* ResourcePackage_LoadRawFileAsync_m4DA8B3D37F65176A0EF90DB79F1610F5CDEFBA14 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, uint32_t ___priority1, const RuntimeMethod* method) ;
// YooAsset.SceneHandle YooAsset.ResourcePackage::LoadSceneSync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* ResourcePackage_LoadSceneSync_mC264AEB21EF895D576F24147972FE9CF10496611 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, int32_t ___sceneMode1, const RuntimeMethod* method) ;
// YooAsset.SceneHandle YooAsset.ResourcePackage::LoadSceneSync(YooAsset.AssetInfo,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* ResourcePackage_LoadSceneSync_m6DA689D475AF191C388941E631BA6D2478FD56E9 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, int32_t ___sceneMode1, const RuntimeMethod* method) ;
// YooAsset.SceneHandle YooAsset.ResourcePackage::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* ResourcePackage_LoadSceneAsync_mB8ABF37C34DD54301BC9D2B150639142030884FE (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, int32_t ___sceneMode1, bool ___suspendLoad2, uint32_t ___priority3, const RuntimeMethod* method) ;
// YooAsset.SceneHandle YooAsset.ResourcePackage::LoadSceneAsync(YooAsset.AssetInfo,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* ResourcePackage_LoadSceneAsync_m0786A0200D7CDCF414A9945037185969D7550283 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, int32_t ___sceneMode1, bool ___suspendLoad2, uint32_t ___priority3, const RuntimeMethod* method) ;
// YooAsset.AssetHandle YooAsset.ResourcePackage::LoadAssetSync(YooAsset.AssetInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* ResourcePackage_LoadAssetSync_m90C280D7CBBAFEB3E683B346E7620E9283812873 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, const RuntimeMethod* method) ;
// YooAsset.AssetHandle YooAsset.ResourcePackage::LoadAssetSync(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* ResourcePackage_LoadAssetSync_m90D26C7E1E47D7FFA16F7C2E81D3C92A355A7D18 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, Type_t* ___type1, const RuntimeMethod* method) ;
// YooAsset.AssetHandle YooAsset.ResourcePackage::LoadAssetSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* ResourcePackage_LoadAssetSync_m949F0103B6DB55EBC7C03D3DC79B6AF7185C87DC (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, const RuntimeMethod* method) ;
// YooAsset.AssetHandle YooAsset.ResourcePackage::LoadAssetAsync(YooAsset.AssetInfo,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* ResourcePackage_LoadAssetAsync_mA6AC4E5FE773FF2BA7C99F7BF83CD246CD85B3A4 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, uint32_t ___priority1, const RuntimeMethod* method) ;
// YooAsset.AssetHandle YooAsset.ResourcePackage::LoadAssetAsync(System.String,System.Type,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* ResourcePackage_LoadAssetAsync_m54BA0BD48F1DF85A75D15C9FFD6A5560E7F67DB0 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, Type_t* ___type1, uint32_t ___priority2, const RuntimeMethod* method) ;
// YooAsset.AssetHandle YooAsset.ResourcePackage::LoadAssetAsync(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* ResourcePackage_LoadAssetAsync_m606098185DD34EDFDF4AC06E6564BF7279E6DA16 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, uint32_t ___priority1, const RuntimeMethod* method) ;
// YooAsset.SubAssetsHandle YooAsset.ResourcePackage::LoadSubAssetsSync(YooAsset.AssetInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* ResourcePackage_LoadSubAssetsSync_m837CD7C471FB8996F1062E6AED6F63C1D6E999ED (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, const RuntimeMethod* method) ;
// YooAsset.SubAssetsHandle YooAsset.ResourcePackage::LoadSubAssetsSync(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* ResourcePackage_LoadSubAssetsSync_m864560654EE2AB25E2830CD13238ADCAC668391B (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, Type_t* ___type1, const RuntimeMethod* method) ;
// YooAsset.SubAssetsHandle YooAsset.ResourcePackage::LoadSubAssetsSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* ResourcePackage_LoadSubAssetsSync_m4EAFE649C43D65A77E107331800A15D8F58DDC3B (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, const RuntimeMethod* method) ;
// YooAsset.SubAssetsHandle YooAsset.ResourcePackage::LoadSubAssetsAsync(YooAsset.AssetInfo,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* ResourcePackage_LoadSubAssetsAsync_m1CE13EDB4B571D6BDC571A22361CE35AF38B15BD (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, uint32_t ___priority1, const RuntimeMethod* method) ;
// YooAsset.SubAssetsHandle YooAsset.ResourcePackage::LoadSubAssetsAsync(System.String,System.Type,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* ResourcePackage_LoadSubAssetsAsync_m62F3E23CF27E80D8F5AC1A70639F3D4818C61238 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, Type_t* ___type1, uint32_t ___priority2, const RuntimeMethod* method) ;
// YooAsset.SubAssetsHandle YooAsset.ResourcePackage::LoadSubAssetsAsync(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* ResourcePackage_LoadSubAssetsAsync_mC708877673180FC66887FB12E64865D828412169 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, uint32_t ___priority1, const RuntimeMethod* method) ;
// YooAsset.AllAssetsHandle YooAsset.ResourcePackage::LoadAllAssetsSync(YooAsset.AssetInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* ResourcePackage_LoadAllAssetsSync_m366D59292E3986EBBA51041C78811222206AB595 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, const RuntimeMethod* method) ;
// YooAsset.AllAssetsHandle YooAsset.ResourcePackage::LoadAllAssetsSync(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* ResourcePackage_LoadAllAssetsSync_mDCE09807D0E70B94464262B70B42F7AEE9F95667 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, Type_t* ___type1, const RuntimeMethod* method) ;
// YooAsset.AllAssetsHandle YooAsset.ResourcePackage::LoadAllAssetsSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* ResourcePackage_LoadAllAssetsSync_m64A18CAD0125FB76B72473316B3D1DF40408B537 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, const RuntimeMethod* method) ;
// YooAsset.AllAssetsHandle YooAsset.ResourcePackage::LoadAllAssetsAsync(YooAsset.AssetInfo,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* ResourcePackage_LoadAllAssetsAsync_m633B42B258ACA69C7B1D1C94079F69A51BF30635 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, uint32_t ___priority1, const RuntimeMethod* method) ;
// YooAsset.AllAssetsHandle YooAsset.ResourcePackage::LoadAllAssetsAsync(System.String,System.Type,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* ResourcePackage_LoadAllAssetsAsync_mF58014D6F8F5B0B3A4CA308CC5884D2D291D1392 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, Type_t* ___type1, uint32_t ___priority2, const RuntimeMethod* method) ;
// YooAsset.AllAssetsHandle YooAsset.ResourcePackage::LoadAllAssetsAsync(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* ResourcePackage_LoadAllAssetsAsync_mB03D6A470ABED0F5DD76F331CDCED0C3B752A206 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, uint32_t ___priority1, const RuntimeMethod* method) ;
// YooAsset.ResourceDownloaderOperation YooAsset.ResourcePackage::CreateResourceDownloader(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* ResourcePackage_CreateResourceDownloader_m7BCBA05D79698FD8C1EC1AAC30A02A4300365DE8 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, int32_t ___downloadingMaxNumber0, int32_t ___failedTryAgain1, int32_t ___timeout2, const RuntimeMethod* method) ;
// YooAsset.ResourceDownloaderOperation YooAsset.ResourcePackage::CreateResourceDownloader(System.String[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* ResourcePackage_CreateResourceDownloader_mE3376CDD2771B78F6F0E9732DC8BA1DE0056C72C (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tags0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, int32_t ___timeout3, const RuntimeMethod* method) ;
// YooAsset.ResourceDownloaderOperation YooAsset.ResourcePackage::CreateBundleDownloader(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* ResourcePackage_CreateBundleDownloader_mCF4370B51C39939E9AAD44FA0657B2B9F79E145C (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___location0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, int32_t ___timeout3, const RuntimeMethod* method) ;
// YooAsset.ResourceDownloaderOperation YooAsset.ResourcePackage::CreateBundleDownloader(System.String[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* ResourcePackage_CreateBundleDownloader_mA439BB47573AE021D2884AAE25104025E5AB22DA (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___locations0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, int32_t ___timeout3, const RuntimeMethod* method) ;
// YooAsset.ResourceDownloaderOperation YooAsset.ResourcePackage::CreateBundleDownloader(YooAsset.AssetInfo,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* ResourcePackage_CreateBundleDownloader_mAD0011B3FE4529693E4F5F47871DFFD12CB31B36 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, int32_t ___timeout3, const RuntimeMethod* method) ;
// YooAsset.ResourceDownloaderOperation YooAsset.ResourcePackage::CreateBundleDownloader(YooAsset.AssetInfo[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* ResourcePackage_CreateBundleDownloader_m5C97CF650D6106522EE9D165654374DF5EC91CA0 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9* ___assetInfos0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, int32_t ___timeout3, const RuntimeMethod* method) ;
// YooAsset.ResourceUnpackerOperation YooAsset.ResourcePackage::CreateResourceUnpacker(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4* ResourcePackage_CreateResourceUnpacker_m68DD0C1AA64B36E834063EB0210756B2B254766F (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, int32_t ___unpackingMaxNumber0, int32_t ___failedTryAgain1, const RuntimeMethod* method) ;
// YooAsset.ResourceUnpackerOperation YooAsset.ResourcePackage::CreateResourceUnpacker(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4* ResourcePackage_CreateResourceUnpacker_mAAD6B3A46A1F23AEAE01BCA910BE315D96AF912C (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___tag0, int32_t ___unpackingMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) ;
// YooAsset.ResourceUnpackerOperation YooAsset.ResourcePackage::CreateResourceUnpacker(System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4* ResourcePackage_CreateResourceUnpacker_m0B320414E6DDE9A50B7D4405E0BF6625AC7AE7EB (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tags0, int32_t ___unpackingMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) ;
// YooAsset.ResourceImporterOperation YooAsset.ResourcePackage::CreateResourceImporter(System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceImporterOperation_tF8A4EBDE73A54A2E5C9494E415A9D552ED41AF53* ResourcePackage_CreateResourceImporter_mFE1693629D8FB10807574C1D2F500CFACE58A106 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___filePaths0, int32_t ___importerMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<YooAsset.ResourcePackage>::.ctor()
inline void List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728 (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void YooAsset.YooAssets::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Update_mFCE3CD9A8495DAF42CBA1E558DEF7A3A6A56FF41 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.SafeProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy__ctor_m20D5BAFBED63005F32518A267B10569A87AFA329 (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly uint[] _table = new uint[16 * 256];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->____table_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____table_1), (void*)L_0);
		// internal SafeProxy()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Init(Poly);
		SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF(__this, ((int32_t)-306674912), NULL);
		// }
		return;
	}
}
// System.Void YooAsset.SafeProxy::Init(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___poly0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t G_B6_0 = 0;
	{
		// var table = _table;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____table_1;
		V_0 = L_0;
		// for (uint i = 0; i < 256; i++)
		V_1 = 0;
		goto IL_004e;
	}

IL_000b:
	{
		// uint res = i;
		uint32_t L_1 = V_1;
		V_2 = L_1;
		// for (int t = 0; t < 16; t++)
		V_3 = 0;
		goto IL_0045;
	}

IL_0011:
	{
		// for (int k = 0; k < 8; k++) res = (res & 1) == 1 ? poly ^ (res >> 1) : (res >> 1);
		V_4 = 0;
		goto IL_002d;
	}

IL_0016:
	{
		// for (int k = 0; k < 8; k++) res = (res & 1) == 1 ? poly ^ (res >> 1) : (res >> 1);
		uint32_t L_2 = V_2;
		if ((((int32_t)((int32_t)((int32_t)L_2&1))) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_3 = V_2;
		G_B6_0 = ((uint32_t)(((int32_t)((uint32_t)L_3>>1))));
		goto IL_0026;
	}

IL_0021:
	{
		uint32_t L_4 = ___poly0;
		uint32_t L_5 = V_2;
		G_B6_0 = ((uint32_t)(((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>1))))));
	}

IL_0026:
	{
		V_2 = G_B6_0;
		// for (int k = 0; k < 8; k++) res = (res & 1) == 1 ? poly ^ (res >> 1) : (res >> 1);
		int32_t L_6 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002d:
	{
		// for (int k = 0; k < 8; k++) res = (res & 1) == 1 ? poly ^ (res >> 1) : (res >> 1);
		int32_t L_7 = V_4;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0016;
		}
	}
	{
		// table[(t * 256) + i] = res;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		int32_t L_9 = V_3;
		uint32_t L_10 = V_1;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)256)))), ((int64_t)(uint64_t)L_10)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF_RuntimeMethod_var);
		uint32_t L_11 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)256)))), ((int64_t)(uint64_t)L_10))))), (uint32_t)L_11);
		// for (int t = 0; t < 16; t++)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0045:
	{
		// for (int t = 0; t < 16; t++)
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)16))))
		{
			goto IL_0011;
		}
	}
	{
		// for (uint i = 0; i < 256; i++)
		uint32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
	}

IL_004e:
	{
		// for (uint i = 0; i < 256; i++)
		uint32_t L_15 = V_1;
		if ((!(((uint32_t)L_15) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.UInt32 YooAsset.SafeProxy::Append(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SafeProxy_Append_m4537F0777BF86A68EF103F1E127BBDA372D4353E (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___crc0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		// uint crcLocal = uint.MaxValue ^ crc;
		uint32_t L_0 = ___crc0;
		V_0 = ((int32_t)((-1)^(int32_t)L_0));
		// uint[] table = _table;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____table_1;
		V_1 = L_1;
		goto IL_0117;
	}

IL_0010:
	{
		// var a = table[(3 * 256) + input[offset + 12]]
		//     ^ table[(2 * 256) + input[offset + 13]]
		//     ^ table[(1 * 256) + input[offset + 14]]
		//     ^ table[(0 * 256) + input[offset + 15]];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input1;
		int32_t L_4 = ___offset2;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)12)));
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(((int32_t)768), (int32_t)L_6));
		uint32_t L_8 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___input1;
		int32_t L_11 = ___offset2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)13)));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)512), (int32_t)L_13));
		uint32_t L_15 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___input1;
		int32_t L_18 = ___offset2;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)14)));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)256), (int32_t)L_20));
		uint32_t L_22 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___input1;
		int32_t L_25 = ___offset2;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, ((int32_t)15)));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		uint8_t L_28 = L_27;
		uint32_t L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_2 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_8^(int32_t)L_15))^(int32_t)L_22))^(int32_t)L_29));
		// var b = table[(7 * 256) + input[offset + 8]]
		//     ^ table[(6 * 256) + input[offset + 9]]
		//     ^ table[(5 * 256) + input[offset + 10]]
		//     ^ table[(4 * 256) + input[offset + 11]];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___input1;
		int32_t L_32 = ___offset2;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 8));
		uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_30);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(((int32_t)1792), (int32_t)L_34));
		uint32_t L_36 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___input1;
		int32_t L_39 = ___offset2;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, ((int32_t)9)));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_37);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(((int32_t)1536), (int32_t)L_41));
		uint32_t L_43 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___input1;
		int32_t L_46 = ___offset2;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, ((int32_t)10)));
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_44);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(((int32_t)1280), (int32_t)L_48));
		uint32_t L_50 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___input1;
		int32_t L_53 = ___offset2;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, ((int32_t)11)));
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_51);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(((int32_t)1024), (int32_t)L_55));
		uint32_t L_57 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_36^(int32_t)L_43))^(int32_t)L_50))^(int32_t)L_57));
		// var c = table[(11 * 256) + input[offset + 4]]
		//     ^ table[(10 * 256) + input[offset + 5]]
		//     ^ table[(9 * 256) + input[offset + 6]]
		//     ^ table[(8 * 256) + input[offset + 7]];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ___input1;
		int32_t L_60 = ___offset2;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint8_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_58);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(((int32_t)2816), (int32_t)L_62));
		uint32_t L_64 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___input1;
		int32_t L_67 = ___offset2;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_65);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(((int32_t)2560), (int32_t)L_69));
		uint32_t L_71 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___input1;
		int32_t L_74 = ___offset2;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 6));
		uint8_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_72);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(((int32_t)2304), (int32_t)L_76));
		uint32_t L_78 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = ___input1;
		int32_t L_81 = ___offset2;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 7));
		uint8_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_79);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(((int32_t)2048), (int32_t)L_83));
		uint32_t L_85 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_4 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_64^(int32_t)L_71))^(int32_t)L_78))^(int32_t)L_85));
		// var d = table[(15 * 256) + ((byte)crcLocal ^ input[offset])]
		//     ^ table[(14 * 256) + ((byte)(crcLocal >> 8) ^ input[offset + 1])]
		//     ^ table[(13 * 256) + ((byte)(crcLocal >> 16) ^ input[offset + 2])]
		//     ^ table[(12 * 256) + ((crcLocal >> 24) ^ input[offset + 3])];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = V_1;
		uint32_t L_87 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___input1;
		int32_t L_89 = ___offset2;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_86);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(((int32_t)3840), ((int32_t)(((int32_t)(uint8_t)L_87)^(int32_t)L_91))));
		uint32_t L_93 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = V_1;
		uint32_t L_95 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ___input1;
		int32_t L_97 = ___offset2;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		uint8_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_94);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add(((int32_t)3584), ((int32_t)(((int32_t)(uint8_t)((int32_t)((uint32_t)L_95>>8)))^(int32_t)L_99))));
		uint32_t L_101 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = V_1;
		uint32_t L_103 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = ___input1;
		int32_t L_105 = ___offset2;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 2));
		uint8_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_102);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(((int32_t)3328), ((int32_t)(((int32_t)(uint8_t)((int32_t)((uint32_t)L_103>>((int32_t)16))))^(int32_t)L_107))));
		uint32_t L_109 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = V_1;
		uint32_t L_111 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = ___input1;
		int32_t L_113 = ___offset2;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 3));
		uint8_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_110);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(((int32_t)3072), ((int32_t)(((int32_t)((uint32_t)L_111>>((int32_t)24)))^(int32_t)L_115))));
		uint32_t L_117 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		// crcLocal = d ^ c ^ b ^ a;
		uint32_t L_118 = V_4;
		uint32_t L_119 = V_3;
		uint32_t L_120 = V_2;
		V_0 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_93^(int32_t)L_101))^(int32_t)L_109))^(int32_t)L_117))^(int32_t)L_118))^(int32_t)L_119))^(int32_t)L_120));
		// offset += 16;
		int32_t L_121 = ___offset2;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_121, ((int32_t)16)));
		// length -= 16;
		int32_t L_122 = ___length3;
		___length3 = ((int32_t)il2cpp_codegen_subtract(L_122, ((int32_t)16)));
	}

IL_0117:
	{
		// while (length >= 16)
		int32_t L_123 = ___length3;
		if ((((int32_t)L_123) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0134;
	}

IL_0122:
	{
		// crcLocal = table[(byte)(crcLocal ^ input[offset++])] ^ crcLocal >> 8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = V_1;
		uint32_t L_125 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = ___input1;
		int32_t L_127 = ___offset2;
		int32_t L_128 = L_127;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_128, 1));
		NullCheck(L_126);
		int32_t L_129 = L_128;
		uint8_t L_130 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_124);
		int32_t L_131 = ((int32_t)(uint8_t)((int32_t)((int32_t)L_125^(int32_t)L_130)));
		uint32_t L_132 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		uint32_t L_133 = V_0;
		V_0 = ((int32_t)((int32_t)L_132^((int32_t)((uint32_t)L_133>>8))));
	}

IL_0134:
	{
		// while (--length >= 0)
		int32_t L_134 = ___length3;
		int32_t L_135 = ((int32_t)il2cpp_codegen_subtract(L_134, 1));
		___length3 = L_135;
		if ((((int32_t)L_135) >= ((int32_t)0)))
		{
			goto IL_0122;
		}
	}
	{
		// return crcLocal ^ uint.MaxValue;
		uint32_t L_136 = V_0;
		return ((int32_t)((int32_t)L_136^(-1)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.CRC32Algorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm__ctor_m294E2814CE76E07DF72E04905B4900D80FD10F7B (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) 
{
	{
		// public CRC32Algorithm()
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		// HashSizeValue = 32;
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue_1 = ((int32_t)32);
		// }
		return;
	}
}
// System.Void YooAsset.CRC32Algorithm::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm_Initialize_m27E8AA0C2D4BDA0382732C455ED84D1B9A9FD7AF (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) 
{
	{
		// _currentCrc = 0;
		__this->____currentCrc_4 = 0;
		// }
		return;
	}
}
// System.Void YooAsset.CRC32Algorithm::HashCore(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm_HashCore_mEB09D2ED78FA41E68EA2435FCE1BC5B9C46FD25C (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentCrc = AppendInternal(_currentCrc, input, offset, length);
		uint32_t L_0 = __this->____currentCrc_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = CRC32Algorithm_AppendInternal_m60C297C2EADED13A9A9332DB0573A31752BD93A9(L_0, L_1, L_2, L_3, NULL);
		__this->____currentCrc_4 = L_4;
		// }
		return;
	}
}
// System.Byte[] YooAsset.CRC32Algorithm::HashFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CRC32Algorithm_HashFinal_mD8007FC23543C5FFF5C689201CCCFF5A4A675E5F (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BitConverter.IsLittleEndian)
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// return new[] { (byte)_currentCrc, (byte)(_currentCrc >> 8), (byte)(_currentCrc >> 16), (byte)(_currentCrc >> 24) };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		uint32_t L_3 = __this->____currentCrc_4;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_2;
		uint32_t L_5 = __this->____currentCrc_4;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_4;
		uint32_t L_7 = __this->____currentCrc_4;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_7>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_6;
		uint32_t L_9 = __this->____currentCrc_4;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_9>>((int32_t)24)))));
		return L_8;
	}

IL_003e:
	{
		// return new[] { (byte)(_currentCrc >> 24), (byte)(_currentCrc >> 16), (byte)(_currentCrc >> 8), (byte)_currentCrc };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		uint32_t L_12 = __this->____currentCrc_4;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_12>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_11;
		uint32_t L_14 = __this->____currentCrc_4;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_13;
		uint32_t L_16 = __this->____currentCrc_4;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_16>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_15;
		uint32_t L_18 = __this->____currentCrc_4;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_18));
		return L_17;
	}
}
// System.UInt32 YooAsset.CRC32Algorithm::Append(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_Append_m511C8C217AAA52C291FEE8B84FB4B5C9525C6605 (uint32_t ___initial0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (input == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("input");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CRC32Algorithm_Append_m511C8C217AAA52C291FEE8B84FB4B5C9525C6605_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (offset < 0 || length < 0 || offset + length > input.Length)
		int32_t L_2 = ___offset2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___length3;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_4 = ___offset2;
		int32_t L_5 = ___length3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0029;
		}
	}

IL_001e:
	{
		// throw new ArgumentOutOfRangeException("length");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CRC32Algorithm_Append_m511C8C217AAA52C291FEE8B84FB4B5C9525C6605_RuntimeMethod_var)));
	}

IL_0029:
	{
		// return AppendInternal(initial, input, offset, length);
		uint32_t L_8 = ___initial0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input1;
		int32_t L_10 = ___offset2;
		int32_t L_11 = ___length3;
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_12;
		L_12 = CRC32Algorithm_AppendInternal_m60C297C2EADED13A9A9332DB0573A31752BD93A9(L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// System.UInt32 YooAsset.CRC32Algorithm::Append(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_Append_m51A8BD82A3E35087AF901F20F1B729DB2E842AAB (uint32_t ___initial0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (input == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CRC32Algorithm_Append_m51A8BD82A3E35087AF901F20F1B729DB2E842AAB_RuntimeMethod_var)));
	}

IL_0009:
	{
		// return AppendInternal(initial, input, 0, input.Length);
		uint32_t L_2 = ___initial0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input1;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = CRC32Algorithm_AppendInternal_m60C297C2EADED13A9A9332DB0573A31752BD93A9(L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		return L_5;
	}
}
// System.UInt32 YooAsset.CRC32Algorithm::Compute(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_Compute_mFC1CDD8245332D1C41491FE2F07491E2114DADF8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Append(0, input, offset, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___length2;
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = CRC32Algorithm_Append_m511C8C217AAA52C291FEE8B84FB4B5C9525C6605(0, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UInt32 YooAsset.CRC32Algorithm::Compute(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_Compute_mB359038E48B00C1554B66BE29329A99D9D1A762F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Append(0, input);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = CRC32Algorithm_Append_m51A8BD82A3E35087AF901F20F1B729DB2E842AAB(0, L_0, NULL);
		return L_1;
	}
}
// System.UInt32 YooAsset.CRC32Algorithm::ComputeAndWriteToEnd(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_ComputeAndWriteToEnd_m5E5DF4FB46B097C467B42A4797951F87C345F8F6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (length + 4 > input.Length)
		int32_t L_0 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 4))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("length", "Length of data should be less than array length - 4 bytes of CRC data");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9896AE071E6E32C91E8C214612408897432E807E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CRC32Algorithm_ComputeAndWriteToEnd_m5E5DF4FB46B097C467B42A4797951F87C345F8F6_RuntimeMethod_var)));
	}

IL_0018:
	{
		// var crc = Append(0, input, offset, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___length2;
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = CRC32Algorithm_Append_m511C8C217AAA52C291FEE8B84FB4B5C9525C6605(0, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		// var r = offset + length;
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___length2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		// input[r] = (byte)crc;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = V_1;
		uint32_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)L_11));
		// input[r + 1] = (byte)(crc >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = V_1;
		uint32_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>8))));
		// input[r + 2] = (byte)(crc >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___input0;
		int32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_17>>((int32_t)16)))));
		// input[r + 3] = (byte)(crc >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___input0;
		int32_t L_19 = V_1;
		uint32_t L_20 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_20>>((int32_t)24)))));
		// return crc;
		uint32_t L_21 = V_0;
		return L_21;
	}
}
// System.UInt32 YooAsset.CRC32Algorithm::ComputeAndWriteToEnd(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_ComputeAndWriteToEnd_m03BEFA574B4D8FD25A4FF9EF8BDD0B11C371807B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (input.Length < 4)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)4)))
		{
			goto IL_0016;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("input", "Input array should be 4 bytes at least");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF87A431DC9F1307C86F60CAA8615A161A82FC149)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CRC32Algorithm_ComputeAndWriteToEnd_m03BEFA574B4D8FD25A4FF9EF8BDD0B11C371807B_RuntimeMethod_var)));
	}

IL_0016:
	{
		// return ComputeAndWriteToEnd(input, 0, input.Length - 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = CRC32Algorithm_ComputeAndWriteToEnd_m5E5DF4FB46B097C467B42A4797951F87C345F8F6(L_2, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 4)), NULL);
		return L_4;
	}
}
// System.Boolean YooAsset.CRC32Algorithm::IsValidWithCrcAtEnd(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CRC32Algorithm_IsValidWithCrcAtEnd_m22DF69C4CE8A098A6E8603993C3998D5AF5B8F3F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, int32_t ___lengthWithCrc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Append(0, input, offset, lengthWithCrc) == 0x2144DF1C;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___lengthWithCrc2;
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = CRC32Algorithm_Append_m511C8C217AAA52C291FEE8B84FB4B5C9525C6605(0, L_0, L_1, L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)((int32_t)558161692)))? 1 : 0);
	}
}
// System.Boolean YooAsset.CRC32Algorithm::IsValidWithCrcAtEnd(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CRC32Algorithm_IsValidWithCrcAtEnd_m30821801841FF86CD3CC5C76C6369044F897B87F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (input.Length < 4)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)4)))
		{
			goto IL_0016;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("input", "Input array should be 4 bytes at least");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF87A431DC9F1307C86F60CAA8615A161A82FC149)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CRC32Algorithm_IsValidWithCrcAtEnd_m30821801841FF86CD3CC5C76C6369044F897B87F_RuntimeMethod_var)));
	}

IL_0016:
	{
		// return Append(0, input, 0, input.Length) == 0x2144DF1C;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = CRC32Algorithm_Append_m511C8C217AAA52C291FEE8B84FB4B5C9525C6605(0, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)((int32_t)558161692)))? 1 : 0);
	}
}
// System.UInt32 YooAsset.CRC32Algorithm::AppendInternal(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_AppendInternal_m60C297C2EADED13A9A9332DB0573A31752BD93A9 (uint32_t ___initial0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (length > 0)
		int32_t L_0 = ___length3;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		// return _proxy.Append(initial, input, offset, length);
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* L_1 = ((CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields*)il2cpp_codegen_static_fields_for(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var))->____proxy_5;
		uint32_t L_2 = ___initial0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input1;
		int32_t L_4 = ___offset2;
		int32_t L_5 = ___length3;
		NullCheck(L_1);
		uint32_t L_6;
		L_6 = SafeProxy_Append_m4537F0777BF86A68EF103F1E127BBDA372D4353E(L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0013:
	{
		// return initial;
		uint32_t L_7 = ___initial0;
		return L_7;
	}
}
// System.Void YooAsset.CRC32Algorithm::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm__cctor_m4157F78D23A5AD12D4F57A6217E32C71173C00AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly SafeProxy _proxy = new SafeProxy();
		SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* L_0 = (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E*)il2cpp_codegen_object_new(SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SafeProxy__ctor_m20D5BAFBED63005F32518A267B10569A87AFA329(L_0, NULL);
		((CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields*)il2cpp_codegen_static_fields_for(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var))->____proxy_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields*)il2cpp_codegen_static_fields_for(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var))->____proxy_5), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.YooLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Log_mA032C32560C111F189F96F8E0055B4D43199688E (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Logger != null)
		RuntimeObject* L_0 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Logger.Log(info);
		RuntimeObject* L_1 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		String_t* L_2 = ___info0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void YooAsset.ILogger::Log(System.String) */, ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0013:
	{
		// UnityEngine.Debug.Log(info);
		String_t* L_3 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.YooLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Warning_mC903CB4ABE0854A803317EAE07ADE9D79A2E8121 (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Logger != null)
		RuntimeObject* L_0 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Logger.Warning(info);
		RuntimeObject* L_1 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		String_t* L_2 = ___info0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void YooAsset.ILogger::Warning(System.String) */, ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0013:
	{
		// UnityEngine.Debug.LogWarning(info);
		String_t* L_3 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_3, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.YooLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Error_m71B0932917D567D1F0D8AA66396747A6D9CE928B (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Logger != null)
		RuntimeObject* L_0 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Logger.Error(info);
		RuntimeObject* L_1 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		String_t* L_2 = ___info0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void YooAsset.ILogger::Error(System.String) */, ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0013:
	{
		// UnityEngine.Debug.LogError(info);
		String_t* L_3 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_3, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.YooLogger::Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Exception_m00152217F2FD40BFBEF98D3C2BE17D018948954F (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Logger != null)
		RuntimeObject* L_0 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Logger.Exception(exception);
		RuntimeObject* L_1 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		Exception_t* L_2 = ___exception0;
		NullCheck(L_1);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void YooAsset.ILogger::Exception(System.Exception) */, ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0013:
	{
		// UnityEngine.Debug.LogException(exception);
		Exception_t* L_3 = ___exception0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(L_3, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String YooAsset.PathUtility::RegularPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_RegularPath_mF0EDE9898E79222ADDD81813B9E53831E23962F9 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return path.Replace('\\', '/').Replace("\\", "/");
		String_t* L_0 = ___path0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_0, ((int32_t)92), ((int32_t)47), NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		return L_2;
	}
}
// System.String YooAsset.PathUtility::RemoveExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_RemoveExtension_mCEB7AEAD4D5A28C0F258B6AAFC2C8B73C1766801 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (string.IsNullOrEmpty(str))
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return str;
		String_t* L_2 = ___str0;
		return L_2;
	}

IL_000a:
	{
		// int index = str.LastIndexOf(".");
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_3, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_0 = L_4;
		// if (index == -1)
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001c;
		}
	}
	{
		// return str;
		String_t* L_6 = ___str0;
		return L_6;
	}

IL_001c:
	{
		// return str.Remove(index); //"assets/config/test.unity3d" --> "assets/config/test"
		String_t* L_7 = ___str0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_7, L_8, NULL);
		return L_9;
	}
}
// System.String YooAsset.PathUtility::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_Combine_m4EDE426C6CD83A9BB94ED15AA631ECD33A638F42 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StringUtility.Format("{0}/{1}", path1, path2);
		String_t* L_0 = ___path10;
		String_t* L_1 = ___path21;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = StringUtility_Format_m07AEFD7479ADCFB1171724F07E35825315C650B9(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_0, L_1, NULL);
		return L_2;
	}
}
// System.String YooAsset.PathUtility::Combine(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_Combine_m39140BB17DA5000225E3DA9572416307CCB85D95 (String_t* ___path10, String_t* ___path21, String_t* ___path32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA929F9B4FD405482CE681D9E9297AF08F5469025);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StringUtility.Format("{0}/{1}/{2}", path1, path2, path3);
		String_t* L_0 = ___path10;
		String_t* L_1 = ___path21;
		String_t* L_2 = ___path32;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = StringUtility_Format_m7D9917BB0E61F93FFCD7EAB49D337CA03C75301F(_stringLiteralA929F9B4FD405482CE681D9E9297AF08F5469025, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.PathUtility::Combine(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_Combine_mE3B8A8432A1A5EF2F43E9599994CE522479803CA (String_t* ___path10, String_t* ___path21, String_t* ___path32, String_t* ___path43, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StringUtility.Format("{0}/{1}/{2}/{3}", path1, path2, path3, path4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___path10;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___path21;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___path32;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___path43;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = StringUtility_Format_m8D4356F525CD5A5738B8BA775C034C84C3E877BC(_stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA, L_7, NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String YooAsset.StringUtility::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m7724399261CC03A4C4D5E688F864367446BA754A (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(format))
		String_t* L_0 = ___format0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m7724399261CC03A4C4D5E688F864367446BA754A_RuntimeMethod_var)));
	}

IL_000e:
	{
		// _cacheBuilder.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_3 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_3);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_3, 0, NULL);
		// _cacheBuilder.AppendFormat(format, arg0);
		StringBuilder_t* L_4 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		String_t* L_5 = ___format0;
		RuntimeObject* L_6 = ___arg01;
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_4, L_5, L_6, NULL);
		// return _cacheBuilder.ToString();
		StringBuilder_t* L_8 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.String YooAsset.StringUtility::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m07AEFD7479ADCFB1171724F07E35825315C650B9 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(format))
		String_t* L_0 = ___format0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m07AEFD7479ADCFB1171724F07E35825315C650B9_RuntimeMethod_var)));
	}

IL_000e:
	{
		// _cacheBuilder.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_3 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_3);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_3, 0, NULL);
		// _cacheBuilder.AppendFormat(format, arg0, arg1);
		StringBuilder_t* L_4 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		String_t* L_5 = ___format0;
		RuntimeObject* L_6 = ___arg01;
		RuntimeObject* L_7 = ___arg12;
		NullCheck(L_4);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_4, L_5, L_6, L_7, NULL);
		// return _cacheBuilder.ToString();
		StringBuilder_t* L_9 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}
}
// System.String YooAsset.StringUtility::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m7D9917BB0E61F93FFCD7EAB49D337CA03C75301F (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(format))
		String_t* L_0 = ___format0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m7D9917BB0E61F93FFCD7EAB49D337CA03C75301F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// _cacheBuilder.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_3 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_3);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_3, 0, NULL);
		// _cacheBuilder.AppendFormat(format, arg0, arg1, arg2);
		StringBuilder_t* L_4 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		String_t* L_5 = ___format0;
		RuntimeObject* L_6 = ___arg01;
		RuntimeObject* L_7 = ___arg12;
		RuntimeObject* L_8 = ___arg23;
		NullCheck(L_4);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2(L_4, L_5, L_6, L_7, L_8, NULL);
		// return _cacheBuilder.ToString();
		StringBuilder_t* L_10 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		return L_11;
	}
}
// System.String YooAsset.StringUtility::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m8D4356F525CD5A5738B8BA775C034C84C3E877BC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(format))
		String_t* L_0 = ___format0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m8D4356F525CD5A5738B8BA775C034C84C3E877BC_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (args == null)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args1;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m8D4356F525CD5A5738B8BA775C034C84C3E877BC_RuntimeMethod_var)));
	}

IL_0017:
	{
		// _cacheBuilder.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_5 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_5);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_5, 0, NULL);
		// _cacheBuilder.AppendFormat(format, args);
		StringBuilder_t* L_6 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		String_t* L_7 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(L_6, L_7, L_8, NULL);
		// return _cacheBuilder.ToString();
		StringBuilder_t* L_10 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		return L_11;
	}
}
// System.Void YooAsset.StringUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringUtility__cctor_m3C81092683ECF3D0B8C1780B63158903F338A65D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static StringBuilder _cacheBuilder = new StringBuilder(2048);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)2048), NULL);
		((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String YooAsset.FileUtility::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileUtility_ReadAllText_mDF7AC59B77D052CFA87EEA009DBDA5675C326BF2 (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (File.Exists(filePath) == false)
		String_t* L_0 = ___filePath0;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000e:
	{
		// return File.ReadAllText(filePath, Encoding.UTF8);
		String_t* L_3 = ___filePath0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_5;
		L_5 = File_ReadAllText_m2476A52B6C6738848014276E41712CE8ADEA5FEC(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Byte[] YooAsset.FileUtility::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FileUtility_ReadAllBytes_m3D90ABB8D5EFA46F6840AE10DB7B4DF5343C9D58 (String_t* ___filePath0, const RuntimeMethod* method) 
{
	{
		// if (File.Exists(filePath) == false)
		String_t* L_0 = ___filePath0;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_000a:
	{
		// return File.ReadAllBytes(filePath);
		String_t* L_2 = ___filePath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E(L_2, NULL);
		return L_3;
	}
}
// System.Void YooAsset.FileUtility::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_WriteAllText_m6274C42F404677862C907BA9C0033B285550794C (String_t* ___filePath0, String_t* ___content1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// CreateFileDirectory(filePath);
		String_t* L_0 = ___filePath0;
		FileUtility_CreateFileDirectory_m90273796131B15E9BA5870D08F41352C5C5C2819(L_0, NULL);
		// byte[] bytes = Encoding.UTF8.GetBytes(content);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_2 = ___content1;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		V_0 = L_3;
		// File.WriteAllBytes(filePath, bytes); //????BOM??
		String_t* L_4 = ___filePath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.FileUtility::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_WriteAllBytes_mC035BE3E4A24582D39C6DDF6BD1B5D367E00C409 (String_t* ___filePath0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) 
{
	{
		// CreateFileDirectory(filePath);
		String_t* L_0 = ___filePath0;
		FileUtility_CreateFileDirectory_m90273796131B15E9BA5870D08F41352C5C5C2819(L_0, NULL);
		// File.WriteAllBytes(filePath, data);
		String_t* L_1 = ___filePath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data1;
		File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.FileUtility::CreateFileDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateFileDirectory_m90273796131B15E9BA5870D08F41352C5C5C2819 (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string directory = Path.GetDirectoryName(filePath);
		String_t* L_0 = ___filePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_0, NULL);
		// CreateDirectory(directory);
		FileUtility_CreateDirectory_m311236A72F49AEDBE56AB2C65283DAC6967B3FD0(L_1, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.FileUtility::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateDirectory_m311236A72F49AEDBE56AB2C65283DAC6967B3FD0 (String_t* ___directory0, const RuntimeMethod* method) 
{
	{
		// if (Directory.Exists(directory) == false)
		String_t* L_0 = ___directory0;
		bool L_1;
		L_1 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// Directory.CreateDirectory(directory);
		String_t* L_2 = ___directory0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3;
		L_3 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_2, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Int64 YooAsset.FileUtility::GetFileSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileUtility_GetFileSize_m3181C3C95B3D29773619FE3E2FD0FBA5CDBA1EFD (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FileInfo fileInfo = new FileInfo(filePath);
		String_t* L_0 = ___filePath0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_1 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_1, L_0, NULL);
		// return fileInfo.Length;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String YooAsset.HashUtility::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_ToString_m64E6F070ECC66294F44F4D163C97A7C9F891FF41 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashBytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string result = BitConverter.ToString(hashBytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___hashBytes0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = BitConverter_ToString_mAECE8A858AA77E4CA5425A67AF6370C54A9C598E(L_0, NULL);
		// result = result.Replace("-", "");
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// return result.ToLower();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::StringSHA1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StringSHA1_mC269800293405F615048735BD4F21AF4D5FD17FF (String_t* ___str0, const RuntimeMethod* method) 
{
	{
		// byte[] buffer = Encoding.UTF8.GetBytes(str);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		// return BytesSHA1(buffer);
		String_t* L_3;
		L_3 = HashUtility_BytesSHA1_m9DA320D5E747DA7161CDF99E6B8648585EA95753(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::FileSHA1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileSHA1_m4F1792B20F400860B5DD5669D3508B2248E620B2 (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// using (FileStream fs = new FileStream(filePath, FileMode.Open, FileAccess.Read, FileShare.Read))
		String_t* L_0 = ___filePath0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_1, L_0, 3, 1, 1, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001c;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_001c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return StreamSHA1(fs);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
			String_t* L_5;
			L_5 = HashUtility_StreamSHA1_mC2D465A888291D6B848E5F5DFBE07D31BFA3EAAD(L_4, NULL);
			V_1 = L_5;
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.String YooAsset.HashUtility::FileSHA1Safely(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileSHA1Safely_mD6ECA30B79865E6FFB8E04C130D8D30E5C99067D (String_t* ___filePath0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return FileSHA1(filePath);
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = HashUtility_FileSHA1_m4F1792B20F400860B5DD5669D3508B2248E620B2(L_0, NULL);
		V_0 = L_1;
		goto IL_0016;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// YooLogger.Exception(e);
		YooLogger_Exception_m00152217F2FD40BFBEF98D3C2BE17D018948954F(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_2;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0016;
	}// end catch (depth: 1)

IL_0016:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String YooAsset.HashUtility::StreamSHA1(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamSHA1_mC2D465A888291D6B848E5F5DFBE07D31BFA3EAAD (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	{
		// HashAlgorithm hash = HashAlgorithm.Create();
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_0;
		L_0 = HashAlgorithm_Create_m39BE979174AC571177E62B96D41910D750DDF867(NULL);
		// byte[] hashBytes = hash.ComputeHash(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30(L_0, L_1, NULL);
		// return ToString(hashBytes);
		String_t* L_3;
		L_3 = HashUtility_ToString_m64E6F070ECC66294F44F4D163C97A7C9F891FF41(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::BytesSHA1(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_BytesSHA1_m9DA320D5E747DA7161CDF99E6B8648585EA95753 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	{
		// HashAlgorithm hash = HashAlgorithm.Create();
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_0;
		L_0 = HashAlgorithm_Create_m39BE979174AC571177E62B96D41910D750DDF867(NULL);
		// byte[] hashBytes = hash.ComputeHash(buffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_0, L_1, NULL);
		// return ToString(hashBytes);
		String_t* L_3;
		L_3 = HashUtility_ToString_m64E6F070ECC66294F44F4D163C97A7C9F891FF41(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::StringMD5(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StringMD5_m71957B81C3781D6095C500CF0F653BEA1E34E0BE (String_t* ___str0, const RuntimeMethod* method) 
{
	{
		// byte[] buffer = Encoding.UTF8.GetBytes(str);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		// return BytesMD5(buffer);
		String_t* L_3;
		L_3 = HashUtility_BytesMD5_m8CE3F5934C56918CDF90836B8503136DE93D6F3E(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::FileMD5(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileMD5_m8DFF39ECC307616E803DF95DA1EC47A32ED37AE2 (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// using (FileStream fs = new FileStream(filePath, FileMode.Open, FileAccess.Read, FileShare.Read))
		String_t* L_0 = ___filePath0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_1, L_0, 3, 1, 1, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001c;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_001c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return StreamMD5(fs);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
			String_t* L_5;
			L_5 = HashUtility_StreamMD5_m68993D697571177ECD1352744D3BFAA890A8C33B(L_4, NULL);
			V_1 = L_5;
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.String YooAsset.HashUtility::FileMD5Safely(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileMD5Safely_mB8EBA28665DD13B2114085C3D38EB4CF47472FCE (String_t* ___filePath0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return FileMD5(filePath);
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = HashUtility_FileMD5_m8DFF39ECC307616E803DF95DA1EC47A32ED37AE2(L_0, NULL);
		V_0 = L_1;
		goto IL_0016;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// YooLogger.Exception(e);
		YooLogger_Exception_m00152217F2FD40BFBEF98D3C2BE17D018948954F(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_2;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0016;
	}// end catch (depth: 1)

IL_0016:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String YooAsset.HashUtility::StreamMD5(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamMD5_m68993D697571177ECD1352744D3BFAA890A8C33B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MD5CryptoServiceProvider provider = new MD5CryptoServiceProvider();
		MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* L_0 = (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B*)il2cpp_codegen_object_new(MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067(L_0, NULL);
		// byte[] hashBytes = provider.ComputeHash(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30(L_0, L_1, NULL);
		// return ToString(hashBytes);
		String_t* L_3;
		L_3 = HashUtility_ToString_m64E6F070ECC66294F44F4D163C97A7C9F891FF41(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::BytesMD5(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_BytesMD5_m8CE3F5934C56918CDF90836B8503136DE93D6F3E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MD5CryptoServiceProvider provider = new MD5CryptoServiceProvider();
		MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* L_0 = (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B*)il2cpp_codegen_object_new(MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067(L_0, NULL);
		// byte[] hashBytes = provider.ComputeHash(buffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_0, L_1, NULL);
		// return ToString(hashBytes);
		String_t* L_3;
		L_3 = HashUtility_ToString_m64E6F070ECC66294F44F4D163C97A7C9F891FF41(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::StringCRC32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StringCRC32_m7DE291D31785F95B9FD50E4C77268CA45AD14AB1 (String_t* ___str0, const RuntimeMethod* method) 
{
	{
		// byte[] buffer = Encoding.UTF8.GetBytes(str);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		// return BytesCRC32(buffer);
		String_t* L_3;
		L_3 = HashUtility_BytesCRC32_m850D3A402A79C649B8DD839C30ED31B3C88F20C8(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::FileCRC32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileCRC32_m382201CFB240F691614D32D5B1E8944162B6330E (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// using (FileStream fs = new FileStream(filePath, FileMode.Open, FileAccess.Read, FileShare.Read))
		String_t* L_0 = ___filePath0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_1, L_0, 3, 1, 1, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001c;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_001c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return StreamCRC32(fs);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
			String_t* L_5;
			L_5 = HashUtility_StreamCRC32_mE6FDBEB13FC8C779311EE2F6AF899B00259010B9(L_4, NULL);
			V_1 = L_5;
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.String YooAsset.HashUtility::FileCRC32Safely(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileCRC32Safely_m3A0995FDEA9973F26EF3811040BA731817B42BDB (String_t* ___filePath0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return FileCRC32(filePath);
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = HashUtility_FileCRC32_m382201CFB240F691614D32D5B1E8944162B6330E(L_0, NULL);
		V_0 = L_1;
		goto IL_0016;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// YooLogger.Exception(e);
		YooLogger_Exception_m00152217F2FD40BFBEF98D3C2BE17D018948954F(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_2;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0016;
	}// end catch (depth: 1)

IL_0016:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String YooAsset.HashUtility::StreamCRC32(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamCRC32_mE6FDBEB13FC8C779311EE2F6AF899B00259010B9 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CRC32Algorithm hash = new CRC32Algorithm();
		CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* L_0 = (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A*)il2cpp_codegen_object_new(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CRC32Algorithm__ctor_m294E2814CE76E07DF72E04905B4900D80FD10F7B(L_0, NULL);
		// byte[] hashBytes = hash.ComputeHash(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30(L_0, L_1, NULL);
		// return ToString(hashBytes);
		String_t* L_3;
		L_3 = HashUtility_ToString_m64E6F070ECC66294F44F4D163C97A7C9F891FF41(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::BytesCRC32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_BytesCRC32_m850D3A402A79C649B8DD839C30ED31B3C88F20C8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CRC32Algorithm hash = new CRC32Algorithm();
		CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* L_0 = (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A*)il2cpp_codegen_object_new(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CRC32Algorithm__ctor_m294E2814CE76E07DF72E04905B4900D80FD10F7B(L_0, NULL);
		// byte[] hashBytes = hash.ComputeHash(buffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_0, L_1, NULL);
		// return ToString(hashBytes);
		String_t* L_3;
		L_3 = HashUtility_ToString_m64E6F070ECC66294F44F4D163C97A7C9F891FF41(L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean YooAsset.YooAssets::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YooAssets_get_Initialized_m3CD8C5C1C94D5088757F53E702D818A2911A0D83 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _isInitialize; }
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		return L_0;
	}
}
// System.Void YooAsset.YooAssets::Initialize(YooAsset.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Initialize_m64F06AF9E2B1876DCB8052FA632EC0A88AB05FA6 (RuntimeObject* ___logger0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE202C5315CE67BC1F4ABEBB5BFF740404AE2F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4BCBDD7CCF79370EF7363440DFA9118B516F3B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// UnityEngine.Debug.LogWarning($"{nameof(YooAssets)} is initialized !");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralE4BCBDD7CCF79370EF7363440DFA9118B516F3B1, NULL);
		// return;
		return;
	}

IL_0012:
	{
		// if (_isInitialize == false)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_1 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (L_1)
		{
			goto IL_004e;
		}
	}
	{
		// YooLogger.Logger = logger;
		RuntimeObject* L_2 = ___logger0;
		((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0), (void*)L_2);
		// _isInitialize = true;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)1;
		// _driver = new UnityEngine.GameObject($"[{nameof(YooAssets)}]");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral2EE202C5315CE67BC1F4ABEBB5BFF740404AE2F8, NULL);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1), (void*)L_3);
		// _driver.AddComponent<YooAssetsDriver>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1;
		NullCheck(L_4);
		YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* L_5;
		L_5 = GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7(L_4, GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7_RuntimeMethod_var);
		// UnityEngine.Object.DontDestroyOnLoad(_driver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_6, NULL);
		// OperationSystem.Initialize();
		il2cpp_codegen_runtime_class_init_inline(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		OperationSystem_Initialize_mB098338799B27A985F659DBD1C4F0E98A2EF26FF(NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void YooAsset.YooAssets::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Destroy_mBEB096AB8937577AC81C41F064037F5205CBC9A5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m971585063A81736B51FEDF8EDDF8B6F250C37006_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0065;
		}
	}
	{
		// OperationSystem.DestroyAll();
		il2cpp_codegen_runtime_class_init_inline(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		OperationSystem_DestroyAll_m2146DB124C24096832367B5BAC665D523193CDE4(NULL);
		// foreach (var package in _packages)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_1 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		NullCheck(L_1);
		Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 L_2;
		L_2 = List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E(L_1, List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB((&V_0), Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_0019_1:
			{
				// foreach (var package in _packages)
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_3;
				L_3 = Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline((&V_0), Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
				// package.DestroyPackage();
				NullCheck(L_3);
				ResourcePackage_DestroyPackage_m218AF595F5FCA61623CC0ADD3EACA493A8E6ECD9(L_3, NULL);
			}

IL_0025_1:
			{
				// foreach (var package in _packages)
				bool L_4;
				L_4 = Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D((&V_0), Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// _packages.Clear();
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_5 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		NullCheck(L_5);
		List_1_Clear_m971585063A81736B51FEDF8EDDF8B6F250C37006_inline(L_5, List_1_Clear_m971585063A81736B51FEDF8EDDF8B6F250C37006_RuntimeMethod_var);
		// _isInitialize = false;
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)0;
		// if (_driver != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		// GameObject.Destroy(_driver);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void YooAsset.YooAssets::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Update_mFCE3CD9A8495DAF42CBA1E558DEF7A3A6A56FF41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		// OperationSystem.Update();
		il2cpp_codegen_runtime_class_init_inline(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		OperationSystem_Update_m14AD41127B49ABB5BDCDFF9BAA474F258585DC8A(NULL);
		// for (int i = 0; i < _packages.Count; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_0010:
	{
		// _packages[i].UpdatePackage();
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_1 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_3;
		L_3 = List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046(L_1, L_2, List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046_RuntimeMethod_var);
		NullCheck(L_3);
		ResourcePackage_UpdatePackage_m357E84E1333D3C774D10244776A1D709538C886C(L_3, NULL);
		// for (int i = 0; i < _packages.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0024:
	{
		// for (int i = 0; i < _packages.Count; i++)
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_6 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_inline(L_6, List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0010;
		}
	}

IL_0031:
	{
		// }
		return;
	}
}
// YooAsset.ResourcePackage YooAsset.YooAssets::CreatePackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_CreatePackage_mD27980614DE50342AB503DB840EE5CEC998E9807 (String_t* ___packageName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* V_0 = NULL;
	{
		// CheckException(packageName);
		String_t* L_0 = ___packageName0;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		YooAssets_CheckException_mF5811ACFDE01F79D582D519E29CBCB9128E99B34(L_0, NULL);
		// if (ContainsPackage(packageName))
		String_t* L_1 = ___packageName0;
		bool L_2;
		L_2 = YooAssets_ContainsPackage_m2A01F6C27195F188A2BAD95D931C77E9E78B8C62(L_1, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// throw new Exception($"Package {packageName} already existed !");
		String_t* L_3 = ___packageName0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAB4991BC03A4611590A823E483ACA6B929AD3B6)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFACFABE7F5FF35F0556F38330D454B4E4A451170)), NULL);
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_CreatePackage_mD27980614DE50342AB503DB840EE5CEC998E9807_RuntimeMethod_var)));
	}

IL_0024:
	{
		// ResourcePackage package = new ResourcePackage(packageName);
		String_t* L_6 = ___packageName0;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_7 = (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022*)il2cpp_codegen_object_new(ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ResourcePackage__ctor_m862FA89D0D7DEB3D0D78E9183EE2FFECA7DA97B3(L_7, L_6, NULL);
		V_0 = L_7;
		// _packages.Add(package);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_8 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_9 = V_0;
		NullCheck(L_8);
		List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_inline(L_8, L_9, List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_RuntimeMethod_var);
		// return package;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_10 = V_0;
		return L_10;
	}
}
// YooAsset.ResourcePackage YooAsset.YooAssets::GetPackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_GetPackage_mAD6C7B869581634FB4421B15991869FC9D7C61F5 (String_t* ___packageName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D29DEA29AB1C5A91F32D93F1959B09C88B25F5E);
		s_Il2CppMethodInitialized = true;
	}
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* G_B2_0 = NULL;
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* G_B1_0 = NULL;
	{
		// CheckException(packageName);
		String_t* L_0 = ___packageName0;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		YooAssets_CheckException_mF5811ACFDE01F79D582D519E29CBCB9128E99B34(L_0, NULL);
		// var package = GetPackageInternal(packageName);
		String_t* L_1 = ___packageName0;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_2;
		L_2 = YooAssets_GetPackageInternal_mFEF478EF4E7CF5A787889ACE6F49CBFD5FBD9AA2(L_1, NULL);
		// if (package == null)
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		// YooLogger.Error($"Not found resource package : {packageName}");
		String_t* L_4 = ___packageName0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1D29DEA29AB1C5A91F32D93F1959B09C88B25F5E, L_4, NULL);
		YooLogger_Error_m71B0932917D567D1F0D8AA66396747A6D9CE928B(L_5, NULL);
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		// return package;
		return G_B2_0;
	}
}
// YooAsset.ResourcePackage YooAsset.YooAssets::TryGetPackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_TryGetPackage_m5C8A270DCDB8AF64F995D5A8B64FE4093AD244E1 (String_t* ___packageName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckException(packageName);
		String_t* L_0 = ___packageName0;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		YooAssets_CheckException_mF5811ACFDE01F79D582D519E29CBCB9128E99B34(L_0, NULL);
		// return GetPackageInternal(packageName);
		String_t* L_1 = ___packageName0;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_2;
		L_2 = YooAssets_GetPackageInternal_mFEF478EF4E7CF5A787889ACE6F49CBFD5FBD9AA2(L_1, NULL);
		return L_2;
	}
}
// System.Void YooAsset.YooAssets::DestroyPackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_DestroyPackage_mB85818481BE6DBBF3EF061DEFF505FA077DCC1AF (String_t* ___packageName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF4CB7EA6B869DC2BEA6EFE63005DD675B1A444CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* V_0 = NULL;
	{
		// CheckException(packageName);
		String_t* L_0 = ___packageName0;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		YooAssets_CheckException_mF5811ACFDE01F79D582D519E29CBCB9128E99B34(L_0, NULL);
		// ResourcePackage package = GetPackageInternal(packageName);
		String_t* L_1 = ___packageName0;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_2;
		L_2 = YooAssets_GetPackageInternal_mFEF478EF4E7CF5A787889ACE6F49CBFD5FBD9AA2(L_1, NULL);
		V_0 = L_2;
		// if (package == null)
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_3 = V_0;
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// _packages.Remove(package);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_4 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_mF4CB7EA6B869DC2BEA6EFE63005DD675B1A444CE(L_4, L_5, List_1_Remove_mF4CB7EA6B869DC2BEA6EFE63005DD675B1A444CE_RuntimeMethod_var);
		// package.DestroyPackage();
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_7 = V_0;
		NullCheck(L_7);
		ResourcePackage_DestroyPackage_m218AF595F5FCA61623CC0ADD3EACA493A8E6ECD9(L_7, NULL);
		// }
		return;
	}
}
// System.Boolean YooAsset.YooAssets::ContainsPackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YooAssets_ContainsPackage_m2A01F6C27195F188A2BAD95D931C77E9E78B8C62 (String_t* ___packageName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckException(packageName);
		String_t* L_0 = ___packageName0;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		YooAssets_CheckException_mF5811ACFDE01F79D582D519E29CBCB9128E99B34(L_0, NULL);
		// var package = GetPackageInternal(packageName);
		String_t* L_1 = ___packageName0;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_2;
		L_2 = YooAssets_GetPackageInternal_mFEF478EF4E7CF5A787889ACE6F49CBFD5FBD9AA2(L_1, NULL);
		// return package != null;
		return (bool)((!(((RuntimeObject*)(ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void YooAsset.YooAssets::StartOperation(YooAsset.GameAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_StartOperation_m178E3E4FE07C29FC09F9B33ABF55E2DB71608C29 (GameAsyncOperation_t381D498F36A436967E38E553EDDF3A77DFAD7160* ___operation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OperationSystem.StartOperation(string.Empty, operation);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		GameAsyncOperation_t381D498F36A436967E38E553EDDF3A77DFAD7160* L_1 = ___operation0;
		il2cpp_codegen_runtime_class_init_inline(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		OperationSystem_StartOperation_m35A36762662A443088F72DC6D74C1BFF7D3201C7(L_0, L_1, NULL);
		// }
		return;
	}
}
// YooAsset.ResourcePackage YooAsset.YooAssets::GetPackageInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_GetPackageInternal_mFEF478EF4E7CF5A787889ACE6F49CBFD5FBD9AA2 (String_t* ___packageName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* V_1 = NULL;
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* V_2 = NULL;
	{
		// foreach (var package in _packages)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		NullCheck(L_0);
		Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 L_1;
		L_1 = List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E(L_0, List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB((&V_0), Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_000d_1:
			{
				// foreach (var package in _packages)
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_2;
				L_2 = Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline((&V_0), Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
				V_1 = L_2;
				// if (package.PackageName == packageName)
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_3 = V_1;
				NullCheck(L_3);
				String_t* L_4 = L_3->___PackageName_11;
				String_t* L_5 = ___packageName0;
				bool L_6;
				L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0027_1;
				}
			}
			{
				// return package;
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_7 = V_1;
				V_2 = L_7;
				goto IL_0042;
			}

IL_0027_1:
			{
				// foreach (var package in _packages)
				bool L_8;
				L_8 = Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D((&V_0), Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// return null;
		return (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022*)NULL;
	}

IL_0042:
	{
		// }
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_9 = V_2;
		return L_9;
	}
}
// System.Void YooAsset.YooAssets::CheckException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_CheckException_mF5811ACFDE01F79D582D519E29CBCB9128E99B34 (String_t* ___packageName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialize == false)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new Exception($"{nameof(YooAssets)} not initialize !");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B7ACFA699A95389F6B76095C514C2217B23A2A7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_CheckException_mF5811ACFDE01F79D582D519E29CBCB9128E99B34_RuntimeMethod_var)));
	}

IL_0012:
	{
		// if (string.IsNullOrEmpty(packageName))
		String_t* L_2 = ___packageName0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// throw new Exception("Package name is null or empty !");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFC9440BDB8F65D5F4B9B344FC7163CA6FC6516A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_CheckException_mF5811ACFDE01F79D582D519E29CBCB9128E99B34_RuntimeMethod_var)));
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void YooAsset.YooAssets::SetDownloadSystemClearFileResponseCode(System.Collections.Generic.List`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_SetDownloadSystemClearFileResponseCode_m3720BFCD347268F00C8AEE08E185F788D6F4FA6A (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* ___codes0, const RuntimeMethod* method) 
{
	{
		// DownloadHelper.ClearFileResponseCodes = codes;
		List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_0 = ___codes0;
		DownloadHelper_set_ClearFileResponseCodes_mB2BC4C20E053B91ECFEBE2D04B71B8EEC0072AE9_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.YooAssets::SetDownloadSystemUnityWebRequest(YooAsset.DownloadRequestDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_SetDownloadSystemUnityWebRequest_mC98C32310B15FB2699E60FC3665C458313B67987 (DownloadRequestDelegate_t8E1F5C86FCE3954D557AA2830E9C174E6E3F5489* ___requestDelegate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DownloadHelper.RequestDelegate = requestDelegate;
		DownloadRequestDelegate_t8E1F5C86FCE3954D557AA2830E9C174E6E3F5489* L_0 = ___requestDelegate0;
		((DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_StaticFields*)il2cpp_codegen_static_fields_for(DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_il2cpp_TypeInfo_var))->___RequestDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_StaticFields*)il2cpp_codegen_static_fields_for(DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_il2cpp_TypeInfo_var))->___RequestDelegate_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void YooAsset.YooAssets::SetOperationSystemMaxTimeSlice(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_SetOperationSystemMaxTimeSlice_m0B7B484E01D80674686D5ECBA3534C8E6C781D93 (int64_t ___milliseconds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33442AF2D181B07DBC17846AF710AB966B95B524);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (milliseconds < 10)
		int64_t L_0 = ___milliseconds0;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)((int32_t)10)))))
		{
			goto IL_0015;
		}
	}
	{
		// milliseconds = 10;
		___milliseconds0 = ((int64_t)((int32_t)10));
		// YooLogger.Warning($"MaxTimeSlice minimum value is 10 milliseconds.");
		YooLogger_Warning_mC903CB4ABE0854A803317EAE07ADE9D79A2E8121(_stringLiteral33442AF2D181B07DBC17846AF710AB966B95B524, NULL);
	}

IL_0015:
	{
		// OperationSystem.MaxTimeSlice = milliseconds;
		int64_t L_1 = ___milliseconds0;
		il2cpp_codegen_runtime_class_init_inline(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		OperationSystem_set_MaxTimeSlice_mFA4EF030005990EAD63A26ADC0EEA26671365A62_inline(L_1, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.YooAssets::SetCacheSystemDisableCacheOnWebGL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_SetCacheSystemDisableCacheOnWebGL_mB3DAAFCE2E3C45B29E863B6D0A21B2D05A600826 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheHelper_tAFCCA6B5598438301AAD32DBF12E435D28FCC155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CacheHelper.DisableUnityCacheOnWebGL = true;
		il2cpp_codegen_runtime_class_init_inline(CacheHelper_tAFCCA6B5598438301AAD32DBF12E435D28FCC155_il2cpp_TypeInfo_var);
		((CacheHelper_tAFCCA6B5598438301AAD32DBF12E435D28FCC155_StaticFields*)il2cpp_codegen_static_fields_for(CacheHelper_tAFCCA6B5598438301AAD32DBF12E435D28FCC155_il2cpp_TypeInfo_var))->___DisableUnityCacheOnWebGL_0 = (bool)1;
		// }
		return;
	}
}
// YooAsset.DebugReport YooAsset.YooAssets::GetDebugReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* YooAssets_GetDebugReport_m920E920F74D0A66AC19EE167E2981F1351E4E893 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* V_0 = NULL;
	Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* V_2 = NULL;
	{
		// DebugReport report = new DebugReport();
		DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_0 = (DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D*)il2cpp_codegen_object_new(DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DebugReport__ctor_m5569E5C90FF7700A571ABA2F4B4D07A320457E43(L_0, NULL);
		V_0 = L_0;
		// report.FrameCount = Time.frameCount;
		DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_1 = V_0;
		int32_t L_2;
		L_2 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		NullCheck(L_1);
		L_1->___FrameCount_0 = L_2;
		// foreach (var package in _packages)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_3 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		NullCheck(L_3);
		Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 L_4;
		L_4 = List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E(L_3, List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB((&V_1), Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_001e_1:
			{
				// foreach (var package in _packages)
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_5;
				L_5 = Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline((&V_1), Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
				// var packageData = package.GetDebugPackageData();
				NullCheck(L_5);
				DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* L_6;
				L_6 = ResourcePackage_GetDebugPackageData_mAD38FFF02B859916E6D0F09CDC307B94C7B09820(L_5, NULL);
				V_2 = L_6;
				// report.PackageDatas.Add(packageData);
				DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_7 = V_0;
				NullCheck(L_7);
				List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6* L_8 = L_7->___PackageDatas_1;
				DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* L_9 = V_2;
				NullCheck(L_8);
				List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_inline(L_8, L_9, List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_RuntimeMethod_var);
			}

IL_0037_1:
			{
				// foreach (var package in _packages)
				bool L_10;
				L_10 = Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D((&V_1), Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// return report;
		DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_11 = V_0;
		return L_11;
	}
}
// System.Void YooAsset.YooAssets::SetDefaultPackage(YooAsset.ResourcePackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_SetDefaultPackage_m7412DFA4BEBC759D80454D45099079A7826CC422 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ___package0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _defaultPackage = package;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ___package0;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean YooAsset.YooAssets::IsNeedDownloadFromRemote(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YooAssets_IsNeedDownloadFromRemote_m101FF3F963758FFC3FAD24BCEAB29CDEFBD5BF61 (String_t* ___location0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.IsNeedDownloadFromRemote(location);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		NullCheck(L_0);
		bool L_2;
		L_2 = ResourcePackage_IsNeedDownloadFromRemote_mFA53BFED3CAC8F0ADABD2C7C874D6D92801807DB(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean YooAsset.YooAssets::IsNeedDownloadFromRemote(YooAsset.AssetInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YooAssets_IsNeedDownloadFromRemote_m5E2E5F8F50C976CA4BE1AFA89E975A78F0AC9E28 (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.IsNeedDownloadFromRemote(assetInfo);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		NullCheck(L_0);
		bool L_2;
		L_2 = ResourcePackage_IsNeedDownloadFromRemote_m03B3BAAFB9DA506BF815136D45A415C0FB022D54(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.AssetInfo[] YooAsset.YooAssets::GetAssetInfos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9* YooAssets_GetAssetInfos_mEEE811B4732A73FEDE7BA04F8C3E15B392886165 (String_t* ___tag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.GetAssetInfos(tag);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___tag0;
		NullCheck(L_0);
		AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9* L_2;
		L_2 = ResourcePackage_GetAssetInfos_mE6348F8DFF65DCCEAE8A6FB0C34668C429802FBE(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.AssetInfo[] YooAsset.YooAssets::GetAssetInfos(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9* YooAssets_GetAssetInfos_m1A4DDC892574960B52E7FA9D5628E86465A5FE93 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tags0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.GetAssetInfos(tags);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___tags0;
		NullCheck(L_0);
		AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9* L_2;
		L_2 = ResourcePackage_GetAssetInfos_m4018DA404673ADB6E3FB0153E1926A5DE42F3459(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.AssetInfo YooAsset.YooAssets::GetAssetInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* YooAssets_GetAssetInfo_mD89C6E7A5896C1DE84A082C67986394148025BB6 (String_t* ___location0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.GetAssetInfo(location);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		NullCheck(L_0);
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_2;
		L_2 = ResourcePackage_GetAssetInfo_mE2742035E89CFCEA80E51CC229BBCD676FDA50C0(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.AssetInfo YooAsset.YooAssets::GetAssetInfo(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* YooAssets_GetAssetInfo_mC4C4BA9EAC03C909F23976630B79B1B56DCA00E5 (String_t* ___location0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.GetAssetInfo(location, type);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		Type_t* L_2 = ___type1;
		NullCheck(L_0);
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_3;
		L_3 = ResourcePackage_GetAssetInfo_m7254B7D622C7EB563B6CD0A2ED5C99AA1642E2DB(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.AssetInfo YooAsset.YooAssets::GetAssetInfoByGUID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* YooAssets_GetAssetInfoByGUID_m69E0A57B36920F05B8AB77192972D267EA4CEA93 (String_t* ___assetGUID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.GetAssetInfoByGUID(assetGUID);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___assetGUID0;
		NullCheck(L_0);
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_2;
		L_2 = ResourcePackage_GetAssetInfoByGUID_mCCA3E16974DF506C2889284E792A45FDBE8AB12A(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.AssetInfo YooAsset.YooAssets::GetAssetInfoByGUID(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* YooAssets_GetAssetInfoByGUID_m39B59AEDB0945DD7DC9BCE97BE25A8E5FCB7A959 (String_t* ___assetGUID0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.GetAssetInfoByGUID(assetGUID, type);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___assetGUID0;
		Type_t* L_2 = ___type1;
		NullCheck(L_0);
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_3;
		L_3 = ResourcePackage_GetAssetInfoByGUID_m2B31D11A1BCD6232ADB7F643AFA0367E7ED7B30F(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean YooAsset.YooAssets::CheckLocationValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YooAssets_CheckLocationValid_mCA2969F0EE8787ED089F4F9C1448F2EFC098969C (String_t* ___location0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CheckLocationValid(location);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		NullCheck(L_0);
		bool L_2;
		L_2 = ResourcePackage_CheckLocationValid_mE0FF731E63B7B72EB162465FB1F6563F34CAAF0B(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.RawFileHandle YooAsset.YooAssets::LoadRawFileSync(YooAsset.AssetInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* YooAssets_LoadRawFileSync_m84370D2DB3BF93150271CC53BAC4E2788E51B0B5 (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadRawFileSync(assetInfo);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		NullCheck(L_0);
		RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* L_2;
		L_2 = ResourcePackage_LoadRawFileSync_m01199D0841482106613E7A583C911542D3F465D1(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.RawFileHandle YooAsset.YooAssets::LoadRawFileSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* YooAssets_LoadRawFileSync_m910CF02A441D4F37CCBBF9A581D945433BCC415B (String_t* ___location0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadRawFileSync(location);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		NullCheck(L_0);
		RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* L_2;
		L_2 = ResourcePackage_LoadRawFileSync_m9562D28857E14742E3C227267B5C308D2AE7B491(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.RawFileHandle YooAsset.YooAssets::LoadRawFileAsync(YooAsset.AssetInfo,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* YooAssets_LoadRawFileAsync_m1E519B74047DACD3067CA0F5D19A7EF1B0EEEA0A (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, uint32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadRawFileAsync(assetInfo, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		uint32_t L_2 = ___priority1;
		NullCheck(L_0);
		RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* L_3;
		L_3 = ResourcePackage_LoadRawFileAsync_mA37D73EA9B5C7BA1C0A1E183C1D92C0E6ED1E6C0(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.RawFileHandle YooAsset.YooAssets::LoadRawFileAsync(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* YooAssets_LoadRawFileAsync_mD851C3BB0E21ED8A89FF59E67A52B8C126149D87 (String_t* ___location0, uint32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadRawFileAsync(location, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		uint32_t L_2 = ___priority1;
		NullCheck(L_0);
		RawFileHandle_t14B7F11A3B4FE74E7235DF3302AE922D51BD87E3* L_3;
		L_3 = ResourcePackage_LoadRawFileAsync_m4DA8B3D37F65176A0EF90DB79F1610F5CDEFBA14(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.SceneHandle YooAsset.YooAssets::LoadSceneSync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* YooAssets_LoadSceneSync_m1E30BFDAC878BE282E81CAE477AA5755D29F8013 (String_t* ___location0, int32_t ___sceneMode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadSceneSync(location, sceneMode);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		int32_t L_2 = ___sceneMode1;
		NullCheck(L_0);
		SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* L_3;
		L_3 = ResourcePackage_LoadSceneSync_mC264AEB21EF895D576F24147972FE9CF10496611(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.SceneHandle YooAsset.YooAssets::LoadSceneSync(YooAsset.AssetInfo,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* YooAssets_LoadSceneSync_m00997C519708967062953F428FE0F802956E2727 (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, int32_t ___sceneMode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadSceneSync(assetInfo, sceneMode);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		int32_t L_2 = ___sceneMode1;
		NullCheck(L_0);
		SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* L_3;
		L_3 = ResourcePackage_LoadSceneSync_m6DA689D475AF191C388941E631BA6D2478FD56E9(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.SceneHandle YooAsset.YooAssets::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* YooAssets_LoadSceneAsync_m0BC853BA089B2FED1B481B55CF2E22087EF2FBAB (String_t* ___location0, int32_t ___sceneMode1, bool ___suspendLoad2, uint32_t ___priority3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadSceneAsync(location, sceneMode, suspendLoad, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		int32_t L_2 = ___sceneMode1;
		bool L_3 = ___suspendLoad2;
		uint32_t L_4 = ___priority3;
		NullCheck(L_0);
		SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* L_5;
		L_5 = ResourcePackage_LoadSceneAsync_mB8ABF37C34DD54301BC9D2B150639142030884FE(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// YooAsset.SceneHandle YooAsset.YooAssets::LoadSceneAsync(YooAsset.AssetInfo,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* YooAssets_LoadSceneAsync_m1003114085749CEBA81DBD08096C41D9E7B8691D (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, int32_t ___sceneMode1, bool ___suspendLoad2, uint32_t ___priority3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadSceneAsync(assetInfo, sceneMode, suspendLoad, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		int32_t L_2 = ___sceneMode1;
		bool L_3 = ___suspendLoad2;
		uint32_t L_4 = ___priority3;
		NullCheck(L_0);
		SceneHandle_t6C10C189E8FE59F286B9B3EC13EC38ABFE101AF9* L_5;
		L_5 = ResourcePackage_LoadSceneAsync_m0786A0200D7CDCF414A9945037185969D7550283(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// YooAsset.AssetHandle YooAsset.YooAssets::LoadAssetSync(YooAsset.AssetInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* YooAssets_LoadAssetSync_mDA2BAED3F33C9FBA156A63352F4ACB99B0B50C55 (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAssetSync(assetInfo);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		NullCheck(L_0);
		AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* L_2;
		L_2 = ResourcePackage_LoadAssetSync_m90C280D7CBBAFEB3E683B346E7620E9283812873(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.AssetHandle YooAsset.YooAssets::LoadAssetSync(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* YooAssets_LoadAssetSync_mD4D70AB11E064777A887309E98DABBC39E4C516F (String_t* ___location0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAssetSync(location, type);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		Type_t* L_2 = ___type1;
		NullCheck(L_0);
		AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* L_3;
		L_3 = ResourcePackage_LoadAssetSync_m90D26C7E1E47D7FFA16F7C2E81D3C92A355A7D18(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.AssetHandle YooAsset.YooAssets::LoadAssetSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* YooAssets_LoadAssetSync_m32F84E1620AFBBD9DD053DA18F16CD8854603D41 (String_t* ___location0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAssetSync(location);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		NullCheck(L_0);
		AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* L_2;
		L_2 = ResourcePackage_LoadAssetSync_m949F0103B6DB55EBC7C03D3DC79B6AF7185C87DC(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.AssetHandle YooAsset.YooAssets::LoadAssetAsync(YooAsset.AssetInfo,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* YooAssets_LoadAssetAsync_m71239C4A855638EB2D0DC374C87BB17541DB6DD4 (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, uint32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAssetAsync(assetInfo, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		uint32_t L_2 = ___priority1;
		NullCheck(L_0);
		AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* L_3;
		L_3 = ResourcePackage_LoadAssetAsync_mA6AC4E5FE773FF2BA7C99F7BF83CD246CD85B3A4(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.AssetHandle YooAsset.YooAssets::LoadAssetAsync(System.String,System.Type,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* YooAssets_LoadAssetAsync_m8008037CE57A7D39A49A3EE78BBDB563E0346C8F (String_t* ___location0, Type_t* ___type1, uint32_t ___priority2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAssetAsync(location, type, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		Type_t* L_2 = ___type1;
		uint32_t L_3 = ___priority2;
		NullCheck(L_0);
		AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* L_4;
		L_4 = ResourcePackage_LoadAssetAsync_m54BA0BD48F1DF85A75D15C9FFD6A5560E7F67DB0(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// YooAsset.AssetHandle YooAsset.YooAssets::LoadAssetAsync(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* YooAssets_LoadAssetAsync_mFA8F4A2B14BBCBAEDEDAB035A40B2B29348FF9A1 (String_t* ___location0, uint32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAssetAsync(location, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		uint32_t L_2 = ___priority1;
		NullCheck(L_0);
		AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* L_3;
		L_3 = ResourcePackage_LoadAssetAsync_m606098185DD34EDFDF4AC06E6564BF7279E6DA16(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.SubAssetsHandle YooAsset.YooAssets::LoadSubAssetsSync(YooAsset.AssetInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* YooAssets_LoadSubAssetsSync_mA453F8944392857907E1AF50349DC23513749B8C (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadSubAssetsSync(assetInfo);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		NullCheck(L_0);
		SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* L_2;
		L_2 = ResourcePackage_LoadSubAssetsSync_m837CD7C471FB8996F1062E6AED6F63C1D6E999ED(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.SubAssetsHandle YooAsset.YooAssets::LoadSubAssetsSync(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* YooAssets_LoadSubAssetsSync_mEA843188AC6C3CE35065F735FBB89DF809015881 (String_t* ___location0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadSubAssetsSync(location, type);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		Type_t* L_2 = ___type1;
		NullCheck(L_0);
		SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* L_3;
		L_3 = ResourcePackage_LoadSubAssetsSync_m864560654EE2AB25E2830CD13238ADCAC668391B(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.SubAssetsHandle YooAsset.YooAssets::LoadSubAssetsSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* YooAssets_LoadSubAssetsSync_mABA33B490684C5816AB36482E7DD1C658B91B456 (String_t* ___location0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadSubAssetsSync(location);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		NullCheck(L_0);
		SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* L_2;
		L_2 = ResourcePackage_LoadSubAssetsSync_m4EAFE649C43D65A77E107331800A15D8F58DDC3B(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.SubAssetsHandle YooAsset.YooAssets::LoadSubAssetsAsync(YooAsset.AssetInfo,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* YooAssets_LoadSubAssetsAsync_mED638B7D64B480E96D61B0A7102B0EB8D05F2A39 (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, uint32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadSubAssetsAsync(assetInfo, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		uint32_t L_2 = ___priority1;
		NullCheck(L_0);
		SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* L_3;
		L_3 = ResourcePackage_LoadSubAssetsAsync_m1CE13EDB4B571D6BDC571A22361CE35AF38B15BD(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.SubAssetsHandle YooAsset.YooAssets::LoadSubAssetsAsync(System.String,System.Type,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* YooAssets_LoadSubAssetsAsync_m03868A70A5046868904A49FC2C9FA4F4966FB422 (String_t* ___location0, Type_t* ___type1, uint32_t ___priority2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadSubAssetsAsync(location, type, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		Type_t* L_2 = ___type1;
		uint32_t L_3 = ___priority2;
		NullCheck(L_0);
		SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* L_4;
		L_4 = ResourcePackage_LoadSubAssetsAsync_m62F3E23CF27E80D8F5AC1A70639F3D4818C61238(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// YooAsset.SubAssetsHandle YooAsset.YooAssets::LoadSubAssetsAsync(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* YooAssets_LoadSubAssetsAsync_m56D670C24FFC0706BD2856CB908745B801F126E9 (String_t* ___location0, uint32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadSubAssetsAsync(location, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		uint32_t L_2 = ___priority1;
		NullCheck(L_0);
		SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* L_3;
		L_3 = ResourcePackage_LoadSubAssetsAsync_mC708877673180FC66887FB12E64865D828412169(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.AllAssetsHandle YooAsset.YooAssets::LoadAllAssetsSync(YooAsset.AssetInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* YooAssets_LoadAllAssetsSync_mAD0E3F9DF45197D1448CA0BA09A12CDFABCD0AFB (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAllAssetsSync(assetInfo);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		NullCheck(L_0);
		AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* L_2;
		L_2 = ResourcePackage_LoadAllAssetsSync_m366D59292E3986EBBA51041C78811222206AB595(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.AllAssetsHandle YooAsset.YooAssets::LoadAllAssetsSync(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* YooAssets_LoadAllAssetsSync_m6E72ACC4A4E1A1CE84F45027C7A832294DA75783 (String_t* ___location0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAllAssetsSync(location, type);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		Type_t* L_2 = ___type1;
		NullCheck(L_0);
		AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* L_3;
		L_3 = ResourcePackage_LoadAllAssetsSync_mDCE09807D0E70B94464262B70B42F7AEE9F95667(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.AllAssetsHandle YooAsset.YooAssets::LoadAllAssetsSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* YooAssets_LoadAllAssetsSync_m203E581C646FE44990BCF3BEB9CF9C85D730A2A6 (String_t* ___location0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAllAssetsSync(location);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		NullCheck(L_0);
		AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* L_2;
		L_2 = ResourcePackage_LoadAllAssetsSync_m64A18CAD0125FB76B72473316B3D1DF40408B537(L_0, L_1, NULL);
		return L_2;
	}
}
// YooAsset.AllAssetsHandle YooAsset.YooAssets::LoadAllAssetsAsync(YooAsset.AssetInfo,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* YooAssets_LoadAllAssetsAsync_m5666876207C49D6A62AE0F0B9CD98E5B64864A53 (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, uint32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAllAssetsAsync(assetInfo, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		uint32_t L_2 = ___priority1;
		NullCheck(L_0);
		AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* L_3;
		L_3 = ResourcePackage_LoadAllAssetsAsync_m633B42B258ACA69C7B1D1C94079F69A51BF30635(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.AllAssetsHandle YooAsset.YooAssets::LoadAllAssetsAsync(System.String,System.Type,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* YooAssets_LoadAllAssetsAsync_m91931B7CE89047FB7660ACF2A4EE3DC8A121DA1D (String_t* ___location0, Type_t* ___type1, uint32_t ___priority2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAllAssetsAsync(location, type, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		Type_t* L_2 = ___type1;
		uint32_t L_3 = ___priority2;
		NullCheck(L_0);
		AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* L_4;
		L_4 = ResourcePackage_LoadAllAssetsAsync_mF58014D6F8F5B0B3A4CA308CC5884D2D291D1392(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// YooAsset.AllAssetsHandle YooAsset.YooAssets::LoadAllAssetsAsync(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* YooAssets_LoadAllAssetsAsync_mBE400FB9E1EF13661235ACC4EC1879FBF5F82E0A (String_t* ___location0, uint32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.LoadAllAssetsAsync(location, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		uint32_t L_2 = ___priority1;
		NullCheck(L_0);
		AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* L_3;
		L_3 = ResourcePackage_LoadAllAssetsAsync_mB03D6A470ABED0F5DD76F331CDCED0C3B752A206(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.ResourceDownloaderOperation YooAsset.YooAssets::CreateResourceDownloader(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* YooAssets_CreateResourceDownloader_m02744B0F2F704B82B604905E376B189C6EE3C1DA (int32_t ___downloadingMaxNumber0, int32_t ___failedTryAgain1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateResourceDownloader(downloadingMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		int32_t L_1 = ___downloadingMaxNumber0;
		int32_t L_2 = ___failedTryAgain1;
		NullCheck(L_0);
		ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* L_3;
		L_3 = ResourcePackage_CreateResourceDownloader_m7BCBA05D79698FD8C1EC1AAC30A02A4300365DE8(L_0, L_1, L_2, ((int32_t)60), NULL);
		return L_3;
	}
}
// YooAsset.ResourceDownloaderOperation YooAsset.YooAssets::CreateResourceDownloader(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* YooAssets_CreateResourceDownloader_m347BE9263131A61F347721EFA3FAA5E6E1671F86 (String_t* ___tag0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateResourceDownloader(new string[] { tag }, downloadingMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___tag0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		int32_t L_4 = ___downloadingMaxNumber1;
		int32_t L_5 = ___failedTryAgain2;
		NullCheck(L_0);
		ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* L_6;
		L_6 = ResourcePackage_CreateResourceDownloader_mE3376CDD2771B78F6F0E9732DC8BA1DE0056C72C(L_0, L_2, L_4, L_5, ((int32_t)60), NULL);
		return L_6;
	}
}
// YooAsset.ResourceDownloaderOperation YooAsset.YooAssets::CreateResourceDownloader(System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* YooAssets_CreateResourceDownloader_mB77C554F78198E668BFFE02CC949F3D802A412C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tags0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateResourceDownloader(tags, downloadingMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___tags0;
		int32_t L_2 = ___downloadingMaxNumber1;
		int32_t L_3 = ___failedTryAgain2;
		NullCheck(L_0);
		ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* L_4;
		L_4 = ResourcePackage_CreateResourceDownloader_mE3376CDD2771B78F6F0E9732DC8BA1DE0056C72C(L_0, L_1, L_2, L_3, ((int32_t)60), NULL);
		return L_4;
	}
}
// YooAsset.ResourceDownloaderOperation YooAsset.YooAssets::CreateBundleDownloader(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* YooAssets_CreateBundleDownloader_m07365DF783E578DC956F45B055A38CF62196AEF4 (String_t* ___location0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateBundleDownloader(location, downloadingMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___location0;
		int32_t L_2 = ___downloadingMaxNumber1;
		int32_t L_3 = ___failedTryAgain2;
		NullCheck(L_0);
		ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* L_4;
		L_4 = ResourcePackage_CreateBundleDownloader_mCF4370B51C39939E9AAD44FA0657B2B9F79E145C(L_0, L_1, L_2, L_3, ((int32_t)60), NULL);
		return L_4;
	}
}
// YooAsset.ResourceDownloaderOperation YooAsset.YooAssets::CreateBundleDownloader(System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* YooAssets_CreateBundleDownloader_mD459976AB774BC385128333966998DF471C3EEC9 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___locations0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateBundleDownloader(locations, downloadingMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___locations0;
		int32_t L_2 = ___downloadingMaxNumber1;
		int32_t L_3 = ___failedTryAgain2;
		NullCheck(L_0);
		ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* L_4;
		L_4 = ResourcePackage_CreateBundleDownloader_mA439BB47573AE021D2884AAE25104025E5AB22DA(L_0, L_1, L_2, L_3, ((int32_t)60), NULL);
		return L_4;
	}
}
// YooAsset.ResourceDownloaderOperation YooAsset.YooAssets::CreateBundleDownloader(YooAsset.AssetInfo,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* YooAssets_CreateBundleDownloader_mA6A96B99DD69D2AD699F1DFFCCBB6C7DF67096BF (AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ___assetInfo0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateBundleDownloader(assetInfo, downloadingMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* L_1 = ___assetInfo0;
		int32_t L_2 = ___downloadingMaxNumber1;
		int32_t L_3 = ___failedTryAgain2;
		NullCheck(L_0);
		ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* L_4;
		L_4 = ResourcePackage_CreateBundleDownloader_mAD0011B3FE4529693E4F5F47871DFFD12CB31B36(L_0, L_1, L_2, L_3, ((int32_t)60), NULL);
		return L_4;
	}
}
// YooAsset.ResourceDownloaderOperation YooAsset.YooAssets::CreateBundleDownloader(YooAsset.AssetInfo[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* YooAssets_CreateBundleDownloader_m6895EEEB4C13DC1AD971DA71FB7836FC5FFD1FE7 (AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9* ___assetInfos0, int32_t ___downloadingMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateBundleDownloader(assetInfos, downloadingMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		AssetInfoU5BU5D_tF3D57109F5DA58F74C0720CAAC3755EBA9C6A0C9* L_1 = ___assetInfos0;
		int32_t L_2 = ___downloadingMaxNumber1;
		int32_t L_3 = ___failedTryAgain2;
		NullCheck(L_0);
		ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* L_4;
		L_4 = ResourcePackage_CreateBundleDownloader_m5C97CF650D6106522EE9D165654374DF5EC91CA0(L_0, L_1, L_2, L_3, ((int32_t)60), NULL);
		return L_4;
	}
}
// YooAsset.ResourceUnpackerOperation YooAsset.YooAssets::CreateResourceUnpacker(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4* YooAssets_CreateResourceUnpacker_mEC0FBBCBEF0475561637BA647487E388237C085F (int32_t ___unpackingMaxNumber0, int32_t ___failedTryAgain1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateResourceUnpacker(unpackingMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		int32_t L_1 = ___unpackingMaxNumber0;
		int32_t L_2 = ___failedTryAgain1;
		NullCheck(L_0);
		ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4* L_3;
		L_3 = ResourcePackage_CreateResourceUnpacker_m68DD0C1AA64B36E834063EB0210756B2B254766F(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// YooAsset.ResourceUnpackerOperation YooAsset.YooAssets::CreateResourceUnpacker(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4* YooAssets_CreateResourceUnpacker_m83FC9BAF65EBFA13A3E2C7CF0AB3CB03189DAF03 (String_t* ___tag0, int32_t ___unpackingMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateResourceUnpacker(tag, unpackingMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___tag0;
		int32_t L_2 = ___unpackingMaxNumber1;
		int32_t L_3 = ___failedTryAgain2;
		NullCheck(L_0);
		ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4* L_4;
		L_4 = ResourcePackage_CreateResourceUnpacker_mAAD6B3A46A1F23AEAE01BCA910BE315D96AF912C(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// YooAsset.ResourceUnpackerOperation YooAsset.YooAssets::CreateResourceUnpacker(System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4* YooAssets_CreateResourceUnpacker_m3B182C3DB58D1D17F1C5754B556ADFFC29AEA072 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tags0, int32_t ___unpackingMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateResourceUnpacker(tags, unpackingMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___tags0;
		int32_t L_2 = ___unpackingMaxNumber1;
		int32_t L_3 = ___failedTryAgain2;
		NullCheck(L_0);
		ResourceUnpackerOperation_t2E4F562D0A42499A3C18C61D52C8DE208ACF6FC4* L_4;
		L_4 = ResourcePackage_CreateResourceUnpacker_m0B320414E6DDE9A50B7D4405E0BF6625AC7AE7EB(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// YooAsset.ResourceImporterOperation YooAsset.YooAssets::CreateResourceImporter(System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceImporterOperation_tF8A4EBDE73A54A2E5C9494E415A9D552ED41AF53* YooAssets_CreateResourceImporter_m79DE467ACD908791BC005DC66D3B9AA3D2DB19F1 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___filePaths0, int32_t ___importerMaxNumber1, int32_t ___failedTryAgain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _defaultPackage.CreateResourceImporter(filePaths, importerMaxNumber, failedTryAgain);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___filePaths0;
		int32_t L_2 = ___importerMaxNumber1;
		int32_t L_3 = ___failedTryAgain2;
		NullCheck(L_0);
		ResourceImporterOperation_tF8A4EBDE73A54A2E5C9494E415A9D552ED41AF53* L_4;
		L_4 = ResourcePackage_CreateResourceImporter_mFE1693629D8FB10807574C1D2F500CFACE58A106(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void YooAsset.YooAssets::DebugCheckDefaultPackageValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_DebugCheckDefaultPackageValid_m65FA749C73F641D08442DCFCBD0ED7FB491D7F90 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_defaultPackage == null)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new Exception($"Default package is null. Please use {nameof(YooAssets.SetDefaultPackage)} !");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A330F95B9B9004009DFA7DB9F4ED598080FFFDB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_DebugCheckDefaultPackageValid_m65FA749C73F641D08442DCFCBD0ED7FB491D7F90_RuntimeMethod_var)));
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void YooAsset.YooAssets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets__cctor_mCD524F29C3D8ADE7501921F9116D8781EE4840DC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool _isInitialize = false;
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)0;
		// private static GameObject _driver = null;
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// private static readonly List<ResourcePackage> _packages = new List<ResourcePackage>();
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_0 = (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*)il2cpp_codegen_object_new(List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728(L_0, List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728_RuntimeMethod_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.YooAssetsDriver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsDriver_Update_m990474D140444AB6B0599A0E562A0941C518005F (YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YooAssets.Update();
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		YooAssets_Update_mFCE3CD9A8495DAF42CBA1E558DEF7A3A6A56FF41(NULL);
		// }
		return;
	}
}
// System.Void YooAsset.YooAssetsDriver::DebugCheckDuplicateDriver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsDriver_DebugCheckDuplicateDriver_mD08D8F69F86927A2C4F01EF2D35C644C06151CEB (YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F01E96250419380D036DBE7005BF02DB2648D96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LastestUpdateFrame > 0)
		int32_t L_0 = ((YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var))->___LastestUpdateFrame_4;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// if (LastestUpdateFrame == Time.frameCount)
		int32_t L_1 = ((YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var))->___LastestUpdateFrame_4;
		int32_t L_2;
		L_2 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		// YooLogger.Warning($"There are two {nameof(YooAssetsDriver)} in the scene. Please ensure there is always exactly one driver in the scene.");
		YooLogger_Warning_mC903CB4ABE0854A803317EAE07ADE9D79A2E8121(_stringLiteral6F01E96250419380D036DBE7005BF02DB2648D96, NULL);
	}

IL_001e:
	{
		// LastestUpdateFrame = Time.frameCount;
		int32_t L_3;
		L_3 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		((YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var))->___LastestUpdateFrame_4 = L_3;
		// }
		return;
	}
}
// System.Void YooAsset.YooAssetsDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsDriver__ctor_m354D5C4B4F226C2FB6B5B7E9E19B764A1769438C (YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DownloadHelper_set_ClearFileResponseCodes_mB2BC4C20E053B91ECFEBE2D04B71B8EEC0072AE9_inline (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<long> ClearFileResponseCodes { set; get; }
		List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_0 = ___value0;
		((DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_StaticFields*)il2cpp_codegen_static_fields_for(DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_il2cpp_TypeInfo_var))->___U3CClearFileResponseCodesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_StaticFields*)il2cpp_codegen_static_fields_for(DownloadHelper_t8BEC6C8C9336E6F1916A868DFEAAE7C53E20129B_il2cpp_TypeInfo_var))->___U3CClearFileResponseCodesU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OperationSystem_set_MaxTimeSlice_mFA4EF030005990EAD63A26ADC0EEA26671365A62_inline (int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static long MaxTimeSlice { set; get; } = long.MaxValue;
		int64_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		((OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_StaticFields*)il2cpp_codegen_static_fields_for(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var))->___U3CMaxTimeSliceU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
