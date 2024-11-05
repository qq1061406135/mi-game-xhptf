#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.EventHandler`1<UnityWebSocket.CloseEventArgs>
struct EventHandler_1_t0CB208774EBC1EDE829EBA34B2F2C67C2F72251A;
// System.EventHandler`1<UnityWebSocket.ErrorEventArgs>
struct EventHandler_1_t72F79EAB113BE3AD49025A1EDC67AFF6E7866886;
// System.EventHandler`1<UnityWebSocket.MessageEventArgs>
struct EventHandler_1_t0EA7AA0464283489DD25C5FC8E74852B2E803B52;
// System.EventHandler`1<UnityWebSocket.OpenEventArgs>
struct EventHandler_1_tFA48683B941C16E636AD7D3099E331C558E5F86A;
// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577;
// System.Collections.Generic.IReadOnlyList`1<System.String>
struct IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.Queue`1<System.EventArgs>
struct Queue_1_tAF65645E62D56ACDCA5EACD38DFD375251E944BB;
// System.Collections.Generic.Queue`1<UnityWebSocket.WebSocket/SendBuffer>
struct Queue_1_t621135753A6E1638DB759C68707691C8FFEFAEB3;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// AOTGenericReferences
struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1;
// System.Net.WebSockets.ClientWebSocket
struct ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F;
// UnityWebSocket.CloseEventArgs
struct CloseEventArgs_tB045A5C6D63C9BB7F0AF8ADC7D86DF06E1463AFD;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityWebSocket.ErrorEventArgs
struct ErrorEventArgs_tDDDC9112E1DC52BC3EA09481B335578A6A04A5E6;
// System.Exception
struct Exception_t;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityWebSocket.IWebSocket
struct IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2;
// UnityWebSocket.MessageEventArgs
struct MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityWebSocket.OpenEventArgs
struct OpenEventArgs_t9A9210E71DD8629BDC73649B1AB308CCC1CD0066;
// System.String
struct String_t;
// UnityWebSocket.Demo.UnityWebSocketDemo
struct UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityWebSocket.WebSocket
struct WebSocket_t7124BAAF9290EC8BAB468B77ADEEF0F2AF8F994C;

IL2CPP_EXTERN_C RuntimeClass* AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloseStatusCode_t32895788E19047F70A03BCCEE3C8E6CB4AA3940F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t0CB208774EBC1EDE829EBA34B2F2C67C2F72251A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t0EA7AA0464283489DD25C5FC8E74852B2E803B52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t72F79EAB113BE3AD49025A1EDC67AFF6E7866886_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tFA48683B941C16E636AD7D3099E331C558E5F86A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketState_tD28B137FE90030F57ED1899504AD24F2542EF3EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t7124BAAF9290EC8BAB468B77ADEEF0F2AF8F994C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral05611EFCF7E7B8266EA4498F0A12A7B6F297B6BF;
IL2CPP_EXTERN_C String_t* _stringLiteral078338757EAA4C9C25F8D137F8F563128FDCAD4A;
IL2CPP_EXTERN_C String_t* _stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F;
IL2CPP_EXTERN_C String_t* _stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral241E4679C95BB3FC4FC62C288CA4E0F685FECD48;
IL2CPP_EXTERN_C String_t* _stringLiteral2C0FB268FEF0DAA245BD3DD0D331FA3446F8F19F;
IL2CPP_EXTERN_C String_t* _stringLiteral2F55BE61AB272F99E1B3215D3743A3E2D9415CBA;
IL2CPP_EXTERN_C String_t* _stringLiteral3601EBFCBD34C287F86CE9019C0B1A2668725830;
IL2CPP_EXTERN_C String_t* _stringLiteral382FDAC239F5C903019AAC194290AAB06C937DD8;
IL2CPP_EXTERN_C String_t* _stringLiteral38CC64A60BCEE8EDA075AEC97BC9E96CCEDE9B0E;
IL2CPP_EXTERN_C String_t* _stringLiteral427F8D2A1C503C84E76DABDB17E37AE2F3133650;
IL2CPP_EXTERN_C String_t* _stringLiteral4AF1E020B9828637F08F83306D8709FF26AB5FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral4C43361A0A500CC6B80443746394A4C1D19915BD;
IL2CPP_EXTERN_C String_t* _stringLiteral4CFB1E3E372A1023D954142752C1559837789E9A;
IL2CPP_EXTERN_C String_t* _stringLiteral58FC7465060C3856C86A688D013610286143181E;
IL2CPP_EXTERN_C String_t* _stringLiteral618D9641C2F1C49493E2614339BCFA08E23EC22E;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2;
IL2CPP_EXTERN_C String_t* _stringLiteral78AE796E69370BE7AD72ADB60741E67A9B8EED6B;
IL2CPP_EXTERN_C String_t* _stringLiteral83F9039BF0469F46CB1C395E59180657EB6D5BBF;
IL2CPP_EXTERN_C String_t* _stringLiteral87A82C68D0F9886C428DE9E07B5524F3E6A08970;
IL2CPP_EXTERN_C String_t* _stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53;
IL2CPP_EXTERN_C String_t* _stringLiteralB43FB891A78D7FA23B2E77572664CB1F2591440A;
IL2CPP_EXTERN_C String_t* _stringLiteralC766BA5E1A2B4818EDC97B520C896F5B474C96BA;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E9DAF844B25471D821CB8F094AE5423C2EECC4;
IL2CPP_EXTERN_C String_t* _stringLiteralC86EC5531EBD8B51C4944FF50C7007F5F966250D;
IL2CPP_EXTERN_C String_t* _stringLiteralD9080F1E0E059C22879374818DE1A76973089930;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE408DFB621D4A91D306468866F94EA7276FA34A;
IL2CPP_EXTERN_C String_t* _stringLiteralE1373F28086225B229A8ED2055F63522B94FB3D7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2BCE1DD723B68E317FAE67A12ABE128479B6E91;
IL2CPP_EXTERN_C String_t* _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434;
IL2CPP_EXTERN_C String_t* _stringLiteralF409E29DF203CF83A3BE712EC854B5C19E7D670B;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E22E97270D00D0BB061F3FBD725FBE8F2315BD;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebSocketDemo_Socket_OnClose_mDEEA0E9304B5F98C98FCDDB9007405CB246F7EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebSocketDemo_Socket_OnError_m3D11BD3059162CDB3B391F11F826286DDAD0FEDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebSocketDemo_Socket_OnMessage_m05CB96A767755393CE3089EB0CD2BAE713973684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebSocketDemo_Socket_OnOpen_mDBB42F1AFE01956059928D518DF045FF059FF124_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
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

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
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

