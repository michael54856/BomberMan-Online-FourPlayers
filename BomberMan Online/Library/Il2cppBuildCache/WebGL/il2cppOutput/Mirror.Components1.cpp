#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<Mirror.NetworkConnection>
struct Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F;
// System.Action`2<Mirror.NetworkConnection,System.Exception>
struct Action_2_tA4EA4AA966879534DECFAA9ECD738C49FD95A344;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.Batcher>
struct Dictionary_2_t23D414497C46C84B75FD28526D9E0612B78F1E07;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection>
struct Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>
struct Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<Mirror.NetworkIdentity,UnityEngine.SceneManagement.Scene>
struct Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.SceneManagement.Scene>
struct Dictionary_2_t7882C1087FC56770DECC226C7A667C0ECA995D6B;
// System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>>
struct Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97;
// System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>
struct Dictionary_2_t2B12F4CA0E6E4D98E1D860245F7D71154AE68596;
// System.Collections.Generic.Dictionary`2<System.UInt16,Mirror.NetworkMessageDelegate>
struct Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D;
// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity>
struct Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75;
// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity>
struct Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>>
struct Dictionary_2_t2B99E73208FEBCA8FB0B8E9EDFE0FD21927A0CAA;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Mirror.NetworkConnectionToClient>,System.Boolean>
struct Func_2_t1186B7233CEE692AB7374C6620B782BD969E354C;
// System.Func`4<Mirror.NTSnapshot,Mirror.NTSnapshot,System.Double,Mirror.NTSnapshot>
struct Func_4_t3DFD0601A7C3AC6620F52DAC1189370DCDF0289E;
// Mirror.Grid2D`1<Mirror.NetworkConnection>
struct Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A;
// Mirror.Grid2D`1<System.Object>
struct Grid2D_1_t6FB0B120D81D93A467EF6FC4C5C58D7B8C277EFD;
// System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>
struct HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05;
// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene>
struct HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<Mirror.NetworkConnection>
struct IEqualityComparer_1_tF5A6231262B4821CCA4B5C695E5A5C83E01C634E;
// System.Collections.Generic.IEqualityComparer`1<Mirror.NetworkIdentity>
struct IEqualityComparer_1_tE54262A010C327F33FBF2D586BEE080B247ED91A;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.SceneManagement.Scene>
struct IEqualityComparer_1_t85BCB8A02B205FB5E1031094152DA9C904FA4877;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t75C3361D3BE51E9742B0BBFA0F3998120E7CB6CE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Mirror.NetworkConnectionToClient>
struct KeyCollection_t8D65BE6654EF956480ECF996B9A79FA56635F07B;
// System.Collections.Generic.Dictionary`2/KeyCollection<Mirror.NetworkIdentity,UnityEngine.SceneManagement.Scene>
struct KeyCollection_tF809185B990D4C39B73C024C25B11B2D5BF6A0A5;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>>
struct KeyCollection_tA34F575BAC3761766E93E4FF80AE6CC730B16503;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,Mirror.NetworkIdentity>
struct KeyCollection_t6DF9AB53069A866CB40854740C4F3F91AE8CF439;
// System.Collections.Generic.List`1<Mirror.NetworkConnectionToClient>
struct List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536;
// System.Collections.Generic.List`1<Mirror.SyncObject>
struct List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156;
// System.Collections.Generic.SortedList`2<System.Double,Mirror.NTSnapshot>
struct SortedList_2_tBB9B8578C2938E0CFC5C1174DAA5F0164DE42AAD;
// UnityEngine.Events.UnityEvent`1<Mirror.Discovery.ServerResponse>
struct UnityEvent_1_t079F4478C0889C5CBE14FD6E79020F208D7D95B0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Mirror.NetworkConnectionToClient>
struct ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF;
// System.Collections.Generic.Dictionary`2/ValueCollection<Mirror.NetworkIdentity,UnityEngine.SceneManagement.Scene>
struct ValueCollection_tF9261841B33330FF6D18FA0871F98BC92D6AD001;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>>
struct ValueCollection_t4B8A8999FA1171E54784AF7573373EEF01E34B7A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,Mirror.NetworkIdentity>
struct ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>
struct ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Mirror.NetworkConnectionToClient>[]
struct EntryU5BU5D_t2D9A037EDBEB0FEEEB310E7488A8AA19FF8DDCD8;
// System.Collections.Generic.Dictionary`2/Entry<Mirror.NetworkIdentity,UnityEngine.SceneManagement.Scene>[]
struct EntryU5BU5D_t6458BB6F1A95258DA39E28296FE786F79B439757;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>>[]
struct EntryU5BU5D_t6D445F2CF64DB96D9D42E2F92CAEDBC886FF59EA;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,Mirror.NetworkIdentity>[]
struct EntryU5BU5D_t4ECB9AC48BAD6751EEA76C170C055967F8BE8BEB;
// System.Collections.Generic.HashSet`1/Slot<Mirror.NetworkConnection>[]
struct SlotU5BU5D_tD84A56CBB0DB1C92859ACB6B2285C07CB9E1374D;
// System.Collections.Generic.HashSet`1/Slot<Mirror.NetworkIdentity>[]
struct SlotU5BU5D_t52DAA4C06C3C644B8D2C2EA97BEBBE4BD1E7CEC2;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.SceneManagement.Scene>[]
struct SlotU5BU5D_t28CC8D458712987F7F2F7D0C1041D14E00050DD4;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Mirror.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Mirror.RemoteCalls.CmdDelegate
struct CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// Mirror.InterestManagement
struct InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mirror.NetworkBehaviour
struct NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4;
// Mirror.NetworkConnection
struct NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311;
// Mirror.NetworkConnectionToClient
struct NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A;
// Mirror.NetworkIdentity
struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6;
// Mirror.NetworkReader
struct NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9;
// Mirror.NetworkRoomPlayer
struct NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F;
// Mirror.NetworkTransformBase
struct NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F;
// Mirror.Experimental.NetworkTransformBase
struct NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555;
// Mirror.NetworkTransformChild
struct NetworkTransformChild_t5BCF31DB1CF06B9E4A05637871E288D51765466E;
// Mirror.Experimental.NetworkTransformChild
struct NetworkTransformChild_t00AFAFB0CC0AF80437BC4B989B85FC80BAE83379;
// Mirror.NetworkVisibility
struct NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07;
// Mirror.NetworkWriter
struct NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Mirror.PooledNetworkWriter
struct PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// Mirror.SceneInterestManagement
struct SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// Mirror.Discovery.ServerFoundUnityEvent
struct ServerFoundUnityEvent_t4E4DCA48D70BC4E17D90B92E694B5C64F2BDDA43;
// Mirror.SpatialHashingInterestManagement
struct SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Mirror.Unbatcher
struct Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mirror.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041;
// Mirror.Experimental.NetworkRigidbody/ClientSyncState
struct ClientSyncState_t50ED202FBB0CD39C8A4B74A04AD03B1805A3F074;
// Mirror.Experimental.NetworkRigidbody2D/ClientSyncState
struct ClientSyncState_t70791A5CDE6140A304B89ED0FFEEDD03A3E9EA98;
// Mirror.NetworkRoomManager/<>c
struct U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral001046C5058A2A3561FFC554A7BFA59C3216D35C;
IL2CPP_EXTERN_C String_t* _stringLiteral1773AC2AEF82926453A7E1008BF8D9375E3CE23C;
IL2CPP_EXTERN_C String_t* _stringLiteral26B75020571297215410303FD55377E85D5E01AC;
IL2CPP_EXTERN_C String_t* _stringLiteral27D16C380E80A97A9F69F351DE4BFCFAA23E2CCC;
IL2CPP_EXTERN_C String_t* _stringLiteral29B90BB68613D73625ADC8B02E817DB75A9E955B;
IL2CPP_EXTERN_C String_t* _stringLiteral42470E6A6DE57CCBBA1718521E05CACF86633451;
IL2CPP_EXTERN_C String_t* _stringLiteral657684025BDBCF20B239023903AABD67342ED9D8;
IL2CPP_EXTERN_C String_t* _stringLiteral86D7317D8F52D0566180D8B4AB17C20C7C4D4A26;
IL2CPP_EXTERN_C String_t* _stringLiteral9B0C0B3B5737768910C87A81DCFBC477840C45DC;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FE92AFF066000A90073CFD1CC7D1D3B04A60B5;
IL2CPP_EXTERN_C String_t* _stringLiteralF79B8C7B487D624B0C0713CD6BB90DEEB344D81F;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0A121928400A7E17E79DEF80149E4FAB3619DD;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8C1313CC234169736B38D3F024B64C59EE01F548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mACA86CEB8FC95305338DE3BDEC463D90200586F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m2B9B7E274E39A14DA0E84B806F316561F5B5A711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAA5980F86AD93CC0E633CABD9E9D9E5D106F6357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB0FE8165A4E9367469E388D4A68A81E6D74A0EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m70068D86B047D54689499BBD312317F8A74BF8B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m826B1B4A28E49D5684DAF94AC59F1478CB23DC2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m33CAD47C20C721CE58504E8FF017F617739BA3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m863891487C55E52E72C043C29CA6D20969134CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBFBF795EAAB415A21979701465DF1FC3D2258AC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3B792B6C788DCE4B38EF9ED49F64320CC5043C60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB2C8EC334DFD5539BD6885018155D8BEA3C38870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB4BE9B0722B9A0E644AFBF21F49A43B935641677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEA092BC2C00AEBAF008C9F2186FE98F74DEDFEC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m02AFA72A654DC0D05D3BD0751EFB4EDF0B8B0BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0483BF2933B6F4037B9E12B43EE614354F4A66CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m247BC915E135A225F1B037ECF2AC0B46D87E9647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA1455B4574A42BB90837E4373CEA45C445209120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0D5CBDE9B4D5D5764BA083F6F1C5C3CDFDF1C065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m39E5466E238958C9692150450E0C4F527F587A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3E52BDC09ACA41D1976BD1CBBB0BB9362C747278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m74B6106F631CD7A025FEA6A9D67DC523CE3DBB06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F_m4EDDC9D17439C18F9912C9A2DA143E1598E6BBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Grid2D_1_Add_m7EBE77A6957F601227BEDB1138E6AE73E592A80D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Grid2D_1_ClearNonAlloc_m9D19936F849618735F2BC18A778079C1134512AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Grid2D_1_GetWithNeighbours_mF655D366EE6B017583A06A3E48E05AA1114243AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Grid2D_1__ctor_mF27CD78C1A127076A9462DF8C3F47B9BC2DD9B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m28002384C2860575E2AA38C7589147EC70119BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m8FBBEDE6BF250AA3343F6AFFB35DB005D7C33F6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF823FDC7C230B88007FA5B9988D144BAC866A315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_mEF214BA4D01B4659539FBCBF2DE968CCB8D30028_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m6ADBCCE83E6F17EF1946F504EEC0BDDDECA35548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m7F37EE20CFBFB7D3F5E58A342E7AF29685F31536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mEFD8B95901D0571FE3456927C7A94927B02E9810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m0326F1640E966F30C6C3CFF1B1DF80C2E1D58E78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m532404BE8B625E5E5401B951469A77F361AD490B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransformBase_InvokeUserCode_CmdClientToServerSync_mF9BD09FB414F89B314EC06D2A2C2AB283F8B9930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransformBase_InvokeUserCode_CmdTeleportFinished_m26EEA3E6F568579CCB33A52023CBABA036D384B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransformBase_InvokeUserCode_RpcMove_mE6DEC9B981120849147D01DE240373B44D87680D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransformBase_InvokeUserCode_RpcTeleport_mC5DA20F023A25373328B2BE6F96BF3B704EEB05A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mBCB042AE0BB5F32DC95D2C326BEBFBE8DDA53EE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m0EA4028861066E0484B99B81D1957F51A9FC80D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m55D0332E9A87765BDDEBA199299DFDB039EA25A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>
struct Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2D9A037EDBEB0FEEEB310E7488A8AA19FF8DDCD8* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8D65BE6654EF956480ECF996B9A79FA56635F07B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___entries_1)); }
	inline EntryU5BU5D_t2D9A037EDBEB0FEEEB310E7488A8AA19FF8DDCD8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2D9A037EDBEB0FEEEB310E7488A8AA19FF8DDCD8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2D9A037EDBEB0FEEEB310E7488A8AA19FF8DDCD8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___keys_7)); }
	inline KeyCollection_t8D65BE6654EF956480ECF996B9A79FA56635F07B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8D65BE6654EF956480ECF996B9A79FA56635F07B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8D65BE6654EF956480ECF996B9A79FA56635F07B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ___values_8)); }
	inline ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Mirror.NetworkIdentity,UnityEngine.SceneManagement.Scene>
struct Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6458BB6F1A95258DA39E28296FE786F79B439757* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF809185B990D4C39B73C024C25B11B2D5BF6A0A5 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF9261841B33330FF6D18FA0871F98BC92D6AD001 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420, ___entries_1)); }
	inline EntryU5BU5D_t6458BB6F1A95258DA39E28296FE786F79B439757* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6458BB6F1A95258DA39E28296FE786F79B439757** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6458BB6F1A95258DA39E28296FE786F79B439757* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420, ___keys_7)); }
	inline KeyCollection_tF809185B990D4C39B73C024C25B11B2D5BF6A0A5 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF809185B990D4C39B73C024C25B11B2D5BF6A0A5 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF809185B990D4C39B73C024C25B11B2D5BF6A0A5 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420, ___values_8)); }
	inline ValueCollection_tF9261841B33330FF6D18FA0871F98BC92D6AD001 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF9261841B33330FF6D18FA0871F98BC92D6AD001 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF9261841B33330FF6D18FA0871F98BC92D6AD001 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>>
struct Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6D445F2CF64DB96D9D42E2F92CAEDBC886FF59EA* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA34F575BAC3761766E93E4FF80AE6CC730B16503 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4B8A8999FA1171E54784AF7573373EEF01E34B7A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97, ___entries_1)); }
	inline EntryU5BU5D_t6D445F2CF64DB96D9D42E2F92CAEDBC886FF59EA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6D445F2CF64DB96D9D42E2F92CAEDBC886FF59EA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6D445F2CF64DB96D9D42E2F92CAEDBC886FF59EA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97, ___keys_7)); }
	inline KeyCollection_tA34F575BAC3761766E93E4FF80AE6CC730B16503 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA34F575BAC3761766E93E4FF80AE6CC730B16503 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA34F575BAC3761766E93E4FF80AE6CC730B16503 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97, ___values_8)); }
	inline ValueCollection_t4B8A8999FA1171E54784AF7573373EEF01E34B7A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4B8A8999FA1171E54784AF7573373EEF01E34B7A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4B8A8999FA1171E54784AF7573373EEF01E34B7A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity>
struct Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4ECB9AC48BAD6751EEA76C170C055967F8BE8BEB* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6DF9AB53069A866CB40854740C4F3F91AE8CF439 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817, ___entries_1)); }
	inline EntryU5BU5D_t4ECB9AC48BAD6751EEA76C170C055967F8BE8BEB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4ECB9AC48BAD6751EEA76C170C055967F8BE8BEB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4ECB9AC48BAD6751EEA76C170C055967F8BE8BEB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817, ___keys_7)); }
	inline KeyCollection_t6DF9AB53069A866CB40854740C4F3F91AE8CF439 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6DF9AB53069A866CB40854740C4F3F91AE8CF439 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6DF9AB53069A866CB40854740C4F3F91AE8CF439 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817, ___values_8)); }
	inline ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// Mirror.Grid2D`1<Mirror.NetworkConnection>
struct Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2Int,System.Collections.Generic.HashSet`1<T>> Mirror.Grid2D`1::grid
	Dictionary_2_t2B99E73208FEBCA8FB0B8E9EDFE0FD21927A0CAA * ___grid_0;
	// UnityEngine.Vector2Int[] Mirror.Grid2D`1::neighbourOffsets
	Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* ___neighbourOffsets_1;

public:
	inline static int32_t get_offset_of_grid_0() { return static_cast<int32_t>(offsetof(Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A, ___grid_0)); }
	inline Dictionary_2_t2B99E73208FEBCA8FB0B8E9EDFE0FD21927A0CAA * get_grid_0() const { return ___grid_0; }
	inline Dictionary_2_t2B99E73208FEBCA8FB0B8E9EDFE0FD21927A0CAA ** get_address_of_grid_0() { return &___grid_0; }
	inline void set_grid_0(Dictionary_2_t2B99E73208FEBCA8FB0B8E9EDFE0FD21927A0CAA * value)
	{
		___grid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_0), (void*)value);
	}

	inline static int32_t get_offset_of_neighbourOffsets_1() { return static_cast<int32_t>(offsetof(Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A, ___neighbourOffsets_1)); }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* get_neighbourOffsets_1() const { return ___neighbourOffsets_1; }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E** get_address_of_neighbourOffsets_1() { return &___neighbourOffsets_1; }
	inline void set_neighbourOffsets_1(Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* value)
	{
		___neighbourOffsets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neighbourOffsets_1), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>
struct HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tD84A56CBB0DB1C92859ACB6B2285C07CB9E1374D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____slots_8)); }
	inline SlotU5BU5D_tD84A56CBB0DB1C92859ACB6B2285C07CB9E1374D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tD84A56CBB0DB1C92859ACB6B2285C07CB9E1374D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tD84A56CBB0DB1C92859ACB6B2285C07CB9E1374D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t52DAA4C06C3C644B8D2C2EA97BEBBE4BD1E7CEC2* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB, ____slots_8)); }
	inline SlotU5BU5D_t52DAA4C06C3C644B8D2C2EA97BEBBE4BD1E7CEC2* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t52DAA4C06C3C644B8D2C2EA97BEBBE4BD1E7CEC2** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t52DAA4C06C3C644B8D2C2EA97BEBBE4BD1E7CEC2* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene>
struct HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t28CC8D458712987F7F2F7D0C1041D14E00050DD4* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7, ____slots_8)); }
	inline SlotU5BU5D_t28CC8D458712987F7F2F7D0C1041D14E00050DD4* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t28CC8D458712987F7F2F7D0C1041D14E00050DD4** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t28CC8D458712987F7F2F7D0C1041D14E00050DD4* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Mirror.NetworkConnectionToClient>
struct ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F, ___dictionary_0)); }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,Mirror.NetworkIdentity>
struct ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF, ___dictionary_0)); }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Mirror.NetworkConnection
struct NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::observing
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___observing_1;
	// System.Int32 Mirror.NetworkConnection::connectionId
	int32_t ___connectionId_2;
	// System.Boolean Mirror.NetworkConnection::isAuthenticated
	bool ___isAuthenticated_3;
	// System.Object Mirror.NetworkConnection::authenticationData
	RuntimeObject * ___authenticationData_4;
	// System.Boolean Mirror.NetworkConnection::isReady
	bool ___isReady_5;
	// System.Single Mirror.NetworkConnection::lastMessageTime
	float ___lastMessageTime_6;
	// Mirror.NetworkIdentity Mirror.NetworkConnection::<identity>k__BackingField
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___U3CidentityU3Ek__BackingField_7;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::clientOwnedObjects
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___clientOwnedObjects_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.Batcher> Mirror.NetworkConnection::batches
	Dictionary_2_t23D414497C46C84B75FD28526D9E0612B78F1E07 * ___batches_9;
	// System.Double Mirror.NetworkConnection::<remoteTimeStamp>k__BackingField
	double ___U3CremoteTimeStampU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_observing_1() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___observing_1)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get_observing_1() const { return ___observing_1; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of_observing_1() { return &___observing_1; }
	inline void set_observing_1(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		___observing_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observing_1), (void*)value);
	}

	inline static int32_t get_offset_of_connectionId_2() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___connectionId_2)); }
	inline int32_t get_connectionId_2() const { return ___connectionId_2; }
	inline int32_t* get_address_of_connectionId_2() { return &___connectionId_2; }
	inline void set_connectionId_2(int32_t value)
	{
		___connectionId_2 = value;
	}

	inline static int32_t get_offset_of_isAuthenticated_3() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___isAuthenticated_3)); }
	inline bool get_isAuthenticated_3() const { return ___isAuthenticated_3; }
	inline bool* get_address_of_isAuthenticated_3() { return &___isAuthenticated_3; }
	inline void set_isAuthenticated_3(bool value)
	{
		___isAuthenticated_3 = value;
	}

	inline static int32_t get_offset_of_authenticationData_4() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___authenticationData_4)); }
	inline RuntimeObject * get_authenticationData_4() const { return ___authenticationData_4; }
	inline RuntimeObject ** get_address_of_authenticationData_4() { return &___authenticationData_4; }
	inline void set_authenticationData_4(RuntimeObject * value)
	{
		___authenticationData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticationData_4), (void*)value);
	}

	inline static int32_t get_offset_of_isReady_5() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___isReady_5)); }
	inline bool get_isReady_5() const { return ___isReady_5; }
	inline bool* get_address_of_isReady_5() { return &___isReady_5; }
	inline void set_isReady_5(bool value)
	{
		___isReady_5 = value;
	}

	inline static int32_t get_offset_of_lastMessageTime_6() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___lastMessageTime_6)); }
	inline float get_lastMessageTime_6() const { return ___lastMessageTime_6; }
	inline float* get_address_of_lastMessageTime_6() { return &___lastMessageTime_6; }
	inline void set_lastMessageTime_6(float value)
	{
		___lastMessageTime_6 = value;
	}

	inline static int32_t get_offset_of_U3CidentityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___U3CidentityU3Ek__BackingField_7)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_U3CidentityU3Ek__BackingField_7() const { return ___U3CidentityU3Ek__BackingField_7; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_U3CidentityU3Ek__BackingField_7() { return &___U3CidentityU3Ek__BackingField_7; }
	inline void set_U3CidentityU3Ek__BackingField_7(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___U3CidentityU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidentityU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_clientOwnedObjects_8() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___clientOwnedObjects_8)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get_clientOwnedObjects_8() const { return ___clientOwnedObjects_8; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of_clientOwnedObjects_8() { return &___clientOwnedObjects_8; }
	inline void set_clientOwnedObjects_8(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		___clientOwnedObjects_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientOwnedObjects_8), (void*)value);
	}

	inline static int32_t get_offset_of_batches_9() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___batches_9)); }
	inline Dictionary_2_t23D414497C46C84B75FD28526D9E0612B78F1E07 * get_batches_9() const { return ___batches_9; }
	inline Dictionary_2_t23D414497C46C84B75FD28526D9E0612B78F1E07 ** get_address_of_batches_9() { return &___batches_9; }
	inline void set_batches_9(Dictionary_2_t23D414497C46C84B75FD28526D9E0612B78F1E07 * value)
	{
		___batches_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___batches_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremoteTimeStampU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___U3CremoteTimeStampU3Ek__BackingField_10)); }
	inline double get_U3CremoteTimeStampU3Ek__BackingField_10() const { return ___U3CremoteTimeStampU3Ek__BackingField_10; }
	inline double* get_address_of_U3CremoteTimeStampU3Ek__BackingField_10() { return &___U3CremoteTimeStampU3Ek__BackingField_10; }
	inline void set_U3CremoteTimeStampU3Ek__BackingField_10(double value)
	{
		___U3CremoteTimeStampU3Ek__BackingField_10 = value;
	}
};


// Mirror.NetworkServer
struct NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD  : public RuntimeObject
{
public:

public:
};

struct NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields
{
public:
	// System.Boolean Mirror.NetworkServer::initialized
	bool ___initialized_0;
	// System.Int32 Mirror.NetworkServer::maxConnections
	int32_t ___maxConnections_1;
	// Mirror.NetworkConnectionToClient Mirror.NetworkServer::<localConnection>k__BackingField
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___U3ClocalConnectionU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient> Mirror.NetworkServer::connections
	Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * ___connections_3;
	// System.Collections.Generic.Dictionary`2<System.UInt16,Mirror.NetworkMessageDelegate> Mirror.NetworkServer::handlers
	Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D * ___handlers_4;
	// System.Boolean Mirror.NetworkServer::dontListen
	bool ___dontListen_5;
	// System.Boolean Mirror.NetworkServer::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_6;
	// System.Boolean Mirror.NetworkServer::isLoadingScene
	bool ___isLoadingScene_7;
	// Mirror.InterestManagement Mirror.NetworkServer::aoi
	InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * ___aoi_8;
	// System.Boolean Mirror.NetworkServer::disconnectInactiveConnections
	bool ___disconnectInactiveConnections_9;
	// System.Single Mirror.NetworkServer::disconnectInactiveTimeout
	float ___disconnectInactiveTimeout_10;
	// System.Action`1<Mirror.NetworkConnection> Mirror.NetworkServer::OnConnectedEvent
	Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * ___OnConnectedEvent_11;
	// System.Action`1<Mirror.NetworkConnection> Mirror.NetworkServer::OnDisconnectedEvent
	Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * ___OnDisconnectedEvent_12;
	// System.Action`2<Mirror.NetworkConnection,System.Exception> Mirror.NetworkServer::OnErrorEvent
	Action_2_tA4EA4AA966879534DECFAA9ECD738C49FD95A344 * ___OnErrorEvent_13;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkConnection> Mirror.NetworkServer::newObservers
	HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * ___newObservers_14;
	// System.Collections.Generic.List`1<Mirror.NetworkConnectionToClient> Mirror.NetworkServer::connectionsCopy
	List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * ___connectionsCopy_15;

public:
	inline static int32_t get_offset_of_initialized_0() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___initialized_0)); }
	inline bool get_initialized_0() const { return ___initialized_0; }
	inline bool* get_address_of_initialized_0() { return &___initialized_0; }
	inline void set_initialized_0(bool value)
	{
		___initialized_0 = value;
	}

	inline static int32_t get_offset_of_maxConnections_1() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___maxConnections_1)); }
	inline int32_t get_maxConnections_1() const { return ___maxConnections_1; }
	inline int32_t* get_address_of_maxConnections_1() { return &___maxConnections_1; }
	inline void set_maxConnections_1(int32_t value)
	{
		___maxConnections_1 = value;
	}

	inline static int32_t get_offset_of_U3ClocalConnectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___U3ClocalConnectionU3Ek__BackingField_2)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_U3ClocalConnectionU3Ek__BackingField_2() const { return ___U3ClocalConnectionU3Ek__BackingField_2; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_U3ClocalConnectionU3Ek__BackingField_2() { return &___U3ClocalConnectionU3Ek__BackingField_2; }
	inline void set_U3ClocalConnectionU3Ek__BackingField_2(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___U3ClocalConnectionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalConnectionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_connections_3() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___connections_3)); }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * get_connections_3() const { return ___connections_3; }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 ** get_address_of_connections_3() { return &___connections_3; }
	inline void set_connections_3(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * value)
	{
		___connections_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_3), (void*)value);
	}

	inline static int32_t get_offset_of_handlers_4() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___handlers_4)); }
	inline Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D * get_handlers_4() const { return ___handlers_4; }
	inline Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D ** get_address_of_handlers_4() { return &___handlers_4; }
	inline void set_handlers_4(Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D * value)
	{
		___handlers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_4), (void*)value);
	}

	inline static int32_t get_offset_of_dontListen_5() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___dontListen_5)); }
	inline bool get_dontListen_5() const { return ___dontListen_5; }
	inline bool* get_address_of_dontListen_5() { return &___dontListen_5; }
	inline void set_dontListen_5(bool value)
	{
		___dontListen_5 = value;
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___U3CactiveU3Ek__BackingField_6)); }
	inline bool get_U3CactiveU3Ek__BackingField_6() const { return ___U3CactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_6() { return &___U3CactiveU3Ek__BackingField_6; }
	inline void set_U3CactiveU3Ek__BackingField_6(bool value)
	{
		___U3CactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_isLoadingScene_7() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___isLoadingScene_7)); }
	inline bool get_isLoadingScene_7() const { return ___isLoadingScene_7; }
	inline bool* get_address_of_isLoadingScene_7() { return &___isLoadingScene_7; }
	inline void set_isLoadingScene_7(bool value)
	{
		___isLoadingScene_7 = value;
	}

	inline static int32_t get_offset_of_aoi_8() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___aoi_8)); }
	inline InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * get_aoi_8() const { return ___aoi_8; }
	inline InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 ** get_address_of_aoi_8() { return &___aoi_8; }
	inline void set_aoi_8(InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * value)
	{
		___aoi_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aoi_8), (void*)value);
	}

	inline static int32_t get_offset_of_disconnectInactiveConnections_9() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___disconnectInactiveConnections_9)); }
	inline bool get_disconnectInactiveConnections_9() const { return ___disconnectInactiveConnections_9; }
	inline bool* get_address_of_disconnectInactiveConnections_9() { return &___disconnectInactiveConnections_9; }
	inline void set_disconnectInactiveConnections_9(bool value)
	{
		___disconnectInactiveConnections_9 = value;
	}

	inline static int32_t get_offset_of_disconnectInactiveTimeout_10() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___disconnectInactiveTimeout_10)); }
	inline float get_disconnectInactiveTimeout_10() const { return ___disconnectInactiveTimeout_10; }
	inline float* get_address_of_disconnectInactiveTimeout_10() { return &___disconnectInactiveTimeout_10; }
	inline void set_disconnectInactiveTimeout_10(float value)
	{
		___disconnectInactiveTimeout_10 = value;
	}

	inline static int32_t get_offset_of_OnConnectedEvent_11() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___OnConnectedEvent_11)); }
	inline Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * get_OnConnectedEvent_11() const { return ___OnConnectedEvent_11; }
	inline Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F ** get_address_of_OnConnectedEvent_11() { return &___OnConnectedEvent_11; }
	inline void set_OnConnectedEvent_11(Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * value)
	{
		___OnConnectedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnectedEvent_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectedEvent_12() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___OnDisconnectedEvent_12)); }
	inline Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * get_OnDisconnectedEvent_12() const { return ___OnDisconnectedEvent_12; }
	inline Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F ** get_address_of_OnDisconnectedEvent_12() { return &___OnDisconnectedEvent_12; }
	inline void set_OnDisconnectedEvent_12(Action_1_tDD0F70E97D1C1787B9CDF47B4B7B69D3C9CA597F * value)
	{
		___OnDisconnectedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectedEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnErrorEvent_13() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___OnErrorEvent_13)); }
	inline Action_2_tA4EA4AA966879534DECFAA9ECD738C49FD95A344 * get_OnErrorEvent_13() const { return ___OnErrorEvent_13; }
	inline Action_2_tA4EA4AA966879534DECFAA9ECD738C49FD95A344 ** get_address_of_OnErrorEvent_13() { return &___OnErrorEvent_13; }
	inline void set_OnErrorEvent_13(Action_2_tA4EA4AA966879534DECFAA9ECD738C49FD95A344 * value)
	{
		___OnErrorEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnErrorEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_newObservers_14() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___newObservers_14)); }
	inline HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * get_newObservers_14() const { return ___newObservers_14; }
	inline HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 ** get_address_of_newObservers_14() { return &___newObservers_14; }
	inline void set_newObservers_14(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * value)
	{
		___newObservers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newObservers_14), (void*)value);
	}

	inline static int32_t get_offset_of_connectionsCopy_15() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___connectionsCopy_15)); }
	inline List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * get_connectionsCopy_15() const { return ___connectionsCopy_15; }
	inline List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 ** get_address_of_connectionsCopy_15() { return &___connectionsCopy_15; }
	inline void set_connectionsCopy_15(List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * value)
	{
		___connectionsCopy_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionsCopy_15), (void*)value);
	}
};


