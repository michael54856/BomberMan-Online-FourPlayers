#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Mirror.ClientRpcAttribute
struct ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81;
// Mirror.CommandAttribute
struct CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D;
// System.String
struct String_t;
// Mirror.SyncVarAttribute
struct SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
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


// Mirror.ClientRpcAttribute
struct ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 Mirror.ClientRpcAttribute::channel
	int32_t ___channel_0;
	// System.Boolean Mirror.ClientRpcAttribute::includeOwner
	bool ___includeOwner_1;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}

	inline static int32_t get_offset_of_includeOwner_1() { return static_cast<int32_t>(offsetof(ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81, ___includeOwner_1)); }
	inline bool get_includeOwner_1() const { return ___includeOwner_1; }
	inline bool* get_address_of_includeOwner_1() { return &___includeOwner_1; }
	inline void set_includeOwner_1(bool value)
	{
		___includeOwner_1 = value;
	}
};


// Mirror.CommandAttribute
struct CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 Mirror.CommandAttribute::channel
	int32_t ___channel_0;
	// System.Boolean Mirror.CommandAttribute::requiresAuthority
	bool ___requiresAuthority_1;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}

	inline static int32_t get_offset_of_requiresAuthority_1() { return static_cast<int32_t>(offsetof(CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED, ___requiresAuthority_1)); }
	inline bool get_requiresAuthority_1() const { return ___requiresAuthority_1; }
	inline bool* get_address_of_requiresAuthority_1() { return &___requiresAuthority_1; }
	inline void set_requiresAuthority_1(bool value)
	{
		___requiresAuthority_1 = value;
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
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


// UnityEngine.RuntimeInitializeLoadType
struct RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5 
{
public:
	// System.Int32 UnityEngine.RuntimeInitializeLoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.SyncVarAttribute
struct SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String Mirror.SyncVarAttribute::hook
	String_t* ___hook_0;

public:
	inline static int32_t get_offset_of_hook_0() { return static_cast<int32_t>(offsetof(SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305, ___hook_0)); }
	inline String_t* get_hook_0() const { return ___hook_0; }
	inline String_t** get_address_of_hook_0() { return &___hook_0; }
	inline void set_hook_0(String_t* value)
	{
		___hook_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hook_0), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D  : public PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948
{
public:
	// UnityEngine.RuntimeInitializeLoadType UnityEngine.RuntimeInitializeOnLoadMethodAttribute::m_LoadType
	int32_t ___m_LoadType_0;

public:
	inline static int32_t get_offset_of_m_LoadType_0() { return static_cast<int32_t>(offsetof(RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D, ___m_LoadType_0)); }
	inline int32_t get_m_LoadType_0() const { return ___m_LoadType_0; }
	inline int32_t* get_address_of_m_LoadType_0() { return &___m_LoadType_0; }
	inline void set_m_LoadType_0(int32_t value)
	{
		___m_LoadType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mirror.SyncVarAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncVarAttribute__ctor_m4E99C2B45DDA311F1D9B684B967978541348C875 (SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 * __this, const RuntimeMethod* method);
// System.Void Mirror.ClientRpcAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7 (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * __this, const RuntimeMethod* method);
// System.Void Mirror.CommandAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandAttribute__ctor_m583940E69A6305050FEF54E57CBAF339A8E77FFC (CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RuntimeInitializeOnLoadMethodAttribute::.ctor(UnityEngine.RuntimeInitializeLoadType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516 (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * __this, int32_t ___loadType0, const RuntimeMethod* method);
static void AssemblyU2DCSharp_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[0];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[1];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[2];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
}
static void BombBehaviour_tB0B1DF7F85C7EB7835BD4B4B2BDF7402B753B907_CustomAttributesCacheGenerator_power(CustomAttributesCache* cache)
{
	{
		SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 * tmp = (SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 *)cache->attributes[0];
		SyncVarAttribute__ctor_m4E99C2B45DDA311F1D9B684B967978541348C875(tmp, NULL);
	}
}
static void BombBehaviour_tB0B1DF7F85C7EB7835BD4B4B2BDF7402B753B907_CustomAttributesCacheGenerator_myX(CustomAttributesCache* cache)
{
	{
		SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 * tmp = (SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 *)cache->attributes[0];
		SyncVarAttribute__ctor_m4E99C2B45DDA311F1D9B684B967978541348C875(tmp, NULL);
	}
}
static void BombBehaviour_tB0B1DF7F85C7EB7835BD4B4B2BDF7402B753B907_CustomAttributesCacheGenerator_myY(CustomAttributesCache* cache)
{
	{
		SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 * tmp = (SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 *)cache->attributes[0];
		SyncVarAttribute__ctor_m4E99C2B45DDA311F1D9B684B967978541348C875(tmp, NULL);
	}
}
static void BombBehaviour_tB0B1DF7F85C7EB7835BD4B4B2BDF7402B753B907_CustomAttributesCacheGenerator_playerID(CustomAttributesCache* cache)
{
	{
		SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 * tmp = (SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 *)cache->attributes[0];
		SyncVarAttribute__ctor_m4E99C2B45DDA311F1D9B684B967978541348C875(tmp, NULL);
	}
}
static void BombBehaviour_tB0B1DF7F85C7EB7835BD4B4B2BDF7402B753B907_CustomAttributesCacheGenerator_BombBehaviour_ToAllClient_mD05FE30476C88DEF6A9C91D6860EAEAB9514EA74(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void GridGenerator_t6BC952DCFEC7A4AB3F54B5AA5AA35D1495FAF4C2_CustomAttributesCacheGenerator_GridGenerator_ClearSpace_m05B87AA9400544018986B230464A8CB33554A1D1(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void GridGenerator_t6BC952DCFEC7A4AB3F54B5AA5AA35D1495FAF4C2_CustomAttributesCacheGenerator_GridGenerator_DestoryBox_m710CD25C7E0CD9B76DD35E4158F15E396620D07A(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_playerID(CustomAttributesCache* cache)
{
	{
		SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 * tmp = (SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 *)cache->attributes[0];
		SyncVarAttribute__ctor_m4E99C2B45DDA311F1D9B684B967978541348C875(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_ready(CustomAttributesCache* cache)
{
	{
		SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 * tmp = (SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 *)cache->attributes[0];
		SyncVarAttribute__ctor_m4E99C2B45DDA311F1D9B684B967978541348C875(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_InitMenuCommand_m760D99AF772D8004B74EB4A681C916D2D178D947(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_ChangeReadyTextCommand_mAFFAD31517008466787E45B0BA5E39526F85EFAD(CustomAttributesCache* cache)
{
	{
		CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED * tmp = (CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED *)cache->attributes[0];
		CommandAttribute__ctor_m583940E69A6305050FEF54E57CBAF339A8E77FFC(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_ChangeReadyText_m1681A330B3203A9D8D437CE5D698EB0C648344D1(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_StartTheGame_m515CB97B5ECE3DEA9CFC1B7D05D424C17D19BCE9(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_StartMoving_m35C1A39E78E6D874D2362ABC87A9A8FA1DD765EA(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_ChangeColor_m15198AD8909CDD18D28F0C706DDA4809CE26FF9D(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_SpawnBomb_m9E68A9F13367A0961A3A52218D1B0439A712205E(CustomAttributesCache* cache)
{
	{
		CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED * tmp = (CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED *)cache->attributes[0];
		CommandAttribute__ctor_m583940E69A6305050FEF54E57CBAF339A8E77FFC(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_ChangeGrid_mDA73C8ADA874274549D8F2194632D72E5BDF7DC9(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_DestoryPowerUp_m3CEEBA3D5DC9E842DD3805F2D76950FD93167831(CustomAttributesCache* cache)
{
	{
		CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED * tmp = (CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED *)cache->attributes[0];
		CommandAttribute__ctor_m583940E69A6305050FEF54E57CBAF339A8E77FFC(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_Died_mA228C34121CED54E7066E9A731B98BCECFBA0867(CustomAttributesCache* cache)
{
	{
		CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED * tmp = (CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED *)cache->attributes[0];
		CommandAttribute__ctor_m583940E69A6305050FEF54E57CBAF339A8E77FFC(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_CantMove_m69DBDA18B7E9A636FDD5472C7080021243FB379B(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_EndGame_m80708745A6606C44298713690D7BAD6309A0B31E(CustomAttributesCache* cache)
{
	{
		ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 * tmp = (ClientRpcAttribute_t8DCFBED16EF4C9046CE120F29B84E88950AC9C81 *)cache->attributes[0];
		ClientRpcAttribute__ctor_mCE8A483D94F06D1FA29EA2342BE860018B29BCA7(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GeneratedNetworkCode_tA5DCDE73EABE64446CC3985FE891D3CA9B55A51E_CustomAttributesCacheGenerator_GeneratedNetworkCode_InitReadWriters_mF3F676E480CD76ED8819C76E79234EED4737891B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516(tmp, 1LL, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[];
const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[24] = 
{
	U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_CustomAttributesCacheGenerator,
	BombBehaviour_tB0B1DF7F85C7EB7835BD4B4B2BDF7402B753B907_CustomAttributesCacheGenerator_power,
	BombBehaviour_tB0B1DF7F85C7EB7835BD4B4B2BDF7402B753B907_CustomAttributesCacheGenerator_myX,
	BombBehaviour_tB0B1DF7F85C7EB7835BD4B4B2BDF7402B753B907_CustomAttributesCacheGenerator_myY,
	BombBehaviour_tB0B1DF7F85C7EB7835BD4B4B2BDF7402B753B907_CustomAttributesCacheGenerator_playerID,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_playerID,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_ready,
	BombBehaviour_tB0B1DF7F85C7EB7835BD4B4B2BDF7402B753B907_CustomAttributesCacheGenerator_BombBehaviour_ToAllClient_mD05FE30476C88DEF6A9C91D6860EAEAB9514EA74,
	GridGenerator_t6BC952DCFEC7A4AB3F54B5AA5AA35D1495FAF4C2_CustomAttributesCacheGenerator_GridGenerator_ClearSpace_m05B87AA9400544018986B230464A8CB33554A1D1,
	GridGenerator_t6BC952DCFEC7A4AB3F54B5AA5AA35D1495FAF4C2_CustomAttributesCacheGenerator_GridGenerator_DestoryBox_m710CD25C7E0CD9B76DD35E4158F15E396620D07A,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_InitMenuCommand_m760D99AF772D8004B74EB4A681C916D2D178D947,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_ChangeReadyTextCommand_mAFFAD31517008466787E45B0BA5E39526F85EFAD,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_ChangeReadyText_m1681A330B3203A9D8D437CE5D698EB0C648344D1,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_StartTheGame_m515CB97B5ECE3DEA9CFC1B7D05D424C17D19BCE9,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_StartMoving_m35C1A39E78E6D874D2362ABC87A9A8FA1DD765EA,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_ChangeColor_m15198AD8909CDD18D28F0C706DDA4809CE26FF9D,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_SpawnBomb_m9E68A9F13367A0961A3A52218D1B0439A712205E,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_ChangeGrid_mDA73C8ADA874274549D8F2194632D72E5BDF7DC9,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_DestoryPowerUp_m3CEEBA3D5DC9E842DD3805F2D76950FD93167831,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_Died_mA228C34121CED54E7066E9A731B98BCECFBA0867,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_CantMove_m69DBDA18B7E9A636FDD5472C7080021243FB379B,
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_CustomAttributesCacheGenerator_PlayerMovement_EndGame_m80708745A6606C44298713690D7BAD6309A0B31E,
	GeneratedNetworkCode_tA5DCDE73EABE64446CC3985FE891D3CA9B55A51E_CustomAttributesCacheGenerator_GeneratedNetworkCode_InitReadWriters_mF3F676E480CD76ED8819C76E79234EED4737891B,
	AssemblyU2DCSharp_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