// UnityWebSocket.WebSocket
struct WebSocket_t7124BAAF9290EC8BAB468B77ADEEF0F2AF8F994C  : public RuntimeObject
{
	// System.String UnityWebSocket.WebSocket::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_0;
	// System.String[] UnityWebSocket.WebSocket::<SubProtocols>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CSubProtocolsU3Ek__BackingField_1;
	// System.String UnityWebSocket.WebSocket::<BinaryType>k__BackingField
	String_t* ___U3CBinaryTypeU3Ek__BackingField_2;
	// System.EventHandler`1<UnityWebSocket.OpenEventArgs> UnityWebSocket.WebSocket::OnOpen
	EventHandler_1_tFA48683B941C16E636AD7D3099E331C558E5F86A* ___OnOpen_3;
	// System.EventHandler`1<UnityWebSocket.CloseEventArgs> UnityWebSocket.WebSocket::OnClose
	EventHandler_1_t0CB208774EBC1EDE829EBA34B2F2C67C2F72251A* ___OnClose_4;
	// System.EventHandler`1<UnityWebSocket.ErrorEventArgs> UnityWebSocket.WebSocket::OnError
	EventHandler_1_t72F79EAB113BE3AD49025A1EDC67AFF6E7866886* ___OnError_5;
	// System.EventHandler`1<UnityWebSocket.MessageEventArgs> UnityWebSocket.WebSocket::OnMessage
	EventHandler_1_t0EA7AA0464283489DD25C5FC8E74852B2E803B52* ___OnMessage_6;
	// System.Net.WebSockets.ClientWebSocket UnityWebSocket.WebSocket::socket
	ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* ___socket_7;
	// System.Object UnityWebSocket.WebSocket::sendQueueLock
	RuntimeObject* ___sendQueueLock_8;
	// System.Collections.Generic.Queue`1<UnityWebSocket.WebSocket/SendBuffer> UnityWebSocket.WebSocket::sendQueue
	Queue_1_t621135753A6E1638DB759C68707691C8FFEFAEB3* ___sendQueue_9;
	// System.Boolean UnityWebSocket.WebSocket::isSendTaskRunning
	bool ___isSendTaskRunning_10;
	// System.Collections.Generic.Queue`1<System.EventArgs> UnityWebSocket.WebSocket::eventQueue
	Queue_1_tAF65645E62D56ACDCA5EACD38DFD375251E944BB* ___eventQueue_11;
	// System.Object UnityWebSocket.WebSocket::eventQueueLock
	RuntimeObject* ___eventQueueLock_12;
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

// UnityWebSocket.CloseEventArgs
struct CloseEventArgs_tB045A5C6D63C9BB7F0AF8ADC7D86DF06E1463AFD  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.UInt16 UnityWebSocket.CloseEventArgs::<Code>k__BackingField
	uint16_t ___U3CCodeU3Ek__BackingField_1;
	// System.String UnityWebSocket.CloseEventArgs::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// System.Boolean UnityWebSocket.CloseEventArgs::<WasClean>k__BackingField
	bool ___U3CWasCleanU3Ek__BackingField_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityWebSocket.ErrorEventArgs
struct ErrorEventArgs_tDDDC9112E1DC52BC3EA09481B335578A6A04A5E6  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Exception UnityWebSocket.ErrorEventArgs::<Exception>k__BackingField
	Exception_t* ___U3CExceptionU3Ek__BackingField_1;
	// System.String UnityWebSocket.ErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityWebSocket.MessageEventArgs
struct MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Byte[] UnityWebSocket.MessageEventArgs::_rawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____rawData_1;
	// System.String UnityWebSocket.MessageEventArgs::_data
	String_t* ____data_2;
	// UnityWebSocket.Opcode UnityWebSocket.MessageEventArgs::<Opcode>k__BackingField
	uint8_t ___U3COpcodeU3Ek__BackingField_3;
};

// UnityWebSocket.OpenEventArgs
struct OpenEventArgs_t9A9210E71DD8629BDC73649B1AB308CCC1CD0066  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.EventHandler`1<UnityWebSocket.CloseEventArgs>
struct EventHandler_1_t0CB208774EBC1EDE829EBA34B2F2C67C2F72251A  : public MulticastDelegate_t
{
};

// System.EventHandler`1<UnityWebSocket.ErrorEventArgs>
struct EventHandler_1_t72F79EAB113BE3AD49025A1EDC67AFF6E7866886  : public MulticastDelegate_t
{
};

// System.EventHandler`1<UnityWebSocket.MessageEventArgs>
struct EventHandler_1_t0EA7AA0464283489DD25C5FC8E74852B2E803B52  : public MulticastDelegate_t
{
};

// System.EventHandler`1<UnityWebSocket.OpenEventArgs>
struct EventHandler_1_tFA48683B941C16E636AD7D3099E331C558E5F86A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AOTGenericReferences
struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_StaticFields
{
	// System.Collections.Generic.IReadOnlyList`1<System.String> AOTGenericReferences::PatchedAOTAssemblyList
	RuntimeObject* ___PatchedAOTAssemblyList_4;
};

