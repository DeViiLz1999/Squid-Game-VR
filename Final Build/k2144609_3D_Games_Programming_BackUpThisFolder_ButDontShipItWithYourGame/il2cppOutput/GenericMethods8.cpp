#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct Action_1_t544353DE1FB96A48C713EC84EE19E4320AA92A99;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F;
// System.Comparison`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Comparison_1_t816BE556819540BA6AFE8FBB13F995AEED590F30;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Dictionary_2_tD06DEC3B9E7AC19B31379B218D65E9C58BFF9894;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_t86132C0F8B31101EE4D1A23B71484DB7D3AD6F35;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>>
struct Dictionary_2_tAD4071299B181838DF006582082FA76D2634D175;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Transform>
struct Dictionary_2_t05799DEC333EA9E40070CAC69681C3555AE872A4;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single>
struct Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_tDFE64DF247F047B9475BD969377F52A61B0FB92F;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>>
struct LinkedPool_1_tB0A9D8A3CE5E3436568BF271E4830D10E96A5084;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator>>
struct LinkedPool_1_tFAA02350129881E86F2CDDCCAA2C5FF4B0BFE8AB;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct LinkedPool_1_tC71CB21F818576A467857284796CDB31D260015B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct LinkedPool_1_t64D22AD9E7EA1F457DC26D3093EB93A57125E766;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct LinkedPool_1_t32521DC5092675F697F526BAAAFE29F5F875CC30;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct LinkedPool_1_t3501251255EB5662111043121D1A0A205F1A8D3B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct LinkedPool_1_t6B7618ADC3A598F7887995B3E28748177B7E40BF;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct LinkedPool_1_tE21B65089436828834C03153C16FD41085100578;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct LinkedPool_1_t60F8EE05DBC8DB8F202C181035FB85BFA8A27FDC;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct LinkedPool_1_t3C0A632911E27EF560EAE0254DF8BC588DEA6119;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.Transform>
struct LinkedPool_1_tAAC8B89F1624D5EE4DC942336F322D96CBDC413E;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer>
struct List_1_tF61B3D8A87FC10C99A01DFD75B55D3FCB5A96D62;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct List_1_t8F5833796A8407AFD49E7C1864E6E76653D3F2C4;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct List_1_tCAFBFD76706B54DB653FF3DD6594D969F208A84E;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct List_1_tCCED540317FA295CA1BAEBCCD4362DE7EFFB64FD;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9D216521E6A213FF8562D215598D336ABB5474F4;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer>
struct List_1_tCE827E333AB42329AD38D76D6AAF63DA3CCC56C8;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager>
struct List_1_t19B2C24A261798D687174CD32FE67952C7E70DD7;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator>
struct List_1_t5985C00E36658C979E2F5934B089892020486C67;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct RegistrationList_1_t26D1D717781DBB82AB1AD7A3E9B283602045116D;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct RegistrationList_1_tEA67F97B075C7ECBFD9B8CA02CD33CE0AED3A100;
// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer>
struct SmallRegistrationList_1_tC431DB328747CA6B7F4757C56C20EEAA25CED789;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>[]
struct Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_tE67E6DD7E9EA3DF917DFCA0EBB711D71C4E25525;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3;
// UnityEngine.InputSystem.IInputInteraction[]
struct IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E;
// UnityEngine.InputSystem.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27;
// UnityEngine.InputSystem.InputProcessor[]
struct InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.ISubsystem
struct ISubsystem_t64464AB5EA37383499172853FA932A96C7841789;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_t48BDDD33F735BFB31B95990F96FA44A8B2C00E1A;
// UnityEngine.InputSystem.InputAction
struct InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126;
// UnityEngine.InputSystem.InputControl
struct InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor
struct TeleportationMonitor_t5F12F4D88C2F0DBAE989D9FDED4407D26039BE8F;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem
struct WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60;
// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator
struct XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter
struct XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA;
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506;
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42;
// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider
struct WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB;
// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction
struct GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9E74E9D949738C4D713E2CBBB913F1802FC81EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5937D6874DDC30F39BB9C214C475213227C16F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m20E7EDFF477647AD2AAEA5C01F2F96F086673299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mF3A18A8F874B12CB2B14263BF4574ABB14FBCF1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_com;
struct DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* ___entries_1;
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
	KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___entries_1)); }
	inline EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___keys_7)); }
	inline KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___values_8)); }
	inline ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
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

// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator
struct XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00  : public RuntimeObject
{
public:
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator::m_Filter
	XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA * ___m_Filter_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator::m_Enabled
	bool ___m_Enabled_1;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator::m_Weight
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_Weight_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator::m_IsAwake
	bool ___m_IsAwake_3;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator::m_IsEnabled
	bool ___m_IsEnabled_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator::m_IsRegistered
	bool ___m_IsRegistered_5;

public:
	inline static int32_t get_offset_of_m_Filter_0() { return static_cast<int32_t>(offsetof(XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00, ___m_Filter_0)); }
	inline XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA * get_m_Filter_0() const { return ___m_Filter_0; }
	inline XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA ** get_address_of_m_Filter_0() { return &___m_Filter_0; }
	inline void set_m_Filter_0(XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA * value)
	{
		___m_Filter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Filter_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Enabled_1() { return static_cast<int32_t>(offsetof(XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00, ___m_Enabled_1)); }
	inline bool get_m_Enabled_1() const { return ___m_Enabled_1; }
	inline bool* get_address_of_m_Enabled_1() { return &___m_Enabled_1; }
	inline void set_m_Enabled_1(bool value)
	{
		___m_Enabled_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00, ___m_Weight_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_Weight_2() const { return ___m_Weight_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_Weight_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Weight_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsAwake_3() { return static_cast<int32_t>(offsetof(XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00, ___m_IsAwake_3)); }
	inline bool get_m_IsAwake_3() const { return ___m_IsAwake_3; }
	inline bool* get_address_of_m_IsAwake_3() { return &___m_IsAwake_3; }
	inline void set_m_IsAwake_3(bool value)
	{
		___m_IsAwake_3 = value;
	}

	inline static int32_t get_offset_of_m_IsEnabled_4() { return static_cast<int32_t>(offsetof(XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00, ___m_IsEnabled_4)); }
	inline bool get_m_IsEnabled_4() const { return ___m_IsEnabled_4; }
	inline bool* get_address_of_m_IsEnabled_4() { return &___m_IsEnabled_4; }
	inline void set_m_IsEnabled_4(bool value)
	{
		___m_IsEnabled_4 = value;
	}

	inline static int32_t get_offset_of_m_IsRegistered_5() { return static_cast<int32_t>(offsetof(XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00, ___m_IsRegistered_5)); }
	inline bool get_m_IsRegistered_5() const { return ___m_IsRegistered_5; }
	inline bool* get_address_of_m_IsRegistered_5() { return &___m_IsRegistered_5; }
	inline void set_m_IsRegistered_5(bool value)
	{
		___m_IsRegistered_5 = value;
	}
};


// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_t664F535B46589884A627F66F98A451D1CD48F76B  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>
struct InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC, ___firstValue_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC, ___additionalValues_2)); }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E, ___firstValue_1)); }
	inline Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E, ___additionalValues_2)); }
	inline Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___firstValue_1)); }
	inline InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tE67E6DD7E9EA3DF917DFCA0EBB711D71C4E25525* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C, ___firstValue_1)); }
	inline InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tE67E6DD7E9EA3DF917DFCA0EBB711D71C4E25525* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tE67E6DD7E9EA3DF917DFCA0EBB711D71C4E25525** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tE67E6DD7E9EA3DF917DFCA0EBB711D71C4E25525* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Object>
struct InlinedArray_1_t72D8291C9FDC5DF7FE2F7468469720797A7CA722 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	RuntimeObject * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t72D8291C9FDC5DF7FE2F7468469720797A7CA722, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t72D8291C9FDC5DF7FE2F7468469720797A7CA722, ___firstValue_1)); }
	inline RuntimeObject * get_firstValue_1() const { return ___firstValue_1; }
	inline RuntimeObject ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(RuntimeObject * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t72D8291C9FDC5DF7FE2F7468469720797A7CA722, ___additionalValues_2)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_additionalValues_2() const { return ___additionalValues_2; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// UnityEngine.XR.InteractionSubsystems.GestureId
struct GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 
{
public:
	// System.UInt64 UnityEngine.XR.InteractionSubsystems.GestureId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.InteractionSubsystems.GestureId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_StaticFields
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.InteractionSubsystems.GestureId::s_InvalidId
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7_StaticFields, ___s_InvalidId_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___s_InvalidId_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B 
{
public:
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* ___m_DeviceRequirements_2;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingGroup_1() { return static_cast<int32_t>(offsetof(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B, ___m_BindingGroup_1)); }
	inline String_t* get_m_BindingGroup_1() const { return ___m_BindingGroup_1; }
	inline String_t** get_address_of_m_BindingGroup_1() { return &___m_BindingGroup_1; }
	inline void set_m_BindingGroup_1(String_t* value)
	{
		___m_BindingGroup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroup_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceRequirements_2() { return static_cast<int32_t>(offsetof(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B, ___m_DeviceRequirements_2)); }
	inline DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* get_m_DeviceRequirements_2() const { return ___m_DeviceRequirements_2; }
	inline DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A** get_address_of_m_DeviceRequirements_2() { return &___m_DeviceRequirements_2; }
	inline void set_m_DeviceRequirements_2(DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* value)
	{
		___m_DeviceRequirements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceRequirements_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_com* ___m_DeviceRequirements_2;
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47 
{
public:
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;

public:
	inline static int32_t get_offset_of_m_Bits_0() { return static_cast<int32_t>(offsetof(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47, ___m_Bits_0)); }
	inline uint32_t get_m_Bits_0() const { return ___m_Bits_0; }
	inline uint32_t* get_address_of_m_Bits_0() { return &___m_Bits_0; }
	inline void set_m_Bits_0(uint32_t value)
	{
		___m_Bits_0 = value;
	}

	inline static int32_t get_offset_of_m_Mask_1() { return static_cast<int32_t>(offsetof(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47, ___m_Mask_1)); }
	inline int32_t get_m_Mask_1() const { return ___m_Mask_1; }
	inline int32_t* get_address_of_m_Mask_1() { return &___m_Mask_1; }
	inline void set_m_Mask_1(int32_t value)
	{
		___m_Mask_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
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


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8, ___table_0)); }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8_marshaled_pinvoke
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8_marshaled_com
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___table_0;
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


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4, ___m_State_0)); }
	inline InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4_marshaled_pinvoke
{
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4_marshaled_com
{
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 
{
public:
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_ActionMap
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_ActionMap_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_Action
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_BindingIndexInMap
	int32_t ___m_BindingIndexInMap_2;

public:
	inline static int32_t get_offset_of_m_ActionMap_0() { return static_cast<int32_t>(offsetof(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999, ___m_ActionMap_0)); }
	inline InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * get_m_ActionMap_0() const { return ___m_ActionMap_0; }
	inline InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 ** get_address_of_m_ActionMap_0() { return &___m_ActionMap_0; }
	inline void set_m_ActionMap_0(InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * value)
	{
		___m_ActionMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999, ___m_Action_1)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingIndexInMap_2() { return static_cast<int32_t>(offsetof(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999, ___m_BindingIndexInMap_2)); }
	inline int32_t get_m_BindingIndexInMap_2() const { return ___m_BindingIndexInMap_2; }
	inline int32_t* get_address_of_m_BindingIndexInMap_2() { return &___m_BindingIndexInMap_2; }
	inline void set_m_BindingIndexInMap_2(int32_t value)
	{
		___m_BindingIndexInMap_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999_marshaled_pinvoke
{
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_ActionMap_0;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999_marshaled_com
{
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_ActionMap_0;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584 
{
public:
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 * ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA * ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 * ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC * ___mapIndices_16;

public:
	inline static int32_t get_offset_of_basePtr_0() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___basePtr_0)); }
	inline void* get_basePtr_0() const { return ___basePtr_0; }
	inline void** get_address_of_basePtr_0() { return &___basePtr_0; }
	inline void set_basePtr_0(void* value)
	{
		___basePtr_0 = value;
	}

	inline static int32_t get_offset_of_mapCount_1() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___mapCount_1)); }
	inline int32_t get_mapCount_1() const { return ___mapCount_1; }
	inline int32_t* get_address_of_mapCount_1() { return &___mapCount_1; }
	inline void set_mapCount_1(int32_t value)
	{
		___mapCount_1 = value;
	}

	inline static int32_t get_offset_of_actionCount_2() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionCount_2)); }
	inline int32_t get_actionCount_2() const { return ___actionCount_2; }
	inline int32_t* get_address_of_actionCount_2() { return &___actionCount_2; }
	inline void set_actionCount_2(int32_t value)
	{
		___actionCount_2 = value;
	}

	inline static int32_t get_offset_of_interactionCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___interactionCount_3)); }
	inline int32_t get_interactionCount_3() const { return ___interactionCount_3; }
	inline int32_t* get_address_of_interactionCount_3() { return &___interactionCount_3; }
	inline void set_interactionCount_3(int32_t value)
	{
		___interactionCount_3 = value;
	}

	inline static int32_t get_offset_of_bindingCount_4() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___bindingCount_4)); }
	inline int32_t get_bindingCount_4() const { return ___bindingCount_4; }
	inline int32_t* get_address_of_bindingCount_4() { return &___bindingCount_4; }
	inline void set_bindingCount_4(int32_t value)
	{
		___bindingCount_4 = value;
	}

	inline static int32_t get_offset_of_controlCount_5() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___controlCount_5)); }
	inline int32_t get_controlCount_5() const { return ___controlCount_5; }
	inline int32_t* get_address_of_controlCount_5() { return &___controlCount_5; }
	inline void set_controlCount_5(int32_t value)
	{
		___controlCount_5 = value;
	}

	inline static int32_t get_offset_of_compositeCount_6() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___compositeCount_6)); }
	inline int32_t get_compositeCount_6() const { return ___compositeCount_6; }
	inline int32_t* get_address_of_compositeCount_6() { return &___compositeCount_6; }
	inline void set_compositeCount_6(int32_t value)
	{
		___compositeCount_6 = value;
	}

	inline static int32_t get_offset_of_actionStates_7() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionStates_7)); }
	inline TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 * get_actionStates_7() const { return ___actionStates_7; }
	inline TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 ** get_address_of_actionStates_7() { return &___actionStates_7; }
	inline void set_actionStates_7(TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 * value)
	{
		___actionStates_7 = value;
	}

	inline static int32_t get_offset_of_bindingStates_8() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___bindingStates_8)); }
	inline BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA * get_bindingStates_8() const { return ___bindingStates_8; }
	inline BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA ** get_address_of_bindingStates_8() { return &___bindingStates_8; }
	inline void set_bindingStates_8(BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA * value)
	{
		___bindingStates_8 = value;
	}

	inline static int32_t get_offset_of_interactionStates_9() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___interactionStates_9)); }
	inline InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 * get_interactionStates_9() const { return ___interactionStates_9; }
	inline InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 ** get_address_of_interactionStates_9() { return &___interactionStates_9; }
	inline void set_interactionStates_9(InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 * value)
	{
		___interactionStates_9 = value;
	}

	inline static int32_t get_offset_of_controlMagnitudes_10() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___controlMagnitudes_10)); }
	inline float* get_controlMagnitudes_10() const { return ___controlMagnitudes_10; }
	inline float** get_address_of_controlMagnitudes_10() { return &___controlMagnitudes_10; }
	inline void set_controlMagnitudes_10(float* value)
	{
		___controlMagnitudes_10 = value;
	}

	inline static int32_t get_offset_of_compositeMagnitudes_11() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___compositeMagnitudes_11)); }
	inline float* get_compositeMagnitudes_11() const { return ___compositeMagnitudes_11; }
	inline float** get_address_of_compositeMagnitudes_11() { return &___compositeMagnitudes_11; }
	inline void set_compositeMagnitudes_11(float* value)
	{
		___compositeMagnitudes_11 = value;
	}

	inline static int32_t get_offset_of_enabledControls_12() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___enabledControls_12)); }
	inline int32_t* get_enabledControls_12() const { return ___enabledControls_12; }
	inline int32_t** get_address_of_enabledControls_12() { return &___enabledControls_12; }
	inline void set_enabledControls_12(int32_t* value)
	{
		___enabledControls_12 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndicesAndCounts_13() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionBindingIndicesAndCounts_13)); }
	inline uint16_t* get_actionBindingIndicesAndCounts_13() const { return ___actionBindingIndicesAndCounts_13; }
	inline uint16_t** get_address_of_actionBindingIndicesAndCounts_13() { return &___actionBindingIndicesAndCounts_13; }
	inline void set_actionBindingIndicesAndCounts_13(uint16_t* value)
	{
		___actionBindingIndicesAndCounts_13 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndices_14() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionBindingIndices_14)); }
	inline uint16_t* get_actionBindingIndices_14() const { return ___actionBindingIndices_14; }
	inline uint16_t** get_address_of_actionBindingIndices_14() { return &___actionBindingIndices_14; }
	inline void set_actionBindingIndices_14(uint16_t* value)
	{
		___actionBindingIndices_14 = value;
	}

	inline static int32_t get_offset_of_controlIndexToBindingIndex_15() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___controlIndexToBindingIndex_15)); }
	inline int32_t* get_controlIndexToBindingIndex_15() const { return ___controlIndexToBindingIndex_15; }
	inline int32_t** get_address_of_controlIndexToBindingIndex_15() { return &___controlIndexToBindingIndex_15; }
	inline void set_controlIndexToBindingIndex_15(int32_t* value)
	{
		___controlIndexToBindingIndex_15 = value;
	}

	inline static int32_t get_offset_of_mapIndices_16() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___mapIndices_16)); }
	inline ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC * get_mapIndices_16() const { return ___mapIndices_16; }
	inline ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC ** get_address_of_mapIndices_16() { return &___mapIndices_16; }
	inline void set_mapIndices_16(ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC * value)
	{
		___mapIndices_16 = value;
	}
};


// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder
struct ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B 
{
public:
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::<control>k__BackingField
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___U3CcontrolU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CcontrolU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B, ___U3CcontrolU3Ek__BackingField_0)); }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * get_U3CcontrolU3Ek__BackingField_0() const { return ___U3CcontrolU3Ek__BackingField_0; }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 ** get_address_of_U3CcontrolU3Ek__BackingField_0() { return &___U3CcontrolU3Ek__BackingField_0; }
	inline void set_U3CcontrolU3Ek__BackingField_0(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * value)
	{
		___U3CcontrolU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontrolU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlExtensions/ControlBuilder
struct ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B_marshaled_pinvoke
{
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___U3CcontrolU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlExtensions/ControlBuilder
struct ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B_marshaled_com
{
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___U3CcontrolU3Ek__BackingField_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D, ___table_0)); }
	inline Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D_marshaled_pinvoke
{
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D_marshaled_com
{
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::precompiledLayouts
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;

public:
	inline static int32_t get_offset_of_layoutTypes_1() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutTypes_1)); }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * get_layoutTypes_1() const { return ___layoutTypes_1; }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C ** get_address_of_layoutTypes_1() { return &___layoutTypes_1; }
	inline void set_layoutTypes_1(Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * value)
	{
		___layoutTypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutTypes_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutStrings_2() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutStrings_2)); }
	inline Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * get_layoutStrings_2() const { return ___layoutStrings_2; }
	inline Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A ** get_address_of_layoutStrings_2() { return &___layoutStrings_2; }
	inline void set_layoutStrings_2(Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * value)
	{
		___layoutStrings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutStrings_2), (void*)value);
	}

	inline static int32_t get_offset_of_layoutBuilders_3() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutBuilders_3)); }
	inline Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * get_layoutBuilders_3() const { return ___layoutBuilders_3; }
	inline Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 ** get_address_of_layoutBuilders_3() { return &___layoutBuilders_3; }
	inline void set_layoutBuilders_3(Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * value)
	{
		___layoutBuilders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutBuilders_3), (void*)value);
	}

	inline static int32_t get_offset_of_baseLayoutTable_4() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___baseLayoutTable_4)); }
	inline Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * get_baseLayoutTable_4() const { return ___baseLayoutTable_4; }
	inline Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 ** get_address_of_baseLayoutTable_4() { return &___baseLayoutTable_4; }
	inline void set_baseLayoutTable_4(Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * value)
	{
		___baseLayoutTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseLayoutTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrides_5() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutOverrides_5)); }
	inline Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * get_layoutOverrides_5() const { return ___layoutOverrides_5; }
	inline Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 ** get_address_of_layoutOverrides_5() { return &___layoutOverrides_5; }
	inline void set_layoutOverrides_5(Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * value)
	{
		___layoutOverrides_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrides_5), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrideNames_6() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutOverrideNames_6)); }
	inline HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * get_layoutOverrideNames_6() const { return ___layoutOverrideNames_6; }
	inline HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C ** get_address_of_layoutOverrideNames_6() { return &___layoutOverrideNames_6; }
	inline void set_layoutOverrideNames_6(HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * value)
	{
		___layoutOverrideNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrideNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_precompiledLayouts_7() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___precompiledLayouts_7)); }
	inline Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * get_precompiledLayouts_7() const { return ___precompiledLayouts_7; }
	inline Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 ** get_address_of_precompiledLayouts_7() { return &___precompiledLayouts_7; }
	inline void set_precompiledLayouts_7(Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * value)
	{
		___precompiledLayouts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___precompiledLayouts_7), (void*)value);
	}

	inline static int32_t get_offset_of_layoutMatchers_8() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutMatchers_8)); }
	inline List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * get_layoutMatchers_8() const { return ___layoutMatchers_8; }
	inline List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 ** get_address_of_layoutMatchers_8() { return &___layoutMatchers_8; }
	inline void set_layoutMatchers_8(List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * value)
	{
		___layoutMatchers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutMatchers_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4_marshaled_pinvoke
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4_marshaled_com
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>>
struct CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_Callbacks_1)); }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_Callbacks_1)); }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>
struct InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535, ___firstValue_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_firstValue_1() const { return ___firstValue_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535, ___additionalValues_2)); }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* get_additionalValues_2() const { return ___additionalValues_2; }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3, ___firstValue_1)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_firstValue_1() const { return ___firstValue_1; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3, ___additionalValues_2)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.XR.InteractionSubsystems.GestureState
struct GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557 
{
public:
	// System.Int32 UnityEngine.XR.InteractionSubsystems.GestureState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureState_tF46000290CC6332630D7FE0425DA51EB79CBE557, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionPhase
struct InputActionPhase_t36893252EB5C7E071BBB35D65953AE6FE8271BA1 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionPhase_t36893252EB5C7E071BBB35D65953AE6FE8271BA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputProcessor
struct InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E  : public RuntimeObject
{
public:

public:
};

struct InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputProcessor::s_Processors
	TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8  ___s_Processors_0;

public:
	inline static int32_t get_offset_of_s_Processors_0() { return static_cast<int32_t>(offsetof(InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields, ___s_Processors_0)); }
	inline TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8  get_s_Processors_0() const { return ___s_Processors_0; }
	inline TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 * get_address_of_s_Processors_0() { return &___s_Processors_0; }
	inline void set_s_Processors_0(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8  value)
	{
		___s_Processors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Processors_0))->___table_0), (void*)NULL);
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};