// Mirror.NetworkWriter
struct NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A  : public RuntimeObject
{
public:
	// System.Byte[] Mirror.NetworkWriter::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_1;
	// System.Int32 Mirror.NetworkWriter::Position
	int32_t ___Position_2;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Mirror.NetworkRoomManager/<>c
struct U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8_StaticFields
{
public:
	// Mirror.NetworkRoomManager/<>c Mirror.NetworkRoomManager/<>c::<>9
	U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8 * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Mirror.NetworkConnectionToClient>,System.Boolean> Mirror.NetworkRoomManager/<>c::<>9__16_0
	Func_2_t1186B7233CEE692AB7374C6620B782BD969E354C * ___U3CU3E9__16_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8_StaticFields, ___U3CU3E9__16_0_1)); }
	inline Func_2_t1186B7233CEE692AB7374C6620B782BD969E354C * get_U3CU3E9__16_0_1() const { return ___U3CU3E9__16_0_1; }
	inline Func_2_t1186B7233CEE692AB7374C6620B782BD969E354C ** get_address_of_U3CU3E9__16_0_1() { return &___U3CU3E9__16_0_1; }
	inline void set_U3CU3E9__16_0_1(Func_2_t1186B7233CEE692AB7374C6620B782BD969E354C * value)
	{
		___U3CU3E9__16_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_1), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<Mirror.NetworkIdentity>
struct Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838, ____set_0)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get__set_0() const { return ____set_0; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838, ____current_3)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get__current_3() const { return ____current_3; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____set_0)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Mirror.NetworkConnectionToClient>
struct Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E, ___dictionary_0)); }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E, ___currentValue_3)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_currentValue_3() const { return ___currentValue_3; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,Mirror.NetworkIdentity>
struct Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E, ___dictionary_0)); }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E, ___currentValue_3)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_currentValue_3() const { return ___currentValue_3; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,System.Object>
struct Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92, ___dictionary_0)); }
	inline Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Mirror.NetworkConnectionToClient>
struct KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B, ___value_1)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_value_1() const { return ___value_1; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Mirror.Discovery.ServerResponse>
struct UnityEvent_1_t079F4478C0889C5CBE14FD6E79020F208D7D95B0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t079F4478C0889C5CBE14FD6E79020F208D7D95B0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Address_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___Any_5)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_5), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_6), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Mirror.NetworkConnectionToClient
struct NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A  : public NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311
{
public:
	// Mirror.Unbatcher Mirror.NetworkConnectionToClient::unbatcher
	Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 * ___unbatcher_11;

public:
	inline static int32_t get_offset_of_unbatcher_11() { return static_cast<int32_t>(offsetof(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A, ___unbatcher_11)); }
	inline Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 * get_unbatcher_11() const { return ___unbatcher_11; }
	inline Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 ** get_address_of_unbatcher_11() { return &___unbatcher_11; }
	inline void set_unbatcher_11(Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 * value)
	{
		___unbatcher_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unbatcher_11), (void*)value);
	}
};


// Mirror.NetworkIdentitySerialization
struct NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9 
{
public:
	// System.Int32 Mirror.NetworkIdentitySerialization::tick
	int32_t ___tick_0;
	// Mirror.NetworkWriter Mirror.NetworkIdentitySerialization::ownerWriter
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___ownerWriter_1;
	// Mirror.NetworkWriter Mirror.NetworkIdentitySerialization::observersWriter
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___observersWriter_2;

public:
	inline static int32_t get_offset_of_tick_0() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9, ___tick_0)); }
	inline int32_t get_tick_0() const { return ___tick_0; }
	inline int32_t* get_address_of_tick_0() { return &___tick_0; }
	inline void set_tick_0(int32_t value)
	{
		___tick_0 = value;
	}

	inline static int32_t get_offset_of_ownerWriter_1() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9, ___ownerWriter_1)); }
	inline NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * get_ownerWriter_1() const { return ___ownerWriter_1; }
	inline NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A ** get_address_of_ownerWriter_1() { return &___ownerWriter_1; }
	inline void set_ownerWriter_1(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * value)
	{
		___ownerWriter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ownerWriter_1), (void*)value);
	}

	inline static int32_t get_offset_of_observersWriter_2() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9, ___observersWriter_2)); }
	inline NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * get_observersWriter_2() const { return ___observersWriter_2; }
	inline NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A ** get_address_of_observersWriter_2() { return &___observersWriter_2; }
	inline void set_observersWriter_2(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * value)
	{
		___observersWriter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observersWriter_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.NetworkIdentitySerialization
struct NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9_marshaled_pinvoke
{
	int32_t ___tick_0;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___ownerWriter_1;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___observersWriter_2;
};
// Native definition for COM marshalling of Mirror.NetworkIdentitySerialization
struct NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9_marshaled_com
{
	int32_t ___tick_0;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___ownerWriter_1;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___observersWriter_2;
};

// Mirror.PooledNetworkWriter
struct PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118  : public NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// Mirror.Discovery.ServerRequest
struct ServerRequest_t2FC933E4D7186FEDDA3DCBE5F1845BD8231B9E3F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ServerRequest_t2FC933E4D7186FEDDA3DCBE5F1845BD8231B9E3F__padding[1];
	};

public:
};


// Mirror.Discovery.ServerResponse
struct ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 
{
public:
	// System.Net.IPEndPoint Mirror.Discovery.ServerResponse::<EndPoint>k__BackingField
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___U3CEndPointU3Ek__BackingField_0;
	// System.Uri Mirror.Discovery.ServerResponse::uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri_1;
	// System.Int64 Mirror.Discovery.ServerResponse::serverId
	int64_t ___serverId_2;

public:
	inline static int32_t get_offset_of_U3CEndPointU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1, ___U3CEndPointU3Ek__BackingField_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_U3CEndPointU3Ek__BackingField_0() const { return ___U3CEndPointU3Ek__BackingField_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_U3CEndPointU3Ek__BackingField_0() { return &___U3CEndPointU3Ek__BackingField_0; }
	inline void set_U3CEndPointU3Ek__BackingField_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___U3CEndPointU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEndPointU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1, ___uri_1)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_uri_1() const { return ___uri_1; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_1), (void*)value);
	}

	inline static int32_t get_offset_of_serverId_2() { return static_cast<int32_t>(offsetof(ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1, ___serverId_2)); }
	inline int64_t get_serverId_2() const { return ___serverId_2; }
	inline int64_t* get_address_of_serverId_2() { return &___serverId_2; }
	inline void set_serverId_2(int64_t value)
	{
		___serverId_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.Discovery.ServerResponse
struct ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshaled_pinvoke
{
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___U3CEndPointU3Ek__BackingField_0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri_1;
	int64_t ___serverId_2;
};
// Native definition for COM marshalling of Mirror.Discovery.ServerResponse
struct ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshaled_com
{
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___U3CEndPointU3Ek__BackingField_0;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri_1;
	int64_t ___serverId_2;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Mirror.NetworkRoomManager/PendingPlayer
struct PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694 
{
public:
	// Mirror.NetworkConnection Mirror.NetworkRoomManager/PendingPlayer::conn
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn_0;
	// UnityEngine.GameObject Mirror.NetworkRoomManager/PendingPlayer::roomPlayer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___roomPlayer_1;

public:
	inline static int32_t get_offset_of_conn_0() { return static_cast<int32_t>(offsetof(PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694, ___conn_0)); }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * get_conn_0() const { return ___conn_0; }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 ** get_address_of_conn_0() { return &___conn_0; }
	inline void set_conn_0(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * value)
	{
		___conn_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_0), (void*)value);
	}

	inline static int32_t get_offset_of_roomPlayer_1() { return static_cast<int32_t>(offsetof(PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694, ___roomPlayer_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_roomPlayer_1() const { return ___roomPlayer_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_roomPlayer_1() { return &___roomPlayer_1; }
	inline void set_roomPlayer_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___roomPlayer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roomPlayer_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.NetworkRoomManager/PendingPlayer
struct PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshaled_pinvoke
{
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn_0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___roomPlayer_1;
};
// Native definition for COM marshalling of Mirror.NetworkRoomManager/PendingPlayer
struct PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshaled_com
{
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn_0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___roomPlayer_1;
};

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.SceneManagement.Scene>
struct Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE, ____set_0)); }
	inline HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * get__set_0() const { return ____set_0; }
	inline HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE, ____current_3)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get__current_3() const { return ____current_3; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		____current_3 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Mirror.NetworkReader
struct NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9  : public RuntimeObject
{
public:
	// System.ArraySegment`1<System.Byte> Mirror.NetworkReader::buffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___buffer_0;
	// System.Int32 Mirror.NetworkReader::Position
	int32_t ___Position_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9, ___buffer_0)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_buffer_0() const { return ___buffer_0; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___buffer_0))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9, ___Position_1)); }
	inline int32_t get_Position_1() const { return ___Position_1; }
	inline int32_t* get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(int32_t value)
	{
		___Position_1 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Mirror.Discovery.ServerFoundUnityEvent
struct ServerFoundUnityEvent_t4E4DCA48D70BC4E17D90B92E694B5C64F2BDDA43  : public UnityEvent_1_t079F4478C0889C5CBE14FD6E79020F208D7D95B0
{
public:

public:
};


// Mirror.SyncMode
struct SyncMode_t01A8CEC78393EC5639637113BC865A2E829842C2 
{
public:
	// System.Int32 Mirror.SyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SyncMode_t01A8CEC78393EC5639637113BC865A2E829842C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.Visibility
struct Visibility_tCFB30738FC0DA69F05112777E1A9FB99E92DD1B9 
{
public:
	// System.Int32 Mirror.Visibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Visibility_tCFB30738FC0DA69F05112777E1A9FB99E92DD1B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutOption/Type
struct Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.Experimental.NetworkRigidbody/ClientSyncState
struct ClientSyncState_t50ED202FBB0CD39C8A4B74A04AD03B1805A3F074  : public RuntimeObject
{
public:
	// System.Single Mirror.Experimental.NetworkRigidbody/ClientSyncState::nextSyncTime
	float ___nextSyncTime_0;
	// UnityEngine.Vector3 Mirror.Experimental.NetworkRigidbody/ClientSyncState::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_1;
	// UnityEngine.Vector3 Mirror.Experimental.NetworkRigidbody/ClientSyncState::angularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___angularVelocity_2;
	// System.Boolean Mirror.Experimental.NetworkRigidbody/ClientSyncState::isKinematic
	bool ___isKinematic_3;
	// System.Boolean Mirror.Experimental.NetworkRigidbody/ClientSyncState::useGravity
	bool ___useGravity_4;
	// System.Single Mirror.Experimental.NetworkRigidbody/ClientSyncState::drag
	float ___drag_5;
	// System.Single Mirror.Experimental.NetworkRigidbody/ClientSyncState::angularDrag
	float ___angularDrag_6;

public:
	inline static int32_t get_offset_of_nextSyncTime_0() { return static_cast<int32_t>(offsetof(ClientSyncState_t50ED202FBB0CD39C8A4B74A04AD03B1805A3F074, ___nextSyncTime_0)); }
	inline float get_nextSyncTime_0() const { return ___nextSyncTime_0; }
	inline float* get_address_of_nextSyncTime_0() { return &___nextSyncTime_0; }
	inline void set_nextSyncTime_0(float value)
	{
		___nextSyncTime_0 = value;
	}

	inline static int32_t get_offset_of_velocity_1() { return static_cast<int32_t>(offsetof(ClientSyncState_t50ED202FBB0CD39C8A4B74A04AD03B1805A3F074, ___velocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_1() const { return ___velocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_1() { return &___velocity_1; }
	inline void set_velocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_1 = value;
	}

	inline static int32_t get_offset_of_angularVelocity_2() { return static_cast<int32_t>(offsetof(ClientSyncState_t50ED202FBB0CD39C8A4B74A04AD03B1805A3F074, ___angularVelocity_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_angularVelocity_2() const { return ___angularVelocity_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_angularVelocity_2() { return &___angularVelocity_2; }
	inline void set_angularVelocity_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___angularVelocity_2 = value;
	}

	inline static int32_t get_offset_of_isKinematic_3() { return static_cast<int32_t>(offsetof(ClientSyncState_t50ED202FBB0CD39C8A4B74A04AD03B1805A3F074, ___isKinematic_3)); }
	inline bool get_isKinematic_3() const { return ___isKinematic_3; }
	inline bool* get_address_of_isKinematic_3() { return &___isKinematic_3; }
	inline void set_isKinematic_3(bool value)
	{
		___isKinematic_3 = value;
	}

	inline static int32_t get_offset_of_useGravity_4() { return static_cast<int32_t>(offsetof(ClientSyncState_t50ED202FBB0CD39C8A4B74A04AD03B1805A3F074, ___useGravity_4)); }
	inline bool get_useGravity_4() const { return ___useGravity_4; }
	inline bool* get_address_of_useGravity_4() { return &___useGravity_4; }
	inline void set_useGravity_4(bool value)
	{
		___useGravity_4 = value;
	}

	inline static int32_t get_offset_of_drag_5() { return static_cast<int32_t>(offsetof(ClientSyncState_t50ED202FBB0CD39C8A4B74A04AD03B1805A3F074, ___drag_5)); }
	inline float get_drag_5() const { return ___drag_5; }
	inline float* get_address_of_drag_5() { return &___drag_5; }
	inline void set_drag_5(float value)
	{
		___drag_5 = value;
	}

	inline static int32_t get_offset_of_angularDrag_6() { return static_cast<int32_t>(offsetof(ClientSyncState_t50ED202FBB0CD39C8A4B74A04AD03B1805A3F074, ___angularDrag_6)); }
	inline float get_angularDrag_6() const { return ___angularDrag_6; }
	inline float* get_address_of_angularDrag_6() { return &___angularDrag_6; }
	inline void set_angularDrag_6(float value)
	{
		___angularDrag_6 = value;
	}
};


// Mirror.Experimental.NetworkRigidbody2D/ClientSyncState
struct ClientSyncState_t70791A5CDE6140A304B89ED0FFEEDD03A3E9EA98  : public RuntimeObject
{
public:
	// System.Single Mirror.Experimental.NetworkRigidbody2D/ClientSyncState::nextSyncTime
	float ___nextSyncTime_0;
	// UnityEngine.Vector2 Mirror.Experimental.NetworkRigidbody2D/ClientSyncState::velocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___velocity_1;
	// System.Single Mirror.Experimental.NetworkRigidbody2D/ClientSyncState::angularVelocity
	float ___angularVelocity_2;
	// System.Boolean Mirror.Experimental.NetworkRigidbody2D/ClientSyncState::isKinematic
	bool ___isKinematic_3;
	// System.Single Mirror.Experimental.NetworkRigidbody2D/ClientSyncState::gravityScale
	float ___gravityScale_4;
	// System.Single Mirror.Experimental.NetworkRigidbody2D/ClientSyncState::drag
	float ___drag_5;
	// System.Single Mirror.Experimental.NetworkRigidbody2D/ClientSyncState::angularDrag
	float ___angularDrag_6;

public:
	inline static int32_t get_offset_of_nextSyncTime_0() { return static_cast<int32_t>(offsetof(ClientSyncState_t70791A5CDE6140A304B89ED0FFEEDD03A3E9EA98, ___nextSyncTime_0)); }
	inline float get_nextSyncTime_0() const { return ___nextSyncTime_0; }
	inline float* get_address_of_nextSyncTime_0() { return &___nextSyncTime_0; }
	inline void set_nextSyncTime_0(float value)
	{
		___nextSyncTime_0 = value;
	}

	inline static int32_t get_offset_of_velocity_1() { return static_cast<int32_t>(offsetof(ClientSyncState_t70791A5CDE6140A304B89ED0FFEEDD03A3E9EA98, ___velocity_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_velocity_1() const { return ___velocity_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_velocity_1() { return &___velocity_1; }
	inline void set_velocity_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___velocity_1 = value;
	}

	inline static int32_t get_offset_of_angularVelocity_2() { return static_cast<int32_t>(offsetof(ClientSyncState_t70791A5CDE6140A304B89ED0FFEEDD03A3E9EA98, ___angularVelocity_2)); }
	inline float get_angularVelocity_2() const { return ___angularVelocity_2; }
	inline float* get_address_of_angularVelocity_2() { return &___angularVelocity_2; }
	inline void set_angularVelocity_2(float value)
	{
		___angularVelocity_2 = value;
	}

	inline static int32_t get_offset_of_isKinematic_3() { return static_cast<int32_t>(offsetof(ClientSyncState_t70791A5CDE6140A304B89ED0FFEEDD03A3E9EA98, ___isKinematic_3)); }
	inline bool get_isKinematic_3() const { return ___isKinematic_3; }
	inline bool* get_address_of_isKinematic_3() { return &___isKinematic_3; }
	inline void set_isKinematic_3(bool value)
	{
		___isKinematic_3 = value;
	}

	inline static int32_t get_offset_of_gravityScale_4() { return static_cast<int32_t>(offsetof(ClientSyncState_t70791A5CDE6140A304B89ED0FFEEDD03A3E9EA98, ___gravityScale_4)); }
	inline float get_gravityScale_4() const { return ___gravityScale_4; }
	inline float* get_address_of_gravityScale_4() { return &___gravityScale_4; }
	inline void set_gravityScale_4(float value)
	{
		___gravityScale_4 = value;
	}

	inline static int32_t get_offset_of_drag_5() { return static_cast<int32_t>(offsetof(ClientSyncState_t70791A5CDE6140A304B89ED0FFEEDD03A3E9EA98, ___drag_5)); }
	inline float get_drag_5() const { return ___drag_5; }
	inline float* get_address_of_drag_5() { return &___drag_5; }
	inline void set_drag_5(float value)
	{
		___drag_5 = value;
	}

	inline static int32_t get_offset_of_angularDrag_6() { return static_cast<int32_t>(offsetof(ClientSyncState_t70791A5CDE6140A304B89ED0FFEEDD03A3E9EA98, ___angularDrag_6)); }
	inline float get_angularDrag_6() const { return ___angularDrag_6; }
	inline float* get_address_of_angularDrag_6() { return &___angularDrag_6; }
	inline void set_angularDrag_6(float value)
	{
		___angularDrag_6 = value;
	}
};


// Mirror.Experimental.NetworkTransformBase/DataPoint
struct DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 
{
public:
	// System.Single Mirror.Experimental.NetworkTransformBase/DataPoint::timeStamp
	float ___timeStamp_0;
	// UnityEngine.Vector3 Mirror.Experimental.NetworkTransformBase/DataPoint::localPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition_1;
	// UnityEngine.Quaternion Mirror.Experimental.NetworkTransformBase/DataPoint::localRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___localRotation_2;
	// UnityEngine.Vector3 Mirror.Experimental.NetworkTransformBase/DataPoint::localScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale_3;
	// System.Single Mirror.Experimental.NetworkTransformBase/DataPoint::movementSpeed
	float ___movementSpeed_4;

public:
	inline static int32_t get_offset_of_timeStamp_0() { return static_cast<int32_t>(offsetof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7, ___timeStamp_0)); }
	inline float get_timeStamp_0() const { return ___timeStamp_0; }
	inline float* get_address_of_timeStamp_0() { return &___timeStamp_0; }
	inline void set_timeStamp_0(float value)
	{
		___timeStamp_0 = value;
	}

	inline static int32_t get_offset_of_localPosition_1() { return static_cast<int32_t>(offsetof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7, ___localPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_localPosition_1() const { return ___localPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_localPosition_1() { return &___localPosition_1; }
	inline void set_localPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___localPosition_1 = value;
	}

	inline static int32_t get_offset_of_localRotation_2() { return static_cast<int32_t>(offsetof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7, ___localRotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_localRotation_2() const { return ___localRotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_localRotation_2() { return &___localRotation_2; }
	inline void set_localRotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___localRotation_2 = value;
	}

	inline static int32_t get_offset_of_localScale_3() { return static_cast<int32_t>(offsetof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7, ___localScale_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_localScale_3() const { return ___localScale_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_localScale_3() { return &___localScale_3; }
	inline void set_localScale_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___localScale_3 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_4() { return static_cast<int32_t>(offsetof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7, ___movementSpeed_4)); }
	inline float get_movementSpeed_4() const { return ___movementSpeed_4; }
	inline float* get_address_of_movementSpeed_4() { return &___movementSpeed_4; }
	inline void set_movementSpeed_4(float value)
	{
		___movementSpeed_4 = value;
	}
};


// Mirror.SpatialHashingInterestManagement/CheckMethod
struct CheckMethod_t6698F53126A5E7D171968189F856A4D2E73F8930 
{
public:
	// System.Int32 Mirror.SpatialHashingInterestManagement/CheckMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CheckMethod_t6698F53126A5E7D171968189F856A4D2E73F8930, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Mirror.RemoteCalls.CmdDelegate
struct CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Mirror.InterestManagement
struct InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Mirror.NetworkBehaviour
struct NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mirror.SyncMode Mirror.NetworkBehaviour::syncMode
	int32_t ___syncMode_4;
	// System.Single Mirror.NetworkBehaviour::syncInterval
	float ___syncInterval_5;
	// System.Double Mirror.NetworkBehaviour::lastSyncTime
	double ___lastSyncTime_6;
	// System.UInt64 Mirror.NetworkBehaviour::<syncVarDirtyBits>k__BackingField
	uint64_t ___U3CsyncVarDirtyBitsU3Ek__BackingField_7;
	// System.UInt64 Mirror.NetworkBehaviour::syncVarHookGuard
	uint64_t ___syncVarHookGuard_8;
	// System.Collections.Generic.List`1<Mirror.SyncObject> Mirror.NetworkBehaviour::syncObjects
	List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * ___syncObjects_9;
	// Mirror.NetworkIdentity Mirror.NetworkBehaviour::<netIdentity>k__BackingField
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___U3CnetIdentityU3Ek__BackingField_10;
	// System.Int32 Mirror.NetworkBehaviour::<ComponentIndex>k__BackingField
	int32_t ___U3CComponentIndexU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_syncMode_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncMode_4)); }
	inline int32_t get_syncMode_4() const { return ___syncMode_4; }
	inline int32_t* get_address_of_syncMode_4() { return &___syncMode_4; }
	inline void set_syncMode_4(int32_t value)
	{
		___syncMode_4 = value;
	}

	inline static int32_t get_offset_of_syncInterval_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncInterval_5)); }
	inline float get_syncInterval_5() const { return ___syncInterval_5; }
	inline float* get_address_of_syncInterval_5() { return &___syncInterval_5; }
	inline void set_syncInterval_5(float value)
	{
		___syncInterval_5 = value;
	}

	inline static int32_t get_offset_of_lastSyncTime_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___lastSyncTime_6)); }
	inline double get_lastSyncTime_6() const { return ___lastSyncTime_6; }
	inline double* get_address_of_lastSyncTime_6() { return &___lastSyncTime_6; }
	inline void set_lastSyncTime_6(double value)
	{
		___lastSyncTime_6 = value;
	}

	inline static int32_t get_offset_of_U3CsyncVarDirtyBitsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___U3CsyncVarDirtyBitsU3Ek__BackingField_7)); }
	inline uint64_t get_U3CsyncVarDirtyBitsU3Ek__BackingField_7() const { return ___U3CsyncVarDirtyBitsU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3CsyncVarDirtyBitsU3Ek__BackingField_7() { return &___U3CsyncVarDirtyBitsU3Ek__BackingField_7; }
	inline void set_U3CsyncVarDirtyBitsU3Ek__BackingField_7(uint64_t value)
	{
		___U3CsyncVarDirtyBitsU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_syncVarHookGuard_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncVarHookGuard_8)); }
	inline uint64_t get_syncVarHookGuard_8() const { return ___syncVarHookGuard_8; }
	inline uint64_t* get_address_of_syncVarHookGuard_8() { return &___syncVarHookGuard_8; }
	inline void set_syncVarHookGuard_8(uint64_t value)
	{
		___syncVarHookGuard_8 = value;
	}

	inline static int32_t get_offset_of_syncObjects_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncObjects_9)); }
	inline List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * get_syncObjects_9() const { return ___syncObjects_9; }
	inline List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 ** get_address_of_syncObjects_9() { return &___syncObjects_9; }
	inline void set_syncObjects_9(List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * value)
	{
		___syncObjects_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncObjects_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetIdentityU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___U3CnetIdentityU3Ek__BackingField_10)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_U3CnetIdentityU3Ek__BackingField_10() const { return ___U3CnetIdentityU3Ek__BackingField_10; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_U3CnetIdentityU3Ek__BackingField_10() { return &___U3CnetIdentityU3Ek__BackingField_10; }
	inline void set_U3CnetIdentityU3Ek__BackingField_10(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___U3CnetIdentityU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnetIdentityU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CComponentIndexU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___U3CComponentIndexU3Ek__BackingField_11)); }
	inline int32_t get_U3CComponentIndexU3Ek__BackingField_11() const { return ___U3CComponentIndexU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CComponentIndexU3Ek__BackingField_11() { return &___U3CComponentIndexU3Ek__BackingField_11; }
	inline void set_U3CComponentIndexU3Ek__BackingField_11(int32_t value)
	{
		___U3CComponentIndexU3Ek__BackingField_11 = value;
	}
};


// Mirror.NetworkIdentity
struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Mirror.NetworkIdentity::<isClient>k__BackingField
	bool ___U3CisClientU3Ek__BackingField_4;
	// System.Boolean Mirror.NetworkIdentity::<isServer>k__BackingField
	bool ___U3CisServerU3Ek__BackingField_5;
	// System.Boolean Mirror.NetworkIdentity::<isLocalPlayer>k__BackingField
	bool ___U3CisLocalPlayerU3Ek__BackingField_6;
	// System.Boolean Mirror.NetworkIdentity::<hasAuthority>k__BackingField
	bool ___U3ChasAuthorityU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection> Mirror.NetworkIdentity::observers
	Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 * ___observers_8;
	// System.UInt32 Mirror.NetworkIdentity::<netId>k__BackingField
	uint32_t ___U3CnetIdU3Ek__BackingField_9;
	// System.UInt64 Mirror.NetworkIdentity::sceneId
	uint64_t ___sceneId_10;
	// System.Boolean Mirror.NetworkIdentity::serverOnly
	bool ___serverOnly_11;
	// System.Boolean Mirror.NetworkIdentity::destroyCalled
	bool ___destroyCalled_12;
	// Mirror.NetworkConnection Mirror.NetworkIdentity::<connectionToServer>k__BackingField
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___U3CconnectionToServerU3Ek__BackingField_13;
	// Mirror.NetworkConnectionToClient Mirror.NetworkIdentity::_connectionToClient
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ____connectionToClient_14;
	// Mirror.NetworkBehaviour[] Mirror.NetworkIdentity::<NetworkBehaviours>k__BackingField
	NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* ___U3CNetworkBehavioursU3Ek__BackingField_16;
	// Mirror.NetworkVisibility Mirror.NetworkIdentity::<visibility>k__BackingField
	NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * ___U3CvisibilityU3Ek__BackingField_17;
	// Mirror.Visibility Mirror.NetworkIdentity::visible
	int32_t ___visible_18;
	// Mirror.NetworkIdentitySerialization Mirror.NetworkIdentity::lastSerialization
	NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9  ___lastSerialization_19;
	// System.String Mirror.NetworkIdentity::m_AssetId
	String_t* ___m_AssetId_20;
	// System.Boolean Mirror.NetworkIdentity::hasSpawned
	bool ___hasSpawned_24;
	// System.Boolean Mirror.NetworkIdentity::<SpawnedFromInstantiate>k__BackingField
	bool ___U3CSpawnedFromInstantiateU3Ek__BackingField_25;
	// System.Boolean Mirror.NetworkIdentity::clientStarted
	bool ___clientStarted_26;
	// System.Boolean Mirror.NetworkIdentity::hadAuthority
	bool ___hadAuthority_28;

public:
	inline static int32_t get_offset_of_U3CisClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CisClientU3Ek__BackingField_4)); }
	inline bool get_U3CisClientU3Ek__BackingField_4() const { return ___U3CisClientU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisClientU3Ek__BackingField_4() { return &___U3CisClientU3Ek__BackingField_4; }
	inline void set_U3CisClientU3Ek__BackingField_4(bool value)
	{
		___U3CisClientU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CisServerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CisServerU3Ek__BackingField_5)); }
	inline bool get_U3CisServerU3Ek__BackingField_5() const { return ___U3CisServerU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CisServerU3Ek__BackingField_5() { return &___U3CisServerU3Ek__BackingField_5; }
	inline void set_U3CisServerU3Ek__BackingField_5(bool value)
	{
		___U3CisServerU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CisLocalPlayerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CisLocalPlayerU3Ek__BackingField_6)); }
	inline bool get_U3CisLocalPlayerU3Ek__BackingField_6() const { return ___U3CisLocalPlayerU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisLocalPlayerU3Ek__BackingField_6() { return &___U3CisLocalPlayerU3Ek__BackingField_6; }
	inline void set_U3CisLocalPlayerU3Ek__BackingField_6(bool value)
	{
		___U3CisLocalPlayerU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3ChasAuthorityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3ChasAuthorityU3Ek__BackingField_7)); }
	inline bool get_U3ChasAuthorityU3Ek__BackingField_7() const { return ___U3ChasAuthorityU3Ek__BackingField_7; }
	inline bool* get_address_of_U3ChasAuthorityU3Ek__BackingField_7() { return &___U3ChasAuthorityU3Ek__BackingField_7; }
	inline void set_U3ChasAuthorityU3Ek__BackingField_7(bool value)
	{
		___U3ChasAuthorityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_observers_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___observers_8)); }
	inline Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 * get_observers_8() const { return ___observers_8; }
	inline Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 ** get_address_of_observers_8() { return &___observers_8; }
	inline void set_observers_8(Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 * value)
	{
		___observers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observers_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetIdU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CnetIdU3Ek__BackingField_9)); }
	inline uint32_t get_U3CnetIdU3Ek__BackingField_9() const { return ___U3CnetIdU3Ek__BackingField_9; }
	inline uint32_t* get_address_of_U3CnetIdU3Ek__BackingField_9() { return &___U3CnetIdU3Ek__BackingField_9; }
	inline void set_U3CnetIdU3Ek__BackingField_9(uint32_t value)
	{
		___U3CnetIdU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_sceneId_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___sceneId_10)); }
	inline uint64_t get_sceneId_10() const { return ___sceneId_10; }
	inline uint64_t* get_address_of_sceneId_10() { return &___sceneId_10; }
	inline void set_sceneId_10(uint64_t value)
	{
		___sceneId_10 = value;
	}

	inline static int32_t get_offset_of_serverOnly_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___serverOnly_11)); }
	inline bool get_serverOnly_11() const { return ___serverOnly_11; }
	inline bool* get_address_of_serverOnly_11() { return &___serverOnly_11; }
	inline void set_serverOnly_11(bool value)
	{
		___serverOnly_11 = value;
	}

	inline static int32_t get_offset_of_destroyCalled_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___destroyCalled_12)); }
	inline bool get_destroyCalled_12() const { return ___destroyCalled_12; }
	inline bool* get_address_of_destroyCalled_12() { return &___destroyCalled_12; }
	inline void set_destroyCalled_12(bool value)
	{
		___destroyCalled_12 = value;
	}

	inline static int32_t get_offset_of_U3CconnectionToServerU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CconnectionToServerU3Ek__BackingField_13)); }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * get_U3CconnectionToServerU3Ek__BackingField_13() const { return ___U3CconnectionToServerU3Ek__BackingField_13; }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 ** get_address_of_U3CconnectionToServerU3Ek__BackingField_13() { return &___U3CconnectionToServerU3Ek__BackingField_13; }
	inline void set_U3CconnectionToServerU3Ek__BackingField_13(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * value)
	{
		___U3CconnectionToServerU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnectionToServerU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of__connectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ____connectionToClient_14)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get__connectionToClient_14() const { return ____connectionToClient_14; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of__connectionToClient_14() { return &____connectionToClient_14; }
	inline void set__connectionToClient_14(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		____connectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionToClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkBehavioursU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CNetworkBehavioursU3Ek__BackingField_16)); }
	inline NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* get_U3CNetworkBehavioursU3Ek__BackingField_16() const { return ___U3CNetworkBehavioursU3Ek__BackingField_16; }
	inline NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC** get_address_of_U3CNetworkBehavioursU3Ek__BackingField_16() { return &___U3CNetworkBehavioursU3Ek__BackingField_16; }
	inline void set_U3CNetworkBehavioursU3Ek__BackingField_16(NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* value)
	{
		___U3CNetworkBehavioursU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkBehavioursU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvisibilityU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CvisibilityU3Ek__BackingField_17)); }
	inline NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * get_U3CvisibilityU3Ek__BackingField_17() const { return ___U3CvisibilityU3Ek__BackingField_17; }
	inline NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 ** get_address_of_U3CvisibilityU3Ek__BackingField_17() { return &___U3CvisibilityU3Ek__BackingField_17; }
	inline void set_U3CvisibilityU3Ek__BackingField_17(NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * value)
	{
		___U3CvisibilityU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvisibilityU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_visible_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___visible_18)); }
	inline int32_t get_visible_18() const { return ___visible_18; }
	inline int32_t* get_address_of_visible_18() { return &___visible_18; }
	inline void set_visible_18(int32_t value)
	{
		___visible_18 = value;
	}

	inline static int32_t get_offset_of_lastSerialization_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___lastSerialization_19)); }
	inline NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9  get_lastSerialization_19() const { return ___lastSerialization_19; }
	inline NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9 * get_address_of_lastSerialization_19() { return &___lastSerialization_19; }
	inline void set_lastSerialization_19(NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9  value)
	{
		___lastSerialization_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lastSerialization_19))->___ownerWriter_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___lastSerialization_19))->___observersWriter_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AssetId_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___m_AssetId_20)); }
	inline String_t* get_m_AssetId_20() const { return ___m_AssetId_20; }
	inline String_t** get_address_of_m_AssetId_20() { return &___m_AssetId_20; }
	inline void set_m_AssetId_20(String_t* value)
	{
		___m_AssetId_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AssetId_20), (void*)value);
	}

	inline static int32_t get_offset_of_hasSpawned_24() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___hasSpawned_24)); }
	inline bool get_hasSpawned_24() const { return ___hasSpawned_24; }
	inline bool* get_address_of_hasSpawned_24() { return &___hasSpawned_24; }
	inline void set_hasSpawned_24(bool value)
	{
		___hasSpawned_24 = value;
	}

	inline static int32_t get_offset_of_U3CSpawnedFromInstantiateU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CSpawnedFromInstantiateU3Ek__BackingField_25)); }
	inline bool get_U3CSpawnedFromInstantiateU3Ek__BackingField_25() const { return ___U3CSpawnedFromInstantiateU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CSpawnedFromInstantiateU3Ek__BackingField_25() { return &___U3CSpawnedFromInstantiateU3Ek__BackingField_25; }
	inline void set_U3CSpawnedFromInstantiateU3Ek__BackingField_25(bool value)
	{
		___U3CSpawnedFromInstantiateU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_clientStarted_26() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___clientStarted_26)); }
	inline bool get_clientStarted_26() const { return ___clientStarted_26; }
	inline bool* get_address_of_clientStarted_26() { return &___clientStarted_26; }
	inline void set_clientStarted_26(bool value)
	{
		___clientStarted_26 = value;
	}

	inline static int32_t get_offset_of_hadAuthority_28() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___hadAuthority_28)); }
	inline bool get_hadAuthority_28() const { return ___hadAuthority_28; }
	inline bool* get_address_of_hadAuthority_28() { return &___hadAuthority_28; }
	inline void set_hadAuthority_28(bool value)
	{
		___hadAuthority_28 = value;
	}
};

struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity> Mirror.NetworkIdentity::spawned
	Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * ___spawned_15;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity> Mirror.NetworkIdentity::sceneIds
	Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * ___sceneIds_21;
	// System.UInt32 Mirror.NetworkIdentity::nextNetworkId
	uint32_t ___nextNetworkId_22;
	// Mirror.NetworkIdentity/ClientAuthorityCallback Mirror.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * ___clientAuthorityCallback_23;
	// Mirror.NetworkIdentity Mirror.NetworkIdentity::previousLocalPlayer
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___previousLocalPlayer_27;

public:
	inline static int32_t get_offset_of_spawned_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___spawned_15)); }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * get_spawned_15() const { return ___spawned_15; }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 ** get_address_of_spawned_15() { return &___spawned_15; }
	inline void set_spawned_15(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * value)
	{
		___spawned_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawned_15), (void*)value);
	}

	inline static int32_t get_offset_of_sceneIds_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___sceneIds_21)); }
	inline Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * get_sceneIds_21() const { return ___sceneIds_21; }
	inline Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C ** get_address_of_sceneIds_21() { return &___sceneIds_21; }
	inline void set_sceneIds_21(Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * value)
	{
		___sceneIds_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneIds_21), (void*)value);
	}

	inline static int32_t get_offset_of_nextNetworkId_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___nextNetworkId_22)); }
	inline uint32_t get_nextNetworkId_22() const { return ___nextNetworkId_22; }
	inline uint32_t* get_address_of_nextNetworkId_22() { return &___nextNetworkId_22; }
	inline void set_nextNetworkId_22(uint32_t value)
	{
		___nextNetworkId_22 = value;
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___clientAuthorityCallback_23)); }
	inline ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * get_clientAuthorityCallback_23() const { return ___clientAuthorityCallback_23; }
	inline ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 ** get_address_of_clientAuthorityCallback_23() { return &___clientAuthorityCallback_23; }
	inline void set_clientAuthorityCallback_23(ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * value)
	{
		___clientAuthorityCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_previousLocalPlayer_27() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___previousLocalPlayer_27)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_previousLocalPlayer_27() const { return ___previousLocalPlayer_27; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_previousLocalPlayer_27() { return &___previousLocalPlayer_27; }
	inline void set_previousLocalPlayer_27(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___previousLocalPlayer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousLocalPlayer_27), (void*)value);
	}
};


// Mirror.NetworkRoomPlayer
struct NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// System.Boolean Mirror.NetworkRoomPlayer::showRoomGUI
	bool ___showRoomGUI_12;
	// System.Boolean Mirror.NetworkRoomPlayer::readyToBegin
	bool ___readyToBegin_13;
	// System.Int32 Mirror.NetworkRoomPlayer::index
	int32_t ___index_14;

public:
	inline static int32_t get_offset_of_showRoomGUI_12() { return static_cast<int32_t>(offsetof(NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F, ___showRoomGUI_12)); }
	inline bool get_showRoomGUI_12() const { return ___showRoomGUI_12; }
	inline bool* get_address_of_showRoomGUI_12() { return &___showRoomGUI_12; }
	inline void set_showRoomGUI_12(bool value)
	{
		___showRoomGUI_12 = value;
	}

	inline static int32_t get_offset_of_readyToBegin_13() { return static_cast<int32_t>(offsetof(NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F, ___readyToBegin_13)); }
	inline bool get_readyToBegin_13() const { return ___readyToBegin_13; }
	inline bool* get_address_of_readyToBegin_13() { return &___readyToBegin_13; }
	inline void set_readyToBegin_13(bool value)
	{
		___readyToBegin_13 = value;
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}
};


// Mirror.NetworkTransformBase
struct NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// System.Boolean Mirror.NetworkTransformBase::clientAuthority
	bool ___clientAuthority_12;
	// System.Single Mirror.NetworkTransformBase::sendInterval
	float ___sendInterval_13;
	// System.Boolean Mirror.NetworkTransformBase::syncPosition
	bool ___syncPosition_14;
	// System.Boolean Mirror.NetworkTransformBase::syncRotation
	bool ___syncRotation_15;
	// System.Boolean Mirror.NetworkTransformBase::syncScale
	bool ___syncScale_16;
	// System.Double Mirror.NetworkTransformBase::lastClientSendTime
	double ___lastClientSendTime_17;
	// System.Double Mirror.NetworkTransformBase::lastServerSendTime
	double ___lastServerSendTime_18;
	// System.Boolean Mirror.NetworkTransformBase::interpolatePosition
	bool ___interpolatePosition_19;
	// System.Boolean Mirror.NetworkTransformBase::interpolateRotation
	bool ___interpolateRotation_20;
	// System.Boolean Mirror.NetworkTransformBase::interpolateScale
	bool ___interpolateScale_21;
	// System.Int32 Mirror.NetworkTransformBase::bufferTimeMultiplier
	int32_t ___bufferTimeMultiplier_22;
	// System.Int32 Mirror.NetworkTransformBase::bufferSizeLimit
	int32_t ___bufferSizeLimit_23;
	// System.Int32 Mirror.NetworkTransformBase::catchupThreshold
	int32_t ___catchupThreshold_24;
	// System.Single Mirror.NetworkTransformBase::catchupMultiplier
	float ___catchupMultiplier_25;
	// System.Collections.Generic.SortedList`2<System.Double,Mirror.NTSnapshot> Mirror.NetworkTransformBase::serverBuffer
	SortedList_2_tBB9B8578C2938E0CFC5C1174DAA5F0164DE42AAD * ___serverBuffer_26;
	// System.Collections.Generic.SortedList`2<System.Double,Mirror.NTSnapshot> Mirror.NetworkTransformBase::clientBuffer
	SortedList_2_tBB9B8578C2938E0CFC5C1174DAA5F0164DE42AAD * ___clientBuffer_27;
	// System.Double Mirror.NetworkTransformBase::serverInterpolationTime
	double ___serverInterpolationTime_28;
	// System.Double Mirror.NetworkTransformBase::clientInterpolationTime
	double ___clientInterpolationTime_29;
	// System.Func`4<Mirror.NTSnapshot,Mirror.NTSnapshot,System.Double,Mirror.NTSnapshot> Mirror.NetworkTransformBase::Interpolate
	Func_4_t3DFD0601A7C3AC6620F52DAC1189370DCDF0289E * ___Interpolate_30;
	// System.Boolean Mirror.NetworkTransformBase::showGizmos
	bool ___showGizmos_31;
	// System.Boolean Mirror.NetworkTransformBase::showOverlay
	bool ___showOverlay_32;
	// UnityEngine.Color Mirror.NetworkTransformBase::overlayColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___overlayColor_33;

public:
	inline static int32_t get_offset_of_clientAuthority_12() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___clientAuthority_12)); }
	inline bool get_clientAuthority_12() const { return ___clientAuthority_12; }
	inline bool* get_address_of_clientAuthority_12() { return &___clientAuthority_12; }
	inline void set_clientAuthority_12(bool value)
	{
		___clientAuthority_12 = value;
	}

	inline static int32_t get_offset_of_sendInterval_13() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___sendInterval_13)); }
	inline float get_sendInterval_13() const { return ___sendInterval_13; }
	inline float* get_address_of_sendInterval_13() { return &___sendInterval_13; }
	inline void set_sendInterval_13(float value)
	{
		___sendInterval_13 = value;
	}

	inline static int32_t get_offset_of_syncPosition_14() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___syncPosition_14)); }
	inline bool get_syncPosition_14() const { return ___syncPosition_14; }
	inline bool* get_address_of_syncPosition_14() { return &___syncPosition_14; }
	inline void set_syncPosition_14(bool value)
	{
		___syncPosition_14 = value;
	}

	inline static int32_t get_offset_of_syncRotation_15() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___syncRotation_15)); }
	inline bool get_syncRotation_15() const { return ___syncRotation_15; }
	inline bool* get_address_of_syncRotation_15() { return &___syncRotation_15; }
	inline void set_syncRotation_15(bool value)
	{
		___syncRotation_15 = value;
	}

	inline static int32_t get_offset_of_syncScale_16() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___syncScale_16)); }
	inline bool get_syncScale_16() const { return ___syncScale_16; }
	inline bool* get_address_of_syncScale_16() { return &___syncScale_16; }
	inline void set_syncScale_16(bool value)
	{
		___syncScale_16 = value;
	}

	inline static int32_t get_offset_of_lastClientSendTime_17() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___lastClientSendTime_17)); }
	inline double get_lastClientSendTime_17() const { return ___lastClientSendTime_17; }
	inline double* get_address_of_lastClientSendTime_17() { return &___lastClientSendTime_17; }
	inline void set_lastClientSendTime_17(double value)
	{
		___lastClientSendTime_17 = value;
	}

	inline static int32_t get_offset_of_lastServerSendTime_18() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___lastServerSendTime_18)); }
	inline double get_lastServerSendTime_18() const { return ___lastServerSendTime_18; }
	inline double* get_address_of_lastServerSendTime_18() { return &___lastServerSendTime_18; }
	inline void set_lastServerSendTime_18(double value)
	{
		___lastServerSendTime_18 = value;
	}

	inline static int32_t get_offset_of_interpolatePosition_19() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___interpolatePosition_19)); }
	inline bool get_interpolatePosition_19() const { return ___interpolatePosition_19; }
	inline bool* get_address_of_interpolatePosition_19() { return &___interpolatePosition_19; }
	inline void set_interpolatePosition_19(bool value)
	{
		___interpolatePosition_19 = value;
	}

	inline static int32_t get_offset_of_interpolateRotation_20() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___interpolateRotation_20)); }
	inline bool get_interpolateRotation_20() const { return ___interpolateRotation_20; }
	inline bool* get_address_of_interpolateRotation_20() { return &___interpolateRotation_20; }
	inline void set_interpolateRotation_20(bool value)
	{
		___interpolateRotation_20 = value;
	}

	inline static int32_t get_offset_of_interpolateScale_21() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___interpolateScale_21)); }
	inline bool get_interpolateScale_21() const { return ___interpolateScale_21; }
	inline bool* get_address_of_interpolateScale_21() { return &___interpolateScale_21; }
	inline void set_interpolateScale_21(bool value)
	{
		___interpolateScale_21 = value;
	}

	inline static int32_t get_offset_of_bufferTimeMultiplier_22() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___bufferTimeMultiplier_22)); }
	inline int32_t get_bufferTimeMultiplier_22() const { return ___bufferTimeMultiplier_22; }
	inline int32_t* get_address_of_bufferTimeMultiplier_22() { return &___bufferTimeMultiplier_22; }
	inline void set_bufferTimeMultiplier_22(int32_t value)
	{
		___bufferTimeMultiplier_22 = value;
	}

	inline static int32_t get_offset_of_bufferSizeLimit_23() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___bufferSizeLimit_23)); }
	inline int32_t get_bufferSizeLimit_23() const { return ___bufferSizeLimit_23; }
	inline int32_t* get_address_of_bufferSizeLimit_23() { return &___bufferSizeLimit_23; }
	inline void set_bufferSizeLimit_23(int32_t value)
	{
		___bufferSizeLimit_23 = value;
	}

	inline static int32_t get_offset_of_catchupThreshold_24() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___catchupThreshold_24)); }
	inline int32_t get_catchupThreshold_24() const { return ___catchupThreshold_24; }
	inline int32_t* get_address_of_catchupThreshold_24() { return &___catchupThreshold_24; }
	inline void set_catchupThreshold_24(int32_t value)
	{
		___catchupThreshold_24 = value;
	}

	inline static int32_t get_offset_of_catchupMultiplier_25() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___catchupMultiplier_25)); }
	inline float get_catchupMultiplier_25() const { return ___catchupMultiplier_25; }
	inline float* get_address_of_catchupMultiplier_25() { return &___catchupMultiplier_25; }
	inline void set_catchupMultiplier_25(float value)
	{
		___catchupMultiplier_25 = value;
	}

	inline static int32_t get_offset_of_serverBuffer_26() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___serverBuffer_26)); }
	inline SortedList_2_tBB9B8578C2938E0CFC5C1174DAA5F0164DE42AAD * get_serverBuffer_26() const { return ___serverBuffer_26; }
	inline SortedList_2_tBB9B8578C2938E0CFC5C1174DAA5F0164DE42AAD ** get_address_of_serverBuffer_26() { return &___serverBuffer_26; }
	inline void set_serverBuffer_26(SortedList_2_tBB9B8578C2938E0CFC5C1174DAA5F0164DE42AAD * value)
	{
		___serverBuffer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverBuffer_26), (void*)value);
	}

	inline static int32_t get_offset_of_clientBuffer_27() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___clientBuffer_27)); }
	inline SortedList_2_tBB9B8578C2938E0CFC5C1174DAA5F0164DE42AAD * get_clientBuffer_27() const { return ___clientBuffer_27; }
	inline SortedList_2_tBB9B8578C2938E0CFC5C1174DAA5F0164DE42AAD ** get_address_of_clientBuffer_27() { return &___clientBuffer_27; }
	inline void set_clientBuffer_27(SortedList_2_tBB9B8578C2938E0CFC5C1174DAA5F0164DE42AAD * value)
	{
		___clientBuffer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientBuffer_27), (void*)value);
	}

	inline static int32_t get_offset_of_serverInterpolationTime_28() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___serverInterpolationTime_28)); }
	inline double get_serverInterpolationTime_28() const { return ___serverInterpolationTime_28; }
	inline double* get_address_of_serverInterpolationTime_28() { return &___serverInterpolationTime_28; }
	inline void set_serverInterpolationTime_28(double value)
	{
		___serverInterpolationTime_28 = value;
	}

	inline static int32_t get_offset_of_clientInterpolationTime_29() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___clientInterpolationTime_29)); }
	inline double get_clientInterpolationTime_29() const { return ___clientInterpolationTime_29; }
	inline double* get_address_of_clientInterpolationTime_29() { return &___clientInterpolationTime_29; }
	inline void set_clientInterpolationTime_29(double value)
	{
		___clientInterpolationTime_29 = value;
	}

	inline static int32_t get_offset_of_Interpolate_30() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___Interpolate_30)); }
	inline Func_4_t3DFD0601A7C3AC6620F52DAC1189370DCDF0289E * get_Interpolate_30() const { return ___Interpolate_30; }
	inline Func_4_t3DFD0601A7C3AC6620F52DAC1189370DCDF0289E ** get_address_of_Interpolate_30() { return &___Interpolate_30; }
	inline void set_Interpolate_30(Func_4_t3DFD0601A7C3AC6620F52DAC1189370DCDF0289E * value)
	{
		___Interpolate_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Interpolate_30), (void*)value);
	}

	inline static int32_t get_offset_of_showGizmos_31() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___showGizmos_31)); }
	inline bool get_showGizmos_31() const { return ___showGizmos_31; }
	inline bool* get_address_of_showGizmos_31() { return &___showGizmos_31; }
	inline void set_showGizmos_31(bool value)
	{
		___showGizmos_31 = value;
	}

	inline static int32_t get_offset_of_showOverlay_32() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___showOverlay_32)); }
	inline bool get_showOverlay_32() const { return ___showOverlay_32; }
	inline bool* get_address_of_showOverlay_32() { return &___showOverlay_32; }
	inline void set_showOverlay_32(bool value)
	{
		___showOverlay_32 = value;
	}

	inline static int32_t get_offset_of_overlayColor_33() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F, ___overlayColor_33)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_overlayColor_33() const { return ___overlayColor_33; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_overlayColor_33() { return &___overlayColor_33; }
	inline void set_overlayColor_33(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___overlayColor_33 = value;
	}
};


// Mirror.Experimental.NetworkTransformBase
struct NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// System.Boolean Mirror.Experimental.NetworkTransformBase::clientAuthority
	bool ___clientAuthority_12;
	// System.Boolean Mirror.Experimental.NetworkTransformBase::excludeOwnerUpdate
	bool ___excludeOwnerUpdate_13;
	// System.Boolean Mirror.Experimental.NetworkTransformBase::syncPosition
	bool ___syncPosition_14;
	// System.Boolean Mirror.Experimental.NetworkTransformBase::syncRotation
	bool ___syncRotation_15;
	// System.Boolean Mirror.Experimental.NetworkTransformBase::syncScale
	bool ___syncScale_16;
	// System.Boolean Mirror.Experimental.NetworkTransformBase::interpolatePosition
	bool ___interpolatePosition_17;
	// System.Boolean Mirror.Experimental.NetworkTransformBase::interpolateRotation
	bool ___interpolateRotation_18;
	// System.Boolean Mirror.Experimental.NetworkTransformBase::interpolateScale
	bool ___interpolateScale_19;
	// System.Single Mirror.Experimental.NetworkTransformBase::localPositionSensitivity
	float ___localPositionSensitivity_20;
	// System.Single Mirror.Experimental.NetworkTransformBase::localRotationSensitivity
	float ___localRotationSensitivity_21;
	// System.Single Mirror.Experimental.NetworkTransformBase::localScaleSensitivity
	float ___localScaleSensitivity_22;
	// UnityEngine.Vector3 Mirror.Experimental.NetworkTransformBase::lastPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastPosition_23;
	// UnityEngine.Quaternion Mirror.Experimental.NetworkTransformBase::lastRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lastRotation_24;
	// UnityEngine.Vector3 Mirror.Experimental.NetworkTransformBase::lastScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastScale_25;
	// Mirror.Experimental.NetworkTransformBase/DataPoint Mirror.Experimental.NetworkTransformBase::start
	DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___start_26;
	// Mirror.Experimental.NetworkTransformBase/DataPoint Mirror.Experimental.NetworkTransformBase::goal
	DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___goal_27;
	// System.Boolean Mirror.Experimental.NetworkTransformBase::clientAuthorityBeforeTeleport
	bool ___clientAuthorityBeforeTeleport_28;

public:
	inline static int32_t get_offset_of_clientAuthority_12() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___clientAuthority_12)); }
	inline bool get_clientAuthority_12() const { return ___clientAuthority_12; }
	inline bool* get_address_of_clientAuthority_12() { return &___clientAuthority_12; }
	inline void set_clientAuthority_12(bool value)
	{
		___clientAuthority_12 = value;
	}

	inline static int32_t get_offset_of_excludeOwnerUpdate_13() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___excludeOwnerUpdate_13)); }
	inline bool get_excludeOwnerUpdate_13() const { return ___excludeOwnerUpdate_13; }
	inline bool* get_address_of_excludeOwnerUpdate_13() { return &___excludeOwnerUpdate_13; }
	inline void set_excludeOwnerUpdate_13(bool value)
	{
		___excludeOwnerUpdate_13 = value;
	}

	inline static int32_t get_offset_of_syncPosition_14() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___syncPosition_14)); }
	inline bool get_syncPosition_14() const { return ___syncPosition_14; }
	inline bool* get_address_of_syncPosition_14() { return &___syncPosition_14; }
	inline void set_syncPosition_14(bool value)
	{
		___syncPosition_14 = value;
	}

	inline static int32_t get_offset_of_syncRotation_15() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___syncRotation_15)); }
	inline bool get_syncRotation_15() const { return ___syncRotation_15; }
	inline bool* get_address_of_syncRotation_15() { return &___syncRotation_15; }
	inline void set_syncRotation_15(bool value)
	{
		___syncRotation_15 = value;
	}

	inline static int32_t get_offset_of_syncScale_16() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___syncScale_16)); }
	inline bool get_syncScale_16() const { return ___syncScale_16; }
	inline bool* get_address_of_syncScale_16() { return &___syncScale_16; }
	inline void set_syncScale_16(bool value)
	{
		___syncScale_16 = value;
	}

	inline static int32_t get_offset_of_interpolatePosition_17() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___interpolatePosition_17)); }
	inline bool get_interpolatePosition_17() const { return ___interpolatePosition_17; }
	inline bool* get_address_of_interpolatePosition_17() { return &___interpolatePosition_17; }
	inline void set_interpolatePosition_17(bool value)
	{
		___interpolatePosition_17 = value;
	}

	inline static int32_t get_offset_of_interpolateRotation_18() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___interpolateRotation_18)); }
	inline bool get_interpolateRotation_18() const { return ___interpolateRotation_18; }
	inline bool* get_address_of_interpolateRotation_18() { return &___interpolateRotation_18; }
	inline void set_interpolateRotation_18(bool value)
	{
		___interpolateRotation_18 = value;
	}

	inline static int32_t get_offset_of_interpolateScale_19() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___interpolateScale_19)); }
	inline bool get_interpolateScale_19() const { return ___interpolateScale_19; }
	inline bool* get_address_of_interpolateScale_19() { return &___interpolateScale_19; }
	inline void set_interpolateScale_19(bool value)
	{
		___interpolateScale_19 = value;
	}

	inline static int32_t get_offset_of_localPositionSensitivity_20() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___localPositionSensitivity_20)); }
	inline float get_localPositionSensitivity_20() const { return ___localPositionSensitivity_20; }
	inline float* get_address_of_localPositionSensitivity_20() { return &___localPositionSensitivity_20; }
	inline void set_localPositionSensitivity_20(float value)
	{
		___localPositionSensitivity_20 = value;
	}

	inline static int32_t get_offset_of_localRotationSensitivity_21() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___localRotationSensitivity_21)); }
	inline float get_localRotationSensitivity_21() const { return ___localRotationSensitivity_21; }
	inline float* get_address_of_localRotationSensitivity_21() { return &___localRotationSensitivity_21; }
	inline void set_localRotationSensitivity_21(float value)
	{
		___localRotationSensitivity_21 = value;
	}

	inline static int32_t get_offset_of_localScaleSensitivity_22() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___localScaleSensitivity_22)); }
	inline float get_localScaleSensitivity_22() const { return ___localScaleSensitivity_22; }
	inline float* get_address_of_localScaleSensitivity_22() { return &___localScaleSensitivity_22; }
	inline void set_localScaleSensitivity_22(float value)
	{
		___localScaleSensitivity_22 = value;
	}

	inline static int32_t get_offset_of_lastPosition_23() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___lastPosition_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastPosition_23() const { return ___lastPosition_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastPosition_23() { return &___lastPosition_23; }
	inline void set_lastPosition_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastPosition_23 = value;
	}

	inline static int32_t get_offset_of_lastRotation_24() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___lastRotation_24)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_lastRotation_24() const { return ___lastRotation_24; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_lastRotation_24() { return &___lastRotation_24; }
	inline void set_lastRotation_24(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___lastRotation_24 = value;
	}

	inline static int32_t get_offset_of_lastScale_25() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___lastScale_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastScale_25() const { return ___lastScale_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastScale_25() { return &___lastScale_25; }
	inline void set_lastScale_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastScale_25 = value;
	}

	inline static int32_t get_offset_of_start_26() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___start_26)); }
	inline DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  get_start_26() const { return ___start_26; }
	inline DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * get_address_of_start_26() { return &___start_26; }
	inline void set_start_26(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  value)
	{
		___start_26 = value;
	}

	inline static int32_t get_offset_of_goal_27() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___goal_27)); }
	inline DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  get_goal_27() const { return ___goal_27; }
	inline DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * get_address_of_goal_27() { return &___goal_27; }
	inline void set_goal_27(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  value)
	{
		___goal_27 = value;
	}

	inline static int32_t get_offset_of_clientAuthorityBeforeTeleport_28() { return static_cast<int32_t>(offsetof(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555, ___clientAuthorityBeforeTeleport_28)); }
	inline bool get_clientAuthorityBeforeTeleport_28() const { return ___clientAuthorityBeforeTeleport_28; }
	inline bool* get_address_of_clientAuthorityBeforeTeleport_28() { return &___clientAuthorityBeforeTeleport_28; }
	inline void set_clientAuthorityBeforeTeleport_28(bool value)
	{
		___clientAuthorityBeforeTeleport_28 = value;
	}
};


// Mirror.SceneInterestManagement
struct SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E  : public InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>> Mirror.SceneInterestManagement::sceneObjects
	Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * ___sceneObjects_4;
	// System.Collections.Generic.Dictionary`2<Mirror.NetworkIdentity,UnityEngine.SceneManagement.Scene> Mirror.SceneInterestManagement::lastObjectScene
	Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * ___lastObjectScene_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene> Mirror.SceneInterestManagement::dirtyScenes
	HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * ___dirtyScenes_6;

public:
	inline static int32_t get_offset_of_sceneObjects_4() { return static_cast<int32_t>(offsetof(SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E, ___sceneObjects_4)); }
	inline Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * get_sceneObjects_4() const { return ___sceneObjects_4; }
	inline Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 ** get_address_of_sceneObjects_4() { return &___sceneObjects_4; }
	inline void set_sceneObjects_4(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * value)
	{
		___sceneObjects_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneObjects_4), (void*)value);
	}

	inline static int32_t get_offset_of_lastObjectScene_5() { return static_cast<int32_t>(offsetof(SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E, ___lastObjectScene_5)); }
	inline Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * get_lastObjectScene_5() const { return ___lastObjectScene_5; }
	inline Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 ** get_address_of_lastObjectScene_5() { return &___lastObjectScene_5; }
	inline void set_lastObjectScene_5(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * value)
	{
		___lastObjectScene_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastObjectScene_5), (void*)value);
	}

	inline static int32_t get_offset_of_dirtyScenes_6() { return static_cast<int32_t>(offsetof(SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E, ___dirtyScenes_6)); }
	inline HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * get_dirtyScenes_6() const { return ___dirtyScenes_6; }
	inline HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 ** get_address_of_dirtyScenes_6() { return &___dirtyScenes_6; }
	inline void set_dirtyScenes_6(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * value)
	{
		___dirtyScenes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dirtyScenes_6), (void*)value);
	}
};


// Mirror.SpatialHashingInterestManagement
struct SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912  : public InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7
{
public:
	// System.Int32 Mirror.SpatialHashingInterestManagement::visRange
	int32_t ___visRange_4;
	// System.Single Mirror.SpatialHashingInterestManagement::rebuildInterval
	float ___rebuildInterval_5;
	// System.Double Mirror.SpatialHashingInterestManagement::lastRebuildTime
	double ___lastRebuildTime_6;
	// Mirror.SpatialHashingInterestManagement/CheckMethod Mirror.SpatialHashingInterestManagement::checkMethod
	int32_t ___checkMethod_7;
	// System.Boolean Mirror.SpatialHashingInterestManagement::showSlider
	bool ___showSlider_8;
	// Mirror.Grid2D`1<Mirror.NetworkConnection> Mirror.SpatialHashingInterestManagement::grid
	Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * ___grid_9;

public:
	inline static int32_t get_offset_of_visRange_4() { return static_cast<int32_t>(offsetof(SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912, ___visRange_4)); }
	inline int32_t get_visRange_4() const { return ___visRange_4; }
	inline int32_t* get_address_of_visRange_4() { return &___visRange_4; }
	inline void set_visRange_4(int32_t value)
	{
		___visRange_4 = value;
	}