// UnityWebSocket.Demo.UnityWebSocketDemo
struct UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityWebSocket.Demo.UnityWebSocketDemo::address
	String_t* ___address_4;
	// System.String UnityWebSocket.Demo.UnityWebSocketDemo::sendText
	String_t* ___sendText_5;
	// UnityWebSocket.IWebSocket UnityWebSocket.Demo.UnityWebSocketDemo::socket
	RuntimeObject* ___socket_6;
	// System.Boolean UnityWebSocket.Demo.UnityWebSocketDemo::logMessage
	bool ___logMessage_7;
	// System.String UnityWebSocket.Demo.UnityWebSocketDemo::log
	String_t* ___log_8;
	// System.Int32 UnityWebSocket.Demo.UnityWebSocketDemo::sendCount
	int32_t ___sendCount_9;
	// System.Int32 UnityWebSocket.Demo.UnityWebSocketDemo::receiveCount
	int32_t ___receiveCount_10;
	// UnityEngine.Vector2 UnityWebSocket.Demo.UnityWebSocketDemo::scrollPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollPos_11;
	// UnityEngine.Color UnityWebSocket.Demo.UnityWebSocketDemo::green
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___green_12;
	// UnityEngine.Color UnityWebSocket.Demo.UnityWebSocketDemo::red
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___red_13;
	// UnityEngine.Color UnityWebSocket.Demo.UnityWebSocketDemo::wait
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___wait_14;
	// System.Int32 UnityWebSocket.Demo.UnityWebSocketDemo::frame
	int32_t ___frame_15;
	// System.Single UnityWebSocket.Demo.UnityWebSocketDemo::time
	float ___time_16;
	// System.Single UnityWebSocket.Demo.UnityWebSocketDemo::fps
	float ___fps_17;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_matrix_m531F68D81C0D8EC62E40AEAE7C48453BF995C2FC (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA (float ___width0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline)(method);
	return (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)il2cppRetVal;
}
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_enabled_m49481A7F8018837F8BBFAF5FD3A94D374CD203DA (bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayout_TextField_m34513F9447F1AB5CF1B147A7060DD4D65F05C0C9 (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void UnityWebSocket.WebSocket::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mFF5F6F3A0F98D5912F1E5291F7508B6989B670BC (WebSocket_t7124BAAF9290EC8BAB468B77ADEEF0F2AF8F994C* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<UnityWebSocket.OpenEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mD5DD547E26B1D7FCF8940CD684DAE82269994223 (EventHandler_1_tFA48683B941C16E636AD7D3099E331C558E5F86A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<UnityWebSocket.MessageEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m6152146BE4E207A82899640D1E69DF6C7098C1BB (EventHandler_1_t0EA7AA0464283489DD25C5FC8E74852B2E803B52* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<UnityWebSocket.CloseEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m9CC99888FCCC528A7FD746FCA9146EEE178221BE (EventHandler_1_t0CB208774EBC1EDE829EBA34B2F2C67C2F72251A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<UnityWebSocket.ErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mC42E74DEE19BEF29B8E34DA95151A5603A70BE0B (EventHandler_1_t72F79EAB113BE3AD49025A1EDC67AFF6E7866886* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m77FC9915EB7B4333DA3B53F4678F0CEFF698F022_gshared)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___object0, ___method1, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline)(method);
	return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)il2cppRetVal;
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityWebSocket.Demo.UnityWebSocketDemo::AddLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA (UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD* __this, String_t* ___str0, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_MinHeight_m2A5C925B88EE204ACBD544CB5E663E5E33D07631 (float ___minHeight0, const RuntimeMethod* method) ;
// System.String UnityEngine.GUILayout::TextArea(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayout_TextArea_m9CF7B462D68962C768272B06A04D11ADEDECD0BF (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248 (bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MaxHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_MaxHeight_m6D2D409EB10D15DB5FC3319362547F16CCB3997A (float ___maxHeight0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUILayout_BeginScrollView_mEB0DA223039CB6C3BCD3A9BFACF57C191FEF938D (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollPosition0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndScrollView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndScrollView_mD1A74B6E090DCCC21E3EBB6E04FC0CC1E962540D (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityWebSocket.MessageEventArgs::get_IsBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageEventArgs_get_IsBinary_mB727260A743C54CBBB8BDB38C2DDF9C94F315796 (MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B* __this, const RuntimeMethod* method) ;
// System.String UnityWebSocket.MessageEventArgs::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageEventArgs_get_Data_m6DC835664F35009114453DAD4A76939B07AF964B (MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityWebSocket.MessageEventArgs::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageEventArgs_get_RawData_m508660D24B2434C130A28C01F2D3A00653D9D1D9 (MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityWebSocket.MessageEventArgs::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageEventArgs_get_IsText_mC0B03DBD2B207929650D3883EBCFA56B4538CA8A (MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B* __this, const RuntimeMethod* method) ;
// UnityWebSocket.CloseStatusCode UnityWebSocket.CloseEventArgs::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CloseEventArgs_get_StatusCode_mD06601DACC4D4A670852E52160B670C328DFDC95 (CloseEventArgs_tB045A5C6D63C9BB7F0AF8ADC7D86DF06E1463AFD* __this, const RuntimeMethod* method) ;
// System.String UnityWebSocket.CloseEventArgs::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CloseEventArgs_get_Reason_mF38488E1A776408A98AFAEB164C39DDA33FCED72_inline (CloseEventArgs_tB045A5C6D63C9BB7F0AF8ADC7D86DF06E1463AFD* __this, const RuntimeMethod* method) ;
// System.String UnityWebSocket.ErrorEventArgs::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_get_Message_m0C09991AF3D44108561067096B4ED50C5A74DC74_inline (ErrorEventArgs_tDDDC9112E1DC52BC3EA09481B335578A6A04A5E6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AOTGenericReferences::RefMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences_RefMethods_m17CF257D96D8BC2F232C4C1502905B792D17170C (AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AOTGenericReferences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences__ctor_m41CBD692FC9B521512E552575AFE7A385DEC71A6 (AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AOTGenericReferences::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences__cctor_mEA25EFE0D0F7CC62B47D5A83040FC5FDFA3B2D9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F55BE61AB272F99E1B3215D3743A3E2D9415CBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C43361A0A500CC6B80443746394A4C1D19915BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CFB1E3E372A1023D954142752C1559837789E9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC766BA5E1A2B4818EDC97B520C896F5B474C96BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E9DAF844B25471D821CB8F094AE5423C2EECC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
		// {
		//     "Google.Protobuf.dll",
		//     "Model.dll",
		//     "Newtonsoft.Json.dll",
		//     "System.Core.dll",
		//     "UnityEngine.CoreModule.dll",
		//     "UnityEngine.JSONSerializeModule.dll",
		//     "mscorlib.dll",
		// };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteralC766BA5E1A2B4818EDC97B520C896F5B474C96BA, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteral2F55BE61AB272F99E1B3215D3743A3E2D9415CBA, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteral4C43361A0A500CC6B80443746394A4C1D19915BD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, _stringLiteral946BD80B231F5776B5307B385889C9ABB57D3D53, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, _stringLiteralC7E9DAF844B25471D821CB8F094AE5423C2EECC4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, _stringLiteral4CFB1E3E372A1023D954142752C1559837789E9A, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, _stringLiteral0B34DFC38793BF0AF6DEA9A94F7CCB4150E999A6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		((AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_StaticFields*)il2cpp_codegen_static_fields_for(AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var))->___PatchedAOTAssemblyList_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_StaticFields*)il2cpp_codegen_static_fields_for(AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var))->___PatchedAOTAssemblyList_4), (void*)L_7);
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
// System.Void UnityWebSocket.Demo.UnityWebSocketDemo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebSocketDemo_OnGUI_m246B6238A132AB988C8837EF04EE45B351068231 (UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t0CB208774EBC1EDE829EBA34B2F2C67C2F72251A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t0EA7AA0464283489DD25C5FC8E74852B2E803B52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t72F79EAB113BE3AD49025A1EDC67AFF6E7866886_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFA48683B941C16E636AD7D3099E331C558E5F86A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebSocketDemo_Socket_OnClose_mDEEA0E9304B5F98C98FCDDB9007405CB246F7EA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebSocketDemo_Socket_OnError_m3D11BD3059162CDB3B391F11F826286DDAD0FEDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebSocketDemo_Socket_OnMessage_m05CB96A767755393CE3089EB0CD2BAE713973684_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebSocketDemo_Socket_OnOpen_mDBB42F1AFE01956059928D518DF045FF059FF124_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketState_tD28B137FE90030F57ED1899504AD24F2542EF3EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t7124BAAF9290EC8BAB468B77ADEEF0F2AF8F994C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05611EFCF7E7B8266EA4498F0A12A7B6F297B6BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral078338757EAA4C9C25F8D137F8F563128FDCAD4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral241E4679C95BB3FC4FC62C288CA4E0F685FECD48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C0FB268FEF0DAA245BD3DD0D331FA3446F8F19F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3601EBFCBD34C287F86CE9019C0B1A2668725830);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral427F8D2A1C503C84E76DABDB17E37AE2F3133650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58FC7465060C3856C86A688D013610286143181E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral618D9641C2F1C49493E2614339BCFA08E23EC22E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83F9039BF0469F46CB1C395E59180657EB6D5BBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB43FB891A78D7FA23B2E77572664CB1F2591440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC86EC5531EBD8B51C4944FF50C7007F5F966250D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9080F1E0E059C22879374818DE1A76973089930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1373F28086225B229A8ED2055F63522B94FB3D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2BCE1DD723B68E317FAE67A12ABE128479B6E91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8E22E97270D00D0BB061F3FBD725FBE8F2315BD);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* V_1 = NULL;
	uint16_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t G_B3_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	String_t* G_B11_0 = NULL;
	String_t* G_B16_0 = NULL;
	{
		// var scale = Screen.width / 800f;
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		V_0 = ((float)(((float)L_0)/(800.0f)));
		// GUI.matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, new Vector3(scale, scale, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		float L_3 = V_0;
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_3, L_4, (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_1, L_2, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_matrix_m531F68D81C0D8EC62E40AEAE7C48453BF995C2FC(L_6, NULL);
		// var width = GUILayout.Width(Screen.width / scale - 10);
		int32_t L_7;
		L_7 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_8 = V_0;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_9;
		L_9 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA(((float)il2cpp_codegen_subtract(((float)(((float)L_7)/L_8)), (10.0f))), NULL);
		V_1 = L_9;
		// WebSocketState state = socket == null ? WebSocketState.Closed : socket.ReadyState;
		RuntimeObject* L_10 = __this->___socket_6;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_11 = __this->___socket_6;
		NullCheck(L_11);
		uint16_t L_12;
		L_12 = InterfaceFuncInvoker0< uint16_t >::Invoke(6 /* UnityWebSocket.WebSocketState UnityWebSocket.IWebSocket::get_ReadyState() */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_11);
		G_B3_0 = ((int32_t)(L_12));
		goto IL_0066;
	}

IL_0065:
	{
		G_B3_0 = 3;
	}

IL_0066:
	{
		V_2 = G_B3_0;
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_13;
		L_13 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_13, NULL);
		// GUILayout.Label("SDK Version: " + Settings.VERSION, GUILayout.Width(Screen.width / scale - 100));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_14 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_15 = L_14;
		int32_t L_16;
		L_16 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_17 = V_0;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_18;
		L_18 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA(((float)il2cpp_codegen_subtract(((float)(((float)L_16)/L_17)), (100.0f))), NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_18);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteralE1373F28086225B229A8ED2055F63522B94FB3D7, L_15, NULL);
		// GUI.color = green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___green_12;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_19, NULL);
		// GUILayout.Label($"FPS: {fps:F2}", GUILayout.Width(80));
		float L_20 = __this->___fps_17;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral05611EFCF7E7B8266EA4498F0A12A7B6F297B6BF, L_22, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_24 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_25 = L_24;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_26;
		L_26 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((80.0f), NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_26);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_23, L_25, NULL);
		// GUI.color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_27, NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_28;
		L_28 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_28, NULL);
		// GUILayout.Label("State: ", GUILayout.Width(36));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_29 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_30 = L_29;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_31;
		L_31 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((36.0f), NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_31);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F, L_30, NULL);
		// GUI.color = WebSocketState.Closed == state ? red : WebSocketState.Open == state ? green : wait;
		uint16_t L_32 = V_2;
		if ((((int32_t)3) == ((int32_t)L_32)))
		{
			goto IL_011d;
		}
	}
	{
		uint16_t L_33 = V_2;
		if ((((int32_t)1) == ((int32_t)L_33)))
		{
			goto IL_0115;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = __this->___wait_14;
		G_B8_0 = L_34;
		goto IL_0123;
	}

IL_0115:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = __this->___green_12;
		G_B8_0 = L_35;
		goto IL_0123;
	}

IL_011d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = __this->___red_13;
		G_B8_0 = L_36;
	}