struct InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatBit_2)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatSBit_4)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatInt_6)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatUInt_8)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatShort_10)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatUShort_12)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatByte_14)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatSByte_16)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatLong_18)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatULong_20)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatFloat_22)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatDouble_24)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2_26)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3_27)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3Byte_32 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode
struct InteractableSelectMode_t60921C1737D9470BB32F45B4E557B29F17ACAD68 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractableSelectMode_t60921C1737D9470BB32F45B4E557B29F17ACAD68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
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


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_Asset
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___m_Asset_0;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlSchemeIndex
	int32_t ___m_ControlSchemeIndex_1;
	// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlScheme
	InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B  ___m_ControlScheme_2;

public:
	inline static int32_t get_offset_of_m_Asset_0() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6, ___m_Asset_0)); }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * get_m_Asset_0() const { return ___m_Asset_0; }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE ** get_address_of_m_Asset_0() { return &___m_Asset_0; }
	inline void set_m_Asset_0(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * value)
	{
		___m_Asset_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemeIndex_1() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6, ___m_ControlSchemeIndex_1)); }
	inline int32_t get_m_ControlSchemeIndex_1() const { return ___m_ControlSchemeIndex_1; }
	inline int32_t* get_address_of_m_ControlSchemeIndex_1() { return &___m_ControlSchemeIndex_1; }
	inline void set_m_ControlSchemeIndex_1(int32_t value)
	{
		___m_ControlSchemeIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_ControlScheme_2() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6, ___m_ControlScheme_2)); }
	inline InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B  get_m_ControlScheme_2() const { return ___m_ControlScheme_2; }
	inline InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B * get_address_of_m_ControlScheme_2() { return &___m_ControlScheme_2; }
	inline void set_m_ControlScheme_2(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B  value)
	{
		___m_ControlScheme_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_BindingGroup_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_DeviceRequirements_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6_marshaled_pinvoke
{
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_pinvoke ___m_ControlScheme_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6_marshaled_com
{
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_com ___m_ControlScheme_2;
};

// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t904B93767740996C64FD20D5C1425440048E7BBF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t904B93767740996C64FD20D5C1425440048E7BBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t4F538C23EE3512FB9E4189AA486CDED3DE70771B 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t4F538C23EE3512FB9E4189AA486CDED3DE70771B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<type>k__BackingField
	Type_t * ___U3CtypeU3Ek__BackingField_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateFormat>k__BackingField
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___U3CstateFormatU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateSizeInBytes>k__BackingField
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ExtendsLayout
	String_t* ___m_ExtendsLayout_5;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<updateBeforeRender>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CupdateBeforeRenderU3Ek__BackingField_6;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ControlCount
	int32_t ___m_ControlCount_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_Controls
	ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* ___m_Controls_8;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CdisplayNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_1() const { return ___U3CdisplayNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_1() { return &___U3CdisplayNameU3Ek__BackingField_1; }
	inline void set_U3CdisplayNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CtypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstateFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CstateFormatU3Ek__BackingField_3)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_U3CstateFormatU3Ek__BackingField_3() const { return ___U3CstateFormatU3Ek__BackingField_3; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_U3CstateFormatU3Ek__BackingField_3() { return &___U3CstateFormatU3Ek__BackingField_3; }
	inline void set_U3CstateFormatU3Ek__BackingField_3(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___U3CstateFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CstateSizeInBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CstateSizeInBytesU3Ek__BackingField_4() const { return ___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return &___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline void set_U3CstateSizeInBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CstateSizeInBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_ExtendsLayout_5() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___m_ExtendsLayout_5)); }
	inline String_t* get_m_ExtendsLayout_5() const { return ___m_ExtendsLayout_5; }
	inline String_t** get_address_of_m_ExtendsLayout_5() { return &___m_ExtendsLayout_5; }
	inline void set_m_ExtendsLayout_5(String_t* value)
	{
		___m_ExtendsLayout_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExtendsLayout_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CupdateBeforeRenderU3Ek__BackingField_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CupdateBeforeRenderU3Ek__BackingField_6() const { return ___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return &___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline void set_U3CupdateBeforeRenderU3Ek__BackingField_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CupdateBeforeRenderU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_7() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___m_ControlCount_7)); }
	inline int32_t get_m_ControlCount_7() const { return ___m_ControlCount_7; }
	inline int32_t* get_address_of_m_ControlCount_7() { return &___m_ControlCount_7; }
	inline void set_m_ControlCount_7(int32_t value)
	{
		___m_ControlCount_7 = value;
	}

	inline static int32_t get_offset_of_m_Controls_8() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___m_Controls_8)); }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* get_m_Controls_8() const { return ___m_Controls_8; }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3** get_address_of_m_Controls_8() { return &___m_Controls_8; }
	inline void set_m_Controls_8(ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* value)
	{
		___m_Controls_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_8), (void*)value);
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct Flags_t32BB7462BDA6CB64EE04F3375BD7F7754C259C22 
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t32BB7462BDA6CB64EE04F3375BD7F7754C259C22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode
struct DistanceCalculationMode_t00FF5390A69797A443BB8F325981AF9AA220BCAF 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DistanceCalculationMode_t00FF5390A69797A443BB8F325981AF9AA220BCAF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType
struct MovementType_tD4BFF726BE358A5A84E51C679FB95577E0C0C4C8 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementType_tD4BFF726BE358A5A84E51C679FB95577E0C0C4C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable/AttachPointCompatibilityMode
struct AttachPointCompatibilityMode_tB3FA0240337C13BA91FEFF06FDAFE116A908B990 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable/AttachPointCompatibilityMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttachPointCompatibilityMode_tB3FA0240337C13BA91FEFF06FDAFE116A908B990, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct Flags_t46A486E2DB0EE268818D207578A4F2BEAB17BE0A 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t46A486E2DB0EE268818D207578A4F2BEAB17BE0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E  : public InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E
{
public:

public:
};


// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29  : public InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E
{
public:

public:
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent>
struct NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>
struct NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>
struct NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>
struct NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>
struct NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t * ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Name_2)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Name_2() const { return ___m_Name_2; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Variants_4() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Variants_4)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Variants_4() const { return ___m_Variants_4; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Variants_4() { return &___m_Variants_4; }
	inline void set_m_Variants_4(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Variants_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_StateFormat_5() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_StateFormat_5)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_m_StateFormat_5() const { return ___m_StateFormat_5; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_m_StateFormat_5() { return &___m_StateFormat_5; }
	inline void set_m_StateFormat_5(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___m_StateFormat_5 = value;
	}

	inline static int32_t get_offset_of_m_StateSizeInBytes_6() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_StateSizeInBytes_6)); }
	inline int32_t get_m_StateSizeInBytes_6() const { return ___m_StateSizeInBytes_6; }
	inline int32_t* get_address_of_m_StateSizeInBytes_6() { return &___m_StateSizeInBytes_6; }
	inline void set_m_StateSizeInBytes_6(int32_t value)
	{
		___m_StateSizeInBytes_6 = value;
	}

	inline static int32_t get_offset_of_m_UpdateBeforeRender_7() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_UpdateBeforeRender_7)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_UpdateBeforeRender_7() const { return ___m_UpdateBeforeRender_7; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_UpdateBeforeRender_7() { return &___m_UpdateBeforeRender_7; }
	inline void set_m_UpdateBeforeRender_7(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_UpdateBeforeRender_7 = value;
	}

	inline static int32_t get_offset_of_m_BaseLayouts_8() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_BaseLayouts_8)); }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  get_m_BaseLayouts_8() const { return ___m_BaseLayouts_8; }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3 * get_address_of_m_BaseLayouts_8() { return &___m_BaseLayouts_8; }
	inline void set_m_BaseLayouts_8(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  value)
	{
		___m_BaseLayouts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BaseLayouts_8))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AppliedOverrides_9() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_AppliedOverrides_9)); }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  get_m_AppliedOverrides_9() const { return ___m_AppliedOverrides_9; }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3 * get_address_of_m_AppliedOverrides_9() { return &___m_AppliedOverrides_9; }
	inline void set_m_AppliedOverrides_9(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  value)
	{
		___m_AppliedOverrides_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_AppliedOverrides_9))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CommonUsages_10() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_CommonUsages_10)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_m_CommonUsages_10() const { return ___m_CommonUsages_10; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_m_CommonUsages_10() { return &___m_CommonUsages_10; }
	inline void set_m_CommonUsages_10(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___m_CommonUsages_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonUsages_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Controls_11() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Controls_11)); }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* get_m_Controls_11() const { return ___m_Controls_11; }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3** get_address_of_m_Controls_11() { return &___m_Controls_11; }
	inline void set_m_Controls_11(ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* value)
	{
		___m_Controls_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_12() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_DisplayName_12)); }
	inline String_t* get_m_DisplayName_12() const { return ___m_DisplayName_12; }
	inline String_t** get_address_of_m_DisplayName_12() { return &___m_DisplayName_12; }
	inline void set_m_DisplayName_12(String_t* value)
	{
		___m_DisplayName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Description_13() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Description_13)); }
	inline String_t* get_m_Description_13() const { return ___m_Description_13; }
	inline String_t** get_address_of_m_Description_13() { return &___m_Description_13; }
	inline void set_m_Description_13(String_t* value)
	{
		___m_Description_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Description_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_14() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Flags_14)); }
	inline int32_t get_m_Flags_14() const { return ___m_Flags_14; }
	inline int32_t* get_address_of_m_Flags_14() { return &___m_Flags_14; }
	inline void set_m_Flags_14(int32_t value)
	{
		___m_Flags_14 = value;
	}
};

struct InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;

public:
	inline static int32_t get_offset_of_s_DefaultVariant_0() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_DefaultVariant_0)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_s_DefaultVariant_0() const { return ___s_DefaultVariant_0; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_s_DefaultVariant_0() { return &___s_DefaultVariant_0; }
	inline void set_s_DefaultVariant_0(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___s_DefaultVariant_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_Layouts_15() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_Layouts_15)); }
	inline Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  get_s_Layouts_15() const { return ___s_Layouts_15; }
	inline Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 * get_address_of_s_Layouts_15() { return &___s_Layouts_15; }
	inline void set_s_Layouts_15(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  value)
	{
		___s_Layouts_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutTypes_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutStrings_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutBuilders_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___baseLayoutTable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrides_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrideNames_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___precompiledLayouts_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutMatchers_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_CacheInstance_16() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_CacheInstance_16)); }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  get_s_CacheInstance_16() const { return ___s_CacheInstance_16; }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D * get_address_of_s_CacheInstance_16() { return &___s_CacheInstance_16; }
	inline void set_s_CacheInstance_16(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  value)
	{
		___s_CacheInstance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_CacheInstance_16))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_CacheInstanceRef_17() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_CacheInstanceRef_17)); }
	inline int32_t get_s_CacheInstanceRef_17() const { return ___s_CacheInstanceRef_17; }
	inline int32_t* get_address_of_s_CacheInstanceRef_17() { return &___s_CacheInstanceRef_17; }
	inline void set_s_CacheInstanceRef_17(int32_t value)
	{
		___s_CacheInstanceRef_17 = value;
	}
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

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent
struct WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C 
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::m_Id
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___m_Id_0;
	// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent::m_State
	int32_t ___m_State_1;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C, ___m_Id_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_m_Id_0() const { return ___m_Id_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_State_1() { return static_cast<int32_t>(offsetof(WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C, ___m_State_1)); }
	inline int32_t get_m_State_1() const { return ___m_State_1; }
	inline int32_t* get_address_of_m_State_1() { return &___m_State_1; }
	inline void set_m_State_1(int32_t value)
	{
		___m_State_1 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent
struct WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD 
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::m_Id
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___m_Id_0;
	// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::m_State
	int32_t ___m_State_1;
	// UnityEngine.Vector3 UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent::m_CumulativeDelta
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CumulativeDelta_2;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD, ___m_Id_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_m_Id_0() const { return ___m_Id_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_State_1() { return static_cast<int32_t>(offsetof(WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD, ___m_State_1)); }
	inline int32_t get_m_State_1() const { return ___m_State_1; }
	inline int32_t* get_address_of_m_State_1() { return &___m_State_1; }
	inline void set_m_State_1(int32_t value)
	{
		___m_State_1 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_2() { return static_cast<int32_t>(offsetof(WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD, ___m_CumulativeDelta_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CumulativeDelta_2() const { return ___m_CumulativeDelta_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CumulativeDelta_2() { return &___m_CumulativeDelta_2; }
	inline void set_m_CumulativeDelta_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CumulativeDelta_2 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent
struct WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::m_Id
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___m_Id_0;
	// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::m_State
	int32_t ___m_State_1;
	// UnityEngine.Vector3 UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent::m_NormalizedOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_NormalizedOffset_2;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9, ___m_Id_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_m_Id_0() const { return ___m_Id_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_State_1() { return static_cast<int32_t>(offsetof(WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9, ___m_State_1)); }
	inline int32_t get_m_State_1() const { return ___m_State_1; }
	inline int32_t* get_address_of_m_State_1() { return &___m_State_1; }
	inline void set_m_State_1(int32_t value)
	{
		___m_State_1 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_2() { return static_cast<int32_t>(offsetof(WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9, ___m_NormalizedOffset_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_NormalizedOffset_2() const { return ___m_NormalizedOffset_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_NormalizedOffset_2() { return &___m_NormalizedOffset_2; }
	inline void set_m_NormalizedOffset_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_NormalizedOffset_2 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent
struct WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::m_Id
	GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  ___m_Id_0;
	// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::m_State
	int32_t ___m_State_1;
	// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::m_TappedCount
	int32_t ___m_TappedCount_2;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90, ___m_Id_0)); }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  get_m_Id_0() const { return ___m_Id_0; }
	inline GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(GestureId_tF3EFA115E02FC8A313B1019689130A09419B1EC7  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_State_1() { return static_cast<int32_t>(offsetof(WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90, ___m_State_1)); }
	inline int32_t get_m_State_1() const { return ___m_State_1; }
	inline int32_t* get_address_of_m_State_1() { return &___m_State_1; }
	inline void set_m_State_1(int32_t value)
	{
		___m_State_1 = value;
	}

	inline static int32_t get_offset_of_m_TappedCount_2() { return static_cast<int32_t>(offsetof(WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90, ___m_TappedCount_2)); }
	inline int32_t get_m_TappedCount_2() const { return ___m_TappedCount_2; }
	inline int32_t* get_address_of_m_TappedCount_2() { return &___m_TappedCount_2; }
	inline void set_m_TappedCount_2(int32_t value)
	{
		___m_TappedCount_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808 
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle> UnityEngine.InputSystem.InputActionState/GlobalState::globalList
	InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  ___globalList_0;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionChange
	CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  ___onActionChange_1;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionControlsChanged
	CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  ___onActionControlsChanged_2;

public:
	inline static int32_t get_offset_of_globalList_0() { return static_cast<int32_t>(offsetof(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808, ___globalList_0)); }
	inline InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  get_globalList_0() const { return ___globalList_0; }
	inline InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535 * get_address_of_globalList_0() { return &___globalList_0; }
	inline void set_globalList_0(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  value)
	{
		___globalList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___globalList_0))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_onActionChange_1() { return static_cast<int32_t>(offsetof(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808, ___onActionChange_1)); }
	inline CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  get_onActionChange_1() const { return ___onActionChange_1; }
	inline CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40 * get_address_of_onActionChange_1() { return &___onActionChange_1; }
	inline void set_onActionChange_1(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  value)
	{
		___onActionChange_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onActionControlsChanged_2() { return static_cast<int32_t>(offsetof(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808, ___onActionControlsChanged_2)); }
	inline CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  get_onActionControlsChanged_2() const { return ___onActionControlsChanged_2; }
	inline CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88 * get_address_of_onActionControlsChanged_2() { return &___onActionControlsChanged_2; }
	inline void set_onActionControlsChanged_2(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  value)
	{
		___onActionControlsChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808_marshaled_pinvoke
{
	InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  ___globalList_0;
	CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  ___onActionChange_1;
	CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  ___onActionControlsChanged_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808_marshaled_com
{
	InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  ___globalList_0;
	CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  ___onActionChange_1;
	CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  ___onActionControlsChanged_2;
};

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD 
{
public:
	// T System.Nullable`1::value
	InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___value_0)); }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  get_value_0() const { return ___value_0; }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputActionState
struct InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionState::maps
	InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* ___maps_1;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionState::controls
	InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* ___controls_2;
	// UnityEngine.InputSystem.IInputInteraction[] UnityEngine.InputSystem.InputActionState::interactions
	IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512* ___interactions_3;
	// UnityEngine.InputSystem.InputProcessor[] UnityEngine.InputSystem.InputActionState::processors
	InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4* ___processors_4;
	// UnityEngine.InputSystem.InputBindingComposite[] UnityEngine.InputSystem.InputActionState::composites
	InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF* ___composites_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState::totalProcessorCount
	int32_t ___totalProcessorCount_6;
	// UnityEngine.InputSystem.InputActionState/UnmanagedMemory UnityEngine.InputSystem.InputActionState::memory
	UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584  ___memory_7;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateHooked
	bool ___m_OnBeforeUpdateHooked_8;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateHooked
	bool ___m_OnAfterUpdateHooked_9;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_InProcessControlStateChange
	bool ___m_InProcessControlStateChange_10;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnBeforeUpdateDelegate_11;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_12;

public:
	inline static int32_t get_offset_of_maps_1() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___maps_1)); }
	inline InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* get_maps_1() const { return ___maps_1; }
	inline InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E** get_address_of_maps_1() { return &___maps_1; }
	inline void set_maps_1(InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* value)
	{
		___maps_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maps_1), (void*)value);
	}

	inline static int32_t get_offset_of_controls_2() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___controls_2)); }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* get_controls_2() const { return ___controls_2; }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27** get_address_of_controls_2() { return &___controls_2; }
	inline void set_controls_2(InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* value)
	{
		___controls_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controls_2), (void*)value);
	}

	inline static int32_t get_offset_of_interactions_3() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___interactions_3)); }
	inline IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512* get_interactions_3() const { return ___interactions_3; }
	inline IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512** get_address_of_interactions_3() { return &___interactions_3; }
	inline void set_interactions_3(IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512* value)
	{
		___interactions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactions_3), (void*)value);
	}

	inline static int32_t get_offset_of_processors_4() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___processors_4)); }
	inline InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4* get_processors_4() const { return ___processors_4; }
	inline InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4** get_address_of_processors_4() { return &___processors_4; }
	inline void set_processors_4(InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4* value)
	{
		___processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_composites_5() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___composites_5)); }
	inline InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF* get_composites_5() const { return ___composites_5; }
	inline InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF** get_address_of_composites_5() { return &___composites_5; }
	inline void set_composites_5(InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF* value)
	{
		___composites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___composites_5), (void*)value);
	}

	inline static int32_t get_offset_of_totalProcessorCount_6() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___totalProcessorCount_6)); }
	inline int32_t get_totalProcessorCount_6() const { return ___totalProcessorCount_6; }
	inline int32_t* get_address_of_totalProcessorCount_6() { return &___totalProcessorCount_6; }
	inline void set_totalProcessorCount_6(int32_t value)
	{
		___totalProcessorCount_6 = value;
	}

	inline static int32_t get_offset_of_memory_7() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___memory_7)); }
	inline UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584  get_memory_7() const { return ___memory_7; }
	inline UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584 * get_address_of_memory_7() { return &___memory_7; }
	inline void set_memory_7(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584  value)
	{
		___memory_7 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateHooked_8() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnBeforeUpdateHooked_8)); }
	inline bool get_m_OnBeforeUpdateHooked_8() const { return ___m_OnBeforeUpdateHooked_8; }
	inline bool* get_address_of_m_OnBeforeUpdateHooked_8() { return &___m_OnBeforeUpdateHooked_8; }
	inline void set_m_OnBeforeUpdateHooked_8(bool value)
	{
		___m_OnBeforeUpdateHooked_8 = value;
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateHooked_9() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnAfterUpdateHooked_9)); }
	inline bool get_m_OnAfterUpdateHooked_9() const { return ___m_OnAfterUpdateHooked_9; }
	inline bool* get_address_of_m_OnAfterUpdateHooked_9() { return &___m_OnAfterUpdateHooked_9; }
	inline void set_m_OnAfterUpdateHooked_9(bool value)
	{
		___m_OnAfterUpdateHooked_9 = value;
	}

	inline static int32_t get_offset_of_m_InProcessControlStateChange_10() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_InProcessControlStateChange_10)); }
	inline bool get_m_InProcessControlStateChange_10() const { return ___m_InProcessControlStateChange_10; }
	inline bool* get_address_of_m_InProcessControlStateChange_10() { return &___m_InProcessControlStateChange_10; }
	inline void set_m_InProcessControlStateChange_10(bool value)
	{
		___m_InProcessControlStateChange_10 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateDelegate_11() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnBeforeUpdateDelegate_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnBeforeUpdateDelegate_11() const { return ___m_OnBeforeUpdateDelegate_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnBeforeUpdateDelegate_11() { return &___m_OnBeforeUpdateDelegate_11; }
	inline void set_m_OnBeforeUpdateDelegate_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnBeforeUpdateDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnBeforeUpdateDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_12() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnAfterUpdateDelegate_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_12() const { return ___m_OnAfterUpdateDelegate_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_12() { return &___m_OnAfterUpdateDelegate_12; }
	inline void set_m_OnAfterUpdateDelegate_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_12), (void*)value);
	}
};

struct InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126_StaticFields
{
public:
	// UnityEngine.InputSystem.InputActionState/GlobalState UnityEngine.InputSystem.InputActionState::s_GlobalState
	GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808  ___s_GlobalState_13;

public:
	inline static int32_t get_offset_of_s_GlobalState_13() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126_StaticFields, ___s_GlobalState_13)); }
	inline GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808  get_s_GlobalState_13() const { return ___s_GlobalState_13; }
	inline GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808 * get_address_of_s_GlobalState_13() { return &___s_GlobalState_13; }
	inline void set_s_GlobalState_13(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808  value)
	{
		___s_GlobalState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_13))->___globalList_0))->___additionalValues_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_StateBlock_0)); }
	inline InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Name_1)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Layout_7)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Variants_8)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Device_9)); }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Parent_10)); }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DefaultState_18)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_MinValue_19)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_MaxValue_20)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_MaxValue_20 = value;
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem/Provider
struct Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058  : public RuntimeObject
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.XR.InteractionSubsystems.ActivateGestureEvent> UnityEngine.XR.InteractionSubsystems.XRGestureSubsystem/Provider::m_ActivateGestureEvents
	NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  ___m_ActivateGestureEvents_0;