	inline static int32_t get_offset_of_rebuildInterval_5() { return static_cast<int32_t>(offsetof(SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912, ___rebuildInterval_5)); }
	inline float get_rebuildInterval_5() const { return ___rebuildInterval_5; }
	inline float* get_address_of_rebuildInterval_5() { return &___rebuildInterval_5; }
	inline void set_rebuildInterval_5(float value)
	{
		___rebuildInterval_5 = value;
	}

	inline static int32_t get_offset_of_lastRebuildTime_6() { return static_cast<int32_t>(offsetof(SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912, ___lastRebuildTime_6)); }
	inline double get_lastRebuildTime_6() const { return ___lastRebuildTime_6; }
	inline double* get_address_of_lastRebuildTime_6() { return &___lastRebuildTime_6; }
	inline void set_lastRebuildTime_6(double value)
	{
		___lastRebuildTime_6 = value;
	}

	inline static int32_t get_offset_of_checkMethod_7() { return static_cast<int32_t>(offsetof(SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912, ___checkMethod_7)); }
	inline int32_t get_checkMethod_7() const { return ___checkMethod_7; }
	inline int32_t* get_address_of_checkMethod_7() { return &___checkMethod_7; }
	inline void set_checkMethod_7(int32_t value)
	{
		___checkMethod_7 = value;
	}

	inline static int32_t get_offset_of_showSlider_8() { return static_cast<int32_t>(offsetof(SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912, ___showSlider_8)); }
	inline bool get_showSlider_8() const { return ___showSlider_8; }
	inline bool* get_address_of_showSlider_8() { return &___showSlider_8; }
	inline void set_showSlider_8(bool value)
	{
		___showSlider_8 = value;
	}

	inline static int32_t get_offset_of_grid_9() { return static_cast<int32_t>(offsetof(SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912, ___grid_9)); }
	inline Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * get_grid_9() const { return ___grid_9; }
	inline Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A ** get_address_of_grid_9() { return &___grid_9; }
	inline void set_grid_9(Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * value)
	{
		___grid_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_9), (void*)value);
	}
};


// Mirror.NetworkTransformChild
struct NetworkTransformChild_t5BCF31DB1CF06B9E4A05637871E288D51765466E  : public NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F
{
public:
	// UnityEngine.Transform Mirror.NetworkTransformChild::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_34;

public:
	inline static int32_t get_offset_of_target_34() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t5BCF31DB1CF06B9E4A05637871E288D51765466E, ___target_34)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_34() const { return ___target_34; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_34() { return &___target_34; }
	inline void set_target_34(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_34), (void*)value);
	}
};