IL_0123:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(G_B8_0, NULL);
		// GUILayout.Label($"{state}", GUILayout.Width(120));
		uint16_t L_37 = V_2;
		uint16_t L_38 = L_37;
		RuntimeObject* L_39 = Box(WebSocketState_tD28B137FE90030F57ED1899504AD24F2542EF3EA_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40;
		L_40 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_39, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_41 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_42 = L_41;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_43;
		L_43 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((120.0f), NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_43);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_40, L_42, NULL);
		// GUI.color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		L_44 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_44, NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// GUI.enabled = state == WebSocketState.Closed;
		uint16_t L_45 = V_2;
		GUI_set_enabled_m49481A7F8018837F8BBFAF5FD3A94D374CD203DA((bool)((((int32_t)L_45) == ((int32_t)3))? 1 : 0), NULL);
		// GUILayout.Label("Address: ", width);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_46 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_47 = L_46;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_48 = V_1;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_48);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteralD9080F1E0E059C22879374818DE1A76973089930, L_47, NULL);
		// address = GUILayout.TextField(address, width);
		String_t* L_49 = __this->___address_4;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_50 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_51 = L_50;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_52 = V_1;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_52);
		String_t* L_53;
		L_53 = GUILayout_TextField_m34513F9447F1AB5CF1B147A7060DD4D65F05C0C9(L_49, L_51, NULL);
		__this->___address_4 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___address_4), (void*)L_53);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_54;
		L_54 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_54, NULL);
		// GUI.enabled = state == WebSocketState.Closed;
		uint16_t L_55 = V_2;
		GUI_set_enabled_m49481A7F8018837F8BBFAF5FD3A94D374CD203DA((bool)((((int32_t)L_55) == ((int32_t)3))? 1 : 0), NULL);
		// if (GUILayout.Button(state == WebSocketState.Connecting ? "Connecting..." : "Connect"))
		uint16_t L_56 = V_2;
		if (!L_56)
		{
			goto IL_01b4;
		}
	}
	{
		G_B11_0 = _stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B;
		goto IL_01b9;
	}

IL_01b4:
	{
		G_B11_0 = _stringLiteral3601EBFCBD34C287F86CE9019C0B1A2668725830;
	}