public:
	inline static int32_t get_offset_of_m_ActivateGestureEvents_0() { return static_cast<int32_t>(offsetof(Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058, ___m_ActivateGestureEvents_0)); }
	inline NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  get_m_ActivateGestureEvents_0() const { return ___m_ActivateGestureEvents_0; }
	inline NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07 * get_address_of_m_ActivateGestureEvents_0() { return &___m_ActivateGestureEvents_0; }
	inline void set_m_ActivateGestureEvents_0(NativeArray_1_t8D140318CDC9E42C91BBDF4BD053D165A2527E07  value)
	{
		___m_ActivateGestureEvents_0 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction
struct GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
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


// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013  : public XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t * ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t * ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuations
	Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * ___m_StartingActuations_31;

public:
	inline static int32_t get_offset_of_m_ActionToRebind_1() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ActionToRebind_1)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_m_ActionToRebind_1() const { return ___m_ActionToRebind_1; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_m_ActionToRebind_1() { return &___m_ActionToRebind_1; }
	inline void set_m_ActionToRebind_1(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___m_ActionToRebind_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionToRebind_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_2() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_BindingMask_2)); }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  get_m_BindingMask_2() const { return ___m_BindingMask_2; }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD * get_address_of_m_BindingMask_2() { return &___m_BindingMask_2; }
	inline void set_m_BindingMask_2(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  value)
	{
		___m_BindingMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlType_3() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ControlType_3)); }
	inline Type_t * get_m_ControlType_3() const { return ___m_ControlType_3; }
	inline Type_t ** get_address_of_m_ControlType_3() { return &___m_ControlType_3; }
	inline void set_m_ControlType_3(Type_t * value)
	{
		___m_ControlType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExpectedLayout_4() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExpectedLayout_4)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_ExpectedLayout_4() const { return ___m_ExpectedLayout_4; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_ExpectedLayout_4() { return &___m_ExpectedLayout_4; }
	inline void set_m_ExpectedLayout_4(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_ExpectedLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_IncludePathCount_5() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_IncludePathCount_5)); }
	inline int32_t get_m_IncludePathCount_5() const { return ___m_IncludePathCount_5; }
	inline int32_t* get_address_of_m_IncludePathCount_5() { return &___m_IncludePathCount_5; }
	inline void set_m_IncludePathCount_5(int32_t value)
	{
		___m_IncludePathCount_5 = value;
	}

	inline static int32_t get_offset_of_m_IncludePaths_6() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_IncludePaths_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_IncludePaths_6() const { return ___m_IncludePaths_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_IncludePaths_6() { return &___m_IncludePaths_6; }
	inline void set_m_IncludePaths_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_IncludePaths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IncludePaths_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExcludePathCount_7() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExcludePathCount_7)); }
	inline int32_t get_m_ExcludePathCount_7() const { return ___m_ExcludePathCount_7; }
	inline int32_t* get_address_of_m_ExcludePathCount_7() { return &___m_ExcludePathCount_7; }
	inline void set_m_ExcludePathCount_7(int32_t value)
	{
		___m_ExcludePathCount_7 = value;
	}

	inline static int32_t get_offset_of_m_ExcludePaths_8() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExcludePaths_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludePaths_8() const { return ___m_ExcludePaths_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludePaths_8() { return &___m_ExcludePaths_8; }
	inline void set_m_ExcludePaths_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludePaths_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludePaths_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetBindingIndex_9() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_TargetBindingIndex_9)); }
	inline int32_t get_m_TargetBindingIndex_9() const { return ___m_TargetBindingIndex_9; }
	inline int32_t* get_address_of_m_TargetBindingIndex_9() { return &___m_TargetBindingIndex_9; }
	inline void set_m_TargetBindingIndex_9(int32_t value)
	{
		___m_TargetBindingIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingGroupForNewBinding_10() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_BindingGroupForNewBinding_10)); }
	inline String_t* get_m_BindingGroupForNewBinding_10() const { return ___m_BindingGroupForNewBinding_10; }
	inline String_t** get_address_of_m_BindingGroupForNewBinding_10() { return &___m_BindingGroupForNewBinding_10; }
	inline void set_m_BindingGroupForNewBinding_10(String_t* value)
	{
		___m_BindingGroupForNewBinding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroupForNewBinding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelBinding_11() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_CancelBinding_11)); }
	inline String_t* get_m_CancelBinding_11() const { return ___m_CancelBinding_11; }
	inline String_t** get_address_of_m_CancelBinding_11() { return &___m_CancelBinding_11; }
	inline void set_m_CancelBinding_11(String_t* value)
	{
		___m_CancelBinding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelBinding_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_12() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_MagnitudeThreshold_12)); }
	inline float get_m_MagnitudeThreshold_12() const { return ___m_MagnitudeThreshold_12; }
	inline float* get_address_of_m_MagnitudeThreshold_12() { return &___m_MagnitudeThreshold_12; }
	inline void set_m_MagnitudeThreshold_12(float value)
	{
		___m_MagnitudeThreshold_12 = value;
	}

	inline static int32_t get_offset_of_m_Scores_13() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Scores_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Scores_13() const { return ___m_Scores_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Scores_13() { return &___m_Scores_13; }
	inline void set_m_Scores_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Scores_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Magnitudes_14() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Magnitudes_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Magnitudes_14() const { return ___m_Magnitudes_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Magnitudes_14() { return &___m_Magnitudes_14; }
	inline void set_m_Magnitudes_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Magnitudes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Magnitudes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastMatchTime_15() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_LastMatchTime_15)); }
	inline double get_m_LastMatchTime_15() const { return ___m_LastMatchTime_15; }
	inline double* get_address_of_m_LastMatchTime_15() { return &___m_LastMatchTime_15; }
	inline void set_m_LastMatchTime_15(double value)
	{
		___m_LastMatchTime_15 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_16() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_StartTime_16)); }
	inline double get_m_StartTime_16() const { return ___m_StartTime_16; }
	inline double* get_address_of_m_StartTime_16() { return &___m_StartTime_16; }
	inline void set_m_StartTime_16(double value)
	{
		___m_StartTime_16 = value;
	}

	inline static int32_t get_offset_of_m_Timeout_17() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Timeout_17)); }
	inline float get_m_Timeout_17() const { return ___m_Timeout_17; }
	inline float* get_address_of_m_Timeout_17() { return &___m_Timeout_17; }
	inline void set_m_Timeout_17(float value)
	{
		___m_Timeout_17 = value;
	}

	inline static int32_t get_offset_of_m_WaitSecondsAfterMatch_18() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_WaitSecondsAfterMatch_18)); }
	inline float get_m_WaitSecondsAfterMatch_18() const { return ___m_WaitSecondsAfterMatch_18; }
	inline float* get_address_of_m_WaitSecondsAfterMatch_18() { return &___m_WaitSecondsAfterMatch_18; }
	inline void set_m_WaitSecondsAfterMatch_18(float value)
	{
		___m_WaitSecondsAfterMatch_18 = value;
	}

	inline static int32_t get_offset_of_m_Candidates_19() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Candidates_19)); }
	inline InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  get_m_Candidates_19() const { return ___m_Candidates_19; }
	inline InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8 * get_address_of_m_Candidates_19() { return &___m_Candidates_19; }
	inline void set_m_Candidates_19(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  value)
	{
		___m_Candidates_19 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_20() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnComplete_20)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnComplete_20() const { return ___m_OnComplete_20; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnComplete_20() { return &___m_OnComplete_20; }
	inline void set_m_OnComplete_20(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnComplete_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComplete_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnCancel_21() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnCancel_21)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnCancel_21() const { return ___m_OnCancel_21; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnCancel_21() { return &___m_OnCancel_21; }
	inline void set_m_OnCancel_21(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnCancel_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCancel_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnPotentialMatch_22() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnPotentialMatch_22)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnPotentialMatch_22() const { return ___m_OnPotentialMatch_22; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnPotentialMatch_22() { return &___m_OnPotentialMatch_22; }
	inline void set_m_OnPotentialMatch_22(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnPotentialMatch_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnPotentialMatch_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnGeneratePath_23() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnGeneratePath_23)); }
	inline Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * get_m_OnGeneratePath_23() const { return ___m_OnGeneratePath_23; }
	inline Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 ** get_address_of_m_OnGeneratePath_23() { return &___m_OnGeneratePath_23; }
	inline void set_m_OnGeneratePath_23(Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * value)
	{
		___m_OnGeneratePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnGeneratePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnComputeScore_24() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnComputeScore_24)); }
	inline Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * get_m_OnComputeScore_24() const { return ___m_OnComputeScore_24; }
	inline Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E ** get_address_of_m_OnComputeScore_24() { return &___m_OnComputeScore_24; }
	inline void set_m_OnComputeScore_24(Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * value)
	{
		___m_OnComputeScore_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComputeScore_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnApplyBinding_25() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnApplyBinding_25)); }
	inline Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * get_m_OnApplyBinding_25() const { return ___m_OnApplyBinding_25; }
	inline Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F ** get_address_of_m_OnApplyBinding_25() { return &___m_OnApplyBinding_25; }
	inline void set_m_OnApplyBinding_25(Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * value)
	{
		___m_OnApplyBinding_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnApplyBinding_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEventDelegate_26() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnEventDelegate_26)); }
	inline Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * get_m_OnEventDelegate_26() const { return ___m_OnEventDelegate_26; }
	inline Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 ** get_address_of_m_OnEventDelegate_26() { return &___m_OnEventDelegate_26; }
	inline void set_m_OnEventDelegate_26(Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * value)
	{
		___m_OnEventDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEventDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_27() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnAfterUpdateDelegate_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_27() const { return ___m_OnAfterUpdateDelegate_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_27() { return &___m_OnAfterUpdateDelegate_27; }
	inline void set_m_OnAfterUpdateDelegate_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LayoutCache_28() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_LayoutCache_28)); }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  get_m_LayoutCache_28() const { return ___m_LayoutCache_28; }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D * get_address_of_m_LayoutCache_28() { return &___m_LayoutCache_28; }
	inline void set_m_LayoutCache_28(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  value)
	{
		___m_LayoutCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LayoutCache_28))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PathBuilder_29() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_PathBuilder_29)); }
	inline StringBuilder_t * get_m_PathBuilder_29() const { return ___m_PathBuilder_29; }
	inline StringBuilder_t ** get_address_of_m_PathBuilder_29() { return &___m_PathBuilder_29; }
	inline void set_m_PathBuilder_29(StringBuilder_t * value)
	{
		___m_PathBuilder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PathBuilder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_30() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Flags_30)); }
	inline int32_t get_m_Flags_30() const { return ___m_Flags_30; }
	inline int32_t* get_address_of_m_Flags_30() { return &___m_Flags_30; }
	inline void set_m_Flags_30(int32_t value)
	{
		___m_Flags_30 = value;
	}

	inline static int32_t get_offset_of_m_StartingActuations_31() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_StartingActuations_31)); }
	inline Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * get_m_StartingActuations_31() const { return ___m_StartingActuations_31; }
	inline Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 ** get_address_of_m_StartingActuations_31() { return &___m_StartingActuations_31; }
	inline void set_m_StartingActuations_31(Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * value)
	{
		___m_StartingActuations_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingActuations_31), (void*)value);
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider
struct WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB  : public Provider_tD40F591BB43CACCAB087EF72306FD614DFFFE058
{
public:
	// UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::m_Subsystem
	WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * ___m_Subsystem_1;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::m_HoldGestureEvents
	NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  ___m_HoldGestureEvents_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::m_ManipulationGestureEvents
	NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  ___m_ManipulationGestureEvents_3;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::m_NavigationGestureEvents
	NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  ___m_NavigationGestureEvents_4;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent> UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::m_TappedGestureEvents
	NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  ___m_TappedGestureEvents_5;

public:
	inline static int32_t get_offset_of_m_Subsystem_1() { return static_cast<int32_t>(offsetof(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB, ___m_Subsystem_1)); }
	inline WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * get_m_Subsystem_1() const { return ___m_Subsystem_1; }
	inline WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 ** get_address_of_m_Subsystem_1() { return &___m_Subsystem_1; }
	inline void set_m_Subsystem_1(WindowsMRGestureSubsystem_t6A14702CA36CA83A8C8C7EF07711EF8EFE2D4D60 * value)
	{
		___m_Subsystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Subsystem_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoldGestureEvents_2() { return static_cast<int32_t>(offsetof(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB, ___m_HoldGestureEvents_2)); }
	inline NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  get_m_HoldGestureEvents_2() const { return ___m_HoldGestureEvents_2; }
	inline NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * get_address_of_m_HoldGestureEvents_2() { return &___m_HoldGestureEvents_2; }
	inline void set_m_HoldGestureEvents_2(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  value)
	{
		___m_HoldGestureEvents_2 = value;
	}

	inline static int32_t get_offset_of_m_ManipulationGestureEvents_3() { return static_cast<int32_t>(offsetof(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB, ___m_ManipulationGestureEvents_3)); }
	inline NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  get_m_ManipulationGestureEvents_3() const { return ___m_ManipulationGestureEvents_3; }
	inline NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * get_address_of_m_ManipulationGestureEvents_3() { return &___m_ManipulationGestureEvents_3; }
	inline void set_m_ManipulationGestureEvents_3(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  value)
	{
		___m_ManipulationGestureEvents_3 = value;
	}

	inline static int32_t get_offset_of_m_NavigationGestureEvents_4() { return static_cast<int32_t>(offsetof(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB, ___m_NavigationGestureEvents_4)); }
	inline NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  get_m_NavigationGestureEvents_4() const { return ___m_NavigationGestureEvents_4; }
	inline NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * get_address_of_m_NavigationGestureEvents_4() { return &___m_NavigationGestureEvents_4; }
	inline void set_m_NavigationGestureEvents_4(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  value)
	{
		___m_NavigationGestureEvents_4 = value;
	}

	inline static int32_t get_offset_of_m_TappedGestureEvents_5() { return static_cast<int32_t>(offsetof(WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB, ___m_TappedGestureEvents_5)); }
	inline NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  get_m_TappedGestureEvents_5() const { return ___m_TappedGestureEvents_5; }
	inline NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * get_address_of_m_TappedGestureEvents_5() { return &___m_TappedGestureEvents_5; }
	inline void set_m_TappedGestureEvents_5(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  value)
	{
		___m_TappedGestureEvents_5 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD * ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA * ___unregistered_5;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04 * ___U3CgetDistanceOverrideU3Ek__BackingField_6;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___m_InteractionManager_7;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___m_Colliders_8;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_InteractionLayerMask_9;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  ___m_InteractionLayers_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_11;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_12;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CustomReticle_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * ___m_FirstHoverEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * ___m_LastHoverExited_15;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * ___m_HoverEntered_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * ___m_HoverExited_17;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * ___m_FirstSelectEntered_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * ___m_LastSelectExited_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * ___m_SelectEntered_20;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * ___m_SelectExited_21;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F * ___m_Activated_22;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C * ___m_Deactivated_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsHovering>k__BackingField
	List_1_t8F5833796A8407AFD49E7C1864E6E76653D3F2C4 * ___U3CinteractorsHoveringU3Ek__BackingField_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsSelecting>k__BackingField
	List_1_tCCED540317FA295CA1BAEBCCD4362DE7EFFB64FD * ___U3CinteractorsSelectingU3Ek__BackingField_25;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_26;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___m_StartingHoverFilters_27;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * ___m_HoverFilters_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___m_StartingSelectFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * ___m_SelectFilters_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * ___m_AttachPoseOnSelect_31;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * ___m_LocalAttachPoseOnSelect_32;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8 * ___m_ReticleCache_33;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___m_RegisteredInteractionManager_34;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnFirstHoverEntered_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnLastHoverExited_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnHoverEntered_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnHoverExited_39;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnSelectEntered_40;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnSelectExited_41;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnSelectCanceled_42;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnActivate_43;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnDeactivate_44;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC * ___U3ChoveringInteractorsU3Ek__BackingField_45;

public:
	inline static int32_t get_offset_of_registered_4() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___registered_4)); }
	inline Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD * get_registered_4() const { return ___registered_4; }
	inline Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD ** get_address_of_registered_4() { return &___registered_4; }
	inline void set_registered_4(Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD * value)
	{
		___registered_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registered_4), (void*)value);
	}

	inline static int32_t get_offset_of_unregistered_5() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___unregistered_5)); }
	inline Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA * get_unregistered_5() const { return ___unregistered_5; }
	inline Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA ** get_address_of_unregistered_5() { return &___unregistered_5; }
	inline void set_unregistered_5(Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA * value)
	{
		___unregistered_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unregistered_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgetDistanceOverrideU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___U3CgetDistanceOverrideU3Ek__BackingField_6)); }
	inline Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04 * get_U3CgetDistanceOverrideU3Ek__BackingField_6() const { return ___U3CgetDistanceOverrideU3Ek__BackingField_6; }
	inline Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04 ** get_address_of_U3CgetDistanceOverrideU3Ek__BackingField_6() { return &___U3CgetDistanceOverrideU3Ek__BackingField_6; }
	inline void set_U3CgetDistanceOverrideU3Ek__BackingField_6(Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04 * value)
	{
		___U3CgetDistanceOverrideU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgetDistanceOverrideU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionManager_7() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_InteractionManager_7)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_m_InteractionManager_7() const { return ___m_InteractionManager_7; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_m_InteractionManager_7() { return &___m_InteractionManager_7; }
	inline void set_m_InteractionManager_7(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___m_InteractionManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractionManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colliders_8() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_Colliders_8)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_m_Colliders_8() const { return ___m_Colliders_8; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_m_Colliders_8() { return &___m_Colliders_8; }
	inline void set_m_Colliders_8(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___m_Colliders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colliders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionLayerMask_9() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_InteractionLayerMask_9)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_InteractionLayerMask_9() const { return ___m_InteractionLayerMask_9; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_InteractionLayerMask_9() { return &___m_InteractionLayerMask_9; }
	inline void set_m_InteractionLayerMask_9(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_InteractionLayerMask_9 = value;
	}

	inline static int32_t get_offset_of_m_InteractionLayers_10() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_InteractionLayers_10)); }
	inline InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  get_m_InteractionLayers_10() const { return ___m_InteractionLayers_10; }
	inline InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47 * get_address_of_m_InteractionLayers_10() { return &___m_InteractionLayers_10; }
	inline void set_m_InteractionLayers_10(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  value)
	{
		___m_InteractionLayers_10 = value;
	}

	inline static int32_t get_offset_of_m_DistanceCalculationMode_11() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_DistanceCalculationMode_11)); }
	inline int32_t get_m_DistanceCalculationMode_11() const { return ___m_DistanceCalculationMode_11; }
	inline int32_t* get_address_of_m_DistanceCalculationMode_11() { return &___m_DistanceCalculationMode_11; }
	inline void set_m_DistanceCalculationMode_11(int32_t value)
	{
		___m_DistanceCalculationMode_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectMode_12() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_SelectMode_12)); }
	inline int32_t get_m_SelectMode_12() const { return ___m_SelectMode_12; }
	inline int32_t* get_address_of_m_SelectMode_12() { return &___m_SelectMode_12; }
	inline void set_m_SelectMode_12(int32_t value)
	{
		___m_SelectMode_12 = value;
	}

	inline static int32_t get_offset_of_m_CustomReticle_13() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_CustomReticle_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CustomReticle_13() const { return ___m_CustomReticle_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CustomReticle_13() { return &___m_CustomReticle_13; }
	inline void set_m_CustomReticle_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CustomReticle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomReticle_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstHoverEntered_14() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_FirstHoverEntered_14)); }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * get_m_FirstHoverEntered_14() const { return ___m_FirstHoverEntered_14; }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 ** get_address_of_m_FirstHoverEntered_14() { return &___m_FirstHoverEntered_14; }
	inline void set_m_FirstHoverEntered_14(HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * value)
	{
		___m_FirstHoverEntered_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstHoverEntered_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastHoverExited_15() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_LastHoverExited_15)); }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * get_m_LastHoverExited_15() const { return ___m_LastHoverExited_15; }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 ** get_address_of_m_LastHoverExited_15() { return &___m_LastHoverExited_15; }
	inline void set_m_LastHoverExited_15(HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * value)
	{
		___m_LastHoverExited_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastHoverExited_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverEntered_16() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_HoverEntered_16)); }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * get_m_HoverEntered_16() const { return ___m_HoverEntered_16; }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 ** get_address_of_m_HoverEntered_16() { return &___m_HoverEntered_16; }
	inline void set_m_HoverEntered_16(HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * value)
	{
		___m_HoverEntered_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverEntered_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverExited_17() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_HoverExited_17)); }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * get_m_HoverExited_17() const { return ___m_HoverExited_17; }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 ** get_address_of_m_HoverExited_17() { return &___m_HoverExited_17; }
	inline void set_m_HoverExited_17(HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * value)
	{
		___m_HoverExited_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverExited_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelectEntered_18() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_FirstSelectEntered_18)); }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * get_m_FirstSelectEntered_18() const { return ___m_FirstSelectEntered_18; }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 ** get_address_of_m_FirstSelectEntered_18() { return &___m_FirstSelectEntered_18; }
	inline void set_m_FirstSelectEntered_18(SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * value)
	{
		___m_FirstSelectEntered_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelectEntered_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastSelectExited_19() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_LastSelectExited_19)); }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * get_m_LastSelectExited_19() const { return ___m_LastSelectExited_19; }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 ** get_address_of_m_LastSelectExited_19() { return &___m_LastSelectExited_19; }
	inline void set_m_LastSelectExited_19(SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * value)
	{
		___m_LastSelectExited_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastSelectExited_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectEntered_20() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_SelectEntered_20)); }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * get_m_SelectEntered_20() const { return ___m_SelectEntered_20; }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 ** get_address_of_m_SelectEntered_20() { return &___m_SelectEntered_20; }
	inline void set_m_SelectEntered_20(SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * value)
	{
		___m_SelectEntered_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectEntered_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectExited_21() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_SelectExited_21)); }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * get_m_SelectExited_21() const { return ___m_SelectExited_21; }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 ** get_address_of_m_SelectExited_21() { return &___m_SelectExited_21; }
	inline void set_m_SelectExited_21(SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * value)
	{
		___m_SelectExited_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectExited_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Activated_22() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_Activated_22)); }
	inline ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F * get_m_Activated_22() const { return ___m_Activated_22; }
	inline ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F ** get_address_of_m_Activated_22() { return &___m_Activated_22; }
	inline void set_m_Activated_22(ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F * value)
	{
		___m_Activated_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Activated_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Deactivated_23() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_Deactivated_23)); }
	inline DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C * get_m_Deactivated_23() const { return ___m_Deactivated_23; }
	inline DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C ** get_address_of_m_Deactivated_23() { return &___m_Deactivated_23; }
	inline void set_m_Deactivated_23(DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C * value)
	{
		___m_Deactivated_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Deactivated_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinteractorsHoveringU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___U3CinteractorsHoveringU3Ek__BackingField_24)); }
	inline List_1_t8F5833796A8407AFD49E7C1864E6E76653D3F2C4 * get_U3CinteractorsHoveringU3Ek__BackingField_24() const { return ___U3CinteractorsHoveringU3Ek__BackingField_24; }
	inline List_1_t8F5833796A8407AFD49E7C1864E6E76653D3F2C4 ** get_address_of_U3CinteractorsHoveringU3Ek__BackingField_24() { return &___U3CinteractorsHoveringU3Ek__BackingField_24; }
	inline void set_U3CinteractorsHoveringU3Ek__BackingField_24(List_1_t8F5833796A8407AFD49E7C1864E6E76653D3F2C4 * value)
	{
		___U3CinteractorsHoveringU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinteractorsHoveringU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinteractorsSelectingU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___U3CinteractorsSelectingU3Ek__BackingField_25)); }
	inline List_1_tCCED540317FA295CA1BAEBCCD4362DE7EFFB64FD * get_U3CinteractorsSelectingU3Ek__BackingField_25() const { return ___U3CinteractorsSelectingU3Ek__BackingField_25; }
	inline List_1_tCCED540317FA295CA1BAEBCCD4362DE7EFFB64FD ** get_address_of_U3CinteractorsSelectingU3Ek__BackingField_25() { return &___U3CinteractorsSelectingU3Ek__BackingField_25; }
	inline void set_U3CinteractorsSelectingU3Ek__BackingField_25(List_1_tCCED540317FA295CA1BAEBCCD4362DE7EFFB64FD * value)
	{
		___U3CinteractorsSelectingU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinteractorsSelectingU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfirstInteractorSelectingU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___U3CfirstInteractorSelectingU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CfirstInteractorSelectingU3Ek__BackingField_26() const { return ___U3CfirstInteractorSelectingU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CfirstInteractorSelectingU3Ek__BackingField_26() { return &___U3CfirstInteractorSelectingU3Ek__BackingField_26; }
	inline void set_U3CfirstInteractorSelectingU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CfirstInteractorSelectingU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfirstInteractorSelectingU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingHoverFilters_27() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_StartingHoverFilters_27)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_m_StartingHoverFilters_27() const { return ___m_StartingHoverFilters_27; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_m_StartingHoverFilters_27() { return &___m_StartingHoverFilters_27; }
	inline void set_m_StartingHoverFilters_27(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___m_StartingHoverFilters_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingHoverFilters_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverFilters_28() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_HoverFilters_28)); }
	inline ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * get_m_HoverFilters_28() const { return ___m_HoverFilters_28; }
	inline ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 ** get_address_of_m_HoverFilters_28() { return &___m_HoverFilters_28; }
	inline void set_m_HoverFilters_28(ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * value)
	{
		___m_HoverFilters_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverFilters_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingSelectFilters_29() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_StartingSelectFilters_29)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_m_StartingSelectFilters_29() const { return ___m_StartingSelectFilters_29; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_m_StartingSelectFilters_29() { return &___m_StartingSelectFilters_29; }
	inline void set_m_StartingSelectFilters_29(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___m_StartingSelectFilters_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingSelectFilters_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectFilters_30() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_SelectFilters_30)); }
	inline ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * get_m_SelectFilters_30() const { return ___m_SelectFilters_30; }
	inline ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 ** get_address_of_m_SelectFilters_30() { return &___m_SelectFilters_30; }
	inline void set_m_SelectFilters_30(ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * value)
	{
		___m_SelectFilters_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectFilters_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_AttachPoseOnSelect_31() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_AttachPoseOnSelect_31)); }
	inline Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * get_m_AttachPoseOnSelect_31() const { return ___m_AttachPoseOnSelect_31; }
	inline Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC ** get_address_of_m_AttachPoseOnSelect_31() { return &___m_AttachPoseOnSelect_31; }
	inline void set_m_AttachPoseOnSelect_31(Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * value)
	{
		___m_AttachPoseOnSelect_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttachPoseOnSelect_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalAttachPoseOnSelect_32() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_LocalAttachPoseOnSelect_32)); }
	inline Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * get_m_LocalAttachPoseOnSelect_32() const { return ___m_LocalAttachPoseOnSelect_32; }
	inline Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC ** get_address_of_m_LocalAttachPoseOnSelect_32() { return &___m_LocalAttachPoseOnSelect_32; }
	inline void set_m_LocalAttachPoseOnSelect_32(Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * value)
	{
		___m_LocalAttachPoseOnSelect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalAttachPoseOnSelect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReticleCache_33() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_ReticleCache_33)); }
	inline Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8 * get_m_ReticleCache_33() const { return ___m_ReticleCache_33; }
	inline Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8 ** get_address_of_m_ReticleCache_33() { return &___m_ReticleCache_33; }
	inline void set_m_ReticleCache_33(Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8 * value)
	{
		___m_ReticleCache_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReticleCache_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredInteractionManager_34() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_RegisteredInteractionManager_34)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_m_RegisteredInteractionManager_34() const { return ___m_RegisteredInteractionManager_34; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_m_RegisteredInteractionManager_34() { return &___m_RegisteredInteractionManager_34; }
	inline void set_m_RegisteredInteractionManager_34(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___m_RegisteredInteractionManager_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredInteractionManager_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFirstHoverEntered_36() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnFirstHoverEntered_36)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnFirstHoverEntered_36() const { return ___m_OnFirstHoverEntered_36; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnFirstHoverEntered_36() { return &___m_OnFirstHoverEntered_36; }
	inline void set_m_OnFirstHoverEntered_36(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnFirstHoverEntered_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFirstHoverEntered_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnLastHoverExited_37() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnLastHoverExited_37)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnLastHoverExited_37() const { return ___m_OnLastHoverExited_37; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnLastHoverExited_37() { return &___m_OnLastHoverExited_37; }
	inline void set_m_OnLastHoverExited_37(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnLastHoverExited_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnLastHoverExited_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHoverEntered_38() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnHoverEntered_38)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnHoverEntered_38() const { return ___m_OnHoverEntered_38; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnHoverEntered_38() { return &___m_OnHoverEntered_38; }
	inline void set_m_OnHoverEntered_38(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnHoverEntered_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHoverEntered_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHoverExited_39() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnHoverExited_39)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnHoverExited_39() const { return ___m_OnHoverExited_39; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnHoverExited_39() { return &___m_OnHoverExited_39; }
	inline void set_m_OnHoverExited_39(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnHoverExited_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHoverExited_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelectEntered_40() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnSelectEntered_40)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnSelectEntered_40() const { return ___m_OnSelectEntered_40; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnSelectEntered_40() { return &___m_OnSelectEntered_40; }
	inline void set_m_OnSelectEntered_40(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnSelectEntered_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelectEntered_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelectExited_41() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnSelectExited_41)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnSelectExited_41() const { return ___m_OnSelectExited_41; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnSelectExited_41() { return &___m_OnSelectExited_41; }
	inline void set_m_OnSelectExited_41(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnSelectExited_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelectExited_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelectCanceled_42() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnSelectCanceled_42)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnSelectCanceled_42() const { return ___m_OnSelectCanceled_42; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnSelectCanceled_42() { return &___m_OnSelectCanceled_42; }
	inline void set_m_OnSelectCanceled_42(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnSelectCanceled_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelectCanceled_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActivate_43() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnActivate_43)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnActivate_43() const { return ___m_OnActivate_43; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnActivate_43() { return &___m_OnActivate_43; }
	inline void set_m_OnActivate_43(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnActivate_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActivate_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDeactivate_44() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnDeactivate_44)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnDeactivate_44() const { return ___m_OnDeactivate_44; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnDeactivate_44() { return &___m_OnDeactivate_44; }
	inline void set_m_OnDeactivate_44(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnDeactivate_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDeactivate_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChoveringInteractorsU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___U3ChoveringInteractorsU3Ek__BackingField_45)); }
	inline List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC * get_U3ChoveringInteractorsU3Ek__BackingField_45() const { return ___U3ChoveringInteractorsU3Ek__BackingField_45; }
	inline List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC ** get_address_of_U3ChoveringInteractorsU3Ek__BackingField_45() { return &___U3ChoveringInteractorsU3Ek__BackingField_45; }
	inline void set_U3ChoveringInteractorsU3Ek__BackingField_45(List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC * value)
	{
		___U3ChoveringInteractorsU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChoveringInteractorsU3Ek__BackingField_45), (void*)value);
	}
};

struct XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF_StaticFields
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___s_InteractionManagerCache_35;

public:
	inline static int32_t get_offset_of_s_InteractionManagerCache_35() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF_StaticFields, ___s_InteractionManagerCache_35)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_s_InteractionManagerCache_35() const { return ___s_InteractionManagerCache_35; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_s_InteractionManagerCache_35() { return &___s_InteractionManagerCache_35; }
	inline void set_s_InteractionManagerCache_35(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___s_InteractionManagerCache_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InteractionManagerCache_35), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t001E08BCBD22D6BC11D71ADBE870533A84B5C31C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorRegistered
	Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D * ___interactorRegistered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorUnregistered
	Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 * ___interactorUnregistered_5;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableRegistered
	Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD * ___interactableRegistered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableUnregistered
	Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA * ___interactableUnregistered_7;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_StartingHoverFilters
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___m_StartingHoverFilters_8;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverFilters
	ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * ___m_HoverFilters_9;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_StartingSelectFilters
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___m_StartingSelectFilters_10;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectFilters
	ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * ___m_SelectFilters_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ColliderToInteractableMap
	Dictionary_2_tD06DEC3B9E7AC19B31379B218D65E9C58BFF9894 * ___m_ColliderToInteractableMap_13;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactors
	RegistrationList_1_tEA67F97B075C7ECBFD9B8CA02CD33CE0AED3A100 * ___m_Interactors_14;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactables
	RegistrationList_1_t26D1D717781DBB82AB1AD7A3E9B283602045116D * ___m_Interactables_15;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentHovered
	List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 * ___m_CurrentHovered_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentSelected
	List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * ___m_CurrentSelected_17;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HighestPriorityTargetMap
	Dictionary_2_tAD4071299B181838DF006582082FA76D2634D175 * ___m_HighestPriorityTargetMap_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ValidTargets
	List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * ___m_ValidTargets_20;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_UnorderedValidTargets
	HashSet_1_tDFE64DF247F047B9475BD969377F52A61B0FB92F * ___m_UnorderedValidTargets_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_DeprecatedValidTargets
	List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * ___m_DeprecatedValidTargets_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractors
	List_1_tCAFBFD76706B54DB653FF3DD6594D969F208A84E * ___m_ScratchInteractors_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractables
	List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * ___m_ScratchInteractables_24;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectEnterEventArgs
	LinkedPool_1_t60F8EE05DBC8DB8F202C181035FB85BFA8A27FDC * ___m_SelectEnterEventArgs_25;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectExitEventArgs
	LinkedPool_1_t3C0A632911E27EF560EAE0254DF8BC588DEA6119 * ___m_SelectExitEventArgs_26;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverEnterEventArgs
	LinkedPool_1_tC71CB21F818576A467857284796CDB31D260015B * ___m_HoverEnterEventArgs_27;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverExitEventArgs
	LinkedPool_1_t64D22AD9E7EA1F457DC26D3093EB93A57125E766 * ___m_HoverExitEventArgs_28;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorRegisteredEventArgs
	LinkedPool_1_t6B7618ADC3A598F7887995B3E28748177B7E40BF * ___m_InteractorRegisteredEventArgs_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorUnregisteredEventArgs
	LinkedPool_1_tE21B65089436828834C03153C16FD41085100578 * ___m_InteractorUnregisteredEventArgs_30;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableRegisteredEventArgs
	LinkedPool_1_t32521DC5092675F697F526BAAAFE29F5F875CC30 * ___m_InteractableRegisteredEventArgs_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableUnregisteredEventArgs
	LinkedPool_1_t3501251255EB5662111043121D1A0A205F1A8D3B * ___m_InteractableUnregisteredEventArgs_32;

public:
	inline static int32_t get_offset_of_interactorRegistered_4() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___interactorRegistered_4)); }
	inline Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D * get_interactorRegistered_4() const { return ___interactorRegistered_4; }
	inline Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D ** get_address_of_interactorRegistered_4() { return &___interactorRegistered_4; }
	inline void set_interactorRegistered_4(Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D * value)
	{
		___interactorRegistered_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactorRegistered_4), (void*)value);
	}

	inline static int32_t get_offset_of_interactorUnregistered_5() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___interactorUnregistered_5)); }
	inline Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 * get_interactorUnregistered_5() const { return ___interactorUnregistered_5; }
	inline Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 ** get_address_of_interactorUnregistered_5() { return &___interactorUnregistered_5; }
	inline void set_interactorUnregistered_5(Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 * value)
	{
		___interactorUnregistered_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactorUnregistered_5), (void*)value);
	}

	inline static int32_t get_offset_of_interactableRegistered_6() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___interactableRegistered_6)); }
	inline Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD * get_interactableRegistered_6() const { return ___interactableRegistered_6; }
	inline Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD ** get_address_of_interactableRegistered_6() { return &___interactableRegistered_6; }
	inline void set_interactableRegistered_6(Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD * value)
	{
		___interactableRegistered_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactableRegistered_6), (void*)value);
	}

	inline static int32_t get_offset_of_interactableUnregistered_7() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___interactableUnregistered_7)); }
	inline Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA * get_interactableUnregistered_7() const { return ___interactableUnregistered_7; }
	inline Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA ** get_address_of_interactableUnregistered_7() { return &___interactableUnregistered_7; }
	inline void set_interactableUnregistered_7(Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA * value)
	{
		___interactableUnregistered_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactableUnregistered_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingHoverFilters_8() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_StartingHoverFilters_8)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_m_StartingHoverFilters_8() const { return ___m_StartingHoverFilters_8; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_m_StartingHoverFilters_8() { return &___m_StartingHoverFilters_8; }
	inline void set_m_StartingHoverFilters_8(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___m_StartingHoverFilters_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingHoverFilters_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverFilters_9() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_HoverFilters_9)); }
	inline ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * get_m_HoverFilters_9() const { return ___m_HoverFilters_9; }
	inline ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 ** get_address_of_m_HoverFilters_9() { return &___m_HoverFilters_9; }
	inline void set_m_HoverFilters_9(ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * value)
	{
		___m_HoverFilters_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverFilters_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingSelectFilters_10() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_StartingSelectFilters_10)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_m_StartingSelectFilters_10() const { return ___m_StartingSelectFilters_10; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_m_StartingSelectFilters_10() { return &___m_StartingSelectFilters_10; }
	inline void set_m_StartingSelectFilters_10(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___m_StartingSelectFilters_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingSelectFilters_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectFilters_11() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_SelectFilters_11)); }
	inline ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * get_m_SelectFilters_11() const { return ___m_SelectFilters_11; }
	inline ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 ** get_address_of_m_SelectFilters_11() { return &___m_SelectFilters_11; }
	inline void set_m_SelectFilters_11(ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * value)
	{
		___m_SelectFilters_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectFilters_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColliderToInteractableMap_13() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_ColliderToInteractableMap_13)); }
	inline Dictionary_2_tD06DEC3B9E7AC19B31379B218D65E9C58BFF9894 * get_m_ColliderToInteractableMap_13() const { return ___m_ColliderToInteractableMap_13; }
	inline Dictionary_2_tD06DEC3B9E7AC19B31379B218D65E9C58BFF9894 ** get_address_of_m_ColliderToInteractableMap_13() { return &___m_ColliderToInteractableMap_13; }
	inline void set_m_ColliderToInteractableMap_13(Dictionary_2_tD06DEC3B9E7AC19B31379B218D65E9C58BFF9894 * value)
	{
		___m_ColliderToInteractableMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColliderToInteractableMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactors_14() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_Interactors_14)); }
	inline RegistrationList_1_tEA67F97B075C7ECBFD9B8CA02CD33CE0AED3A100 * get_m_Interactors_14() const { return ___m_Interactors_14; }
	inline RegistrationList_1_tEA67F97B075C7ECBFD9B8CA02CD33CE0AED3A100 ** get_address_of_m_Interactors_14() { return &___m_Interactors_14; }
	inline void set_m_Interactors_14(RegistrationList_1_tEA67F97B075C7ECBFD9B8CA02CD33CE0AED3A100 * value)
	{
		___m_Interactors_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactors_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactables_15() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_Interactables_15)); }
	inline RegistrationList_1_t26D1D717781DBB82AB1AD7A3E9B283602045116D * get_m_Interactables_15() const { return ___m_Interactables_15; }
	inline RegistrationList_1_t26D1D717781DBB82AB1AD7A3E9B283602045116D ** get_address_of_m_Interactables_15() { return &___m_Interactables_15; }
	inline void set_m_Interactables_15(RegistrationList_1_t26D1D717781DBB82AB1AD7A3E9B283602045116D * value)
	{
		___m_Interactables_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactables_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentHovered_16() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_CurrentHovered_16)); }
	inline List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 * get_m_CurrentHovered_16() const { return ___m_CurrentHovered_16; }
	inline List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 ** get_address_of_m_CurrentHovered_16() { return &___m_CurrentHovered_16; }
	inline void set_m_CurrentHovered_16(List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 * value)
	{
		___m_CurrentHovered_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentHovered_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentSelected_17() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_CurrentSelected_17)); }
	inline List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * get_m_CurrentSelected_17() const { return ___m_CurrentSelected_17; }
	inline List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E ** get_address_of_m_CurrentSelected_17() { return &___m_CurrentSelected_17; }
	inline void set_m_CurrentSelected_17(List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * value)
	{
		___m_CurrentSelected_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_HighestPriorityTargetMap_18() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_HighestPriorityTargetMap_18)); }
	inline Dictionary_2_tAD4071299B181838DF006582082FA76D2634D175 * get_m_HighestPriorityTargetMap_18() const { return ___m_HighestPriorityTargetMap_18; }
	inline Dictionary_2_tAD4071299B181838DF006582082FA76D2634D175 ** get_address_of_m_HighestPriorityTargetMap_18() { return &___m_HighestPriorityTargetMap_18; }
	inline void set_m_HighestPriorityTargetMap_18(Dictionary_2_tAD4071299B181838DF006582082FA76D2634D175 * value)
	{
		___m_HighestPriorityTargetMap_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighestPriorityTargetMap_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidTargets_20() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_ValidTargets_20)); }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * get_m_ValidTargets_20() const { return ___m_ValidTargets_20; }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 ** get_address_of_m_ValidTargets_20() { return &___m_ValidTargets_20; }
	inline void set_m_ValidTargets_20(List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * value)
	{
		___m_ValidTargets_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ValidTargets_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnorderedValidTargets_21() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_UnorderedValidTargets_21)); }
	inline HashSet_1_tDFE64DF247F047B9475BD969377F52A61B0FB92F * get_m_UnorderedValidTargets_21() const { return ___m_UnorderedValidTargets_21; }
	inline HashSet_1_tDFE64DF247F047B9475BD969377F52A61B0FB92F ** get_address_of_m_UnorderedValidTargets_21() { return &___m_UnorderedValidTargets_21; }
	inline void set_m_UnorderedValidTargets_21(HashSet_1_tDFE64DF247F047B9475BD969377F52A61B0FB92F * value)
	{
		___m_UnorderedValidTargets_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnorderedValidTargets_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeprecatedValidTargets_22() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_DeprecatedValidTargets_22)); }
	inline List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * get_m_DeprecatedValidTargets_22() const { return ___m_DeprecatedValidTargets_22; }
	inline List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 ** get_address_of_m_DeprecatedValidTargets_22() { return &___m_DeprecatedValidTargets_22; }
	inline void set_m_DeprecatedValidTargets_22(List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * value)
	{
		___m_DeprecatedValidTargets_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeprecatedValidTargets_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScratchInteractors_23() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_ScratchInteractors_23)); }
	inline List_1_tCAFBFD76706B54DB653FF3DD6594D969F208A84E * get_m_ScratchInteractors_23() const { return ___m_ScratchInteractors_23; }
	inline List_1_tCAFBFD76706B54DB653FF3DD6594D969F208A84E ** get_address_of_m_ScratchInteractors_23() { return &___m_ScratchInteractors_23; }
	inline void set_m_ScratchInteractors_23(List_1_tCAFBFD76706B54DB653FF3DD6594D969F208A84E * value)
	{
		___m_ScratchInteractors_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScratchInteractors_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScratchInteractables_24() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_ScratchInteractables_24)); }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * get_m_ScratchInteractables_24() const { return ___m_ScratchInteractables_24; }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 ** get_address_of_m_ScratchInteractables_24() { return &___m_ScratchInteractables_24; }
	inline void set_m_ScratchInteractables_24(List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * value)
	{
		___m_ScratchInteractables_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScratchInteractables_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectEnterEventArgs_25() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_SelectEnterEventArgs_25)); }
	inline LinkedPool_1_t60F8EE05DBC8DB8F202C181035FB85BFA8A27FDC * get_m_SelectEnterEventArgs_25() const { return ___m_SelectEnterEventArgs_25; }
	inline LinkedPool_1_t60F8EE05DBC8DB8F202C181035FB85BFA8A27FDC ** get_address_of_m_SelectEnterEventArgs_25() { return &___m_SelectEnterEventArgs_25; }
	inline void set_m_SelectEnterEventArgs_25(LinkedPool_1_t60F8EE05DBC8DB8F202C181035FB85BFA8A27FDC * value)
	{
		___m_SelectEnterEventArgs_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectEnterEventArgs_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectExitEventArgs_26() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_SelectExitEventArgs_26)); }
	inline LinkedPool_1_t3C0A632911E27EF560EAE0254DF8BC588DEA6119 * get_m_SelectExitEventArgs_26() const { return ___m_SelectExitEventArgs_26; }
	inline LinkedPool_1_t3C0A632911E27EF560EAE0254DF8BC588DEA6119 ** get_address_of_m_SelectExitEventArgs_26() { return &___m_SelectExitEventArgs_26; }
	inline void set_m_SelectExitEventArgs_26(LinkedPool_1_t3C0A632911E27EF560EAE0254DF8BC588DEA6119 * value)
	{
		___m_SelectExitEventArgs_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectExitEventArgs_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverEnterEventArgs_27() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_HoverEnterEventArgs_27)); }
	inline LinkedPool_1_tC71CB21F818576A467857284796CDB31D260015B * get_m_HoverEnterEventArgs_27() const { return ___m_HoverEnterEventArgs_27; }
	inline LinkedPool_1_tC71CB21F818576A467857284796CDB31D260015B ** get_address_of_m_HoverEnterEventArgs_27() { return &___m_HoverEnterEventArgs_27; }
	inline void set_m_HoverEnterEventArgs_27(LinkedPool_1_tC71CB21F818576A467857284796CDB31D260015B * value)
	{
		___m_HoverEnterEventArgs_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverEnterEventArgs_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverExitEventArgs_28() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_HoverExitEventArgs_28)); }
	inline LinkedPool_1_t64D22AD9E7EA1F457DC26D3093EB93A57125E766 * get_m_HoverExitEventArgs_28() const { return ___m_HoverExitEventArgs_28; }
	inline LinkedPool_1_t64D22AD9E7EA1F457DC26D3093EB93A57125E766 ** get_address_of_m_HoverExitEventArgs_28() { return &___m_HoverExitEventArgs_28; }
	inline void set_m_HoverExitEventArgs_28(LinkedPool_1_t64D22AD9E7EA1F457DC26D3093EB93A57125E766 * value)
	{
		___m_HoverExitEventArgs_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverExitEventArgs_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractorRegisteredEventArgs_29() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_InteractorRegisteredEventArgs_29)); }
	inline LinkedPool_1_t6B7618ADC3A598F7887995B3E28748177B7E40BF * get_m_InteractorRegisteredEventArgs_29() const { return ___m_InteractorRegisteredEventArgs_29; }
	inline LinkedPool_1_t6B7618ADC3A598F7887995B3E28748177B7E40BF ** get_address_of_m_InteractorRegisteredEventArgs_29() { return &___m_InteractorRegisteredEventArgs_29; }
	inline void set_m_InteractorRegisteredEventArgs_29(LinkedPool_1_t6B7618ADC3A598F7887995B3E28748177B7E40BF * value)
	{
		___m_InteractorRegisteredEventArgs_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractorRegisteredEventArgs_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractorUnregisteredEventArgs_30() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_InteractorUnregisteredEventArgs_30)); }
	inline LinkedPool_1_tE21B65089436828834C03153C16FD41085100578 * get_m_InteractorUnregisteredEventArgs_30() const { return ___m_InteractorUnregisteredEventArgs_30; }
	inline LinkedPool_1_tE21B65089436828834C03153C16FD41085100578 ** get_address_of_m_InteractorUnregisteredEventArgs_30() { return &___m_InteractorUnregisteredEventArgs_30; }
	inline void set_m_InteractorUnregisteredEventArgs_30(LinkedPool_1_tE21B65089436828834C03153C16FD41085100578 * value)
	{
		___m_InteractorUnregisteredEventArgs_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractorUnregisteredEventArgs_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractableRegisteredEventArgs_31() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_InteractableRegisteredEventArgs_31)); }
	inline LinkedPool_1_t32521DC5092675F697F526BAAAFE29F5F875CC30 * get_m_InteractableRegisteredEventArgs_31() const { return ___m_InteractableRegisteredEventArgs_31; }
	inline LinkedPool_1_t32521DC5092675F697F526BAAAFE29F5F875CC30 ** get_address_of_m_InteractableRegisteredEventArgs_31() { return &___m_InteractableRegisteredEventArgs_31; }
	inline void set_m_InteractableRegisteredEventArgs_31(LinkedPool_1_t32521DC5092675F697F526BAAAFE29F5F875CC30 * value)
	{
		___m_InteractableRegisteredEventArgs_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractableRegisteredEventArgs_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractableUnregisteredEventArgs_32() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4, ___m_InteractableUnregisteredEventArgs_32)); }
	inline LinkedPool_1_t3501251255EB5662111043121D1A0A205F1A8D3B * get_m_InteractableUnregisteredEventArgs_32() const { return ___m_InteractableUnregisteredEventArgs_32; }
	inline LinkedPool_1_t3501251255EB5662111043121D1A0A205F1A8D3B ** get_address_of_m_InteractableUnregisteredEventArgs_32() { return &___m_InteractableUnregisteredEventArgs_32; }
	inline void set_m_InteractableUnregisteredEventArgs_32(LinkedPool_1_t3501251255EB5662111043121D1A0A205F1A8D3B * value)
	{
		___m_InteractableUnregisteredEventArgs_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractableUnregisteredEventArgs_32), (void*)value);
	}
};