// Mirror.Experimental.NetworkTransformChild
struct NetworkTransformChild_t00AFAFB0CC0AF80437BC4B989B85FC80BAE83379  : public NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555
{
public:
	// UnityEngine.Transform Mirror.Experimental.NetworkTransformChild::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_29;

public:
	inline static int32_t get_offset_of_target_29() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t00AFAFB0CC0AF80437BC4B989B85FC80BAE83379, ___target_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_29() const { return ___target_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_29() { return &___target_29; }
	inline void set_target_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_29), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean Mirror.NetworkBehaviour::SyncVarEqual<System.Boolean>(!!0,!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_gshared (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, bool ___value0, bool* ___fieldValue1, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::SetSyncVar<System.Boolean>(!!0,!!0&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_gshared (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, bool ___value0, bool* ___fieldValue1, uint64_t ___dirtyBit2, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::SyncVarEqual<System.Single>(!!0,!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75_gshared (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, float ___value0, float* ___fieldValue1, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::SetSyncVar<System.Single>(!!0,!!0&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE_gshared (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, float ___value0, float* ___fieldValue1, uint64_t ___dirtyBit2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.SceneManagement.Scene>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB4275B2B25E4524A455AAAEA270D0ECA8A8D7C66_gshared (Dictionary_2_t7882C1087FC56770DECC226C7A667C0ECA995D6B * __this, RuntimeObject * ___key0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mFB4C017F0E6D1B8A2D41A0483E5EA1D5AF7E707D_gshared (Dictionary_2_t2B12F4CA0E6E4D98E1D860245F7D71154AE68596 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB1061110CDAF9D1EB856F641AFE0C3D419E34F0E_gshared (Dictionary_2_t2B12F4CA0E6E4D98E1D860245F7D71154AE68596 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.SceneManagement.Scene>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  Dictionary_2_get_Item_m2E784AD8F602D5A66D0986116509943B989C4D44_gshared (Dictionary_2_t7882C1087FC56770DECC226C7A667C0ECA995D6B * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.SceneManagement.Scene>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF9301FFE9EECD400B6358E6DC968D5D1E4D4CC7F_gshared (Dictionary_2_t7882C1087FC56770DECC226C7A667C0ECA995D6B * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * Dictionary_2_get_Values_mB6CFF2CF8ADFA3B924B72DCB9DF4522337949157_gshared (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92  ValueCollection_GetEnumerator_m168EB3C4C3CF96DB50361487D34E2B7C3C5DD710_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m8771447B47D7A1D61B647FFDC02FE36A4502C2D2_gshared_inline (Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF823FDC7C230B88007FA5B9988D144BAC866A315_gshared (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___item0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m76810F2A69494E75881A9C521B8EB1439FB77792_gshared (Dictionary_2_t2B12F4CA0E6E4D98E1D860245F7D71154AE68596 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1E7D698BC0815E7C7BDDA133B4BD87543EF19C0E_gshared (Dictionary_2_t2B12F4CA0E6E4D98E1D860245F7D71154AE68596 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m96C84DAE2C4D93C85E192EA74296043897AB6803_gshared (Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA32EC65C76D7D2EE04EB9CEAF5ED0589AEB1F690_gshared (Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE  HashSet_1_GetEnumerator_m7F37EE20CFBFB7D3F5E58A342E7AF29685F31536_gshared (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.SceneManagement.Scene>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  Enumerator_get_Current_m74B6106F631CD7A025FEA6A9D67DC523CE3DBB06_gshared_inline (Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.SceneManagement.Scene>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA1455B4574A42BB90837E4373CEA45C445209120_gshared (Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.SceneManagement.Scene>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB2C8EC334DFD5539BD6885018155D8BEA3C38870_gshared (Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mEF214BA4D01B4659539FBCBF2DE968CCB8D30028_gshared (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A  HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4C3019552B1D3BD7F444CB75C9CE590143A400FD_gshared (Dictionary_2_t2B12F4CA0E6E4D98E1D860245F7D71154AE68596 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.SceneManagement.Scene>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8AD7B91C0C2130CF65C1383B53BD3CB2E88B0824_gshared (Dictionary_2_t7882C1087FC56770DECC226C7A667C0ECA995D6B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0326F1640E966F30C6C3CFF1B1DF80C2E1D58E78_gshared (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Discovery.ServerResponse>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mBCB042AE0BB5F32DC95D2C326BEBFBE8DDA53EE7_gshared (UnityEvent_1_t079F4478C0889C5CBE14FD6E79020F208D7D95B0 * __this, const RuntimeMethod* method);
// System.Void Mirror.Grid2D`1<System.Object>::GetWithNeighbours(UnityEngine.Vector2Int,System.Collections.Generic.HashSet`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid2D_1_GetWithNeighbours_m962C9C2FDFA4ABE048535D4A4A0A87453AFEB575_gshared (Grid2D_1_t6FB0B120D81D93A467EF6FC4C5C58D7B8C277EFD * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___position0, HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ___result1, const RuntimeMethod* method);
// System.Void Mirror.Grid2D`1<System.Object>::ClearNonAlloc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid2D_1_ClearNonAlloc_m2687F9800442ADA71D4324CAD6232FA6A83D0409_gshared (Grid2D_1_t6FB0B120D81D93A467EF6FC4C5C58D7B8C277EFD * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * Dictionary_2_get_Values_m868DAE374D8442BD5F1CD20B1A6AD5123898B604_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  ValueCollection_GetEnumerator_m448E577BC7E4AAC47F0FAD6DB8C1A5E4976BA64C_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Void Mirror.Grid2D`1<System.Object>::Add(UnityEngine.Vector2Int,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid2D_1_Add_m1A9524DFA771468CB972668D533242C029B76096_gshared (Grid2D_1_t6FB0B120D81D93A467EF6FC4C5C58D7B8C277EFD * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___position0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m78AD7EE99253D01FE03BC9917F994D4E2014DAA4_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2FEEBA0F2315272E479E7EB8288DC2012D9A334A_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void Mirror.Grid2D`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid2D_1__ctor_m7A1FEC3E9A4B4C23E5DA74D36EB166DE74A1210E_gshared (Grid2D_1_t6FB0B120D81D93A467EF6FC4C5C58D7B8C277EFD * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Boolean Mirror.NetworkBehaviour::get_hasAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_hasAuthority_m8C249EBFD9F083DE67F38A74E3245727C6035167 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::get_isServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isServer_m6CF3499812C1F2679BB924165AA79C59E6D2EBCF (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.Experimental.NetworkTransformBase::HasEitherMovedRotatedScaled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_HasEitherMovedRotatedScaled_m25AC8AD6F4C0A18C3E7BBB749B9DB551792C61ED (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::ServerUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ServerUpdate_mC67AB2BD5EDD5F5AF3027B0D8991A830D0557D29 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::get_isClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isClient_m87FF41CC03AD448B05627F3711F8E27C63D5C615 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_IsOwnerWithClientAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_IsOwnerWithClientAuthority_mF4AF1FB4447DA11A7E084011AE96168B3C6AE4E3 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::ClientAuthorityUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ClientAuthorityUpdate_mA9E47C99871609FA001278C09D59494E316AD97D (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.Experimental.NetworkTransformBase/DataPoint::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataPoint_get_isValid_m305A8F1E2800210EEF2C12A7532FCF8602E0C020 (DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * __this, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::ClientRemoteUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ClientRemoteUpdate_m13FD9DA234CF273816B17398380E79BC42CB712F (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.UInt32 Mirror.Compression::CompressQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Compression_CompressQuaternion_mC1DD43E3FA152477293A562CA2713DAC89B89CFE (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::RpcMove(UnityEngine.Vector3,System.UInt32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_RpcMove_mC089E102E8C3C1B5C7F316FCF57C7B4486476EE4 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, uint32_t ___packedRotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::CmdClientToServerSync(UnityEngine.Vector3,System.UInt32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_CmdClientToServerSync_m4A234A7D5495D36E522B858F4050CC442B55FD4A (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, uint32_t ___packedRotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method);
// System.Boolean Mirror.Experimental.NetworkTransformBase::NeedsTeleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_NeedsTeleport_m4999ABAB5041322921782C55FAF74BE09759251E (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::ApplyPositionRotationScale(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ApplyPositionRotationScale_m37BF4F818B78F7B9A8AFEA603B2B54A5CEF8EA4E (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method);
// UnityEngine.Vector3 Mirror.Experimental.NetworkTransformBase::InterpolatePosition(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformBase_InterpolatePosition_m0036CB2D94C9BE929025BDC790118135081EDB0B (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___start0, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___goal1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPosition2, const RuntimeMethod* method);
// UnityEngine.Quaternion Mirror.Experimental.NetworkTransformBase::InterpolateRotation(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  NetworkTransformBase_InterpolateRotation_mF2BD9EE260C54BAC30CA8E8F7B1D0C340E9A4AA3 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___start0, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___goal1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___defaultRotation2, const RuntimeMethod* method);
// UnityEngine.Vector3 Mirror.Experimental.NetworkTransformBase::InterpolateScale(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformBase_InterpolateScale_mE7CF32C3C3C82414721490C99C1971877DA04B88 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___start0, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___goal1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentScale2, const RuntimeMethod* method);
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_HasMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_HasMoved_mA061AFB2FDEC9DED027EA7C3A9CA11034FCEC13F (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_HasRotated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_HasRotated_m4F9A1B811872B4CD665068677ED381CB198BE810 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_HasScaled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_HasScaled_m3210831C922D73AFB5F5FA13D6F8A9A9C310513B (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// Mirror.PooledNetworkWriter Mirror.NetworkWriterPool::GetWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * NetworkWriterPool_GetWriter_m53506C8016911951C82F2F83E45592CE2F9A85AE (const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteVector3(Mirror.NetworkWriter,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteUInt(Mirror.NetworkWriter,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUInt_mFDC458AC35F7EF0D09E7A0D779ACF37D12346D64 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint32_t ___value1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::SendCommandInternal(System.Type,System.String,Mirror.NetworkWriter,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_SendCommandInternal_m81D09DA3B313767B581AFB3F5BC4535807CC5700 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, Type_t * ___invokeClass0, String_t* ___cmdName1, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer2, int32_t ___channelId3, bool ___requiresAuthority4, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterPool::Recycle(Mirror.PooledNetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3 (PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * ___writer0, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::SendRPCInternal(System.Type,System.String,Mirror.NetworkWriter,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_SendRPCInternal_m3E76275A3E52E54BF11483D924A21D58285586DF (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, Type_t * ___invokeClass0, String_t* ___rpcName1, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer2, int32_t ___channelId3, bool ___includeOwner4, const RuntimeMethod* method);
// System.Single Mirror.Experimental.NetworkTransformBase::EstimateMovementSpeed(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTransformBase_EstimateMovementSpeed_mF910B9F9B319FBEBD06AC11A27A1919E377018BC (DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___from0, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___to1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform2, float ___sendInterval3, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m37169F3E8ADDA24A5A221AD7397835B437B71439 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Single Mirror.Experimental.NetworkTransformBase::CurrentInterpolationFactor(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTransformBase_CurrentInterpolationFactor_m57D042970C468F9859120796244C46E7EB5C939F (DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___start0, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___goal1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkServer::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::ServerTeleport(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ServerTeleport_m4E8F9CA127E8100055D926476AA8C1ACDE46B6B5 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___localRotation1, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworkclientAuthority(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworkclientAuthority_m329724D832B6923D591BC62EF06ADD3DE0CE9BF4 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::DoTeleport(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_DoTeleport_m263D5F57F8117BBBBFFFEE420D210B9ECE708021 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newLocalPosition0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newLocalRotation1, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::RpcTeleport(UnityEngine.Vector3,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_RpcTeleport_m2E06E42230A147CB253024D7DFBBF3AD357F8F27 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPosition0, uint32_t ___newPackedRotation1, bool ___isClientAuthority2, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteBool(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, bool ___value1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::DrawDataPointGizmo(Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_DrawDataPointGizmo_mFD807536E36BE9F41548EEE3A54BB47E2DF5D243 (DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___data0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::DrawLineBetweenDataPoints(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_DrawLineBetweenDataPoints_mE3DDE940CB2BE44F00945DEEF485DED039EC6CF1 (DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___data10, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___data21, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_m50414CF8E502F4D93FC133091DA5E39543D69E91 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_mB98FF8F52DCEBEB3BC7679DE03FA50785207EE78 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::SyncVarEqual<System.Boolean>(!!0,!!0&)
inline bool NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, bool ___value0, bool* ___fieldValue1, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *, bool, bool*, const RuntimeMethod*))NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_gshared)(__this, ___value0, ___fieldValue1, method);
}
// System.Void Mirror.NetworkBehaviour::SetSyncVar<System.Boolean>(!!0,!!0&,System.UInt64)
inline void NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, bool ___value0, bool* ___fieldValue1, uint64_t ___dirtyBit2, const RuntimeMethod* method)
{
	((  void (*) (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *, bool, bool*, uint64_t, const RuntimeMethod*))NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_gshared)(__this, ___value0, ___fieldValue1, ___dirtyBit2, method);
}
// System.Boolean Mirror.NetworkBehaviour::SyncVarEqual<System.Single>(!!0,!!0&)
inline bool NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, float ___value0, float* ___fieldValue1, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *, float, float*, const RuntimeMethod*))NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75_gshared)(__this, ___value0, ___fieldValue1, method);
}
// System.Void Mirror.NetworkBehaviour::SetSyncVar<System.Single>(!!0,!!0&,System.UInt64)
inline void NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, float ___value0, float* ___fieldValue1, uint64_t ___dirtyBit2, const RuntimeMethod* method)
{
	((  void (*) (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *, float, float*, uint64_t, const RuntimeMethod*))NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE_gshared)(__this, ___value0, ___fieldValue1, ___dirtyBit2, method);
}
// UnityEngine.Quaternion Mirror.Compression::DecompressQuaternion(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Compression_DecompressQuaternion_m235BB50DA4C0504C27545528ED733C1E0CD246EC (uint32_t ___data0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::SetGoal(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_SetGoal_mC25E7E30409614EFEE368262A0537524E4B94211 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 Mirror.NetworkReaderExtensions::ReadVector3(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.UInt32 Mirror.NetworkReaderExtensions::ReadUInt(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReaderExtensions_ReadUInt_mFA3BF8869BCF94137E3F40CFF79B3CE4B93C3D90 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::UserCode_CmdClientToServerSync(UnityEngine.Vector3,System.UInt32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_UserCode_CmdClientToServerSync_m18835CCFFB9079B57361EEBF45D0ADCA6DE24D73 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, uint32_t ___packedRotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkClient::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkClient_get_active_m80C7ACA728DE7F6F6B5DC6C0E80B5AD0D287EA37 (const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::UserCode_RpcMove(UnityEngine.Vector3,System.UInt32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_UserCode_RpcMove_m3F40268027802898D7F9D4B225FFD7E6B4CE857E (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, uint32_t ___packedRotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::CmdTeleportFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_CmdTeleportFinished_m050A5E005BC56812AD1B546651AC723C40BAC482 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkReaderExtensions::ReadBool(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::UserCode_RpcTeleport(UnityEngine.Vector3,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_UserCode_RpcTeleport_m0E4373E1790F2BF74F477030613AEDA494AD1C88 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPosition0, uint32_t ___newPackedRotation1, bool ___isClientAuthority2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::UserCode_CmdTeleportFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_UserCode_CmdTeleportFinished_m0430E546F2CCA58FF782AD2F02DAD796AE1A4C9B (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.CmdDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmdDelegate__ctor_m25AAD7CB2265BEF6CC263E5F620322D0B874CAD8 (CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.RemoteCallHelper::RegisterCommandDelegate(System.Type,System.String,Mirror.RemoteCalls.CmdDelegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallHelper_RegisterCommandDelegate_m196440B96E1D7A909D38037A770734FC5139842F (Type_t * ___invokeClass0, String_t* ___cmdName1, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___func2, bool ___requiresAuthority3, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.RemoteCallHelper::RegisterRpcDelegate(System.Type,System.String,Mirror.RemoteCalls.CmdDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallHelper_RegisterRpcDelegate_m3381432C36F433DF9E6D924514BEBAD8B37B7AC9 (Type_t * ___invokeClass0, String_t* ___rpcName1, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___func2, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::SerializeSyncVars(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_SerializeSyncVars_m4AF8BE097726BA018E3762C14E33BDBF3A5C4819 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, bool ___initialState1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteFloat(Mirror.NetworkWriter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteFloat_mCC353B70D9FBACD2D2CECA565EC7B2B30400A6A5 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, float ___value1, const RuntimeMethod* method);
// System.UInt64 Mirror.NetworkBehaviour::get_syncVarDirtyBits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteULong(Mirror.NetworkWriter,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteULong_mF3B9637FA1C3EA31551616D085A5A3AF041E6963 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::DeserializeSyncVars(Mirror.NetworkReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_DeserializeSyncVars_mC87ECFD6F9C2D5C1306ABDF2CF6498864C84677A (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, bool ___initialState1, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworkexcludeOwnerUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworkexcludeOwnerUpdate_m293E54A64E1605CCF0EAD5AEE835EBD65D5C1355 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworksyncPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworksyncPosition_m43212BC29791176F5B832D0256D311E96D608ED1 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworksyncRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworksyncRotation_m50AE877EA7ABEE8E9860568BAFD9E94C08CA1CEE (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworksyncScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworksyncScale_m22C987C09CBDF8B8EFBD0C0AC52915621ED75ADA (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworkinterpolatePosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworkinterpolatePosition_mB0A6D4026D0AC9F0BDC3C23A333CB1C7AC49D277 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworkinterpolateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworkinterpolateRotation_m415B821B6054A740529F1F57D5F79764B19FD3E6 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworkinterpolateScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworkinterpolateScale_m325A8BBBB5416AE0AD5A1BD3B2AEF7EB66F192A1 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Mirror.NetworkReaderExtensions::ReadFloat(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkReaderExtensions_ReadFloat_m4DFFE1E95D7BEF889745B16F7963B32FD839FA64 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworklocalPositionSensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworklocalPositionSensitivity_mD0E30BE1A2BB1F78C732AF07B6F548B96B17D3D1 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworklocalRotationSensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworklocalRotationSensitivity_m93017DBC9971A0CF2532C055B1E77B6DCF076290 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworklocalScaleSensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworklocalScaleSensitivity_mEC39778F89A07F616CCDC8D8DA673BA0A7FE46E7 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, float ___value0, const RuntimeMethod* method);
// System.UInt64 Mirror.NetworkReaderExtensions::ReadULong(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkReaderExtensions_ReadULong_m01F59C890722632901DC6C16D461CF39E5EEFDAC (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkTransformBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase__ctor_mD7C6CDB801C61FDB5A492127CCE5EA539F9E57E5 (NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F * __this, const RuntimeMethod* method);
// System.Void Mirror.Experimental.NetworkTransformBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase__ctor_m7F1BEF03D49DB00ED74D85970D5E30A8B14E377E (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Mirror.NetworkIdentity,UnityEngine.SceneManagement.Scene>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mBFBF795EAAB415A21979701465DF1FC3D2258AC3 (Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___key0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*))Dictionary_2_set_Item_mB4275B2B25E4524A455AAAEA270D0ECA8A8D7C66_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___key0, HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 *, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB **, const RuntimeMethod*))Dictionary_2_TryGetValue_mFB4C017F0E6D1B8A2D41A0483E5EA1D5AF7E707D_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>::.ctor()
inline void HashSet_1__ctor_m532404BE8B625E5E5401B951469A77F361AD490B (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>>::Add(!0,!1)
inline void Dictionary_2_Add_m8C1313CC234169736B38D3F024B64C59EE01F548 (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___key0, HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 *, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB *, const RuntimeMethod*))Dictionary_2_Add_mB1061110CDAF9D1EB856F641AFE0C3D419E34F0E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>::Add(!0)
inline bool HashSet_1_Add_m8FBBEDE6BF250AA3343F6AFFB35DB005D7C33F6A (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// !1 System.Collections.Generic.Dictionary`2<Mirror.NetworkIdentity,UnityEngine.SceneManagement.Scene>::get_Item(!0)
inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  Dictionary_2_get_Item_m826B1B4A28E49D5684DAF94AC59F1478CB23DC2E (Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___key0, const RuntimeMethod* method)
{
	return ((  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  (*) (Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, const RuntimeMethod*))Dictionary_2_get_Item_m2E784AD8F602D5A66D0986116509943B989C4D44_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Mirror.NetworkIdentity,UnityEngine.SceneManagement.Scene>::Remove(!0)
inline bool Dictionary_2_Remove_m2B9B7E274E39A14DA0E84B806F316561F5B5A711 (Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, const RuntimeMethod*))Dictionary_2_Remove_mF9301FFE9EECD400B6358E6DC968D5D1E4D4CC7F_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>::Remove(!0)
inline bool HashSet_1_Remove_mEFD8B95901D0571FE3456927C7A94927B02E9810 (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// System.Void Mirror.SceneInterestManagement::RebuildSceneObservers(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInterestManagement_RebuildSceneObservers_m000D9755F31C2389044C842987AB3F2601636F6B (SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity>::get_Values()
inline ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF * Dictionary_2_get_Values_m863891487C55E52E72C043C29CA6D20969134CD8 (Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF * (*) (Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 *, const RuntimeMethod*))Dictionary_2_get_Values_mB6CFF2CF8ADFA3B924B72DCB9DF4522337949157_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,Mirror.NetworkIdentity>::GetEnumerator()
inline Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E  ValueCollection_GetEnumerator_m0EA4028861066E0484B99B81D1957F51A9FC80D9 (ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E  (*) (ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF *, const RuntimeMethod*))ValueCollection_GetEnumerator_m168EB3C4C3CF96DB50361487D34E2B7C3C5DD710_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,Mirror.NetworkIdentity>::get_Current()
inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * Enumerator_get_Current_m3E52BDC09ACA41D1976BD1CBBB0BB9362C747278_inline (Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * (*) (Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E *, const RuntimeMethod*))Enumerator_get_Current_m8771447B47D7A1D61B647FFDC02FE36A4502C2D2_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.SceneManagement.Scene::op_Equality(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_op_Equality_m5B02632BCD075BF2857A75AF21F5F82AE22C4E4D (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___lhs0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___rhs1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene>::Add(!0)
inline bool HashSet_1_Add_mF823FDC7C230B88007FA5B9988D144BAC866A315 (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 *, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*))HashSet_1_Add_mF823FDC7C230B88007FA5B9988D144BAC866A315_gshared)(__this, ___item0, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>>::get_Item(!0)
inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * Dictionary_2_get_Item_m70068D86B047D54689499BBD312317F8A74BF8B2 (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___key0, const RuntimeMethod* method)
{
	return ((  HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * (*) (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 *, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*))Dictionary_2_get_Item_m76810F2A69494E75881A9C521B8EB1439FB77792_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mACA86CEB8FC95305338DE3BDEC463D90200586F2 (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 *, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*))Dictionary_2_ContainsKey_m1E7D698BC0815E7C7BDDA133B4BD87543EF19C0E_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,Mirror.NetworkIdentity>::MoveNext()
inline bool Enumerator_MoveNext_m02AFA72A654DC0D05D3BD0751EFB4EDF0B8B0BFF (Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E *, const RuntimeMethod*))Enumerator_MoveNext_m96C84DAE2C4D93C85E192EA74296043897AB6803_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,Mirror.NetworkIdentity>::Dispose()
inline void Enumerator_Dispose_mB4BE9B0722B9A0E644AFBF21F49A43B935641677 (Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E *, const RuntimeMethod*))Enumerator_Dispose_mA32EC65C76D7D2EE04EB9CEAF5ED0589AEB1F690_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene>::GetEnumerator()
inline Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE  HashSet_1_GetEnumerator_m7F37EE20CFBFB7D3F5E58A342E7AF29685F31536 (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE  (*) (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7F37EE20CFBFB7D3F5E58A342E7AF29685F31536_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.SceneManagement.Scene>::get_Current()
inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  Enumerator_get_Current_m74B6106F631CD7A025FEA6A9D67DC523CE3DBB06_inline (Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE * __this, const RuntimeMethod* method)
{
	return ((  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  (*) (Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE *, const RuntimeMethod*))Enumerator_get_Current_m74B6106F631CD7A025FEA6A9D67DC523CE3DBB06_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.SceneManagement.Scene>::MoveNext()
inline bool Enumerator_MoveNext_mA1455B4574A42BB90837E4373CEA45C445209120 (Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE *, const RuntimeMethod*))Enumerator_MoveNext_mA1455B4574A42BB90837E4373CEA45C445209120_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.SceneManagement.Scene>::Dispose()
inline void Enumerator_Dispose_mB2C8EC334DFD5539BD6885018155D8BEA3C38870 (Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE *, const RuntimeMethod*))Enumerator_Dispose_mB2C8EC334DFD5539BD6885018155D8BEA3C38870_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene>::Clear()
inline void HashSet_1_Clear_mEF214BA4D01B4659539FBCBF2DE968CCB8D30028 (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 *, const RuntimeMethod*))HashSet_1_Clear_mEF214BA4D01B4659539FBCBF2DE968CCB8D30028_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>::GetEnumerator()
inline Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838  HashSet_1_GetEnumerator_m6ADBCCE83E6F17EF1946F504EEC0BDDDECA35548 (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838  (*) (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Mirror.NetworkIdentity>::get_Current()
inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * Enumerator_get_Current_m0D5CBDE9B4D5D5764BA083F6F1C5C3CDFDF1C065_inline (Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * (*) (Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Mirror.NetworkServer::RebuildObservers(Mirror.NetworkIdentity,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_RebuildObservers_m2E49CB20FF4AF0D1EAC08AF0B0271BBEFCDCDABC (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___identity0, bool ___initialize1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Mirror.NetworkIdentity>::MoveNext()
inline bool Enumerator_MoveNext_m0483BF2933B6F4037B9E12B43EE614354F4A66CB (Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Mirror.NetworkIdentity>::Dispose()
inline void Enumerator_Dispose_mEA092BC2C00AEBAF008C9F2186FE98F74DEDFEC5 (Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// Mirror.NetworkIdentity Mirror.NetworkConnection::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, const RuntimeMethod* method);
// Mirror.NetworkConnectionToClient Mirror.NetworkIdentity::get_connectionToClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>::Add(!0)
inline bool HashSet_1_Add_m28002384C2860575E2AA38C7589147EC70119BD2 (HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 *, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>>::.ctor()
inline void Dictionary_2__ctor_mB0FE8165A4E9367469E388D4A68A81E6D74A0EC5 (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 *, const RuntimeMethod*))Dictionary_2__ctor_m4C3019552B1D3BD7F444CB75C9CE590143A400FD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Mirror.NetworkIdentity,UnityEngine.SceneManagement.Scene>::.ctor()
inline void Dictionary_2__ctor_mAA5980F86AD93CC0E633CABD9E9D9E5D106F6357 (Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 *, const RuntimeMethod*))Dictionary_2__ctor_m8AD7B91C0C2130CF65C1383B53BD3CB2E88B0824_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.SceneManagement.Scene>::.ctor()
inline void HashSet_1__ctor_m0326F1640E966F30C6C3CFF1B1DF80C2E1D58E78 (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 *, const RuntimeMethod*))HashSet_1__ctor_m0326F1640E966F30C6C3CFF1B1DF80C2E1D58E78_gshared)(__this, method);
}
// System.Void Mirror.InterestManagement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterestManagement__ctor_mC2CB6AFC383E02ACBABDD728A970658A1C3CCFF4 (InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.Discovery.ServerResponse>::.ctor()
inline void UnityEvent_1__ctor_mBCB042AE0BB5F32DC95D2C326BEBFBE8DDA53EE7 (UnityEvent_1_t079F4478C0889C5CBE14FD6E79020F208D7D95B0 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t079F4478C0889C5CBE14FD6E79020F208D7D95B0 *, const RuntimeMethod*))UnityEvent_1__ctor_mBCB042AE0BB5F32DC95D2C326BEBFBE8DDA53EE7_gshared)(__this, method);
}
// System.Net.IPEndPoint Mirror.Discovery.ServerResponse::get_EndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ServerResponse_get_EndPoint_m6DAD50F1785A1577B00C8DAADB1E2446B934CA0C_inline (ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 * __this, const RuntimeMethod* method);
// System.Void Mirror.Discovery.ServerResponse::set_EndPoint(System.Net.IPEndPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServerResponse_set_EndPoint_mE2370B1D263800DD50A7463C05FFD93351E9526F_inline (ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 Mirror.SpatialHashingInterestManagement::get_resolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialHashingInterestManagement_get_resolution_m3DAA86ADF204445CC688E8298FD729D5B7DCE43A (SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::RoundToInt(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_RoundToInt_m1AE35E5F4CC5F4405BE7AB443C648544E6C523AA_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2Int Mirror.SpatialHashingInterestManagement::ProjectToGrid(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  SpatialHashingInterestManagement_ProjectToGrid_m7D9665467C2DA736E8016A4A7C53F5F6B878603D (SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::op_Subtraction(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_op_Subtraction_mD915509B3D1633AB0C8155397F4CA15B385FBBEA_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___a0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_get_sqrMagnitude_mE674C8110FB6AF95469AAD381E345E1170AAB101 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Void Mirror.Grid2D`1<Mirror.NetworkConnection>::GetWithNeighbours(UnityEngine.Vector2Int,System.Collections.Generic.HashSet`1<T>)
inline void Grid2D_1_GetWithNeighbours_mF655D366EE6B017583A06A3E48E05AA1114243AA (Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___position0, HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * ___result1, const RuntimeMethod* method)
{
	((  void (*) (Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A *, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 , HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 *, const RuntimeMethod*))Grid2D_1_GetWithNeighbours_m962C9C2FDFA4ABE048535D4A4A0A87453AFEB575_gshared)(__this, ___position0, ___result1, method);
}
// System.Void Mirror.Grid2D`1<Mirror.NetworkConnection>::ClearNonAlloc()
inline void Grid2D_1_ClearNonAlloc_m9D19936F849618735F2BC18A778079C1134512AB (Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * __this, const RuntimeMethod* method)
{
	((  void (*) (Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A *, const RuntimeMethod*))Grid2D_1_ClearNonAlloc_m2687F9800442ADA71D4324CAD6232FA6A83D0409_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>::get_Values()
inline ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F * Dictionary_2_get_Values_m33CAD47C20C721CE58504E8FF017F617739BA3ED (Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F * (*) (Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 *, const RuntimeMethod*))Dictionary_2_get_Values_m868DAE374D8442BD5F1CD20B1A6AD5123898B604_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Mirror.NetworkConnectionToClient>::GetEnumerator()
inline Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E  ValueCollection_GetEnumerator_m55D0332E9A87765BDDEBA199299DFDB039EA25A2 (ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E  (*) (ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F *, const RuntimeMethod*))ValueCollection_GetEnumerator_m448E577BC7E4AAC47F0FAD6DB8C1A5E4976BA64C_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Mirror.NetworkConnectionToClient>::get_Current()
inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * Enumerator_get_Current_m39E5466E238958C9692150450E0C4F527F587A14_inline (Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E * __this, const RuntimeMethod* method)
{
	return ((  NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * (*) (Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E *, const RuntimeMethod*))Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline)(__this, method);
}
// System.Void Mirror.Grid2D`1<Mirror.NetworkConnection>::Add(UnityEngine.Vector2Int,T)
inline void Grid2D_1_Add_m7EBE77A6957F601227BEDB1138E6AE73E592A80D (Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___position0, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A *, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 , NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, const RuntimeMethod*))Grid2D_1_Add_m1A9524DFA771468CB972668D533242C029B76096_gshared)(__this, ___position0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Mirror.NetworkConnectionToClient>::MoveNext()
inline bool Enumerator_MoveNext_m247BC915E135A225F1B037ECF2AC0B46D87E9647 (Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E *, const RuntimeMethod*))Enumerator_MoveNext_m78AD7EE99253D01FE03BC9917F994D4E2014DAA4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Mirror.NetworkConnectionToClient>::Dispose()
inline void Enumerator_Dispose_m3B792B6C788DCE4B38EF9ED49F64320CC5043C60 (Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E *, const RuntimeMethod*))Enumerator_Dispose_m2FEEBA0F2315272E479E7EB8288DC2012D9A334A_gshared)(__this, method);
}
// System.Double Mirror.NetworkTime::get_localTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_localTime_mE9F343542C384B1D15D2541759FAD163D00946D6 (const RuntimeMethod* method);
// System.Void Mirror.InterestManagement::RebuildAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterestManagement_RebuildAll_m143CB3DE5E99AF95FA1285E5E2D91E5FE2DEA1AD (InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect0, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA (String_t* ___str0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_mFB35D7D54FD9EE76B56C76023B9E8C4B30AA8CA6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53 (float ___width0, const RuntimeMethod* method);
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D (float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946 (const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151 (const RuntimeMethod* method);
// System.Void Mirror.Grid2D`1<Mirror.NetworkConnection>::.ctor()
inline void Grid2D_1__ctor_mF27CD78C1A127076A9462DF8C3F47B9BC2DD9B9F (Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * __this, const RuntimeMethod* method)
{
	((  void (*) (Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A *, const RuntimeMethod*))Grid2D_1__ctor_m7A1FEC3E9A4B4C23E5DA74D36EB166DE74A1210E_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkRoomManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8BA39A59192EDE1BC19CDBDFF284981F93E494C5 (U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Mirror.NetworkConnectionToClient>::get_Value()
inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_inline (KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B * __this, const RuntimeMethod* method)
{
	return ((  NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * (*) (KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Mirror.NetworkRoomPlayer>()
inline NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F * GameObject_GetComponent_TisNetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F_m4EDDC9D17439C18F9912C9A2DA143E1598E6BBC1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643 (float ___dot0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_IsOwnerWithClientAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_IsOwnerWithClientAuthority_mF4AF1FB4447DA11A7E084011AE96168B3C6AE4E3 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	{
		// bool IsOwnerWithClientAuthority => hasAuthority && clientAuthority;
		bool L_0;
		L_0 = NetworkBehaviour_get_hasAuthority_m8C249EBFD9F083DE67F38A74E3245727C6035167(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = __this->get_clientAuthority_12();
		return L_1;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_FixedUpdate_mE596F1DA08C1024E780A9037298965360B12FA85 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	{
		// if (isServer && HasEitherMovedRotatedScaled())
		bool L_0;
		L_0 = NetworkBehaviour_get_isServer_m6CF3499812C1F2679BB924165AA79C59E6D2EBCF(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1;
		L_1 = NetworkTransformBase_HasEitherMovedRotatedScaled_m25AC8AD6F4C0A18C3E7BBB749B9DB551792C61ED(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// ServerUpdate();
		NetworkTransformBase_ServerUpdate_mC67AB2BD5EDD5F5AF3027B0D8991A830D0557D29(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// if (isClient)
		bool L_2;
		L_2 = NetworkBehaviour_get_isClient_m87FF41CC03AD448B05627F3711F8E27C63D5C615(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// if (IsOwnerWithClientAuthority)
		bool L_3;
		L_3 = NetworkTransformBase_get_IsOwnerWithClientAuthority_mF4AF1FB4447DA11A7E084011AE96168B3C6AE4E3(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// ClientAuthorityUpdate();
		NetworkTransformBase_ClientAuthorityUpdate_mA9E47C99871609FA001278C09D59494E316AD97D(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// else if (goal.isValid)
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_4 = __this->get_address_of_goal_27();
		bool L_5;
		L_5 = DataPoint_get_isValid_m305A8F1E2800210EEF2C12A7532FCF8602E0C020((DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// ClientRemoteUpdate();
		NetworkTransformBase_ClientRemoteUpdate_m13FD9DA234CF273816B17398380E79BC42CB712F(__this, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::ServerUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ServerUpdate_mC67AB2BD5EDD5F5AF3027B0D8991A830D0557D29 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	{
		// RpcMove(targetTransform.localPosition, Compression.CompressQuaternion(targetTransform.localRotation), targetTransform.localScale);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_2, /*hidden argument*/NULL);
		uint32_t L_4;
		L_4 = Compression_CompressQuaternion_mC1DD43E3FA152477293A562CA2713DAC89B89CFE(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		NetworkTransformBase_RpcMove_mC089E102E8C3C1B5C7F316FCF57C7B4486476EE4(__this, L_1, L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::ClientAuthorityUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ClientAuthorityUpdate_mA9E47C99871609FA001278C09D59494E316AD97D (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	{
		// if (!isServer && HasEitherMovedRotatedScaled())
		bool L_0;
		L_0 = NetworkBehaviour_get_isServer_m6CF3499812C1F2679BB924165AA79C59E6D2EBCF(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		bool L_1;
		L_1 = NetworkTransformBase_HasEitherMovedRotatedScaled_m25AC8AD6F4C0A18C3E7BBB749B9DB551792C61ED(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// CmdClientToServerSync(targetTransform.localPosition, Compression.CompressQuaternion(targetTransform.localRotation), targetTransform.localScale);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_4, /*hidden argument*/NULL);
		uint32_t L_6;
		L_6 = Compression_CompressQuaternion_mC1DD43E3FA152477293A562CA2713DAC89B89CFE(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_7, /*hidden argument*/NULL);
		NetworkTransformBase_CmdClientToServerSync_m4A234A7D5495D36E522B858F4050CC442B55FD4A(__this, L_3, L_6, L_8, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::ClientRemoteUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ClientRemoteUpdate_m13FD9DA234CF273816B17398380E79BC42CB712F (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	{
		// if (NeedsTeleport())
		bool L_0;
		L_0 = NetworkTransformBase_NeedsTeleport_m4999ABAB5041322921782C55FAF74BE09759251E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// ApplyPositionRotationScale(goal.localPosition, goal.localRotation, goal.localScale);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_1 = __this->get_address_of_goal_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1->get_localPosition_1();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_3 = __this->get_address_of_goal_27();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = L_3->get_localRotation_2();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_5 = __this->get_address_of_goal_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = L_5->get_localScale_3();
		NetworkTransformBase_ApplyPositionRotationScale_m37BF4F818B78F7B9A8AFEA603B2B54A5CEF8EA4E(__this, L_2, L_4, L_6, /*hidden argument*/NULL);
		// start = new DataPoint();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_7 = __this->get_address_of_start_26();
		il2cpp_codegen_initobj(L_7, sizeof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 ));
		// goal = new DataPoint();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_8 = __this->get_address_of_goal_27();
		il2cpp_codegen_initobj(L_8, sizeof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 ));
		// }
		return;
	}

IL_0048:
	{
		// ApplyPositionRotationScale(InterpolatePosition(start, goal, targetTransform.localPosition),
		//                            InterpolateRotation(start, goal, targetTransform.localRotation),
		//                            InterpolateScale(start, goal, targetTransform.localScale));
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_9 = __this->get_start_26();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_10 = __this->get_goal_27();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = NetworkTransformBase_InterpolatePosition_m0036CB2D94C9BE929025BDC790118135081EDB0B(__this, L_9, L_10, L_12, /*hidden argument*/NULL);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_14 = __this->get_start_26();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_15 = __this->get_goal_27();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_16, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = NetworkTransformBase_InterpolateRotation_mF2BD9EE260C54BAC30CA8E8F7B1D0C340E9A4AA3(__this, L_14, L_15, L_17, /*hidden argument*/NULL);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_19 = __this->get_start_26();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_20 = __this->get_goal_27();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = NetworkTransformBase_InterpolateScale_mE7CF32C3C3C82414721490C99C1971877DA04B88(__this, L_19, L_20, L_22, /*hidden argument*/NULL);
		NetworkTransformBase_ApplyPositionRotationScale_m37BF4F818B78F7B9A8AFEA603B2B54A5CEF8EA4E(__this, L_13, L_18, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::HasEitherMovedRotatedScaled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_HasEitherMovedRotatedScaled_m25AC8AD6F4C0A18C3E7BBB749B9DB551792C61ED (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// bool changed = HasMoved || HasRotated || HasScaled;
		bool L_0;
		L_0 = NetworkTransformBase_get_HasMoved_mA061AFB2FDEC9DED027EA7C3A9CA11034FCEC13F(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = NetworkTransformBase_get_HasRotated_m4F9A1B811872B4CD665068677ED381CB198BE810(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2;
		L_2 = NetworkTransformBase_get_HasScaled_m3210831C922D73AFB5F5FA13D6F8A9A9C310513B(__this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		// if (changed)
		int32_t L_3 = G_B4_0;
		G_B5_0 = L_3;
		if (!L_3)
		{
			G_B11_0 = L_3;
			goto IL_0067;
		}
	}
	{
		// if (syncPosition) lastPosition = targetTransform.localPosition;
		bool L_4 = __this->get_syncPosition_14();
		G_B6_0 = G_B5_0;
		if (!L_4)
		{
			G_B7_0 = G_B5_0;
			goto IL_0035;
		}
	}
	{
		// if (syncPosition) lastPosition = targetTransform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		__this->set_lastPosition_23(L_6);
		G_B7_0 = G_B6_0;
	}

IL_0035:
	{
		// if (syncRotation) lastRotation = targetTransform.localRotation;
		bool L_7 = __this->get_syncRotation_15();
		G_B8_0 = G_B7_0;
		if (!L_7)
		{
			G_B9_0 = G_B7_0;
			goto IL_004e;
		}
	}
	{
		// if (syncRotation) lastRotation = targetTransform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_8, /*hidden argument*/NULL);
		__this->set_lastRotation_24(L_9);
		G_B9_0 = G_B8_0;
	}

IL_004e:
	{
		// if (syncScale) lastScale = targetTransform.localScale;
		bool L_10 = __this->get_syncScale_16();
		G_B10_0 = G_B9_0;
		if (!L_10)
		{
			G_B11_0 = G_B9_0;
			goto IL_0067;
		}
	}
	{
		// if (syncScale) lastScale = targetTransform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		__this->set_lastScale_25(L_12);
		G_B11_0 = G_B10_0;
	}

IL_0067:
	{
		// return changed;
		return (bool)G_B11_0;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_HasMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_HasMoved_mA061AFB2FDEC9DED027EA7C3A9CA11034FCEC13F (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	{
		// bool HasMoved => syncPosition && Vector3.SqrMagnitude(lastPosition - targetTransform.localPosition) > localPositionSensitivity * localPositionSensitivity;
		bool L_0 = __this->get_syncPosition_14();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_lastPosition_23();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_localPositionSensitivity_20();
		float L_7 = __this->get_localPositionSensitivity_20();
		return (bool)((((float)L_5) > ((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_HasRotated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_HasRotated_m4F9A1B811872B4CD665068677ED381CB198BE810 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	{
		// bool HasRotated => syncRotation && Quaternion.Angle(lastRotation, targetTransform.localRotation) > localRotationSensitivity;
		bool L_0 = __this->get_syncRotation_15();
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get_lastRotation_24();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_1, L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_localRotationSensitivity_21();
		return (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_HasScaled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_HasScaled_m3210831C922D73AFB5F5FA13D6F8A9A9C310513B (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	{
		// bool HasScaled => syncScale && Vector3.SqrMagnitude(lastScale - targetTransform.localScale) > localScaleSensitivity * localScaleSensitivity;
		bool L_0 = __this->get_syncScale_16();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_lastScale_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_localScaleSensitivity_22();
		float L_7 = __this->get_localScaleSensitivity_22();
		return (bool)((((float)L_5) > ((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::NeedsTeleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_NeedsTeleport_m4999ABAB5041322921782C55FAF74BE09759251E (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	{
		// float startTime = start.isValid ? start.timeStamp : Time.time - Time.fixedDeltaTime;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_0 = __this->get_address_of_start_26();
		bool L_1;
		L_1 = DataPoint_get_isValid_m305A8F1E2800210EEF2C12A7532FCF8602E0C020((DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3));
		goto IL_0025;
	}

IL_001a:
	{
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_4 = __this->get_address_of_start_26();
		float L_5 = L_4->get_timeStamp_0();
		G_B3_0 = L_5;
	}

IL_0025:
	{
		V_0 = G_B3_0;
		// float goalTime = goal.isValid ? goal.timeStamp : Time.time;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_6 = __this->get_address_of_goal_27();
		bool L_7;
		L_7 = DataPoint_get_isValid_m305A8F1E2800210EEF2C12A7532FCF8602E0C020((DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 *)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		float L_8;
		L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		G_B6_0 = L_8;
		goto IL_0045;
	}

IL_003a:
	{
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_9 = __this->get_address_of_goal_27();
		float L_10 = L_9->get_timeStamp_0();
		G_B6_0 = L_10;
	}

IL_0045:
	{
		V_1 = G_B6_0;
		// float difference = goalTime - startTime;
		float L_11 = V_1;
		float L_12 = V_0;
		V_2 = ((float)il2cpp_codegen_subtract((float)L_11, (float)L_12));
		// float timeSinceGoalReceived = Time.time - goalTime;
		float L_13;
		L_13 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_14 = V_1;
		// return timeSinceGoalReceived > difference * 5;
		float L_15 = V_2;
		return (bool)((((float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_14))) > ((float)((float)il2cpp_codegen_multiply((float)L_15, (float)(5.0f)))))? 1 : 0);
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::CmdClientToServerSync(UnityEngine.Vector3,System.UInt32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_CmdClientToServerSync_m4A234A7D5495D36E522B858F4050CC442B55FD4A (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, uint32_t ___packedRotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42470E6A6DE57CCBBA1718521E05CACF86633451);
		s_Il2CppMethodInitialized = true;
	}
	PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_0;
		L_0 = NetworkWriterPool_GetWriter_m53506C8016911951C82F2F83E45592CE2F9A85AE(/*hidden argument*/NULL);
		V_0 = L_0;
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_1 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609(L_1, L_2, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_3 = V_0;
		uint32_t L_4 = ___packedRotation1;
		NetworkWriterExtensions_WriteUInt_mFDC458AC35F7EF0D09E7A0D779ACF37D12346D64(L_3, L_4, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___scale2;
		NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609(L_5, L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_9 = V_0;
		NetworkBehaviour_SendCommandInternal_m81D09DA3B313767B581AFB3F5BC4535807CC5700(__this, L_8, _stringLiteral42470E6A6DE57CCBBA1718521E05CACF86633451, L_9, ((int32_t)1), (bool)1, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_10 = V_0;
		NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::RpcMove(UnityEngine.Vector3,System.UInt32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_RpcMove_mC089E102E8C3C1B5C7F316FCF57C7B4486476EE4 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, uint32_t ___packedRotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86D7317D8F52D0566180D8B4AB17C20C7C4D4A26);
		s_Il2CppMethodInitialized = true;
	}
	PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_0;
		L_0 = NetworkWriterPool_GetWriter_m53506C8016911951C82F2F83E45592CE2F9A85AE(/*hidden argument*/NULL);
		V_0 = L_0;
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_1 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609(L_1, L_2, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_3 = V_0;
		uint32_t L_4 = ___packedRotation1;
		NetworkWriterExtensions_WriteUInt_mFDC458AC35F7EF0D09E7A0D779ACF37D12346D64(L_3, L_4, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___scale2;
		NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609(L_5, L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_9 = V_0;
		NetworkBehaviour_SendRPCInternal_m3E76275A3E52E54BF11483D924A21D58285586DF(__this, L_8, _stringLiteral86D7317D8F52D0566180D8B4AB17C20C7C4D4A26, L_9, ((int32_t)1), (bool)1, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_10 = V_0;
		NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::SetGoal(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_SetGoal_mC25E7E30409614EFEE368262A0537524E4B94211 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// DataPoint temp = new DataPoint
		// {
		//     // deserialize position
		//     localPosition = position,
		//     localRotation = rotation,
		//     localScale = scale,
		//     timeStamp = Time.time
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		(&V_1)->set_localPosition_1(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___rotation1;
		(&V_1)->set_localRotation_2(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___scale2;
		(&V_1)->set_localScale_3(L_2);
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		(&V_1)->set_timeStamp_0(L_3);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_4 = V_1;
		V_0 = L_4;
		// temp.movementSpeed = EstimateMovementSpeed(goal, temp, targetTransform, Time.fixedDeltaTime);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_5 = __this->get_goal_27();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_6 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		float L_8;
		L_8 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = NetworkTransformBase_EstimateMovementSpeed_mF910B9F9B319FBEBD06AC11A27A1919E377018BC(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		(&V_0)->set_movementSpeed_4(L_9);
		// if (start.timeStamp == 0)
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_10 = __this->get_address_of_start_26();
		float L_11 = L_10->get_timeStamp_0();
		if ((!(((float)L_11) == ((float)(0.0f)))))
		{
			goto IL_00c7;
		}
	}
	{
		// start = new DataPoint
		// {
		//     timeStamp = Time.time - Time.fixedDeltaTime,
		//     // local position/rotation for VR support
		//     localPosition = targetTransform.localPosition,
		//     localRotation = targetTransform.localRotation,
		//     localScale = targetTransform.localScale,
		//     movementSpeed = temp.movementSpeed
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 ));
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		(&V_1)->set_timeStamp_0(((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_14, /*hidden argument*/NULL);
		(&V_1)->set_localPosition_1(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_16, /*hidden argument*/NULL);
		(&V_1)->set_localRotation_2(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_18, /*hidden argument*/NULL);
		(&V_1)->set_localScale_3(L_19);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_20 = V_0;
		float L_21 = L_20.get_movementSpeed_4();
		(&V_1)->set_movementSpeed_4(L_21);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_22 = V_1;
		__this->set_start_26(L_22);
		// }
		goto IL_0168;
	}

IL_00c7:
	{
		// float oldDistance = Vector3.Distance(start.localPosition, goal.localPosition);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_23 = __this->get_address_of_start_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = L_23->get_localPosition_1();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_25 = __this->get_address_of_goal_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = L_25->get_localPosition_1();
		float L_27;
		L_27 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_24, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// float newDistance = Vector3.Distance(goal.localPosition, temp.localPosition);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_28 = __this->get_address_of_goal_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = L_28->get_localPosition_1();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_30 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = L_30.get_localPosition_1();
		float L_32;
		L_32 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_29, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		// start = goal;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_33 = __this->get_goal_27();
		__this->set_start_26(L_33);
		// if (Vector3.Distance(targetTransform.localPosition, start.localPosition) < oldDistance + newDistance)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_34, /*hidden argument*/NULL);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_36 = __this->get_address_of_start_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = L_36->get_localPosition_1();
		float L_38;
		L_38 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_35, L_37, /*hidden argument*/NULL);
		float L_39 = V_2;
		float L_40 = V_3;
		if ((!(((float)L_38) < ((float)((float)il2cpp_codegen_add((float)L_39, (float)L_40))))))
		{
			goto IL_0168;
		}
	}
	{
		// start.localPosition = targetTransform.localPosition;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_41 = __this->get_address_of_start_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_42, /*hidden argument*/NULL);
		L_41->set_localPosition_1(L_43);
		// start.localRotation = targetTransform.localRotation;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_44 = __this->get_address_of_start_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_46;
		L_46 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_45, /*hidden argument*/NULL);
		L_44->set_localRotation_2(L_46);
		// start.localScale = targetTransform.localScale;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_47 = __this->get_address_of_start_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_48, /*hidden argument*/NULL);
		L_47->set_localScale_3(L_49);
	}

IL_0168:
	{
		// goal = temp;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_50 = V_0;
		__this->set_goal_27(L_50);
		// }
		return;
	}
}
// System.Single Mirror.Experimental.NetworkTransformBase::EstimateMovementSpeed(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTransformBase_EstimateMovementSpeed_mF910B9F9B319FBEBD06AC11A27A1919E377018BC (DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___from0, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___to1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform2, float ___sendInterval3, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	float G_B6_0 = 0.0f;
	{
		// Vector3 delta = to.localPosition - (from.localPosition != transform.localPosition ? from.localPosition : transform.localPosition);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_0 = ___to1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_localPosition_1();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_2 = ___from0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_localPosition_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___transform2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_3, L_5, /*hidden argument*/NULL);
		G_B1_0 = L_1;
		if (L_6)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ___transform2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_0027;
	}

IL_0021:
	{
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_9 = ___from0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9.get_localPosition_1();
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_0027:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_11;
		// float elapsed = from.isValid ? to.timeStamp - from.timeStamp : sendInterval;
		bool L_12;
		L_12 = DataPoint_get_isValid_m305A8F1E2800210EEF2C12A7532FCF8602E0C020((DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 *)(&___from0), /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0039;
		}
	}
	{
		float L_13 = ___sendInterval3;
		G_B6_0 = L_13;
		goto IL_0046;
	}

IL_0039:
	{
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_14 = ___to1;
		float L_15 = L_14.get_timeStamp_0();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_16 = ___from0;
		float L_17 = L_16.get_timeStamp_0();
		G_B6_0 = ((float)il2cpp_codegen_subtract((float)L_15, (float)L_17));
	}

IL_0046:
	{
		V_1 = G_B6_0;
		// return elapsed > 0 ? delta.magnitude / elapsed : 0;
		float L_18 = V_1;
		if ((((float)L_18) > ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		return (0.0f);
	}

IL_0055:
	{
		float L_19;
		L_19 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_20 = V_1;
		return ((float)((float)L_19/(float)L_20));
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::ApplyPositionRotationScale(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ApplyPositionRotationScale_m37BF4F818B78F7B9A8AFEA603B2B54A5CEF8EA4E (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method)
{
	{
		// if (syncPosition) targetTransform.localPosition = position;
		bool L_0 = __this->get_syncPosition_14();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (syncPosition) targetTransform.localPosition = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position0;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (syncRotation) targetTransform.localRotation = rotation;
		bool L_3 = __this->get_syncRotation_15();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// if (syncRotation) targetTransform.localRotation = rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = ___rotation1;
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if (syncScale) targetTransform.localScale = scale;
		bool L_6 = __this->get_syncScale_16();
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// if (syncScale) targetTransform.localScale = scale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___scale2;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_7, L_8, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Mirror.Experimental.NetworkTransformBase::InterpolatePosition(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformBase_InterpolatePosition_m0036CB2D94C9BE929025BDC790118135081EDB0B (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___start0, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___goal1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPosition2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if (!interpolatePosition)
		bool L_0 = __this->get_interpolatePosition_17();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return currentPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___currentPosition2;
		return L_1;
	}

IL_000a:
	{
		// if (start.movementSpeed != 0)
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_2 = ___start0;
		float L_3 = L_2.get_movementSpeed_4();
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_003d;
		}
	}
	{
		// float speed = Mathf.Max(start.movementSpeed, goal.movementSpeed);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_4 = ___start0;
		float L_5 = L_4.get_movementSpeed_4();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_6 = ___goal1;
		float L_7 = L_6.get_movementSpeed_4();
		float L_8;
		L_8 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// return Vector3.MoveTowards(currentPosition, goal.localPosition, speed * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___currentPosition2;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_10 = ___goal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = L_10.get_localPosition_1();
		float L_12 = V_0;
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_9, L_11, ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), /*hidden argument*/NULL);
		return L_14;
	}

IL_003d:
	{
		// return currentPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___currentPosition2;
		return L_15;
	}
}
// UnityEngine.Quaternion Mirror.Experimental.NetworkTransformBase::InterpolateRotation(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  NetworkTransformBase_InterpolateRotation_mF2BD9EE260C54BAC30CA8E8F7B1D0C340E9A4AA3 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___start0, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___goal1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___defaultRotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (!interpolateRotation)
		bool L_0 = __this->get_interpolateRotation_18();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return defaultRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___defaultRotation2;
		return L_1;
	}

IL_000a:
	{
		// if (start.localRotation != goal.localRotation)
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_2 = ___start0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = L_2.get_localRotation_2();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_4 = ___goal1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = L_4.get_localRotation_2();
		bool L_6;
		L_6 = Quaternion_op_Inequality_m37169F3E8ADDA24A5A221AD7397835B437B71439(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// float t = CurrentInterpolationFactor(start, goal);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_7 = ___start0;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_8 = ___goal1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = NetworkTransformBase_CurrentInterpolationFactor_m57D042970C468F9859120796244C46E7EB5C939F(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// return Quaternion.Slerp(start.localRotation, goal.localRotation, t);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_10 = ___start0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = L_10.get_localRotation_2();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_12 = ___goal1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = L_12.get_localRotation_2();
		float L_14 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_11, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0038:
	{
		// return defaultRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16 = ___defaultRotation2;
		return L_16;
	}
}
// UnityEngine.Vector3 Mirror.Experimental.NetworkTransformBase::InterpolateScale(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformBase_InterpolateScale_mE7CF32C3C3C82414721490C99C1971877DA04B88 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___start0, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___goal1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentScale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (!interpolateScale)
		bool L_0 = __this->get_interpolateScale_19();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return currentScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___currentScale2;
		return L_1;
	}

IL_000a:
	{
		// if (start.localScale != goal.localScale)
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_2 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_localScale_3();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_4 = ___goal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4.get_localScale_3();
		bool L_6;
		L_6 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// float t = CurrentInterpolationFactor(start, goal);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_7 = ___start0;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_8 = ___goal1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = NetworkTransformBase_CurrentInterpolationFactor_m57D042970C468F9859120796244C46E7EB5C939F(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// return Vector3.Lerp(start.localScale, goal.localScale, t);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_10 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = L_10.get_localScale_3();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_12 = ___goal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = L_12.get_localScale_3();
		float L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_11, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0038:
	{
		// return currentScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___currentScale2;
		return L_16;
	}
}
// System.Single Mirror.Experimental.NetworkTransformBase::CurrentInterpolationFactor(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTransformBase_CurrentInterpolationFactor_m57D042970C468F9859120796244C46E7EB5C939F (DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___start0, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___goal1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (start.isValid)
		bool L_0;
		L_0 = DataPoint_get_isValid_m305A8F1E2800210EEF2C12A7532FCF8602E0C020((DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 *)(&___start0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// float difference = goal.timeStamp - start.timeStamp;
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_1 = ___goal1;
		float L_2 = L_1.get_timeStamp_0();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_3 = ___start0;
		float L_4 = L_3.get_timeStamp_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_4));
		// float elapsed = Time.time - goal.timeStamp;
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_6 = ___goal1;
		float L_7 = L_6.get_timeStamp_0();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		// return difference > 0 ? elapsed / difference : 1;
		float L_8 = V_0;
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_0032;
		}
	}
	{
		return (1.0f);
	}

IL_0032:
	{
		float L_9 = V_1;
		float L_10 = V_0;
		return ((float)((float)L_9/(float)L_10));
	}

IL_0036:
	{
		// return 1;
		return (1.0f);
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::ServerTeleport(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ServerTeleport_mEF9ECFA0FBCF2D0448284B511692CB61AF0CCCCE (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26B75020571297215410303FD55377E85D5E01AC);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral26B75020571297215410303FD55377E85D5E01AC, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		// Quaternion localRotation = targetTransform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// ServerTeleport(localPosition, localRotation);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___localPosition0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = V_0;
		NetworkTransformBase_ServerTeleport_m4E8F9CA127E8100055D926476AA8C1ACDE46B6B5(__this, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::ServerTeleport(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_ServerTeleport_m4E8F9CA127E8100055D926476AA8C1ACDE46B6B5 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___localRotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD0A121928400A7E17E79DEF80149E4FAB3619DD);
		s_Il2CppMethodInitialized = true;
	}
	NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * G_B4_0 = NULL;
	NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * G_B5_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralFD0A121928400A7E17E79DEF80149E4FAB3619DD, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		// clientAuthorityBeforeTeleport = clientAuthority || clientAuthorityBeforeTeleport;
		bool L_1 = __this->get_clientAuthority_12();
		G_B3_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0026;
		}
	}
	{
		bool L_2 = __this->get_clientAuthorityBeforeTeleport_28();
		G_B5_0 = ((int32_t)(L_2));
		G_B5_1 = G_B3_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0027:
	{
		G_B5_1->set_clientAuthorityBeforeTeleport_28((bool)G_B5_0);
		// clientAuthority = false;
		NetworkTransformBase_set_NetworkclientAuthority_m329724D832B6923D591BC62EF06ADD3DE0CE9BF4(__this, (bool)0, /*hidden argument*/NULL);
		// DoTeleport(localPosition, localRotation);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___localPosition0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___localRotation1;
		NetworkTransformBase_DoTeleport_m263D5F57F8117BBBBFFFEE420D210B9ECE708021(__this, L_3, L_4, /*hidden argument*/NULL);
		// RpcTeleport(localPosition, Compression.CompressQuaternion(localRotation), clientAuthorityBeforeTeleport);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___localPosition0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = ___localRotation1;
		uint32_t L_7;
		L_7 = Compression_CompressQuaternion_mC1DD43E3FA152477293A562CA2713DAC89B89CFE(L_6, /*hidden argument*/NULL);
		bool L_8 = __this->get_clientAuthorityBeforeTeleport_28();
		NetworkTransformBase_RpcTeleport_m2E06E42230A147CB253024D7DFBBF3AD357F8F27(__this, L_5, L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::DoTeleport(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_DoTeleport_m263D5F57F8117BBBBFFFEE420D210B9ECE708021 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newLocalPosition0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newLocalRotation1, const RuntimeMethod* method)
{
	{
		// targetTransform.localPosition = newLocalPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___newLocalPosition0;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_1, /*hidden argument*/NULL);
		// targetTransform.localRotation = newLocalRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(15 /* UnityEngine.Transform Mirror.Experimental.NetworkTransformBase::get_targetTransform() */, __this);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___newLocalRotation1;
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_2, L_3, /*hidden argument*/NULL);
		// goal = new DataPoint();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_4 = __this->get_address_of_goal_27();
		il2cpp_codegen_initobj(L_4, sizeof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 ));
		// start = new DataPoint();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_5 = __this->get_address_of_start_26();
		il2cpp_codegen_initobj(L_5, sizeof(DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 ));
		// lastPosition = newLocalPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___newLocalPosition0;
		__this->set_lastPosition_23(L_6);
		// lastRotation = newLocalRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = ___newLocalRotation1;
		__this->set_lastRotation_24(L_7);
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::RpcTeleport(UnityEngine.Vector3,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_RpcTeleport_m2E06E42230A147CB253024D7DFBBF3AD357F8F27 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPosition0, uint32_t ___newPackedRotation1, bool ___isClientAuthority2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B0C0B3B5737768910C87A81DCFBC477840C45DC);
		s_Il2CppMethodInitialized = true;
	}
	PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_0;
		L_0 = NetworkWriterPool_GetWriter_m53506C8016911951C82F2F83E45592CE2F9A85AE(/*hidden argument*/NULL);
		V_0 = L_0;
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_1 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___newPosition0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609(L_1, L_2, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_3 = V_0;
		uint32_t L_4 = ___newPackedRotation1;
		NetworkWriterExtensions_WriteUInt_mFDC458AC35F7EF0D09E7A0D779ACF37D12346D64(L_3, L_4, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_5 = V_0;
		bool L_6 = ___isClientAuthority2;
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_5, L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_9 = V_0;
		NetworkBehaviour_SendRPCInternal_m3E76275A3E52E54BF11483D924A21D58285586DF(__this, L_8, _stringLiteral9B0C0B3B5737768910C87A81DCFBC477840C45DC, L_9, ((int32_t)1), (bool)1, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_10 = V_0;
		NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::CmdTeleportFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_CmdTeleportFinished_m050A5E005BC56812AD1B546651AC723C40BAC482 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF79B8C7B487D624B0C0713CD6BB90DEEB344D81F);
		s_Il2CppMethodInitialized = true;
	}
	PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_0;
		L_0 = NetworkWriterPool_GetWriter_m53506C8016911951C82F2F83E45592CE2F9A85AE(/*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_3 = V_0;
		NetworkBehaviour_SendCommandInternal_m81D09DA3B313767B581AFB3F5BC4535807CC5700(__this, L_2, _stringLiteralF79B8C7B487D624B0C0713CD6BB90DEEB344D81F, L_3, ((int32_t)1), (bool)1, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_4 = V_0;
		NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_OnDrawGizmos_m201BD602C906DF0CAB4062EDD55D72F5ECCB04E3 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (start.localPosition != goal.localPosition)
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_0 = __this->get_address_of_start_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0->get_localPosition_1();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_2 = __this->get_address_of_goal_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2->get_localPosition_1();
		bool L_4;
		L_4 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		// DrawDataPointGizmo(start, Color.yellow);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_5 = __this->get_start_26();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		NetworkTransformBase_DrawDataPointGizmo_mFD807536E36BE9F41548EEE3A54BB47E2DF5D243(L_5, L_6, /*hidden argument*/NULL);
		// DrawDataPointGizmo(goal, Color.green);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_7 = __this->get_goal_27();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NetworkTransformBase_DrawDataPointGizmo_mFD807536E36BE9F41548EEE3A54BB47E2DF5D243(L_7, L_8, /*hidden argument*/NULL);
		// DrawLineBetweenDataPoints(start, goal, Color.cyan);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_9 = __this->get_start_26();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_10 = __this->get_goal_27();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		NetworkTransformBase_DrawLineBetweenDataPoints_mE3DDE940CB2BE44F00945DEEF485DED039EC6CF1(L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::DrawDataPointGizmo(Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_DrawDataPointGizmo_mFD807536E36BE9F41548EEE3A54BB47E2DF5D243 (DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___data0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 offset = Vector3.up * 0.01f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_0, (0.00999999978f), /*hidden argument*/NULL);
		V_0 = L_1;
		// Gizmos.color = color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color1;
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_2, /*hidden argument*/NULL);
		// Gizmos.DrawSphere(data.localPosition + offset, 0.5f);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_3 = ___data0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3.get_localPosition_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		Gizmos_DrawSphere_m50414CF8E502F4D93FC133091DA5E39543D69E91(L_6, (0.5f), /*hidden argument*/NULL);
		// Gizmos.color = Color.blue;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_7, /*hidden argument*/NULL);
		// Gizmos.DrawRay(data.localPosition + offset, data.localRotation * Vector3.forward);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_8 = ___data0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = L_8.get_localPosition_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_12 = ___data0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = L_12.get_localRotation_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_13, L_14, /*hidden argument*/NULL);
		Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(L_11, L_15, /*hidden argument*/NULL);
		// Gizmos.color = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_16, /*hidden argument*/NULL);
		// Gizmos.DrawRay(data.localPosition + offset, data.localRotation * Vector3.up);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_17 = ___data0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = L_17.get_localPosition_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_19, /*hidden argument*/NULL);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_21 = ___data0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22 = L_21.get_localRotation_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_22, L_23, /*hidden argument*/NULL);
		Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(L_20, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::DrawLineBetweenDataPoints(Mirror.Experimental.NetworkTransformBase/DataPoint,Mirror.Experimental.NetworkTransformBase/DataPoint,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_DrawLineBetweenDataPoints_mE3DDE940CB2BE44F00945DEEF485DED039EC6CF1 (DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___data10, DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  ___data21, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method)
{
	{
		// Gizmos.color = color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___color2;
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_0, /*hidden argument*/NULL);
		// Gizmos.DrawLine(data1.localPosition, data2.localPosition);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_1 = ___data10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1.get_localPosition_1();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7  L_3 = ___data21;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3.get_localPosition_1();
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase__ctor_m7F1BEF03D49DB00ED74D85970D5E30A8B14E377E (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	{
		// public bool excludeOwnerUpdate = true;
		__this->set_excludeOwnerUpdate_13((bool)1);
		// public bool syncPosition = true;
		__this->set_syncPosition_14((bool)1);
		// public bool syncRotation = true;
		__this->set_syncRotation_15((bool)1);
		// public bool syncScale = true;
		__this->set_syncScale_16((bool)1);
		// public bool interpolatePosition = true;
		__this->set_interpolatePosition_17((bool)1);
		// public bool interpolateRotation = true;
		__this->set_interpolateRotation_18((bool)1);
		// public bool interpolateScale = true;
		__this->set_interpolateScale_19((bool)1);
		// public float localPositionSensitivity = .01f;
		__this->set_localPositionSensitivity_20((0.00999999978f));
		// public float localRotationSensitivity = .01f;
		__this->set_localRotationSensitivity_21((0.00999999978f));
		// public float localScaleSensitivity = .01f;
		__this->set_localScaleSensitivity_22((0.00999999978f));
		NetworkBehaviour__ctor_mB98FF8F52DCEBEB3BC7679DE03FA50785207EE78(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::MirrorProcessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_MirrorProcessed_m355817808C7A2B0B14201E075702C86BDDD964C6 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_NetworkclientAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_NetworkclientAuthority_m9657103DC3F3AE77A3E1A2B8405051D1A9280AAD (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_clientAuthority_12();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworkclientAuthority(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworkclientAuthority_m329724D832B6923D591BC62EF06ADD3DE0CE9BF4 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		bool* L_1 = __this->get_address_of_clientAuthority_12();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539(__this, L_0, (bool*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3 = __this->get_clientAuthority_12();
		V_0 = L_3;
		bool L_4 = ___value0;
		bool* L_5 = __this->get_address_of_clientAuthority_12();
		NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8(__this, L_4, (bool*)L_5, ((int64_t)1LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_NetworkexcludeOwnerUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_NetworkexcludeOwnerUpdate_m0BF4BA43B8F9BF3778B24090EE3E466E90B3F790 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_excludeOwnerUpdate_13();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworkexcludeOwnerUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworkexcludeOwnerUpdate_m293E54A64E1605CCF0EAD5AEE835EBD65D5C1355 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		bool* L_1 = __this->get_address_of_excludeOwnerUpdate_13();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539(__this, L_0, (bool*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3 = __this->get_excludeOwnerUpdate_13();
		V_0 = L_3;
		bool L_4 = ___value0;
		bool* L_5 = __this->get_address_of_excludeOwnerUpdate_13();
		NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8(__this, L_4, (bool*)L_5, ((int64_t)2LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_NetworksyncPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_NetworksyncPosition_m7CB08BAC1947C7E530679774D7CC134291001397 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_syncPosition_14();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworksyncPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworksyncPosition_m43212BC29791176F5B832D0256D311E96D608ED1 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		bool* L_1 = __this->get_address_of_syncPosition_14();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539(__this, L_0, (bool*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3 = __this->get_syncPosition_14();
		V_0 = L_3;
		bool L_4 = ___value0;
		bool* L_5 = __this->get_address_of_syncPosition_14();
		NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8(__this, L_4, (bool*)L_5, ((int64_t)4LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_NetworksyncRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_NetworksyncRotation_m7BD9DAE6B4A679FF60B4749B8EEBE2A23797A418 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_syncRotation_15();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworksyncRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworksyncRotation_m50AE877EA7ABEE8E9860568BAFD9E94C08CA1CEE (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		bool* L_1 = __this->get_address_of_syncRotation_15();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539(__this, L_0, (bool*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3 = __this->get_syncRotation_15();
		V_0 = L_3;
		bool L_4 = ___value0;
		bool* L_5 = __this->get_address_of_syncRotation_15();
		NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8(__this, L_4, (bool*)L_5, ((int64_t)8LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_NetworksyncScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_NetworksyncScale_m332806A5D48BD3671C71ED9D6D6C9644FBC95A63 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_syncScale_16();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworksyncScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworksyncScale_m22C987C09CBDF8B8EFBD0C0AC52915621ED75ADA (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		bool* L_1 = __this->get_address_of_syncScale_16();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539(__this, L_0, (bool*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3 = __this->get_syncScale_16();
		V_0 = L_3;
		bool L_4 = ___value0;
		bool* L_5 = __this->get_address_of_syncScale_16();
		NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8(__this, L_4, (bool*)L_5, ((int64_t)16LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_NetworkinterpolatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_NetworkinterpolatePosition_m9819D816848F20F6B1F4796496912EC5826EA9F1 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_interpolatePosition_17();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworkinterpolatePosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworkinterpolatePosition_mB0A6D4026D0AC9F0BDC3C23A333CB1C7AC49D277 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		bool* L_1 = __this->get_address_of_interpolatePosition_17();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539(__this, L_0, (bool*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3 = __this->get_interpolatePosition_17();
		V_0 = L_3;
		bool L_4 = ___value0;
		bool* L_5 = __this->get_address_of_interpolatePosition_17();
		NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8(__this, L_4, (bool*)L_5, ((int64_t)32LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_NetworkinterpolateRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_NetworkinterpolateRotation_mCCE3E9053877A3165C8F66F2B7C540D191AA0473 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_interpolateRotation_18();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworkinterpolateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworkinterpolateRotation_m415B821B6054A740529F1F57D5F79764B19FD3E6 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		bool* L_1 = __this->get_address_of_interpolateRotation_18();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539(__this, L_0, (bool*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3 = __this->get_interpolateRotation_18();
		V_0 = L_3;
		bool L_4 = ___value0;
		bool* L_5 = __this->get_address_of_interpolateRotation_18();
		NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8(__this, L_4, (bool*)L_5, ((int64_t)64LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::get_NetworkinterpolateScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_get_NetworkinterpolateScale_m6C81E85950710AD4ADCA563F4A67BCAB89AA2515 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_interpolateScale_19();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworkinterpolateScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworkinterpolateScale_m325A8BBBB5416AE0AD5A1BD3B2AEF7EB66F192A1 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		bool* L_1 = __this->get_address_of_interpolateScale_19();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539(__this, L_0, (bool*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mFA57E3577D0B6E5B2F30ABDB3743EBAD430C0539_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3 = __this->get_interpolateScale_19();
		V_0 = L_3;
		bool L_4 = ___value0;
		bool* L_5 = __this->get_address_of_interpolateScale_19();
		NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8(__this, L_4, (bool*)L_5, ((int64_t)128LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m13526032096531A4ED049022ADF72ABCEDB1D7B8_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Single Mirror.Experimental.NetworkTransformBase::get_NetworklocalPositionSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTransformBase_get_NetworklocalPositionSensitivity_mB732054AE7D1FC2EB57BFEC50917438EE5F5888E (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_localPositionSensitivity_20();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworklocalPositionSensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworklocalPositionSensitivity_mD0E30BE1A2BB1F78C732AF07B6F548B96B17D3D1 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___value0;
		float* L_1 = __this->get_address_of_localPositionSensitivity_20();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75(__this, L_0, (float*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		float L_3 = __this->get_localPositionSensitivity_20();
		V_0 = L_3;
		float L_4 = ___value0;
		float* L_5 = __this->get_address_of_localPositionSensitivity_20();
		NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE(__this, L_4, (float*)L_5, ((int64_t)256LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Single Mirror.Experimental.NetworkTransformBase::get_NetworklocalRotationSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTransformBase_get_NetworklocalRotationSensitivity_mC67052F68DE8FB87906A31FF66D9903A0AAB6F7B (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_localRotationSensitivity_21();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworklocalRotationSensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworklocalRotationSensitivity_m93017DBC9971A0CF2532C055B1E77B6DCF076290 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___value0;
		float* L_1 = __this->get_address_of_localRotationSensitivity_21();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75(__this, L_0, (float*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		float L_3 = __this->get_localRotationSensitivity_21();
		V_0 = L_3;
		float L_4 = ___value0;
		float* L_5 = __this->get_address_of_localRotationSensitivity_21();
		NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE(__this, L_4, (float*)L_5, ((int64_t)512LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Single Mirror.Experimental.NetworkTransformBase::get_NetworklocalScaleSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTransformBase_get_NetworklocalScaleSensitivity_m79A978CC85991F22D95908A2417A747ACD075050 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_localScaleSensitivity_22();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::set_NetworklocalScaleSensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_set_NetworklocalScaleSensitivity_mEC39778F89A07F616CCDC8D8DA673BA0A7FE46E7 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___value0;
		float* L_1 = __this->get_address_of_localScaleSensitivity_22();
		bool L_2;
		L_2 = NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75(__this, L_0, (float*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDC3EFAB00B232AFBD0312BA180B862443B8A3C75_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		float L_3 = __this->get_localScaleSensitivity_22();
		V_0 = L_3;
		float L_4 = ___value0;
		float* L_5 = __this->get_address_of_localScaleSensitivity_22();
		NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE(__this, L_4, (float*)L_5, ((int64_t)1024LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1EEF9E2461ACC9552909A55B6DAF3FF12251B0EE_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::UserCode_CmdClientToServerSync(UnityEngine.Vector3,System.UInt32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_UserCode_CmdClientToServerSync_m18835CCFFB9079B57361EEBF45D0ADCA6DE24D73 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, uint32_t ___packedRotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method)
{
	{
		// if (!clientAuthority)
		bool L_0 = __this->get_clientAuthority_12();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// SetGoal(position, Compression.DecompressQuaternion(packedRotation), scale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position0;
		uint32_t L_2 = ___packedRotation1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Compression_DecompressQuaternion_m235BB50DA4C0504C27545528ED733C1E0CD246EC(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___scale2;
		NetworkTransformBase_SetGoal_mC25E7E30409614EFEE368262A0537524E4B94211(__this, L_1, L_3, L_4, /*hidden argument*/NULL);
		// if (isServer && !isClient)
		bool L_5;
		L_5 = NetworkBehaviour_get_isServer_m6CF3499812C1F2679BB924165AA79C59E6D2EBCF(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		bool L_6;
		L_6 = NetworkBehaviour_get_isClient_m87FF41CC03AD448B05627F3711F8E27C63D5C615(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_004e;
		}
	}
	{
		// ApplyPositionRotationScale(goal.localPosition, goal.localRotation, goal.localScale);
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_7 = __this->get_address_of_goal_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7->get_localPosition_1();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_9 = __this->get_address_of_goal_27();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9->get_localRotation_2();
		DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * L_11 = __this->get_address_of_goal_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = L_11->get_localScale_3();
		NetworkTransformBase_ApplyPositionRotationScale_m37BF4F818B78F7B9A8AFEA603B2B54A5CEF8EA4E(__this, L_8, L_10, L_12, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// RpcMove(position, packedRotation, scale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___position0;
		uint32_t L_14 = ___packedRotation1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___scale2;
		NetworkTransformBase_RpcMove_mC089E102E8C3C1B5C7F316FCF57C7B4486476EE4(__this, L_13, L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::InvokeUserCode_CmdClientToServerSync(Mirror.NetworkBehaviour,Mirror.NetworkReader,Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_InvokeUserCode_CmdClientToServerSync_mF9BD09FB414F89B314EC06D2A2C2AB283F8B9930 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___obj0, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader1, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___senderConnection2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1773AC2AEF82926453A7E1008BF8D9375E3CE23C);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral1773AC2AEF82926453A7E1008BF8D9375E3CE23C, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_1 = ___obj0;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416(L_2, /*hidden argument*/NULL);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_4 = ___reader1;
		uint32_t L_5;
		L_5 = NetworkReaderExtensions_ReadUInt_mFA3BF8869BCF94137E3F40CFF79B3CE4B93C3D90(L_4, /*hidden argument*/NULL);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_6 = ___reader1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416(L_6, /*hidden argument*/NULL);
		NetworkTransformBase_UserCode_CmdClientToServerSync_m18835CCFFB9079B57361EEBF45D0ADCA6DE24D73(((NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 *)CastclassClass((RuntimeObject*)L_1, NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var)), L_3, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::UserCode_RpcMove(UnityEngine.Vector3,System.UInt32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_UserCode_RpcMove_m3F40268027802898D7F9D4B225FFD7E6B4CE857E (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, uint32_t ___packedRotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method)
{
	{
		// if (hasAuthority && excludeOwnerUpdate) return;
		bool L_0;
		L_0 = NetworkBehaviour_get_hasAuthority_m8C249EBFD9F083DE67F38A74E3245727C6035167(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->get_excludeOwnerUpdate_13();
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (hasAuthority && excludeOwnerUpdate) return;
		return;
	}

IL_0011:
	{
		// if (!isServer)
		bool L_2;
		L_2 = NetworkBehaviour_get_isServer_m6CF3499812C1F2679BB924165AA79C59E6D2EBCF(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// SetGoal(position, Compression.DecompressQuaternion(packedRotation), scale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___position0;
		uint32_t L_4 = ___packedRotation1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Compression_DecompressQuaternion_m235BB50DA4C0504C27545528ED733C1E0CD246EC(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___scale2;
		NetworkTransformBase_SetGoal_mC25E7E30409614EFEE368262A0537524E4B94211(__this, L_3, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::InvokeUserCode_RpcMove(Mirror.NetworkBehaviour,Mirror.NetworkReader,Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_InvokeUserCode_RpcMove_mE6DEC9B981120849147D01DE240373B44D87680D (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___obj0, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader1, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___senderConnection2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FE92AFF066000A90073CFD1CC7D1D3B04A60B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkClient_get_active_m80C7ACA728DE7F6F6B5DC6C0E80B5AD0D287EA37(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralC8FE92AFF066000A90073CFD1CC7D1D3B04A60B5, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_1 = ___obj0;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416(L_2, /*hidden argument*/NULL);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_4 = ___reader1;
		uint32_t L_5;
		L_5 = NetworkReaderExtensions_ReadUInt_mFA3BF8869BCF94137E3F40CFF79B3CE4B93C3D90(L_4, /*hidden argument*/NULL);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_6 = ___reader1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416(L_6, /*hidden argument*/NULL);
		NetworkTransformBase_UserCode_RpcMove_m3F40268027802898D7F9D4B225FFD7E6B4CE857E(((NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 *)CastclassClass((RuntimeObject*)L_1, NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var)), L_3, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::UserCode_RpcTeleport(UnityEngine.Vector3,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_UserCode_RpcTeleport_m0E4373E1790F2BF74F477030613AEDA494AD1C88 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPosition0, uint32_t ___newPackedRotation1, bool ___isClientAuthority2, const RuntimeMethod* method)
{
	{
		// DoTeleport(newPosition, Compression.DecompressQuaternion(newPackedRotation));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___newPosition0;
		uint32_t L_1 = ___newPackedRotation1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Compression_DecompressQuaternion_m235BB50DA4C0504C27545528ED733C1E0CD246EC(L_1, /*hidden argument*/NULL);
		NetworkTransformBase_DoTeleport_m263D5F57F8117BBBBFFFEE420D210B9ECE708021(__this, L_0, L_2, /*hidden argument*/NULL);
		// if (hasAuthority && isClientAuthority)
		bool L_3;
		L_3 = NetworkBehaviour_get_hasAuthority_m8C249EBFD9F083DE67F38A74E3245727C6035167(__this, /*hidden argument*/NULL);
		bool L_4 = ___isClientAuthority2;
		if (!((int32_t)((int32_t)L_3&(int32_t)L_4)))
		{
			goto IL_001d;
		}
	}
	{
		// CmdTeleportFinished();
		NetworkTransformBase_CmdTeleportFinished_m050A5E005BC56812AD1B546651AC723C40BAC482(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::InvokeUserCode_RpcTeleport(Mirror.NetworkBehaviour,Mirror.NetworkReader,Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_InvokeUserCode_RpcTeleport_mC5DA20F023A25373328B2BE6F96BF3B704EEB05A (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___obj0, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader1, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___senderConnection2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral001046C5058A2A3561FFC554A7BFA59C3216D35C);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkClient_get_active_m80C7ACA728DE7F6F6B5DC6C0E80B5AD0D287EA37(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral001046C5058A2A3561FFC554A7BFA59C3216D35C, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_1 = ___obj0;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416(L_2, /*hidden argument*/NULL);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_4 = ___reader1;
		uint32_t L_5;
		L_5 = NetworkReaderExtensions_ReadUInt_mFA3BF8869BCF94137E3F40CFF79B3CE4B93C3D90(L_4, /*hidden argument*/NULL);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_6 = ___reader1;
		bool L_7;
		L_7 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_6, /*hidden argument*/NULL);
		NetworkTransformBase_UserCode_RpcTeleport_m0E4373E1790F2BF74F477030613AEDA494AD1C88(((NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 *)CastclassClass((RuntimeObject*)L_1, NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var)), L_3, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::UserCode_CmdTeleportFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_UserCode_CmdTeleportFinished_m0430E546F2CCA58FF782AD2F02DAD796AE1A4C9B (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral657684025BDBCF20B239023903AABD67342ED9D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clientAuthorityBeforeTeleport)
		bool L_0 = __this->get_clientAuthorityBeforeTeleport_28();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// clientAuthority = true;
		NetworkTransformBase_set_NetworkclientAuthority_m329724D832B6923D591BC62EF06ADD3DE0CE9BF4(__this, (bool)1, /*hidden argument*/NULL);
		// clientAuthorityBeforeTeleport = false;
		__this->set_clientAuthorityBeforeTeleport_28((bool)0);
		// }
		return;
	}

IL_0017:
	{
		// Debug.LogWarning("Client called TeleportFinished when clientAuthority was false on server", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(_stringLiteral657684025BDBCF20B239023903AABD67342ED9D8, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::InvokeUserCode_CmdTeleportFinished(Mirror.NetworkBehaviour,Mirror.NetworkReader,Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_InvokeUserCode_CmdTeleportFinished_m26EEA3E6F568579CCB33A52023CBABA036D384B0 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___obj0, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader1, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___senderConnection2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D16C380E80A97A9F69F351DE4BFCFAA23E2CCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral27D16C380E80A97A9F69F351DE4BFCFAA23E2CCC, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_1 = ___obj0;
		NetworkTransformBase_UserCode_CmdTeleportFinished_m0430E546F2CCA58FF782AD2F02DAD796AE1A4C9B(((NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 *)CastclassClass((RuntimeObject*)L_1, NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase__cctor_mF6F411DFE380188412E290AF41D132A68497C104 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_InvokeUserCode_CmdClientToServerSync_mF9BD09FB414F89B314EC06D2A2C2AB283F8B9930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_InvokeUserCode_CmdTeleportFinished_m26EEA3E6F568579CCB33A52023CBABA036D384B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_InvokeUserCode_RpcMove_mE6DEC9B981120849147D01DE240373B44D87680D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_InvokeUserCode_RpcTeleport_mC5DA20F023A25373328B2BE6F96BF3B704EEB05A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42470E6A6DE57CCBBA1718521E05CACF86633451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86D7317D8F52D0566180D8B4AB17C20C7C4D4A26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B0C0B3B5737768910C87A81DCFBC477840C45DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF79B8C7B487D624B0C0713CD6BB90DEEB344D81F);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_2 = (CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF *)il2cpp_codegen_object_new(CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF_il2cpp_TypeInfo_var);
		CmdDelegate__ctor_m25AAD7CB2265BEF6CC263E5F620322D0B874CAD8(L_2, NULL, (intptr_t)((intptr_t)NetworkTransformBase_InvokeUserCode_CmdClientToServerSync_mF9BD09FB414F89B314EC06D2A2C2AB283F8B9930_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		RemoteCallHelper_RegisterCommandDelegate_m196440B96E1D7A909D38037A770734FC5139842F(L_1, _stringLiteral42470E6A6DE57CCBBA1718521E05CACF86633451, L_2, (bool)1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_5 = (CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF *)il2cpp_codegen_object_new(CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF_il2cpp_TypeInfo_var);
		CmdDelegate__ctor_m25AAD7CB2265BEF6CC263E5F620322D0B874CAD8(L_5, NULL, (intptr_t)((intptr_t)NetworkTransformBase_InvokeUserCode_CmdTeleportFinished_m26EEA3E6F568579CCB33A52023CBABA036D384B0_RuntimeMethod_var), /*hidden argument*/NULL);
		RemoteCallHelper_RegisterCommandDelegate_m196440B96E1D7A909D38037A770734FC5139842F(L_4, _stringLiteralF79B8C7B487D624B0C0713CD6BB90DEEB344D81F, L_5, (bool)1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_8 = (CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF *)il2cpp_codegen_object_new(CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF_il2cpp_TypeInfo_var);
		CmdDelegate__ctor_m25AAD7CB2265BEF6CC263E5F620322D0B874CAD8(L_8, NULL, (intptr_t)((intptr_t)NetworkTransformBase_InvokeUserCode_RpcMove_mE6DEC9B981120849147D01DE240373B44D87680D_RuntimeMethod_var), /*hidden argument*/NULL);
		RemoteCallHelper_RegisterRpcDelegate_m3381432C36F433DF9E6D924514BEBAD8B37B7AC9(L_7, _stringLiteral86D7317D8F52D0566180D8B4AB17C20C7C4D4A26, L_8, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_0_0_0_var) };
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_11 = (CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF *)il2cpp_codegen_object_new(CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF_il2cpp_TypeInfo_var);
		CmdDelegate__ctor_m25AAD7CB2265BEF6CC263E5F620322D0B874CAD8(L_11, NULL, (intptr_t)((intptr_t)NetworkTransformBase_InvokeUserCode_RpcTeleport_mC5DA20F023A25373328B2BE6F96BF3B704EEB05A_RuntimeMethod_var), /*hidden argument*/NULL);
		RemoteCallHelper_RegisterRpcDelegate_m3381432C36F433DF9E6D924514BEBAD8B37B7AC9(L_10, _stringLiteral9B0C0B3B5737768910C87A81DCFBC477840C45DC, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.Experimental.NetworkTransformBase::SerializeSyncVars(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformBase_SerializeSyncVars_m14AB6A526E35FCDAD98B8826B4194BA380AB2EF3 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, bool ___forceAll1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		bool L_1 = ___forceAll1;
		bool L_2;
		L_2 = NetworkBehaviour_SerializeSyncVars_m4AF8BE097726BA018E3762C14E33BDBF3A5C4819(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = ___forceAll1;
		if (!L_3)
		{
			goto IL_0095;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_4 = ___writer0;
		bool L_5 = __this->get_clientAuthority_12();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_4, L_5, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		bool L_7 = __this->get_excludeOwnerUpdate_13();
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_6, L_7, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_8 = ___writer0;
		bool L_9 = __this->get_syncPosition_14();
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_8, L_9, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_10 = ___writer0;
		bool L_11 = __this->get_syncRotation_15();
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_10, L_11, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_12 = ___writer0;
		bool L_13 = __this->get_syncScale_16();
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_12, L_13, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_14 = ___writer0;
		bool L_15 = __this->get_interpolatePosition_17();
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_14, L_15, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_16 = ___writer0;
		bool L_17 = __this->get_interpolateRotation_18();
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_16, L_17, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_18 = ___writer0;
		bool L_19 = __this->get_interpolateScale_19();
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_18, L_19, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_20 = ___writer0;
		float L_21 = __this->get_localPositionSensitivity_20();
		NetworkWriterExtensions_WriteFloat_mCC353B70D9FBACD2D2CECA565EC7B2B30400A6A5(L_20, L_21, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_22 = ___writer0;
		float L_23 = __this->get_localRotationSensitivity_21();
		NetworkWriterExtensions_WriteFloat_mCC353B70D9FBACD2D2CECA565EC7B2B30400A6A5(L_22, L_23, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_24 = ___writer0;
		float L_25 = __this->get_localScaleSensitivity_22();
		NetworkWriterExtensions_WriteFloat_mCC353B70D9FBACD2D2CECA565EC7B2B30400A6A5(L_24, L_25, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0095:
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_26 = ___writer0;
		uint64_t L_27;
		L_27 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteULong_mF3B9637FA1C3EA31551616D085A5A3AF041E6963(L_26, L_27, /*hidden argument*/NULL);
		uint64_t L_28;
		L_28 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_28&(int64_t)((int64_t)1LL))))
		{
			goto IL_00c5;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_29 = ___writer0;
		bool L_30 = __this->get_clientAuthority_12();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_29, L_30, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_00c5:
	{
		uint64_t L_31;
		L_31 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_31&(int64_t)((int64_t)2LL))))
		{
			goto IL_00e9;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_32 = ___writer0;
		bool L_33 = __this->get_excludeOwnerUpdate_13();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_32, L_33, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_00e9:
	{
		uint64_t L_34;
		L_34 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_34&(int64_t)((int64_t)4LL))))
		{
			goto IL_010d;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_35 = ___writer0;
		bool L_36 = __this->get_syncPosition_14();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_35, L_36, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_010d:
	{
		uint64_t L_37;
		L_37 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_37&(int64_t)((int64_t)8LL))))
		{
			goto IL_0131;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_38 = ___writer0;
		bool L_39 = __this->get_syncRotation_15();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_38, L_39, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0131:
	{
		uint64_t L_40;
		L_40 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_40&(int64_t)((int64_t)16LL))))
		{
			goto IL_0155;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_41 = ___writer0;
		bool L_42 = __this->get_syncScale_16();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_41, L_42, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0155:
	{
		uint64_t L_43;
		L_43 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_43&(int64_t)((int64_t)32LL))))
		{
			goto IL_0179;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_44 = ___writer0;
		bool L_45 = __this->get_interpolatePosition_17();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_44, L_45, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0179:
	{
		uint64_t L_46;
		L_46 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_46&(int64_t)((int64_t)64LL))))
		{
			goto IL_019d;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_47 = ___writer0;
		bool L_48 = __this->get_interpolateRotation_18();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_47, L_48, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_019d:
	{
		uint64_t L_49;
		L_49 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_49&(int64_t)((int64_t)128LL))))
		{
			goto IL_01c1;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_50 = ___writer0;
		bool L_51 = __this->get_interpolateScale_19();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteBool_mF0B4A6ADF594071A21F89B4AC0FD3594F5D38157(L_50, L_51, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_01c1:
	{
		uint64_t L_52;
		L_52 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_52&(int64_t)((int64_t)256LL))))
		{
			goto IL_01e5;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_53 = ___writer0;
		float L_54 = __this->get_localPositionSensitivity_20();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteFloat_mCC353B70D9FBACD2D2CECA565EC7B2B30400A6A5(L_53, L_54, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_01e5:
	{
		uint64_t L_55;
		L_55 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_55&(int64_t)((int64_t)512LL))))
		{
			goto IL_0209;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_56 = ___writer0;
		float L_57 = __this->get_localRotationSensitivity_21();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteFloat_mCC353B70D9FBACD2D2CECA565EC7B2B30400A6A5(L_56, L_57, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0209:
	{
		uint64_t L_58;
		L_58 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_58&(int64_t)((int64_t)1024LL))))
		{
			goto IL_022d;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_59 = ___writer0;
		float L_60 = __this->get_localScaleSensitivity_22();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteFloat_mCC353B70D9FBACD2D2CECA565EC7B2B30400A6A5(L_59, L_60, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_022d:
	{
		bool L_61 = V_0;
		return L_61;
	}
}
// System.Void Mirror.Experimental.NetworkTransformBase::DeserializeSyncVars(Mirror.NetworkReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformBase_DeserializeSyncVars_m8597B9457BE7674B1510C9A39AACC29FC0DF80B5 (NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555 * __this, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, bool ___initialState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	{
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		bool L_1 = ___initialState1;
		NetworkBehaviour_DeserializeSyncVars_mC87ECFD6F9C2D5C1306ABDF2CF6498864C84677A(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___initialState1;
		if (!L_2)
		{
			goto IL_0101;
		}
	}
	{
		bool L_3 = __this->get_clientAuthority_12();
		V_1 = L_3;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_4 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_4, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworkclientAuthority_m329724D832B6923D591BC62EF06ADD3DE0CE9BF4(__this, L_5, /*hidden argument*/NULL);
		bool L_6 = __this->get_excludeOwnerUpdate_13();
		V_2 = L_6;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_7 = ___reader0;
		bool L_8;
		L_8 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_7, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworkexcludeOwnerUpdate_m293E54A64E1605CCF0EAD5AEE835EBD65D5C1355(__this, L_8, /*hidden argument*/NULL);
		bool L_9 = __this->get_syncPosition_14();
		V_3 = L_9;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_10 = ___reader0;
		bool L_11;
		L_11 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_10, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworksyncPosition_m43212BC29791176F5B832D0256D311E96D608ED1(__this, L_11, /*hidden argument*/NULL);
		bool L_12 = __this->get_syncRotation_15();
		V_4 = L_12;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_13 = ___reader0;
		bool L_14;
		L_14 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_13, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworksyncRotation_m50AE877EA7ABEE8E9860568BAFD9E94C08CA1CEE(__this, L_14, /*hidden argument*/NULL);
		bool L_15 = __this->get_syncScale_16();
		V_5 = L_15;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_16 = ___reader0;
		bool L_17;
		L_17 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_16, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworksyncScale_m22C987C09CBDF8B8EFBD0C0AC52915621ED75ADA(__this, L_17, /*hidden argument*/NULL);
		bool L_18 = __this->get_interpolatePosition_17();
		V_6 = L_18;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_19 = ___reader0;
		bool L_20;
		L_20 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_19, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworkinterpolatePosition_mB0A6D4026D0AC9F0BDC3C23A333CB1C7AC49D277(__this, L_20, /*hidden argument*/NULL);
		bool L_21 = __this->get_interpolateRotation_18();
		V_7 = L_21;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_22 = ___reader0;
		bool L_23;
		L_23 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_22, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworkinterpolateRotation_m415B821B6054A740529F1F57D5F79764B19FD3E6(__this, L_23, /*hidden argument*/NULL);
		bool L_24 = __this->get_interpolateScale_19();
		V_8 = L_24;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_25 = ___reader0;
		bool L_26;
		L_26 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_25, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworkinterpolateScale_m325A8BBBB5416AE0AD5A1BD3B2AEF7EB66F192A1(__this, L_26, /*hidden argument*/NULL);
		float L_27 = __this->get_localPositionSensitivity_20();
		V_9 = L_27;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_28 = ___reader0;
		float L_29;
		L_29 = NetworkReaderExtensions_ReadFloat_m4DFFE1E95D7BEF889745B16F7963B32FD839FA64(L_28, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworklocalPositionSensitivity_mD0E30BE1A2BB1F78C732AF07B6F548B96B17D3D1(__this, L_29, /*hidden argument*/NULL);
		float L_30 = __this->get_localRotationSensitivity_21();
		V_10 = L_30;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_31 = ___reader0;
		float L_32;
		L_32 = NetworkReaderExtensions_ReadFloat_m4DFFE1E95D7BEF889745B16F7963B32FD839FA64(L_31, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworklocalRotationSensitivity_m93017DBC9971A0CF2532C055B1E77B6DCF076290(__this, L_32, /*hidden argument*/NULL);
		float L_33 = __this->get_localScaleSensitivity_22();
		V_11 = L_33;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_34 = ___reader0;
		float L_35;
		L_35 = NetworkReaderExtensions_ReadFloat_m4DFFE1E95D7BEF889745B16F7963B32FD839FA64(L_34, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworklocalScaleSensitivity_mEC39778F89A07F616CCDC8D8DA673BA0A7FE46E7(__this, L_35, /*hidden argument*/NULL);
		return;
	}

IL_0101:
	{
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_36 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint64_t L_37;
		L_37 = NetworkReaderExtensions_ReadULong_m01F59C890722632901DC6C16D461CF39E5EEFDAC(L_36, /*hidden argument*/NULL);
		V_0 = L_37;
		int64_t L_38 = V_0;
		if (!((int64_t)((int64_t)L_38&(int64_t)((int64_t)1LL))))
		{
			goto IL_012f;
		}
	}
	{
		bool L_39 = __this->get_clientAuthority_12();
		V_12 = L_39;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_40 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_40, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworkclientAuthority_m329724D832B6923D591BC62EF06ADD3DE0CE9BF4(__this, L_41, /*hidden argument*/NULL);
	}

IL_012f:
	{
		int64_t L_42 = V_0;
		if (!((int64_t)((int64_t)L_42&(int64_t)((int64_t)2LL))))
		{
			goto IL_0156;
		}
	}
	{
		bool L_43 = __this->get_excludeOwnerUpdate_13();
		V_13 = L_43;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_44 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_44, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworkexcludeOwnerUpdate_m293E54A64E1605CCF0EAD5AEE835EBD65D5C1355(__this, L_45, /*hidden argument*/NULL);
	}

IL_0156:
	{
		int64_t L_46 = V_0;
		if (!((int64_t)((int64_t)L_46&(int64_t)((int64_t)4LL))))
		{
			goto IL_017d;
		}
	}
	{
		bool L_47 = __this->get_syncPosition_14();
		V_14 = L_47;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_48 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_48, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworksyncPosition_m43212BC29791176F5B832D0256D311E96D608ED1(__this, L_49, /*hidden argument*/NULL);
	}

IL_017d:
	{
		int64_t L_50 = V_0;
		if (!((int64_t)((int64_t)L_50&(int64_t)((int64_t)8LL))))
		{
			goto IL_01a4;
		}
	}
	{
		bool L_51 = __this->get_syncRotation_15();
		V_15 = L_51;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_52 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_52, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworksyncRotation_m50AE877EA7ABEE8E9860568BAFD9E94C08CA1CEE(__this, L_53, /*hidden argument*/NULL);
	}

IL_01a4:
	{
		int64_t L_54 = V_0;
		if (!((int64_t)((int64_t)L_54&(int64_t)((int64_t)16LL))))
		{
			goto IL_01cb;
		}
	}
	{
		bool L_55 = __this->get_syncScale_16();
		V_16 = L_55;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_56 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_56, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworksyncScale_m22C987C09CBDF8B8EFBD0C0AC52915621ED75ADA(__this, L_57, /*hidden argument*/NULL);
	}

IL_01cb:
	{
		int64_t L_58 = V_0;
		if (!((int64_t)((int64_t)L_58&(int64_t)((int64_t)32LL))))
		{
			goto IL_01f2;
		}
	}
	{
		bool L_59 = __this->get_interpolatePosition_17();
		V_17 = L_59;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_60 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_60, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworkinterpolatePosition_mB0A6D4026D0AC9F0BDC3C23A333CB1C7AC49D277(__this, L_61, /*hidden argument*/NULL);
	}

IL_01f2:
	{
		int64_t L_62 = V_0;
		if (!((int64_t)((int64_t)L_62&(int64_t)((int64_t)64LL))))
		{
			goto IL_0219;
		}
	}
	{
		bool L_63 = __this->get_interpolateRotation_18();
		V_18 = L_63;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_64 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		bool L_65;
		L_65 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_64, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworkinterpolateRotation_m415B821B6054A740529F1F57D5F79764B19FD3E6(__this, L_65, /*hidden argument*/NULL);
	}

IL_0219:
	{
		int64_t L_66 = V_0;
		if (!((int64_t)((int64_t)L_66&(int64_t)((int64_t)128LL))))
		{
			goto IL_0240;
		}
	}
	{
		bool L_67 = __this->get_interpolateScale_19();
		V_19 = L_67;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_68 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = NetworkReaderExtensions_ReadBool_mB302D18DCEDDEDB917F1417AA91C6C3D0FF05FA7(L_68, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworkinterpolateScale_m325A8BBBB5416AE0AD5A1BD3B2AEF7EB66F192A1(__this, L_69, /*hidden argument*/NULL);
	}

IL_0240:
	{
		int64_t L_70 = V_0;
		if (!((int64_t)((int64_t)L_70&(int64_t)((int64_t)256LL))))
		{
			goto IL_0267;
		}
	}
	{
		float L_71 = __this->get_localPositionSensitivity_20();
		V_20 = L_71;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_72 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		float L_73;
		L_73 = NetworkReaderExtensions_ReadFloat_m4DFFE1E95D7BEF889745B16F7963B32FD839FA64(L_72, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworklocalPositionSensitivity_mD0E30BE1A2BB1F78C732AF07B6F548B96B17D3D1(__this, L_73, /*hidden argument*/NULL);
	}

IL_0267:
	{
		int64_t L_74 = V_0;
		if (!((int64_t)((int64_t)L_74&(int64_t)((int64_t)512LL))))
		{
			goto IL_028e;
		}
	}
	{
		float L_75 = __this->get_localRotationSensitivity_21();
		V_21 = L_75;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		float L_77;
		L_77 = NetworkReaderExtensions_ReadFloat_m4DFFE1E95D7BEF889745B16F7963B32FD839FA64(L_76, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworklocalRotationSensitivity_m93017DBC9971A0CF2532C055B1E77B6DCF076290(__this, L_77, /*hidden argument*/NULL);
	}

IL_028e:
	{
		int64_t L_78 = V_0;
		if (!((int64_t)((int64_t)L_78&(int64_t)((int64_t)1024LL))))
		{
			goto IL_02b5;
		}
	}
	{
		float L_79 = __this->get_localScaleSensitivity_22();
		V_22 = L_79;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_80 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		float L_81;
		L_81 = NetworkReaderExtensions_ReadFloat_m4DFFE1E95D7BEF889745B16F7963B32FD839FA64(L_80, /*hidden argument*/NULL);
		NetworkTransformBase_set_NetworklocalScaleSensitivity_mEC39778F89A07F616CCDC8D8DA673BA0A7FE46E7(__this, L_81, /*hidden argument*/NULL);
	}

IL_02b5:
	{
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
// UnityEngine.Transform Mirror.NetworkTransformChild::get_targetComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * NetworkTransformChild_get_targetComponent_m216A7116DDE37F0558F8B5AA345C6785947B73E8 (NetworkTransformChild_t5BCF31DB1CF06B9E4A05637871E288D51765466E * __this, const RuntimeMethod* method)
{
	{
		// protected override Transform targetComponent => target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_34();
		return L_0;
	}
}
// System.Void Mirror.NetworkTransformChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformChild__ctor_m4EEA184777FF3985E28DD252690D046403A00217 (NetworkTransformChild_t5BCF31DB1CF06B9E4A05637871E288D51765466E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransformBase_tF4E23896563F36A11752B42FCE9DA8C1F2C3A65F_il2cpp_TypeInfo_var);
		NetworkTransformBase__ctor_mD7C6CDB801C61FDB5A492127CCE5EA539F9E57E5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.NetworkTransformChild::MirrorProcessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformChild_MirrorProcessed_m3C06F1D40BD3B334363BD0708460C9B6F3A94E5A (NetworkTransformChild_t5BCF31DB1CF06B9E4A05637871E288D51765466E * __this, const RuntimeMethod* method)
{
	{
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
// UnityEngine.Transform Mirror.Experimental.NetworkTransformChild::get_targetTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * NetworkTransformChild_get_targetTransform_mA2551232703D05BBE8BCBA0AA4D93AAF41721C19 (NetworkTransformChild_t00AFAFB0CC0AF80437BC4B989B85FC80BAE83379 * __this, const RuntimeMethod* method)
{
	{
		// protected override Transform targetTransform => target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_29();
		return L_0;
	}
}
// System.Void Mirror.Experimental.NetworkTransformChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformChild__ctor_m251A86F312AD587906D460237502D9DCD3469837 (NetworkTransformChild_t00AFAFB0CC0AF80437BC4B989B85FC80BAE83379 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransformBase_tFEE40C8A435A68FE2B2FE609EADA60DD86394555_il2cpp_TypeInfo_var);
		NetworkTransformBase__ctor_m7F1BEF03D49DB00ED74D85970D5E30A8B14E377E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Experimental.NetworkTransformChild::MirrorProcessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformChild_MirrorProcessed_mF330A0B9E63FB0D5E6DCB670ED01F3635BE4CA3A (NetworkTransformChild_t00AFAFB0CC0AF80437BC4B989B85FC80BAE83379 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Mirror.SceneInterestManagement::OnSpawned(Mirror.NetworkIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInterestManagement_OnSpawned_mD4EF12F4DAE6FD105A5D405AED0B02EC362074B3 (SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___identity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8C1313CC234169736B38D3F024B64C59EE01F548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBFBF795EAAB415A21979701465DF1FC3D2258AC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m8FBBEDE6BF250AA3343F6AFFB35DB005D7C33F6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m532404BE8B625E5E5401B951469A77F361AD490B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * V_1 = NULL;
	{
		// Scene currentScene = identity.gameObject.scene;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_0 = ___identity0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// lastObjectScene[identity] = currentScene;
		Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * L_3 = __this->get_lastObjectScene_5();
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_4 = ___identity0;
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_5 = V_0;
		Dictionary_2_set_Item_mBFBF795EAAB415A21979701465DF1FC3D2258AC3(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_set_Item_mBFBF795EAAB415A21979701465DF1FC3D2258AC3_RuntimeMethod_var);
		// if (!sceneObjects.TryGetValue(currentScene, out HashSet<NetworkIdentity> objects))
		Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * L_6 = __this->get_sceneObjects_4();
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_7 = V_0;
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED(L_6, L_7, (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		// objects = new HashSet<NetworkIdentity>();
		HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * L_9 = (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB *)il2cpp_codegen_object_new(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m532404BE8B625E5E5401B951469A77F361AD490B(L_9, /*hidden argument*/HashSet_1__ctor_m532404BE8B625E5E5401B951469A77F361AD490B_RuntimeMethod_var);
		V_1 = L_9;
		// sceneObjects.Add(currentScene, objects);
		Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * L_10 = __this->get_sceneObjects_4();
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_11 = V_0;
		HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * L_12 = V_1;
		Dictionary_2_Add_m8C1313CC234169736B38D3F024B64C59EE01F548(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_Add_m8C1313CC234169736B38D3F024B64C59EE01F548_RuntimeMethod_var);
	}

IL_003c:
	{
		// objects.Add(identity);
		HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * L_13 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_14 = ___identity0;
		bool L_15;
		L_15 = HashSet_1_Add_m8FBBEDE6BF250AA3343F6AFFB35DB005D7C33F6A(L_13, L_14, /*hidden argument*/HashSet_1_Add_m8FBBEDE6BF250AA3343F6AFFB35DB005D7C33F6A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.SceneInterestManagement::OnDestroyed(Mirror.NetworkIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInterestManagement_OnDestroyed_mC649AC1DF0B41598CB9DDFA73E5E36BF96E311F7 (SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___identity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m2B9B7E274E39A14DA0E84B806F316561F5B5A711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m826B1B4A28E49D5684DAF94AC59F1478CB23DC2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mEFD8B95901D0571FE3456927C7A94927B02E9810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * V_1 = NULL;
	{
		// Scene currentScene = lastObjectScene[identity];
		Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * L_0 = __this->get_lastObjectScene_5();
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_1 = ___identity0;
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = Dictionary_2_get_Item_m826B1B4A28E49D5684DAF94AC59F1478CB23DC2E(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m826B1B4A28E49D5684DAF94AC59F1478CB23DC2E_RuntimeMethod_var);
		V_0 = L_2;
		// lastObjectScene.Remove(identity);
		Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * L_3 = __this->get_lastObjectScene_5();
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_4 = ___identity0;
		bool L_5;
		L_5 = Dictionary_2_Remove_m2B9B7E274E39A14DA0E84B806F316561F5B5A711(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m2B9B7E274E39A14DA0E84B806F316561F5B5A711_RuntimeMethod_var);
		// if (sceneObjects.TryGetValue(currentScene, out HashSet<NetworkIdentity> objects) && objects.Remove(identity))
		Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * L_6 = __this->get_sceneObjects_4();
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_7 = V_0;
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED(L_6, L_7, (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * L_9 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_10 = ___identity0;
		bool L_11;
		L_11 = HashSet_1_Remove_mEFD8B95901D0571FE3456927C7A94927B02E9810(L_9, L_10, /*hidden argument*/HashSet_1_Remove_mEFD8B95901D0571FE3456927C7A94927B02E9810_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_003a;
		}
	}
	{
		// RebuildSceneObservers(currentScene);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_12 = V_0;
		SceneInterestManagement_RebuildSceneObservers_m000D9755F31C2389044C842987AB3F2601636F6B(__this, L_12, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Mirror.SceneInterestManagement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInterestManagement_Update_mE66F1C6731393D8244055C3A38A732BB6A664BED (SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8C1313CC234169736B38D3F024B64C59EE01F548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mACA86CEB8FC95305338DE3BDEC463D90200586F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m70068D86B047D54689499BBD312317F8A74BF8B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m826B1B4A28E49D5684DAF94AC59F1478CB23DC2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m863891487C55E52E72C043C29CA6D20969134CD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBFBF795EAAB415A21979701465DF1FC3D2258AC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB2C8EC334DFD5539BD6885018155D8BEA3C38870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB4BE9B0722B9A0E644AFBF21F49A43B935641677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m02AFA72A654DC0D05D3BD0751EFB4EDF0B8B0BFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA1455B4574A42BB90837E4373CEA45C445209120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E52BDC09ACA41D1976BD1CBBB0BB9362C747278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m74B6106F631CD7A025FEA6A9D67DC523CE3DBB06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m8FBBEDE6BF250AA3343F6AFFB35DB005D7C33F6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF823FDC7C230B88007FA5B9988D144BAC866A315_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_mEF214BA4D01B4659539FBCBF2DE968CCB8D30028_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m7F37EE20CFBFB7D3F5E58A342E7AF29685F31536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mEFD8B95901D0571FE3456927C7A94927B02E9810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m532404BE8B625E5E5401B951469A77F361AD490B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m0EA4028861066E0484B99B81D1957F51A9FC80D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * V_1 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (!NetworkServer.active) return;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!NetworkServer.active) return;
		return;
	}

IL_0008:
	{
		// foreach (NetworkIdentity identity in NetworkIdentity.spawned.Values)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_il2cpp_TypeInfo_var);
		Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * L_1 = ((NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields*)il2cpp_codegen_static_fields_for(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_il2cpp_TypeInfo_var))->get_spawned_15();
		ValueCollection_t0B7B9EE155BCCDAAB768AA1695C8AECDDB1F7FBF * L_2;
		L_2 = Dictionary_2_get_Values_m863891487C55E52E72C043C29CA6D20969134CD8(L_1, /*hidden argument*/Dictionary_2_get_Values_m863891487C55E52E72C043C29CA6D20969134CD8_RuntimeMethod_var);
		Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E  L_3;
		L_3 = ValueCollection_GetEnumerator_m0EA4028861066E0484B99B81D1957F51A9FC80D9(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m0EA4028861066E0484B99B81D1957F51A9FC80D9_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b3;
		}

IL_001d:
		{
			// foreach (NetworkIdentity identity in NetworkIdentity.spawned.Values)
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_4;
			L_4 = Enumerator_get_Current_m3E52BDC09ACA41D1976BD1CBBB0BB9362C747278_inline((Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E *)(&V_0), /*hidden argument*/Enumerator_get_Current_m3E52BDC09ACA41D1976BD1CBBB0BB9362C747278_RuntimeMethod_var);
			V_1 = L_4;
			// Scene currentScene = lastObjectScene[identity];
			Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * L_5 = __this->get_lastObjectScene_5();
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_6 = V_1;
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_7;
			L_7 = Dictionary_2_get_Item_m826B1B4A28E49D5684DAF94AC59F1478CB23DC2E(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m826B1B4A28E49D5684DAF94AC59F1478CB23DC2E_RuntimeMethod_var);
			V_2 = L_7;
			// Scene newScene = identity.gameObject.scene;
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_8 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
			L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_10;
			L_10 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_9, /*hidden argument*/NULL);
			V_3 = L_10;
			// if (newScene == currentScene) continue;
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_11 = V_3;
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_12 = V_2;
			bool L_13;
			L_13 = Scene_op_Equality_m5B02632BCD075BF2857A75AF21F5F82AE22C4E4D(L_11, L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_00b3;
			}
		}

IL_0047:
		{
			// dirtyScenes.Add(currentScene);
			HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * L_14 = __this->get_dirtyScenes_6();
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_15 = V_2;
			bool L_16;
			L_16 = HashSet_1_Add_mF823FDC7C230B88007FA5B9988D144BAC866A315(L_14, L_15, /*hidden argument*/HashSet_1_Add_mF823FDC7C230B88007FA5B9988D144BAC866A315_RuntimeMethod_var);
			// dirtyScenes.Add(newScene);
			HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * L_17 = __this->get_dirtyScenes_6();
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_18 = V_3;
			bool L_19;
			L_19 = HashSet_1_Add_mF823FDC7C230B88007FA5B9988D144BAC866A315(L_17, L_18, /*hidden argument*/HashSet_1_Add_mF823FDC7C230B88007FA5B9988D144BAC866A315_RuntimeMethod_var);
			// sceneObjects[currentScene].Remove(identity);
			Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * L_20 = __this->get_sceneObjects_4();
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_21 = V_2;
			HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * L_22;
			L_22 = Dictionary_2_get_Item_m70068D86B047D54689499BBD312317F8A74BF8B2(L_20, L_21, /*hidden argument*/Dictionary_2_get_Item_m70068D86B047D54689499BBD312317F8A74BF8B2_RuntimeMethod_var);
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_23 = V_1;
			bool L_24;
			L_24 = HashSet_1_Remove_mEFD8B95901D0571FE3456927C7A94927B02E9810(L_22, L_23, /*hidden argument*/HashSet_1_Remove_mEFD8B95901D0571FE3456927C7A94927B02E9810_RuntimeMethod_var);
			// lastObjectScene[identity] = newScene;
			Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * L_25 = __this->get_lastObjectScene_5();
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_26 = V_1;
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_27 = V_3;
			Dictionary_2_set_Item_mBFBF795EAAB415A21979701465DF1FC3D2258AC3(L_25, L_26, L_27, /*hidden argument*/Dictionary_2_set_Item_mBFBF795EAAB415A21979701465DF1FC3D2258AC3_RuntimeMethod_var);
			// if (!sceneObjects.ContainsKey(newScene))
			Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * L_28 = __this->get_sceneObjects_4();
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_29 = V_3;
			bool L_30;
			L_30 = Dictionary_2_ContainsKey_mACA86CEB8FC95305338DE3BDEC463D90200586F2(L_28, L_29, /*hidden argument*/Dictionary_2_ContainsKey_mACA86CEB8FC95305338DE3BDEC463D90200586F2_RuntimeMethod_var);
			if (L_30)
			{
				goto IL_00a0;
			}
		}

IL_008f:
		{
			// sceneObjects.Add(newScene, new HashSet<NetworkIdentity>());
			Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * L_31 = __this->get_sceneObjects_4();
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_32 = V_3;
			HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * L_33 = (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB *)il2cpp_codegen_object_new(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB_il2cpp_TypeInfo_var);
			HashSet_1__ctor_m532404BE8B625E5E5401B951469A77F361AD490B(L_33, /*hidden argument*/HashSet_1__ctor_m532404BE8B625E5E5401B951469A77F361AD490B_RuntimeMethod_var);
			Dictionary_2_Add_m8C1313CC234169736B38D3F024B64C59EE01F548(L_31, L_32, L_33, /*hidden argument*/Dictionary_2_Add_m8C1313CC234169736B38D3F024B64C59EE01F548_RuntimeMethod_var);
		}

IL_00a0:
		{
			// sceneObjects[newScene].Add(identity);
			Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * L_34 = __this->get_sceneObjects_4();
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_35 = V_3;
			HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * L_36;
			L_36 = Dictionary_2_get_Item_m70068D86B047D54689499BBD312317F8A74BF8B2(L_34, L_35, /*hidden argument*/Dictionary_2_get_Item_m70068D86B047D54689499BBD312317F8A74BF8B2_RuntimeMethod_var);
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_37 = V_1;
			bool L_38;
			L_38 = HashSet_1_Add_m8FBBEDE6BF250AA3343F6AFFB35DB005D7C33F6A(L_36, L_37, /*hidden argument*/HashSet_1_Add_m8FBBEDE6BF250AA3343F6AFFB35DB005D7C33F6A_RuntimeMethod_var);
		}

IL_00b3:
		{
			// foreach (NetworkIdentity identity in NetworkIdentity.spawned.Values)
			bool L_39;
			L_39 = Enumerator_MoveNext_m02AFA72A654DC0D05D3BD0751EFB4EDF0B8B0BFF((Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m02AFA72A654DC0D05D3BD0751EFB4EDF0B8B0BFF_RuntimeMethod_var);
			if (L_39)
			{
				goto IL_001d;
			}
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xCF, FINALLY_00c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB4BE9B0722B9A0E644AFBF21F49A43B935641677((Enumerator_tB9B9096BDEC2C4B6995C5641F50060E1E190BA9E *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB4BE9B0722B9A0E644AFBF21F49A43B935641677_RuntimeMethod_var);
		IL2CPP_END_FINALLY(193)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCF, IL_00cf)
	}

IL_00cf:
	{
		// foreach (Scene dirtyScene in dirtyScenes)
		HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * L_40 = __this->get_dirtyScenes_6();
		Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE  L_41;
		L_41 = HashSet_1_GetEnumerator_m7F37EE20CFBFB7D3F5E58A342E7AF29685F31536(L_40, /*hidden argument*/HashSet_1_GetEnumerator_m7F37EE20CFBFB7D3F5E58A342E7AF29685F31536_RuntimeMethod_var);
		V_4 = L_41;
	}

IL_00dc:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ef;
		}

IL_00de:
		{
			// foreach (Scene dirtyScene in dirtyScenes)
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_42;
			L_42 = Enumerator_get_Current_m74B6106F631CD7A025FEA6A9D67DC523CE3DBB06_inline((Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE *)(&V_4), /*hidden argument*/Enumerator_get_Current_m74B6106F631CD7A025FEA6A9D67DC523CE3DBB06_RuntimeMethod_var);
			V_5 = L_42;
			// RebuildSceneObservers(dirtyScene);
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_43 = V_5;
			SceneInterestManagement_RebuildSceneObservers_m000D9755F31C2389044C842987AB3F2601636F6B(__this, L_43, /*hidden argument*/NULL);
		}

IL_00ef:
		{
			// foreach (Scene dirtyScene in dirtyScenes)
			bool L_44;
			L_44 = Enumerator_MoveNext_mA1455B4574A42BB90837E4373CEA45C445209120((Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mA1455B4574A42BB90837E4373CEA45C445209120_RuntimeMethod_var);
			if (L_44)
			{
				goto IL_00de;
			}
		}

IL_00f8:
		{
			IL2CPP_LEAVE(0x108, FINALLY_00fa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fa;
	}

FINALLY_00fa:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB2C8EC334DFD5539BD6885018155D8BEA3C38870((Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE *)(&V_4), /*hidden argument*/Enumerator_Dispose_mB2C8EC334DFD5539BD6885018155D8BEA3C38870_RuntimeMethod_var);
		IL2CPP_END_FINALLY(250)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(250)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x108, IL_0108)
	}

IL_0108:
	{
		// dirtyScenes.Clear();
		HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * L_45 = __this->get_dirtyScenes_6();
		HashSet_1_Clear_mEF214BA4D01B4659539FBCBF2DE968CCB8D30028(L_45, /*hidden argument*/HashSet_1_Clear_mEF214BA4D01B4659539FBCBF2DE968CCB8D30028_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.SceneInterestManagement::RebuildSceneObservers(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInterestManagement_RebuildSceneObservers_m000D9755F31C2389044C842987AB3F2601636F6B (SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m70068D86B047D54689499BBD312317F8A74BF8B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEA092BC2C00AEBAF008C9F2186FE98F74DEDFEC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0483BF2933B6F4037B9E12B43EE614354F4A66CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0D5CBDE9B4D5D5764BA083F6F1C5C3CDFDF1C065_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m6ADBCCE83E6F17EF1946F504EEC0BDDDECA35548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (NetworkIdentity netIdentity in sceneObjects[scene])
		Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * L_0 = __this->get_sceneObjects_4();
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_1 = ___scene0;
		HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * L_2;
		L_2 = Dictionary_2_get_Item_m70068D86B047D54689499BBD312317F8A74BF8B2(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m70068D86B047D54689499BBD312317F8A74BF8B2_RuntimeMethod_var);
		Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838  L_3;
		L_3 = HashSet_1_GetEnumerator_m6ADBCCE83E6F17EF1946F504EEC0BDDDECA35548(L_2, /*hidden argument*/HashSet_1_GetEnumerator_m6ADBCCE83E6F17EF1946F504EEC0BDDDECA35548_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0014:
		{
			// foreach (NetworkIdentity netIdentity in sceneObjects[scene])
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_4;
			L_4 = Enumerator_get_Current_m0D5CBDE9B4D5D5764BA083F6F1C5C3CDFDF1C065_inline((Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m0D5CBDE9B4D5D5764BA083F6F1C5C3CDFDF1C065_RuntimeMethod_var);
			V_1 = L_4;
			// if (netIdentity != null)
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_002c;
			}
		}

IL_0025:
		{
			// NetworkServer.RebuildObservers(netIdentity, false);
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_7 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
			NetworkServer_RebuildObservers_m2E49CB20FF4AF0D1EAC08AF0B0271BBEFCDCDABC(L_7, (bool)0, /*hidden argument*/NULL);
		}

IL_002c:
		{
			// foreach (NetworkIdentity netIdentity in sceneObjects[scene])
			bool L_8;
			L_8 = Enumerator_MoveNext_m0483BF2933B6F4037B9E12B43EE614354F4A66CB((Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0483BF2933B6F4037B9E12B43EE614354F4A66CB_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0014;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEA092BC2C00AEBAF008C9F2186FE98F74DEDFEC5((Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mEA092BC2C00AEBAF008C9F2186FE98F74DEDFEC5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Boolean Mirror.SceneInterestManagement::OnCheckObserver(Mirror.NetworkIdentity,Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneInterestManagement_OnCheckObserver_m5594C25CE58395B0E42C295803E995C0ACAE9260 (SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___identity0, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___newObserver1, const RuntimeMethod* method)
{
	{
		// return identity.gameObject.scene == newObserver.identity.gameObject.scene;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_0 = ___identity0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_1, /*hidden argument*/NULL);
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_3 = ___newObserver1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_4;
		L_4 = NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline(L_3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_6;
		L_6 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Scene_op_Equality_m5B02632BCD075BF2857A75AF21F5F82AE22C4E4D(L_2, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Mirror.SceneInterestManagement::OnRebuildObservers(Mirror.NetworkIdentity,System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInterestManagement_OnRebuildObservers_m5B2023349E28A687522F1925A49C154B60DAF31D (SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___identity0, HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * ___newObservers1, bool ___initialize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEA092BC2C00AEBAF008C9F2186FE98F74DEDFEC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0483BF2933B6F4037B9E12B43EE614354F4A66CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0D5CBDE9B4D5D5764BA083F6F1C5C3CDFDF1C065_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m28002384C2860575E2AA38C7589147EC70119BD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m6ADBCCE83E6F17EF1946F504EEC0BDDDECA35548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * V_0 = NULL;
	Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!sceneObjects.TryGetValue(identity.gameObject.scene, out HashSet<NetworkIdentity> objects))
		Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * L_0 = __this->get_sceneObjects_4();
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_1 = ___identity0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_3;
		L_3 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED(L_0, L_3, (HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mD3863FCB238493FF0D2CE3BDAFE0B495EF4075ED_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// foreach (NetworkIdentity networkIdentity in objects)
		HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * L_5 = V_0;
		Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838  L_6;
		L_6 = HashSet_1_GetEnumerator_m6ADBCCE83E6F17EF1946F504EEC0BDDDECA35548(L_5, /*hidden argument*/HashSet_1_GetEnumerator_m6ADBCCE83E6F17EF1946F504EEC0BDDDECA35548_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0024:
		{
			// foreach (NetworkIdentity networkIdentity in objects)
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_7;
			L_7 = Enumerator_get_Current_m0D5CBDE9B4D5D5764BA083F6F1C5C3CDFDF1C065_inline((Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m0D5CBDE9B4D5D5764BA083F6F1C5C3CDFDF1C065_RuntimeMethod_var);
			V_2 = L_7;
			// if (networkIdentity != null && networkIdentity.connectionToClient != null)
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_8 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_004a;
			}
		}

IL_0035:
		{
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_10 = V_2;
			NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_11;
			L_11 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_004a;
			}
		}

IL_003d:
		{
			// newObservers.Add(networkIdentity.connectionToClient);
			HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * L_12 = ___newObservers1;
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_13 = V_2;
			NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_14;
			L_14 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_13, /*hidden argument*/NULL);
			bool L_15;
			L_15 = HashSet_1_Add_m28002384C2860575E2AA38C7589147EC70119BD2(L_12, L_14, /*hidden argument*/HashSet_1_Add_m28002384C2860575E2AA38C7589147EC70119BD2_RuntimeMethod_var);
		}

IL_004a:
		{
			// foreach (NetworkIdentity networkIdentity in objects)
			bool L_16;
			L_16 = Enumerator_MoveNext_m0483BF2933B6F4037B9E12B43EE614354F4A66CB((Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m0483BF2933B6F4037B9E12B43EE614354F4A66CB_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_0024;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEA092BC2C00AEBAF008C9F2186FE98F74DEDFEC5((Enumerator_t7B2FBFCCD52BD197B9791938DFC47465CBEF2838 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEA092BC2C00AEBAF008C9F2186FE98F74DEDFEC5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Mirror.SceneInterestManagement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInterestManagement__ctor_m98D2CCF1F61F1B6CF9718413DCFB74377688D89F (SceneInterestManagement_tC718D1963A65F03A79236D1E11A67A61F6464B4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAA5980F86AD93CC0E633CABD9E9D9E5D106F6357_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB0FE8165A4E9367469E388D4A68A81E6D74A0EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m0326F1640E966F30C6C3CFF1B1DF80C2E1D58E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly Dictionary<Scene, HashSet<NetworkIdentity>> sceneObjects =
		//     new Dictionary<Scene, HashSet<NetworkIdentity>>();
		Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 * L_0 = (Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97 *)il2cpp_codegen_object_new(Dictionary_2_tBD3DEFDAD6ABE2273F932674C3C8035AAE714A97_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB0FE8165A4E9367469E388D4A68A81E6D74A0EC5(L_0, /*hidden argument*/Dictionary_2__ctor_mB0FE8165A4E9367469E388D4A68A81E6D74A0EC5_RuntimeMethod_var);
		__this->set_sceneObjects_4(L_0);
		// readonly Dictionary<NetworkIdentity, Scene> lastObjectScene =
		//     new Dictionary<NetworkIdentity, Scene>();
		Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 * L_1 = (Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420 *)il2cpp_codegen_object_new(Dictionary_2_tC447D2DC31DC3D82E5A40849D25A8D9CDCCCF420_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAA5980F86AD93CC0E633CABD9E9D9E5D106F6357(L_1, /*hidden argument*/Dictionary_2__ctor_mAA5980F86AD93CC0E633CABD9E9D9E5D106F6357_RuntimeMethod_var);
		__this->set_lastObjectScene_5(L_1);
		// HashSet<Scene> dirtyScenes = new HashSet<Scene>();
		HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 * L_2 = (HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7 *)il2cpp_codegen_object_new(HashSet_1_tDE223B188E0A7DAFDBC22D1791E104F1E6639DF7_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m0326F1640E966F30C6C3CFF1B1DF80C2E1D58E78(L_2, /*hidden argument*/HashSet_1__ctor_m0326F1640E966F30C6C3CFF1B1DF80C2E1D58E78_RuntimeMethod_var);
		__this->set_dirtyScenes_6(L_2);
		InterestManagement__ctor_mC2CB6AFC383E02ACBABDD728A970658A1C3CCFF4(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Discovery.ServerFoundUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerFoundUnityEvent__ctor_m98F0934D285A0B199816BC0EF56A9110F7B499A7 (ServerFoundUnityEvent_t4E4DCA48D70BC4E17D90B92E694B5C64F2BDDA43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mBCB042AE0BB5F32DC95D2C326BEBFBE8DDA53EE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mBCB042AE0BB5F32DC95D2C326BEBFBE8DDA53EE7(__this, /*hidden argument*/UnityEvent_1__ctor_mBCB042AE0BB5F32DC95D2C326BEBFBE8DDA53EE7_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Mirror.Discovery.ServerResponse
IL2CPP_EXTERN_C void ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshal_pinvoke(const ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1& unmarshaled, ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CEndPointU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<EndPoint>k__BackingField' of type 'ServerResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CEndPointU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshal_pinvoke_back(const ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshaled_pinvoke& marshaled, ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1& unmarshaled)
{
	Exception_t* ___U3CEndPointU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<EndPoint>k__BackingField' of type 'ServerResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CEndPointU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.Discovery.ServerResponse
IL2CPP_EXTERN_C void ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshal_pinvoke_cleanup(ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mirror.Discovery.ServerResponse
IL2CPP_EXTERN_C void ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshal_com(const ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1& unmarshaled, ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshaled_com& marshaled)
{
	Exception_t* ___U3CEndPointU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<EndPoint>k__BackingField' of type 'ServerResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CEndPointU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshal_com_back(const ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshaled_com& marshaled, ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1& unmarshaled)
{
	Exception_t* ___U3CEndPointU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<EndPoint>k__BackingField' of type 'ServerResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CEndPointU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.Discovery.ServerResponse
IL2CPP_EXTERN_C void ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshal_com_cleanup(ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1_marshaled_com& marshaled)
{
}
// System.Net.IPEndPoint Mirror.Discovery.ServerResponse::get_EndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ServerResponse_get_EndPoint_m6DAD50F1785A1577B00C8DAADB1E2446B934CA0C (ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 * __this, const RuntimeMethod* method)
{
	{
		// public IPEndPoint EndPoint { get; set; }
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = __this->get_U3CEndPointU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ServerResponse_get_EndPoint_m6DAD50F1785A1577B00C8DAADB1E2446B934CA0C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 * _thisAdjusted = reinterpret_cast<ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 *>(__this + _offset);
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * _returnValue;
	_returnValue = ServerResponse_get_EndPoint_m6DAD50F1785A1577B00C8DAADB1E2446B934CA0C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Mirror.Discovery.ServerResponse::set_EndPoint(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerResponse_set_EndPoint_mE2370B1D263800DD50A7463C05FFD93351E9526F (ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___value0, const RuntimeMethod* method)
{
	{
		// public IPEndPoint EndPoint { get; set; }
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ___value0;
		__this->set_U3CEndPointU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ServerResponse_set_EndPoint_mE2370B1D263800DD50A7463C05FFD93351E9526F_AdjustorThunk (RuntimeObject * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 * _thisAdjusted = reinterpret_cast<ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 *>(__this + _offset);
	ServerResponse_set_EndPoint_mE2370B1D263800DD50A7463C05FFD93351E9526F_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Mirror.SpatialHashingInterestManagement::get_resolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialHashingInterestManagement_get_resolution_m3DAA86ADF204445CC688E8298FD729D5B7DCE43A (SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912 * __this, const RuntimeMethod* method)
{
	{
		// public int resolution => visRange / 3;
		int32_t L_0 = __this->get_visRange_4();
		return ((int32_t)((int32_t)L_0/(int32_t)3));
	}
}
// UnityEngine.Vector2Int Mirror.SpatialHashingInterestManagement::ProjectToGrid(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  SpatialHashingInterestManagement_ProjectToGrid_m7D9665467C2DA736E8016A4A7C53F5F6B878603D (SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	{
		// checkMethod == CheckMethod.XZ_FOR_3D
		// ? Vector2Int.RoundToInt(new Vector2(position.x, position.z) / resolution)
		// : Vector2Int.RoundToInt(new Vector2(position.x, position.y) / resolution);
		int32_t L_0 = __this->get_checkMethod_7();
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position0;
		float L_2 = L_1.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___position0;
		float L_4 = L_3.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = SpatialHashingInterestManagement_get_resolution_m3DAA86ADF204445CC688E8298FD729D5B7DCE43A(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_5, ((float)((float)L_6)), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8;
		L_8 = Vector2Int_RoundToInt_m1AE35E5F4CC5F4405BE7AB443C648544E6C523AA_inline(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___position0;
		float L_10 = L_9.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___position0;
		float L_12 = L_11.get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), L_10, L_12, /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = SpatialHashingInterestManagement_get_resolution_m3DAA86ADF204445CC688E8298FD729D5B7DCE43A(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_13, ((float)((float)L_14)), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_16;
		L_16 = Vector2Int_RoundToInt_m1AE35E5F4CC5F4405BE7AB443C648544E6C523AA_inline(L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Boolean Mirror.SpatialHashingInterestManagement::OnCheckObserver(Mirror.NetworkIdentity,Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialHashingInterestManagement_OnCheckObserver_m7ADB823E1CF4AB5829B2CDCB4C24E61F682388B0 (SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912 * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___identity0, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___newObserver1, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2Int projected = ProjectToGrid(identity.transform.position);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_0 = ___identity0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3;
		L_3 = SpatialHashingInterestManagement_ProjectToGrid_m7D9665467C2DA736E8016A4A7C53F5F6B878603D(__this, L_2, /*hidden argument*/NULL);
		// Vector2Int observerProjected = ProjectToGrid(newObserver.identity.transform.position);
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_4 = ___newObserver1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_5;
		L_5 = NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8;
		L_8 = SpatialHashingInterestManagement_ProjectToGrid_m7D9665467C2DA736E8016A4A7C53F5F6B878603D(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// return (projected - observerProjected).sqrMagnitude <= 2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_9 = V_0;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_10;
		L_10 = Vector2Int_op_Subtraction_mD915509B3D1633AB0C8155397F4CA15B385FBBEA_inline(L_3, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11;
		L_11 = Vector2Int_get_sqrMagnitude_mE674C8110FB6AF95469AAD381E345E1170AAB101((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_11) > ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mirror.SpatialHashingInterestManagement::OnRebuildObservers(Mirror.NetworkIdentity,System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialHashingInterestManagement_OnRebuildObservers_m82307183D09F052C12F60FE732DE15EEC2D8C603 (SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912 * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___identity0, HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * ___newObservers1, bool ___initialize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_1_GetWithNeighbours_mF655D366EE6B017583A06A3E48E05AA1114243AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2Int current = ProjectToGrid(identity.transform.position);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_0 = ___identity0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3;
		L_3 = SpatialHashingInterestManagement_ProjectToGrid_m7D9665467C2DA736E8016A4A7C53F5F6B878603D(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// grid.GetWithNeighbours(current, newObservers);
		Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * L_4 = __this->get_grid_9();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5 = V_0;
		HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * L_6 = ___newObservers1;
		Grid2D_1_GetWithNeighbours_mF655D366EE6B017583A06A3E48E05AA1114243AA(L_4, L_5, L_6, /*hidden argument*/Grid2D_1_GetWithNeighbours_mF655D366EE6B017583A06A3E48E05AA1114243AA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.SpatialHashingInterestManagement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialHashingInterestManagement_Update_mF12FD87C0F298BB62D219B264571215539C1D0B2 (SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m33CAD47C20C721CE58504E8FF017F617739BA3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3B792B6C788DCE4B38EF9ED49F64320CC5043C60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m247BC915E135A225F1B037ECF2AC0B46D87E9647_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m39E5466E238958C9692150450E0C4F527F587A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_1_Add_m7EBE77A6957F601227BEDB1138E6AE73E592A80D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_1_ClearNonAlloc_m9D19936F849618735F2BC18A778079C1134512AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m55D0332E9A87765BDDEBA199299DFDB039EA25A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * V_1 = NULL;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!NetworkServer.active) return;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!NetworkServer.active) return;
		return;
	}

IL_0008:
	{
		// grid.ClearNonAlloc();
		Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * L_1 = __this->get_grid_9();
		Grid2D_1_ClearNonAlloc_m9D19936F849618735F2BC18A778079C1134512AB(L_1, /*hidden argument*/Grid2D_1_ClearNonAlloc_m9D19936F849618735F2BC18A778079C1134512AB_RuntimeMethod_var);
		// foreach (NetworkConnectionToClient connection in NetworkServer.connections.Values)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * L_2 = ((NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields*)il2cpp_codegen_static_fields_for(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var))->get_connections_3();
		ValueCollection_tDD7DF15227B26F459CEE95572761C5BBB955EE9F * L_3;
		L_3 = Dictionary_2_get_Values_m33CAD47C20C721CE58504E8FF017F617739BA3ED(L_2, /*hidden argument*/Dictionary_2_get_Values_m33CAD47C20C721CE58504E8FF017F617739BA3ED_RuntimeMethod_var);
		Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E  L_4;
		L_4 = ValueCollection_GetEnumerator_m55D0332E9A87765BDDEBA199299DFDB039EA25A2(L_3, /*hidden argument*/ValueCollection_GetEnumerator_m55D0332E9A87765BDDEBA199299DFDB039EA25A2_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0067;
		}

IL_0025:
		{
			// foreach (NetworkConnectionToClient connection in NetworkServer.connections.Values)
			NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_5;
			L_5 = Enumerator_get_Current_m39E5466E238958C9692150450E0C4F527F587A14_inline((Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E *)(&V_0), /*hidden argument*/Enumerator_get_Current_m39E5466E238958C9692150450E0C4F527F587A14_RuntimeMethod_var);
			V_1 = L_5;
			// if (connection.isAuthenticated && connection.identity != null)
			NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_6 = V_1;
			bool L_7 = ((NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *)L_6)->get_isAuthenticated_3();
			if (!L_7)
			{
				goto IL_0067;
			}
		}

IL_0035:
		{
			NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_8 = V_1;
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_9;
			L_9 = NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0067;
			}
		}

IL_0043:
		{
			// Vector2Int position = ProjectToGrid(connection.identity.transform.position);
			NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_11 = V_1;
			NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_12;
			L_12 = NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline(L_11, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
			L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_15;
			L_15 = SpatialHashingInterestManagement_ProjectToGrid_m7D9665467C2DA736E8016A4A7C53F5F6B878603D(__this, L_14, /*hidden argument*/NULL);
			V_2 = L_15;
			// grid.Add(position, connection);
			Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * L_16 = __this->get_grid_9();
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_17 = V_2;
			NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_18 = V_1;
			Grid2D_1_Add_m7EBE77A6957F601227BEDB1138E6AE73E592A80D(L_16, L_17, L_18, /*hidden argument*/Grid2D_1_Add_m7EBE77A6957F601227BEDB1138E6AE73E592A80D_RuntimeMethod_var);
		}

IL_0067:
		{
			// foreach (NetworkConnectionToClient connection in NetworkServer.connections.Values)
			bool L_19;
			L_19 = Enumerator_MoveNext_m247BC915E135A225F1B037ECF2AC0B46D87E9647((Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m247BC915E135A225F1B037ECF2AC0B46D87E9647_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0025;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x80, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3B792B6C788DCE4B38EF9ED49F64320CC5043C60((Enumerator_t184C6B4DEC8009E6A5C265F06065125F6FB4013E *)(&V_0), /*hidden argument*/Enumerator_Dispose_m3B792B6C788DCE4B38EF9ED49F64320CC5043C60_RuntimeMethod_var);
		IL2CPP_END_FINALLY(114)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x80, IL_0080)
	}

IL_0080:
	{
		// if (NetworkTime.localTime >= lastRebuildTime + rebuildInterval)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = NetworkTime_get_localTime_mE9F343542C384B1D15D2541759FAD163D00946D6(/*hidden argument*/NULL);
		double L_21 = __this->get_lastRebuildTime_6();
		float L_22 = __this->get_rebuildInterval_5();
		if ((!(((double)L_20) >= ((double)((double)il2cpp_codegen_add((double)L_21, (double)((double)((double)L_22))))))))
		{
			goto IL_00a6;
		}
	}
	{
		// RebuildAll();
		InterestManagement_RebuildAll_m143CB3DE5E99AF95FA1285E5E2D91E5FE2DEA1AD(__this, /*hidden argument*/NULL);
		// lastRebuildTime = NetworkTime.localTime;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTime_tD5B027F6DB01D80E3B4EDBB122719DB957EACC8D_il2cpp_TypeInfo_var);
		double L_23;
		L_23 = NetworkTime_get_localTime_mE9F343542C384B1D15D2541759FAD163D00946D6(/*hidden argument*/NULL);
		__this->set_lastRebuildTime_6(L_23);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void Mirror.SpatialHashingInterestManagement::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialHashingInterestManagement_OnGUI_m0415D5A95ABF367928A646A7518462C396FD47F7 (SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29B90BB68613D73625ADC8B02E817DB75A9E955B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (!showSlider) return;
		bool L_0 = __this->get_showSlider_8();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!showSlider) return;
		return;
	}

IL_0009:
	{
		// if (!NetworkServer.active) return;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (!NetworkServer.active) return;
		return;
	}

IL_0011:
	{
		// int height = 30;
		V_0 = ((int32_t)30);
		// int width = 250;
		V_1 = ((int32_t)250);
		// GUILayout.BeginArea(new Rect(Screen.width / 2 - width / 2, Screen.height - height, width, height));
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_3 = V_1;
		int32_t L_4;
		L_4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_8), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_2/(int32_t)2)), (int32_t)((int32_t)((int32_t)L_3/(int32_t)2)))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)))), ((float)((float)L_6)), ((float)((float)L_7)), /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_8, /*hidden argument*/NULL);
		// GUILayout.BeginHorizontal("Box");
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_9;
		L_9 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_10;
		L_10 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mFB35D7D54FD9EE76B56C76023B9E8C4B30AA8CA6(L_9, L_10, /*hidden argument*/NULL);
		// GUILayout.Label("Radius:");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_11;
		L_11 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral29B90BB68613D73625ADC8B02E817DB75A9E955B, L_11, /*hidden argument*/NULL);
		// visRange = Mathf.RoundToInt(GUILayout.HorizontalSlider(visRange, 0, 200, GUILayout.Width(150)));
		int32_t L_12 = __this->get_visRange_4();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_13 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_14 = L_13;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_15;
		L_15 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((150.0f), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_15);
		float L_16;
		L_16 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(((float)((float)L_12)), (0.0f), (200.0f), L_14, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_16, /*hidden argument*/NULL);
		__this->set_visRange_4(L_17);
		// GUILayout.Label(visRange.ToString());
		int32_t* L_18 = __this->get_address_of_visRange_4();
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_18, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_20;
		L_20 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_19, L_20, /*hidden argument*/NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
		// GUILayout.EndArea();
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.SpatialHashingInterestManagement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialHashingInterestManagement__ctor_mBFA9121DF13DC2BCF632AAE63D5A8303D23E6F05 (SpatialHashingInterestManagement_t0B86B9227E5BCD564D3002E6946025DC7DD48912 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_1__ctor_mF27CD78C1A127076A9462DF8C3F47B9BC2DD9B9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int visRange = 30;
		__this->set_visRange_4(((int32_t)30));
		// public float rebuildInterval = 1;
		__this->set_rebuildInterval_5((1.0f));
		// Grid2D<NetworkConnection> grid = new Grid2D<NetworkConnection>();
		Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A * L_0 = (Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A *)il2cpp_codegen_object_new(Grid2D_1_tC786F7DED4BEF8B433939EB9BCC28385BD615D2A_il2cpp_TypeInfo_var);
		Grid2D_1__ctor_mF27CD78C1A127076A9462DF8C3F47B9BC2DD9B9F(L_0, /*hidden argument*/Grid2D_1__ctor_mF27CD78C1A127076A9462DF8C3F47B9BC2DD9B9F_RuntimeMethod_var);
		__this->set_grid_9(L_0);
		InterestManagement__ctor_mC2CB6AFC383E02ACBABDD728A970658A1C3CCFF4(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Experimental.NetworkRigidbody/ClientSyncState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSyncState__ctor_mE7E549EE79C27A358936B2A0CA1D57957245CDB4 (ClientSyncState_t50ED202FBB0CD39C8A4B74A04AD03B1805A3F074 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Experimental.NetworkRigidbody2D/ClientSyncState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSyncState__ctor_mED0F6C89D691FDE5EAAE633B579613091108F34A (ClientSyncState_t70791A5CDE6140A304B89ED0FFEEDD03A3E9EA98 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.NetworkRoomManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m61D706EDC3DC5098ADF704030938B70B54AB56F5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8 * L_0 = (U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8 *)il2cpp_codegen_object_new(U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8BA39A59192EDE1BC19CDBDFF284981F93E494C5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mirror.NetworkRoomManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8BA39A59192EDE1BC19CDBDFF284981F93E494C5 (U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.NetworkRoomManager/<>c::<CheckReadyToBegin>b__16_0(System.Collections.Generic.KeyValuePair`2<System.Int32,Mirror.NetworkConnectionToClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCheckReadyToBeginU3Eb__16_0_m7862A338DF287AFAF0F09C1C9024AED5EDDC7123 (U3CU3Ec_tF6AB130B1ABBB9D377737344B7EC9F61B3CDE3A8 * __this, KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B  ___conn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F_m4EDDC9D17439C18F9912C9A2DA143E1598E6BBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int numberOfReadyPlayers = NetworkServer.connections.Count(conn => conn.Value != null && conn.Value.identity.gameObject.GetComponent<NetworkRoomPlayer>().readyToBegin);
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_0;
		L_0 = KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_inline((KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B *)(&___conn0), /*hidden argument*/KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_1;
		L_1 = KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_inline((KeyValuePair_2_t7032D9D2AE64B29BB2BAC7E424E280A01980772B *)(&___conn0), /*hidden argument*/KeyValuePair_2_get_Value_mDFF4631D0F417B42AB24819A2F7D34916E270AE1_RuntimeMethod_var);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_2;
		L_2 = NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline(L_1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F * L_4;
		L_4 = GameObject_GetComponent_TisNetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F_m4EDDC9D17439C18F9912C9A2DA143E1598E6BBC1(L_3, /*hidden argument*/GameObject_GetComponent_TisNetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F_m4EDDC9D17439C18F9912C9A2DA143E1598E6BBC1_RuntimeMethod_var);
		bool L_5 = L_4->get_readyToBegin_13();
		return L_5;
	}

IL_0025:
	{
		return (bool)0;
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
// Conversion methods for marshalling of: Mirror.NetworkRoomManager/PendingPlayer
IL2CPP_EXTERN_C void PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshal_pinvoke(const PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694& unmarshaled, PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshaled_pinvoke& marshaled)
{
	Exception_t* ___conn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'conn' of type 'PendingPlayer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___conn_0Exception, NULL);
}
IL2CPP_EXTERN_C void PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshal_pinvoke_back(const PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshaled_pinvoke& marshaled, PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694& unmarshaled)
{
	Exception_t* ___conn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'conn' of type 'PendingPlayer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___conn_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.NetworkRoomManager/PendingPlayer
IL2CPP_EXTERN_C void PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshal_pinvoke_cleanup(PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mirror.NetworkRoomManager/PendingPlayer
IL2CPP_EXTERN_C void PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshal_com(const PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694& unmarshaled, PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshaled_com& marshaled)
{
	Exception_t* ___conn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'conn' of type 'PendingPlayer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___conn_0Exception, NULL);
}
IL2CPP_EXTERN_C void PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshal_com_back(const PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshaled_com& marshaled, PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694& unmarshaled)
{
	Exception_t* ___conn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'conn' of type 'PendingPlayer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___conn_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mirror.NetworkRoomManager/PendingPlayer
IL2CPP_EXTERN_C void PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshal_com_cleanup(PendingPlayer_t44A9965251D49D11642373F2980F536488B0D694_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Mirror.Experimental.NetworkTransformBase/DataPoint::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataPoint_get_isValid_m305A8F1E2800210EEF2C12A7532FCF8602E0C020 (DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * __this, const RuntimeMethod* method)
{
	{
		// public bool isValid => timeStamp != 0;
		float L_0 = __this->get_timeStamp_0();
		return (bool)((((int32_t)((((float)L_0) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool DataPoint_get_isValid_m305A8F1E2800210EEF2C12A7532FCF8602E0C020_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 * _thisAdjusted = reinterpret_cast<DataPoint_t76E2D41A68DEFF1C7487E88AA39828C1ADA91AE7 *>(__this + _offset);
	bool _returnValue;
	_returnValue = DataPoint_get_isValid_m305A8F1E2800210EEF2C12A7532FCF8602E0C020(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		bool L_4;
		L_4 = Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		float L_5 = V_0;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_6, (1.0f), /*hidden argument*/NULL);
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))), (float)(57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool active { get; internal set; }
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0 = ((NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields*)il2cpp_codegen_static_fields_for(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var))->get_U3CactiveU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method)
{
	{
		// protected ulong syncVarDirtyBits { get; private set; }
		uint64_t L_0 = __this->get_U3CsyncVarDirtyBitsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, const RuntimeMethod* method)
{
	{
		// public NetworkIdentity identity { get; internal set; }
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_0 = __this->get_U3CidentityU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * __this, const RuntimeMethod* method)
{
	{
		// get => _connectionToClient;
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_0 = __this->get__connectionToClient_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ServerResponse_get_EndPoint_m6DAD50F1785A1577B00C8DAADB1E2446B934CA0C_inline (ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 * __this, const RuntimeMethod* method)
{
	{
		// public IPEndPoint EndPoint { get; set; }
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = __this->get_U3CEndPointU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServerResponse_set_EndPoint_mE2370B1D263800DD50A7463C05FFD93351E9526F_inline (ServerResponse_t45330E4EDF85AB1FE9805F736E862A5841688FB1 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___value0, const RuntimeMethod* method)
{
	{
		// public IPEndPoint EndPoint { get; set; }
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ___value0;
		__this->set_U3CEndPointU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_RoundToInt_m1AE35E5F4CC5F4405BE7AB443C648544E6C523AA_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___v0;
		float L_4 = L_3.get_y_1();
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_4, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_op_Subtraction_mD915509B3D1633AB0C8155397F4CA15B385FBBEA_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___a0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___b1, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___a0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___b1), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___a0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___b1), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_4), ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m8771447B47D7A1D61B647FFDC02FE36A4502C2D2_gshared_inline (Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  Enumerator_get_Current_m74B6106F631CD7A025FEA6A9D67DC523CE3DBB06_gshared_inline (Enumerator_tDCFEF2C577CFE61CB2877F7AFEADABA12DC5A0AE * __this, const RuntimeMethod* method)
{
	{
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0 = (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE )__this->get__current_3();
		return (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