IL_01b9:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_57;
		L_57 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_58;
		L_58 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(G_B11_0, L_57, NULL);
		if (!L_58)
		{
			goto IL_0255;
		}
	}
	{
		// socket = new WebSocket(address);
		String_t* L_59 = __this->___address_4;
		WebSocket_t7124BAAF9290EC8BAB468B77ADEEF0F2AF8F994C* L_60 = (WebSocket_t7124BAAF9290EC8BAB468B77ADEEF0F2AF8F994C*)il2cpp_codegen_object_new(WebSocket_t7124BAAF9290EC8BAB468B77ADEEF0F2AF8F994C_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		WebSocket__ctor_mFF5F6F3A0F98D5912F1E5291F7508B6989B670BC(L_60, L_59, NULL);
		__this->___socket_6 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___socket_6), (void*)L_60);
		// socket.OnOpen += Socket_OnOpen;
		RuntimeObject* L_61 = __this->___socket_6;
		EventHandler_1_tFA48683B941C16E636AD7D3099E331C558E5F86A* L_62 = (EventHandler_1_tFA48683B941C16E636AD7D3099E331C558E5F86A*)il2cpp_codegen_object_new(EventHandler_1_tFA48683B941C16E636AD7D3099E331C558E5F86A_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		EventHandler_1__ctor_mD5DD547E26B1D7FCF8940CD684DAE82269994223(L_62, __this, (intptr_t)((void*)UnityWebSocketDemo_Socket_OnOpen_mDBB42F1AFE01956059928D518DF045FF059FF124_RuntimeMethod_var), NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< EventHandler_1_tFA48683B941C16E636AD7D3099E331C558E5F86A* >::Invoke(9 /* System.Void UnityWebSocket.IWebSocket::add_OnOpen(System.EventHandler`1<UnityWebSocket.OpenEventArgs>) */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_61, L_62);
		// socket.OnMessage += Socket_OnMessage;
		RuntimeObject* L_63 = __this->___socket_6;
		EventHandler_1_t0EA7AA0464283489DD25C5FC8E74852B2E803B52* L_64 = (EventHandler_1_t0EA7AA0464283489DD25C5FC8E74852B2E803B52*)il2cpp_codegen_object_new(EventHandler_1_t0EA7AA0464283489DD25C5FC8E74852B2E803B52_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		EventHandler_1__ctor_m6152146BE4E207A82899640D1E69DF6C7098C1BB(L_64, __this, (intptr_t)((void*)UnityWebSocketDemo_Socket_OnMessage_m05CB96A767755393CE3089EB0CD2BAE713973684_RuntimeMethod_var), NULL);
		NullCheck(L_63);
		InterfaceActionInvoker1< EventHandler_1_t0EA7AA0464283489DD25C5FC8E74852B2E803B52* >::Invoke(15 /* System.Void UnityWebSocket.IWebSocket::add_OnMessage(System.EventHandler`1<UnityWebSocket.MessageEventArgs>) */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_63, L_64);
		// socket.OnClose += Socket_OnClose;
		RuntimeObject* L_65 = __this->___socket_6;
		EventHandler_1_t0CB208774EBC1EDE829EBA34B2F2C67C2F72251A* L_66 = (EventHandler_1_t0CB208774EBC1EDE829EBA34B2F2C67C2F72251A*)il2cpp_codegen_object_new(EventHandler_1_t0CB208774EBC1EDE829EBA34B2F2C67C2F72251A_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		EventHandler_1__ctor_m9CC99888FCCC528A7FD746FCA9146EEE178221BE(L_66, __this, (intptr_t)((void*)UnityWebSocketDemo_Socket_OnClose_mDEEA0E9304B5F98C98FCDDB9007405CB246F7EA1_RuntimeMethod_var), NULL);
		NullCheck(L_65);
		InterfaceActionInvoker1< EventHandler_1_t0CB208774EBC1EDE829EBA34B2F2C67C2F72251A* >::Invoke(11 /* System.Void UnityWebSocket.IWebSocket::add_OnClose(System.EventHandler`1<UnityWebSocket.CloseEventArgs>) */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_65, L_66);
		// socket.OnError += Socket_OnError;
		RuntimeObject* L_67 = __this->___socket_6;
		EventHandler_1_t72F79EAB113BE3AD49025A1EDC67AFF6E7866886* L_68 = (EventHandler_1_t72F79EAB113BE3AD49025A1EDC67AFF6E7866886*)il2cpp_codegen_object_new(EventHandler_1_t72F79EAB113BE3AD49025A1EDC67AFF6E7866886_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		EventHandler_1__ctor_mC42E74DEE19BEF29B8E34DA95151A5603A70BE0B(L_68, __this, (intptr_t)((void*)UnityWebSocketDemo_Socket_OnError_m3D11BD3059162CDB3B391F11F826286DDAD0FEDF_RuntimeMethod_var), NULL);
		NullCheck(L_67);
		InterfaceActionInvoker1< EventHandler_1_t72F79EAB113BE3AD49025A1EDC67AFF6E7866886* >::Invoke(13 /* System.Void UnityWebSocket.IWebSocket::add_OnError(System.EventHandler`1<UnityWebSocket.ErrorEventArgs>) */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_67, L_68);
		// AddLog(string.Format("Connecting..."));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_69;
		L_69 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		String_t* L_70;
		L_70 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral3601EBFCBD34C287F86CE9019C0B1A2668725830, L_69, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_70, NULL);
		// socket.ConnectAsync();
		RuntimeObject* L_71 = __this->___socket_6;
		NullCheck(L_71);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityWebSocket.IWebSocket::ConnectAsync() */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_71);
	}

IL_0255:
	{
		// GUI.enabled = state == WebSocketState.Open;
		uint16_t L_72 = V_2;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_enabled_m49481A7F8018837F8BBFAF5FD3A94D374CD203DA((bool)((((int32_t)L_72) == ((int32_t)1))? 1 : 0), NULL);
		// if (GUILayout.Button(state == WebSocketState.Closing ? "Closing..." : "Close"))
		uint16_t L_73 = V_2;
		if ((((int32_t)L_73) == ((int32_t)2)))
		{
			goto IL_0269;
		}
	}
	{
		G_B16_0 = _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2;
		goto IL_026e;
	}

IL_0269:
	{
		G_B16_0 = _stringLiteral2C0FB268FEF0DAA245BD3DD0D331FA3446F8F19F;
	}

IL_026e:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_74;
		L_74 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_75;
		L_75 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(G_B16_0, L_74, NULL);
		if (!L_75)
		{
			goto IL_029a;
		}
	}
	{
		// AddLog(string.Format("Closing..."));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_76;
		L_76 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		String_t* L_77;
		L_77 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral2C0FB268FEF0DAA245BD3DD0D331FA3446F8F19F, L_76, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_77, NULL);
		// socket.CloseAsync();
		RuntimeObject* L_78 = __this->___socket_6;
		NullCheck(L_78);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityWebSocket.IWebSocket::CloseAsync() */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_78);
	}