struct XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::<activeInteractionManagers>k__BackingField
	List_1_t19B2C24A261798D687174CD32FE67952C7E70DD7 * ___U3CactiveInteractionManagersU3Ek__BackingField_12;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_TargetPriorityInteractorListPool
	LinkedPool_1_tB0A9D8A3CE5E3436568BF271E4830D10E96A5084 * ___s_TargetPriorityInteractorListPool_19;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_PreprocessInteractorsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_PreprocessInteractorsMarker_33;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractorsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_ProcessInteractorsMarker_34;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractablesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_ProcessInteractablesMarker_35;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_GetValidTargetsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_GetValidTargetsMarker_36;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_FilterRegisteredValidTargetsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_FilterRegisteredValidTargetsMarker_37;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidSelectionsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_EvaluateInvalidSelectionsMarker_38;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidHoversMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_EvaluateInvalidHoversMarker_39;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidSelectionsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_EvaluateValidSelectionsMarker_40;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidHoversMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_EvaluateValidHoversMarker_41;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectEnterMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_SelectEnterMarker_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectExitMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_SelectExitMarker_43;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverEnterMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_HoverEnterMarker_44;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverExitMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_HoverExitMarker_45;

public:
	inline static int32_t get_offset_of_U3CactiveInteractionManagersU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___U3CactiveInteractionManagersU3Ek__BackingField_12)); }
	inline List_1_t19B2C24A261798D687174CD32FE67952C7E70DD7 * get_U3CactiveInteractionManagersU3Ek__BackingField_12() const { return ___U3CactiveInteractionManagersU3Ek__BackingField_12; }
	inline List_1_t19B2C24A261798D687174CD32FE67952C7E70DD7 ** get_address_of_U3CactiveInteractionManagersU3Ek__BackingField_12() { return &___U3CactiveInteractionManagersU3Ek__BackingField_12; }
	inline void set_U3CactiveInteractionManagersU3Ek__BackingField_12(List_1_t19B2C24A261798D687174CD32FE67952C7E70DD7 * value)
	{
		___U3CactiveInteractionManagersU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveInteractionManagersU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_TargetPriorityInteractorListPool_19() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_TargetPriorityInteractorListPool_19)); }
	inline LinkedPool_1_tB0A9D8A3CE5E3436568BF271E4830D10E96A5084 * get_s_TargetPriorityInteractorListPool_19() const { return ___s_TargetPriorityInteractorListPool_19; }
	inline LinkedPool_1_tB0A9D8A3CE5E3436568BF271E4830D10E96A5084 ** get_address_of_s_TargetPriorityInteractorListPool_19() { return &___s_TargetPriorityInteractorListPool_19; }
	inline void set_s_TargetPriorityInteractorListPool_19(LinkedPool_1_tB0A9D8A3CE5E3436568BF271E4830D10E96A5084 * value)
	{
		___s_TargetPriorityInteractorListPool_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TargetPriorityInteractorListPool_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_PreprocessInteractorsMarker_33() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_PreprocessInteractorsMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_PreprocessInteractorsMarker_33() const { return ___s_PreprocessInteractorsMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_PreprocessInteractorsMarker_33() { return &___s_PreprocessInteractorsMarker_33; }
	inline void set_s_PreprocessInteractorsMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_PreprocessInteractorsMarker_33 = value;
	}

	inline static int32_t get_offset_of_s_ProcessInteractorsMarker_34() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_ProcessInteractorsMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_ProcessInteractorsMarker_34() const { return ___s_ProcessInteractorsMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_ProcessInteractorsMarker_34() { return &___s_ProcessInteractorsMarker_34; }
	inline void set_s_ProcessInteractorsMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_ProcessInteractorsMarker_34 = value;
	}

	inline static int32_t get_offset_of_s_ProcessInteractablesMarker_35() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_ProcessInteractablesMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_ProcessInteractablesMarker_35() const { return ___s_ProcessInteractablesMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_ProcessInteractablesMarker_35() { return &___s_ProcessInteractablesMarker_35; }
	inline void set_s_ProcessInteractablesMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_ProcessInteractablesMarker_35 = value;
	}

	inline static int32_t get_offset_of_s_GetValidTargetsMarker_36() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_GetValidTargetsMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_GetValidTargetsMarker_36() const { return ___s_GetValidTargetsMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_GetValidTargetsMarker_36() { return &___s_GetValidTargetsMarker_36; }
	inline void set_s_GetValidTargetsMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_GetValidTargetsMarker_36 = value;
	}

	inline static int32_t get_offset_of_s_FilterRegisteredValidTargetsMarker_37() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_FilterRegisteredValidTargetsMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_FilterRegisteredValidTargetsMarker_37() const { return ___s_FilterRegisteredValidTargetsMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_FilterRegisteredValidTargetsMarker_37() { return &___s_FilterRegisteredValidTargetsMarker_37; }
	inline void set_s_FilterRegisteredValidTargetsMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_FilterRegisteredValidTargetsMarker_37 = value;
	}

	inline static int32_t get_offset_of_s_EvaluateInvalidSelectionsMarker_38() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_EvaluateInvalidSelectionsMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_EvaluateInvalidSelectionsMarker_38() const { return ___s_EvaluateInvalidSelectionsMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_EvaluateInvalidSelectionsMarker_38() { return &___s_EvaluateInvalidSelectionsMarker_38; }
	inline void set_s_EvaluateInvalidSelectionsMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_EvaluateInvalidSelectionsMarker_38 = value;
	}

	inline static int32_t get_offset_of_s_EvaluateInvalidHoversMarker_39() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_EvaluateInvalidHoversMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_EvaluateInvalidHoversMarker_39() const { return ___s_EvaluateInvalidHoversMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_EvaluateInvalidHoversMarker_39() { return &___s_EvaluateInvalidHoversMarker_39; }
	inline void set_s_EvaluateInvalidHoversMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_EvaluateInvalidHoversMarker_39 = value;
	}

	inline static int32_t get_offset_of_s_EvaluateValidSelectionsMarker_40() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_EvaluateValidSelectionsMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_EvaluateValidSelectionsMarker_40() const { return ___s_EvaluateValidSelectionsMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_EvaluateValidSelectionsMarker_40() { return &___s_EvaluateValidSelectionsMarker_40; }
	inline void set_s_EvaluateValidSelectionsMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_EvaluateValidSelectionsMarker_40 = value;
	}

	inline static int32_t get_offset_of_s_EvaluateValidHoversMarker_41() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_EvaluateValidHoversMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_EvaluateValidHoversMarker_41() const { return ___s_EvaluateValidHoversMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_EvaluateValidHoversMarker_41() { return &___s_EvaluateValidHoversMarker_41; }
	inline void set_s_EvaluateValidHoversMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_EvaluateValidHoversMarker_41 = value;
	}

	inline static int32_t get_offset_of_s_SelectEnterMarker_42() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_SelectEnterMarker_42)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_SelectEnterMarker_42() const { return ___s_SelectEnterMarker_42; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_SelectEnterMarker_42() { return &___s_SelectEnterMarker_42; }
	inline void set_s_SelectEnterMarker_42(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_SelectEnterMarker_42 = value;
	}

	inline static int32_t get_offset_of_s_SelectExitMarker_43() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_SelectExitMarker_43)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_SelectExitMarker_43() const { return ___s_SelectExitMarker_43; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_SelectExitMarker_43() { return &___s_SelectExitMarker_43; }
	inline void set_s_SelectExitMarker_43(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_SelectExitMarker_43 = value;
	}

	inline static int32_t get_offset_of_s_HoverEnterMarker_44() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_HoverEnterMarker_44)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_HoverEnterMarker_44() const { return ___s_HoverEnterMarker_44; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_HoverEnterMarker_44() { return &___s_HoverEnterMarker_44; }
	inline void set_s_HoverEnterMarker_44(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_HoverEnterMarker_44 = value;
	}

	inline static int32_t get_offset_of_s_HoverExitMarker_45() { return static_cast<int32_t>(offsetof(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4_StaticFields, ___s_HoverExitMarker_45)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_HoverExitMarker_45() const { return ___s_HoverExitMarker_45; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_HoverExitMarker_45() { return &___s_HoverExitMarker_45; }
	inline void set_s_HoverExitMarker_45(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_HoverExitMarker_45 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3  : public XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF
{
public:
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_AttachTransform_58;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_UseDynamicAttach
	bool ___m_UseDynamicAttach_59;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MatchAttachPosition
	bool ___m_MatchAttachPosition_60;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MatchAttachRotation
	bool ___m_MatchAttachRotation_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SnapToColliderVolume
	bool ___m_SnapToColliderVolume_62;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachEaseInTime
	float ___m_AttachEaseInTime_63;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MovementType
	int32_t ___m_MovementType_64;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityDamping
	float ___m_VelocityDamping_65;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityScale
	float ___m_VelocityScale_66;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityDamping
	float ___m_AngularVelocityDamping_67;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityScale
	float ___m_AngularVelocityScale_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackPosition
	bool ___m_TrackPosition_69;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPosition
	bool ___m_SmoothPosition_70;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPositionAmount
	float ___m_SmoothPositionAmount_71;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenPosition
	float ___m_TightenPosition_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackRotation
	bool ___m_TrackRotation_73;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotation
	bool ___m_SmoothRotation_74;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotationAmount
	float ___m_SmoothRotationAmount_75;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenRotation
	float ___m_TightenRotation_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowOnDetach
	bool ___m_ThrowOnDetach_77;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingDuration
	float ___m_ThrowSmoothingDuration_78;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_ThrowSmoothingCurve_79;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowVelocityScale
	float ___m_ThrowVelocityScale_80;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowAngularVelocityScale
	float ___m_ThrowAngularVelocityScale_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ForceGravityOnDetach
	bool ___m_ForceGravityOnDetach_82;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_RetainTransformParent
	bool ___m_RetainTransformParent_83;
	// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable/AttachPointCompatibilityMode UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachPointCompatibilityMode
	int32_t ___m_AttachPointCompatibilityMode_84;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_StartingSingleGrabTransformers
	List_1_tCE827E333AB42329AD38D76D6AAF63DA3CCC56C8 * ___m_StartingSingleGrabTransformers_85;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_StartingMultipleGrabTransformers
	List_1_tCE827E333AB42329AD38D76D6AAF63DA3CCC56C8 * ___m_StartingMultipleGrabTransformers_86;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AddDefaultGrabTransformers
	bool ___m_AddDefaultGrabTransformers_87;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SingleGrabTransformers
	SmallRegistrationList_1_tC431DB328747CA6B7F4757C56C20EEAA25CED789 * ___m_SingleGrabTransformers_88;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MultipleGrabTransformers
	SmallRegistrationList_1_tC431DB328747CA6B7F4757C56C20EEAA25CED789 * ___m_MultipleGrabTransformers_89;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_GrabTransformersAddedWhenGrabbed
	List_1_tF61B3D8A87FC10C99A01DFD75B55D3FCB5A96D62 * ___m_GrabTransformersAddedWhenGrabbed_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_GrabCountChanged
	bool ___m_GrabCountChanged_91;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_IsProcessingGrabTransformers
	bool ___m_IsProcessingGrabTransformers_92;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_TargetPose_93;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetLocalScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_TargetLocalScale_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentAttachEaseTime
	float ___m_CurrentAttachEaseTime_95;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentMovementType
	int32_t ___m_CurrentMovementType_96;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachInLateUpdate
	bool ___m_DetachInLateUpdate_97;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_DetachVelocity_98;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachAngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_DetachAngularVelocity_99;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurrentFrame
	int32_t ___m_ThrowSmoothingCurrentFrame_100;
	// System.Single[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingFrameTimes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_ThrowSmoothingFrameTimes_101;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingVelocityFrames
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_ThrowSmoothingVelocityFrames_102;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingAngularVelocityFrames
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_ThrowSmoothingAngularVelocityFrames_103;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingFirstUpdate
	bool ___m_ThrowSmoothingFirstUpdate_104;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_LastThrowReferencePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LastThrowReferencePose_105;
	// UnityEngine.Rigidbody UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_106;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_WasKinematic
	bool ___m_WasKinematic_107;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_UsedGravity
	bool ___m_UsedGravity_108;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldDrag
	float ___m_OldDrag_109;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldAngularDrag
	float ___m_OldAngularDrag_110;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OriginalSceneParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_OriginalSceneParent_111;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TeleportationMonitor
	TeleportationMonitor_t5F12F4D88C2F0DBAE989D9FDED4407D26039BE8F * ___m_TeleportationMonitor_112;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DynamicAttachTransforms
	Dictionary_2_t05799DEC333EA9E40070CAC69681C3555AE872A4 * ___m_DynamicAttachTransforms_113;

public:
	inline static int32_t get_offset_of_m_AttachTransform_58() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_AttachTransform_58)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_AttachTransform_58() const { return ___m_AttachTransform_58; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_AttachTransform_58() { return &___m_AttachTransform_58; }
	inline void set_m_AttachTransform_58(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_AttachTransform_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttachTransform_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_UseDynamicAttach_59() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_UseDynamicAttach_59)); }
	inline bool get_m_UseDynamicAttach_59() const { return ___m_UseDynamicAttach_59; }
	inline bool* get_address_of_m_UseDynamicAttach_59() { return &___m_UseDynamicAttach_59; }
	inline void set_m_UseDynamicAttach_59(bool value)
	{
		___m_UseDynamicAttach_59 = value;
	}

	inline static int32_t get_offset_of_m_MatchAttachPosition_60() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_MatchAttachPosition_60)); }
	inline bool get_m_MatchAttachPosition_60() const { return ___m_MatchAttachPosition_60; }
	inline bool* get_address_of_m_MatchAttachPosition_60() { return &___m_MatchAttachPosition_60; }
	inline void set_m_MatchAttachPosition_60(bool value)
	{
		___m_MatchAttachPosition_60 = value;
	}

	inline static int32_t get_offset_of_m_MatchAttachRotation_61() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_MatchAttachRotation_61)); }
	inline bool get_m_MatchAttachRotation_61() const { return ___m_MatchAttachRotation_61; }
	inline bool* get_address_of_m_MatchAttachRotation_61() { return &___m_MatchAttachRotation_61; }
	inline void set_m_MatchAttachRotation_61(bool value)
	{
		___m_MatchAttachRotation_61 = value;
	}

	inline static int32_t get_offset_of_m_SnapToColliderVolume_62() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_SnapToColliderVolume_62)); }
	inline bool get_m_SnapToColliderVolume_62() const { return ___m_SnapToColliderVolume_62; }
	inline bool* get_address_of_m_SnapToColliderVolume_62() { return &___m_SnapToColliderVolume_62; }
	inline void set_m_SnapToColliderVolume_62(bool value)
	{
		___m_SnapToColliderVolume_62 = value;
	}

	inline static int32_t get_offset_of_m_AttachEaseInTime_63() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_AttachEaseInTime_63)); }
	inline float get_m_AttachEaseInTime_63() const { return ___m_AttachEaseInTime_63; }
	inline float* get_address_of_m_AttachEaseInTime_63() { return &___m_AttachEaseInTime_63; }
	inline void set_m_AttachEaseInTime_63(float value)
	{
		___m_AttachEaseInTime_63 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_64() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_MovementType_64)); }
	inline int32_t get_m_MovementType_64() const { return ___m_MovementType_64; }
	inline int32_t* get_address_of_m_MovementType_64() { return &___m_MovementType_64; }
	inline void set_m_MovementType_64(int32_t value)
	{
		___m_MovementType_64 = value;
	}

	inline static int32_t get_offset_of_m_VelocityDamping_65() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_VelocityDamping_65)); }
	inline float get_m_VelocityDamping_65() const { return ___m_VelocityDamping_65; }
	inline float* get_address_of_m_VelocityDamping_65() { return &___m_VelocityDamping_65; }
	inline void set_m_VelocityDamping_65(float value)
	{
		___m_VelocityDamping_65 = value;
	}

	inline static int32_t get_offset_of_m_VelocityScale_66() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_VelocityScale_66)); }
	inline float get_m_VelocityScale_66() const { return ___m_VelocityScale_66; }
	inline float* get_address_of_m_VelocityScale_66() { return &___m_VelocityScale_66; }
	inline void set_m_VelocityScale_66(float value)
	{
		___m_VelocityScale_66 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocityDamping_67() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_AngularVelocityDamping_67)); }
	inline float get_m_AngularVelocityDamping_67() const { return ___m_AngularVelocityDamping_67; }
	inline float* get_address_of_m_AngularVelocityDamping_67() { return &___m_AngularVelocityDamping_67; }
	inline void set_m_AngularVelocityDamping_67(float value)
	{
		___m_AngularVelocityDamping_67 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocityScale_68() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_AngularVelocityScale_68)); }
	inline float get_m_AngularVelocityScale_68() const { return ___m_AngularVelocityScale_68; }
	inline float* get_address_of_m_AngularVelocityScale_68() { return &___m_AngularVelocityScale_68; }
	inline void set_m_AngularVelocityScale_68(float value)
	{
		___m_AngularVelocityScale_68 = value;
	}

	inline static int32_t get_offset_of_m_TrackPosition_69() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_TrackPosition_69)); }
	inline bool get_m_TrackPosition_69() const { return ___m_TrackPosition_69; }
	inline bool* get_address_of_m_TrackPosition_69() { return &___m_TrackPosition_69; }
	inline void set_m_TrackPosition_69(bool value)
	{
		___m_TrackPosition_69 = value;
	}

	inline static int32_t get_offset_of_m_SmoothPosition_70() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_SmoothPosition_70)); }
	inline bool get_m_SmoothPosition_70() const { return ___m_SmoothPosition_70; }
	inline bool* get_address_of_m_SmoothPosition_70() { return &___m_SmoothPosition_70; }
	inline void set_m_SmoothPosition_70(bool value)
	{
		___m_SmoothPosition_70 = value;
	}

	inline static int32_t get_offset_of_m_SmoothPositionAmount_71() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_SmoothPositionAmount_71)); }
	inline float get_m_SmoothPositionAmount_71() const { return ___m_SmoothPositionAmount_71; }
	inline float* get_address_of_m_SmoothPositionAmount_71() { return &___m_SmoothPositionAmount_71; }
	inline void set_m_SmoothPositionAmount_71(float value)
	{
		___m_SmoothPositionAmount_71 = value;
	}

	inline static int32_t get_offset_of_m_TightenPosition_72() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_TightenPosition_72)); }
	inline float get_m_TightenPosition_72() const { return ___m_TightenPosition_72; }
	inline float* get_address_of_m_TightenPosition_72() { return &___m_TightenPosition_72; }
	inline void set_m_TightenPosition_72(float value)
	{
		___m_TightenPosition_72 = value;
	}

	inline static int32_t get_offset_of_m_TrackRotation_73() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_TrackRotation_73)); }
	inline bool get_m_TrackRotation_73() const { return ___m_TrackRotation_73; }
	inline bool* get_address_of_m_TrackRotation_73() { return &___m_TrackRotation_73; }
	inline void set_m_TrackRotation_73(bool value)
	{
		___m_TrackRotation_73 = value;
	}

	inline static int32_t get_offset_of_m_SmoothRotation_74() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_SmoothRotation_74)); }
	inline bool get_m_SmoothRotation_74() const { return ___m_SmoothRotation_74; }
	inline bool* get_address_of_m_SmoothRotation_74() { return &___m_SmoothRotation_74; }
	inline void set_m_SmoothRotation_74(bool value)
	{
		___m_SmoothRotation_74 = value;
	}

	inline static int32_t get_offset_of_m_SmoothRotationAmount_75() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_SmoothRotationAmount_75)); }
	inline float get_m_SmoothRotationAmount_75() const { return ___m_SmoothRotationAmount_75; }
	inline float* get_address_of_m_SmoothRotationAmount_75() { return &___m_SmoothRotationAmount_75; }
	inline void set_m_SmoothRotationAmount_75(float value)
	{
		___m_SmoothRotationAmount_75 = value;
	}

	inline static int32_t get_offset_of_m_TightenRotation_76() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_TightenRotation_76)); }
	inline float get_m_TightenRotation_76() const { return ___m_TightenRotation_76; }
	inline float* get_address_of_m_TightenRotation_76() { return &___m_TightenRotation_76; }
	inline void set_m_TightenRotation_76(float value)
	{
		___m_TightenRotation_76 = value;
	}

	inline static int32_t get_offset_of_m_ThrowOnDetach_77() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ThrowOnDetach_77)); }
	inline bool get_m_ThrowOnDetach_77() const { return ___m_ThrowOnDetach_77; }
	inline bool* get_address_of_m_ThrowOnDetach_77() { return &___m_ThrowOnDetach_77; }
	inline void set_m_ThrowOnDetach_77(bool value)
	{
		___m_ThrowOnDetach_77 = value;
	}

	inline static int32_t get_offset_of_m_ThrowSmoothingDuration_78() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ThrowSmoothingDuration_78)); }
	inline float get_m_ThrowSmoothingDuration_78() const { return ___m_ThrowSmoothingDuration_78; }
	inline float* get_address_of_m_ThrowSmoothingDuration_78() { return &___m_ThrowSmoothingDuration_78; }
	inline void set_m_ThrowSmoothingDuration_78(float value)
	{
		___m_ThrowSmoothingDuration_78 = value;
	}

	inline static int32_t get_offset_of_m_ThrowSmoothingCurve_79() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ThrowSmoothingCurve_79)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_ThrowSmoothingCurve_79() const { return ___m_ThrowSmoothingCurve_79; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_ThrowSmoothingCurve_79() { return &___m_ThrowSmoothingCurve_79; }
	inline void set_m_ThrowSmoothingCurve_79(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_ThrowSmoothingCurve_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThrowSmoothingCurve_79), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThrowVelocityScale_80() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ThrowVelocityScale_80)); }
	inline float get_m_ThrowVelocityScale_80() const { return ___m_ThrowVelocityScale_80; }
	inline float* get_address_of_m_ThrowVelocityScale_80() { return &___m_ThrowVelocityScale_80; }
	inline void set_m_ThrowVelocityScale_80(float value)
	{
		___m_ThrowVelocityScale_80 = value;
	}

	inline static int32_t get_offset_of_m_ThrowAngularVelocityScale_81() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ThrowAngularVelocityScale_81)); }
	inline float get_m_ThrowAngularVelocityScale_81() const { return ___m_ThrowAngularVelocityScale_81; }
	inline float* get_address_of_m_ThrowAngularVelocityScale_81() { return &___m_ThrowAngularVelocityScale_81; }
	inline void set_m_ThrowAngularVelocityScale_81(float value)
	{
		___m_ThrowAngularVelocityScale_81 = value;
	}

	inline static int32_t get_offset_of_m_ForceGravityOnDetach_82() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ForceGravityOnDetach_82)); }
	inline bool get_m_ForceGravityOnDetach_82() const { return ___m_ForceGravityOnDetach_82; }
	inline bool* get_address_of_m_ForceGravityOnDetach_82() { return &___m_ForceGravityOnDetach_82; }
	inline void set_m_ForceGravityOnDetach_82(bool value)
	{
		___m_ForceGravityOnDetach_82 = value;
	}

	inline static int32_t get_offset_of_m_RetainTransformParent_83() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_RetainTransformParent_83)); }
	inline bool get_m_RetainTransformParent_83() const { return ___m_RetainTransformParent_83; }
	inline bool* get_address_of_m_RetainTransformParent_83() { return &___m_RetainTransformParent_83; }
	inline void set_m_RetainTransformParent_83(bool value)
	{
		___m_RetainTransformParent_83 = value;
	}

	inline static int32_t get_offset_of_m_AttachPointCompatibilityMode_84() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_AttachPointCompatibilityMode_84)); }
	inline int32_t get_m_AttachPointCompatibilityMode_84() const { return ___m_AttachPointCompatibilityMode_84; }
	inline int32_t* get_address_of_m_AttachPointCompatibilityMode_84() { return &___m_AttachPointCompatibilityMode_84; }
	inline void set_m_AttachPointCompatibilityMode_84(int32_t value)
	{
		___m_AttachPointCompatibilityMode_84 = value;
	}

	inline static int32_t get_offset_of_m_StartingSingleGrabTransformers_85() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_StartingSingleGrabTransformers_85)); }
	inline List_1_tCE827E333AB42329AD38D76D6AAF63DA3CCC56C8 * get_m_StartingSingleGrabTransformers_85() const { return ___m_StartingSingleGrabTransformers_85; }
	inline List_1_tCE827E333AB42329AD38D76D6AAF63DA3CCC56C8 ** get_address_of_m_StartingSingleGrabTransformers_85() { return &___m_StartingSingleGrabTransformers_85; }
	inline void set_m_StartingSingleGrabTransformers_85(List_1_tCE827E333AB42329AD38D76D6AAF63DA3CCC56C8 * value)
	{
		___m_StartingSingleGrabTransformers_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingSingleGrabTransformers_85), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingMultipleGrabTransformers_86() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_StartingMultipleGrabTransformers_86)); }
	inline List_1_tCE827E333AB42329AD38D76D6AAF63DA3CCC56C8 * get_m_StartingMultipleGrabTransformers_86() const { return ___m_StartingMultipleGrabTransformers_86; }
	inline List_1_tCE827E333AB42329AD38D76D6AAF63DA3CCC56C8 ** get_address_of_m_StartingMultipleGrabTransformers_86() { return &___m_StartingMultipleGrabTransformers_86; }
	inline void set_m_StartingMultipleGrabTransformers_86(List_1_tCE827E333AB42329AD38D76D6AAF63DA3CCC56C8 * value)
	{
		___m_StartingMultipleGrabTransformers_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingMultipleGrabTransformers_86), (void*)value);
	}

	inline static int32_t get_offset_of_m_AddDefaultGrabTransformers_87() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_AddDefaultGrabTransformers_87)); }
	inline bool get_m_AddDefaultGrabTransformers_87() const { return ___m_AddDefaultGrabTransformers_87; }
	inline bool* get_address_of_m_AddDefaultGrabTransformers_87() { return &___m_AddDefaultGrabTransformers_87; }
	inline void set_m_AddDefaultGrabTransformers_87(bool value)
	{
		___m_AddDefaultGrabTransformers_87 = value;
	}

	inline static int32_t get_offset_of_m_SingleGrabTransformers_88() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_SingleGrabTransformers_88)); }
	inline SmallRegistrationList_1_tC431DB328747CA6B7F4757C56C20EEAA25CED789 * get_m_SingleGrabTransformers_88() const { return ___m_SingleGrabTransformers_88; }
	inline SmallRegistrationList_1_tC431DB328747CA6B7F4757C56C20EEAA25CED789 ** get_address_of_m_SingleGrabTransformers_88() { return &___m_SingleGrabTransformers_88; }
	inline void set_m_SingleGrabTransformers_88(SmallRegistrationList_1_tC431DB328747CA6B7F4757C56C20EEAA25CED789 * value)
	{
		___m_SingleGrabTransformers_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingleGrabTransformers_88), (void*)value);
	}

	inline static int32_t get_offset_of_m_MultipleGrabTransformers_89() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_MultipleGrabTransformers_89)); }
	inline SmallRegistrationList_1_tC431DB328747CA6B7F4757C56C20EEAA25CED789 * get_m_MultipleGrabTransformers_89() const { return ___m_MultipleGrabTransformers_89; }
	inline SmallRegistrationList_1_tC431DB328747CA6B7F4757C56C20EEAA25CED789 ** get_address_of_m_MultipleGrabTransformers_89() { return &___m_MultipleGrabTransformers_89; }
	inline void set_m_MultipleGrabTransformers_89(SmallRegistrationList_1_tC431DB328747CA6B7F4757C56C20EEAA25CED789 * value)
	{
		___m_MultipleGrabTransformers_89 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MultipleGrabTransformers_89), (void*)value);
	}

	inline static int32_t get_offset_of_m_GrabTransformersAddedWhenGrabbed_90() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_GrabTransformersAddedWhenGrabbed_90)); }
	inline List_1_tF61B3D8A87FC10C99A01DFD75B55D3FCB5A96D62 * get_m_GrabTransformersAddedWhenGrabbed_90() const { return ___m_GrabTransformersAddedWhenGrabbed_90; }
	inline List_1_tF61B3D8A87FC10C99A01DFD75B55D3FCB5A96D62 ** get_address_of_m_GrabTransformersAddedWhenGrabbed_90() { return &___m_GrabTransformersAddedWhenGrabbed_90; }
	inline void set_m_GrabTransformersAddedWhenGrabbed_90(List_1_tF61B3D8A87FC10C99A01DFD75B55D3FCB5A96D62 * value)
	{
		___m_GrabTransformersAddedWhenGrabbed_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GrabTransformersAddedWhenGrabbed_90), (void*)value);
	}

	inline static int32_t get_offset_of_m_GrabCountChanged_91() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_GrabCountChanged_91)); }
	inline bool get_m_GrabCountChanged_91() const { return ___m_GrabCountChanged_91; }
	inline bool* get_address_of_m_GrabCountChanged_91() { return &___m_GrabCountChanged_91; }
	inline void set_m_GrabCountChanged_91(bool value)
	{
		___m_GrabCountChanged_91 = value;
	}

	inline static int32_t get_offset_of_m_IsProcessingGrabTransformers_92() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_IsProcessingGrabTransformers_92)); }
	inline bool get_m_IsProcessingGrabTransformers_92() const { return ___m_IsProcessingGrabTransformers_92; }
	inline bool* get_address_of_m_IsProcessingGrabTransformers_92() { return &___m_IsProcessingGrabTransformers_92; }
	inline void set_m_IsProcessingGrabTransformers_92(bool value)
	{
		___m_IsProcessingGrabTransformers_92 = value;
	}

	inline static int32_t get_offset_of_m_TargetPose_93() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_TargetPose_93)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_TargetPose_93() const { return ___m_TargetPose_93; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_TargetPose_93() { return &___m_TargetPose_93; }
	inline void set_m_TargetPose_93(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_TargetPose_93 = value;
	}

	inline static int32_t get_offset_of_m_TargetLocalScale_94() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_TargetLocalScale_94)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_TargetLocalScale_94() const { return ___m_TargetLocalScale_94; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_TargetLocalScale_94() { return &___m_TargetLocalScale_94; }
	inline void set_m_TargetLocalScale_94(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_TargetLocalScale_94 = value;
	}

	inline static int32_t get_offset_of_m_CurrentAttachEaseTime_95() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_CurrentAttachEaseTime_95)); }
	inline float get_m_CurrentAttachEaseTime_95() const { return ___m_CurrentAttachEaseTime_95; }
	inline float* get_address_of_m_CurrentAttachEaseTime_95() { return &___m_CurrentAttachEaseTime_95; }
	inline void set_m_CurrentAttachEaseTime_95(float value)
	{
		___m_CurrentAttachEaseTime_95 = value;
	}

	inline static int32_t get_offset_of_m_CurrentMovementType_96() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_CurrentMovementType_96)); }
	inline int32_t get_m_CurrentMovementType_96() const { return ___m_CurrentMovementType_96; }
	inline int32_t* get_address_of_m_CurrentMovementType_96() { return &___m_CurrentMovementType_96; }
	inline void set_m_CurrentMovementType_96(int32_t value)
	{
		___m_CurrentMovementType_96 = value;
	}

	inline static int32_t get_offset_of_m_DetachInLateUpdate_97() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_DetachInLateUpdate_97)); }
	inline bool get_m_DetachInLateUpdate_97() const { return ___m_DetachInLateUpdate_97; }
	inline bool* get_address_of_m_DetachInLateUpdate_97() { return &___m_DetachInLateUpdate_97; }
	inline void set_m_DetachInLateUpdate_97(bool value)
	{
		___m_DetachInLateUpdate_97 = value;
	}

	inline static int32_t get_offset_of_m_DetachVelocity_98() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_DetachVelocity_98)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_DetachVelocity_98() const { return ___m_DetachVelocity_98; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_DetachVelocity_98() { return &___m_DetachVelocity_98; }
	inline void set_m_DetachVelocity_98(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_DetachVelocity_98 = value;
	}

	inline static int32_t get_offset_of_m_DetachAngularVelocity_99() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_DetachAngularVelocity_99)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_DetachAngularVelocity_99() const { return ___m_DetachAngularVelocity_99; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_DetachAngularVelocity_99() { return &___m_DetachAngularVelocity_99; }
	inline void set_m_DetachAngularVelocity_99(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_DetachAngularVelocity_99 = value;
	}

	inline static int32_t get_offset_of_m_ThrowSmoothingCurrentFrame_100() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ThrowSmoothingCurrentFrame_100)); }
	inline int32_t get_m_ThrowSmoothingCurrentFrame_100() const { return ___m_ThrowSmoothingCurrentFrame_100; }
	inline int32_t* get_address_of_m_ThrowSmoothingCurrentFrame_100() { return &___m_ThrowSmoothingCurrentFrame_100; }
	inline void set_m_ThrowSmoothingCurrentFrame_100(int32_t value)
	{
		___m_ThrowSmoothingCurrentFrame_100 = value;
	}

	inline static int32_t get_offset_of_m_ThrowSmoothingFrameTimes_101() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ThrowSmoothingFrameTimes_101)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_ThrowSmoothingFrameTimes_101() const { return ___m_ThrowSmoothingFrameTimes_101; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_ThrowSmoothingFrameTimes_101() { return &___m_ThrowSmoothingFrameTimes_101; }
	inline void set_m_ThrowSmoothingFrameTimes_101(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_ThrowSmoothingFrameTimes_101 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThrowSmoothingFrameTimes_101), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThrowSmoothingVelocityFrames_102() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ThrowSmoothingVelocityFrames_102)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_ThrowSmoothingVelocityFrames_102() const { return ___m_ThrowSmoothingVelocityFrames_102; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_ThrowSmoothingVelocityFrames_102() { return &___m_ThrowSmoothingVelocityFrames_102; }
	inline void set_m_ThrowSmoothingVelocityFrames_102(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_ThrowSmoothingVelocityFrames_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThrowSmoothingVelocityFrames_102), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThrowSmoothingAngularVelocityFrames_103() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ThrowSmoothingAngularVelocityFrames_103)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_ThrowSmoothingAngularVelocityFrames_103() const { return ___m_ThrowSmoothingAngularVelocityFrames_103; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_ThrowSmoothingAngularVelocityFrames_103() { return &___m_ThrowSmoothingAngularVelocityFrames_103; }
	inline void set_m_ThrowSmoothingAngularVelocityFrames_103(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_ThrowSmoothingAngularVelocityFrames_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThrowSmoothingAngularVelocityFrames_103), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThrowSmoothingFirstUpdate_104() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_ThrowSmoothingFirstUpdate_104)); }
	inline bool get_m_ThrowSmoothingFirstUpdate_104() const { return ___m_ThrowSmoothingFirstUpdate_104; }
	inline bool* get_address_of_m_ThrowSmoothingFirstUpdate_104() { return &___m_ThrowSmoothingFirstUpdate_104; }
	inline void set_m_ThrowSmoothingFirstUpdate_104(bool value)
	{
		___m_ThrowSmoothingFirstUpdate_104 = value;
	}

	inline static int32_t get_offset_of_m_LastThrowReferencePose_105() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_LastThrowReferencePose_105)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LastThrowReferencePose_105() const { return ___m_LastThrowReferencePose_105; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LastThrowReferencePose_105() { return &___m_LastThrowReferencePose_105; }
	inline void set_m_LastThrowReferencePose_105(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LastThrowReferencePose_105 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_106() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_Rigidbody_106)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_106() const { return ___m_Rigidbody_106; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_106() { return &___m_Rigidbody_106; }
	inline void set_m_Rigidbody_106(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_106), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasKinematic_107() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_WasKinematic_107)); }
	inline bool get_m_WasKinematic_107() const { return ___m_WasKinematic_107; }
	inline bool* get_address_of_m_WasKinematic_107() { return &___m_WasKinematic_107; }
	inline void set_m_WasKinematic_107(bool value)
	{
		___m_WasKinematic_107 = value;
	}

	inline static int32_t get_offset_of_m_UsedGravity_108() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_UsedGravity_108)); }
	inline bool get_m_UsedGravity_108() const { return ___m_UsedGravity_108; }
	inline bool* get_address_of_m_UsedGravity_108() { return &___m_UsedGravity_108; }
	inline void set_m_UsedGravity_108(bool value)
	{
		___m_UsedGravity_108 = value;
	}

	inline static int32_t get_offset_of_m_OldDrag_109() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_OldDrag_109)); }
	inline float get_m_OldDrag_109() const { return ___m_OldDrag_109; }
	inline float* get_address_of_m_OldDrag_109() { return &___m_OldDrag_109; }
	inline void set_m_OldDrag_109(float value)
	{
		___m_OldDrag_109 = value;
	}

	inline static int32_t get_offset_of_m_OldAngularDrag_110() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_OldAngularDrag_110)); }
	inline float get_m_OldAngularDrag_110() const { return ___m_OldAngularDrag_110; }
	inline float* get_address_of_m_OldAngularDrag_110() { return &___m_OldAngularDrag_110; }
	inline void set_m_OldAngularDrag_110(float value)
	{
		___m_OldAngularDrag_110 = value;
	}

	inline static int32_t get_offset_of_m_OriginalSceneParent_111() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_OriginalSceneParent_111)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_OriginalSceneParent_111() const { return ___m_OriginalSceneParent_111; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_OriginalSceneParent_111() { return &___m_OriginalSceneParent_111; }
	inline void set_m_OriginalSceneParent_111(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_OriginalSceneParent_111 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalSceneParent_111), (void*)value);
	}

	inline static int32_t get_offset_of_m_TeleportationMonitor_112() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_TeleportationMonitor_112)); }
	inline TeleportationMonitor_t5F12F4D88C2F0DBAE989D9FDED4407D26039BE8F * get_m_TeleportationMonitor_112() const { return ___m_TeleportationMonitor_112; }
	inline TeleportationMonitor_t5F12F4D88C2F0DBAE989D9FDED4407D26039BE8F ** get_address_of_m_TeleportationMonitor_112() { return &___m_TeleportationMonitor_112; }
	inline void set_m_TeleportationMonitor_112(TeleportationMonitor_t5F12F4D88C2F0DBAE989D9FDED4407D26039BE8F * value)
	{
		___m_TeleportationMonitor_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TeleportationMonitor_112), (void*)value);
	}

	inline static int32_t get_offset_of_m_DynamicAttachTransforms_113() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3, ___m_DynamicAttachTransforms_113)); }
	inline Dictionary_2_t05799DEC333EA9E40070CAC69681C3555AE872A4 * get_m_DynamicAttachTransforms_113() const { return ___m_DynamicAttachTransforms_113; }
	inline Dictionary_2_t05799DEC333EA9E40070CAC69681C3555AE872A4 ** get_address_of_m_DynamicAttachTransforms_113() { return &___m_DynamicAttachTransforms_113; }
	inline void set_m_DynamicAttachTransforms_113(Dictionary_2_t05799DEC333EA9E40070CAC69681C3555AE872A4 * value)
	{
		___m_DynamicAttachTransforms_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DynamicAttachTransforms_113), (void*)value);
	}
};

