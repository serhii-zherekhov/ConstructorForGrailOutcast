#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

struct Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8;
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A;
struct CanvasSampleSaveFileImage_tB713C99499F5401870D5A6F71F719F8B8DC055F9;
struct CanvasSampleSaveFileText_t243CC4FB723C1E4C698BE72515EC27541C7589DE;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6;
struct String_t;
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB;
struct U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57____Extensions_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____3D81B8EA0DC2A9BF70045B397661E27F87EDFE805205DFF11256560FE2AA9954_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E4B8B5EDA07DD4286AA910D4FB0C35EC28860229C415539264C87D4FDF06D6F9_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4F3B73DFB46D127733E1C419535899527B2AC8F1;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96;
IL2CPP_EXTERN_C String_t* _stringLiteral77BDAD99EB5443E7E9EE3AB29F1633A1F5902B0F;
IL2CPP_EXTERN_C String_t* _stringLiteralA1ECC8B9B297CCABEF47CA557F2FDF2A9DFC5818;
IL2CPP_EXTERN_C String_t* _stringLiteralA9F555C442D901AFFFF61EA43DAA3218BDB6EDC2;
IL2CPP_EXTERN_C String_t* _stringLiteralAB4AADD6E2E6EDA677C79FFAC429E5F39528B3B1;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C4243AEC41BA48AC12414CDCB049FF3F249104;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* U3COutputRoutineU3Ed__4_System_Collections_IEnumerator_Reset_m549896EAD12BA5A5C5F6A8C99CFB1CC1A13C179F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	bool ___m_Used;
};
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___urlArr;
	CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A* ___U3CU3E4__this;
	String_t* ___U3CoutputTextU3E5__2;
	int32_t ___U3CiU3E5__3;
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___U3CloaderU3E5__4;
};
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	String_t* ___heading;
	String_t* ___text;
	String_t* ___linkText;
	String_t* ___url;
};
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57 
{
	String_t* ___Name;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Extensions;
};
struct ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshaled_pinvoke
{
	char* ___Name;
	char** ___Extensions;
};
struct ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshaled_com
{
	Il2CppChar* ___Name;
	Il2CppChar** ___Extensions;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____uwr;
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1428_t0A713EE9749C0E4F14DFBCFACADB77F4345215A9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1428_t0A713EE9749C0E4F14DFBCFACADB77F4345215A9__padding[1428];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3733_t86E13E3A80D1E7A4C0FC87E55F9466684D61F690 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3733_t86E13E3A80D1E7A4C0FC87E55F9466684D61F690__padding[3733];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PenStatus_tCAD6543115EF443E17410B52D37EC67BCC88ABB8 
{
	int32_t ___value__;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	int32_t ___value__;
};
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct InputButton_t7F40241CC7C406EBD574D426F736CB744DE86CDA 
{
	int32_t ___value__;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered;
	bool ___U3CeligibleForClickU3Ek__BackingField;
	int32_t ___U3CdisplayIndexU3Ek__BackingField;
	int32_t ___U3CpointerIdU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField;
	float ___U3CclickTimeU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField;
	bool ___U3CuseDragThresholdU3Ek__BackingField;
	bool ___U3CdraggingU3Ek__BackingField;
	int32_t ___U3CbuttonU3Ek__BackingField;
	float ___U3CpressureU3Ek__BackingField;
	float ___U3CtangentialPressureU3Ek__BackingField;
	float ___U3CaltitudeAngleU3Ek__BackingField;
	float ___U3CazimuthAngleU3Ek__BackingField;
	float ___U3CtwistU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CtiltU3Ek__BackingField;
	int32_t ___U3CpenStatusU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField;
	bool ___U3CfullyExitedU3Ek__BackingField;
	bool ___U3CreenteredU3Ek__BackingField;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8  : public MulticastDelegate_t
{
};
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon;
	String_t* ___title;
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections;
	bool ___loadedLayout;
};
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___output;
};
struct CanvasSampleSaveFileImage_tB713C99499F5401870D5A6F71F719F8B8DC055F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___output;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____textureBytes;
};
struct CanvasSampleSaveFileText_t243CC4FB723C1E4C698BE72515EC27541C7589DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___output;
	String_t* ____data;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask;
	bool ___m_Maskable;
	bool ___m_IsMaskingGraphic;
	bool ___m_IncludeForMasking;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged;
	bool ___m_ShouldRecalculate;
	int32_t ___m_StencilValue;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData;
	String_t* ___m_Text;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout;
	bool ___m_DisableFontTextureRebuiltCallback;
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D3733_t86E13E3A80D1E7A4C0FC87E55F9466684D61F690 ___3D81B8EA0DC2A9BF70045B397661E27F87EDFE805205DFF11256560FE2AA9954;
	__StaticArrayInitTypeSizeU3D1428_t0A713EE9749C0E4F14DFBCFACADB77F4345215A9 ___E4B8B5EDA07DD4286AA910D4FB0C35EC28860229C415539264C87D4FDF06D6F9;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_StaticFields
{
	RuntimeObject* ____platformWrapper;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD  : public RuntimeArray
{
	ALIGN_FIELD (8) ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57 m_Items[1];

	inline ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Extensions), (void*)NULL);
		#endif
	}
	inline ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Extensions), (void*)NULL);
		#endif
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleOpenFileTextMultiple_UploadFile_mE820252E246975D11404B36CAA26D37B8C2268C3 (String_t* ___0_gameObjectName, String_t* ___1_methodName, String_t* ___2_filter, bool ___3_multiple, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CanvasSampleOpenFileTextMultiple_OutputRoutine_mDAE24F2997F90B37193D0E67E87A6AB9D5AB88DF (CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_urlArr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COutputRoutineU3Ed__4__ctor_m07548233A92A7A509F44B0954D4038C1D3D4DB4E (U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___0_url, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileImage_DownloadFile_m84606D7D99CD717BF24D8271959422DDF6D89CAB (String_t* ___0_gameObjectName, String_t* ___1_methodName, String_t* ___2_filename, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_byteArray, int32_t ___4_byteArraySize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileText_DownloadFile_mCB69E461801C82E9566FB88DB5F00DA91E85428C (String_t* ___0_gameObjectName, String_t* ___1_methodName, String_t* ___2_filename, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_byteArray, int32_t ___4_byteArraySize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionFilter__ctor_mC6B29D2340E2ABFDB631D14F82670A0B68B70373 (ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57* __this, String_t* ___0_filterName, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_filterExtensions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StandaloneFileBrowser_OpenFilePanel_mA9A53F487A5FAB785DA5A42CB82560E113900F28 (String_t* ___0_title, String_t* ___1_directory, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* ___2_extensions, bool ___3_multiselect, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneFileBrowser_OpenFilePanelAsync_m4E9384D6A7E1459E8493C956E29DA2F4AD3AA4A8 (String_t* ___0_title, String_t* ___1_directory, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* ___2_extensions, bool ___3_multiselect, Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8* ___4_cb, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandaloneFileBrowser_SaveFilePanel_m27DF41BF602A1712BE13DF3F7EB49A998A50B654 (String_t* ___0_title, String_t* ___1_directory, String_t* ___2_defaultName, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* ___3_extensions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneFileBrowser_SaveFilePanelAsync_m4DE0BB49F677327EAFE8D5F1645340FFB7EC6A08 (String_t* ___0_title, String_t* ___1_directory, String_t* ___2_defaultName, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* ___3_extensions, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_cb, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL UploadFile(char*, char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL DownloadFile(char*, char*, char*, uint8_t*, int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleOpenFileTextMultiple_UploadFile_mE820252E246975D11404B36CAA26D37B8C2268C3 (String_t* ___0_gameObjectName, String_t* ___1_methodName, String_t* ___2_filter, bool ___3_multiple, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, int32_t);

	char* ____0_gameObjectName_marshaled = NULL;
	____0_gameObjectName_marshaled = il2cpp_codegen_marshal_string(___0_gameObjectName);

	char* ____1_methodName_marshaled = NULL;
	____1_methodName_marshaled = il2cpp_codegen_marshal_string(___1_methodName);

	char* ____2_filter_marshaled = NULL;
	____2_filter_marshaled = il2cpp_codegen_marshal_string(___2_filter);

	reinterpret_cast<PInvokeFunc>(UploadFile)(____0_gameObjectName_marshaled, ____1_methodName_marshaled, ____2_filter_marshaled, static_cast<int32_t>(___3_multiple));

	il2cpp_codegen_marshal_free(____0_gameObjectName_marshaled);
	____0_gameObjectName_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_methodName_marshaled);
	____1_methodName_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_filter_marshaled);
	____2_filter_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleOpenFileTextMultiple_OnPointerDown_m7C805B047AF11A9C095807DDE4C54DC9C645AC78 (CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9F555C442D901AFFFF61EA43DAA3218BDB6EDC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		CanvasSampleOpenFileTextMultiple_UploadFile_mE820252E246975D11404B36CAA26D37B8C2268C3(L_1, _stringLiteralA9F555C442D901AFFFF61EA43DAA3218BDB6EDC2, _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleOpenFileTextMultiple_OnFileUpload_m35D3B26D81E813000CBEFA66DAA68D82F20B12C8 (CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A* __this, String_t* ___0_urls, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_urls;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)44), 0, NULL);
		RuntimeObject* L_2;
		L_2 = CanvasSampleOpenFileTextMultiple_OutputRoutine_mDAE24F2997F90B37193D0E67E87A6AB9D5AB88DF(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CanvasSampleOpenFileTextMultiple_OutputRoutine_mDAE24F2997F90B37193D0E67E87A6AB9D5AB88DF (CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_urlArr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF* L_0 = (U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF*)il2cpp_codegen_object_new(U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF_il2cpp_TypeInfo_var);
		U3COutputRoutineU3Ed__4__ctor_m07548233A92A7A509F44B0954D4038C1D3D4DB4E(L_0, 0, NULL);
		U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF* L_1 = L_0;
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_urlArr;
		L_2->___urlArr = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___urlArr), (void*)L_3);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleOpenFileTextMultiple__ctor_mF985A803EF38B657E6611D18667C133F2E43F305 (CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COutputRoutineU3Ed__4__ctor_m07548233A92A7A509F44B0954D4038C1D3D4DB4E (U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COutputRoutineU3Ed__4_System_IDisposable_Dispose_mC14D9B1A7A213694E4DE97BB6EE0F203189A9FAD (U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COutputRoutineU3Ed__4_MoveNext_m37A4A236D035824EA1F4FF0E3A3D8B7F49F12CB6 (U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		__this->___U3CoutputTextU3E5__2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutputTextU3E5__2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___U3CiU3E5__3 = 0;
		goto IL_0099;
	}

IL_0032:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___urlArr;
		int32_t L_5 = __this->___U3CiU3E5__3;
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_8 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_8, L_7, NULL);
		__this->___U3CloaderU3E5__4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloaderU3E5__4), (void*)L_8);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_9 = __this->___U3CloaderU3E5__4;
		__this->___U3CU3E2__current = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_9);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		String_t* L_10 = __this->___U3CoutputTextU3E5__2;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_11 = __this->___U3CloaderU3E5__4;
		String_t* L_12;
		L_12 = WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, L_12, NULL);
		__this->___U3CoutputTextU3E5__2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutputTextU3E5__2), (void*)L_13);
		__this->___U3CloaderU3E5__4 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloaderU3E5__4), (void*)(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)NULL);
		int32_t L_14 = __this->___U3CiU3E5__3;
		V_2 = L_14;
		int32_t L_15 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0099:
	{
		int32_t L_16 = __this->___U3CiU3E5__3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = __this->___urlArr;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		CanvasSampleOpenFileTextMultiple_tAF90C72A8849F644C2051D0F283EFD6FFABE4F4A* L_18 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = L_18->___output;
		String_t* L_20 = __this->___U3CoutputTextU3E5__2;
		VirtualActionInvoker1< String_t* >::Invoke(75, L_19, L_20);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COutputRoutineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF973742389DEAA10A54BA09BFB308D0EECA9F829 (U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COutputRoutineU3Ed__4_System_Collections_IEnumerator_Reset_m549896EAD12BA5A5C5F6A8C99CFB1CC1A13C179F (U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COutputRoutineU3Ed__4_System_Collections_IEnumerator_Reset_m549896EAD12BA5A5C5F6A8C99CFB1CC1A13C179F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COutputRoutineU3Ed__4_System_Collections_IEnumerator_get_Current_m520BAC8FFFC133C607663483F2AF28870E678668 (U3COutputRoutineU3Ed__4_t47C1604EB608218147C4631E6E5CC245116B1BAF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileImage_Awake_mE45E83DB40F51A64B2A0ECE161F052584E7B439D (CanvasSampleSaveFileImage_tB713C99499F5401870D5A6F71F719F8B8DC055F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = ((int32_t)100);
		V_1 = ((int32_t)100);
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_2, L_0, L_1, 3, (bool)0, NULL);
		V_2 = L_2;
		V_3 = 0;
		goto IL_0036;
	}

IL_0014:
	{
		V_4 = 0;
		goto IL_002d;
	}

IL_0019:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_3, L_4, L_5, L_6, NULL);
		int32_t L_7 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002d:
	{
		int32_t L_8 = V_4;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0036:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0014;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_2;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_13, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_14, NULL);
		__this->____textureBytes = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____textureBytes), (void*)L_15);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileImage_DownloadFile_m84606D7D99CD717BF24D8271959422DDF6D89CAB (String_t* ___0_gameObjectName, String_t* ___1_methodName, String_t* ___2_filename, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_byteArray, int32_t ___4_byteArraySize, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, uint8_t*, int32_t);

	char* ____0_gameObjectName_marshaled = NULL;
	____0_gameObjectName_marshaled = il2cpp_codegen_marshal_string(___0_gameObjectName);

	char* ____1_methodName_marshaled = NULL;
	____1_methodName_marshaled = il2cpp_codegen_marshal_string(___1_methodName);

	char* ____2_filename_marshaled = NULL;
	____2_filename_marshaled = il2cpp_codegen_marshal_string(___2_filename);

	uint8_t* ____3_byteArray_marshaled = NULL;
	if (___3_byteArray != NULL)
	{
		____3_byteArray_marshaled = reinterpret_cast<uint8_t*>((___3_byteArray)->GetAddressAtUnchecked(0));
	}

	reinterpret_cast<PInvokeFunc>(DownloadFile)(____0_gameObjectName_marshaled, ____1_methodName_marshaled, ____2_filename_marshaled, ____3_byteArray_marshaled, ___4_byteArraySize);

	il2cpp_codegen_marshal_free(____0_gameObjectName_marshaled);
	____0_gameObjectName_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_methodName_marshaled);
	____1_methodName_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_filename_marshaled);
	____2_filename_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileImage_OnPointerDown_m261C265AA33B03365735FA79BBC8CAFDCFB2261D (CanvasSampleSaveFileImage_tB713C99499F5401870D5A6F71F719F8B8DC055F9* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F3B73DFB46D127733E1C419535899527B2AC8F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C4243AEC41BA48AC12414CDCB049FF3F249104);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____textureBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____textureBytes;
		CanvasSampleSaveFileImage_DownloadFile_m84606D7D99CD717BF24D8271959422DDF6D89CAB(L_1, _stringLiteral4F3B73DFB46D127733E1C419535899527B2AC8F1, _stringLiteralB2C4243AEC41BA48AC12414CDCB049FF3F249104, L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileImage_OnFileDownload_mE558DA90A16F448DADA91B788E0949B9E8DF31F1 (CanvasSampleSaveFileImage_tB713C99499F5401870D5A6F71F719F8B8DC055F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4AADD6E2E6EDA677C79FFAC429E5F39528B3B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___output;
		VirtualActionInvoker1< String_t* >::Invoke(75, L_0, _stringLiteralAB4AADD6E2E6EDA677C79FFAC429E5F39528B3B1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileImage__ctor_m433AD42897C4AD32A4B50FE2456F45728B767AF8 (CanvasSampleSaveFileImage_tB713C99499F5401870D5A6F71F719F8B8DC055F9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileText_DownloadFile_mCB69E461801C82E9566FB88DB5F00DA91E85428C (String_t* ___0_gameObjectName, String_t* ___1_methodName, String_t* ___2_filename, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_byteArray, int32_t ___4_byteArraySize, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, uint8_t*, int32_t);

	char* ____0_gameObjectName_marshaled = NULL;
	____0_gameObjectName_marshaled = il2cpp_codegen_marshal_string(___0_gameObjectName);

	char* ____1_methodName_marshaled = NULL;
	____1_methodName_marshaled = il2cpp_codegen_marshal_string(___1_methodName);

	char* ____2_filename_marshaled = NULL;
	____2_filename_marshaled = il2cpp_codegen_marshal_string(___2_filename);

	uint8_t* ____3_byteArray_marshaled = NULL;
	if (___3_byteArray != NULL)
	{
		____3_byteArray_marshaled = reinterpret_cast<uint8_t*>((___3_byteArray)->GetAddressAtUnchecked(0));
	}

	reinterpret_cast<PInvokeFunc>(DownloadFile)(____0_gameObjectName_marshaled, ____1_methodName_marshaled, ____2_filename_marshaled, ____3_byteArray_marshaled, ___4_byteArraySize);

	il2cpp_codegen_marshal_free(____0_gameObjectName_marshaled);
	____0_gameObjectName_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_methodName_marshaled);
	____1_methodName_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_filename_marshaled);
	____2_filename_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileText_OnPointerDown_m43D0645FBC8244B1D3907DC695DE64612D8782F4 (CanvasSampleSaveFileText_t243CC4FB723C1E4C698BE72515EC27541C7589DE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F3B73DFB46D127733E1C419535899527B2AC8F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77BDAD99EB5443E7E9EE3AB29F1633A1F5902B0F);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = __this->____data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		CanvasSampleSaveFileText_DownloadFile_mCB69E461801C82E9566FB88DB5F00DA91E85428C(L_4, _stringLiteral4F3B73DFB46D127733E1C419535899527B2AC8F1, _stringLiteral77BDAD99EB5443E7E9EE3AB29F1633A1F5902B0F, L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileText_OnFileDownload_m9141CC0A599ACB57BDD486DC71A2FB3DCE3BA463 (CanvasSampleSaveFileText_t243CC4FB723C1E4C698BE72515EC27541C7589DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4AADD6E2E6EDA677C79FFAC429E5F39528B3B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___output;
		VirtualActionInvoker1< String_t* >::Invoke(75, L_0, _stringLiteralAB4AADD6E2E6EDA677C79FFAC429E5F39528B3B1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasSampleSaveFileText__ctor_m63DA60E47C1B9852620FAB4D5B06B150A06E857A (CanvasSampleSaveFileText_t243CC4FB723C1E4C698BE72515EC27541C7589DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1ECC8B9B297CCABEF47CA557F2FDF2A9DFC5818);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____data = _stringLiteralA1ECC8B9B297CCABEF47CA557F2FDF2A9DFC5818;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data), (void*)_stringLiteralA1ECC8B9B297CCABEF47CA557F2FDF2A9DFC5818);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBEB95BEB954BB63E9710BBC7AD5E78C4CB0A0033 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____3D81B8EA0DC2A9BF70045B397661E27F87EDFE805205DFF11256560FE2AA9954_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E4B8B5EDA07DD4286AA910D4FB0C35EC28860229C415539264C87D4FDF06D6F9_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)3733));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____3D81B8EA0DC2A9BF70045B397661E27F87EDFE805205DFF11256560FE2AA9954_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1428));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E4B8B5EDA07DD4286AA910D4FB0C35EC28860229C415539264C87D4FDF06D6F9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)70);
		(&V_0)->___TotalTypes = ((int32_t)75);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mE70FB23ACC1EA12ABC948AA22C2E78B2D0AA39B1 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshal_pinvoke(const ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57& unmarshaled, ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57____Extensions_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___ExtensionsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57____Extensions_FieldInfo_var, ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtensionsException, NULL);
}
IL2CPP_EXTERN_C void ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshal_pinvoke_back(const ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshaled_pinvoke& marshaled, ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57____Extensions_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___ExtensionsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57____Extensions_FieldInfo_var, ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtensionsException, NULL);
}
IL2CPP_EXTERN_C void ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshal_pinvoke_cleanup(ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshal_com(const ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57& unmarshaled, ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57____Extensions_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___ExtensionsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57____Extensions_FieldInfo_var, ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtensionsException, NULL);
}
IL2CPP_EXTERN_C void ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshal_com_back(const ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshaled_com& marshaled, ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57____Extensions_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___ExtensionsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57____Extensions_FieldInfo_var, ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtensionsException, NULL);
}
IL2CPP_EXTERN_C void ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshal_com_cleanup(ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionFilter__ctor_mC6B29D2340E2ABFDB631D14F82670A0B68B70373 (ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57* __this, String_t* ___0_filterName, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_filterExtensions, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_filterName;
		__this->___Name = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name), (void*)L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_filterExtensions;
		__this->___Extensions = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Extensions), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ExtensionFilter__ctor_mC6B29D2340E2ABFDB631D14F82670A0B68B70373_AdjustorThunk (RuntimeObject* __this, String_t* ___0_filterName, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_filterExtensions, const RuntimeMethod* method)
{
	ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57*>(__this + _offset);
	ExtensionFilter__ctor_mC6B29D2340E2ABFDB631D14F82670A0B68B70373(_thisAdjusted, ___0_filterName, ___1_filterExtensions, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneFileBrowser__cctor_m85AE1EDB818F98D95877C32B683EAEFDE40044DC (const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StandaloneFileBrowser_OpenFilePanel_m52446C4EFFC962134ABA4C57022ED887D6DB89FD (String_t* ___0_title, String_t* ___1_directory, String_t* ___2_extension, bool ___3_multiselect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* V_0 = NULL;
	ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* G_B3_0 = NULL;
	{
		String_t* L_0 = ___2_extension;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_2 = (ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)(ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)SZArrayNew(ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD_il2cpp_TypeInfo_var, (uint32_t)1);
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_3 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___2_extension;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ExtensionFilter__ctor_mC6B29D2340E2ABFDB631D14F82670A0B68B70373((&L_7), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_5, NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57)L_7);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = ((ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)(NULL));
	}

IL_002c:
	{
		V_0 = G_B3_0;
		String_t* L_8 = ___0_title;
		String_t* L_9 = ___1_directory;
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_10 = V_0;
		bool L_11 = ___3_multiselect;
		il2cpp_codegen_runtime_class_init_inline(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = StandaloneFileBrowser_OpenFilePanel_mA9A53F487A5FAB785DA5A42CB82560E113900F28(L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StandaloneFileBrowser_OpenFilePanel_mA9A53F487A5FAB785DA5A42CB82560E113900F28 (String_t* ___0_title, String_t* ___1_directory, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* ___2_extensions, bool ___3_multiselect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_StaticFields*)il2cpp_codegen_static_fields_for(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var))->____platformWrapper;
		String_t* L_1 = ___0_title;
		String_t* L_2 = ___1_directory;
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_3 = ___2_extensions;
		bool L_4 = ___3_multiselect;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = InterfaceFuncInvoker4< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, String_t*, String_t*, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*, bool >::Invoke(0, IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneFileBrowser_OpenFilePanelAsync_m76460A53AF91D10241E89284FAE418459C1B0706 (String_t* ___0_title, String_t* ___1_directory, String_t* ___2_extension, bool ___3_multiselect, Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8* ___4_cb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* V_0 = NULL;
	ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* G_B3_0 = NULL;
	{
		String_t* L_0 = ___2_extension;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_2 = (ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)(ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)SZArrayNew(ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD_il2cpp_TypeInfo_var, (uint32_t)1);
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_3 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___2_extension;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ExtensionFilter__ctor_mC6B29D2340E2ABFDB631D14F82670A0B68B70373((&L_7), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_5, NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57)L_7);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = ((ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)(NULL));
	}

IL_002c:
	{
		V_0 = G_B3_0;
		String_t* L_8 = ___0_title;
		String_t* L_9 = ___1_directory;
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_10 = V_0;
		bool L_11 = ___3_multiselect;
		Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8* L_12 = ___4_cb;
		il2cpp_codegen_runtime_class_init_inline(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		StandaloneFileBrowser_OpenFilePanelAsync_m4E9384D6A7E1459E8493C956E29DA2F4AD3AA4A8(L_8, L_9, L_10, L_11, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneFileBrowser_OpenFilePanelAsync_m4E9384D6A7E1459E8493C956E29DA2F4AD3AA4A8 (String_t* ___0_title, String_t* ___1_directory, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* ___2_extensions, bool ___3_multiselect, Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8* ___4_cb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_StaticFields*)il2cpp_codegen_static_fields_for(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var))->____platformWrapper;
		String_t* L_1 = ___0_title;
		String_t* L_2 = ___1_directory;
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_3 = ___2_extensions;
		bool L_4 = ___3_multiselect;
		Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8* L_5 = ___4_cb;
		InterfaceActionInvoker5< String_t*, String_t*, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*, bool, Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8* >::Invoke(3, IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StandaloneFileBrowser_OpenFolderPanel_mDCD8922B2DD3FB72167AD48E84B283FB2A1B870E (String_t* ___0_title, String_t* ___1_directory, bool ___2_multiselect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_StaticFields*)il2cpp_codegen_static_fields_for(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var))->____platformWrapper;
		String_t* L_1 = ___0_title;
		String_t* L_2 = ___1_directory;
		bool L_3 = ___2_multiselect;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = InterfaceFuncInvoker3< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, String_t*, String_t*, bool >::Invoke(1, IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneFileBrowser_OpenFolderPanelAsync_mA36F48F48C4F3FEC352D55292665712B12535175 (String_t* ___0_title, String_t* ___1_directory, bool ___2_multiselect, Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8* ___3_cb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_StaticFields*)il2cpp_codegen_static_fields_for(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var))->____platformWrapper;
		String_t* L_1 = ___0_title;
		String_t* L_2 = ___1_directory;
		bool L_3 = ___2_multiselect;
		Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8* L_4 = ___3_cb;
		InterfaceActionInvoker4< String_t*, String_t*, bool, Action_1_t5439CAB6DF93B6A7A29E473D9B2A9943E580CAF8* >::Invoke(4, IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandaloneFileBrowser_SaveFilePanel_m47FEDCFDF939EA02541D2FF7842EC156029B8A68 (String_t* ___0_title, String_t* ___1_directory, String_t* ___2_defaultName, String_t* ___3_extension, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* V_0 = NULL;
	ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* G_B3_0 = NULL;
	{
		String_t* L_0 = ___3_extension;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_2 = (ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)(ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)SZArrayNew(ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD_il2cpp_TypeInfo_var, (uint32_t)1);
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_3 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___3_extension;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ExtensionFilter__ctor_mC6B29D2340E2ABFDB631D14F82670A0B68B70373((&L_7), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_5, NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57)L_7);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = ((ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)(NULL));
	}

IL_002c:
	{
		V_0 = G_B3_0;
		String_t* L_8 = ___0_title;
		String_t* L_9 = ___1_directory;
		String_t* L_10 = ___2_defaultName;
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = StandaloneFileBrowser_SaveFilePanel_m27DF41BF602A1712BE13DF3F7EB49A998A50B654(L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandaloneFileBrowser_SaveFilePanel_m27DF41BF602A1712BE13DF3F7EB49A998A50B654 (String_t* ___0_title, String_t* ___1_directory, String_t* ___2_defaultName, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* ___3_extensions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_StaticFields*)il2cpp_codegen_static_fields_for(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var))->____platformWrapper;
		String_t* L_1 = ___0_title;
		String_t* L_2 = ___1_directory;
		String_t* L_3 = ___2_defaultName;
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_4 = ___3_extensions;
		String_t* L_5;
		L_5 = InterfaceFuncInvoker4< String_t*, String_t*, String_t*, String_t*, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* >::Invoke(2, IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneFileBrowser_SaveFilePanelAsync_m8BC10027FAD38947C71E351D999AA426ED5E6D74 (String_t* ___0_title, String_t* ___1_directory, String_t* ___2_defaultName, String_t* ___3_extension, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_cb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* V_0 = NULL;
	ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* G_B3_0 = NULL;
	{
		String_t* L_0 = ___3_extension;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_2 = (ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)(ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)SZArrayNew(ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD_il2cpp_TypeInfo_var, (uint32_t)1);
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_3 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___3_extension;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ExtensionFilter__ctor_mC6B29D2340E2ABFDB631D14F82670A0B68B70373((&L_7), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_5, NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ExtensionFilter_t8E3B1120DA244D6F742247E3EF9A152C3FAE3A57)L_7);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = ((ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*)(NULL));
	}

IL_002c:
	{
		V_0 = G_B3_0;
		String_t* L_8 = ___0_title;
		String_t* L_9 = ___1_directory;
		String_t* L_10 = ___2_defaultName;
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_11 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_12 = ___4_cb;
		il2cpp_codegen_runtime_class_init_inline(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		StandaloneFileBrowser_SaveFilePanelAsync_m4DE0BB49F677327EAFE8D5F1645340FFB7EC6A08(L_8, L_9, L_10, L_11, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneFileBrowser_SaveFilePanelAsync_m4DE0BB49F677327EAFE8D5F1645340FFB7EC6A08 (String_t* ___0_title, String_t* ___1_directory, String_t* ___2_defaultName, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* ___3_extensions, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_cb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_StaticFields*)il2cpp_codegen_static_fields_for(StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6_il2cpp_TypeInfo_var))->____platformWrapper;
		String_t* L_1 = ___0_title;
		String_t* L_2 = ___1_directory;
		String_t* L_3 = ___2_defaultName;
		ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD* L_4 = ___3_extensions;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = ___4_cb;
		InterfaceActionInvoker5< String_t*, String_t*, String_t*, ExtensionFilterU5BU5D_t724AA1EDDC78E2F3CC3EB4C808F408EDF52EDCFD*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* >::Invoke(5, IStandaloneFileBrowser_t702D6FF622C15DC43255001FD380A5D424F308B2_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneFileBrowser__ctor_m134B0D90725E6B9A4DA3599D30537B6309EE87A0 (StandaloneFileBrowser_t787EC519E2F250D5F984F7C4E41441B46C779AF6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