IL_029a:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// GUILayout.Label("Message: ");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_79;
		L_79 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteralB43FB891A78D7FA23B2E77572664CB1F2591440A, L_79, NULL);
		// sendText = GUILayout.TextArea(sendText, GUILayout.MinHeight(50), width);
		String_t* L_80 = __this->___sendText_5;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_81 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_82 = L_81;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_83;
		L_83 = GUILayout_MinHeight_m2A5C925B88EE204ACBD544CB5E663E5E33D07631((50.0f), NULL);
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, L_83);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_83);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_84 = L_82;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_85 = V_1;
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_85);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_85);
		String_t* L_86;
		L_86 = GUILayout_TextArea_m9CF7B462D68962C768272B06A04D11ADEDECD0BF(L_80, L_84, NULL);
		__this->___sendText_5 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sendText_5), (void*)L_86);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_87;
		L_87 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_87, NULL);
		// if (GUILayout.Button("Send") && !string.IsNullOrEmpty(sendText))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_88;
		L_88 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_89;
		L_89 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralC86EC5531EBD8B51C4944FF50C7007F5F966250D, L_88, NULL);
		if (!L_89)
		{
			goto IL_0333;
		}
	}
	{
		String_t* L_90 = __this->___sendText_5;
		bool L_91;
		L_91 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_90, NULL);
		if (L_91)
		{
			goto IL_0333;
		}
	}
	{
		// socket.SendAsync(sendText);
		RuntimeObject* L_92 = __this->___socket_6;
		String_t* L_93 = __this->___sendText_5;
		NullCheck(L_92);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void UnityWebSocket.IWebSocket::SendAsync(System.String) */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_92, L_93);
		// AddLog(string.Format("Send: {0}", sendText));
		String_t* L_94 = __this->___sendText_5;
		String_t* L_95;
		L_95 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral58FC7465060C3856C86A688D013610286143181E, L_94, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_95, NULL);
		// sendCount += 1;
		int32_t L_96 = __this->___sendCount_9;
		__this->___sendCount_9 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_0333:
	{
		// if (GUILayout.Button("Send Bytes") && !string.IsNullOrEmpty(sendText))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_97;
		L_97 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_98;
		L_98 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral83F9039BF0469F46CB1C395E59180657EB6D5BBF, L_97, NULL);
		if (!L_98)
		{
			goto IL_039a;
		}
	}
	{
		String_t* L_99 = __this->___sendText_5;
		bool L_100;
		L_100 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_99, NULL);
		if (L_100)
		{
			goto IL_039a;
		}
	}
	{
		// var bytes = System.Text.Encoding.UTF8.GetBytes(sendText);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_101;
		L_101 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_102 = __this->___sendText_5;
		NullCheck(L_101);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103;
		L_103 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_101, L_102);
		V_3 = L_103;
		// socket.SendAsync(bytes);
		RuntimeObject* L_104 = __this->___socket_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = V_3;
		NullCheck(L_104);
		InterfaceActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Void UnityWebSocket.IWebSocket::SendAsync(System.Byte[]) */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_104, L_105);
		// AddLog(string.Format("Send Bytes ({1}): {0}", sendText, bytes.Length));
		String_t* L_106 = __this->___sendText_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_3;
		NullCheck(L_107);
		int32_t L_108 = ((int32_t)(((RuntimeArray*)L_107)->max_length));
		RuntimeObject* L_109 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_108);
		String_t* L_110;
		L_110 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral427F8D2A1C503C84E76DABDB17E37AE2F3133650, L_106, L_109, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_110, NULL);
		// sendCount += 1;
		int32_t L_111 = __this->___sendCount_9;
		__this->___sendCount_9 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_039a:
	{
		// if (GUILayout.Button("Send x100") && !string.IsNullOrEmpty(sendText))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_112;
		L_112 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_113;
		L_113 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralF8E22E97270D00D0BB061F3FBD725FBE8F2315BD, L_112, NULL);
		if (!L_113)
		{
			goto IL_0415;
		}
	}
	{
		String_t* L_114 = __this->___sendText_5;
		bool L_115;
		L_115 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_114, NULL);
		if (L_115)
		{
			goto IL_0415;
		}
	}
	{
		// for (int i = 0; i < 100; i++)
		V_4 = 0;
		goto IL_040f;
	}

IL_03bd:
	{
		// var text = (i + 1).ToString() + ". " + sendText;
		int32_t L_116 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		String_t* L_117;
		L_117 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_118 = __this->___sendText_5;
		String_t* L_119;
		L_119 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_117, _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434, L_118, NULL);
		V_5 = L_119;
		// socket.SendAsync(text);
		RuntimeObject* L_120 = __this->___socket_6;
		String_t* L_121 = V_5;
		NullCheck(L_120);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void UnityWebSocket.IWebSocket::SendAsync(System.String) */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_120, L_121);
		// AddLog(string.Format("Send: {0}", text));
		String_t* L_122 = V_5;
		String_t* L_123;
		L_123 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral58FC7465060C3856C86A688D013610286143181E, L_122, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_123, NULL);
		// sendCount += 1;
		int32_t L_124 = __this->___sendCount_9;
		__this->___sendCount_9 = ((int32_t)il2cpp_codegen_add(L_124, 1));
		// for (int i = 0; i < 100; i++)
		int32_t L_125 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_040f:
	{
		// for (int i = 0; i < 100; i++)
		int32_t L_126 = V_4;
		if ((((int32_t)L_126) < ((int32_t)((int32_t)100))))
		{
			goto IL_03bd;
		}
	}

IL_0415:
	{
		// if (GUILayout.Button("Send Bytes x100") && !string.IsNullOrEmpty(sendText))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_127;
		L_127 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_128;
		L_128 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral078338757EAA4C9C25F8D137F8F563128FDCAD4A, L_127, NULL);
		if (!L_128)
		{
			goto IL_04aa;
		}
	}
	{
		String_t* L_129 = __this->___sendText_5;
		bool L_130;
		L_130 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_129, NULL);
		if (L_130)
		{
			goto IL_04aa;
		}
	}
	{
		// for (int i = 0; i < 100; i++)
		V_7 = 0;
		goto IL_04a4;
	}

IL_043b:
	{
		// var text = (i + 1).ToString() + ". " + sendText;
		int32_t L_131 = V_7;
		V_6 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		String_t* L_132;
		L_132 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_133 = __this->___sendText_5;
		String_t* L_134;
		L_134 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_132, _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434, L_133, NULL);
		V_8 = L_134;
		// var bytes = System.Text.Encoding.UTF8.GetBytes(text);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_135;
		L_135 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_136 = V_8;
		NullCheck(L_135);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_137;
		L_137 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_135, L_136);
		V_9 = L_137;
		// socket.SendAsync(bytes);
		RuntimeObject* L_138 = __this->___socket_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = V_9;
		NullCheck(L_138);
		InterfaceActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Void UnityWebSocket.IWebSocket::SendAsync(System.Byte[]) */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_138, L_139);
		// AddLog(string.Format("Send Bytes ({1}): {0}", text, bytes.Length));
		String_t* L_140 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = V_9;
		NullCheck(L_141);
		int32_t L_142 = ((int32_t)(((RuntimeArray*)L_141)->max_length));
		RuntimeObject* L_143 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_142);
		String_t* L_144;
		L_144 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral427F8D2A1C503C84E76DABDB17E37AE2F3133650, L_140, L_143, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_144, NULL);
		// sendCount += 1;
		int32_t L_145 = __this->___sendCount_9;
		__this->___sendCount_9 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		// for (int i = 0; i < 100; i++)
		int32_t L_146 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_146, 1));
	}

IL_04a4:
	{
		// for (int i = 0; i < 100; i++)
		int32_t L_147 = V_7;
		if ((((int32_t)L_147) < ((int32_t)((int32_t)100))))
		{
			goto IL_043b;
		}
	}