struct XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3_StaticFields
{
public:
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::s_DynamicAttachTransformPool
	LinkedPool_1_tAAC8B89F1624D5EE4DC942336F322D96CBDC413E * ___s_DynamicAttachTransformPool_114;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::s_ProcessGrabTransformersMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_ProcessGrabTransformersMarker_115;

public:
	inline static int32_t get_offset_of_s_DynamicAttachTransformPool_114() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3_StaticFields, ___s_DynamicAttachTransformPool_114)); }
	inline LinkedPool_1_tAAC8B89F1624D5EE4DC942336F322D96CBDC413E * get_s_DynamicAttachTransformPool_114() const { return ___s_DynamicAttachTransformPool_114; }
	inline LinkedPool_1_tAAC8B89F1624D5EE4DC942336F322D96CBDC413E ** get_address_of_s_DynamicAttachTransformPool_114() { return &___s_DynamicAttachTransformPool_114; }
	inline void set_s_DynamicAttachTransformPool_114(LinkedPool_1_tAAC8B89F1624D5EE4DC942336F322D96CBDC413E * value)
	{
		___s_DynamicAttachTransformPool_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DynamicAttachTransformPool_114), (void*)value);
	}

	inline static int32_t get_offset_of_s_ProcessGrabTransformersMarker_115() { return static_cast<int32_t>(offsetof(XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3_StaticFields, ___s_ProcessGrabTransformersMarker_115)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_ProcessGrabTransformersMarker_115() const { return ___s_ProcessGrabTransformersMarker_115; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_ProcessGrabTransformersMarker_115() { return &___s_ProcessGrabTransformersMarker_115; }
	inline void set_s_ProcessGrabTransformersMarker_115(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_ProcessGrabTransformersMarker_115 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter
struct XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA  : public XRBaseTargetFilter_t001E08BCBD22D6BC11D71ADBE870533A84B5C31C
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::m_LinkedInteractors
	List_1_tCAFBFD76706B54DB653FF3DD6594D969F208A84E * ___m_LinkedInteractors_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator> UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::m_Evaluators
	List_1_t5985C00E36658C979E2F5934B089892020486C67 * ___m_Evaluators_8;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::m_IsAwake
	bool ___m_IsAwake_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::<isProcessing>k__BackingField
	bool ___U3CisProcessingU3Ek__BackingField_10;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::interactorLinked
	Action_1_t544353DE1FB96A48C713EC84EE19E4320AA92A99 * ___interactorLinked_11;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::interactorUnlinked
	Action_1_t544353DE1FB96A48C713EC84EE19E4320AA92A99 * ___interactorUnlinked_12;

public:
	inline static int32_t get_offset_of_m_LinkedInteractors_7() { return static_cast<int32_t>(offsetof(XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA, ___m_LinkedInteractors_7)); }
	inline List_1_tCAFBFD76706B54DB653FF3DD6594D969F208A84E * get_m_LinkedInteractors_7() const { return ___m_LinkedInteractors_7; }
	inline List_1_tCAFBFD76706B54DB653FF3DD6594D969F208A84E ** get_address_of_m_LinkedInteractors_7() { return &___m_LinkedInteractors_7; }
	inline void set_m_LinkedInteractors_7(List_1_tCAFBFD76706B54DB653FF3DD6594D969F208A84E * value)
	{
		___m_LinkedInteractors_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LinkedInteractors_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Evaluators_8() { return static_cast<int32_t>(offsetof(XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA, ___m_Evaluators_8)); }
	inline List_1_t5985C00E36658C979E2F5934B089892020486C67 * get_m_Evaluators_8() const { return ___m_Evaluators_8; }
	inline List_1_t5985C00E36658C979E2F5934B089892020486C67 ** get_address_of_m_Evaluators_8() { return &___m_Evaluators_8; }
	inline void set_m_Evaluators_8(List_1_t5985C00E36658C979E2F5934B089892020486C67 * value)
	{
		___m_Evaluators_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Evaluators_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsAwake_9() { return static_cast<int32_t>(offsetof(XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA, ___m_IsAwake_9)); }
	inline bool get_m_IsAwake_9() const { return ___m_IsAwake_9; }
	inline bool* get_address_of_m_IsAwake_9() { return &___m_IsAwake_9; }
	inline void set_m_IsAwake_9(bool value)
	{
		___m_IsAwake_9 = value;
	}

	inline static int32_t get_offset_of_U3CisProcessingU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA, ___U3CisProcessingU3Ek__BackingField_10)); }
	inline bool get_U3CisProcessingU3Ek__BackingField_10() const { return ___U3CisProcessingU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CisProcessingU3Ek__BackingField_10() { return &___U3CisProcessingU3Ek__BackingField_10; }
	inline void set_U3CisProcessingU3Ek__BackingField_10(bool value)
	{
		___U3CisProcessingU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_interactorLinked_11() { return static_cast<int32_t>(offsetof(XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA, ___interactorLinked_11)); }
	inline Action_1_t544353DE1FB96A48C713EC84EE19E4320AA92A99 * get_interactorLinked_11() const { return ___interactorLinked_11; }
	inline Action_1_t544353DE1FB96A48C713EC84EE19E4320AA92A99 ** get_address_of_interactorLinked_11() { return &___interactorLinked_11; }
	inline void set_interactorLinked_11(Action_1_t544353DE1FB96A48C713EC84EE19E4320AA92A99 * value)
	{
		___interactorLinked_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactorLinked_11), (void*)value);
	}

	inline static int32_t get_offset_of_interactorUnlinked_12() { return static_cast<int32_t>(offsetof(XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA, ___interactorUnlinked_12)); }
	inline Action_1_t544353DE1FB96A48C713EC84EE19E4320AA92A99 * get_interactorUnlinked_12() const { return ___interactorUnlinked_12; }
	inline Action_1_t544353DE1FB96A48C713EC84EE19E4320AA92A99 ** get_address_of_interactorUnlinked_12() { return &___interactorUnlinked_12; }
	inline void set_interactorUnlinked_12(Action_1_t544353DE1FB96A48C713EC84EE19E4320AA92A99 * value)
	{
		___interactorUnlinked_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactorUnlinked_12), (void*)value);
	}
};

