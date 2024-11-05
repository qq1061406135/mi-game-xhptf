using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"Google.Protobuf.dll",
		"Model.dll",
		"Newtonsoft.Json.dll",
		"System.Core.dll",
		"UnityEngine.CoreModule.dll",
		"UnityEngine.JSONSerializeModule.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// Google.Protobuf.Collections.RepeatedField.<GetEnumerator>d__28<float>
	// Google.Protobuf.Collections.RepeatedField.<GetEnumerator>d__28<object>
	// Google.Protobuf.Collections.RepeatedField<float>
	// Google.Protobuf.Collections.RepeatedField<object>
	// Google.Protobuf.FieldCodec.<>c<float>
	// Google.Protobuf.FieldCodec.<>c<object>
	// Google.Protobuf.FieldCodec.<>c__DisplayClass38_0<float>
	// Google.Protobuf.FieldCodec.<>c__DisplayClass38_0<object>
	// Google.Protobuf.FieldCodec.<>c__DisplayClass39_0<float>
	// Google.Protobuf.FieldCodec.<>c__DisplayClass39_0<object>
	// Google.Protobuf.FieldCodec.InputMerger<float>
	// Google.Protobuf.FieldCodec.InputMerger<object>
	// Google.Protobuf.FieldCodec.ValuesMerger<float>
	// Google.Protobuf.FieldCodec.ValuesMerger<object>
	// Google.Protobuf.FieldCodec<float>
	// Google.Protobuf.FieldCodec<object>
	// Google.Protobuf.IDeepCloneable<float>
	// Google.Protobuf.IDeepCloneable<object>
	// Google.Protobuf.IMessage<object>
	// Google.Protobuf.MessageParser.<>c__DisplayClass2_0<object>
	// Google.Protobuf.MessageParser<object>
	// Google.Protobuf.ValueReader<float>
	// Google.Protobuf.ValueReader<object>
	// Google.Protobuf.ValueWriter<float>
	// Google.Protobuf.ValueWriter<object>
	// HttpComponent.<>c__DisplayClass1_0<object>
	// System.Action<int>
	// System.Action<object,object>
	// System.Action<object>
	// System.Collections.Generic.ArraySortHelper<int>
	// System.Collections.Generic.ArraySortHelper<object>
	// System.Collections.Generic.Comparer<int>
	// System.Collections.Generic.Comparer<object>
	// System.Collections.Generic.Dictionary.Enumerator<int,UnityEngine.Vector2>
	// System.Collections.Generic.Dictionary.Enumerator<int,float>
	// System.Collections.Generic.Dictionary.Enumerator<int,long>
	// System.Collections.Generic.Dictionary.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<int,UnityEngine.Vector2>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<int,float>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<int,long>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection<int,UnityEngine.Vector2>
	// System.Collections.Generic.Dictionary.KeyCollection<int,float>
	// System.Collections.Generic.Dictionary.KeyCollection<int,long>
	// System.Collections.Generic.Dictionary.KeyCollection<int,object>
	// System.Collections.Generic.Dictionary.KeyCollection<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,UnityEngine.Vector2>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,float>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,long>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection<int,UnityEngine.Vector2>
	// System.Collections.Generic.Dictionary.ValueCollection<int,float>
	// System.Collections.Generic.Dictionary.ValueCollection<int,long>
	// System.Collections.Generic.Dictionary.ValueCollection<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection<object,object>
	// System.Collections.Generic.Dictionary<int,UnityEngine.Vector2>
	// System.Collections.Generic.Dictionary<int,float>
	// System.Collections.Generic.Dictionary<int,long>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.EqualityComparer<UnityEngine.Vector2>
	// System.Collections.Generic.EqualityComparer<float>
	// System.Collections.Generic.EqualityComparer<int>
	// System.Collections.Generic.EqualityComparer<long>
	// System.Collections.Generic.EqualityComparer<object>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<int,UnityEngine.Vector2>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<int,float>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<int,long>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.ICollection<int>
	// System.Collections.Generic.ICollection<object>
	// System.Collections.Generic.IComparer<int>
	// System.Collections.Generic.IComparer<object>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,UnityEngine.Vector2>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,float>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,long>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerable<float>
	// System.Collections.Generic.IEnumerable<int>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,UnityEngine.Vector2>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,float>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,long>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerator<float>
	// System.Collections.Generic.IEnumerator<int>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.IEqualityComparer<int>
	// System.Collections.Generic.IEqualityComparer<object>
	// System.Collections.Generic.IList<System.Collections.Generic.KeyValuePair<int,float>>
	// System.Collections.Generic.IList<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IList<int>
	// System.Collections.Generic.IList<object>
	// System.Collections.Generic.KeyValuePair<int,UnityEngine.Vector2>
	// System.Collections.Generic.KeyValuePair<int,float>
	// System.Collections.Generic.KeyValuePair<int,long>
	// System.Collections.Generic.KeyValuePair<int,object>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.List.Enumerator<int>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.List<int>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.ObjectComparer<int>
	// System.Collections.Generic.ObjectComparer<object>
	// System.Collections.Generic.ObjectEqualityComparer<UnityEngine.Vector2>
	// System.Collections.Generic.ObjectEqualityComparer<float>
	// System.Collections.Generic.ObjectEqualityComparer<int>
	// System.Collections.Generic.ObjectEqualityComparer<long>
	// System.Collections.Generic.ObjectEqualityComparer<object>
	// System.Collections.ObjectModel.ReadOnlyCollection<int>
	// System.Collections.ObjectModel.ReadOnlyCollection<object>
	// System.Comparison<int>
	// System.Comparison<object>
	// System.Func<System.Threading.Tasks.VoidTaskResult>
	// System.Func<float,int>
	// System.Func<object,System.Threading.Tasks.VoidTaskResult>
	// System.Func<object,int>
	// System.Func<object,object,object>
	// System.Func<object,object>
	// System.Func<object>
	// System.IEquatable<object>
	// System.Predicate<int>
	// System.Predicate<object>
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<System.Threading.Tasks.VoidTaskResult>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<object>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable<System.Threading.Tasks.VoidTaskResult>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable<object>
	// System.Runtime.CompilerServices.TaskAwaiter<System.Threading.Tasks.VoidTaskResult>
	// System.Runtime.CompilerServices.TaskAwaiter<object>
	// System.Threading.Tasks.ContinuationTaskFromResultTask<System.Threading.Tasks.VoidTaskResult>
	// System.Threading.Tasks.ContinuationTaskFromResultTask<object>
	// System.Threading.Tasks.Task<System.Threading.Tasks.VoidTaskResult>
	// System.Threading.Tasks.Task<object>
	// System.Threading.Tasks.TaskFactory.<>c__DisplayClass35_0<System.Threading.Tasks.VoidTaskResult>
	// System.Threading.Tasks.TaskFactory.<>c__DisplayClass35_0<object>
	// System.Threading.Tasks.TaskFactory<System.Threading.Tasks.VoidTaskResult>
	// System.Threading.Tasks.TaskFactory<object>
	// }}

	public void RefMethods()
	{
		// System.Void HttpComponent.PostRequest<object>(string,System.Collections.Generic.Dictionary<string,string>,System.Action<object>,System.Action)
		// object Newtonsoft.Json.JsonConvert.DeserializeObject<object>(string)
		// object Newtonsoft.Json.JsonConvert.DeserializeObject<object>(string,Newtonsoft.Json.JsonSerializerSettings)
		// System.Threading.Tasks.Task<object> ResourceComponent.LoadAssetAsync<object>(string,string)
		// int System.Array.IndexOf<int>(int[],int)
		// int System.Array.IndexOfImpl<int>(int[],int,int,int)
		// System.Collections.Generic.KeyValuePair<int,float> System.Linq.Enumerable.ElementAt<System.Collections.Generic.KeyValuePair<int,float>>(System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,float>>,int)
		// System.Collections.Generic.KeyValuePair<int,object> System.Linq.Enumerable.ElementAt<System.Collections.Generic.KeyValuePair<int,object>>(System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,object>>,int)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NetManager.<onChangeSceneHandler>d__23>(System.Runtime.CompilerServices.TaskAwaiter&,NetManager.<onChangeSceneHandler>d__23&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UISelectServer.<onGetServerSuccess>d__6>(System.Runtime.CompilerServices.TaskAwaiter&,UISelectServer.<onGetServerSuccess>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,ConfigComponent.<LoadConfigs>d__19>(System.Runtime.CompilerServices.TaskAwaiter<object>&,ConfigComponent.<LoadConfigs>d__19&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,GameController.<Init>d__12>(System.Runtime.CompilerServices.TaskAwaiter<object>&,GameController.<Init>d__12&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,GameEntry.<Init>d__17>(System.Runtime.CompilerServices.TaskAwaiter<object>&,GameEntry.<Init>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,MainController.<init>d__2>(System.Runtime.CompilerServices.TaskAwaiter<object>&,MainController.<init>d__2&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,MainController.<initJoystick>d__3>(System.Runtime.CompilerServices.TaskAwaiter<object>&,MainController.<initJoystick>d__3&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,MonsterManager.<initMonster>d__5>(System.Runtime.CompilerServices.TaskAwaiter<object>&,MonsterManager.<initMonster>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,NetManager.<onLoginHandler>d__10>(System.Runtime.CompilerServices.TaskAwaiter<object>&,NetManager.<onLoginHandler>d__10&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,PlayerComponent.<OnFireHandler>d__15>(System.Runtime.CompilerServices.TaskAwaiter<object>&,PlayerComponent.<OnFireHandler>d__15&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UILogin.<OnLoginSuccess>d__7>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UILogin.<OnLoginSuccess>d__7&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UILogin.<RegisterHandler>d__5>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UILogin.<RegisterHandler>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UIRegister.<LoginHandler>d__4>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UIRegister.<LoginHandler>d__4&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UIRegister.<OnRegisterHandler>d__6>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UIRegister.<OnRegisterHandler>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NetManager.<onChangeSceneHandler>d__23>(System.Runtime.CompilerServices.TaskAwaiter&,NetManager.<onChangeSceneHandler>d__23&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UISelectServer.<onGetServerSuccess>d__6>(System.Runtime.CompilerServices.TaskAwaiter&,UISelectServer.<onGetServerSuccess>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,ConfigComponent.<LoadConfigs>d__19>(System.Runtime.CompilerServices.TaskAwaiter<object>&,ConfigComponent.<LoadConfigs>d__19&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,GameController.<Init>d__12>(System.Runtime.CompilerServices.TaskAwaiter<object>&,GameController.<Init>d__12&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,GameEntry.<Init>d__17>(System.Runtime.CompilerServices.TaskAwaiter<object>&,GameEntry.<Init>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,MainController.<init>d__2>(System.Runtime.CompilerServices.TaskAwaiter<object>&,MainController.<init>d__2&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,MainController.<initJoystick>d__3>(System.Runtime.CompilerServices.TaskAwaiter<object>&,MainController.<initJoystick>d__3&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,MonsterManager.<initMonster>d__5>(System.Runtime.CompilerServices.TaskAwaiter<object>&,MonsterManager.<initMonster>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,NetManager.<onLoginHandler>d__10>(System.Runtime.CompilerServices.TaskAwaiter<object>&,NetManager.<onLoginHandler>d__10&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,PlayerComponent.<OnFireHandler>d__15>(System.Runtime.CompilerServices.TaskAwaiter<object>&,PlayerComponent.<OnFireHandler>d__15&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UILogin.<OnLoginSuccess>d__7>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UILogin.<OnLoginSuccess>d__7&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UILogin.<RegisterHandler>d__5>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UILogin.<RegisterHandler>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UIRegister.<LoginHandler>d__4>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UIRegister.<LoginHandler>d__4&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UIRegister.<OnRegisterHandler>d__6>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UIRegister.<OnRegisterHandler>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,CsvHelper.<Parser>d__0<object>>(System.Runtime.CompilerServices.TaskAwaiter<object>&,CsvHelper.<Parser>d__0<object>&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UIComponent.<Open>d__13<object>>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UIComponent.<Open>d__13<object>&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UnitManager.<createOtherUnit>d__6>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UnitManager.<createOtherUnit>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UnitManager.<createUnit>d__5>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UnitManager.<createUnit>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<ConfigComponent.<LoadConfigs>d__19>(ConfigComponent.<LoadConfigs>d__19&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<GameController.<Init>d__12>(GameController.<Init>d__12&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<GameEntry.<Init>d__17>(GameEntry.<Init>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<MainController.<init>d__2>(MainController.<init>d__2&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<MainController.<initJoystick>d__3>(MainController.<initJoystick>d__3&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<MonsterManager.<initMonster>d__5>(MonsterManager.<initMonster>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<NetManager.<onChangeSceneHandler>d__23>(NetManager.<onChangeSceneHandler>d__23&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<NetManager.<onLoginEndHandler>d__22>(NetManager.<onLoginEndHandler>d__22&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<NetManager.<onLoginHandler>d__10>(NetManager.<onLoginHandler>d__10&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<PlayerComponent.<OnFireHandler>d__15>(PlayerComponent.<OnFireHandler>d__15&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<UILogin.<OnLoginSuccess>d__7>(UILogin.<OnLoginSuccess>d__7&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<UILogin.<RegisterHandler>d__5>(UILogin.<RegisterHandler>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<UIRegister.<LoginHandler>d__4>(UIRegister.<LoginHandler>d__4&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<UIRegister.<OnRegisterHandler>d__6>(UIRegister.<OnRegisterHandler>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<UISelectServer.<initView>d__7>(UISelectServer.<initView>d__7&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<UISelectServer.<onGetServerSuccess>d__6>(UISelectServer.<onGetServerSuccess>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<CsvHelper.<Parser>d__0<object>>(CsvHelper.<Parser>d__0<object>&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<ResourceComponent.<LoadAssetAsync>d__9<object>>(ResourceComponent.<LoadAssetAsync>d__9<object>&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<UIComponent.<Open>d__13<object>>(UIComponent.<Open>d__13<object>&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<UnitManager.<createOtherUnit>d__6>(UnitManager.<createOtherUnit>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<UnitManager.<createUnit>d__5>(UnitManager.<createUnit>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TrapItemCom.<SetTrapIcon>d__9>(System.Runtime.CompilerServices.TaskAwaiter&,TrapItemCom.<SetTrapIcon>d__9&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UIGame.<OnBackClick>d__11>(System.Runtime.CompilerServices.TaskAwaiter&,UIGame.<OnBackClick>d__11&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UIGameOver.<OnBackClick>d__2>(System.Runtime.CompilerServices.TaskAwaiter&,UIGameOver.<OnBackClick>d__2&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UIMain.<StartGame>d__5>(System.Runtime.CompilerServices.TaskAwaiter&,UIMain.<StartGame>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UISelectServer.<OnIntoGameClick>d__10>(System.Runtime.CompilerServices.TaskAwaiter&,UISelectServer.<OnIntoGameClick>d__10&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UISelectServer.<initServerInofs>d__5>(System.Runtime.CompilerServices.TaskAwaiter&,UISelectServer.<initServerInofs>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,Hero.<SetBulletPrefab>d__11>(System.Runtime.CompilerServices.TaskAwaiter<object>&,Hero.<SetBulletPrefab>d__11&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,HeroSpawner.<SpawnHero>d__9>(System.Runtime.CompilerServices.TaskAwaiter<object>&,HeroSpawner.<SpawnHero>d__9&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,HeroSpawner.<SpawnLeqentHero>d__11>(System.Runtime.CompilerServices.TaskAwaiter<object>&,HeroSpawner.<SpawnLeqentHero>d__11&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,MonsterBuff.<SetBuffEffect>d__12>(System.Runtime.CompilerServices.TaskAwaiter<object>&,MonsterBuff.<SetBuffEffect>d__12&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,MonsterSpawner.<LoadEnemyPrefab>d__10>(System.Runtime.CompilerServices.TaskAwaiter<object>&,MonsterSpawner.<LoadEnemyPrefab>d__10&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,TrapSeat.<AddTrap>d__6>(System.Runtime.CompilerServices.TaskAwaiter<object>&,TrapSeat.<AddTrap>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<Hero.<SetBulletPrefab>d__11>(Hero.<SetBulletPrefab>d__11&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HeroSpawner.<SpawnHero>d__9>(HeroSpawner.<SpawnHero>d__9&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HeroSpawner.<SpawnLeqentHero>d__11>(HeroSpawner.<SpawnLeqentHero>d__11&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<MonsterBuff.<SetBuffEffect>d__12>(MonsterBuff.<SetBuffEffect>d__12&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<MonsterSpawner.<LoadEnemyPrefab>d__10>(MonsterSpawner.<LoadEnemyPrefab>d__10&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<TrapItemCom.<SetTrapIcon>d__9>(TrapItemCom.<SetTrapIcon>d__9&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<TrapSeat.<AddTrap>d__6>(TrapSeat.<AddTrap>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<UIGame.<OnBackClick>d__11>(UIGame.<OnBackClick>d__11&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<UIGameOver.<OnBackClick>d__2>(UIGameOver.<OnBackClick>d__2&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<UIMain.<StartGame>d__5>(UIMain.<StartGame>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<UISelectServer.<OnIntoGameClick>d__10>(UISelectServer.<OnIntoGameClick>d__10&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<UISelectServer.<initServerInofs>d__5>(UISelectServer.<initServerInofs>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<UISkill.<updateSkillItem>d__3>(UISkill.<updateSkillItem>d__3&)
		// object& System.Runtime.CompilerServices.Unsafe.As<object,object>(object&)
		// System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<object>(object&)
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.Component.GetComponentInChildren<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// object UnityEngine.JsonUtility.FromJson<object>(string)
		// object UnityEngine.Object.Instantiate<object>(object)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform,bool)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Vector3,UnityEngine.Quaternion)
	}
}