IL_04aa:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// GUI.enabled = true;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_enabled_m49481A7F8018837F8BBFAF5FD3A94D374CD203DA((bool)1, NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_148;
		L_148 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_148, NULL);
		// logMessage = GUILayout.Toggle(logMessage, "Log Message");
		bool L_149 = __this->___logMessage_7;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_150;
		L_150 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_151;
		L_151 = GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248(L_149, _stringLiteral241E4679C95BB3FC4FC62C288CA4E0F685FECD48, L_150, NULL);
		__this->___logMessage_7 = L_151;
		// GUILayout.Label(string.Format("Send Count: {0}", sendCount));
		int32_t L_152 = __this->___sendCount_9;
		int32_t L_153 = L_152;
		RuntimeObject* L_154 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_153);
		String_t* L_155;
		L_155 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralE2BCE1DD723B68E317FAE67A12ABE128479B6E91, L_154, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_156;
		L_156 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_155, L_156, NULL);
		// GUILayout.Label(string.Format("Receive Count: {0}", receiveCount));
		int32_t L_157 = __this->___receiveCount_10;
		int32_t L_158 = L_157;
		RuntimeObject* L_159 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_158);
		String_t* L_160;
		L_160 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral618D9641C2F1C49493E2614339BCFA08E23EC22E, L_159, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_161;
		L_161 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_160, L_161, NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// if (GUILayout.Button("Clear"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_162;
		L_162 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_163;
		L_163 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, L_162, NULL);
		if (!L_163)
		{
			goto IL_0547;
		}
	}
	{
		// log = "";
		__this->___log_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___log_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// receiveCount = 0;
		__this->___receiveCount_10 = 0;
		// sendCount = 0;
		__this->___sendCount_9 = 0;
	}

IL_0547:
	{
		// scrollPos = GUILayout.BeginScrollView(scrollPos, GUILayout.MaxHeight(Screen.height / scale - 270), width);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_164 = __this->___scrollPos_11;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_165 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_166 = L_165;
		int32_t L_167;
		L_167 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		float L_168 = V_0;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_169;
		L_169 = GUILayout_MaxHeight_m6D2D409EB10D15DB5FC3319362547F16CCB3997A(((float)il2cpp_codegen_subtract(((float)(((float)L_167)/L_168)), (270.0f))), NULL);
		NullCheck(L_166);
		ArrayElementTypeCheck (L_166, L_169);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_169);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_170 = L_166;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_171 = V_1;
		NullCheck(L_170);
		ArrayElementTypeCheck (L_170, L_171);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_171);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_172;
		L_172 = GUILayout_BeginScrollView_mEB0DA223039CB6C3BCD3A9BFACF57C191FEF938D(L_164, L_170, NULL);
		__this->___scrollPos_11 = L_172;
		// GUILayout.Label(log);
		String_t* L_173 = __this->___log_8;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_174;
		L_174 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_173, L_174, NULL);
		// GUILayout.EndScrollView();
		GUILayout_EndScrollView_mD1A74B6E090DCCC21E3EBB6E04FC0CC1E962540D(NULL);
		// }
		return;
	}
}
// System.Void UnityWebSocket.Demo.UnityWebSocketDemo::AddLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA (UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!logMessage) return;
		bool L_0 = __this->___logMessage_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!logMessage) return;
		return;
	}

IL_0009:
	{
		// if (str.Length > 100) str = str.Substring(0, 100) + "...";
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0028;
		}
	}
	{
		// if (str.Length > 100) str = str.Substring(0, 100) + "...";
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_3, 0, ((int32_t)100), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_4, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, NULL);
		___str0 = L_5;
	}

IL_0028:
	{
		// log += str + "\n";
		String_t* L_6 = __this->___log_8;
		String_t* L_7 = ___str0;
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_6, L_7, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		__this->___log_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___log_8), (void*)L_8);
		// if (log.Length > 22 * 1024)
		String_t* L_9 = __this->___log_8;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)22528))))
		{
			goto IL_0073;
		}
	}
	{
		// log = log.Substring(log.Length - 22 * 1024);
		String_t* L_11 = __this->___log_8;
		String_t* L_12 = __this->___log_8;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		NullCheck(L_11);
		String_t* L_14;
		L_14 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_11, ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)22528))), NULL);
		__this->___log_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___log_8), (void*)L_14);
	}