struct XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA_StaticFields
{
public:
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator>> UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::s_EvaluatorListPool
	LinkedPool_1_tFAA02350129881E86F2CDDCCAA2C5FF4B0BFE8AB * ___s_EvaluatorListPool_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::s_InteractableFinalScoreMap
	Dictionary_2_t86132C0F8B31101EE4D1A23B71484DB7D3AD6F35 * ___s_InteractableFinalScoreMap_5;
	// System.Comparison`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::s_InteractableScoreComparison
	Comparison_1_t816BE556819540BA6AFE8FBB13F995AEED590F30 * ___s_InteractableScoreComparison_6;

public:
	inline static int32_t get_offset_of_s_EvaluatorListPool_4() { return static_cast<int32_t>(offsetof(XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA_StaticFields, ___s_EvaluatorListPool_4)); }
	inline LinkedPool_1_tFAA02350129881E86F2CDDCCAA2C5FF4B0BFE8AB * get_s_EvaluatorListPool_4() const { return ___s_EvaluatorListPool_4; }
	inline LinkedPool_1_tFAA02350129881E86F2CDDCCAA2C5FF4B0BFE8AB ** get_address_of_s_EvaluatorListPool_4() { return &___s_EvaluatorListPool_4; }
	inline void set_s_EvaluatorListPool_4(LinkedPool_1_tFAA02350129881E86F2CDDCCAA2C5FF4B0BFE8AB * value)
	{
		___s_EvaluatorListPool_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EvaluatorListPool_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InteractableFinalScoreMap_5() { return static_cast<int32_t>(offsetof(XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA_StaticFields, ___s_InteractableFinalScoreMap_5)); }
	inline Dictionary_2_t86132C0F8B31101EE4D1A23B71484DB7D3AD6F35 * get_s_InteractableFinalScoreMap_5() const { return ___s_InteractableFinalScoreMap_5; }
	inline Dictionary_2_t86132C0F8B31101EE4D1A23B71484DB7D3AD6F35 ** get_address_of_s_InteractableFinalScoreMap_5() { return &___s_InteractableFinalScoreMap_5; }
	inline void set_s_InteractableFinalScoreMap_5(Dictionary_2_t86132C0F8B31101EE4D1A23B71484DB7D3AD6F35 * value)
	{
		___s_InteractableFinalScoreMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InteractableFinalScoreMap_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_InteractableScoreComparison_6() { return static_cast<int32_t>(offsetof(XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA_StaticFields, ___s_InteractableScoreComparison_6)); }
	inline Comparison_1_t816BE556819540BA6AFE8FBB13F995AEED590F30 * get_s_InteractableScoreComparison_6() const { return ___s_InteractableScoreComparison_6; }
	inline Comparison_1_t816BE556819540BA6AFE8FBB13F995AEED590F30 ** get_address_of_s_InteractableScoreComparison_6() { return &___s_InteractableScoreComparison_6; }
	inline void set_s_InteractableScoreComparison_6(Comparison_1_t816BE556819540BA6AFE8FBB13F995AEED590F30 * value)
	{
		___s_InteractableScoreComparison_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InteractableScoreComparison_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * m_Items[1];

public:
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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


// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Object>::Append(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InlinedArray_1_Append_m195F7A15918429EE73ACADA6B4C0F9294039B75F_gshared (InlinedArray_1_t72D8291C9FDC5DF7FE2F7468469720797A7CA722 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,System.Single>(TProcessor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_gshared_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,UnityEngine.Vector2>(TProcessor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_gshared_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5_gshared (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A_gshared (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94_gshared (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA_gshared (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2_gshared (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E_gshared (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3_gshared (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE_gshared (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165_gshared (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69_gshared (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517_gshared (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931_gshared (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9E74E9D949738C4D713E2CBBB913F1802FC81EC5 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::Remove(!0)
inline bool Dictionary_2_Remove_m5937D6874DDC30F39BB9C214C475213227C16F22 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::AddEvaluator(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00 * XRTargetFilter_AddEvaluator_m1165D8D5F7ED201AC41DDE88B7AF0BDF8CA039D8 (XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA * __this, Type_t * ___evaluatorType0, const RuntimeMethod* method);
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::GetEvaluator(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00 * XRTargetFilter_GetEvaluator_mCED063CE537E42616696828765EF949FAD6309AE (XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D (Type_t * ___t0, const RuntimeMethod* method);
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703 (intptr_t ___array0, const RuntimeMethod* method);
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF (intptr_t ___array0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8 (intptr_t ___array0, const RuntimeMethod* method);
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D (intptr_t ___array0, const RuntimeMethod* method);
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD (intptr_t ___array0, const RuntimeMethod* method);
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA (intptr_t ___array0, const RuntimeMethod* method);
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D (intptr_t ___array0, const RuntimeMethod* method);
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8 (intptr_t ___array0, const RuntimeMethod* method);
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305 (intptr_t ___array0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56 (intptr_t ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8 (intptr_t ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39 (intptr_t ___localref0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, intptr_t ___jobject0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputExtensions::IsInProgress(UnityEngine.InputSystem.InputActionPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520 (int32_t ___phase0, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_bindingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_controlIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
inline float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::ThrowIfRebindInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_mB2F2D1ECFCC24D57DC8027C0EF426DD47C417570 (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * RebindingOperation_WithExpectedControlType_m4E9CECE0DF038E90E3B73B930631DAECF3303CA6 (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m9DA9E1130E31D2D24B5C31EFE01E9D148D60C46A (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  TypeTable_FindNameForType_mC42C22FB1DD7AAFB1253F178397570182422D7FC (TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Utilities.InternedString::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_m9D6CC79675BF2889F61E20F7D5AB05BABB3AA4C2 (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::op_Implicit(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m2A5DA30CC7E75E65560A7A3C790644F1D191C800 (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___str0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_m064BA21DC5FD3B43EAF7B997A398D73574582A5E (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, String_t* ___interaction0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
inline BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  (*) (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *, const RuntimeMethod*))BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_m4132AC6063E201139EF430A3BCC2675EBDD9C37F (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, String_t* ___processor0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
inline BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9 (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  (*) (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *, const RuntimeMethod*))BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_gshared)(__this, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::TryFindLayoutForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  Collection_TryFindLayoutForType_mFCC2016FF39C1851AF868A20F5192AE0543AB96B (Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 * __this, Type_t * ___layoutType0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_m5492402BB76228A8640E86DC193EC91DBDF1DD43 (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76 (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_m0B656A7C061C7754B5E2415834155849A82060BD (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3 (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_mD5C45262A99D15301860F6498F445A229EA66B7D (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73 (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::get_control()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>::Append(TValue)
inline int32_t InlinedArray_1_Append_mEBFD1065C9722EEC4756FB770F5F274DA481234B (InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 * __this, InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *, InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E *, const RuntimeMethod*))InlinedArray_1_Append_m195F7A15918429EE73ACADA6B4C0F9294039B75F_gshared)(__this, ___value0, method);
}
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,System.Single>(TProcessor)
inline ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	return ((  ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  (*) (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *, RuntimeObject *, const RuntimeMethod*))ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_gshared_inline)(__this, ___processor0, method);
}
// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>::Append(TValue)
inline int32_t InlinedArray_1_Append_m30E33D84F5B20A6A532E2B2DF48D732DC11C410D (InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C * __this, InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 * ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *, InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 *, const RuntimeMethod*))InlinedArray_1_Append_m195F7A15918429EE73ACADA6B4C0F9294039B75F_gshared)(__this, ___value0, method);
}
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,UnityEngine.Vector2>(TProcessor)
inline ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	return ((  ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  (*) (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *, RuntimeObject *, const RuntimeMethod*))ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_gshared_inline)(__this, ___processor0, method);
}
// System.Void UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::set_type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m7C7D8F865861F0FA90DDF8383211C44DF9AF05A3_inline (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction::Invoke(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* GetGestureEventsPtrFunction_Invoke_m9183A48EEB89837ED13990399767C664E943AA4E (GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * __this, int32_t* ___gesturesLength0, int32_t* ___elementSize1, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5 (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::Dispose()
inline void NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *, const RuntimeMethod*))NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94 (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::Dispose()
inline void NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2 (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *, const RuntimeMethod*))NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3 (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::Dispose()
inline void NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *, const RuntimeMethod*))NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165 (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69 (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Dispose()
inline void NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517 (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *, const RuntimeMethod*))NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931 (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mA6478546A0D6B20061E1DAF0862A895CF5D8C044_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mB75E0A57B03F72BC1744169D7F4F8CF73AD98915_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m8C51761306DE70EA0C6A7660F9128F7E981F6927_gshared (void* ___destination0, int32_t ___index1, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = ___value2;
		*(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt64>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m108F557D18F2F5C93557B2FED6ABADA10061283C_gshared (void* ___destination0, int32_t ___index1, uint64_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = ___value2;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisWindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_mA41CE6D8C5FF8C4C189E92361F961F8D74C4D121_gshared (void* ___destination0, int32_t ___index1, WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C );
		WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C  L_3 = ___value2;
		*(WindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisWindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_mE5F52EF637BA0361A8FF7CF073DD3C7CD7D07780_gshared (void* ___destination0, int32_t ___index1, WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD );
		WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD  L_3 = ___value2;
		*(WindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisWindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_mBDAA09F5CD8AD081E0A16BC105AED838D32D5470_gshared (void* ___destination0, int32_t ___index1, WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 );
		WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9  L_3 = ___value2;
		*(WindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisWindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_mF7F03F80F00BAF04D90D5BE90CED1A0C517A9D5F_gshared (void* ___destination0, int32_t ___index1, WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 );
		WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90  L_3 = ___value2;
		*(WindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m08AB8CBC42639026E724CDF29FC91B40F7BBAD1A_gshared (void* ___destination0, int32_t ___index1, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C );
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_3 = ___value2;
		*(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m34EC4B420E3B86C8B06957C02A3FDD87D674E50E_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m3392CE290ADB37963BB566664A63096AF6DABAE4_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
// T UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::GetOrAddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRGrabInteractable_GetOrAddComponent_TisRuntimeObject_mBFB7D303ED1819083B10C69211F735EC71713CAA_gshared (XRGrabInteractable_t8BA2F44BEBBAE7E446AB8538ED2AD5B012EFE2F3 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// return TryGetComponent<T>(out var component) ? component : gameObject.AddComponent<T>();
		NullCheck((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)__this);
		bool L_0;
		L_0 = ((  bool (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)__this, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		NullCheck((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)__this);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_1);
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_2;
	}

IL_0016:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::GetOfType<System.Object,System.Object>(System.Collections.Generic.List`1<TSource>,System.Collections.Generic.List`1<TDestination>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionManager_GetOfType_TisRuntimeObject_TisRuntimeObject_m52D0DE33E8E9515A8EC44AC929DB8C142AD40CD9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// destination.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___destination1;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// if (source.Count == 0)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___source0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// foreach (var item in source)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___source0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 )L_4;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0018:
		{
			// foreach (var item in source)
			RuntimeObject * L_5;
			L_5 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (RuntimeObject *)L_5;
			// if (item is TDestination destinationItem)
			RuntimeObject * L_6 = V_1;
			if (!((RuntimeObject *)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 5))))
			{
				goto IL_0045;
			}
		}

IL_002d:
		{
			RuntimeObject * L_7 = V_1;
			V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 5))), IL2CPP_RGCTX_DATA(method->rgctx_data, 5)));
			// destination.Add(destinationItem);
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_8 = ___destination1;
			RuntimeObject * L_9 = V_2;
			NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_8);
			((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		}

IL_0045:
		{
			// foreach (var item in source)
			bool L_10;
			L_10 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7));
			if (L_10)
			{
				goto IL_0018;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Il2CppMetadataObject L_11(IL2CPP_RGCTX_DATA(method->rgctx_data, 8));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__88 = il2cpp_codegen_get_interface_invoke_data(0, (&L_11), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__88.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_0))-1, /*hidden argument*/il2cpp_virtual_invoke_data__88.method);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateIntegratedSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateIntegratedSubsystem_TisRuntimeObject_TisRuntimeObject_m672A1EDBF16B4851FBD595CA8F87AFD098F5FD86_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		NullCheck((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this);
		((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateStandaloneSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateStandaloneSubsystem_TisRuntimeObject_TisRuntimeObject_m62F75FC416AB1701E6DEBDC00F95AB1AA2A9CA95_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		NullCheck((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this);
		((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (descriptors == null)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("descriptors");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemManager.GetSubsystemDescriptors<TDescriptor>(descriptors);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = ___descriptors0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// if (descriptors.Count > 0)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___descriptors0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// foreach (var descriptor in descriptors)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___descriptors0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_6;
		L_6 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 )L_6;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_0026:
		{
			// foreach (var descriptor in descriptors)
			RuntimeObject * L_7;
			L_7 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (RuntimeObject *)L_7;
			// ISubsystem subsys = null;
			V_2 = (RuntimeObject*)NULL;
			// if (String.Compare(descriptor.id, id, true) == 0)
			NullCheck((RuntimeObject*)(V_1));
			String_t* L_8;
			L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
			String_t* L_9 = ___id1;
			int32_t L_10;
			L_10 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62((String_t*)L_8, (String_t*)L_9, (bool)1, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0054;
			}
		}

IL_0046:
		{
			// subsys = descriptor.Create();
			NullCheck((RuntimeObject*)(V_1));
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
			V_2 = (RuntimeObject*)L_11;
		}

IL_0054:
		{
			// if (subsys != null)
			RuntimeObject* L_12 = V_2;
			if (!L_12)
			{
				goto IL_006f;
			}
		}

IL_0057:
		{
			// m_SubsystemInstanceMap[typeof(TSubsystem)] = subsys;
			Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_13 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 5)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_15;
			L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
			RuntimeObject* L_16 = V_2;
			NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_13);
			Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_13, (Type_t *)L_15, (RuntimeObject*)L_16, /*hidden argument*/Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x88, FINALLY_007a);
		}

IL_006f:
		{
			// foreach (var descriptor in descriptors)
			bool L_17;
			L_17 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
			if (L_17)
			{
				goto IL_0026;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x88, FINALLY_007a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{ // begin finally (depth: 1)
		Il2CppMetadataObject L_18(IL2CPP_RGCTX_DATA(method->rgctx_data, 7));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__130 = il2cpp_codegen_get_interface_invoke_data(0, (&L_18), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__130.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_0))-1, /*hidden argument*/il2cpp_virtual_invoke_data__130.method);
		IL2CPP_END_FINALLY(122)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x88, IL_0088)
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9E74E9D949738C4D713E2CBBB913F1802FC81EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5937D6874DDC30F39BB9C214C475213227C16F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// var subsystemType = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		V_1 = (Type_t *)L_3;
		// if (m_SubsystemInstanceMap.ContainsKey(subsystemType))
		Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_4 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
		Type_t * L_5 = V_1;
		NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m9E74E9D949738C4D713E2CBBB913F1802FC81EC5((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_4, (Type_t *)L_5, /*hidden argument*/Dictionary_2_ContainsKey_m9E74E9D949738C4D713E2CBBB913F1802FC81EC5_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// m_SubsystemInstanceMap.Remove(subsystemType);
		Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_7 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
		Type_t * L_8 = V_1;
		NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m5937D6874DDC30F39BB9C214C475213227C16F22((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_7, (Type_t *)L_8, /*hidden argument*/Dictionary_2_Remove_m5937D6874DDC30F39BB9C214C475213227C16F22_RuntimeMethod_var);
	}

IL_0035:
	{
		// subsystem.Destroy();
		RuntimeObject * L_10 = V_0;
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
	}

IL_0040:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_mBD860AFFF9C98273DF11CF62C6A588FBA4429779_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_2 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
		Type_t * L_3 = V_0;
		NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_2, (Type_t *)L_3, (RuntimeObject**)(RuntimeObject**)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_5 = V_1;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Start();
		RuntimeObject * L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Stop();
		RuntimeObject * L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_m85FCC9024CB82ED7C4E28EFC4DE4F14484ADAB8F_gshared (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// return activeLoader as T;
		NullCheck((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)__this);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0;
		L_0 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)__this, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}
}
// T UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::AddEvaluator<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRTargetFilter_AddEvaluator_TisRuntimeObject_mE69981DAFE77CEBD59929805917171B0854195A0_gshared (XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AddEvaluator(typeof(T)) as T;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA *)__this);
		XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00 * L_2;
		L_2 = XRTargetFilter_AddEvaluator_m1165D8D5F7ED201AC41DDE88B7AF0BDF8CA039D8((XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter::GetEvaluator<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRTargetFilter_GetEvaluator_TisRuntimeObject_mCE52174A1BE39F882D8A4992087ECE02C2EE5D96_gshared (XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (T)(object)GetEvaluator(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA *)__this);
		XRTargetEvaluator_tBA11A0CA78F0DB2C6EFB21A1E1660CFD1965BB00 * L_2;
		L_2 = XRTargetFilter_GetEvaluator_mCED063CE537E42616696828765EF949FAD6309AE((XRTargetFilter_t479031C7B36563130B522FF6A50D0960140605AA *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Boolean>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m20E7EDFF477647AD2AAEA5C01F2F96F086673299_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(98 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m20E7EDFF477647AD2AAEA5C01F2F96F086673299_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(bool));
		bool L_107 = V_24;
		V_3 = (bool)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		bool L_108 = V_3;
		return (bool)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Char>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mF3A18A8F874B12CB2B14263BF4574ABB14FBCF1E_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppChar V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Il2CppChar V_24 = 0x0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(98 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mF3A18A8F874B12CB2B14263BF4574ABB14FBCF1E_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(Il2CppChar));
		Il2CppChar L_107 = V_24;
		V_3 = (Il2CppChar)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		Il2CppChar L_108 = V_3;
		return (Il2CppChar)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	double V_3 = 0.0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	double V_24 = 0.0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(98 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(double));
		double L_107 = V_24;
		V_3 = (double)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		double L_108 = V_3;
		return (double)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int16_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int16_t V_24 = 0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(98 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int16_t));
		int16_t L_107 = V_24;
		V_3 = (int16_t)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int16_t L_108 = V_3;
		return (int16_t)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int32_t V_24 = 0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(98 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int32_t));
		int32_t L_107 = V_24;
		V_3 = (int32_t)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int32_t L_108 = V_3;
		return (int32_t)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int64_t V_24 = 0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(98 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int64_t));
		int64_t L_107 = V_24;
		V_3 = (int64_t)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int64_t L_108 = V_3;
		return (int64_t)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	RuntimeObject * V_24 = NULL;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(98 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(RuntimeObject *));
		RuntimeObject * L_107 = V_24;
		V_3 = (RuntimeObject *)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		RuntimeObject * L_108 = V_3;
		return (RuntimeObject *)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int8_t V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int8_t V_24 = 0x0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(98 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int8_t));
		int8_t L_107 = V_24;
		V_3 = (int8_t)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int8_t L_108 = V_3;
		return (int8_t)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	float V_24 = 0.0f;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(98 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(float));
		float L_107 = V_24;
		V_3 = (float)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		float L_108 = V_3;
		return (float)L_108;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mA6A3AB087792C0011A244BF219EB013D009592B2_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mF091800677E029891EFE21CF853FAF7A59EAA5EB_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m2AC2F0071B32B0242BD624B60ED4DF0989C8FA51_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m75B0CDC857E28490BBB6B93E24923ECA7D896754_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m74985872D44523341B02768E3167C022A0BB74C0_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m94135D9C37BCAFBC5C814AB2EB52A4A2B46A92A4_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_mE923D006BD57E879AAE0EF692E8D0045CF7E0748_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m33DBC436D5D48BD8B087CC4D6BDC0FF2B658D402_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m056304D259B1FDB717A6CEE1A2262C45CE33DEBC_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBD54DD62EF90673A4806A2CEFA031CFE3C998274_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB636DED19D226BEDFC17AE941CAD220377CA0584_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mD09A1E6993B600273E5DA6DD5A610B0A45E10035_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m53EA03473D7F4C2525577E0D9E0999F78F5E7F7B_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m83D9133FDC0884534CE97F82ED983AC5AE9465CA_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m413740B31E01EB314EE0D3A2B1CF91DAD24A9659_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_mC6BEA8EDE34CA523E26ACA072A4E246C7FF6DB25_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mA275B45366DA25AFB161A011BC8F1888F54B0BF2_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m82A85440F4B906A83640CA6939D1BC0D1BDEB2C3_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_3 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3, (int32_t)L_4, (int32_t)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_6;
	}

IL_0036:
	{
		// return value;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = V_0;
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_7;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_3 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3);
		float L_6;
		L_6 = ((  float (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3, (int32_t)L_4, (int32_t)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (float)L_6;
	}

IL_0036:
	{
		// return value;
		float L_7 = V_0;
		return (float)L_7;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_3 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3, (int32_t)L_4, (int32_t)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_6;
	}

IL_0036:
	{
		// return value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_7;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_3 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3, (int32_t)L_4, (int32_t)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6;
	}

IL_0036:
	{
		// return value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_7;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * RebindingOperation_WithExpectedControlType_TisRuntimeObject_mBA6BE8CEC8B7EB2CBA1ECA0816AC71C921A76EE6_gshared (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThrowIfRebindInProgress();
		NullCheck((RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)__this);
		RebindingOperation_ThrowIfRebindInProgress_mB2F2D1ECFCC24D57DC8027C0EF426DD47C417570((RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)__this, /*hidden argument*/NULL);
		// return WithExpectedControlType(typeof(TControl));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)__this);
		RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m4E9CECE0DF038E90E3B73B930631DAECF3303CA6((RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)L_2;
	}
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!valid)
		bool L_0;
		L_0 = BindingSyntax_get_valid_m9DA9E1130E31D2D24B5C31EFE01E9D148D60C46A((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var interactionName = InputProcessor.s_Processors.FindNameForType(typeof(TInteraction));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_4;
		L_4 = TypeTable_FindNameForType_mC42C22FB1DD7AAFB1253F178397570182422D7FC((TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(((InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_3, /*hidden argument*/NULL);
		V_0 = (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_4;
		// if (interactionName.IsEmpty())
		bool L_5;
		L_5 = InternedString_IsEmpty_m9D6CC79675BF2889F61E20F7D5AB05BABB3AA4C2((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TInteraction)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_9 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_RuntimeMethod_var)));
	}

IL_004b:
	{
		// return WithInteraction(interactionName);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m2A5DA30CC7E75E65560A7A3C790644F1D191C800((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_10, /*hidden argument*/NULL);
		BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  L_12;
		L_12 = BindingSyntax_WithInteraction_m064BA21DC5FD3B43EAF7B997A398D73574582A5E((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, (String_t*)L_11, /*hidden argument*/NULL);
		return (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 )L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * _thisAdjusted = reinterpret_cast<BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *>(__this + _offset);
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!valid)
		bool L_0;
		L_0 = BindingSyntax_get_valid_m9DA9E1130E31D2D24B5C31EFE01E9D148D60C46A((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var processorName = InputProcessor.s_Processors.FindNameForType(typeof(TProcessor));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_4;
		L_4 = TypeTable_FindNameForType_mC42C22FB1DD7AAFB1253F178397570182422D7FC((TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(((InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_3, /*hidden argument*/NULL);
		V_0 = (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_4;
		// if (processorName.IsEmpty())
		bool L_5;
		L_5 = InternedString_IsEmpty_m9D6CC79675BF2889F61E20F7D5AB05BABB3AA4C2((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TProcessor)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_9 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_RuntimeMethod_var)));
	}

IL_004b:
	{
		// return WithProcessor(processorName);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m2A5DA30CC7E75E65560A7A3C790644F1D191C800((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_10, /*hidden argument*/NULL);
		BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  L_12;
		L_12 = BindingSyntax_WithProcessor_m4132AC6063E201139EF430A3BCC2675EBDD9C37F((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, (String_t*)L_11, /*hidden argument*/NULL);
		return (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 )L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * _thisAdjusted = reinterpret_cast<BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *>(__this + _offset);
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var layoutName = InputControlLayout.s_Layouts.TryFindLayoutForType(typeof(TDevice)).ToString();
		IL2CPP_RUNTIME_CLASS_INIT(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_2;
		L_2 = Collection_TryFindLayoutForType_mFCC2016FF39C1851AF868A20F5192AE0543AB96B((Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 *)(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 *)(((InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var))->get_address_of_s_Layouts_15()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_1 = (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_m5492402BB76228A8640E86DC193EC91DBDF1DD43((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(&V_1), /*hidden argument*/NULL);
		V_0 = (String_t*)L_3;
		// if (string.IsNullOrEmpty(layoutName))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C((String_t*)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// layoutName = typeof(TDevice).Name;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_7);
		V_0 = (String_t*)L_8;
	}

IL_003b:
	{
		// return $"<{layoutName}>";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, (String_t*)L_9, (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		return (String_t*)L_10;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_m0B656A7C061C7754B5E2415834155849A82060BD((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mD5C45262A99D15301860F6498F445A229EA66B7D((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_m0B656A7C061C7754B5E2415834155849A82060BD((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mD5C45262A99D15301860F6498F445A229EA66B7D((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,System.Single>(TProcessor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_gshared (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	{
		// ((InputControl<TValue>)control).m_ProcessorStack.Append(processor);
		InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_0;
		L_0 = ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline((ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this, /*hidden argument*/NULL);
		NullCheck(((InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 * L_1 = (InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)((InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_address_of_m_ProcessorStack_21();
		RuntimeObject * L_2 = ___processor0;
		int32_t L_3;
		L_3 = InlinedArray_1_Append_mEBFD1065C9722EEC4756FB770F5F274DA481234B((InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)L_1, (InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return this;
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_4 = (*(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this);
		return (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_4;
	}
}
IL2CPP_EXTERN_C  ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * _thisAdjusted = reinterpret_cast<ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *>(__this + _offset);
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  _returnValue;
	_returnValue = ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_inline(_thisAdjusted, ___processor0, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,UnityEngine.Vector2>(TProcessor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_gshared (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	{
		// ((InputControl<TValue>)control).m_ProcessorStack.Append(processor);
		InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_0;
		L_0 = ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline((ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this, /*hidden argument*/NULL);
		NullCheck(((InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0 *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C * L_1 = (InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)((InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0 *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_address_of_m_ProcessorStack_21();
		RuntimeObject * L_2 = ___processor0;
		int32_t L_3;
		L_3 = InlinedArray_1_Append_m30E33D84F5B20A6A532E2B2DF48D732DC11C410D((InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)L_1, (InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return this;
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_4 = (*(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this);
		return (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_4;
	}
}
IL2CPP_EXTERN_C  ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * _thisAdjusted = reinterpret_cast<ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *>(__this + _offset);
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  _returnValue;
	_returnValue = ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_inline(_thisAdjusted, ___processor0, method);
	return _returnValue;
}
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::WithType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * Builder_WithType_TisRuntimeObject_mF3C7336CC3DDF12C9B5B2CBACE3B5B5BBEB0498D_gshared (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 *)__this);
		Builder_set_type_m7C7D8F865861F0FA90DDF8383211C44DF9AF05A3_inline((Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// return this;
		return (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 *)__this;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRHoldGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRHoldGestureEvent_tB7F4D8EC255D30FC4F840E070817CDF731B0320C_m6CFFF813ED796B60547294878BCE905DB8C04730_gshared (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * ___gestureEvents1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// void* gestureEventsPtr = getGestureEventsPtrFunction(out gestureEventsLength, out elementSize);
		GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * L_0 = ___getGestureEventsPtrFunction0;
		NullCheck((GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)L_0);
		void* L_1;
		L_1 = GetGestureEventsPtrFunction_Invoke_m9183A48EEB89837ED13990399767C664E943AA4E((GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)L_0, (int32_t*)(int32_t*)(&V_0), (int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (void*)L_1;
		// if (gestureEventsPtr == null || gestureEventsLength == 0)
		void* L_2 = V_2;
		if ((((intptr_t)L_2) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0039;
		}
	}

IL_0013:
	{
		// if (gestureEvents.Length > 0)
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_4 = ___gestureEvents1;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_4)->___m_Length_1);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		// if (gestureEvents.IsCreated)
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_6 = ___gestureEvents1;
		bool L_7;
		L_7 = NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5((NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// gestureEvents.Dispose();
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_8 = ___gestureEvents1;
		NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A((NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_002a:
	{
		// gestureEvents = new NativeArray<T>(0, Allocator.Persistent);
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_9 = ___gestureEvents1;
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94((&L_10), (int32_t)0, (int32_t)4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_9 = L_10;
		// }
		return;
	}

IL_0039:
	{
		// if (gestureEvents.IsCreated)
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_11 = ___gestureEvents1;
		bool L_12;
		L_12 = NativeArray_1_get_IsCreated_m5332DCC2E5700E026D9F9241FA46B1F0529103F5((NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		// gestureEvents.Dispose();
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_13 = ___gestureEvents1;
		NativeArray_1_Dispose_m5E44B77E24E1BCD5FA7B087B90F32D9E0C9C050A((NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0047:
	{
		// gestureEvents = new NativeArray<T>(gestureEventsLength, Allocator.Persistent);
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_14 = ___gestureEvents1;
		int32_t L_15 = V_0;
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  L_16;
		memset((&L_16), 0, sizeof(L_16));
		NativeArray_1__ctor_m8656A870C31C0FA9BA29A24C3CF85E40C6A01D94((&L_16), (int32_t)L_15, (int32_t)4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_14 = L_16;
		// var sizeOfGestureEvent = UnsafeUtility.SizeOf<T>();
		int32_t L_17;
		L_17 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		// UnsafeUtility.MemCpy(gestureEvents.GetUnsafePtr(), gestureEventsPtr, elementSize * gestureEventsLength);
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 * L_18 = ___gestureEvents1;
		NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40  L_19 = (*(NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 *)L_18);
		void* L_20;
		L_20 = ((  void* (*) (NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((NativeArray_1_tE49D4ED98FD43A967F26C74C3DCAB30472125B40 )L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		void* L_21 = V_2;
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_20, (void*)(void*)L_21, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)L_23)))), /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRManipulationGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRManipulationGestureEvent_tBE7CECB1CE9CBC755847F544867A3FD16AAC08CD_m9AA8FB129A5D5C0E099F6EA15C11377D448AF81B_gshared (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * ___gestureEvents1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// void* gestureEventsPtr = getGestureEventsPtrFunction(out gestureEventsLength, out elementSize);
		GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * L_0 = ___getGestureEventsPtrFunction0;
		NullCheck((GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)L_0);
		void* L_1;
		L_1 = GetGestureEventsPtrFunction_Invoke_m9183A48EEB89837ED13990399767C664E943AA4E((GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)L_0, (int32_t*)(int32_t*)(&V_0), (int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (void*)L_1;
		// if (gestureEventsPtr == null || gestureEventsLength == 0)
		void* L_2 = V_2;
		if ((((intptr_t)L_2) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0039;
		}
	}

IL_0013:
	{
		// if (gestureEvents.Length > 0)
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_4 = ___gestureEvents1;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_4)->___m_Length_1);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		// if (gestureEvents.IsCreated)
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_6 = ___gestureEvents1;
		bool L_7;
		L_7 = NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA((NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// gestureEvents.Dispose();
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_8 = ___gestureEvents1;
		NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2((NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_002a:
	{
		// gestureEvents = new NativeArray<T>(0, Allocator.Persistent);
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_9 = ___gestureEvents1;
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E((&L_10), (int32_t)0, (int32_t)4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_9 = L_10;
		// }
		return;
	}

IL_0039:
	{
		// if (gestureEvents.IsCreated)
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_11 = ___gestureEvents1;
		bool L_12;
		L_12 = NativeArray_1_get_IsCreated_m722D2F0B85E1DCA7396837F4E934EAF8C2F3F7DA((NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		// gestureEvents.Dispose();
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_13 = ___gestureEvents1;
		NativeArray_1_Dispose_m98BFA0D79F55919C20EA1BC9F6302112B31F76D2((NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0047:
	{
		// gestureEvents = new NativeArray<T>(gestureEventsLength, Allocator.Persistent);
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_14 = ___gestureEvents1;
		int32_t L_15 = V_0;
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  L_16;
		memset((&L_16), 0, sizeof(L_16));
		NativeArray_1__ctor_m07AE1FCF92C02C1B6A35A4D3E98CD68EFED0A87E((&L_16), (int32_t)L_15, (int32_t)4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_14 = L_16;
		// var sizeOfGestureEvent = UnsafeUtility.SizeOf<T>();
		int32_t L_17;
		L_17 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		// UnsafeUtility.MemCpy(gestureEvents.GetUnsafePtr(), gestureEventsPtr, elementSize * gestureEventsLength);
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 * L_18 = ___gestureEvents1;
		NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5  L_19 = (*(NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 *)L_18);
		void* L_20;
		L_20 = ((  void* (*) (NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((NativeArray_1_t62F273A0F5CDAF939CF5B883E92BE51BB776D1C5 )L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		void* L_21 = V_2;
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_20, (void*)(void*)L_21, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)L_23)))), /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRNavigationGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRNavigationGestureEvent_t2EC0C04378BBDBD7D4CD89065DAA531E0387B9E9_m5E5A27735FCA8AC0FC6D20BE5EBDDFA609F1358E_gshared (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * ___gestureEvents1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// void* gestureEventsPtr = getGestureEventsPtrFunction(out gestureEventsLength, out elementSize);
		GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * L_0 = ___getGestureEventsPtrFunction0;
		NullCheck((GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)L_0);
		void* L_1;
		L_1 = GetGestureEventsPtrFunction_Invoke_m9183A48EEB89837ED13990399767C664E943AA4E((GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)L_0, (int32_t*)(int32_t*)(&V_0), (int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (void*)L_1;
		// if (gestureEventsPtr == null || gestureEventsLength == 0)
		void* L_2 = V_2;
		if ((((intptr_t)L_2) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0039;
		}
	}

IL_0013:
	{
		// if (gestureEvents.Length > 0)
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_4 = ___gestureEvents1;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_4)->___m_Length_1);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		// if (gestureEvents.IsCreated)
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_6 = ___gestureEvents1;
		bool L_7;
		L_7 = NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3((NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// gestureEvents.Dispose();
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_8 = ___gestureEvents1;
		NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE((NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_002a:
	{
		// gestureEvents = new NativeArray<T>(0, Allocator.Persistent);
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_9 = ___gestureEvents1;
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165((&L_10), (int32_t)0, (int32_t)4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_9 = L_10;
		// }
		return;
	}

IL_0039:
	{
		// if (gestureEvents.IsCreated)
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_11 = ___gestureEvents1;
		bool L_12;
		L_12 = NativeArray_1_get_IsCreated_m57732C3CD38653D5BE9A9632436A3E15DC1F51C3((NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		// gestureEvents.Dispose();
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_13 = ___gestureEvents1;
		NativeArray_1_Dispose_mD96638D5C78E888480B3B4ACD6B3FA2F7F20BDBE((NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0047:
	{
		// gestureEvents = new NativeArray<T>(gestureEventsLength, Allocator.Persistent);
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_14 = ___gestureEvents1;
		int32_t L_15 = V_0;
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  L_16;
		memset((&L_16), 0, sizeof(L_16));
		NativeArray_1__ctor_m4BDF475681D07A5222CDCC8D274DE4E186A6F165((&L_16), (int32_t)L_15, (int32_t)4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_14 = L_16;
		// var sizeOfGestureEvent = UnsafeUtility.SizeOf<T>();
		int32_t L_17;
		L_17 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		// UnsafeUtility.MemCpy(gestureEvents.GetUnsafePtr(), gestureEventsPtr, elementSize * gestureEventsLength);
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 * L_18 = ___gestureEvents1;
		NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221  L_19 = (*(NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 *)L_18);
		void* L_20;
		L_20 = ((  void* (*) (NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((NativeArray_1_t72D2250C76333CAEEBB3CF564EF15C5E2A533221 )L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		void* L_21 = V_2;
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_20, (void*)(void*)L_21, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)L_23)))), /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider::RetrieveGestureEvents<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>(UnityEngine.XR.WindowsMR.WindowsMRGestureSubsystem/WindowsMRGestureProvider/GetGestureEventsPtrFunction,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRGestureProvider_RetrieveGestureEvents_TisWindowsMRTappedGestureEvent_t6D7C9A5011BB7905FA7D06115A0CDF686D258E90_mF2E38826347EA6DE1163DC6ED83D4EF29617E4D9_gshared (WindowsMRGestureProvider_tDBD7C12B83EF772652CF8A0F8819F49F71102AFB * __this, GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * ___getGestureEventsPtrFunction0, NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * ___gestureEvents1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// void* gestureEventsPtr = getGestureEventsPtrFunction(out gestureEventsLength, out elementSize);
		GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 * L_0 = ___getGestureEventsPtrFunction0;
		NullCheck((GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)L_0);
		void* L_1;
		L_1 = GetGestureEventsPtrFunction_Invoke_m9183A48EEB89837ED13990399767C664E943AA4E((GetGestureEventsPtrFunction_tE0B89B0CE550AE2FAFA32DF86191187734D08A82 *)L_0, (int32_t*)(int32_t*)(&V_0), (int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (void*)L_1;
		// if (gestureEventsPtr == null || gestureEventsLength == 0)
		void* L_2 = V_2;
		if ((((intptr_t)L_2) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0039;
		}
	}

IL_0013:
	{
		// if (gestureEvents.Length > 0)
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_4 = ___gestureEvents1;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_4)->___m_Length_1);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		// if (gestureEvents.IsCreated)
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_6 = ___gestureEvents1;
		bool L_7;
		L_7 = NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// gestureEvents.Dispose();
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_8 = ___gestureEvents1;
		NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_002a:
	{
		// gestureEvents = new NativeArray<T>(0, Allocator.Persistent);
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_9 = ___gestureEvents1;
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931((&L_10), (int32_t)0, (int32_t)4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_9 = L_10;
		// }
		return;
	}

IL_0039:
	{
		// if (gestureEvents.IsCreated)
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_11 = ___gestureEvents1;
		bool L_12;
		L_12 = NativeArray_1_get_IsCreated_mBDA5F31AE09BC8C78641E643CDDB944489EB5F69((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		// gestureEvents.Dispose();
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_13 = ___gestureEvents1;
		NativeArray_1_Dispose_m9FF3FB8E9235FFFCA750D0595B24CE2DFC98E517((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0047:
	{
		// gestureEvents = new NativeArray<T>(gestureEventsLength, Allocator.Persistent);
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_14 = ___gestureEvents1;
		int32_t L_15 = V_0;
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  L_16;
		memset((&L_16), 0, sizeof(L_16));
		NativeArray_1__ctor_mEABABAF0C44835C63D5FC9A3223B967F52F67931((&L_16), (int32_t)L_15, (int32_t)4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_14 = L_16;
		// var sizeOfGestureEvent = UnsafeUtility.SizeOf<T>();
		int32_t L_17;
		L_17 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		// UnsafeUtility.MemCpy(gestureEvents.GetUnsafePtr(), gestureEventsPtr, elementSize * gestureEventsLength);
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 * L_18 = ___gestureEvents1;
		NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77  L_19 = (*(NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 *)L_18);
		void* L_20;
		L_20 = ((  void* (*) (NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((NativeArray_1_t97FF5DDFBE4EF131944CD705FFF832C21BA6DA77 )L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		void* L_21 = V_2;
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_20, (void*)(void*)L_21, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)L_23)))), /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, const RuntimeMethod* method)
{
	{
		// public InputControl control { get; internal set; }
		InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_0 = __this->get_U3CcontrolU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m7C7D8F865861F0FA90DDF8383211C44DF9AF05A3_inline (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type type { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_gshared_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	{
		// ((InputControl<TValue>)control).m_ProcessorStack.Append(processor);
		InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_0;
		L_0 = ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline((ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this, /*hidden argument*/NULL);
		NullCheck(((InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 * L_1 = (InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)((InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_address_of_m_ProcessorStack_21();
		RuntimeObject * L_2 = ___processor0;
		int32_t L_3;
		L_3 = InlinedArray_1_Append_mEBFD1065C9722EEC4756FB770F5F274DA481234B((InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)L_1, (InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return this;
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_4 = (*(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this);
		return (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_gshared_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	{
		// ((InputControl<TValue>)control).m_ProcessorStack.Append(processor);
		InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_0;
		L_0 = ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline((ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this, /*hidden argument*/NULL);
		NullCheck(((InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0 *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C * L_1 = (InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)((InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0 *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_address_of_m_ProcessorStack_21();
		RuntimeObject * L_2 = ___processor0;
		int32_t L_3;
		L_3 = InlinedArray_1_Append_m30E33D84F5B20A6A532E2B2DF48D732DC11C410D((InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)L_1, (InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return this;
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_4 = (*(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this);
		return (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_4;
	}
}