IL_0073:
	{
		// scrollPos.y = int.MaxValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___scrollPos_11);
		L_15->___y_1 = (2.14748365E+09f);
		// }
		return;
	}
}
// System.Void UnityWebSocket.Demo.UnityWebSocketDemo::Socket_OnOpen(System.Object,UnityWebSocket.OpenEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebSocketDemo_Socket_OnOpen_mDBB42F1AFE01956059928D518DF045FF059FF124 (UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD* __this, RuntimeObject* ___sender0, OpenEventArgs_t9A9210E71DD8629BDC73649B1AB308CCC1CD0066* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AF1E020B9828637F08F83306D8709FF26AB5FDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLog(string.Format("Connected: {0}", address));
		String_t* L_0 = __this->___address_4;
		String_t* L_1;
		L_1 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4AF1E020B9828637F08F83306D8709FF26AB5FDD, L_0, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityWebSocket.Demo.UnityWebSocketDemo::Socket_OnMessage(System.Object,UnityWebSocket.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebSocketDemo_Socket_OnMessage_m05CB96A767755393CE3089EB0CD2BAE713973684 (UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD* __this, RuntimeObject* ___sender0, MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral382FDAC239F5C903019AAC194290AAB06C937DD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38CC64A60BCEE8EDA075AEC97BC9E96CCEDE9B0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (e.IsBinary)
		MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B* L_0 = ___e1;
		NullCheck(L_0);
		bool L_1;
		L_1 = MessageEventArgs_get_IsBinary_mB727260A743C54CBBB8BDB38C2DDF9C94F315796(L_0, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// AddLog(string.Format("Receive Bytes ({1}): {0}", e.Data, e.RawData.Length));
		MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B* L_2 = ___e1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = MessageEventArgs_get_Data_m6DC835664F35009114453DAD4A76939B07AF964B(L_2, NULL);
		MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B* L_4 = ___e1;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = MessageEventArgs_get_RawData_m508660D24B2434C130A28C01F2D3A00653D9D1D9(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral38CC64A60BCEE8EDA075AEC97BC9E96CCEDE9B0E, L_3, L_7, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_8, NULL);
		goto IL_004b;
	}

IL_002d:
	{
		// else if (e.IsText)
		MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B* L_9 = ___e1;
		NullCheck(L_9);
		bool L_10;
		L_10 = MessageEventArgs_get_IsText_mC0B03DBD2B207929650D3883EBCFA56B4538CA8A(L_9, NULL);
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		// AddLog(string.Format("Receive: {0}", e.Data));
		MessageEventArgs_tAEBD7F55C3DDD42228926705234B2AA5EA0A456B* L_11 = ___e1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = MessageEventArgs_get_Data_m6DC835664F35009114453DAD4A76939B07AF964B(L_11, NULL);
		String_t* L_13;
		L_13 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral382FDAC239F5C903019AAC194290AAB06C937DD8, L_12, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_13, NULL);
	}

IL_004b:
	{
		// receiveCount += 1;
		int32_t L_14 = __this->___receiveCount_10;
		__this->___receiveCount_10 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// }
		return;
	}
}
// System.Void UnityWebSocket.Demo.UnityWebSocketDemo::Socket_OnClose(System.Object,UnityWebSocket.CloseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebSocketDemo_Socket_OnClose_mDEEA0E9304B5F98C98FCDDB9007405CB246F7EA1 (UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD* __this, RuntimeObject* ___sender0, CloseEventArgs_tB045A5C6D63C9BB7F0AF8ADC7D86DF06E1463AFD* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloseStatusCode_t32895788E19047F70A03BCCEE3C8E6CB4AA3940F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78AE796E69370BE7AD72ADB60741E67A9B8EED6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLog(string.Format("Closed: StatusCode: {0}, Reason: {1}", e.StatusCode, e.Reason));
		CloseEventArgs_tB045A5C6D63C9BB7F0AF8ADC7D86DF06E1463AFD* L_0 = ___e1;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = CloseEventArgs_get_StatusCode_mD06601DACC4D4A670852E52160B670C328DFDC95(L_0, NULL);
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(CloseStatusCode_t32895788E19047F70A03BCCEE3C8E6CB4AA3940F_il2cpp_TypeInfo_var, &L_2);
		CloseEventArgs_tB045A5C6D63C9BB7F0AF8ADC7D86DF06E1463AFD* L_4 = ___e1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = CloseEventArgs_get_Reason_mF38488E1A776408A98AFAEB164C39DDA33FCED72_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral78AE796E69370BE7AD72ADB60741E67A9B8EED6B, L_3, L_5, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityWebSocket.Demo.UnityWebSocketDemo::Socket_OnError(System.Object,UnityWebSocket.ErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebSocketDemo_Socket_OnError_m3D11BD3059162CDB3B391F11F826286DDAD0FEDF (UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD* __this, RuntimeObject* ___sender0, ErrorEventArgs_tDDDC9112E1DC52BC3EA09481B335578A6A04A5E6* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A82C68D0F9886C428DE9E07B5524F3E6A08970);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLog(string.Format("Error: {0}", e.Message));
		ErrorEventArgs_tDDDC9112E1DC52BC3EA09481B335578A6A04A5E6* L_0 = ___e1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ErrorEventArgs_get_Message_m0C09991AF3D44108561067096B4ED50C5A74DC74_inline(L_0, NULL);
		String_t* L_2;
		L_2 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral87A82C68D0F9886C428DE9E07B5524F3E6A08970, L_1, NULL);
		UnityWebSocketDemo_AddLog_m7AF9EE2C15B4739690ABFD4B62C3ACA0AD7D2BDA(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityWebSocket.Demo.UnityWebSocketDemo::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebSocketDemo_OnApplicationQuit_m124861C9DD1E19FFE2A5BE64142AF9EF1FB855DF (UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (socket != null && socket.ReadyState != WebSocketState.Closed)
		RuntimeObject* L_0 = __this->___socket_6;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = __this->___socket_6;
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = InterfaceFuncInvoker0< uint16_t >::Invoke(6 /* UnityWebSocket.WebSocketState UnityWebSocket.IWebSocket::get_ReadyState() */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0021;
		}
	}
	{
		// socket.CloseAsync();
		RuntimeObject* L_3 = __this->___socket_6;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityWebSocket.IWebSocket::CloseAsync() */, IWebSocket_tA201A1D75BE9B451584011095853A8AB0F52F8C2_il2cpp_TypeInfo_var, L_3);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void UnityWebSocket.Demo.UnityWebSocketDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebSocketDemo_Update_m19159F514AB8CD667E6DDAF44E9C816F456028CF (UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD* __this, const RuntimeMethod* method) 
{
	{
		// frame += 1;
		int32_t L_0 = __this->___frame_15;
		__this->___frame_15 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// time += Time.deltaTime;
		float L_1 = __this->___time_16;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___time_16 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (time >= 0.5f)
		float L_3 = __this->___time_16;
		if ((!(((float)L_3) >= ((float)(0.5f)))))
		{
			goto IL_0053;
		}
	}
	{
		// fps = frame / time;
		int32_t L_4 = __this->___frame_15;
		float L_5 = __this->___time_16;
		__this->___fps_17 = ((float)(((float)L_4)/L_5));
		// frame = 0;
		__this->___frame_15 = 0;
		// time = 0;
		__this->___time_16 = (0.0f);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void UnityWebSocket.Demo.UnityWebSocketDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebSocketDemo__ctor_m823CD64F1E654CEAFD9E5A2844E36160BF959CD0 (UnityWebSocketDemo_t88B0C34BB6C0AAAB6E89E18DBDB315B76B0CC9AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE408DFB621D4A91D306468866F94EA7276FA34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF409E29DF203CF83A3BE712EC854B5C19E7D670B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string address = "wss://echo.websocket.events";
		__this->___address_4 = _stringLiteralDE408DFB621D4A91D306468866F94EA7276FA34A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___address_4), (void*)_stringLiteralDE408DFB621D4A91D306468866F94EA7276FA34A);
		// public string sendText = "Hello UnityWebSocket!";
		__this->___sendText_5 = _stringLiteralF409E29DF203CF83A3BE712EC854B5C19E7D670B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sendText_5), (void*)_stringLiteralF409E29DF203CF83A3BE712EC854B5C19E7D670B);
		// private bool logMessage = true;
		__this->___logMessage_7 = (bool)1;
		// private string log = "";
		__this->___log_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___log_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private Color green = new Color(0.1f, 1, 0.1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_0), (0.100000001f), (1.0f), (0.100000001f), /*hidden argument*/NULL);
		__this->___green_12 = L_0;
		// private Color red = new Color(1f, 0.1f, 0.1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (1.0f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		__this->___red_13 = L_1;
		// private Color wait = new Color(0.7f, 0.3f, 0.3f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_2), (0.699999988f), (0.300000012f), (0.300000012f), /*hidden argument*/NULL);
		__this->___wait_14 = L_2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CloseEventArgs_get_Reason_mF38488E1A776408A98AFAEB164C39DDA33FCED72_inline (CloseEventArgs_tB045A5C6D63C9BB7F0AF8ADC7D86DF06E1463AFD* __this, const RuntimeMethod* method) 
{
	{
		// public string Reason { get; private set; }
		String_t* L_0 = __this->___U3CReasonU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_get_Message_m0C09991AF3D44108561067096B4ED50C5A74DC74_inline (ErrorEventArgs_tDDDC9112E1DC52BC3EA09481B335578A6A04A5E6* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
