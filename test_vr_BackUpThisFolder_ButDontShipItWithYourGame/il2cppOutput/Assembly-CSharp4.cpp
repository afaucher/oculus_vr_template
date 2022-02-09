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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<OVRCameraRig>
struct Action_1_t75B6371B869E36A42B0DFFC8D8B2630F1D659A6C;
// System.Action`1<LocomotionTeleport/AimData>
struct Action_1_t92198758A8B104AAC58CEBF1192A89AFDC67850B;
// System.Action`3<UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion>
struct Action_3_tA4F94900F976E775A483E76A95AB2A443C164EC2;
// System.Action`4<System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.Nullable`1<UnityEngine.Quaternion>>
struct Action_4_t9426C491AA37FE7E7E24FF3395FFAC5A60AAC07F;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,OVRPassthroughLayer/PassthroughMeshInstance>
struct Dictionary_2_t60275C105022D515270F8E8181130D8B1020CB74;
// System.Collections.Generic.Dictionary`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>
struct Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712;
// System.Collections.Generic.Dictionary`2<System.IntPtr,combinedMeshLoadedCallback>
struct Dictionary_2_tB5BAAC270B98F46A05C8EE064E743C724CC64B9F;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.HashSet`1<assetLoadedCallback>>
struct Dictionary_2_t2F8DD7BF76D77D4ED22813866E89A7482CF1129F;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.HashSet`1<specificationCallback>>
struct Dictionary_2_t291FE5C7453544D3C47B827F16644AF782ECD223;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Boolean>
struct Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724;
// System.Collections.Generic.Dictionary`2<System.UInt64,OvrAvatarAsset>
struct Dictionary_2_t213444F5327736C3930CC35F42E9F45A87C3E0A6;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_tAFCE72ADC2EDFFA5D34E7918994DD34A8583449F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,OvrAvatarTextureCopyManager/TextureSet>
struct KeyCollection_tF0C3093BA4594769C4752635EB791AFD58E1D518;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Boolean>
struct KeyCollection_t007B86D0B08794DEC3451B76BA982287F516BC6A;
// System.Collections.Generic.LinkedListNode`1<System.Single>
struct LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3;
// System.Collections.Generic.LinkedList`1<System.Single>
struct LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Rendering.ReflectionProbeBlendInfo>
struct List_1_tC72226AFC61EAED6CBFEFEFF41B3433931B7C8CE;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<OVRPassthroughLayer/DeferredPassthroughMeshAddition>
struct List_1_t3B0820C8464D06CB2C98E3D7C75B224815E79323;
// System.Collections.Generic.List`1<OvrAvatarDriver/PoseFrame>
struct List_1_t76EB832BDA191E405A5D7D8B885619C06BA81775;
// System.Collections.Generic.Queue`1<OvrAvatarSDKManager/AvatarSpecRequestParams>
struct Queue_1_t2B573F2B01F6763F8C85A5A7B2134791B4C545D4;
// System.Collections.Generic.Queue`1<OvrAvatarTextureCopyManager/CopyTextureParams>
struct Queue_1_t1378D533CBF04DE3BB5A019B078F5D7DC292B625;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,OvrAvatarTextureCopyManager/TextureSet>
struct ValueCollection_t9844D24DD6110A3C61FE71E685A26DA30E946ABF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Boolean>
struct ValueCollection_t3732FE4152ACFB9916487F1DC3925A988182C9EE;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,OvrAvatarTextureCopyManager/TextureSet>[]
struct EntryU5BU5D_tB949761A07B9CD0AE4E9CE7C08D59FF45C3F0E4C;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,System.Boolean>[]
struct EntryU5BU5D_t577A18E03D2EAEAA5F047CB83F900C0EA5F7222A;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// OculusSampleFramework.TrainCarBase[]
struct TrainCarBaseU5BU5D_tEA9FA40EA871BECB324EAE0EA10A02C42C3FA5AA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// OvrAvatarMaterialManager/AvatarComponentMaterialProperties[]
struct AvatarComponentMaterialPropertiesU5BU5D_t6E3BDB3CB0001F5076F90A25543CADFDC3386E8B;
// OvrAvatarMaterialManager/AvatarTextureArrayProperties[]
struct AvatarTextureArrayPropertiesU5BU5D_tDE8C7811BDC958AE418C1D0B8F3B9E2529A134D7;
// OvrAvatarTextureCopyManager/FallbackTextureSet[]
struct FallbackTextureSetU5BU5D_t52D9A01B29DF82A652EB1683D9BA01AB61F8A8E1;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// OculusSampleFramework.ButtonController
struct ButtonController_t8B501737B40B4D8F465F215CAC449B627A8EF000;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// OculusSampleFramework.InteractableTool
struct InteractableTool_t3492A009F902935C1291A66C2D9E53DDB96B296C;
// LocomotionController
struct LocomotionController_tCA625CD0A5F52DDB33ECB2FAC435471C0C079719;
// LocomotionTeleport
struct LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// OVRCameraRig
struct OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517;
// OVROverlay
struct OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7;
// OVRPassthroughLayer
struct OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OvrAvatarMaterialManager
struct OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720;
// OvrAvatarPacket
struct OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F;
// OvrAvatarSDKManager
struct OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF;
// OvrAvatarTextureCopyManager
struct OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A;
// OculusSampleFramework.PanelHMDFollower
struct PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// PassthroughStyler
struct PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32;
// OculusSampleFramework.Pose
struct Pose_t8062E0F070422627AB6D1693718F8D8C38DBA742;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// OculusSampleFramework.SelectionCylinder
struct SelectionCylinder_tD00E5523E40CEE87C221B093CB293B99706AE041;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// StartMenu
struct StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3;
// System.String
struct String_t;
// TeleportAimHandler
struct TeleportAimHandler_tC1C6D09FC478B420E7C892ECCB6E625F537D3BBD;
// TeleportDestination
struct TeleportDestination_t1DCC2BDB675ACE76D915FE7251B4CB6C487811DA;
// TeleportInputHandler
struct TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D;
// TeleportOrientationHandler
struct TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D;
// TeleportSupport
struct TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121;
// TeleportTargetHandler
struct TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273;
// TeleportTransitionBlink
struct TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977;
// TeleportTransitionWarp
struct TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Texture2DArray
struct Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C;
// OculusSampleFramework.TrainButtonVisualController
struct TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151;
// OculusSampleFramework.TrainCrossingController
struct TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37;
// OculusSampleFramework.TrainLocomotive
struct TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331;
// OculusSampleFramework.TrainTrack
struct TrainTrack_t7BDC9E56629804928D04D3C4F7FF03D0F3409424;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// OculusSampleFramework.WindmillBladesController
struct WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3;
// specificationCallback
struct specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// LocomotionTeleport/AimData
struct AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA;
// OvrAvatar/PacketEventArgs
struct PacketEventArgs_t8CCCE0BDBF25464C0C987F8C2901A94A91F602C6;
// OvrAvatarDriver/ControllerPose
struct ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD;
// OvrAvatarMaterialManager/<RunLoadingAnimation>d__49
struct U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB;
// OvrAvatarMaterialManager/AvatarMaterialConfig
struct AvatarMaterialConfig_t68C0A6847F7A05CF97CDF3580293DC0F7EDFC34D;
// OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24
struct U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833;
// OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13
struct U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4;
// PassthroughStyler/<FadeToCurrentStyle>d__19
struct U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C;
// PassthroughStyler/<FadeToDefaultPassthrough>d__20
struct U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732;
// RemoteLoopbackManager/PacketLatencyPair
struct PacketLatencyPair_tB00B8B1B83E2801DA568D38A169B959F1FBCE25D;
// RemoteLoopbackManager/SimulatedLatencySettings
struct SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B;
// StartMenu/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t27B782281E85B4B9B9C194DA1B73C3535D5CC46D;
// TeleportInputHandler/<TeleportAimCoroutine>d__6
struct U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7;
// TeleportInputHandler/<TeleportReadyCoroutine>d__5
struct U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848;
// TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7
struct U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5;
// TeleportTargetHandler/<TargetAimCoroutine>d__7
struct U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF;
// TeleportTransitionBlink/<BlinkCoroutine>d__4
struct U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A;
// TeleportTransitionWarp/<DoWarp>d__3
struct U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935;
// OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26
struct U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4;
// OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15
struct U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79;
// OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34
struct U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723;
// OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17
struct U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D;
// OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18
struct U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9;

IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OvrAvatarComponent_t9786A3A318610B62A38544306547F630079FB6BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C;
IL2CPP_EXTERN_C String_t* _stringLiteral565F9C56DD9483223083FD5E97FB3FF2136D8C25;
IL2CPP_EXTERN_C String_t* _stringLiteral5D5B09A917F4F6B1AFC012E5D971BF59C538FD26;
IL2CPP_EXTERN_C String_t* _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0E8ACCC72C7CBBB860173D8F86FC1851A0B6494;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m1D8D9E0A3297309037B575EE089F6CF4885CCA07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mE8A18E0CC2F91910A0D69865532151049C7BD0F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC2DB69DC0FC7CE69BECAB9E2C37562DC8C0B02D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0194EB4680D46858D1698080DE4DCCC258C82F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF62D569F5B584522E6FE3FCB1AFD50F51530A43B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m12610C8EC87E168D9C1A63C104C34ADD599CD3CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m72798A23D6B4CE080273CA5064E1007FF817C2C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB5222DC7F4812D6052E1E91F09C6241C5B6EFECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF902680F1B8043D67FC40B01196D478C5ED5D14E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m7769F73190D62E056480E9CBAEE2BCE4000236CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m274F462788E4F381B6EBE1FAEF4188F917A073EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mDF44B651756195C7279CBC5F83030E1706453A7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateCrossingU3Ed__15_System_Collections_IEnumerator_Reset_m1221B7705FF6866AB85D415E8D00A92F1B40B0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBlinkCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m6E21661229B022076FA60AF6C49A1980E56609E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeleteTextureSetCoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m6A4C0016B310142BB80ECBD048150ADCA25E6EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoWarpU3Ed__3_System_Collections_IEnumerator_Reset_mE692557C58D90117915B599FA91A88FC7D238200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeToCurrentStyleU3Ed__19_System_Collections_IEnumerator_Reset_mB5C2710DD59CC9A98A6208DB18E20E1779BE046F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeToDefaultPassthroughU3Ed__20_System_Collections_IEnumerator_Reset_m67B84B18ED37EF94A7E28DC9D942BF28EE813ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLerpToHMDU3Ed__13_System_Collections_IEnumerator_Reset_mA09722794732F819AA5D31CB2AF5BCB0C2FD817A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLerpToSpeedU3Ed__17_System_Collections_IEnumerator_Reset_mDB45CD8EC190F294BD562D4090ADB533E5EBF9F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlaySoundDelayedU3Ed__18_System_Collections_IEnumerator_Reset_mD0C04D5F54AAD444CE77C15B853BE79F5504160F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetPositionU3Ed__26_System_Collections_IEnumerator_Reset_mFAB28539B7B0AF0B783CD738C41D9DC51A1E8853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRunLoadingAnimationU3Ed__49_System_Collections_IEnumerator_Reset_mE0F680342E7E1E8ED7EF4068256FD39CEC1C3CB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartStopTrainU3Ed__34_System_Collections_IEnumerator_Reset_mE5B9500E4605106C99B8718D3105A15B0CB73A87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTargetAimCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_m2BC8EDEB99F6EEEA6DB6EE8F703C99E5CC6A7301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTeleportAimCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_mE894BDC51B100595A10489704983F8922185CCF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTeleportReadyCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m12F830ADD072802D84BE4B3231F43A12FA4F8E73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateOrientationCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_m8957A7F5F8D1D9C630D84F24A7C2B66642CA9B95_RuntimeMethod_var;
struct ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD;;
struct ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com;
struct ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com;;
struct ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke;
struct ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ;

struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>
struct Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB949761A07B9CD0AE4E9CE7C08D59FF45C3F0E4C* ___entries_1;
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
	KeyCollection_tF0C3093BA4594769C4752635EB791AFD58E1D518 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9844D24DD6110A3C61FE71E685A26DA30E946ABF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712, ___entries_1)); }
	inline EntryU5BU5D_tB949761A07B9CD0AE4E9CE7C08D59FF45C3F0E4C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB949761A07B9CD0AE4E9CE7C08D59FF45C3F0E4C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB949761A07B9CD0AE4E9CE7C08D59FF45C3F0E4C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712, ___keys_7)); }
	inline KeyCollection_tF0C3093BA4594769C4752635EB791AFD58E1D518 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF0C3093BA4594769C4752635EB791AFD58E1D518 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF0C3093BA4594769C4752635EB791AFD58E1D518 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712, ___values_8)); }
	inline ValueCollection_t9844D24DD6110A3C61FE71E685A26DA30E946ABF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9844D24DD6110A3C61FE71E685A26DA30E946ABF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9844D24DD6110A3C61FE71E685A26DA30E946ABF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt64,System.Boolean>
struct Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t577A18E03D2EAEAA5F047CB83F900C0EA5F7222A* ___entries_1;
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
	KeyCollection_t007B86D0B08794DEC3451B76BA982287F516BC6A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3732FE4152ACFB9916487F1DC3925A988182C9EE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724, ___entries_1)); }
	inline EntryU5BU5D_t577A18E03D2EAEAA5F047CB83F900C0EA5F7222A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t577A18E03D2EAEAA5F047CB83F900C0EA5F7222A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t577A18E03D2EAEAA5F047CB83F900C0EA5F7222A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724, ___keys_7)); }
	inline KeyCollection_t007B86D0B08794DEC3451B76BA982287F516BC6A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t007B86D0B08794DEC3451B76BA982287F516BC6A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t007B86D0B08794DEC3451B76BA982287F516BC6A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724, ___values_8)); }
	inline ValueCollection_t3732FE4152ACFB9916487F1DC3925A988182C9EE * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3732FE4152ACFB9916487F1DC3925A988182C9EE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3732FE4152ACFB9916487F1DC3925A988182C9EE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.LinkedListNode`1<System.Single>
struct LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3  : public RuntimeObject
{
public:
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	float ___item_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3, ___list_0)); }
	inline LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * get_list_0() const { return ___list_0; }
	inline LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3, ___next_1)); }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * get_next_1() const { return ___next_1; }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}

	inline static int32_t get_offset_of_prev_2() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3, ___prev_2)); }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * get_prev_2() const { return ___prev_2; }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 ** get_address_of_prev_2() { return &___prev_2; }
	inline void set_prev_2(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * value)
	{
		___prev_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_2), (void*)value);
	}

	inline static int32_t get_offset_of_item_3() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3, ___item_3)); }
	inline float get_item_3() const { return ___item_3; }
	inline float* get_address_of_item_3() { return &___item_3; }
	inline void set_item_3(float value)
	{
		___item_3 = value;
	}
};


// System.Collections.Generic.LinkedList`1<System.Single>
struct LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27  : public RuntimeObject
{
public:
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject * ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27, ___head_0)); }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * get_head_0() const { return ___head_0; }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}

	inline static int32_t get_offset_of__siInfo_4() { return static_cast<int32_t>(offsetof(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27, ____siInfo_4)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_4() const { return ____siInfo_4; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_4() { return &____siInfo_4; }
	inline void set__siInfo_4(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// OvrAvatarMaterialManager/<RunLoadingAnimation>d__49
struct U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB  : public RuntimeObject
{
public:
	// System.Int32 OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OvrAvatarMaterialManager OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<>4__this
	OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * ___U3CU3E4__this_2;
	// System.Action OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::callBack
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callBack_3;
	// System.Int32 OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<srcBlend>5__2
	int32_t ___U3CsrcBlendU3E5__2_4;
	// System.Int32 OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<dstBlend>5__3
	int32_t ___U3CdstBlendU3E5__3_5;
	// System.String OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<lightModeTag>5__4
	String_t* ___U3ClightModeTagU3E5__4_6;
	// System.String OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<renderTypeTag>5__5
	String_t* ___U3CrenderTypeTagU3E5__5_7;
	// System.String OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<renderQueueTag>5__6
	String_t* ___U3CrenderQueueTagU3E5__6_8;
	// System.String OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<ignoreProjectorTag>5__7
	String_t* ___U3CignoreProjectorTagU3E5__7_9;
	// System.Int32 OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<renderQueue>5__8
	int32_t ___U3CrenderQueueU3E5__8_10;
	// System.Boolean OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::<transparentQueue>5__9
	bool ___U3CtransparentQueueU3E5__9_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3CU3E4__this_2)); }
	inline OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_callBack_3() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___callBack_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callBack_3() const { return ___callBack_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callBack_3() { return &___callBack_3; }
	inline void set_callBack_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callBack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callBack_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsrcBlendU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3CsrcBlendU3E5__2_4)); }
	inline int32_t get_U3CsrcBlendU3E5__2_4() const { return ___U3CsrcBlendU3E5__2_4; }
	inline int32_t* get_address_of_U3CsrcBlendU3E5__2_4() { return &___U3CsrcBlendU3E5__2_4; }
	inline void set_U3CsrcBlendU3E5__2_4(int32_t value)
	{
		___U3CsrcBlendU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CdstBlendU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3CdstBlendU3E5__3_5)); }
	inline int32_t get_U3CdstBlendU3E5__3_5() const { return ___U3CdstBlendU3E5__3_5; }
	inline int32_t* get_address_of_U3CdstBlendU3E5__3_5() { return &___U3CdstBlendU3E5__3_5; }
	inline void set_U3CdstBlendU3E5__3_5(int32_t value)
	{
		___U3CdstBlendU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3ClightModeTagU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3ClightModeTagU3E5__4_6)); }
	inline String_t* get_U3ClightModeTagU3E5__4_6() const { return ___U3ClightModeTagU3E5__4_6; }
	inline String_t** get_address_of_U3ClightModeTagU3E5__4_6() { return &___U3ClightModeTagU3E5__4_6; }
	inline void set_U3ClightModeTagU3E5__4_6(String_t* value)
	{
		___U3ClightModeTagU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClightModeTagU3E5__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrenderTypeTagU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3CrenderTypeTagU3E5__5_7)); }
	inline String_t* get_U3CrenderTypeTagU3E5__5_7() const { return ___U3CrenderTypeTagU3E5__5_7; }
	inline String_t** get_address_of_U3CrenderTypeTagU3E5__5_7() { return &___U3CrenderTypeTagU3E5__5_7; }
	inline void set_U3CrenderTypeTagU3E5__5_7(String_t* value)
	{
		___U3CrenderTypeTagU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrenderTypeTagU3E5__5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrenderQueueTagU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3CrenderQueueTagU3E5__6_8)); }
	inline String_t* get_U3CrenderQueueTagU3E5__6_8() const { return ___U3CrenderQueueTagU3E5__6_8; }
	inline String_t** get_address_of_U3CrenderQueueTagU3E5__6_8() { return &___U3CrenderQueueTagU3E5__6_8; }
	inline void set_U3CrenderQueueTagU3E5__6_8(String_t* value)
	{
		___U3CrenderQueueTagU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrenderQueueTagU3E5__6_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CignoreProjectorTagU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3CignoreProjectorTagU3E5__7_9)); }
	inline String_t* get_U3CignoreProjectorTagU3E5__7_9() const { return ___U3CignoreProjectorTagU3E5__7_9; }
	inline String_t** get_address_of_U3CignoreProjectorTagU3E5__7_9() { return &___U3CignoreProjectorTagU3E5__7_9; }
	inline void set_U3CignoreProjectorTagU3E5__7_9(String_t* value)
	{
		___U3CignoreProjectorTagU3E5__7_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CignoreProjectorTagU3E5__7_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrenderQueueU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3CrenderQueueU3E5__8_10)); }
	inline int32_t get_U3CrenderQueueU3E5__8_10() const { return ___U3CrenderQueueU3E5__8_10; }
	inline int32_t* get_address_of_U3CrenderQueueU3E5__8_10() { return &___U3CrenderQueueU3E5__8_10; }
	inline void set_U3CrenderQueueU3E5__8_10(int32_t value)
	{
		___U3CrenderQueueU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CtransparentQueueU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB, ___U3CtransparentQueueU3E5__9_11)); }
	inline bool get_U3CtransparentQueueU3E5__9_11() const { return ___U3CtransparentQueueU3E5__9_11; }
	inline bool* get_address_of_U3CtransparentQueueU3E5__9_11() { return &___U3CtransparentQueueU3E5__9_11; }
	inline void set_U3CtransparentQueueU3E5__9_11(bool value)
	{
		___U3CtransparentQueueU3E5__9_11 = value;
	}
};


// RemoteLoopbackManager/PacketLatencyPair
struct PacketLatencyPair_tB00B8B1B83E2801DA568D38A169B959F1FBCE25D  : public RuntimeObject
{
public:
	// System.Byte[] RemoteLoopbackManager/PacketLatencyPair::PacketData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PacketData_0;
	// System.Single RemoteLoopbackManager/PacketLatencyPair::FakeLatency
	float ___FakeLatency_1;

public:
	inline static int32_t get_offset_of_PacketData_0() { return static_cast<int32_t>(offsetof(PacketLatencyPair_tB00B8B1B83E2801DA568D38A169B959F1FBCE25D, ___PacketData_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PacketData_0() const { return ___PacketData_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PacketData_0() { return &___PacketData_0; }
	inline void set_PacketData_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PacketData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PacketData_0), (void*)value);
	}

	inline static int32_t get_offset_of_FakeLatency_1() { return static_cast<int32_t>(offsetof(PacketLatencyPair_tB00B8B1B83E2801DA568D38A169B959F1FBCE25D, ___FakeLatency_1)); }
	inline float get_FakeLatency_1() const { return ___FakeLatency_1; }
	inline float* get_address_of_FakeLatency_1() { return &___FakeLatency_1; }
	inline void set_FakeLatency_1(float value)
	{
		___FakeLatency_1 = value;
	}
};


// RemoteLoopbackManager/SimulatedLatencySettings
struct SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B  : public RuntimeObject
{
public:
	// System.Single RemoteLoopbackManager/SimulatedLatencySettings::FakeLatencyMax
	float ___FakeLatencyMax_0;
	// System.Single RemoteLoopbackManager/SimulatedLatencySettings::FakeLatencyMin
	float ___FakeLatencyMin_1;
	// System.Single RemoteLoopbackManager/SimulatedLatencySettings::LatencyWeight
	float ___LatencyWeight_2;
	// System.Int32 RemoteLoopbackManager/SimulatedLatencySettings::MaxSamples
	int32_t ___MaxSamples_3;
	// System.Single RemoteLoopbackManager/SimulatedLatencySettings::AverageWindow
	float ___AverageWindow_4;
	// System.Single RemoteLoopbackManager/SimulatedLatencySettings::LatencySum
	float ___LatencySum_5;
	// System.Collections.Generic.LinkedList`1<System.Single> RemoteLoopbackManager/SimulatedLatencySettings::LatencyValues
	LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * ___LatencyValues_6;

public:
	inline static int32_t get_offset_of_FakeLatencyMax_0() { return static_cast<int32_t>(offsetof(SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B, ___FakeLatencyMax_0)); }
	inline float get_FakeLatencyMax_0() const { return ___FakeLatencyMax_0; }
	inline float* get_address_of_FakeLatencyMax_0() { return &___FakeLatencyMax_0; }
	inline void set_FakeLatencyMax_0(float value)
	{
		___FakeLatencyMax_0 = value;
	}

	inline static int32_t get_offset_of_FakeLatencyMin_1() { return static_cast<int32_t>(offsetof(SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B, ___FakeLatencyMin_1)); }
	inline float get_FakeLatencyMin_1() const { return ___FakeLatencyMin_1; }
	inline float* get_address_of_FakeLatencyMin_1() { return &___FakeLatencyMin_1; }
	inline void set_FakeLatencyMin_1(float value)
	{
		___FakeLatencyMin_1 = value;
	}

	inline static int32_t get_offset_of_LatencyWeight_2() { return static_cast<int32_t>(offsetof(SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B, ___LatencyWeight_2)); }
	inline float get_LatencyWeight_2() const { return ___LatencyWeight_2; }
	inline float* get_address_of_LatencyWeight_2() { return &___LatencyWeight_2; }
	inline void set_LatencyWeight_2(float value)
	{
		___LatencyWeight_2 = value;
	}

	inline static int32_t get_offset_of_MaxSamples_3() { return static_cast<int32_t>(offsetof(SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B, ___MaxSamples_3)); }
	inline int32_t get_MaxSamples_3() const { return ___MaxSamples_3; }
	inline int32_t* get_address_of_MaxSamples_3() { return &___MaxSamples_3; }
	inline void set_MaxSamples_3(int32_t value)
	{
		___MaxSamples_3 = value;
	}

	inline static int32_t get_offset_of_AverageWindow_4() { return static_cast<int32_t>(offsetof(SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B, ___AverageWindow_4)); }
	inline float get_AverageWindow_4() const { return ___AverageWindow_4; }
	inline float* get_address_of_AverageWindow_4() { return &___AverageWindow_4; }
	inline void set_AverageWindow_4(float value)
	{
		___AverageWindow_4 = value;
	}

	inline static int32_t get_offset_of_LatencySum_5() { return static_cast<int32_t>(offsetof(SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B, ___LatencySum_5)); }
	inline float get_LatencySum_5() const { return ___LatencySum_5; }
	inline float* get_address_of_LatencySum_5() { return &___LatencySum_5; }
	inline void set_LatencySum_5(float value)
	{
		___LatencySum_5 = value;
	}

	inline static int32_t get_offset_of_LatencyValues_6() { return static_cast<int32_t>(offsetof(SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B, ___LatencyValues_6)); }
	inline LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * get_LatencyValues_6() const { return ___LatencyValues_6; }
	inline LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 ** get_address_of_LatencyValues_6() { return &___LatencyValues_6; }
	inline void set_LatencyValues_6(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * value)
	{
		___LatencyValues_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LatencyValues_6), (void*)value);
	}
};


// StartMenu/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t27B782281E85B4B9B9C194DA1B73C3535D5CC46D  : public RuntimeObject
{
public:
	// System.Int32 StartMenu/<>c__DisplayClass3_0::sceneIndex
	int32_t ___sceneIndex_0;
	// StartMenu StartMenu/<>c__DisplayClass3_0::<>4__this
	StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_sceneIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t27B782281E85B4B9B9C194DA1B73C3535D5CC46D, ___sceneIndex_0)); }
	inline int32_t get_sceneIndex_0() const { return ___sceneIndex_0; }
	inline int32_t* get_address_of_sceneIndex_0() { return &___sceneIndex_0; }
	inline void set_sceneIndex_0(int32_t value)
	{
		___sceneIndex_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t27B782281E85B4B9B9C194DA1B73C3535D5CC46D, ___U3CU3E4__this_1)); }
	inline StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// TeleportInputHandler/<TeleportAimCoroutine>d__6
struct U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7  : public RuntimeObject
{
public:
	// System.Int32 TeleportInputHandler/<TeleportAimCoroutine>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TeleportInputHandler/<TeleportAimCoroutine>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TeleportInputHandler TeleportInputHandler/<TeleportAimCoroutine>d__6::<>4__this
	TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7, ___U3CU3E4__this_2)); }
	inline TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TeleportInputHandler/<TeleportReadyCoroutine>d__5
struct U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848  : public RuntimeObject
{
public:
	// System.Int32 TeleportInputHandler/<TeleportReadyCoroutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TeleportInputHandler/<TeleportReadyCoroutine>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TeleportInputHandler TeleportInputHandler/<TeleportReadyCoroutine>d__5::<>4__this
	TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848, ___U3CU3E4__this_2)); }
	inline TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7
struct U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5  : public RuntimeObject
{
public:
	// System.Int32 TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TeleportOrientationHandler TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7::<>4__this
	TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5, ___U3CU3E4__this_2)); }
	inline TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TeleportTargetHandler/<TargetAimCoroutine>d__7
struct U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF  : public RuntimeObject
{
public:
	// System.Int32 TeleportTargetHandler/<TargetAimCoroutine>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TeleportTargetHandler/<TargetAimCoroutine>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TeleportTargetHandler TeleportTargetHandler/<TargetAimCoroutine>d__7::<>4__this
	TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF, ___U3CU3E4__this_2)); }
	inline TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TeleportTransitionBlink/<BlinkCoroutine>d__4
struct U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A  : public RuntimeObject
{
public:
	// System.Int32 TeleportTransitionBlink/<BlinkCoroutine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TeleportTransitionBlink/<BlinkCoroutine>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TeleportTransitionBlink TeleportTransitionBlink/<BlinkCoroutine>d__4::<>4__this
	TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * ___U3CU3E4__this_2;
	// System.Single TeleportTransitionBlink/<BlinkCoroutine>d__4::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
	// System.Single TeleportTransitionBlink/<BlinkCoroutine>d__4::<teleportTime>5__3
	float ___U3CteleportTimeU3E5__3_4;
	// System.Boolean TeleportTransitionBlink/<BlinkCoroutine>d__4::<teleported>5__4
	bool ___U3CteleportedU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A, ___U3CU3E4__this_2)); }
	inline TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CteleportTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A, ___U3CteleportTimeU3E5__3_4)); }
	inline float get_U3CteleportTimeU3E5__3_4() const { return ___U3CteleportTimeU3E5__3_4; }
	inline float* get_address_of_U3CteleportTimeU3E5__3_4() { return &___U3CteleportTimeU3E5__3_4; }
	inline void set_U3CteleportTimeU3E5__3_4(float value)
	{
		___U3CteleportTimeU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CteleportedU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A, ___U3CteleportedU3E5__4_5)); }
	inline bool get_U3CteleportedU3E5__4_5() const { return ___U3CteleportedU3E5__4_5; }
	inline bool* get_address_of_U3CteleportedU3E5__4_5() { return &___U3CteleportedU3E5__4_5; }
	inline void set_U3CteleportedU3E5__4_5(bool value)
	{
		___U3CteleportedU3E5__4_5 = value;
	}
};


// OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26
struct U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4  : public RuntimeObject
{
public:
	// System.Int32 OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OculusSampleFramework.TrainButtonVisualController OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::<>4__this
	TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * ___U3CU3E4__this_2;
	// System.Single OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::<startTime>5__2
	float ___U3CstartTimeU3E5__2_3;
	// System.Single OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::<endTime>5__3
	float ___U3CendTimeU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4, ___U3CU3E4__this_2)); }
	inline TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4, ___U3CstartTimeU3E5__2_3)); }
	inline float get_U3CstartTimeU3E5__2_3() const { return ___U3CstartTimeU3E5__2_3; }
	inline float* get_address_of_U3CstartTimeU3E5__2_3() { return &___U3CstartTimeU3E5__2_3; }
	inline void set_U3CstartTimeU3E5__2_3(float value)
	{
		___U3CstartTimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CendTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4, ___U3CendTimeU3E5__3_4)); }
	inline float get_U3CendTimeU3E5__3_4() const { return ___U3CendTimeU3E5__3_4; }
	inline float* get_address_of_U3CendTimeU3E5__3_4() { return &___U3CendTimeU3E5__3_4; }
	inline void set_U3CendTimeU3E5__3_4(float value)
	{
		___U3CendTimeU3E5__3_4 = value;
	}
};


// OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34
struct U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723  : public RuntimeObject
{
public:
	// System.Int32 OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::startTrain
	bool ___startTrain_2;
	// OculusSampleFramework.TrainLocomotive OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<>4__this
	TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * ___U3CU3E4__this_3;
	// System.Single OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<endSpeed>5__2
	float ___U3CendSpeedU3E5__2_4;
	// System.Single OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<timePeriodForSpeedChange>5__3
	float ___U3CtimePeriodForSpeedChangeU3E5__3_5;
	// System.Single OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<startTime>5__4
	float ___U3CstartTimeU3E5__4_6;
	// System.Single OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<endTime>5__5
	float ___U3CendTimeU3E5__5_7;
	// System.Single OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<startSpeed>5__6
	float ___U3CstartSpeedU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_startTrain_2() { return static_cast<int32_t>(offsetof(U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723, ___startTrain_2)); }
	inline bool get_startTrain_2() const { return ___startTrain_2; }
	inline bool* get_address_of_startTrain_2() { return &___startTrain_2; }
	inline void set_startTrain_2(bool value)
	{
		___startTrain_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723, ___U3CU3E4__this_3)); }
	inline TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CendSpeedU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723, ___U3CendSpeedU3E5__2_4)); }
	inline float get_U3CendSpeedU3E5__2_4() const { return ___U3CendSpeedU3E5__2_4; }
	inline float* get_address_of_U3CendSpeedU3E5__2_4() { return &___U3CendSpeedU3E5__2_4; }
	inline void set_U3CendSpeedU3E5__2_4(float value)
	{
		___U3CendSpeedU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CtimePeriodForSpeedChangeU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723, ___U3CtimePeriodForSpeedChangeU3E5__3_5)); }
	inline float get_U3CtimePeriodForSpeedChangeU3E5__3_5() const { return ___U3CtimePeriodForSpeedChangeU3E5__3_5; }
	inline float* get_address_of_U3CtimePeriodForSpeedChangeU3E5__3_5() { return &___U3CtimePeriodForSpeedChangeU3E5__3_5; }
	inline void set_U3CtimePeriodForSpeedChangeU3E5__3_5(float value)
	{
		___U3CtimePeriodForSpeedChangeU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723, ___U3CstartTimeU3E5__4_6)); }
	inline float get_U3CstartTimeU3E5__4_6() const { return ___U3CstartTimeU3E5__4_6; }
	inline float* get_address_of_U3CstartTimeU3E5__4_6() { return &___U3CstartTimeU3E5__4_6; }
	inline void set_U3CstartTimeU3E5__4_6(float value)
	{
		___U3CstartTimeU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CendTimeU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723, ___U3CendTimeU3E5__5_7)); }
	inline float get_U3CendTimeU3E5__5_7() const { return ___U3CendTimeU3E5__5_7; }
	inline float* get_address_of_U3CendTimeU3E5__5_7() { return &___U3CendTimeU3E5__5_7; }
	inline void set_U3CendTimeU3E5__5_7(float value)
	{
		___U3CendTimeU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CstartSpeedU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723, ___U3CstartSpeedU3E5__6_8)); }
	inline float get_U3CstartSpeedU3E5__6_8() const { return ___U3CstartSpeedU3E5__6_8; }
	inline float* get_address_of_U3CstartSpeedU3E5__6_8() { return &___U3CstartSpeedU3E5__6_8; }
	inline void set_U3CstartSpeedU3E5__6_8(float value)
	{
		___U3CstartSpeedU3E5__6_8 = value;
	}
};


// OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17
struct U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D  : public RuntimeObject
{
public:
	// System.Int32 OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OculusSampleFramework.WindmillBladesController OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::<>4__this
	WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * ___U3CU3E4__this_2;
	// System.Single OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::goalSpeed
	float ___goalSpeed_3;
	// System.Single OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::<totalTime>5__2
	float ___U3CtotalTimeU3E5__2_4;
	// System.Single OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::<startSpeed>5__3
	float ___U3CstartSpeedU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D, ___U3CU3E4__this_2)); }
	inline WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_goalSpeed_3() { return static_cast<int32_t>(offsetof(U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D, ___goalSpeed_3)); }
	inline float get_goalSpeed_3() const { return ___goalSpeed_3; }
	inline float* get_address_of_goalSpeed_3() { return &___goalSpeed_3; }
	inline void set_goalSpeed_3(float value)
	{
		___goalSpeed_3 = value;
	}

	inline static int32_t get_offset_of_U3CtotalTimeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D, ___U3CtotalTimeU3E5__2_4)); }
	inline float get_U3CtotalTimeU3E5__2_4() const { return ___U3CtotalTimeU3E5__2_4; }
	inline float* get_address_of_U3CtotalTimeU3E5__2_4() { return &___U3CtotalTimeU3E5__2_4; }
	inline void set_U3CtotalTimeU3E5__2_4(float value)
	{
		___U3CtotalTimeU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CstartSpeedU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D, ___U3CstartSpeedU3E5__3_5)); }
	inline float get_U3CstartSpeedU3E5__3_5() const { return ___U3CstartSpeedU3E5__3_5; }
	inline float* get_address_of_U3CstartSpeedU3E5__3_5() { return &___U3CstartSpeedU3E5__3_5; }
	inline void set_U3CstartSpeedU3E5__3_5(float value)
	{
		___U3CstartSpeedU3E5__3_5 = value;
	}
};


// OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18
struct U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9  : public RuntimeObject
{
public:
	// System.Int32 OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OculusSampleFramework.WindmillBladesController OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::<>4__this
	WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * ___U3CU3E4__this_2;
	// UnityEngine.AudioClip OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::initial
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___initial_3;
	// System.Single OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::timeDelayAfterInitial
	float ___timeDelayAfterInitial_4;
	// UnityEngine.AudioClip OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::clip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9, ___U3CU3E4__this_2)); }
	inline WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_initial_3() { return static_cast<int32_t>(offsetof(U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9, ___initial_3)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_initial_3() const { return ___initial_3; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_initial_3() { return &___initial_3; }
	inline void set_initial_3(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___initial_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initial_3), (void*)value);
	}

	inline static int32_t get_offset_of_timeDelayAfterInitial_4() { return static_cast<int32_t>(offsetof(U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9, ___timeDelayAfterInitial_4)); }
	inline float get_timeDelayAfterInitial_4() const { return ___timeDelayAfterInitial_4; }
	inline float* get_address_of_timeDelayAfterInitial_4() { return &___timeDelayAfterInitial_4; }
	inline void set_timeDelayAfterInitial_4(float value)
	{
		___timeDelayAfterInitial_4 = value;
	}

	inline static int32_t get_offset_of_clip_5() { return static_cast<int32_t>(offsetof(U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9, ___clip_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_clip_5() const { return ___clip_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_clip_5() { return &___clip_5; }
	inline void set_clip_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___clip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clip_5), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Boolean>
struct KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5, ___key_0)); }
	inline uint64_t get_key_0() const { return ___key_0; }
	inline uint64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
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


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// OvrAvatar/PacketEventArgs
struct PacketEventArgs_t8CCCE0BDBF25464C0C987F8C2901A94A91F602C6  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// OvrAvatarPacket OvrAvatar/PacketEventArgs::Packet
	OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F * ___Packet_1;

public:
	inline static int32_t get_offset_of_Packet_1() { return static_cast<int32_t>(offsetof(PacketEventArgs_t8CCCE0BDBF25464C0C987F8C2901A94A91F602C6, ___Packet_1)); }
	inline OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F * get_Packet_1() const { return ___Packet_1; }
	inline OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F ** get_address_of_Packet_1() { return &___Packet_1; }
	inline void set_Packet_1(OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F * value)
	{
		___Packet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Packet_1), (void*)value);
	}
};


// OvrAvatarMaterialManager/AvatarMaterialPropertyBlock
struct AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878 
{
public:
	// UnityEngine.Vector4[] OvrAvatarMaterialManager/AvatarMaterialPropertyBlock::Colors
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___Colors_0;
	// System.Single[] OvrAvatarMaterialManager/AvatarMaterialPropertyBlock::DiffuseIntensities
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___DiffuseIntensities_1;
	// System.Single[] OvrAvatarMaterialManager/AvatarMaterialPropertyBlock::RimIntensities
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___RimIntensities_2;
	// System.Single[] OvrAvatarMaterialManager/AvatarMaterialPropertyBlock::ReflectionIntensities
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___ReflectionIntensities_3;

public:
	inline static int32_t get_offset_of_Colors_0() { return static_cast<int32_t>(offsetof(AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878, ___Colors_0)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_Colors_0() const { return ___Colors_0; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_Colors_0() { return &___Colors_0; }
	inline void set_Colors_0(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___Colors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Colors_0), (void*)value);
	}

	inline static int32_t get_offset_of_DiffuseIntensities_1() { return static_cast<int32_t>(offsetof(AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878, ___DiffuseIntensities_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_DiffuseIntensities_1() const { return ___DiffuseIntensities_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_DiffuseIntensities_1() { return &___DiffuseIntensities_1; }
	inline void set_DiffuseIntensities_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___DiffuseIntensities_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DiffuseIntensities_1), (void*)value);
	}

	inline static int32_t get_offset_of_RimIntensities_2() { return static_cast<int32_t>(offsetof(AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878, ___RimIntensities_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_RimIntensities_2() const { return ___RimIntensities_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_RimIntensities_2() { return &___RimIntensities_2; }
	inline void set_RimIntensities_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___RimIntensities_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RimIntensities_2), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionIntensities_3() { return static_cast<int32_t>(offsetof(AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878, ___ReflectionIntensities_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_ReflectionIntensities_3() const { return ___ReflectionIntensities_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_ReflectionIntensities_3() { return &___ReflectionIntensities_3; }
	inline void set_ReflectionIntensities_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___ReflectionIntensities_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionIntensities_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of OvrAvatarMaterialManager/AvatarMaterialPropertyBlock
struct AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshaled_pinvoke
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___Colors_0;
	Il2CppSafeArray/*NONE*/* ___DiffuseIntensities_1;
	Il2CppSafeArray/*NONE*/* ___RimIntensities_2;
	Il2CppSafeArray/*NONE*/* ___ReflectionIntensities_3;
};
// Native definition for COM marshalling of OvrAvatarMaterialManager/AvatarMaterialPropertyBlock
struct AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshaled_com
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___Colors_0;
	Il2CppSafeArray/*NONE*/* ___DiffuseIntensities_1;
	Il2CppSafeArray/*NONE*/* ___RimIntensities_2;
	Il2CppSafeArray/*NONE*/* ___ReflectionIntensities_3;
};

// OvrAvatarMaterialManager/AvatarTextureArrayProperties
struct AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02 
{
public:
	// UnityEngine.Texture2D[] OvrAvatarMaterialManager/AvatarTextureArrayProperties::Textures
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___Textures_0;
	// UnityEngine.Texture2DArray OvrAvatarMaterialManager/AvatarTextureArrayProperties::TextureArray
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___TextureArray_1;

public:
	inline static int32_t get_offset_of_Textures_0() { return static_cast<int32_t>(offsetof(AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02, ___Textures_0)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_Textures_0() const { return ___Textures_0; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_Textures_0() { return &___Textures_0; }
	inline void set_Textures_0(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___Textures_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Textures_0), (void*)value);
	}

	inline static int32_t get_offset_of_TextureArray_1() { return static_cast<int32_t>(offsetof(AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02, ___TextureArray_1)); }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * get_TextureArray_1() const { return ___TextureArray_1; }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C ** get_address_of_TextureArray_1() { return &___TextureArray_1; }
	inline void set_TextureArray_1(Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * value)
	{
		___TextureArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextureArray_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of OvrAvatarMaterialManager/AvatarTextureArrayProperties
struct AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshaled_pinvoke
{
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___Textures_0;
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___TextureArray_1;
};
// Native definition for COM marshalling of OvrAvatarMaterialManager/AvatarTextureArrayProperties
struct AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshaled_com
{
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___Textures_0;
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___TextureArray_1;
};

// OvrAvatarTextureCopyManager/CopyTextureParams
struct CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504 
{
public:
	// UnityEngine.Texture OvrAvatarTextureCopyManager/CopyTextureParams::Src
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___Src_0;
	// UnityEngine.Texture OvrAvatarTextureCopyManager/CopyTextureParams::Dst
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___Dst_1;
	// System.Int32 OvrAvatarTextureCopyManager/CopyTextureParams::Mip
	int32_t ___Mip_2;
	// System.Int32 OvrAvatarTextureCopyManager/CopyTextureParams::SrcSize
	int32_t ___SrcSize_3;
	// System.Int32 OvrAvatarTextureCopyManager/CopyTextureParams::DstElement
	int32_t ___DstElement_4;

public:
	inline static int32_t get_offset_of_Src_0() { return static_cast<int32_t>(offsetof(CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504, ___Src_0)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_Src_0() const { return ___Src_0; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_Src_0() { return &___Src_0; }
	inline void set_Src_0(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___Src_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Src_0), (void*)value);
	}

	inline static int32_t get_offset_of_Dst_1() { return static_cast<int32_t>(offsetof(CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504, ___Dst_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_Dst_1() const { return ___Dst_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_Dst_1() { return &___Dst_1; }
	inline void set_Dst_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___Dst_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dst_1), (void*)value);
	}

	inline static int32_t get_offset_of_Mip_2() { return static_cast<int32_t>(offsetof(CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504, ___Mip_2)); }
	inline int32_t get_Mip_2() const { return ___Mip_2; }
	inline int32_t* get_address_of_Mip_2() { return &___Mip_2; }
	inline void set_Mip_2(int32_t value)
	{
		___Mip_2 = value;
	}

	inline static int32_t get_offset_of_SrcSize_3() { return static_cast<int32_t>(offsetof(CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504, ___SrcSize_3)); }
	inline int32_t get_SrcSize_3() const { return ___SrcSize_3; }
	inline int32_t* get_address_of_SrcSize_3() { return &___SrcSize_3; }
	inline void set_SrcSize_3(int32_t value)
	{
		___SrcSize_3 = value;
	}

	inline static int32_t get_offset_of_DstElement_4() { return static_cast<int32_t>(offsetof(CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504, ___DstElement_4)); }
	inline int32_t get_DstElement_4() const { return ___DstElement_4; }
	inline int32_t* get_address_of_DstElement_4() { return &___DstElement_4; }
	inline void set_DstElement_4(int32_t value)
	{
		___DstElement_4 = value;
	}
};

// Native definition for P/Invoke marshalling of OvrAvatarTextureCopyManager/CopyTextureParams
struct CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshaled_pinvoke
{
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___Src_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___Dst_1;
	int32_t ___Mip_2;
	int32_t ___SrcSize_3;
	int32_t ___DstElement_4;
};
// Native definition for COM marshalling of OvrAvatarTextureCopyManager/CopyTextureParams
struct CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshaled_com
{
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___Src_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___Dst_1;
	int32_t ___Mip_2;
	int32_t ___SrcSize_3;
	int32_t ___DstElement_4;
};

// OvrAvatarTextureCopyManager/FallbackTextureSet
struct FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE 
{
public:
	// System.Boolean OvrAvatarTextureCopyManager/FallbackTextureSet::Initialized
	bool ___Initialized_0;
	// UnityEngine.Texture2D OvrAvatarTextureCopyManager/FallbackTextureSet::DiffuseRoughness
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___DiffuseRoughness_1;
	// UnityEngine.Texture2D OvrAvatarTextureCopyManager/FallbackTextureSet::Normal
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Normal_2;

public:
	inline static int32_t get_offset_of_Initialized_0() { return static_cast<int32_t>(offsetof(FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE, ___Initialized_0)); }
	inline bool get_Initialized_0() const { return ___Initialized_0; }
	inline bool* get_address_of_Initialized_0() { return &___Initialized_0; }
	inline void set_Initialized_0(bool value)
	{
		___Initialized_0 = value;
	}

	inline static int32_t get_offset_of_DiffuseRoughness_1() { return static_cast<int32_t>(offsetof(FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE, ___DiffuseRoughness_1)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_DiffuseRoughness_1() const { return ___DiffuseRoughness_1; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_DiffuseRoughness_1() { return &___DiffuseRoughness_1; }
	inline void set_DiffuseRoughness_1(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___DiffuseRoughness_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DiffuseRoughness_1), (void*)value);
	}

	inline static int32_t get_offset_of_Normal_2() { return static_cast<int32_t>(offsetof(FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE, ___Normal_2)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_Normal_2() const { return ___Normal_2; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_Normal_2() { return &___Normal_2; }
	inline void set_Normal_2(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___Normal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Normal_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of OvrAvatarTextureCopyManager/FallbackTextureSet
struct FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshaled_pinvoke
{
	int32_t ___Initialized_0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___DiffuseRoughness_1;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Normal_2;
};
// Native definition for COM marshalling of OvrAvatarTextureCopyManager/FallbackTextureSet
struct FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshaled_com
{
	int32_t ___Initialized_0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___DiffuseRoughness_1;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Normal_2;
};

// OvrAvatarTextureCopyManager/TextureSet
struct TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D 
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.Boolean> OvrAvatarTextureCopyManager/TextureSet::TextureIDSingleMeshPair
	Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * ___TextureIDSingleMeshPair_0;
	// System.Boolean OvrAvatarTextureCopyManager/TextureSet::IsProcessed
	bool ___IsProcessed_1;

public:
	inline static int32_t get_offset_of_TextureIDSingleMeshPair_0() { return static_cast<int32_t>(offsetof(TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D, ___TextureIDSingleMeshPair_0)); }
	inline Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * get_TextureIDSingleMeshPair_0() const { return ___TextureIDSingleMeshPair_0; }
	inline Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 ** get_address_of_TextureIDSingleMeshPair_0() { return &___TextureIDSingleMeshPair_0; }
	inline void set_TextureIDSingleMeshPair_0(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * value)
	{
		___TextureIDSingleMeshPair_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextureIDSingleMeshPair_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsProcessed_1() { return static_cast<int32_t>(offsetof(TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D, ___IsProcessed_1)); }
	inline bool get_IsProcessed_1() const { return ___IsProcessed_1; }
	inline bool* get_address_of_IsProcessed_1() { return &___IsProcessed_1; }
	inline void set_IsProcessed_1(bool value)
	{
		___IsProcessed_1 = value;
	}
};

// Native definition for P/Invoke marshalling of OvrAvatarTextureCopyManager/TextureSet
struct TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshaled_pinvoke
{
	Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * ___TextureIDSingleMeshPair_0;
	int32_t ___IsProcessed_1;
};
// Native definition for COM marshalling of OvrAvatarTextureCopyManager/TextureSet
struct TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshaled_com
{
	Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * ___TextureIDSingleMeshPair_0;
	int32_t ___IsProcessed_1;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Boolean>
struct Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE, ___dictionary_0)); }
	inline Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE, ___current_3)); }
	inline KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>
struct KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB, ___value_1)); }
	inline TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  get_value_1() const { return ___value_1; }
	inline TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___TextureIDSingleMeshPair_0), (void*)NULL);
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// OvrAvatarPacket
struct OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F  : public RuntimeObject
{
public:
	// System.IntPtr OvrAvatarPacket::ovrNativePacket
	intptr_t ___ovrNativePacket_0;
	// System.Collections.Generic.List`1<System.Single> OvrAvatarPacket::frameTimes
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___frameTimes_1;
	// System.Collections.Generic.List`1<OvrAvatarDriver/PoseFrame> OvrAvatarPacket::frames
	List_1_t76EB832BDA191E405A5D7D8B885619C06BA81775 * ___frames_2;
	// System.Collections.Generic.List`1<System.Byte[]> OvrAvatarPacket::encodedAudioPackets
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___encodedAudioPackets_3;

public:
	inline static int32_t get_offset_of_ovrNativePacket_0() { return static_cast<int32_t>(offsetof(OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F, ___ovrNativePacket_0)); }
	inline intptr_t get_ovrNativePacket_0() const { return ___ovrNativePacket_0; }
	inline intptr_t* get_address_of_ovrNativePacket_0() { return &___ovrNativePacket_0; }
	inline void set_ovrNativePacket_0(intptr_t value)
	{
		___ovrNativePacket_0 = value;
	}

	inline static int32_t get_offset_of_frameTimes_1() { return static_cast<int32_t>(offsetof(OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F, ___frameTimes_1)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_frameTimes_1() const { return ___frameTimes_1; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_frameTimes_1() { return &___frameTimes_1; }
	inline void set_frameTimes_1(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___frameTimes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameTimes_1), (void*)value);
	}

	inline static int32_t get_offset_of_frames_2() { return static_cast<int32_t>(offsetof(OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F, ___frames_2)); }
	inline List_1_t76EB832BDA191E405A5D7D8B885619C06BA81775 * get_frames_2() const { return ___frames_2; }
	inline List_1_t76EB832BDA191E405A5D7D8B885619C06BA81775 ** get_address_of_frames_2() { return &___frames_2; }
	inline void set_frames_2(List_1_t76EB832BDA191E405A5D7D8B885619C06BA81775 * value)
	{
		___frames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_2), (void*)value);
	}

	inline static int32_t get_offset_of_encodedAudioPackets_3() { return static_cast<int32_t>(offsetof(OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F, ___encodedAudioPackets_3)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_encodedAudioPackets_3() const { return ___encodedAudioPackets_3; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_encodedAudioPackets_3() { return &___encodedAudioPackets_3; }
	inline void set_encodedAudioPackets_3(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___encodedAudioPackets_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodedAudioPackets_3), (void*)value);
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// ovrAvatarAssetLevelOfDetail
struct ovrAvatarAssetLevelOfDetail_t5ECC5463BC3E31C1B0EAA34D7E807EA0BE8F57A3 
{
public:
	// System.Int32 ovrAvatarAssetLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarAssetLevelOfDetail_t5ECC5463BC3E31C1B0EAA34D7E807EA0BE8F57A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarBodyPartType
struct ovrAvatarBodyPartType_t6AD02ADCA3DEB64BA6829997263114CEDD61468E 
{
public:
	// System.Int32 ovrAvatarBodyPartType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarBodyPartType_t6AD02ADCA3DEB64BA6829997263114CEDD61468E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarButton
struct ovrAvatarButton_tF90A39C613862FE784B74B66508B0473CFB20723 
{
public:
	// System.Int32 ovrAvatarButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarButton_tF90A39C613862FE784B74B66508B0473CFB20723, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarLogLevel
struct ovrAvatarLogLevel_t453BB5179AAD671F269EADE6AEA70C97BAE0A439 
{
public:
	// System.Int32 ovrAvatarLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarLogLevel_t453BB5179AAD671F269EADE6AEA70C97BAE0A439, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarLookAndFeelVersion
struct ovrAvatarLookAndFeelVersion_tF1FB1112A41803C5FE1567006D8AC167E6DD4B68 
{
public:
	// System.Int32 ovrAvatarLookAndFeelVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarLookAndFeelVersion_tF1FB1112A41803C5FE1567006D8AC167E6DD4B68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ovrAvatarTouch
struct ovrAvatarTouch_tB4D5DE66F796D25DC2C38CA36C9DB078E7041375 
{
public:
	// System.Int32 ovrAvatarTouch::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ovrAvatarTouch_tB4D5DE66F796D25DC2C38CA36C9DB078E7041375, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LocomotionTeleport/AimCollisionTypes
struct AimCollisionTypes_t19461B238D5F6617A2C06CAA2481276A3B546DAB 
{
public:
	// System.Int32 LocomotionTeleport/AimCollisionTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AimCollisionTypes_t19461B238D5F6617A2C06CAA2481276A3B546DAB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LocomotionTeleport/States
struct States_t676C5F34A4B2B2A616013FF0711FD0B64B406A30 
{
public:
	// System.Int32 LocomotionTeleport/States::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(States_t676C5F34A4B2B2A616013FF0711FD0B64B406A30, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LocomotionTeleport/TeleportIntentions
struct TeleportIntentions_t3C1051D0F76523608F90B2657C5AD07AC92A9268 
{
public:
	// System.Int32 LocomotionTeleport/TeleportIntentions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TeleportIntentions_t3C1051D0F76523608F90B2657C5AD07AC92A9268, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVRInput/Controller
struct Controller_tEEDA108639533B73057BAE8B95FE21725355C48F 
{
public:
	// System.Int32 OVRInput/Controller::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Controller_tEEDA108639533B73057BAE8B95FE21725355C48F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVROverlay/OverlayType
struct OverlayType_tA4C6425D93366BDC6B22B1B9780ED927FF5A8A91 
{
public:
	// System.Int32 OVROverlay/OverlayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OverlayType_tA4C6425D93366BDC6B22B1B9780ED927FF5A8A91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVRPassthroughLayer/ColorMapEditorType
struct ColorMapEditorType_t85C46260EEE76B5FF61B48B5DDE649B6A5B6A243 
{
public:
	// System.Int32 OVRPassthroughLayer/ColorMapEditorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMapEditorType_t85C46260EEE76B5FF61B48B5DDE649B6A5B6A243, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVRPassthroughLayer/ProjectionSurfaceType
struct ProjectionSurfaceType_t38ED74A7818DB18AF544F2BEC4EBE79F5474627D 
{
public:
	// System.Int32 OVRPassthroughLayer/ProjectionSurfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProjectionSurfaceType_t38ED74A7818DB18AF544F2BEC4EBE79F5474627D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OVRPlugin/InsightPassthroughColorMapType
struct InsightPassthroughColorMapType_tFC50BE8F852456675505EC936C8389280143C042 
{
public:
	// System.Int32 OVRPlugin/InsightPassthroughColorMapType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InsightPassthroughColorMapType_tFC50BE8F852456675505EC936C8389280143C042, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OvrAvatar/HandJoint
struct HandJoint_t9691EB1B0EB7A65A04D52FA8C077D5E9A3050189 
{
public:
	// System.Int32 OvrAvatar/HandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandJoint_t9691EB1B0EB7A65A04D52FA8C077D5E9A3050189, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OvrAvatar/HandType
struct HandType_t69906A6CF27BE046E421CCB7AF4CB6A994AC9D7B 
{
public:
	// System.Int32 OvrAvatar/HandType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandType_t69906A6CF27BE046E421CCB7AF4CB6A994AC9D7B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OvrAvatarDriver/PacketMode
struct PacketMode_t2CAB29584261B7C53C3F89543B38A9F7319ED10D 
{
public:
	// System.Int32 OvrAvatarDriver/PacketMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PacketMode_t2CAB29584261B7C53C3F89543B38A9F7319ED10D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OvrAvatarMaterialManager/AvatarMaterialConfig
struct AvatarMaterialConfig_t68C0A6847F7A05CF97CDF3580293DC0F7EDFC34D  : public RuntimeObject
{
public:
	// OvrAvatarMaterialManager/AvatarComponentMaterialProperties[] OvrAvatarMaterialManager/AvatarMaterialConfig::ComponentMaterialProperties
	AvatarComponentMaterialPropertiesU5BU5D_t6E3BDB3CB0001F5076F90A25543CADFDC3386E8B* ___ComponentMaterialProperties_0;
	// OvrAvatarMaterialManager/AvatarMaterialPropertyBlock OvrAvatarMaterialManager/AvatarMaterialConfig::MaterialPropertyBlock
	AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878  ___MaterialPropertyBlock_1;

public:
	inline static int32_t get_offset_of_ComponentMaterialProperties_0() { return static_cast<int32_t>(offsetof(AvatarMaterialConfig_t68C0A6847F7A05CF97CDF3580293DC0F7EDFC34D, ___ComponentMaterialProperties_0)); }
	inline AvatarComponentMaterialPropertiesU5BU5D_t6E3BDB3CB0001F5076F90A25543CADFDC3386E8B* get_ComponentMaterialProperties_0() const { return ___ComponentMaterialProperties_0; }
	inline AvatarComponentMaterialPropertiesU5BU5D_t6E3BDB3CB0001F5076F90A25543CADFDC3386E8B** get_address_of_ComponentMaterialProperties_0() { return &___ComponentMaterialProperties_0; }
	inline void set_ComponentMaterialProperties_0(AvatarComponentMaterialPropertiesU5BU5D_t6E3BDB3CB0001F5076F90A25543CADFDC3386E8B* value)
	{
		___ComponentMaterialProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ComponentMaterialProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of_MaterialPropertyBlock_1() { return static_cast<int32_t>(offsetof(AvatarMaterialConfig_t68C0A6847F7A05CF97CDF3580293DC0F7EDFC34D, ___MaterialPropertyBlock_1)); }
	inline AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878  get_MaterialPropertyBlock_1() const { return ___MaterialPropertyBlock_1; }
	inline AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878 * get_address_of_MaterialPropertyBlock_1() { return &___MaterialPropertyBlock_1; }
	inline void set_MaterialPropertyBlock_1(AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878  value)
	{
		___MaterialPropertyBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___MaterialPropertyBlock_1))->___Colors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___MaterialPropertyBlock_1))->___DiffuseIntensities_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___MaterialPropertyBlock_1))->___RimIntensities_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___MaterialPropertyBlock_1))->___ReflectionIntensities_3), (void*)NULL);
		#endif
	}
};


// OvrAvatarMaterialManager/TextureType
struct TextureType_t1853CD11F9304643F3B3CE9A02567CAA94D36791 
{
public:
	// System.Int32 OvrAvatarMaterialManager/TextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureType_t1853CD11F9304643F3B3CE9A02567CAA94D36791, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24
struct U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833  : public RuntimeObject
{
public:
	// System.Int32 OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OvrAvatarTextureCopyManager/TextureSet OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::textureSetToDelete
	TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  ___textureSetToDelete_2;
	// OvrAvatarTextureCopyManager OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::<>4__this
	OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * ___U3CU3E4__this_3;
	// System.Int32 OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::gameobjectID
	int32_t ___gameobjectID_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_textureSetToDelete_2() { return static_cast<int32_t>(offsetof(U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833, ___textureSetToDelete_2)); }
	inline TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  get_textureSetToDelete_2() const { return ___textureSetToDelete_2; }
	inline TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D * get_address_of_textureSetToDelete_2() { return &___textureSetToDelete_2; }
	inline void set_textureSetToDelete_2(TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  value)
	{
		___textureSetToDelete_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___textureSetToDelete_2))->___TextureIDSingleMeshPair_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833, ___U3CU3E4__this_3)); }
	inline OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_gameobjectID_4() { return static_cast<int32_t>(offsetof(U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833, ___gameobjectID_4)); }
	inline int32_t get_gameobjectID_4() const { return ___gameobjectID_4; }
	inline int32_t* get_address_of_gameobjectID_4() { return &___gameobjectID_4; }
	inline void set_gameobjectID_4(int32_t value)
	{
		___gameobjectID_4 = value;
	}
};


// P2PManager/MessageType
struct MessageType_t20F4307DE01FBFFD7A9C930F0EFD5A7F7B018353 
{
public:
	// System.Byte P2PManager/MessageType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageType_t20F4307DE01FBFFD7A9C930F0EFD5A7F7B018353, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13
struct U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4  : public RuntimeObject
{
public:
	// System.Int32 OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OculusSampleFramework.PanelHMDFollower OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::<>4__this
	PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::<newPanelPosition>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CnewPanelPositionU3E5__2_3;
	// System.Single OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::<startTime>5__3
	float ___U3CstartTimeU3E5__3_4;
	// System.Single OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::<endTime>5__4
	float ___U3CendTimeU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4, ___U3CU3E4__this_2)); }
	inline PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnewPanelPositionU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4, ___U3CnewPanelPositionU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CnewPanelPositionU3E5__2_3() const { return ___U3CnewPanelPositionU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CnewPanelPositionU3E5__2_3() { return &___U3CnewPanelPositionU3E5__2_3; }
	inline void set_U3CnewPanelPositionU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CnewPanelPositionU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4, ___U3CstartTimeU3E5__3_4)); }
	inline float get_U3CstartTimeU3E5__3_4() const { return ___U3CstartTimeU3E5__3_4; }
	inline float* get_address_of_U3CstartTimeU3E5__3_4() { return &___U3CstartTimeU3E5__3_4; }
	inline void set_U3CstartTimeU3E5__3_4(float value)
	{
		___U3CstartTimeU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CendTimeU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4, ___U3CendTimeU3E5__4_5)); }
	inline float get_U3CendTimeU3E5__4_5() const { return ___U3CendTimeU3E5__4_5; }
	inline float* get_address_of_U3CendTimeU3E5__4_5() { return &___U3CendTimeU3E5__4_5; }
	inline void set_U3CendTimeU3E5__4_5(float value)
	{
		___U3CendTimeU3E5__4_5 = value;
	}
};


// PassthroughBrush/BrushState
struct BrushState_t6E9BF09C61B3A1F7E4EB3A56D85DE89645DCC1A1 
{
public:
	// System.Int32 PassthroughBrush/BrushState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BrushState_t6E9BF09C61B3A1F7E4EB3A56D85DE89645DCC1A1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PassthroughStyler/<FadeToCurrentStyle>d__19
struct U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C  : public RuntimeObject
{
public:
	// System.Int32 PassthroughStyler/<FadeToCurrentStyle>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PassthroughStyler/<FadeToCurrentStyle>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PassthroughStyler PassthroughStyler/<FadeToCurrentStyle>d__19::<>4__this
	PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * ___U3CU3E4__this_2;
	// System.Single PassthroughStyler/<FadeToCurrentStyle>d__19::fadeTime
	float ___fadeTime_3;
	// System.Single PassthroughStyler/<FadeToCurrentStyle>d__19::<timer>5__2
	float ___U3CtimerU3E5__2_4;
	// System.Single PassthroughStyler/<FadeToCurrentStyle>d__19::<brightness>5__3
	float ___U3CbrightnessU3E5__3_5;
	// System.Single PassthroughStyler/<FadeToCurrentStyle>d__19::<contrast>5__4
	float ___U3CcontrastU3E5__4_6;
	// System.Single PassthroughStyler/<FadeToCurrentStyle>d__19::<posterize>5__5
	float ___U3CposterizeU3E5__5_7;
	// UnityEngine.Color PassthroughStyler/<FadeToCurrentStyle>d__19::<edgeCol>5__6
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CedgeColU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C, ___U3CU3E4__this_2)); }
	inline PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeTime_3() { return static_cast<int32_t>(offsetof(U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C, ___fadeTime_3)); }
	inline float get_fadeTime_3() const { return ___fadeTime_3; }
	inline float* get_address_of_fadeTime_3() { return &___fadeTime_3; }
	inline void set_fadeTime_3(float value)
	{
		___fadeTime_3 = value;
	}

	inline static int32_t get_offset_of_U3CtimerU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C, ___U3CtimerU3E5__2_4)); }
	inline float get_U3CtimerU3E5__2_4() const { return ___U3CtimerU3E5__2_4; }
	inline float* get_address_of_U3CtimerU3E5__2_4() { return &___U3CtimerU3E5__2_4; }
	inline void set_U3CtimerU3E5__2_4(float value)
	{
		___U3CtimerU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CbrightnessU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C, ___U3CbrightnessU3E5__3_5)); }
	inline float get_U3CbrightnessU3E5__3_5() const { return ___U3CbrightnessU3E5__3_5; }
	inline float* get_address_of_U3CbrightnessU3E5__3_5() { return &___U3CbrightnessU3E5__3_5; }
	inline void set_U3CbrightnessU3E5__3_5(float value)
	{
		___U3CbrightnessU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CcontrastU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C, ___U3CcontrastU3E5__4_6)); }
	inline float get_U3CcontrastU3E5__4_6() const { return ___U3CcontrastU3E5__4_6; }
	inline float* get_address_of_U3CcontrastU3E5__4_6() { return &___U3CcontrastU3E5__4_6; }
	inline void set_U3CcontrastU3E5__4_6(float value)
	{
		___U3CcontrastU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CposterizeU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C, ___U3CposterizeU3E5__5_7)); }
	inline float get_U3CposterizeU3E5__5_7() const { return ___U3CposterizeU3E5__5_7; }
	inline float* get_address_of_U3CposterizeU3E5__5_7() { return &___U3CposterizeU3E5__5_7; }
	inline void set_U3CposterizeU3E5__5_7(float value)
	{
		___U3CposterizeU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CedgeColU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C, ___U3CedgeColU3E5__6_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CedgeColU3E5__6_8() const { return ___U3CedgeColU3E5__6_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CedgeColU3E5__6_8() { return &___U3CedgeColU3E5__6_8; }
	inline void set_U3CedgeColU3E5__6_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CedgeColU3E5__6_8 = value;
	}
};


// PassthroughStyler/<FadeToDefaultPassthrough>d__20
struct U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732  : public RuntimeObject
{
public:
	// System.Int32 PassthroughStyler/<FadeToDefaultPassthrough>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PassthroughStyler/<FadeToDefaultPassthrough>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PassthroughStyler PassthroughStyler/<FadeToDefaultPassthrough>d__20::<>4__this
	PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * ___U3CU3E4__this_2;
	// System.Single PassthroughStyler/<FadeToDefaultPassthrough>d__20::fadeTime
	float ___fadeTime_3;
	// System.Single PassthroughStyler/<FadeToDefaultPassthrough>d__20::<timer>5__2
	float ___U3CtimerU3E5__2_4;
	// System.Single PassthroughStyler/<FadeToDefaultPassthrough>d__20::<brightness>5__3
	float ___U3CbrightnessU3E5__3_5;
	// System.Single PassthroughStyler/<FadeToDefaultPassthrough>d__20::<contrast>5__4
	float ___U3CcontrastU3E5__4_6;
	// System.Single PassthroughStyler/<FadeToDefaultPassthrough>d__20::<posterize>5__5
	float ___U3CposterizeU3E5__5_7;
	// UnityEngine.Color PassthroughStyler/<FadeToDefaultPassthrough>d__20::<edgeCol>5__6
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CedgeColU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732, ___U3CU3E4__this_2)); }
	inline PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeTime_3() { return static_cast<int32_t>(offsetof(U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732, ___fadeTime_3)); }
	inline float get_fadeTime_3() const { return ___fadeTime_3; }
	inline float* get_address_of_fadeTime_3() { return &___fadeTime_3; }
	inline void set_fadeTime_3(float value)
	{
		___fadeTime_3 = value;
	}

	inline static int32_t get_offset_of_U3CtimerU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732, ___U3CtimerU3E5__2_4)); }
	inline float get_U3CtimerU3E5__2_4() const { return ___U3CtimerU3E5__2_4; }
	inline float* get_address_of_U3CtimerU3E5__2_4() { return &___U3CtimerU3E5__2_4; }
	inline void set_U3CtimerU3E5__2_4(float value)
	{
		___U3CtimerU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CbrightnessU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732, ___U3CbrightnessU3E5__3_5)); }
	inline float get_U3CbrightnessU3E5__3_5() const { return ___U3CbrightnessU3E5__3_5; }
	inline float* get_address_of_U3CbrightnessU3E5__3_5() { return &___U3CbrightnessU3E5__3_5; }
	inline void set_U3CbrightnessU3E5__3_5(float value)
	{
		___U3CbrightnessU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CcontrastU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732, ___U3CcontrastU3E5__4_6)); }
	inline float get_U3CcontrastU3E5__4_6() const { return ___U3CcontrastU3E5__4_6; }
	inline float* get_address_of_U3CcontrastU3E5__4_6() { return &___U3CcontrastU3E5__4_6; }
	inline void set_U3CcontrastU3E5__4_6(float value)
	{
		___U3CcontrastU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CposterizeU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732, ___U3CposterizeU3E5__5_7)); }
	inline float get_U3CposterizeU3E5__5_7() const { return ___U3CposterizeU3E5__5_7; }
	inline float* get_address_of_U3CposterizeU3E5__5_7() { return &___U3CposterizeU3E5__5_7; }
	inline void set_U3CposterizeU3E5__5_7(float value)
	{
		___U3CposterizeU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CedgeColU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732, ___U3CedgeColU3E5__6_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CedgeColU3E5__6_8() const { return ___U3CedgeColU3E5__6_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CedgeColU3E5__6_8() { return &___U3CedgeColU3E5__6_8; }
	inline void set_U3CedgeColU3E5__6_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CedgeColU3E5__6_8 = value;
	}
};


// OculusSampleFramework.PinchStateModule/PinchState
struct PinchState_t0BCA2550BF63C405609CEA222111C1B7A3CC631F 
{
public:
	// System.Int32 OculusSampleFramework.PinchStateModule/PinchState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PinchState_t0BCA2550BF63C405609CEA222111C1B7A3CC631F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OculusSampleFramework.SelectionCylinder/SelectionState
struct SelectionState_t1ED50EF4F8ED5EDFD14D73EA6BEF2BAC58947A67 
{
public:
	// System.Int32 OculusSampleFramework.SelectionCylinder/SelectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectionState_t1ED50EF4F8ED5EDFD14D73EA6BEF2BAC58947A67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SocialPlatformManager/State
struct State_tB735C38369CD8ADDEC8761CE704DC1076C1C7C39 
{
public:
	// System.Int32 SocialPlatformManager/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tB735C38369CD8ADDEC8761CE704DC1076C1C7C39, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TeleportInputHandlerTouch/AimCapTouchButtons
struct AimCapTouchButtons_tC12ABE1B4441E9CEA94829FD366F28F5582F51BD 
{
public:
	// System.Int32 TeleportInputHandlerTouch/AimCapTouchButtons::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AimCapTouchButtons_tC12ABE1B4441E9CEA94829FD366F28F5582F51BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TeleportInputHandlerTouch/InputModes
struct InputModes_t792D4AEF46B007AE05356729430E1BA993E0CD97 
{
public:
	// System.Int32 TeleportInputHandlerTouch/InputModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputModes_t792D4AEF46B007AE05356729430E1BA993E0CD97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TeleportOrientationHandler/OrientationModes
struct OrientationModes_tC602DDEF74E8C16D61652A79A2755C32F4DE7BA5 
{
public:
	// System.Int32 TeleportOrientationHandler/OrientationModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationModes_tC602DDEF74E8C16D61652A79A2755C32F4DE7BA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TeleportTransitionWarp/<DoWarp>d__3
struct U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935  : public RuntimeObject
{
public:
	// System.Int32 TeleportTransitionWarp/<DoWarp>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TeleportTransitionWarp/<DoWarp>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TeleportTransitionWarp TeleportTransitionWarp/<DoWarp>d__3::<>4__this
	TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 TeleportTransitionWarp/<DoWarp>d__3::<startPosition>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartPositionU3E5__2_3;
	// System.Single TeleportTransitionWarp/<DoWarp>d__3::<elapsedTime>5__3
	float ___U3CelapsedTimeU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935, ___U3CU3E4__this_2)); }
	inline TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935, ___U3CstartPositionU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartPositionU3E5__2_3() const { return ___U3CstartPositionU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartPositionU3E5__2_3() { return &___U3CstartPositionU3E5__2_3; }
	inline void set_U3CstartPositionU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartPositionU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935, ___U3CelapsedTimeU3E5__3_4)); }
	inline float get_U3CelapsedTimeU3E5__3_4() const { return ___U3CelapsedTimeU3E5__3_4; }
	inline float* get_address_of_U3CelapsedTimeU3E5__3_4() { return &___U3CelapsedTimeU3E5__3_4; }
	inline void set_U3CelapsedTimeU3E5__3_4(float value)
	{
		___U3CelapsedTimeU3E5__3_4 = value;
	}
};


// OculusSampleFramework.TrackSegment/SegmentType
struct SegmentType_t75B6DB130F4401E0851F6346681BD0DD1C0DFE3A 
{
public:
	// System.Int32 OculusSampleFramework.TrackSegment/SegmentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SegmentType_t75B6DB130F4401E0851F6346681BD0DD1C0DFE3A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15
struct U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79  : public RuntimeObject
{
public:
	// System.Int32 OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OculusSampleFramework.TrainCrossingController OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<>4__this
	TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * ___U3CU3E4__this_2;
	// System.Single OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::animationLength
	float ___animationLength_3;
	// System.Single OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<animationEndTime>5__2
	float ___U3CanimationEndTimeU3E5__2_4;
	// System.Single OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<lightBlinkDuration>5__3
	float ___U3ClightBlinkDurationU3E5__3_5;
	// System.Single OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<lightBlinkStartTime>5__4
	float ___U3ClightBlinkStartTimeU3E5__4_6;
	// System.Single OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<lightBlinkEndTime>5__5
	float ___U3ClightBlinkEndTimeU3E5__5_7;
	// UnityEngine.Material OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<lightToBlinkOn>5__6
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3ClightToBlinkOnU3E5__6_8;
	// UnityEngine.Material OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<lightToBlinkOff>5__7
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3ClightToBlinkOffU3E5__7_9;
	// UnityEngine.Color OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<onColor>5__8
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3ConColorU3E5__8_10;
	// UnityEngine.Color OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<offColor>5__9
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CoffColorU3E5__9_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3CU3E4__this_2)); }
	inline TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_animationLength_3() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___animationLength_3)); }
	inline float get_animationLength_3() const { return ___animationLength_3; }
	inline float* get_address_of_animationLength_3() { return &___animationLength_3; }
	inline void set_animationLength_3(float value)
	{
		___animationLength_3 = value;
	}

	inline static int32_t get_offset_of_U3CanimationEndTimeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3CanimationEndTimeU3E5__2_4)); }
	inline float get_U3CanimationEndTimeU3E5__2_4() const { return ___U3CanimationEndTimeU3E5__2_4; }
	inline float* get_address_of_U3CanimationEndTimeU3E5__2_4() { return &___U3CanimationEndTimeU3E5__2_4; }
	inline void set_U3CanimationEndTimeU3E5__2_4(float value)
	{
		___U3CanimationEndTimeU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3ClightBlinkDurationU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3ClightBlinkDurationU3E5__3_5)); }
	inline float get_U3ClightBlinkDurationU3E5__3_5() const { return ___U3ClightBlinkDurationU3E5__3_5; }
	inline float* get_address_of_U3ClightBlinkDurationU3E5__3_5() { return &___U3ClightBlinkDurationU3E5__3_5; }
	inline void set_U3ClightBlinkDurationU3E5__3_5(float value)
	{
		___U3ClightBlinkDurationU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3ClightBlinkStartTimeU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3ClightBlinkStartTimeU3E5__4_6)); }
	inline float get_U3ClightBlinkStartTimeU3E5__4_6() const { return ___U3ClightBlinkStartTimeU3E5__4_6; }
	inline float* get_address_of_U3ClightBlinkStartTimeU3E5__4_6() { return &___U3ClightBlinkStartTimeU3E5__4_6; }
	inline void set_U3ClightBlinkStartTimeU3E5__4_6(float value)
	{
		___U3ClightBlinkStartTimeU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3ClightBlinkEndTimeU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3ClightBlinkEndTimeU3E5__5_7)); }
	inline float get_U3ClightBlinkEndTimeU3E5__5_7() const { return ___U3ClightBlinkEndTimeU3E5__5_7; }
	inline float* get_address_of_U3ClightBlinkEndTimeU3E5__5_7() { return &___U3ClightBlinkEndTimeU3E5__5_7; }
	inline void set_U3ClightBlinkEndTimeU3E5__5_7(float value)
	{
		___U3ClightBlinkEndTimeU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3ClightToBlinkOnU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3ClightToBlinkOnU3E5__6_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3ClightToBlinkOnU3E5__6_8() const { return ___U3ClightToBlinkOnU3E5__6_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3ClightToBlinkOnU3E5__6_8() { return &___U3ClightToBlinkOnU3E5__6_8; }
	inline void set_U3ClightToBlinkOnU3E5__6_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3ClightToBlinkOnU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClightToBlinkOnU3E5__6_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClightToBlinkOffU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3ClightToBlinkOffU3E5__7_9)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3ClightToBlinkOffU3E5__7_9() const { return ___U3ClightToBlinkOffU3E5__7_9; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3ClightToBlinkOffU3E5__7_9() { return &___U3ClightToBlinkOffU3E5__7_9; }
	inline void set_U3ClightToBlinkOffU3E5__7_9(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3ClightToBlinkOffU3E5__7_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClightToBlinkOffU3E5__7_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConColorU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3ConColorU3E5__8_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3ConColorU3E5__8_10() const { return ___U3ConColorU3E5__8_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3ConColorU3E5__8_10() { return &___U3ConColorU3E5__8_10; }
	inline void set_U3ConColorU3E5__8_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3ConColorU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CoffColorU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79, ___U3CoffColorU3E5__9_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CoffColorU3E5__9_11() const { return ___U3CoffColorU3E5__9_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CoffColorU3E5__9_11() { return &___U3CoffColorU3E5__9_11; }
	inline void set_U3CoffColorU3E5__9_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CoffColorU3E5__9_11 = value;
	}
};


// OculusSampleFramework.TrainLocomotive/EngineSoundState
struct EngineSoundState_t9C153C06331D3432B0BD63DE85BA6B17B3BB11F2 
{
public:
	// System.Int32 OculusSampleFramework.TrainLocomotive/EngineSoundState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EngineSoundState_t9C153C06331D3432B0BD63DE85BA6B17B3BB11F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,OvrAvatarTextureCopyManager/TextureSet>
struct Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12, ___dictionary_0)); }
	inline Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12, ___current_3)); }
	inline KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___TextureIDSingleMeshPair_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// LocomotionTeleport/AimData
struct AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA  : public RuntimeObject
{
public:
	// UnityEngine.RaycastHit LocomotionTeleport/AimData::TargetHitInfo
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___TargetHitInfo_0;
	// System.Boolean LocomotionTeleport/AimData::TargetValid
	bool ___TargetValid_1;
	// System.Nullable`1<UnityEngine.Vector3> LocomotionTeleport/AimData::Destination
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___Destination_2;
	// System.Single LocomotionTeleport/AimData::Radius
	float ___Radius_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> LocomotionTeleport/AimData::<Points>k__BackingField
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___U3CPointsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_TargetHitInfo_0() { return static_cast<int32_t>(offsetof(AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA, ___TargetHitInfo_0)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_TargetHitInfo_0() const { return ___TargetHitInfo_0; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_TargetHitInfo_0() { return &___TargetHitInfo_0; }
	inline void set_TargetHitInfo_0(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___TargetHitInfo_0 = value;
	}

	inline static int32_t get_offset_of_TargetValid_1() { return static_cast<int32_t>(offsetof(AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA, ___TargetValid_1)); }
	inline bool get_TargetValid_1() const { return ___TargetValid_1; }
	inline bool* get_address_of_TargetValid_1() { return &___TargetValid_1; }
	inline void set_TargetValid_1(bool value)
	{
		___TargetValid_1 = value;
	}

	inline static int32_t get_offset_of_Destination_2() { return static_cast<int32_t>(offsetof(AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA, ___Destination_2)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_Destination_2() const { return ___Destination_2; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_Destination_2() { return &___Destination_2; }
	inline void set_Destination_2(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___Destination_2 = value;
	}

	inline static int32_t get_offset_of_Radius_3() { return static_cast<int32_t>(offsetof(AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA, ___Radius_3)); }
	inline float get_Radius_3() const { return ___Radius_3; }
	inline float* get_address_of_Radius_3() { return &___Radius_3; }
	inline void set_Radius_3(float value)
	{
		___Radius_3 = value;
	}

	inline static int32_t get_offset_of_U3CPointsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA, ___U3CPointsU3Ek__BackingField_4)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_U3CPointsU3Ek__BackingField_4() const { return ___U3CPointsU3Ek__BackingField_4; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_U3CPointsU3Ek__BackingField_4() { return &___U3CPointsU3Ek__BackingField_4; }
	inline void set_U3CPointsU3Ek__BackingField_4(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___U3CPointsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointsU3Ek__BackingField_4), (void*)value);
	}
};


// OvrAvatarDriver/ControllerPose
struct ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD 
{
public:
	// ovrAvatarButton OvrAvatarDriver/ControllerPose::buttons
	int32_t ___buttons_0;
	// ovrAvatarTouch OvrAvatarDriver/ControllerPose::touches
	int32_t ___touches_1;
	// UnityEngine.Vector2 OvrAvatarDriver/ControllerPose::joystickPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___joystickPosition_2;
	// System.Single OvrAvatarDriver/ControllerPose::indexTrigger
	float ___indexTrigger_3;
	// System.Single OvrAvatarDriver/ControllerPose::handTrigger
	float ___handTrigger_4;
	// System.Boolean OvrAvatarDriver/ControllerPose::isActive
	bool ___isActive_5;

public:
	inline static int32_t get_offset_of_buttons_0() { return static_cast<int32_t>(offsetof(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD, ___buttons_0)); }
	inline int32_t get_buttons_0() const { return ___buttons_0; }
	inline int32_t* get_address_of_buttons_0() { return &___buttons_0; }
	inline void set_buttons_0(int32_t value)
	{
		___buttons_0 = value;
	}

	inline static int32_t get_offset_of_touches_1() { return static_cast<int32_t>(offsetof(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD, ___touches_1)); }
	inline int32_t get_touches_1() const { return ___touches_1; }
	inline int32_t* get_address_of_touches_1() { return &___touches_1; }
	inline void set_touches_1(int32_t value)
	{
		___touches_1 = value;
	}

	inline static int32_t get_offset_of_joystickPosition_2() { return static_cast<int32_t>(offsetof(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD, ___joystickPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_joystickPosition_2() const { return ___joystickPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_joystickPosition_2() { return &___joystickPosition_2; }
	inline void set_joystickPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___joystickPosition_2 = value;
	}

	inline static int32_t get_offset_of_indexTrigger_3() { return static_cast<int32_t>(offsetof(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD, ___indexTrigger_3)); }
	inline float get_indexTrigger_3() const { return ___indexTrigger_3; }
	inline float* get_address_of_indexTrigger_3() { return &___indexTrigger_3; }
	inline void set_indexTrigger_3(float value)
	{
		___indexTrigger_3 = value;
	}

	inline static int32_t get_offset_of_handTrigger_4() { return static_cast<int32_t>(offsetof(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD, ___handTrigger_4)); }
	inline float get_handTrigger_4() const { return ___handTrigger_4; }
	inline float* get_address_of_handTrigger_4() { return &___handTrigger_4; }
	inline void set_handTrigger_4(float value)
	{
		___handTrigger_4 = value;
	}

	inline static int32_t get_offset_of_isActive_5() { return static_cast<int32_t>(offsetof(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD, ___isActive_5)); }
	inline bool get_isActive_5() const { return ___isActive_5; }
	inline bool* get_address_of_isActive_5() { return &___isActive_5; }
	inline void set_isActive_5(bool value)
	{
		___isActive_5 = value;
	}
};

// Native definition for P/Invoke marshalling of OvrAvatarDriver/ControllerPose
struct ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke
{
	int32_t ___buttons_0;
	int32_t ___touches_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___joystickPosition_2;
	float ___indexTrigger_3;
	float ___handTrigger_4;
	int32_t ___isActive_5;
};
// Native definition for COM marshalling of OvrAvatarDriver/ControllerPose
struct ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com
{
	int32_t ___buttons_0;
	int32_t ___touches_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___joystickPosition_2;
	float ___indexTrigger_3;
	float ___handTrigger_4;
	int32_t ___isActive_5;
};

// OvrAvatarMaterialManager/AvatarComponentMaterialProperties
struct AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110 
{
public:
	// ovrAvatarBodyPartType OvrAvatarMaterialManager/AvatarComponentMaterialProperties::TypeIndex
	int32_t ___TypeIndex_0;
	// UnityEngine.Color OvrAvatarMaterialManager/AvatarComponentMaterialProperties::Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Color_1;
	// UnityEngine.Texture2D[] OvrAvatarMaterialManager/AvatarComponentMaterialProperties::Textures
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___Textures_2;
	// System.Single OvrAvatarMaterialManager/AvatarComponentMaterialProperties::DiffuseIntensity
	float ___DiffuseIntensity_3;
	// System.Single OvrAvatarMaterialManager/AvatarComponentMaterialProperties::RimIntensity
	float ___RimIntensity_4;
	// System.Single OvrAvatarMaterialManager/AvatarComponentMaterialProperties::ReflectionIntensity
	float ___ReflectionIntensity_5;

public:
	inline static int32_t get_offset_of_TypeIndex_0() { return static_cast<int32_t>(offsetof(AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110, ___TypeIndex_0)); }
	inline int32_t get_TypeIndex_0() const { return ___TypeIndex_0; }
	inline int32_t* get_address_of_TypeIndex_0() { return &___TypeIndex_0; }
	inline void set_TypeIndex_0(int32_t value)
	{
		___TypeIndex_0 = value;
	}

	inline static int32_t get_offset_of_Color_1() { return static_cast<int32_t>(offsetof(AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110, ___Color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_Color_1() const { return ___Color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_Color_1() { return &___Color_1; }
	inline void set_Color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___Color_1 = value;
	}

	inline static int32_t get_offset_of_Textures_2() { return static_cast<int32_t>(offsetof(AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110, ___Textures_2)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_Textures_2() const { return ___Textures_2; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_Textures_2() { return &___Textures_2; }
	inline void set_Textures_2(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___Textures_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Textures_2), (void*)value);
	}

	inline static int32_t get_offset_of_DiffuseIntensity_3() { return static_cast<int32_t>(offsetof(AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110, ___DiffuseIntensity_3)); }
	inline float get_DiffuseIntensity_3() const { return ___DiffuseIntensity_3; }
	inline float* get_address_of_DiffuseIntensity_3() { return &___DiffuseIntensity_3; }
	inline void set_DiffuseIntensity_3(float value)
	{
		___DiffuseIntensity_3 = value;
	}

	inline static int32_t get_offset_of_RimIntensity_4() { return static_cast<int32_t>(offsetof(AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110, ___RimIntensity_4)); }
	inline float get_RimIntensity_4() const { return ___RimIntensity_4; }
	inline float* get_address_of_RimIntensity_4() { return &___RimIntensity_4; }
	inline void set_RimIntensity_4(float value)
	{
		___RimIntensity_4 = value;
	}

	inline static int32_t get_offset_of_ReflectionIntensity_5() { return static_cast<int32_t>(offsetof(AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110, ___ReflectionIntensity_5)); }
	inline float get_ReflectionIntensity_5() const { return ___ReflectionIntensity_5; }
	inline float* get_address_of_ReflectionIntensity_5() { return &___ReflectionIntensity_5; }
	inline void set_ReflectionIntensity_5(float value)
	{
		___ReflectionIntensity_5 = value;
	}
};

// Native definition for P/Invoke marshalling of OvrAvatarMaterialManager/AvatarComponentMaterialProperties
struct AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshaled_pinvoke
{
	int32_t ___TypeIndex_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Color_1;
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___Textures_2;
	float ___DiffuseIntensity_3;
	float ___RimIntensity_4;
	float ___ReflectionIntensity_5;
};
// Native definition for COM marshalling of OvrAvatarMaterialManager/AvatarComponentMaterialProperties
struct AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshaled_com
{
	int32_t ___TypeIndex_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Color_1;
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___Textures_2;
	float ___DiffuseIntensity_3;
	float ___RimIntensity_4;
	float ___ReflectionIntensity_5;
};

// OvrAvatarSDKManager/AvatarSpecRequestParams
struct AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5 
{
public:
	// System.UInt64 OvrAvatarSDKManager/AvatarSpecRequestParams::_userId
	uint64_t ____userId_0;
	// specificationCallback OvrAvatarSDKManager/AvatarSpecRequestParams::_callback
	specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0 * ____callback_1;
	// System.Boolean OvrAvatarSDKManager/AvatarSpecRequestParams::_useCombinedMesh
	bool ____useCombinedMesh_2;
	// ovrAvatarAssetLevelOfDetail OvrAvatarSDKManager/AvatarSpecRequestParams::_lod
	int32_t ____lod_3;
	// System.Boolean OvrAvatarSDKManager/AvatarSpecRequestParams::_forceMobileTextureFormat
	bool ____forceMobileTextureFormat_4;
	// ovrAvatarLookAndFeelVersion OvrAvatarSDKManager/AvatarSpecRequestParams::_lookVersion
	int32_t ____lookVersion_5;
	// ovrAvatarLookAndFeelVersion OvrAvatarSDKManager/AvatarSpecRequestParams::_fallbackVersion
	int32_t ____fallbackVersion_6;
	// System.Boolean OvrAvatarSDKManager/AvatarSpecRequestParams::_enableExpressive
	bool ____enableExpressive_7;

public:
	inline static int32_t get_offset_of__userId_0() { return static_cast<int32_t>(offsetof(AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5, ____userId_0)); }
	inline uint64_t get__userId_0() const { return ____userId_0; }
	inline uint64_t* get_address_of__userId_0() { return &____userId_0; }
	inline void set__userId_0(uint64_t value)
	{
		____userId_0 = value;
	}

	inline static int32_t get_offset_of__callback_1() { return static_cast<int32_t>(offsetof(AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5, ____callback_1)); }
	inline specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0 * get__callback_1() const { return ____callback_1; }
	inline specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0 ** get_address_of__callback_1() { return &____callback_1; }
	inline void set__callback_1(specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0 * value)
	{
		____callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callback_1), (void*)value);
	}

	inline static int32_t get_offset_of__useCombinedMesh_2() { return static_cast<int32_t>(offsetof(AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5, ____useCombinedMesh_2)); }
	inline bool get__useCombinedMesh_2() const { return ____useCombinedMesh_2; }
	inline bool* get_address_of__useCombinedMesh_2() { return &____useCombinedMesh_2; }
	inline void set__useCombinedMesh_2(bool value)
	{
		____useCombinedMesh_2 = value;
	}

	inline static int32_t get_offset_of__lod_3() { return static_cast<int32_t>(offsetof(AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5, ____lod_3)); }
	inline int32_t get__lod_3() const { return ____lod_3; }
	inline int32_t* get_address_of__lod_3() { return &____lod_3; }
	inline void set__lod_3(int32_t value)
	{
		____lod_3 = value;
	}

	inline static int32_t get_offset_of__forceMobileTextureFormat_4() { return static_cast<int32_t>(offsetof(AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5, ____forceMobileTextureFormat_4)); }
	inline bool get__forceMobileTextureFormat_4() const { return ____forceMobileTextureFormat_4; }
	inline bool* get_address_of__forceMobileTextureFormat_4() { return &____forceMobileTextureFormat_4; }
	inline void set__forceMobileTextureFormat_4(bool value)
	{
		____forceMobileTextureFormat_4 = value;
	}

	inline static int32_t get_offset_of__lookVersion_5() { return static_cast<int32_t>(offsetof(AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5, ____lookVersion_5)); }
	inline int32_t get__lookVersion_5() const { return ____lookVersion_5; }
	inline int32_t* get_address_of__lookVersion_5() { return &____lookVersion_5; }
	inline void set__lookVersion_5(int32_t value)
	{
		____lookVersion_5 = value;
	}

	inline static int32_t get_offset_of__fallbackVersion_6() { return static_cast<int32_t>(offsetof(AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5, ____fallbackVersion_6)); }
	inline int32_t get__fallbackVersion_6() const { return ____fallbackVersion_6; }
	inline int32_t* get_address_of__fallbackVersion_6() { return &____fallbackVersion_6; }
	inline void set__fallbackVersion_6(int32_t value)
	{
		____fallbackVersion_6 = value;
	}

	inline static int32_t get_offset_of__enableExpressive_7() { return static_cast<int32_t>(offsetof(AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5, ____enableExpressive_7)); }
	inline bool get__enableExpressive_7() const { return ____enableExpressive_7; }
	inline bool* get_address_of__enableExpressive_7() { return &____enableExpressive_7; }
	inline void set__enableExpressive_7(bool value)
	{
		____enableExpressive_7 = value;
	}
};

// Native definition for P/Invoke marshalling of OvrAvatarSDKManager/AvatarSpecRequestParams
struct AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshaled_pinvoke
{
	uint64_t ____userId_0;
	Il2CppMethodPointer ____callback_1;
	int32_t ____useCombinedMesh_2;
	int32_t ____lod_3;
	int32_t ____forceMobileTextureFormat_4;
	int32_t ____lookVersion_5;
	int32_t ____fallbackVersion_6;
	int32_t ____enableExpressive_7;
};
// Native definition for COM marshalling of OvrAvatarSDKManager/AvatarSpecRequestParams
struct AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshaled_com
{
	uint64_t ____userId_0;
	Il2CppMethodPointer ____callback_1;
	int32_t ____useCombinedMesh_2;
	int32_t ____lod_3;
	int32_t ____forceMobileTextureFormat_4;
	int32_t ____lookVersion_5;
	int32_t ____fallbackVersion_6;
	int32_t ____enableExpressive_7;
};

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2DArray
struct Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// specificationCallback
struct specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0  : public MulticastDelegate_t
{
public:

public:
};


// OvrAvatarDriver/PoseFrame
struct PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7 
{
public:
	// UnityEngine.Vector3 OvrAvatarDriver/PoseFrame::headPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___headPosition_0;
	// UnityEngine.Quaternion OvrAvatarDriver/PoseFrame::headRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___headRotation_1;
	// UnityEngine.Vector3 OvrAvatarDriver/PoseFrame::handLeftPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___handLeftPosition_2;
	// UnityEngine.Quaternion OvrAvatarDriver/PoseFrame::handLeftRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___handLeftRotation_3;
	// UnityEngine.Vector3 OvrAvatarDriver/PoseFrame::handRightPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___handRightPosition_4;
	// UnityEngine.Quaternion OvrAvatarDriver/PoseFrame::handRightRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___handRightRotation_5;
	// System.Single OvrAvatarDriver/PoseFrame::voiceAmplitude
	float ___voiceAmplitude_6;
	// OvrAvatarDriver/ControllerPose OvrAvatarDriver/PoseFrame::controllerLeftPose
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  ___controllerLeftPose_7;
	// OvrAvatarDriver/ControllerPose OvrAvatarDriver/PoseFrame::controllerRightPose
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  ___controllerRightPose_8;

public:
	inline static int32_t get_offset_of_headPosition_0() { return static_cast<int32_t>(offsetof(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7, ___headPosition_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_headPosition_0() const { return ___headPosition_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_headPosition_0() { return &___headPosition_0; }
	inline void set_headPosition_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___headPosition_0 = value;
	}

	inline static int32_t get_offset_of_headRotation_1() { return static_cast<int32_t>(offsetof(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7, ___headRotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_headRotation_1() const { return ___headRotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_headRotation_1() { return &___headRotation_1; }
	inline void set_headRotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___headRotation_1 = value;
	}

	inline static int32_t get_offset_of_handLeftPosition_2() { return static_cast<int32_t>(offsetof(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7, ___handLeftPosition_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_handLeftPosition_2() const { return ___handLeftPosition_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_handLeftPosition_2() { return &___handLeftPosition_2; }
	inline void set_handLeftPosition_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___handLeftPosition_2 = value;
	}

	inline static int32_t get_offset_of_handLeftRotation_3() { return static_cast<int32_t>(offsetof(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7, ___handLeftRotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_handLeftRotation_3() const { return ___handLeftRotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_handLeftRotation_3() { return &___handLeftRotation_3; }
	inline void set_handLeftRotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___handLeftRotation_3 = value;
	}

	inline static int32_t get_offset_of_handRightPosition_4() { return static_cast<int32_t>(offsetof(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7, ___handRightPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_handRightPosition_4() const { return ___handRightPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_handRightPosition_4() { return &___handRightPosition_4; }
	inline void set_handRightPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___handRightPosition_4 = value;
	}

	inline static int32_t get_offset_of_handRightRotation_5() { return static_cast<int32_t>(offsetof(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7, ___handRightRotation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_handRightRotation_5() const { return ___handRightRotation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_handRightRotation_5() { return &___handRightRotation_5; }
	inline void set_handRightRotation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___handRightRotation_5 = value;
	}

	inline static int32_t get_offset_of_voiceAmplitude_6() { return static_cast<int32_t>(offsetof(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7, ___voiceAmplitude_6)); }
	inline float get_voiceAmplitude_6() const { return ___voiceAmplitude_6; }
	inline float* get_address_of_voiceAmplitude_6() { return &___voiceAmplitude_6; }
	inline void set_voiceAmplitude_6(float value)
	{
		___voiceAmplitude_6 = value;
	}

	inline static int32_t get_offset_of_controllerLeftPose_7() { return static_cast<int32_t>(offsetof(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7, ___controllerLeftPose_7)); }
	inline ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  get_controllerLeftPose_7() const { return ___controllerLeftPose_7; }
	inline ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * get_address_of_controllerLeftPose_7() { return &___controllerLeftPose_7; }
	inline void set_controllerLeftPose_7(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  value)
	{
		___controllerLeftPose_7 = value;
	}

	inline static int32_t get_offset_of_controllerRightPose_8() { return static_cast<int32_t>(offsetof(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7, ___controllerRightPose_8)); }
	inline ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  get_controllerRightPose_8() const { return ___controllerRightPose_8; }
	inline ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * get_address_of_controllerRightPose_8() { return &___controllerRightPose_8; }
	inline void set_controllerRightPose_8(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  value)
	{
		___controllerRightPose_8 = value;
	}
};

// Native definition for P/Invoke marshalling of OvrAvatarDriver/PoseFrame
struct PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___headPosition_0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___headRotation_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___handLeftPosition_2;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___handLeftRotation_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___handRightPosition_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___handRightRotation_5;
	float ___voiceAmplitude_6;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke ___controllerLeftPose_7;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke ___controllerRightPose_8;
};
// Native definition for COM marshalling of OvrAvatarDriver/PoseFrame
struct PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___headPosition_0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___headRotation_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___handLeftPosition_2;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___handLeftRotation_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___handRightPosition_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___handRightRotation_5;
	float ___voiceAmplitude_6;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com ___controllerLeftPose_7;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com ___controllerRightPose_8;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// LocomotionTeleport
struct LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean LocomotionTeleport::EnableMovementDuringReady
	bool ___EnableMovementDuringReady_4;
	// System.Boolean LocomotionTeleport::EnableMovementDuringAim
	bool ___EnableMovementDuringAim_5;
	// System.Boolean LocomotionTeleport::EnableMovementDuringPreTeleport
	bool ___EnableMovementDuringPreTeleport_6;
	// System.Boolean LocomotionTeleport::EnableMovementDuringPostTeleport
	bool ___EnableMovementDuringPostTeleport_7;
	// System.Boolean LocomotionTeleport::EnableRotationDuringReady
	bool ___EnableRotationDuringReady_8;
	// System.Boolean LocomotionTeleport::EnableRotationDuringAim
	bool ___EnableRotationDuringAim_9;
	// System.Boolean LocomotionTeleport::EnableRotationDuringPreTeleport
	bool ___EnableRotationDuringPreTeleport_10;
	// System.Boolean LocomotionTeleport::EnableRotationDuringPostTeleport
	bool ___EnableRotationDuringPostTeleport_11;
	// LocomotionTeleport/States LocomotionTeleport::<CurrentState>k__BackingField
	int32_t ___U3CCurrentStateU3Ek__BackingField_12;
	// TeleportAimHandler LocomotionTeleport::AimHandler
	TeleportAimHandler_tC1C6D09FC478B420E7C892ECCB6E625F537D3BBD * ___AimHandler_13;
	// TeleportDestination LocomotionTeleport::TeleportDestinationPrefab
	TeleportDestination_t1DCC2BDB675ACE76D915FE7251B4CB6C487811DA * ___TeleportDestinationPrefab_14;
	// System.Int32 LocomotionTeleport::TeleportDestinationLayer
	int32_t ___TeleportDestinationLayer_15;
	// System.Action`4<System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.Nullable`1<UnityEngine.Quaternion>> LocomotionTeleport::UpdateTeleportDestination
	Action_4_t9426C491AA37FE7E7E24FF3395FFAC5A60AAC07F * ___UpdateTeleportDestination_16;
	// TeleportInputHandler LocomotionTeleport::InputHandler
	TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * ___InputHandler_17;
	// LocomotionTeleport/TeleportIntentions LocomotionTeleport::CurrentIntention
	int32_t ___CurrentIntention_18;
	// System.Boolean LocomotionTeleport::IsPreTeleportRequested
	bool ___IsPreTeleportRequested_19;
	// System.Boolean LocomotionTeleport::IsTransitioning
	bool ___IsTransitioning_20;
	// System.Boolean LocomotionTeleport::IsPostTeleportRequested
	bool ___IsPostTeleportRequested_21;
	// TeleportDestination LocomotionTeleport::_teleportDestination
	TeleportDestination_t1DCC2BDB675ACE76D915FE7251B4CB6C487811DA * ____teleportDestination_22;
	// LocomotionController LocomotionTeleport::<LocomotionController>k__BackingField
	LocomotionController_tCA625CD0A5F52DDB33ECB2FAC435471C0C079719 * ___U3CLocomotionControllerU3Ek__BackingField_23;
	// LocomotionTeleport/AimCollisionTypes LocomotionTeleport::AimCollisionType
	int32_t ___AimCollisionType_24;
	// System.Boolean LocomotionTeleport::UseCharacterCollisionData
	bool ___UseCharacterCollisionData_25;
	// System.Single LocomotionTeleport::AimCollisionRadius
	float ___AimCollisionRadius_26;
	// System.Single LocomotionTeleport::AimCollisionHeight
	float ___AimCollisionHeight_27;
	// System.Action LocomotionTeleport::EnterStateReady
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___EnterStateReady_28;
	// System.Action LocomotionTeleport::EnterStateAim
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___EnterStateAim_29;
	// System.Action`1<LocomotionTeleport/AimData> LocomotionTeleport::UpdateAimData
	Action_1_t92198758A8B104AAC58CEBF1192A89AFDC67850B * ___UpdateAimData_30;
	// System.Action LocomotionTeleport::ExitStateAim
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___ExitStateAim_31;
	// System.Action LocomotionTeleport::EnterStateCancelAim
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___EnterStateCancelAim_32;
	// System.Action LocomotionTeleport::EnterStatePreTeleport
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___EnterStatePreTeleport_33;
	// System.Action LocomotionTeleport::EnterStateCancelTeleport
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___EnterStateCancelTeleport_34;
	// System.Action LocomotionTeleport::EnterStateTeleporting
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___EnterStateTeleporting_35;
	// System.Action LocomotionTeleport::EnterStatePostTeleport
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___EnterStatePostTeleport_36;
	// System.Action`3<UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion> LocomotionTeleport::Teleported
	Action_3_tA4F94900F976E775A483E76A95AB2A443C164EC2 * ___Teleported_37;

public:
	inline static int32_t get_offset_of_EnableMovementDuringReady_4() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnableMovementDuringReady_4)); }
	inline bool get_EnableMovementDuringReady_4() const { return ___EnableMovementDuringReady_4; }
	inline bool* get_address_of_EnableMovementDuringReady_4() { return &___EnableMovementDuringReady_4; }
	inline void set_EnableMovementDuringReady_4(bool value)
	{
		___EnableMovementDuringReady_4 = value;
	}

	inline static int32_t get_offset_of_EnableMovementDuringAim_5() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnableMovementDuringAim_5)); }
	inline bool get_EnableMovementDuringAim_5() const { return ___EnableMovementDuringAim_5; }
	inline bool* get_address_of_EnableMovementDuringAim_5() { return &___EnableMovementDuringAim_5; }
	inline void set_EnableMovementDuringAim_5(bool value)
	{
		___EnableMovementDuringAim_5 = value;
	}

	inline static int32_t get_offset_of_EnableMovementDuringPreTeleport_6() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnableMovementDuringPreTeleport_6)); }
	inline bool get_EnableMovementDuringPreTeleport_6() const { return ___EnableMovementDuringPreTeleport_6; }
	inline bool* get_address_of_EnableMovementDuringPreTeleport_6() { return &___EnableMovementDuringPreTeleport_6; }
	inline void set_EnableMovementDuringPreTeleport_6(bool value)
	{
		___EnableMovementDuringPreTeleport_6 = value;
	}

	inline static int32_t get_offset_of_EnableMovementDuringPostTeleport_7() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnableMovementDuringPostTeleport_7)); }
	inline bool get_EnableMovementDuringPostTeleport_7() const { return ___EnableMovementDuringPostTeleport_7; }
	inline bool* get_address_of_EnableMovementDuringPostTeleport_7() { return &___EnableMovementDuringPostTeleport_7; }
	inline void set_EnableMovementDuringPostTeleport_7(bool value)
	{
		___EnableMovementDuringPostTeleport_7 = value;
	}

	inline static int32_t get_offset_of_EnableRotationDuringReady_8() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnableRotationDuringReady_8)); }
	inline bool get_EnableRotationDuringReady_8() const { return ___EnableRotationDuringReady_8; }
	inline bool* get_address_of_EnableRotationDuringReady_8() { return &___EnableRotationDuringReady_8; }
	inline void set_EnableRotationDuringReady_8(bool value)
	{
		___EnableRotationDuringReady_8 = value;
	}

	inline static int32_t get_offset_of_EnableRotationDuringAim_9() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnableRotationDuringAim_9)); }
	inline bool get_EnableRotationDuringAim_9() const { return ___EnableRotationDuringAim_9; }
	inline bool* get_address_of_EnableRotationDuringAim_9() { return &___EnableRotationDuringAim_9; }
	inline void set_EnableRotationDuringAim_9(bool value)
	{
		___EnableRotationDuringAim_9 = value;
	}

	inline static int32_t get_offset_of_EnableRotationDuringPreTeleport_10() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnableRotationDuringPreTeleport_10)); }
	inline bool get_EnableRotationDuringPreTeleport_10() const { return ___EnableRotationDuringPreTeleport_10; }
	inline bool* get_address_of_EnableRotationDuringPreTeleport_10() { return &___EnableRotationDuringPreTeleport_10; }
	inline void set_EnableRotationDuringPreTeleport_10(bool value)
	{
		___EnableRotationDuringPreTeleport_10 = value;
	}

	inline static int32_t get_offset_of_EnableRotationDuringPostTeleport_11() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnableRotationDuringPostTeleport_11)); }
	inline bool get_EnableRotationDuringPostTeleport_11() const { return ___EnableRotationDuringPostTeleport_11; }
	inline bool* get_address_of_EnableRotationDuringPostTeleport_11() { return &___EnableRotationDuringPostTeleport_11; }
	inline void set_EnableRotationDuringPostTeleport_11(bool value)
	{
		___EnableRotationDuringPostTeleport_11 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentStateU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___U3CCurrentStateU3Ek__BackingField_12)); }
	inline int32_t get_U3CCurrentStateU3Ek__BackingField_12() const { return ___U3CCurrentStateU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CCurrentStateU3Ek__BackingField_12() { return &___U3CCurrentStateU3Ek__BackingField_12; }
	inline void set_U3CCurrentStateU3Ek__BackingField_12(int32_t value)
	{
		___U3CCurrentStateU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_AimHandler_13() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___AimHandler_13)); }
	inline TeleportAimHandler_tC1C6D09FC478B420E7C892ECCB6E625F537D3BBD * get_AimHandler_13() const { return ___AimHandler_13; }
	inline TeleportAimHandler_tC1C6D09FC478B420E7C892ECCB6E625F537D3BBD ** get_address_of_AimHandler_13() { return &___AimHandler_13; }
	inline void set_AimHandler_13(TeleportAimHandler_tC1C6D09FC478B420E7C892ECCB6E625F537D3BBD * value)
	{
		___AimHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AimHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_TeleportDestinationPrefab_14() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___TeleportDestinationPrefab_14)); }
	inline TeleportDestination_t1DCC2BDB675ACE76D915FE7251B4CB6C487811DA * get_TeleportDestinationPrefab_14() const { return ___TeleportDestinationPrefab_14; }
	inline TeleportDestination_t1DCC2BDB675ACE76D915FE7251B4CB6C487811DA ** get_address_of_TeleportDestinationPrefab_14() { return &___TeleportDestinationPrefab_14; }
	inline void set_TeleportDestinationPrefab_14(TeleportDestination_t1DCC2BDB675ACE76D915FE7251B4CB6C487811DA * value)
	{
		___TeleportDestinationPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TeleportDestinationPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_TeleportDestinationLayer_15() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___TeleportDestinationLayer_15)); }
	inline int32_t get_TeleportDestinationLayer_15() const { return ___TeleportDestinationLayer_15; }
	inline int32_t* get_address_of_TeleportDestinationLayer_15() { return &___TeleportDestinationLayer_15; }
	inline void set_TeleportDestinationLayer_15(int32_t value)
	{
		___TeleportDestinationLayer_15 = value;
	}

	inline static int32_t get_offset_of_UpdateTeleportDestination_16() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___UpdateTeleportDestination_16)); }
	inline Action_4_t9426C491AA37FE7E7E24FF3395FFAC5A60AAC07F * get_UpdateTeleportDestination_16() const { return ___UpdateTeleportDestination_16; }
	inline Action_4_t9426C491AA37FE7E7E24FF3395FFAC5A60AAC07F ** get_address_of_UpdateTeleportDestination_16() { return &___UpdateTeleportDestination_16; }
	inline void set_UpdateTeleportDestination_16(Action_4_t9426C491AA37FE7E7E24FF3395FFAC5A60AAC07F * value)
	{
		___UpdateTeleportDestination_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateTeleportDestination_16), (void*)value);
	}

	inline static int32_t get_offset_of_InputHandler_17() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___InputHandler_17)); }
	inline TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * get_InputHandler_17() const { return ___InputHandler_17; }
	inline TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D ** get_address_of_InputHandler_17() { return &___InputHandler_17; }
	inline void set_InputHandler_17(TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * value)
	{
		___InputHandler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputHandler_17), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentIntention_18() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___CurrentIntention_18)); }
	inline int32_t get_CurrentIntention_18() const { return ___CurrentIntention_18; }
	inline int32_t* get_address_of_CurrentIntention_18() { return &___CurrentIntention_18; }
	inline void set_CurrentIntention_18(int32_t value)
	{
		___CurrentIntention_18 = value;
	}

	inline static int32_t get_offset_of_IsPreTeleportRequested_19() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___IsPreTeleportRequested_19)); }
	inline bool get_IsPreTeleportRequested_19() const { return ___IsPreTeleportRequested_19; }
	inline bool* get_address_of_IsPreTeleportRequested_19() { return &___IsPreTeleportRequested_19; }
	inline void set_IsPreTeleportRequested_19(bool value)
	{
		___IsPreTeleportRequested_19 = value;
	}

	inline static int32_t get_offset_of_IsTransitioning_20() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___IsTransitioning_20)); }
	inline bool get_IsTransitioning_20() const { return ___IsTransitioning_20; }
	inline bool* get_address_of_IsTransitioning_20() { return &___IsTransitioning_20; }
	inline void set_IsTransitioning_20(bool value)
	{
		___IsTransitioning_20 = value;
	}

	inline static int32_t get_offset_of_IsPostTeleportRequested_21() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___IsPostTeleportRequested_21)); }
	inline bool get_IsPostTeleportRequested_21() const { return ___IsPostTeleportRequested_21; }
	inline bool* get_address_of_IsPostTeleportRequested_21() { return &___IsPostTeleportRequested_21; }
	inline void set_IsPostTeleportRequested_21(bool value)
	{
		___IsPostTeleportRequested_21 = value;
	}

	inline static int32_t get_offset_of__teleportDestination_22() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ____teleportDestination_22)); }
	inline TeleportDestination_t1DCC2BDB675ACE76D915FE7251B4CB6C487811DA * get__teleportDestination_22() const { return ____teleportDestination_22; }
	inline TeleportDestination_t1DCC2BDB675ACE76D915FE7251B4CB6C487811DA ** get_address_of__teleportDestination_22() { return &____teleportDestination_22; }
	inline void set__teleportDestination_22(TeleportDestination_t1DCC2BDB675ACE76D915FE7251B4CB6C487811DA * value)
	{
		____teleportDestination_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____teleportDestination_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocomotionControllerU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___U3CLocomotionControllerU3Ek__BackingField_23)); }
	inline LocomotionController_tCA625CD0A5F52DDB33ECB2FAC435471C0C079719 * get_U3CLocomotionControllerU3Ek__BackingField_23() const { return ___U3CLocomotionControllerU3Ek__BackingField_23; }
	inline LocomotionController_tCA625CD0A5F52DDB33ECB2FAC435471C0C079719 ** get_address_of_U3CLocomotionControllerU3Ek__BackingField_23() { return &___U3CLocomotionControllerU3Ek__BackingField_23; }
	inline void set_U3CLocomotionControllerU3Ek__BackingField_23(LocomotionController_tCA625CD0A5F52DDB33ECB2FAC435471C0C079719 * value)
	{
		___U3CLocomotionControllerU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocomotionControllerU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_AimCollisionType_24() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___AimCollisionType_24)); }
	inline int32_t get_AimCollisionType_24() const { return ___AimCollisionType_24; }
	inline int32_t* get_address_of_AimCollisionType_24() { return &___AimCollisionType_24; }
	inline void set_AimCollisionType_24(int32_t value)
	{
		___AimCollisionType_24 = value;
	}

	inline static int32_t get_offset_of_UseCharacterCollisionData_25() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___UseCharacterCollisionData_25)); }
	inline bool get_UseCharacterCollisionData_25() const { return ___UseCharacterCollisionData_25; }
	inline bool* get_address_of_UseCharacterCollisionData_25() { return &___UseCharacterCollisionData_25; }
	inline void set_UseCharacterCollisionData_25(bool value)
	{
		___UseCharacterCollisionData_25 = value;
	}

	inline static int32_t get_offset_of_AimCollisionRadius_26() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___AimCollisionRadius_26)); }
	inline float get_AimCollisionRadius_26() const { return ___AimCollisionRadius_26; }
	inline float* get_address_of_AimCollisionRadius_26() { return &___AimCollisionRadius_26; }
	inline void set_AimCollisionRadius_26(float value)
	{
		___AimCollisionRadius_26 = value;
	}

	inline static int32_t get_offset_of_AimCollisionHeight_27() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___AimCollisionHeight_27)); }
	inline float get_AimCollisionHeight_27() const { return ___AimCollisionHeight_27; }
	inline float* get_address_of_AimCollisionHeight_27() { return &___AimCollisionHeight_27; }
	inline void set_AimCollisionHeight_27(float value)
	{
		___AimCollisionHeight_27 = value;
	}

	inline static int32_t get_offset_of_EnterStateReady_28() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnterStateReady_28)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_EnterStateReady_28() const { return ___EnterStateReady_28; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_EnterStateReady_28() { return &___EnterStateReady_28; }
	inline void set_EnterStateReady_28(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___EnterStateReady_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStateReady_28), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStateAim_29() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnterStateAim_29)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_EnterStateAim_29() const { return ___EnterStateAim_29; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_EnterStateAim_29() { return &___EnterStateAim_29; }
	inline void set_EnterStateAim_29(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___EnterStateAim_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStateAim_29), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateAimData_30() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___UpdateAimData_30)); }
	inline Action_1_t92198758A8B104AAC58CEBF1192A89AFDC67850B * get_UpdateAimData_30() const { return ___UpdateAimData_30; }
	inline Action_1_t92198758A8B104AAC58CEBF1192A89AFDC67850B ** get_address_of_UpdateAimData_30() { return &___UpdateAimData_30; }
	inline void set_UpdateAimData_30(Action_1_t92198758A8B104AAC58CEBF1192A89AFDC67850B * value)
	{
		___UpdateAimData_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateAimData_30), (void*)value);
	}

	inline static int32_t get_offset_of_ExitStateAim_31() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___ExitStateAim_31)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_ExitStateAim_31() const { return ___ExitStateAim_31; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_ExitStateAim_31() { return &___ExitStateAim_31; }
	inline void set_ExitStateAim_31(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___ExitStateAim_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExitStateAim_31), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStateCancelAim_32() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnterStateCancelAim_32)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_EnterStateCancelAim_32() const { return ___EnterStateCancelAim_32; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_EnterStateCancelAim_32() { return &___EnterStateCancelAim_32; }
	inline void set_EnterStateCancelAim_32(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___EnterStateCancelAim_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStateCancelAim_32), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStatePreTeleport_33() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnterStatePreTeleport_33)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_EnterStatePreTeleport_33() const { return ___EnterStatePreTeleport_33; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_EnterStatePreTeleport_33() { return &___EnterStatePreTeleport_33; }
	inline void set_EnterStatePreTeleport_33(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___EnterStatePreTeleport_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStatePreTeleport_33), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStateCancelTeleport_34() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnterStateCancelTeleport_34)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_EnterStateCancelTeleport_34() const { return ___EnterStateCancelTeleport_34; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_EnterStateCancelTeleport_34() { return &___EnterStateCancelTeleport_34; }
	inline void set_EnterStateCancelTeleport_34(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___EnterStateCancelTeleport_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStateCancelTeleport_34), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStateTeleporting_35() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnterStateTeleporting_35)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_EnterStateTeleporting_35() const { return ___EnterStateTeleporting_35; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_EnterStateTeleporting_35() { return &___EnterStateTeleporting_35; }
	inline void set_EnterStateTeleporting_35(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___EnterStateTeleporting_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStateTeleporting_35), (void*)value);
	}

	inline static int32_t get_offset_of_EnterStatePostTeleport_36() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___EnterStatePostTeleport_36)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_EnterStatePostTeleport_36() const { return ___EnterStatePostTeleport_36; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_EnterStatePostTeleport_36() { return &___EnterStatePostTeleport_36; }
	inline void set_EnterStatePostTeleport_36(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___EnterStatePostTeleport_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnterStatePostTeleport_36), (void*)value);
	}

	inline static int32_t get_offset_of_Teleported_37() { return static_cast<int32_t>(offsetof(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206, ___Teleported_37)); }
	inline Action_3_tA4F94900F976E775A483E76A95AB2A443C164EC2 * get_Teleported_37() const { return ___Teleported_37; }
	inline Action_3_tA4F94900F976E775A483E76A95AB2A443C164EC2 ** get_address_of_Teleported_37() { return &___Teleported_37; }
	inline void set_Teleported_37(Action_3_tA4F94900F976E775A483E76A95AB2A443C164EC2 * value)
	{
		___Teleported_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Teleported_37), (void*)value);
	}
};


// OVRCameraRig
struct OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform OVRCameraRig::<trackingSpace>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtrackingSpaceU3Ek__BackingField_4;
	// UnityEngine.Transform OVRCameraRig::<leftEyeAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CleftEyeAnchorU3Ek__BackingField_5;
	// UnityEngine.Transform OVRCameraRig::<centerEyeAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CcenterEyeAnchorU3Ek__BackingField_6;
	// UnityEngine.Transform OVRCameraRig::<rightEyeAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CrightEyeAnchorU3Ek__BackingField_7;
	// UnityEngine.Transform OVRCameraRig::<leftHandAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CleftHandAnchorU3Ek__BackingField_8;
	// UnityEngine.Transform OVRCameraRig::<rightHandAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CrightHandAnchorU3Ek__BackingField_9;
	// UnityEngine.Transform OVRCameraRig::<leftControllerAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CleftControllerAnchorU3Ek__BackingField_10;
	// UnityEngine.Transform OVRCameraRig::<rightControllerAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CrightControllerAnchorU3Ek__BackingField_11;
	// UnityEngine.Transform OVRCameraRig::<trackerAnchor>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtrackerAnchorU3Ek__BackingField_12;
	// System.Action`1<OVRCameraRig> OVRCameraRig::UpdatedAnchors
	Action_1_t75B6371B869E36A42B0DFFC8D8B2630F1D659A6C * ___UpdatedAnchors_13;
	// System.Boolean OVRCameraRig::usePerEyeCameras
	bool ___usePerEyeCameras_14;
	// System.Boolean OVRCameraRig::useFixedUpdateForTracking
	bool ___useFixedUpdateForTracking_15;
	// System.Boolean OVRCameraRig::disableEyeAnchorCameras
	bool ___disableEyeAnchorCameras_16;
	// System.Boolean OVRCameraRig::_skipUpdate
	bool ____skipUpdate_17;
	// System.String OVRCameraRig::trackingSpaceName
	String_t* ___trackingSpaceName_18;
	// System.String OVRCameraRig::trackerAnchorName
	String_t* ___trackerAnchorName_19;
	// System.String OVRCameraRig::leftEyeAnchorName
	String_t* ___leftEyeAnchorName_20;
	// System.String OVRCameraRig::centerEyeAnchorName
	String_t* ___centerEyeAnchorName_21;
	// System.String OVRCameraRig::rightEyeAnchorName
	String_t* ___rightEyeAnchorName_22;
	// System.String OVRCameraRig::leftHandAnchorName
	String_t* ___leftHandAnchorName_23;
	// System.String OVRCameraRig::rightHandAnchorName
	String_t* ___rightHandAnchorName_24;
	// System.String OVRCameraRig::leftControllerAnchorName
	String_t* ___leftControllerAnchorName_25;
	// System.String OVRCameraRig::rightControllerAnchorName
	String_t* ___rightControllerAnchorName_26;
	// UnityEngine.Camera OVRCameraRig::_centerEyeCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____centerEyeCamera_27;
	// UnityEngine.Camera OVRCameraRig::_leftEyeCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____leftEyeCamera_28;
	// UnityEngine.Camera OVRCameraRig::_rightEyeCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____rightEyeCamera_29;

public:
	inline static int32_t get_offset_of_U3CtrackingSpaceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CtrackingSpaceU3Ek__BackingField_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtrackingSpaceU3Ek__BackingField_4() const { return ___U3CtrackingSpaceU3Ek__BackingField_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtrackingSpaceU3Ek__BackingField_4() { return &___U3CtrackingSpaceU3Ek__BackingField_4; }
	inline void set_U3CtrackingSpaceU3Ek__BackingField_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtrackingSpaceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingSpaceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAnchorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CleftEyeAnchorU3Ek__BackingField_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CleftEyeAnchorU3Ek__BackingField_5() const { return ___U3CleftEyeAnchorU3Ek__BackingField_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CleftEyeAnchorU3Ek__BackingField_5() { return &___U3CleftEyeAnchorU3Ek__BackingField_5; }
	inline void set_U3CleftEyeAnchorU3Ek__BackingField_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CleftEyeAnchorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAnchorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAnchorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CcenterEyeAnchorU3Ek__BackingField_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CcenterEyeAnchorU3Ek__BackingField_6() const { return ___U3CcenterEyeAnchorU3Ek__BackingField_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CcenterEyeAnchorU3Ek__BackingField_6() { return &___U3CcenterEyeAnchorU3Ek__BackingField_6; }
	inline void set_U3CcenterEyeAnchorU3Ek__BackingField_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CcenterEyeAnchorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAnchorU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAnchorU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CrightEyeAnchorU3Ek__BackingField_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CrightEyeAnchorU3Ek__BackingField_7() const { return ___U3CrightEyeAnchorU3Ek__BackingField_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CrightEyeAnchorU3Ek__BackingField_7() { return &___U3CrightEyeAnchorU3Ek__BackingField_7; }
	inline void set_U3CrightEyeAnchorU3Ek__BackingField_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CrightEyeAnchorU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAnchorU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftHandAnchorU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CleftHandAnchorU3Ek__BackingField_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CleftHandAnchorU3Ek__BackingField_8() const { return ___U3CleftHandAnchorU3Ek__BackingField_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CleftHandAnchorU3Ek__BackingField_8() { return &___U3CleftHandAnchorU3Ek__BackingField_8; }
	inline void set_U3CleftHandAnchorU3Ek__BackingField_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CleftHandAnchorU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftHandAnchorU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightHandAnchorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CrightHandAnchorU3Ek__BackingField_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CrightHandAnchorU3Ek__BackingField_9() const { return ___U3CrightHandAnchorU3Ek__BackingField_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CrightHandAnchorU3Ek__BackingField_9() { return &___U3CrightHandAnchorU3Ek__BackingField_9; }
	inline void set_U3CrightHandAnchorU3Ek__BackingField_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CrightHandAnchorU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightHandAnchorU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftControllerAnchorU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CleftControllerAnchorU3Ek__BackingField_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CleftControllerAnchorU3Ek__BackingField_10() const { return ___U3CleftControllerAnchorU3Ek__BackingField_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CleftControllerAnchorU3Ek__BackingField_10() { return &___U3CleftControllerAnchorU3Ek__BackingField_10; }
	inline void set_U3CleftControllerAnchorU3Ek__BackingField_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CleftControllerAnchorU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftControllerAnchorU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightControllerAnchorU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CrightControllerAnchorU3Ek__BackingField_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CrightControllerAnchorU3Ek__BackingField_11() const { return ___U3CrightControllerAnchorU3Ek__BackingField_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CrightControllerAnchorU3Ek__BackingField_11() { return &___U3CrightControllerAnchorU3Ek__BackingField_11; }
	inline void set_U3CrightControllerAnchorU3Ek__BackingField_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CrightControllerAnchorU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightControllerAnchorU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackerAnchorU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___U3CtrackerAnchorU3Ek__BackingField_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtrackerAnchorU3Ek__BackingField_12() const { return ___U3CtrackerAnchorU3Ek__BackingField_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtrackerAnchorU3Ek__BackingField_12() { return &___U3CtrackerAnchorU3Ek__BackingField_12; }
	inline void set_U3CtrackerAnchorU3Ek__BackingField_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtrackerAnchorU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackerAnchorU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatedAnchors_13() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___UpdatedAnchors_13)); }
	inline Action_1_t75B6371B869E36A42B0DFFC8D8B2630F1D659A6C * get_UpdatedAnchors_13() const { return ___UpdatedAnchors_13; }
	inline Action_1_t75B6371B869E36A42B0DFFC8D8B2630F1D659A6C ** get_address_of_UpdatedAnchors_13() { return &___UpdatedAnchors_13; }
	inline void set_UpdatedAnchors_13(Action_1_t75B6371B869E36A42B0DFFC8D8B2630F1D659A6C * value)
	{
		___UpdatedAnchors_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdatedAnchors_13), (void*)value);
	}

	inline static int32_t get_offset_of_usePerEyeCameras_14() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___usePerEyeCameras_14)); }
	inline bool get_usePerEyeCameras_14() const { return ___usePerEyeCameras_14; }
	inline bool* get_address_of_usePerEyeCameras_14() { return &___usePerEyeCameras_14; }
	inline void set_usePerEyeCameras_14(bool value)
	{
		___usePerEyeCameras_14 = value;
	}

	inline static int32_t get_offset_of_useFixedUpdateForTracking_15() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___useFixedUpdateForTracking_15)); }
	inline bool get_useFixedUpdateForTracking_15() const { return ___useFixedUpdateForTracking_15; }
	inline bool* get_address_of_useFixedUpdateForTracking_15() { return &___useFixedUpdateForTracking_15; }
	inline void set_useFixedUpdateForTracking_15(bool value)
	{
		___useFixedUpdateForTracking_15 = value;
	}

	inline static int32_t get_offset_of_disableEyeAnchorCameras_16() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___disableEyeAnchorCameras_16)); }
	inline bool get_disableEyeAnchorCameras_16() const { return ___disableEyeAnchorCameras_16; }
	inline bool* get_address_of_disableEyeAnchorCameras_16() { return &___disableEyeAnchorCameras_16; }
	inline void set_disableEyeAnchorCameras_16(bool value)
	{
		___disableEyeAnchorCameras_16 = value;
	}

	inline static int32_t get_offset_of__skipUpdate_17() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ____skipUpdate_17)); }
	inline bool get__skipUpdate_17() const { return ____skipUpdate_17; }
	inline bool* get_address_of__skipUpdate_17() { return &____skipUpdate_17; }
	inline void set__skipUpdate_17(bool value)
	{
		____skipUpdate_17 = value;
	}

	inline static int32_t get_offset_of_trackingSpaceName_18() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___trackingSpaceName_18)); }
	inline String_t* get_trackingSpaceName_18() const { return ___trackingSpaceName_18; }
	inline String_t** get_address_of_trackingSpaceName_18() { return &___trackingSpaceName_18; }
	inline void set_trackingSpaceName_18(String_t* value)
	{
		___trackingSpaceName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingSpaceName_18), (void*)value);
	}

	inline static int32_t get_offset_of_trackerAnchorName_19() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___trackerAnchorName_19)); }
	inline String_t* get_trackerAnchorName_19() const { return ___trackerAnchorName_19; }
	inline String_t** get_address_of_trackerAnchorName_19() { return &___trackerAnchorName_19; }
	inline void set_trackerAnchorName_19(String_t* value)
	{
		___trackerAnchorName_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackerAnchorName_19), (void*)value);
	}

	inline static int32_t get_offset_of_leftEyeAnchorName_20() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___leftEyeAnchorName_20)); }
	inline String_t* get_leftEyeAnchorName_20() const { return ___leftEyeAnchorName_20; }
	inline String_t** get_address_of_leftEyeAnchorName_20() { return &___leftEyeAnchorName_20; }
	inline void set_leftEyeAnchorName_20(String_t* value)
	{
		___leftEyeAnchorName_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftEyeAnchorName_20), (void*)value);
	}

	inline static int32_t get_offset_of_centerEyeAnchorName_21() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___centerEyeAnchorName_21)); }
	inline String_t* get_centerEyeAnchorName_21() const { return ___centerEyeAnchorName_21; }
	inline String_t** get_address_of_centerEyeAnchorName_21() { return &___centerEyeAnchorName_21; }
	inline void set_centerEyeAnchorName_21(String_t* value)
	{
		___centerEyeAnchorName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerEyeAnchorName_21), (void*)value);
	}

	inline static int32_t get_offset_of_rightEyeAnchorName_22() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___rightEyeAnchorName_22)); }
	inline String_t* get_rightEyeAnchorName_22() const { return ___rightEyeAnchorName_22; }
	inline String_t** get_address_of_rightEyeAnchorName_22() { return &___rightEyeAnchorName_22; }
	inline void set_rightEyeAnchorName_22(String_t* value)
	{
		___rightEyeAnchorName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightEyeAnchorName_22), (void*)value);
	}

	inline static int32_t get_offset_of_leftHandAnchorName_23() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___leftHandAnchorName_23)); }
	inline String_t* get_leftHandAnchorName_23() const { return ___leftHandAnchorName_23; }
	inline String_t** get_address_of_leftHandAnchorName_23() { return &___leftHandAnchorName_23; }
	inline void set_leftHandAnchorName_23(String_t* value)
	{
		___leftHandAnchorName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftHandAnchorName_23), (void*)value);
	}

	inline static int32_t get_offset_of_rightHandAnchorName_24() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___rightHandAnchorName_24)); }
	inline String_t* get_rightHandAnchorName_24() const { return ___rightHandAnchorName_24; }
	inline String_t** get_address_of_rightHandAnchorName_24() { return &___rightHandAnchorName_24; }
	inline void set_rightHandAnchorName_24(String_t* value)
	{
		___rightHandAnchorName_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightHandAnchorName_24), (void*)value);
	}

	inline static int32_t get_offset_of_leftControllerAnchorName_25() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___leftControllerAnchorName_25)); }
	inline String_t* get_leftControllerAnchorName_25() const { return ___leftControllerAnchorName_25; }
	inline String_t** get_address_of_leftControllerAnchorName_25() { return &___leftControllerAnchorName_25; }
	inline void set_leftControllerAnchorName_25(String_t* value)
	{
		___leftControllerAnchorName_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftControllerAnchorName_25), (void*)value);
	}

	inline static int32_t get_offset_of_rightControllerAnchorName_26() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ___rightControllerAnchorName_26)); }
	inline String_t* get_rightControllerAnchorName_26() const { return ___rightControllerAnchorName_26; }
	inline String_t** get_address_of_rightControllerAnchorName_26() { return &___rightControllerAnchorName_26; }
	inline void set_rightControllerAnchorName_26(String_t* value)
	{
		___rightControllerAnchorName_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightControllerAnchorName_26), (void*)value);
	}

	inline static int32_t get_offset_of__centerEyeCamera_27() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ____centerEyeCamera_27)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__centerEyeCamera_27() const { return ____centerEyeCamera_27; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__centerEyeCamera_27() { return &____centerEyeCamera_27; }
	inline void set__centerEyeCamera_27(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____centerEyeCamera_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____centerEyeCamera_27), (void*)value);
	}

	inline static int32_t get_offset_of__leftEyeCamera_28() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ____leftEyeCamera_28)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__leftEyeCamera_28() const { return ____leftEyeCamera_28; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__leftEyeCamera_28() { return &____leftEyeCamera_28; }
	inline void set__leftEyeCamera_28(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____leftEyeCamera_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____leftEyeCamera_28), (void*)value);
	}

	inline static int32_t get_offset_of__rightEyeCamera_29() { return static_cast<int32_t>(offsetof(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517, ____rightEyeCamera_29)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__rightEyeCamera_29() const { return ____rightEyeCamera_29; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__rightEyeCamera_29() { return &____rightEyeCamera_29; }
	inline void set__rightEyeCamera_29(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____rightEyeCamera_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rightEyeCamera_29), (void*)value);
	}
};


// OVRPassthroughLayer
struct OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OVRPassthroughLayer/ProjectionSurfaceType OVRPassthroughLayer::projectionSurfaceType
	int32_t ___projectionSurfaceType_4;
	// OVROverlay/OverlayType OVRPassthroughLayer::overlayType
	int32_t ___overlayType_5;
	// System.Int32 OVRPassthroughLayer::compositionDepth
	int32_t ___compositionDepth_6;
	// System.Boolean OVRPassthroughLayer::hidden
	bool ___hidden_7;
	// System.Boolean OVRPassthroughLayer::overridePerLayerColorScaleAndOffset
	bool ___overridePerLayerColorScaleAndOffset_8;
	// UnityEngine.Vector4 OVRPassthroughLayer::colorScale
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___colorScale_9;
	// UnityEngine.Vector4 OVRPassthroughLayer::colorOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___colorOffset_10;
	// OVRPassthroughLayer/ColorMapEditorType OVRPassthroughLayer::colorMapEditorType_
	int32_t ___colorMapEditorType__11;
	// UnityEngine.Gradient OVRPassthroughLayer::colorMapEditorGradient
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___colorMapEditorGradient_12;
	// UnityEngine.Gradient OVRPassthroughLayer::colorMapEditorGradientOld
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___colorMapEditorGradientOld_13;
	// System.Single OVRPassthroughLayer::colorMapEditorContrast
	float ___colorMapEditorContrast_14;
	// System.Single OVRPassthroughLayer::colorMapEditorContrast_
	float ___colorMapEditorContrast__15;
	// System.Single OVRPassthroughLayer::colorMapEditorBrightness
	float ___colorMapEditorBrightness_16;
	// System.Single OVRPassthroughLayer::colorMapEditorBrightness_
	float ___colorMapEditorBrightness__17;
	// System.Single OVRPassthroughLayer::colorMapEditorPosterize
	float ___colorMapEditorPosterize_18;
	// System.Single OVRPassthroughLayer::colorMapEditorPosterize_
	float ___colorMapEditorPosterize__19;
	// OVRCameraRig OVRPassthroughLayer::cameraRig
	OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * ___cameraRig_20;
	// System.Boolean OVRPassthroughLayer::cameraRigInitialized
	bool ___cameraRigInitialized_21;
	// UnityEngine.GameObject OVRPassthroughLayer::auxGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___auxGameObject_22;
	// OVROverlay OVRPassthroughLayer::passthroughOverlay
	OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 * ___passthroughOverlay_23;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,OVRPassthroughLayer/PassthroughMeshInstance> OVRPassthroughLayer::surfaceGameObjects
	Dictionary_2_t60275C105022D515270F8E8181130D8B1020CB74 * ___surfaceGameObjects_24;
	// System.Collections.Generic.List`1<OVRPassthroughLayer/DeferredPassthroughMeshAddition> OVRPassthroughLayer::deferredSurfaceGameObjects
	List_1_t3B0820C8464D06CB2C98E3D7C75B224815E79323 * ___deferredSurfaceGameObjects_25;
	// System.Single OVRPassthroughLayer::textureOpacity_
	float ___textureOpacity__26;
	// System.Boolean OVRPassthroughLayer::edgeRenderingEnabled_
	bool ___edgeRenderingEnabled__27;
	// UnityEngine.Color OVRPassthroughLayer::edgeColor_
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___edgeColor__28;
	// OVRPlugin/InsightPassthroughColorMapType OVRPassthroughLayer::colorMapType
	int32_t ___colorMapType_29;
	// System.Byte[] OVRPassthroughLayer::colorMapData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___colorMapData_30;
	// System.Runtime.InteropServices.GCHandle OVRPassthroughLayer::colorMapDataHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___colorMapDataHandle_31;
	// System.Boolean OVRPassthroughLayer::styleDirty
	bool ___styleDirty_32;

public:
	inline static int32_t get_offset_of_projectionSurfaceType_4() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___projectionSurfaceType_4)); }
	inline int32_t get_projectionSurfaceType_4() const { return ___projectionSurfaceType_4; }
	inline int32_t* get_address_of_projectionSurfaceType_4() { return &___projectionSurfaceType_4; }
	inline void set_projectionSurfaceType_4(int32_t value)
	{
		___projectionSurfaceType_4 = value;
	}

	inline static int32_t get_offset_of_overlayType_5() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___overlayType_5)); }
	inline int32_t get_overlayType_5() const { return ___overlayType_5; }
	inline int32_t* get_address_of_overlayType_5() { return &___overlayType_5; }
	inline void set_overlayType_5(int32_t value)
	{
		___overlayType_5 = value;
	}

	inline static int32_t get_offset_of_compositionDepth_6() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___compositionDepth_6)); }
	inline int32_t get_compositionDepth_6() const { return ___compositionDepth_6; }
	inline int32_t* get_address_of_compositionDepth_6() { return &___compositionDepth_6; }
	inline void set_compositionDepth_6(int32_t value)
	{
		___compositionDepth_6 = value;
	}

	inline static int32_t get_offset_of_hidden_7() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___hidden_7)); }
	inline bool get_hidden_7() const { return ___hidden_7; }
	inline bool* get_address_of_hidden_7() { return &___hidden_7; }
	inline void set_hidden_7(bool value)
	{
		___hidden_7 = value;
	}

	inline static int32_t get_offset_of_overridePerLayerColorScaleAndOffset_8() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___overridePerLayerColorScaleAndOffset_8)); }
	inline bool get_overridePerLayerColorScaleAndOffset_8() const { return ___overridePerLayerColorScaleAndOffset_8; }
	inline bool* get_address_of_overridePerLayerColorScaleAndOffset_8() { return &___overridePerLayerColorScaleAndOffset_8; }
	inline void set_overridePerLayerColorScaleAndOffset_8(bool value)
	{
		___overridePerLayerColorScaleAndOffset_8 = value;
	}

	inline static int32_t get_offset_of_colorScale_9() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorScale_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_colorScale_9() const { return ___colorScale_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_colorScale_9() { return &___colorScale_9; }
	inline void set_colorScale_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___colorScale_9 = value;
	}

	inline static int32_t get_offset_of_colorOffset_10() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorOffset_10)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_colorOffset_10() const { return ___colorOffset_10; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_colorOffset_10() { return &___colorOffset_10; }
	inline void set_colorOffset_10(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___colorOffset_10 = value;
	}

	inline static int32_t get_offset_of_colorMapEditorType__11() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapEditorType__11)); }
	inline int32_t get_colorMapEditorType__11() const { return ___colorMapEditorType__11; }
	inline int32_t* get_address_of_colorMapEditorType__11() { return &___colorMapEditorType__11; }
	inline void set_colorMapEditorType__11(int32_t value)
	{
		___colorMapEditorType__11 = value;
	}

	inline static int32_t get_offset_of_colorMapEditorGradient_12() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapEditorGradient_12)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_colorMapEditorGradient_12() const { return ___colorMapEditorGradient_12; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_colorMapEditorGradient_12() { return &___colorMapEditorGradient_12; }
	inline void set_colorMapEditorGradient_12(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___colorMapEditorGradient_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorMapEditorGradient_12), (void*)value);
	}

	inline static int32_t get_offset_of_colorMapEditorGradientOld_13() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapEditorGradientOld_13)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_colorMapEditorGradientOld_13() const { return ___colorMapEditorGradientOld_13; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_colorMapEditorGradientOld_13() { return &___colorMapEditorGradientOld_13; }
	inline void set_colorMapEditorGradientOld_13(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___colorMapEditorGradientOld_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorMapEditorGradientOld_13), (void*)value);
	}

	inline static int32_t get_offset_of_colorMapEditorContrast_14() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapEditorContrast_14)); }
	inline float get_colorMapEditorContrast_14() const { return ___colorMapEditorContrast_14; }
	inline float* get_address_of_colorMapEditorContrast_14() { return &___colorMapEditorContrast_14; }
	inline void set_colorMapEditorContrast_14(float value)
	{
		___colorMapEditorContrast_14 = value;
	}

	inline static int32_t get_offset_of_colorMapEditorContrast__15() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapEditorContrast__15)); }
	inline float get_colorMapEditorContrast__15() const { return ___colorMapEditorContrast__15; }
	inline float* get_address_of_colorMapEditorContrast__15() { return &___colorMapEditorContrast__15; }
	inline void set_colorMapEditorContrast__15(float value)
	{
		___colorMapEditorContrast__15 = value;
	}

	inline static int32_t get_offset_of_colorMapEditorBrightness_16() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapEditorBrightness_16)); }
	inline float get_colorMapEditorBrightness_16() const { return ___colorMapEditorBrightness_16; }
	inline float* get_address_of_colorMapEditorBrightness_16() { return &___colorMapEditorBrightness_16; }
	inline void set_colorMapEditorBrightness_16(float value)
	{
		___colorMapEditorBrightness_16 = value;
	}

	inline static int32_t get_offset_of_colorMapEditorBrightness__17() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapEditorBrightness__17)); }
	inline float get_colorMapEditorBrightness__17() const { return ___colorMapEditorBrightness__17; }
	inline float* get_address_of_colorMapEditorBrightness__17() { return &___colorMapEditorBrightness__17; }
	inline void set_colorMapEditorBrightness__17(float value)
	{
		___colorMapEditorBrightness__17 = value;
	}

	inline static int32_t get_offset_of_colorMapEditorPosterize_18() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapEditorPosterize_18)); }
	inline float get_colorMapEditorPosterize_18() const { return ___colorMapEditorPosterize_18; }
	inline float* get_address_of_colorMapEditorPosterize_18() { return &___colorMapEditorPosterize_18; }
	inline void set_colorMapEditorPosterize_18(float value)
	{
		___colorMapEditorPosterize_18 = value;
	}

	inline static int32_t get_offset_of_colorMapEditorPosterize__19() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapEditorPosterize__19)); }
	inline float get_colorMapEditorPosterize__19() const { return ___colorMapEditorPosterize__19; }
	inline float* get_address_of_colorMapEditorPosterize__19() { return &___colorMapEditorPosterize__19; }
	inline void set_colorMapEditorPosterize__19(float value)
	{
		___colorMapEditorPosterize__19 = value;
	}

	inline static int32_t get_offset_of_cameraRig_20() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___cameraRig_20)); }
	inline OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * get_cameraRig_20() const { return ___cameraRig_20; }
	inline OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 ** get_address_of_cameraRig_20() { return &___cameraRig_20; }
	inline void set_cameraRig_20(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * value)
	{
		___cameraRig_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraRig_20), (void*)value);
	}

	inline static int32_t get_offset_of_cameraRigInitialized_21() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___cameraRigInitialized_21)); }
	inline bool get_cameraRigInitialized_21() const { return ___cameraRigInitialized_21; }
	inline bool* get_address_of_cameraRigInitialized_21() { return &___cameraRigInitialized_21; }
	inline void set_cameraRigInitialized_21(bool value)
	{
		___cameraRigInitialized_21 = value;
	}

	inline static int32_t get_offset_of_auxGameObject_22() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___auxGameObject_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_auxGameObject_22() const { return ___auxGameObject_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_auxGameObject_22() { return &___auxGameObject_22; }
	inline void set_auxGameObject_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___auxGameObject_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___auxGameObject_22), (void*)value);
	}

	inline static int32_t get_offset_of_passthroughOverlay_23() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___passthroughOverlay_23)); }
	inline OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 * get_passthroughOverlay_23() const { return ___passthroughOverlay_23; }
	inline OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 ** get_address_of_passthroughOverlay_23() { return &___passthroughOverlay_23; }
	inline void set_passthroughOverlay_23(OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 * value)
	{
		___passthroughOverlay_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___passthroughOverlay_23), (void*)value);
	}

	inline static int32_t get_offset_of_surfaceGameObjects_24() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___surfaceGameObjects_24)); }
	inline Dictionary_2_t60275C105022D515270F8E8181130D8B1020CB74 * get_surfaceGameObjects_24() const { return ___surfaceGameObjects_24; }
	inline Dictionary_2_t60275C105022D515270F8E8181130D8B1020CB74 ** get_address_of_surfaceGameObjects_24() { return &___surfaceGameObjects_24; }
	inline void set_surfaceGameObjects_24(Dictionary_2_t60275C105022D515270F8E8181130D8B1020CB74 * value)
	{
		___surfaceGameObjects_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___surfaceGameObjects_24), (void*)value);
	}

	inline static int32_t get_offset_of_deferredSurfaceGameObjects_25() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___deferredSurfaceGameObjects_25)); }
	inline List_1_t3B0820C8464D06CB2C98E3D7C75B224815E79323 * get_deferredSurfaceGameObjects_25() const { return ___deferredSurfaceGameObjects_25; }
	inline List_1_t3B0820C8464D06CB2C98E3D7C75B224815E79323 ** get_address_of_deferredSurfaceGameObjects_25() { return &___deferredSurfaceGameObjects_25; }
	inline void set_deferredSurfaceGameObjects_25(List_1_t3B0820C8464D06CB2C98E3D7C75B224815E79323 * value)
	{
		___deferredSurfaceGameObjects_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deferredSurfaceGameObjects_25), (void*)value);
	}

	inline static int32_t get_offset_of_textureOpacity__26() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___textureOpacity__26)); }
	inline float get_textureOpacity__26() const { return ___textureOpacity__26; }
	inline float* get_address_of_textureOpacity__26() { return &___textureOpacity__26; }
	inline void set_textureOpacity__26(float value)
	{
		___textureOpacity__26 = value;
	}

	inline static int32_t get_offset_of_edgeRenderingEnabled__27() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___edgeRenderingEnabled__27)); }
	inline bool get_edgeRenderingEnabled__27() const { return ___edgeRenderingEnabled__27; }
	inline bool* get_address_of_edgeRenderingEnabled__27() { return &___edgeRenderingEnabled__27; }
	inline void set_edgeRenderingEnabled__27(bool value)
	{
		___edgeRenderingEnabled__27 = value;
	}

	inline static int32_t get_offset_of_edgeColor__28() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___edgeColor__28)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_edgeColor__28() const { return ___edgeColor__28; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_edgeColor__28() { return &___edgeColor__28; }
	inline void set_edgeColor__28(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___edgeColor__28 = value;
	}

	inline static int32_t get_offset_of_colorMapType_29() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapType_29)); }
	inline int32_t get_colorMapType_29() const { return ___colorMapType_29; }
	inline int32_t* get_address_of_colorMapType_29() { return &___colorMapType_29; }
	inline void set_colorMapType_29(int32_t value)
	{
		___colorMapType_29 = value;
	}

	inline static int32_t get_offset_of_colorMapData_30() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapData_30)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_colorMapData_30() const { return ___colorMapData_30; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_colorMapData_30() { return &___colorMapData_30; }
	inline void set_colorMapData_30(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___colorMapData_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorMapData_30), (void*)value);
	}

	inline static int32_t get_offset_of_colorMapDataHandle_31() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___colorMapDataHandle_31)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_colorMapDataHandle_31() const { return ___colorMapDataHandle_31; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_colorMapDataHandle_31() { return &___colorMapDataHandle_31; }
	inline void set_colorMapDataHandle_31(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___colorMapDataHandle_31 = value;
	}

	inline static int32_t get_offset_of_styleDirty_32() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB, ___styleDirty_32)); }
	inline bool get_styleDirty_32() const { return ___styleDirty_32; }
	inline bool* get_address_of_styleDirty_32() { return &___styleDirty_32; }
	inline void set_styleDirty_32(bool value)
	{
		___styleDirty_32 = value;
	}
};

struct OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB_StaticFields
{
public:
	// UnityEngine.Gradient OVRPassthroughLayer::colorMapNeutralGradient
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___colorMapNeutralGradient_33;

public:
	inline static int32_t get_offset_of_colorMapNeutralGradient_33() { return static_cast<int32_t>(offsetof(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB_StaticFields, ___colorMapNeutralGradient_33)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_colorMapNeutralGradient_33() const { return ___colorMapNeutralGradient_33; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_colorMapNeutralGradient_33() { return &___colorMapNeutralGradient_33; }
	inline void set_colorMapNeutralGradient_33(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___colorMapNeutralGradient_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorMapNeutralGradient_33), (void*)value);
	}
};


// OvrAvatarMaterialManager
struct OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Renderer OvrAvatarMaterialManager::TargetRenderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___TargetRenderer_4;
	// OvrAvatarMaterialManager/AvatarTextureArrayProperties[] OvrAvatarMaterialManager::TextureArrays
	AvatarTextureArrayPropertiesU5BU5D_tDE8C7811BDC958AE418C1D0B8F3B9E2529A134D7* ___TextureArrays_5;
	// System.String[] OvrAvatarMaterialManager::TextureTypeToShaderProperties
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___TextureTypeToShaderProperties_6;
	// OvrAvatarMaterialManager/AvatarMaterialConfig OvrAvatarMaterialManager::LocalAvatarConfig
	AvatarMaterialConfig_t68C0A6847F7A05CF97CDF3580293DC0F7EDFC34D * ___LocalAvatarConfig_7;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.ReflectionProbeBlendInfo> OvrAvatarMaterialManager::ReflectionProbes
	List_1_tC72226AFC61EAED6CBFEFEFF41B3433931B7C8CE * ___ReflectionProbes_8;
	// UnityEngine.Shader OvrAvatarMaterialManager::CombinedShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___CombinedShader_9;

public:
	inline static int32_t get_offset_of_TargetRenderer_4() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720, ___TargetRenderer_4)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_TargetRenderer_4() const { return ___TargetRenderer_4; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_TargetRenderer_4() { return &___TargetRenderer_4; }
	inline void set_TargetRenderer_4(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___TargetRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_TextureArrays_5() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720, ___TextureArrays_5)); }
	inline AvatarTextureArrayPropertiesU5BU5D_tDE8C7811BDC958AE418C1D0B8F3B9E2529A134D7* get_TextureArrays_5() const { return ___TextureArrays_5; }
	inline AvatarTextureArrayPropertiesU5BU5D_tDE8C7811BDC958AE418C1D0B8F3B9E2529A134D7** get_address_of_TextureArrays_5() { return &___TextureArrays_5; }
	inline void set_TextureArrays_5(AvatarTextureArrayPropertiesU5BU5D_tDE8C7811BDC958AE418C1D0B8F3B9E2529A134D7* value)
	{
		___TextureArrays_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextureArrays_5), (void*)value);
	}

	inline static int32_t get_offset_of_TextureTypeToShaderProperties_6() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720, ___TextureTypeToShaderProperties_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_TextureTypeToShaderProperties_6() const { return ___TextureTypeToShaderProperties_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_TextureTypeToShaderProperties_6() { return &___TextureTypeToShaderProperties_6; }
	inline void set_TextureTypeToShaderProperties_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___TextureTypeToShaderProperties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextureTypeToShaderProperties_6), (void*)value);
	}

	inline static int32_t get_offset_of_LocalAvatarConfig_7() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720, ___LocalAvatarConfig_7)); }
	inline AvatarMaterialConfig_t68C0A6847F7A05CF97CDF3580293DC0F7EDFC34D * get_LocalAvatarConfig_7() const { return ___LocalAvatarConfig_7; }
	inline AvatarMaterialConfig_t68C0A6847F7A05CF97CDF3580293DC0F7EDFC34D ** get_address_of_LocalAvatarConfig_7() { return &___LocalAvatarConfig_7; }
	inline void set_LocalAvatarConfig_7(AvatarMaterialConfig_t68C0A6847F7A05CF97CDF3580293DC0F7EDFC34D * value)
	{
		___LocalAvatarConfig_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalAvatarConfig_7), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionProbes_8() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720, ___ReflectionProbes_8)); }
	inline List_1_tC72226AFC61EAED6CBFEFEFF41B3433931B7C8CE * get_ReflectionProbes_8() const { return ___ReflectionProbes_8; }
	inline List_1_tC72226AFC61EAED6CBFEFEFF41B3433931B7C8CE ** get_address_of_ReflectionProbes_8() { return &___ReflectionProbes_8; }
	inline void set_ReflectionProbes_8(List_1_tC72226AFC61EAED6CBFEFEFF41B3433931B7C8CE * value)
	{
		___ReflectionProbes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionProbes_8), (void*)value);
	}

	inline static int32_t get_offset_of_CombinedShader_9() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720, ___CombinedShader_9)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_CombinedShader_9() const { return ___CombinedShader_9; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_CombinedShader_9() { return &___CombinedShader_9; }
	inline void set_CombinedShader_9(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___CombinedShader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CombinedShader_9), (void*)value);
	}
};

struct OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields
{
public:
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_LOADER
	String_t* ___AVATAR_SHADER_LOADER_10;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_MAINTEX
	String_t* ___AVATAR_SHADER_MAINTEX_11;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_NORMALMAP
	String_t* ___AVATAR_SHADER_NORMALMAP_12;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_ROUGHNESSMAP
	String_t* ___AVATAR_SHADER_ROUGHNESSMAP_13;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_COLOR
	String_t* ___AVATAR_SHADER_COLOR_14;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_DIFFUSEINTENSITY
	String_t* ___AVATAR_SHADER_DIFFUSEINTENSITY_15;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_RIMINTENSITY
	String_t* ___AVATAR_SHADER_RIMINTENSITY_16;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_REFLECTIONINTENSITY
	String_t* ___AVATAR_SHADER_REFLECTIONINTENSITY_17;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_CUBEMAP
	String_t* ___AVATAR_SHADER_CUBEMAP_18;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_ALPHA
	String_t* ___AVATAR_SHADER_ALPHA_19;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_LOADING_DIMMER
	String_t* ___AVATAR_SHADER_LOADING_DIMMER_20;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_IRIS_COLOR
	String_t* ___AVATAR_SHADER_IRIS_COLOR_21;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_LIP_COLOR
	String_t* ___AVATAR_SHADER_LIP_COLOR_22;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_BROW_COLOR
	String_t* ___AVATAR_SHADER_BROW_COLOR_23;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_LASH_COLOR
	String_t* ___AVATAR_SHADER_LASH_COLOR_24;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_SCLERA_COLOR
	String_t* ___AVATAR_SHADER_SCLERA_COLOR_25;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_GUM_COLOR
	String_t* ___AVATAR_SHADER_GUM_COLOR_26;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_TEETH_COLOR
	String_t* ___AVATAR_SHADER_TEETH_COLOR_27;
	// System.String OvrAvatarMaterialManager::AVATAR_SHADER_LIP_SMOOTHNESS
	String_t* ___AVATAR_SHADER_LIP_SMOOTHNESS_28;
	// System.Single[] OvrAvatarMaterialManager::DiffuseIntensities
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___DiffuseIntensities_29;
	// System.Single[] OvrAvatarMaterialManager::RimIntensities
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___RimIntensities_30;
	// System.Single[] OvrAvatarMaterialManager::ReflectionIntensities
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___ReflectionIntensities_31;

public:
	inline static int32_t get_offset_of_AVATAR_SHADER_LOADER_10() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_LOADER_10)); }
	inline String_t* get_AVATAR_SHADER_LOADER_10() const { return ___AVATAR_SHADER_LOADER_10; }
	inline String_t** get_address_of_AVATAR_SHADER_LOADER_10() { return &___AVATAR_SHADER_LOADER_10; }
	inline void set_AVATAR_SHADER_LOADER_10(String_t* value)
	{
		___AVATAR_SHADER_LOADER_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_LOADER_10), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_MAINTEX_11() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_MAINTEX_11)); }
	inline String_t* get_AVATAR_SHADER_MAINTEX_11() const { return ___AVATAR_SHADER_MAINTEX_11; }
	inline String_t** get_address_of_AVATAR_SHADER_MAINTEX_11() { return &___AVATAR_SHADER_MAINTEX_11; }
	inline void set_AVATAR_SHADER_MAINTEX_11(String_t* value)
	{
		___AVATAR_SHADER_MAINTEX_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_MAINTEX_11), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_NORMALMAP_12() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_NORMALMAP_12)); }
	inline String_t* get_AVATAR_SHADER_NORMALMAP_12() const { return ___AVATAR_SHADER_NORMALMAP_12; }
	inline String_t** get_address_of_AVATAR_SHADER_NORMALMAP_12() { return &___AVATAR_SHADER_NORMALMAP_12; }
	inline void set_AVATAR_SHADER_NORMALMAP_12(String_t* value)
	{
		___AVATAR_SHADER_NORMALMAP_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_NORMALMAP_12), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_ROUGHNESSMAP_13() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_ROUGHNESSMAP_13)); }
	inline String_t* get_AVATAR_SHADER_ROUGHNESSMAP_13() const { return ___AVATAR_SHADER_ROUGHNESSMAP_13; }
	inline String_t** get_address_of_AVATAR_SHADER_ROUGHNESSMAP_13() { return &___AVATAR_SHADER_ROUGHNESSMAP_13; }
	inline void set_AVATAR_SHADER_ROUGHNESSMAP_13(String_t* value)
	{
		___AVATAR_SHADER_ROUGHNESSMAP_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_ROUGHNESSMAP_13), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_COLOR_14() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_COLOR_14)); }
	inline String_t* get_AVATAR_SHADER_COLOR_14() const { return ___AVATAR_SHADER_COLOR_14; }
	inline String_t** get_address_of_AVATAR_SHADER_COLOR_14() { return &___AVATAR_SHADER_COLOR_14; }
	inline void set_AVATAR_SHADER_COLOR_14(String_t* value)
	{
		___AVATAR_SHADER_COLOR_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_COLOR_14), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_DIFFUSEINTENSITY_15() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_DIFFUSEINTENSITY_15)); }
	inline String_t* get_AVATAR_SHADER_DIFFUSEINTENSITY_15() const { return ___AVATAR_SHADER_DIFFUSEINTENSITY_15; }
	inline String_t** get_address_of_AVATAR_SHADER_DIFFUSEINTENSITY_15() { return &___AVATAR_SHADER_DIFFUSEINTENSITY_15; }
	inline void set_AVATAR_SHADER_DIFFUSEINTENSITY_15(String_t* value)
	{
		___AVATAR_SHADER_DIFFUSEINTENSITY_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_DIFFUSEINTENSITY_15), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_RIMINTENSITY_16() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_RIMINTENSITY_16)); }
	inline String_t* get_AVATAR_SHADER_RIMINTENSITY_16() const { return ___AVATAR_SHADER_RIMINTENSITY_16; }
	inline String_t** get_address_of_AVATAR_SHADER_RIMINTENSITY_16() { return &___AVATAR_SHADER_RIMINTENSITY_16; }
	inline void set_AVATAR_SHADER_RIMINTENSITY_16(String_t* value)
	{
		___AVATAR_SHADER_RIMINTENSITY_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_RIMINTENSITY_16), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_REFLECTIONINTENSITY_17() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_REFLECTIONINTENSITY_17)); }
	inline String_t* get_AVATAR_SHADER_REFLECTIONINTENSITY_17() const { return ___AVATAR_SHADER_REFLECTIONINTENSITY_17; }
	inline String_t** get_address_of_AVATAR_SHADER_REFLECTIONINTENSITY_17() { return &___AVATAR_SHADER_REFLECTIONINTENSITY_17; }
	inline void set_AVATAR_SHADER_REFLECTIONINTENSITY_17(String_t* value)
	{
		___AVATAR_SHADER_REFLECTIONINTENSITY_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_REFLECTIONINTENSITY_17), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_CUBEMAP_18() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_CUBEMAP_18)); }
	inline String_t* get_AVATAR_SHADER_CUBEMAP_18() const { return ___AVATAR_SHADER_CUBEMAP_18; }
	inline String_t** get_address_of_AVATAR_SHADER_CUBEMAP_18() { return &___AVATAR_SHADER_CUBEMAP_18; }
	inline void set_AVATAR_SHADER_CUBEMAP_18(String_t* value)
	{
		___AVATAR_SHADER_CUBEMAP_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_CUBEMAP_18), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_ALPHA_19() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_ALPHA_19)); }
	inline String_t* get_AVATAR_SHADER_ALPHA_19() const { return ___AVATAR_SHADER_ALPHA_19; }
	inline String_t** get_address_of_AVATAR_SHADER_ALPHA_19() { return &___AVATAR_SHADER_ALPHA_19; }
	inline void set_AVATAR_SHADER_ALPHA_19(String_t* value)
	{
		___AVATAR_SHADER_ALPHA_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_ALPHA_19), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_LOADING_DIMMER_20() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_LOADING_DIMMER_20)); }
	inline String_t* get_AVATAR_SHADER_LOADING_DIMMER_20() const { return ___AVATAR_SHADER_LOADING_DIMMER_20; }
	inline String_t** get_address_of_AVATAR_SHADER_LOADING_DIMMER_20() { return &___AVATAR_SHADER_LOADING_DIMMER_20; }
	inline void set_AVATAR_SHADER_LOADING_DIMMER_20(String_t* value)
	{
		___AVATAR_SHADER_LOADING_DIMMER_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_LOADING_DIMMER_20), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_IRIS_COLOR_21() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_IRIS_COLOR_21)); }
	inline String_t* get_AVATAR_SHADER_IRIS_COLOR_21() const { return ___AVATAR_SHADER_IRIS_COLOR_21; }
	inline String_t** get_address_of_AVATAR_SHADER_IRIS_COLOR_21() { return &___AVATAR_SHADER_IRIS_COLOR_21; }
	inline void set_AVATAR_SHADER_IRIS_COLOR_21(String_t* value)
	{
		___AVATAR_SHADER_IRIS_COLOR_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_IRIS_COLOR_21), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_LIP_COLOR_22() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_LIP_COLOR_22)); }
	inline String_t* get_AVATAR_SHADER_LIP_COLOR_22() const { return ___AVATAR_SHADER_LIP_COLOR_22; }
	inline String_t** get_address_of_AVATAR_SHADER_LIP_COLOR_22() { return &___AVATAR_SHADER_LIP_COLOR_22; }
	inline void set_AVATAR_SHADER_LIP_COLOR_22(String_t* value)
	{
		___AVATAR_SHADER_LIP_COLOR_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_LIP_COLOR_22), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_BROW_COLOR_23() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_BROW_COLOR_23)); }
	inline String_t* get_AVATAR_SHADER_BROW_COLOR_23() const { return ___AVATAR_SHADER_BROW_COLOR_23; }
	inline String_t** get_address_of_AVATAR_SHADER_BROW_COLOR_23() { return &___AVATAR_SHADER_BROW_COLOR_23; }
	inline void set_AVATAR_SHADER_BROW_COLOR_23(String_t* value)
	{
		___AVATAR_SHADER_BROW_COLOR_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_BROW_COLOR_23), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_LASH_COLOR_24() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_LASH_COLOR_24)); }
	inline String_t* get_AVATAR_SHADER_LASH_COLOR_24() const { return ___AVATAR_SHADER_LASH_COLOR_24; }
	inline String_t** get_address_of_AVATAR_SHADER_LASH_COLOR_24() { return &___AVATAR_SHADER_LASH_COLOR_24; }
	inline void set_AVATAR_SHADER_LASH_COLOR_24(String_t* value)
	{
		___AVATAR_SHADER_LASH_COLOR_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_LASH_COLOR_24), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_SCLERA_COLOR_25() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_SCLERA_COLOR_25)); }
	inline String_t* get_AVATAR_SHADER_SCLERA_COLOR_25() const { return ___AVATAR_SHADER_SCLERA_COLOR_25; }
	inline String_t** get_address_of_AVATAR_SHADER_SCLERA_COLOR_25() { return &___AVATAR_SHADER_SCLERA_COLOR_25; }
	inline void set_AVATAR_SHADER_SCLERA_COLOR_25(String_t* value)
	{
		___AVATAR_SHADER_SCLERA_COLOR_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_SCLERA_COLOR_25), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_GUM_COLOR_26() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_GUM_COLOR_26)); }
	inline String_t* get_AVATAR_SHADER_GUM_COLOR_26() const { return ___AVATAR_SHADER_GUM_COLOR_26; }
	inline String_t** get_address_of_AVATAR_SHADER_GUM_COLOR_26() { return &___AVATAR_SHADER_GUM_COLOR_26; }
	inline void set_AVATAR_SHADER_GUM_COLOR_26(String_t* value)
	{
		___AVATAR_SHADER_GUM_COLOR_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_GUM_COLOR_26), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_TEETH_COLOR_27() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_TEETH_COLOR_27)); }
	inline String_t* get_AVATAR_SHADER_TEETH_COLOR_27() const { return ___AVATAR_SHADER_TEETH_COLOR_27; }
	inline String_t** get_address_of_AVATAR_SHADER_TEETH_COLOR_27() { return &___AVATAR_SHADER_TEETH_COLOR_27; }
	inline void set_AVATAR_SHADER_TEETH_COLOR_27(String_t* value)
	{
		___AVATAR_SHADER_TEETH_COLOR_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_TEETH_COLOR_27), (void*)value);
	}

	inline static int32_t get_offset_of_AVATAR_SHADER_LIP_SMOOTHNESS_28() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___AVATAR_SHADER_LIP_SMOOTHNESS_28)); }
	inline String_t* get_AVATAR_SHADER_LIP_SMOOTHNESS_28() const { return ___AVATAR_SHADER_LIP_SMOOTHNESS_28; }
	inline String_t** get_address_of_AVATAR_SHADER_LIP_SMOOTHNESS_28() { return &___AVATAR_SHADER_LIP_SMOOTHNESS_28; }
	inline void set_AVATAR_SHADER_LIP_SMOOTHNESS_28(String_t* value)
	{
		___AVATAR_SHADER_LIP_SMOOTHNESS_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AVATAR_SHADER_LIP_SMOOTHNESS_28), (void*)value);
	}

	inline static int32_t get_offset_of_DiffuseIntensities_29() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___DiffuseIntensities_29)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_DiffuseIntensities_29() const { return ___DiffuseIntensities_29; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_DiffuseIntensities_29() { return &___DiffuseIntensities_29; }
	inline void set_DiffuseIntensities_29(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___DiffuseIntensities_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DiffuseIntensities_29), (void*)value);
	}

	inline static int32_t get_offset_of_RimIntensities_30() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___RimIntensities_30)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_RimIntensities_30() const { return ___RimIntensities_30; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_RimIntensities_30() { return &___RimIntensities_30; }
	inline void set_RimIntensities_30(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___RimIntensities_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RimIntensities_30), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionIntensities_31() { return static_cast<int32_t>(offsetof(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields, ___ReflectionIntensities_31)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_ReflectionIntensities_31() const { return ___ReflectionIntensities_31; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_ReflectionIntensities_31() { return &___ReflectionIntensities_31; }
	inline void set_ReflectionIntensities_31(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___ReflectionIntensities_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionIntensities_31), (void*)value);
	}
};


// OvrAvatarSDKManager
struct OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean OvrAvatarSDKManager::initialized
	bool ___initialized_5;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.HashSet`1<specificationCallback>> OvrAvatarSDKManager::specificationCallbacks
	Dictionary_2_t291FE5C7453544D3C47B827F16644AF782ECD223 * ___specificationCallbacks_6;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.HashSet`1<assetLoadedCallback>> OvrAvatarSDKManager::assetLoadedCallbacks
	Dictionary_2_t2F8DD7BF76D77D4ED22813866E89A7482CF1129F * ___assetLoadedCallbacks_7;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,combinedMeshLoadedCallback> OvrAvatarSDKManager::combinedMeshLoadedCallbacks
	Dictionary_2_tB5BAAC270B98F46A05C8EE064E743C724CC64B9F * ___combinedMeshLoadedCallbacks_8;
	// System.Collections.Generic.Dictionary`2<System.UInt64,OvrAvatarAsset> OvrAvatarSDKManager::assetCache
	Dictionary_2_t213444F5327736C3930CC35F42E9F45A87C3E0A6 * ___assetCache_9;
	// OvrAvatarTextureCopyManager OvrAvatarSDKManager::textureCopyManager
	OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * ___textureCopyManager_10;
	// ovrAvatarLogLevel OvrAvatarSDKManager::LoggingLevel
	int32_t ___LoggingLevel_11;
	// System.Collections.Generic.Queue`1<OvrAvatarSDKManager/AvatarSpecRequestParams> OvrAvatarSDKManager::avatarSpecificationQueue
	Queue_1_t2B573F2B01F6763F8C85A5A7B2134791B4C545D4 * ___avatarSpecificationQueue_12;
	// System.Collections.Generic.List`1<System.Int32> OvrAvatarSDKManager::loadingAvatars
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___loadingAvatars_13;
	// System.Boolean OvrAvatarSDKManager::avatarSpecRequestAvailable
	bool ___avatarSpecRequestAvailable_14;
	// System.Single OvrAvatarSDKManager::lastDispatchedAvatarSpecRequestTime
	float ___lastDispatchedAvatarSpecRequestTime_15;

public:
	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}

	inline static int32_t get_offset_of_specificationCallbacks_6() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___specificationCallbacks_6)); }
	inline Dictionary_2_t291FE5C7453544D3C47B827F16644AF782ECD223 * get_specificationCallbacks_6() const { return ___specificationCallbacks_6; }
	inline Dictionary_2_t291FE5C7453544D3C47B827F16644AF782ECD223 ** get_address_of_specificationCallbacks_6() { return &___specificationCallbacks_6; }
	inline void set_specificationCallbacks_6(Dictionary_2_t291FE5C7453544D3C47B827F16644AF782ECD223 * value)
	{
		___specificationCallbacks_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___specificationCallbacks_6), (void*)value);
	}

	inline static int32_t get_offset_of_assetLoadedCallbacks_7() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___assetLoadedCallbacks_7)); }
	inline Dictionary_2_t2F8DD7BF76D77D4ED22813866E89A7482CF1129F * get_assetLoadedCallbacks_7() const { return ___assetLoadedCallbacks_7; }
	inline Dictionary_2_t2F8DD7BF76D77D4ED22813866E89A7482CF1129F ** get_address_of_assetLoadedCallbacks_7() { return &___assetLoadedCallbacks_7; }
	inline void set_assetLoadedCallbacks_7(Dictionary_2_t2F8DD7BF76D77D4ED22813866E89A7482CF1129F * value)
	{
		___assetLoadedCallbacks_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetLoadedCallbacks_7), (void*)value);
	}

	inline static int32_t get_offset_of_combinedMeshLoadedCallbacks_8() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___combinedMeshLoadedCallbacks_8)); }
	inline Dictionary_2_tB5BAAC270B98F46A05C8EE064E743C724CC64B9F * get_combinedMeshLoadedCallbacks_8() const { return ___combinedMeshLoadedCallbacks_8; }
	inline Dictionary_2_tB5BAAC270B98F46A05C8EE064E743C724CC64B9F ** get_address_of_combinedMeshLoadedCallbacks_8() { return &___combinedMeshLoadedCallbacks_8; }
	inline void set_combinedMeshLoadedCallbacks_8(Dictionary_2_tB5BAAC270B98F46A05C8EE064E743C724CC64B9F * value)
	{
		___combinedMeshLoadedCallbacks_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___combinedMeshLoadedCallbacks_8), (void*)value);
	}

	inline static int32_t get_offset_of_assetCache_9() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___assetCache_9)); }
	inline Dictionary_2_t213444F5327736C3930CC35F42E9F45A87C3E0A6 * get_assetCache_9() const { return ___assetCache_9; }
	inline Dictionary_2_t213444F5327736C3930CC35F42E9F45A87C3E0A6 ** get_address_of_assetCache_9() { return &___assetCache_9; }
	inline void set_assetCache_9(Dictionary_2_t213444F5327736C3930CC35F42E9F45A87C3E0A6 * value)
	{
		___assetCache_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetCache_9), (void*)value);
	}

	inline static int32_t get_offset_of_textureCopyManager_10() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___textureCopyManager_10)); }
	inline OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * get_textureCopyManager_10() const { return ___textureCopyManager_10; }
	inline OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A ** get_address_of_textureCopyManager_10() { return &___textureCopyManager_10; }
	inline void set_textureCopyManager_10(OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * value)
	{
		___textureCopyManager_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureCopyManager_10), (void*)value);
	}

	inline static int32_t get_offset_of_LoggingLevel_11() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___LoggingLevel_11)); }
	inline int32_t get_LoggingLevel_11() const { return ___LoggingLevel_11; }
	inline int32_t* get_address_of_LoggingLevel_11() { return &___LoggingLevel_11; }
	inline void set_LoggingLevel_11(int32_t value)
	{
		___LoggingLevel_11 = value;
	}

	inline static int32_t get_offset_of_avatarSpecificationQueue_12() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___avatarSpecificationQueue_12)); }
	inline Queue_1_t2B573F2B01F6763F8C85A5A7B2134791B4C545D4 * get_avatarSpecificationQueue_12() const { return ___avatarSpecificationQueue_12; }
	inline Queue_1_t2B573F2B01F6763F8C85A5A7B2134791B4C545D4 ** get_address_of_avatarSpecificationQueue_12() { return &___avatarSpecificationQueue_12; }
	inline void set_avatarSpecificationQueue_12(Queue_1_t2B573F2B01F6763F8C85A5A7B2134791B4C545D4 * value)
	{
		___avatarSpecificationQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___avatarSpecificationQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_loadingAvatars_13() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___loadingAvatars_13)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_loadingAvatars_13() const { return ___loadingAvatars_13; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_loadingAvatars_13() { return &___loadingAvatars_13; }
	inline void set_loadingAvatars_13(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___loadingAvatars_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingAvatars_13), (void*)value);
	}

	inline static int32_t get_offset_of_avatarSpecRequestAvailable_14() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___avatarSpecRequestAvailable_14)); }
	inline bool get_avatarSpecRequestAvailable_14() const { return ___avatarSpecRequestAvailable_14; }
	inline bool* get_address_of_avatarSpecRequestAvailable_14() { return &___avatarSpecRequestAvailable_14; }
	inline void set_avatarSpecRequestAvailable_14(bool value)
	{
		___avatarSpecRequestAvailable_14 = value;
	}

	inline static int32_t get_offset_of_lastDispatchedAvatarSpecRequestTime_15() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF, ___lastDispatchedAvatarSpecRequestTime_15)); }
	inline float get_lastDispatchedAvatarSpecRequestTime_15() const { return ___lastDispatchedAvatarSpecRequestTime_15; }
	inline float* get_address_of_lastDispatchedAvatarSpecRequestTime_15() { return &___lastDispatchedAvatarSpecRequestTime_15; }
	inline void set_lastDispatchedAvatarSpecRequestTime_15(float value)
	{
		___lastDispatchedAvatarSpecRequestTime_15 = value;
	}
};

struct OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF_StaticFields
{
public:
	// OvrAvatarSDKManager OvrAvatarSDKManager::_instance
	OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF_StaticFields, ____instance_4)); }
	inline OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF * get__instance_4() const { return ____instance_4; }
	inline OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// OvrAvatarTextureCopyManager
struct OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OvrAvatarTextureCopyManager/FallbackTextureSet[] OvrAvatarTextureCopyManager::FallbackTextureSets
	FallbackTextureSetU5BU5D_t52D9A01B29DF82A652EB1683D9BA01AB61F8A8E1* ___FallbackTextureSets_4;
	// System.Collections.Generic.Queue`1<OvrAvatarTextureCopyManager/CopyTextureParams> OvrAvatarTextureCopyManager::texturesToCopy
	Queue_1_t1378D533CBF04DE3BB5A019B078F5D7DC292B625 * ___texturesToCopy_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet> OvrAvatarTextureCopyManager::textureSets
	Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * ___textureSets_6;
	// System.String[] OvrAvatarTextureCopyManager::FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS_9;
	// System.String[] OvrAvatarTextureCopyManager::FALLBACK_TEXTURE_PATHS_NORMAL
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___FALLBACK_TEXTURE_PATHS_NORMAL_10;

public:
	inline static int32_t get_offset_of_FallbackTextureSets_4() { return static_cast<int32_t>(offsetof(OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A, ___FallbackTextureSets_4)); }
	inline FallbackTextureSetU5BU5D_t52D9A01B29DF82A652EB1683D9BA01AB61F8A8E1* get_FallbackTextureSets_4() const { return ___FallbackTextureSets_4; }
	inline FallbackTextureSetU5BU5D_t52D9A01B29DF82A652EB1683D9BA01AB61F8A8E1** get_address_of_FallbackTextureSets_4() { return &___FallbackTextureSets_4; }
	inline void set_FallbackTextureSets_4(FallbackTextureSetU5BU5D_t52D9A01B29DF82A652EB1683D9BA01AB61F8A8E1* value)
	{
		___FallbackTextureSets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FallbackTextureSets_4), (void*)value);
	}

	inline static int32_t get_offset_of_texturesToCopy_5() { return static_cast<int32_t>(offsetof(OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A, ___texturesToCopy_5)); }
	inline Queue_1_t1378D533CBF04DE3BB5A019B078F5D7DC292B625 * get_texturesToCopy_5() const { return ___texturesToCopy_5; }
	inline Queue_1_t1378D533CBF04DE3BB5A019B078F5D7DC292B625 ** get_address_of_texturesToCopy_5() { return &___texturesToCopy_5; }
	inline void set_texturesToCopy_5(Queue_1_t1378D533CBF04DE3BB5A019B078F5D7DC292B625 * value)
	{
		___texturesToCopy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texturesToCopy_5), (void*)value);
	}

	inline static int32_t get_offset_of_textureSets_6() { return static_cast<int32_t>(offsetof(OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A, ___textureSets_6)); }
	inline Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * get_textureSets_6() const { return ___textureSets_6; }
	inline Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 ** get_address_of_textureSets_6() { return &___textureSets_6; }
	inline void set_textureSets_6(Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * value)
	{
		___textureSets_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureSets_6), (void*)value);
	}

	inline static int32_t get_offset_of_FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS_9() { return static_cast<int32_t>(offsetof(OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A, ___FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS_9() const { return ___FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS_9() { return &___FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS_9; }
	inline void set_FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS_9), (void*)value);
	}

	inline static int32_t get_offset_of_FALLBACK_TEXTURE_PATHS_NORMAL_10() { return static_cast<int32_t>(offsetof(OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A, ___FALLBACK_TEXTURE_PATHS_NORMAL_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_FALLBACK_TEXTURE_PATHS_NORMAL_10() const { return ___FALLBACK_TEXTURE_PATHS_NORMAL_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_FALLBACK_TEXTURE_PATHS_NORMAL_10() { return &___FALLBACK_TEXTURE_PATHS_NORMAL_10; }
	inline void set_FALLBACK_TEXTURE_PATHS_NORMAL_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___FALLBACK_TEXTURE_PATHS_NORMAL_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FALLBACK_TEXTURE_PATHS_NORMAL_10), (void*)value);
	}
};


// OculusSampleFramework.PanelHMDFollower
struct PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single OculusSampleFramework.PanelHMDFollower::_maxDistance
	float ____maxDistance_6;
	// System.Single OculusSampleFramework.PanelHMDFollower::_minDistance
	float ____minDistance_7;
	// System.Single OculusSampleFramework.PanelHMDFollower::_minZDistance
	float ____minZDistance_8;
	// OVRCameraRig OculusSampleFramework.PanelHMDFollower::_cameraRig
	OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * ____cameraRig_9;
	// UnityEngine.Vector3 OculusSampleFramework.PanelHMDFollower::_panelInitialPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____panelInitialPosition_10;
	// UnityEngine.Coroutine OculusSampleFramework.PanelHMDFollower::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_11;
	// UnityEngine.Vector3 OculusSampleFramework.PanelHMDFollower::_prevPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____prevPos_12;
	// UnityEngine.Vector3 OculusSampleFramework.PanelHMDFollower::_lastMovedToPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____lastMovedToPos_13;

public:
	inline static int32_t get_offset_of__maxDistance_6() { return static_cast<int32_t>(offsetof(PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162, ____maxDistance_6)); }
	inline float get__maxDistance_6() const { return ____maxDistance_6; }
	inline float* get_address_of__maxDistance_6() { return &____maxDistance_6; }
	inline void set__maxDistance_6(float value)
	{
		____maxDistance_6 = value;
	}

	inline static int32_t get_offset_of__minDistance_7() { return static_cast<int32_t>(offsetof(PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162, ____minDistance_7)); }
	inline float get__minDistance_7() const { return ____minDistance_7; }
	inline float* get_address_of__minDistance_7() { return &____minDistance_7; }
	inline void set__minDistance_7(float value)
	{
		____minDistance_7 = value;
	}

	inline static int32_t get_offset_of__minZDistance_8() { return static_cast<int32_t>(offsetof(PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162, ____minZDistance_8)); }
	inline float get__minZDistance_8() const { return ____minZDistance_8; }
	inline float* get_address_of__minZDistance_8() { return &____minZDistance_8; }
	inline void set__minZDistance_8(float value)
	{
		____minZDistance_8 = value;
	}

	inline static int32_t get_offset_of__cameraRig_9() { return static_cast<int32_t>(offsetof(PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162, ____cameraRig_9)); }
	inline OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * get__cameraRig_9() const { return ____cameraRig_9; }
	inline OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 ** get_address_of__cameraRig_9() { return &____cameraRig_9; }
	inline void set__cameraRig_9(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * value)
	{
		____cameraRig_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cameraRig_9), (void*)value);
	}

	inline static int32_t get_offset_of__panelInitialPosition_10() { return static_cast<int32_t>(offsetof(PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162, ____panelInitialPosition_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__panelInitialPosition_10() const { return ____panelInitialPosition_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__panelInitialPosition_10() { return &____panelInitialPosition_10; }
	inline void set__panelInitialPosition_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____panelInitialPosition_10 = value;
	}

	inline static int32_t get_offset_of__coroutine_11() { return static_cast<int32_t>(offsetof(PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162, ____coroutine_11)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_11() const { return ____coroutine_11; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_11() { return &____coroutine_11; }
	inline void set__coroutine_11(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_11), (void*)value);
	}

	inline static int32_t get_offset_of__prevPos_12() { return static_cast<int32_t>(offsetof(PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162, ____prevPos_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__prevPos_12() const { return ____prevPos_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__prevPos_12() { return &____prevPos_12; }
	inline void set__prevPos_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____prevPos_12 = value;
	}

	inline static int32_t get_offset_of__lastMovedToPos_13() { return static_cast<int32_t>(offsetof(PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162, ____lastMovedToPos_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__lastMovedToPos_13() const { return ____lastMovedToPos_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__lastMovedToPos_13() { return &____lastMovedToPos_13; }
	inline void set__lastMovedToPos_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____lastMovedToPos_13 = value;
	}
};


// PassthroughStyler
struct PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OVRInput/Controller PassthroughStyler::controllerHand
	int32_t ___controllerHand_4;
	// OVRPassthroughLayer PassthroughStyler::passthroughLayer
	OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * ___passthroughLayer_5;
	// System.Collections.IEnumerator PassthroughStyler::fadeIn
	RuntimeObject* ___fadeIn_6;
	// System.Collections.IEnumerator PassthroughStyler::fadeOut
	RuntimeObject* ___fadeOut_7;
	// UnityEngine.RectTransform[] PassthroughStyler::menuOptions
	RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* ___menuOptions_8;
	// UnityEngine.RectTransform PassthroughStyler::colorWheel
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___colorWheel_9;
	// UnityEngine.Texture2D PassthroughStyler::colorTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___colorTexture_10;
	// UnityEngine.Vector3 PassthroughStyler::cursorPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cursorPosition_11;
	// System.Boolean PassthroughStyler::settingColor
	bool ___settingColor_12;
	// UnityEngine.Color PassthroughStyler::savedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___savedColor_13;
	// System.Single PassthroughStyler::savedBrightness
	float ___savedBrightness_14;
	// System.Single PassthroughStyler::savedContrast
	float ___savedContrast_15;
	// System.Single PassthroughStyler::savedPosterize
	float ___savedPosterize_16;
	// UnityEngine.CanvasGroup PassthroughStyler::mainCanvas
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___mainCanvas_17;
	// UnityEngine.GameObject[] PassthroughStyler::compactObjects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___compactObjects_18;

public:
	inline static int32_t get_offset_of_controllerHand_4() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___controllerHand_4)); }
	inline int32_t get_controllerHand_4() const { return ___controllerHand_4; }
	inline int32_t* get_address_of_controllerHand_4() { return &___controllerHand_4; }
	inline void set_controllerHand_4(int32_t value)
	{
		___controllerHand_4 = value;
	}

	inline static int32_t get_offset_of_passthroughLayer_5() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___passthroughLayer_5)); }
	inline OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * get_passthroughLayer_5() const { return ___passthroughLayer_5; }
	inline OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB ** get_address_of_passthroughLayer_5() { return &___passthroughLayer_5; }
	inline void set_passthroughLayer_5(OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * value)
	{
		___passthroughLayer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___passthroughLayer_5), (void*)value);
	}

	inline static int32_t get_offset_of_fadeIn_6() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___fadeIn_6)); }
	inline RuntimeObject* get_fadeIn_6() const { return ___fadeIn_6; }
	inline RuntimeObject** get_address_of_fadeIn_6() { return &___fadeIn_6; }
	inline void set_fadeIn_6(RuntimeObject* value)
	{
		___fadeIn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeIn_6), (void*)value);
	}

	inline static int32_t get_offset_of_fadeOut_7() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___fadeOut_7)); }
	inline RuntimeObject* get_fadeOut_7() const { return ___fadeOut_7; }
	inline RuntimeObject** get_address_of_fadeOut_7() { return &___fadeOut_7; }
	inline void set_fadeOut_7(RuntimeObject* value)
	{
		___fadeOut_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeOut_7), (void*)value);
	}

	inline static int32_t get_offset_of_menuOptions_8() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___menuOptions_8)); }
	inline RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* get_menuOptions_8() const { return ___menuOptions_8; }
	inline RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5** get_address_of_menuOptions_8() { return &___menuOptions_8; }
	inline void set_menuOptions_8(RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* value)
	{
		___menuOptions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuOptions_8), (void*)value);
	}

	inline static int32_t get_offset_of_colorWheel_9() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___colorWheel_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_colorWheel_9() const { return ___colorWheel_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_colorWheel_9() { return &___colorWheel_9; }
	inline void set_colorWheel_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___colorWheel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorWheel_9), (void*)value);
	}

	inline static int32_t get_offset_of_colorTexture_10() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___colorTexture_10)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_colorTexture_10() const { return ___colorTexture_10; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_colorTexture_10() { return &___colorTexture_10; }
	inline void set_colorTexture_10(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___colorTexture_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorTexture_10), (void*)value);
	}

	inline static int32_t get_offset_of_cursorPosition_11() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___cursorPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cursorPosition_11() const { return ___cursorPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cursorPosition_11() { return &___cursorPosition_11; }
	inline void set_cursorPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cursorPosition_11 = value;
	}

	inline static int32_t get_offset_of_settingColor_12() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___settingColor_12)); }
	inline bool get_settingColor_12() const { return ___settingColor_12; }
	inline bool* get_address_of_settingColor_12() { return &___settingColor_12; }
	inline void set_settingColor_12(bool value)
	{
		___settingColor_12 = value;
	}

	inline static int32_t get_offset_of_savedColor_13() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___savedColor_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_savedColor_13() const { return ___savedColor_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_savedColor_13() { return &___savedColor_13; }
	inline void set_savedColor_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___savedColor_13 = value;
	}

	inline static int32_t get_offset_of_savedBrightness_14() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___savedBrightness_14)); }
	inline float get_savedBrightness_14() const { return ___savedBrightness_14; }
	inline float* get_address_of_savedBrightness_14() { return &___savedBrightness_14; }
	inline void set_savedBrightness_14(float value)
	{
		___savedBrightness_14 = value;
	}

	inline static int32_t get_offset_of_savedContrast_15() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___savedContrast_15)); }
	inline float get_savedContrast_15() const { return ___savedContrast_15; }
	inline float* get_address_of_savedContrast_15() { return &___savedContrast_15; }
	inline void set_savedContrast_15(float value)
	{
		___savedContrast_15 = value;
	}

	inline static int32_t get_offset_of_savedPosterize_16() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___savedPosterize_16)); }
	inline float get_savedPosterize_16() const { return ___savedPosterize_16; }
	inline float* get_address_of_savedPosterize_16() { return &___savedPosterize_16; }
	inline void set_savedPosterize_16(float value)
	{
		___savedPosterize_16 = value;
	}

	inline static int32_t get_offset_of_mainCanvas_17() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___mainCanvas_17)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_mainCanvas_17() const { return ___mainCanvas_17; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_mainCanvas_17() { return &___mainCanvas_17; }
	inline void set_mainCanvas_17(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___mainCanvas_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCanvas_17), (void*)value);
	}

	inline static int32_t get_offset_of_compactObjects_18() { return static_cast<int32_t>(offsetof(PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32, ___compactObjects_18)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_compactObjects_18() const { return ___compactObjects_18; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_compactObjects_18() { return &___compactObjects_18; }
	inline void set_compactObjects_18(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___compactObjects_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compactObjects_18), (void*)value);
	}
};


// StartMenu
struct StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OVROverlay StartMenu::overlay
	OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 * ___overlay_4;
	// OVROverlay StartMenu::text
	OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 * ___text_5;
	// OVRCameraRig StartMenu::vrRig
	OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * ___vrRig_6;

public:
	inline static int32_t get_offset_of_overlay_4() { return static_cast<int32_t>(offsetof(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3, ___overlay_4)); }
	inline OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 * get_overlay_4() const { return ___overlay_4; }
	inline OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 ** get_address_of_overlay_4() { return &___overlay_4; }
	inline void set_overlay_4(OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 * value)
	{
		___overlay_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overlay_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3, ___text_5)); }
	inline OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 * get_text_5() const { return ___text_5; }
	inline OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(OVROverlay_t38325187DABEB39EACE0C5FA1102F149CB9B3BF7 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_vrRig_6() { return static_cast<int32_t>(offsetof(StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3, ___vrRig_6)); }
	inline OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * get_vrRig_6() const { return ___vrRig_6; }
	inline OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 ** get_address_of_vrRig_6() { return &___vrRig_6; }
	inline void set_vrRig_6(OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * value)
	{
		___vrRig_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vrRig_6), (void*)value);
	}
};


// TeleportSupport
struct TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// LocomotionTeleport TeleportSupport::<LocomotionTeleport>k__BackingField
	LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * ___U3CLocomotionTeleportU3Ek__BackingField_4;
	// System.Boolean TeleportSupport::_eventsActive
	bool ____eventsActive_5;

public:
	inline static int32_t get_offset_of_U3CLocomotionTeleportU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121, ___U3CLocomotionTeleportU3Ek__BackingField_4)); }
	inline LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * get_U3CLocomotionTeleportU3Ek__BackingField_4() const { return ___U3CLocomotionTeleportU3Ek__BackingField_4; }
	inline LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 ** get_address_of_U3CLocomotionTeleportU3Ek__BackingField_4() { return &___U3CLocomotionTeleportU3Ek__BackingField_4; }
	inline void set_U3CLocomotionTeleportU3Ek__BackingField_4(LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * value)
	{
		___U3CLocomotionTeleportU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocomotionTeleportU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of__eventsActive_5() { return static_cast<int32_t>(offsetof(TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121, ____eventsActive_5)); }
	inline bool get__eventsActive_5() const { return ____eventsActive_5; }
	inline bool* get_address_of__eventsActive_5() { return &____eventsActive_5; }
	inline void set__eventsActive_5(bool value)
	{
		____eventsActive_5 = value;
	}
};


// OculusSampleFramework.TrainButtonVisualController
struct TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MeshRenderer OculusSampleFramework.TrainButtonVisualController::_meshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ____meshRenderer_6;
	// UnityEngine.MeshRenderer OculusSampleFramework.TrainButtonVisualController::_glowRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ____glowRenderer_7;
	// OculusSampleFramework.ButtonController OculusSampleFramework.TrainButtonVisualController::_buttonController
	ButtonController_t8B501737B40B4D8F465F215CAC449B627A8EF000 * ____buttonController_8;
	// UnityEngine.Color OculusSampleFramework.TrainButtonVisualController::_buttonContactColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____buttonContactColor_9;
	// UnityEngine.Color OculusSampleFramework.TrainButtonVisualController::_buttonActionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____buttonActionColor_10;
	// UnityEngine.AudioSource OculusSampleFramework.TrainButtonVisualController::_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audioSource_11;
	// UnityEngine.AudioClip OculusSampleFramework.TrainButtonVisualController::_actionSoundEffect
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____actionSoundEffect_12;
	// UnityEngine.Transform OculusSampleFramework.TrainButtonVisualController::_buttonContactTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____buttonContactTransform_13;
	// System.Single OculusSampleFramework.TrainButtonVisualController::_contactMaxDisplacementDistance
	float ____contactMaxDisplacementDistance_14;
	// UnityEngine.Material OculusSampleFramework.TrainButtonVisualController::_buttonMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____buttonMaterial_15;
	// UnityEngine.Color OculusSampleFramework.TrainButtonVisualController::_buttonDefaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____buttonDefaultColor_16;
	// System.Int32 OculusSampleFramework.TrainButtonVisualController::_materialColorId
	int32_t ____materialColorId_17;
	// System.Boolean OculusSampleFramework.TrainButtonVisualController::_buttonInContactOrActionStates
	bool ____buttonInContactOrActionStates_18;
	// UnityEngine.Coroutine OculusSampleFramework.TrainButtonVisualController::_lerpToOldPositionCr
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____lerpToOldPositionCr_19;
	// UnityEngine.Vector3 OculusSampleFramework.TrainButtonVisualController::_oldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____oldPosition_20;

public:
	inline static int32_t get_offset_of__meshRenderer_6() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____meshRenderer_6)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get__meshRenderer_6() const { return ____meshRenderer_6; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of__meshRenderer_6() { return &____meshRenderer_6; }
	inline void set__meshRenderer_6(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		____meshRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshRenderer_6), (void*)value);
	}

	inline static int32_t get_offset_of__glowRenderer_7() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____glowRenderer_7)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get__glowRenderer_7() const { return ____glowRenderer_7; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of__glowRenderer_7() { return &____glowRenderer_7; }
	inline void set__glowRenderer_7(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		____glowRenderer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____glowRenderer_7), (void*)value);
	}

	inline static int32_t get_offset_of__buttonController_8() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____buttonController_8)); }
	inline ButtonController_t8B501737B40B4D8F465F215CAC449B627A8EF000 * get__buttonController_8() const { return ____buttonController_8; }
	inline ButtonController_t8B501737B40B4D8F465F215CAC449B627A8EF000 ** get_address_of__buttonController_8() { return &____buttonController_8; }
	inline void set__buttonController_8(ButtonController_t8B501737B40B4D8F465F215CAC449B627A8EF000 * value)
	{
		____buttonController_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonController_8), (void*)value);
	}

	inline static int32_t get_offset_of__buttonContactColor_9() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____buttonContactColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__buttonContactColor_9() const { return ____buttonContactColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__buttonContactColor_9() { return &____buttonContactColor_9; }
	inline void set__buttonContactColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____buttonContactColor_9 = value;
	}

	inline static int32_t get_offset_of__buttonActionColor_10() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____buttonActionColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__buttonActionColor_10() const { return ____buttonActionColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__buttonActionColor_10() { return &____buttonActionColor_10; }
	inline void set__buttonActionColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____buttonActionColor_10 = value;
	}

	inline static int32_t get_offset_of__audioSource_11() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____audioSource_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audioSource_11() const { return ____audioSource_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audioSource_11() { return &____audioSource_11; }
	inline void set__audioSource_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audioSource_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_11), (void*)value);
	}

	inline static int32_t get_offset_of__actionSoundEffect_12() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____actionSoundEffect_12)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__actionSoundEffect_12() const { return ____actionSoundEffect_12; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__actionSoundEffect_12() { return &____actionSoundEffect_12; }
	inline void set__actionSoundEffect_12(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____actionSoundEffect_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actionSoundEffect_12), (void*)value);
	}

	inline static int32_t get_offset_of__buttonContactTransform_13() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____buttonContactTransform_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__buttonContactTransform_13() const { return ____buttonContactTransform_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__buttonContactTransform_13() { return &____buttonContactTransform_13; }
	inline void set__buttonContactTransform_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____buttonContactTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonContactTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of__contactMaxDisplacementDistance_14() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____contactMaxDisplacementDistance_14)); }
	inline float get__contactMaxDisplacementDistance_14() const { return ____contactMaxDisplacementDistance_14; }
	inline float* get_address_of__contactMaxDisplacementDistance_14() { return &____contactMaxDisplacementDistance_14; }
	inline void set__contactMaxDisplacementDistance_14(float value)
	{
		____contactMaxDisplacementDistance_14 = value;
	}

	inline static int32_t get_offset_of__buttonMaterial_15() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____buttonMaterial_15)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__buttonMaterial_15() const { return ____buttonMaterial_15; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__buttonMaterial_15() { return &____buttonMaterial_15; }
	inline void set__buttonMaterial_15(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____buttonMaterial_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonMaterial_15), (void*)value);
	}

	inline static int32_t get_offset_of__buttonDefaultColor_16() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____buttonDefaultColor_16)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__buttonDefaultColor_16() const { return ____buttonDefaultColor_16; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__buttonDefaultColor_16() { return &____buttonDefaultColor_16; }
	inline void set__buttonDefaultColor_16(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____buttonDefaultColor_16 = value;
	}

	inline static int32_t get_offset_of__materialColorId_17() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____materialColorId_17)); }
	inline int32_t get__materialColorId_17() const { return ____materialColorId_17; }
	inline int32_t* get_address_of__materialColorId_17() { return &____materialColorId_17; }
	inline void set__materialColorId_17(int32_t value)
	{
		____materialColorId_17 = value;
	}

	inline static int32_t get_offset_of__buttonInContactOrActionStates_18() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____buttonInContactOrActionStates_18)); }
	inline bool get__buttonInContactOrActionStates_18() const { return ____buttonInContactOrActionStates_18; }
	inline bool* get_address_of__buttonInContactOrActionStates_18() { return &____buttonInContactOrActionStates_18; }
	inline void set__buttonInContactOrActionStates_18(bool value)
	{
		____buttonInContactOrActionStates_18 = value;
	}

	inline static int32_t get_offset_of__lerpToOldPositionCr_19() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____lerpToOldPositionCr_19)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__lerpToOldPositionCr_19() const { return ____lerpToOldPositionCr_19; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__lerpToOldPositionCr_19() { return &____lerpToOldPositionCr_19; }
	inline void set__lerpToOldPositionCr_19(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____lerpToOldPositionCr_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lerpToOldPositionCr_19), (void*)value);
	}

	inline static int32_t get_offset_of__oldPosition_20() { return static_cast<int32_t>(offsetof(TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151, ____oldPosition_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__oldPosition_20() const { return ____oldPosition_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__oldPosition_20() { return &____oldPosition_20; }
	inline void set__oldPosition_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____oldPosition_20 = value;
	}
};


// OculusSampleFramework.TrainCarBase
struct TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform OculusSampleFramework.TrainCarBase::_frontWheels
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____frontWheels_7;
	// UnityEngine.Transform OculusSampleFramework.TrainCarBase::_rearWheels
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____rearWheels_8;
	// OculusSampleFramework.TrainTrack OculusSampleFramework.TrainCarBase::_trainTrack
	TrainTrack_t7BDC9E56629804928D04D3C4F7FF03D0F3409424 * ____trainTrack_9;
	// UnityEngine.Transform[] OculusSampleFramework.TrainCarBase::_individualWheels
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____individualWheels_10;
	// System.Single OculusSampleFramework.TrainCarBase::<Distance>k__BackingField
	float ___U3CDistanceU3Ek__BackingField_11;
	// System.Single OculusSampleFramework.TrainCarBase::scale
	float ___scale_12;
	// OculusSampleFramework.Pose OculusSampleFramework.TrainCarBase::_frontPose
	Pose_t8062E0F070422627AB6D1693718F8D8C38DBA742 * ____frontPose_13;
	// OculusSampleFramework.Pose OculusSampleFramework.TrainCarBase::_rearPose
	Pose_t8062E0F070422627AB6D1693718F8D8C38DBA742 * ____rearPose_14;

public:
	inline static int32_t get_offset_of__frontWheels_7() { return static_cast<int32_t>(offsetof(TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456, ____frontWheels_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__frontWheels_7() const { return ____frontWheels_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__frontWheels_7() { return &____frontWheels_7; }
	inline void set__frontWheels_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____frontWheels_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frontWheels_7), (void*)value);
	}

	inline static int32_t get_offset_of__rearWheels_8() { return static_cast<int32_t>(offsetof(TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456, ____rearWheels_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__rearWheels_8() const { return ____rearWheels_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__rearWheels_8() { return &____rearWheels_8; }
	inline void set__rearWheels_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____rearWheels_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rearWheels_8), (void*)value);
	}

	inline static int32_t get_offset_of__trainTrack_9() { return static_cast<int32_t>(offsetof(TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456, ____trainTrack_9)); }
	inline TrainTrack_t7BDC9E56629804928D04D3C4F7FF03D0F3409424 * get__trainTrack_9() const { return ____trainTrack_9; }
	inline TrainTrack_t7BDC9E56629804928D04D3C4F7FF03D0F3409424 ** get_address_of__trainTrack_9() { return &____trainTrack_9; }
	inline void set__trainTrack_9(TrainTrack_t7BDC9E56629804928D04D3C4F7FF03D0F3409424 * value)
	{
		____trainTrack_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____trainTrack_9), (void*)value);
	}

	inline static int32_t get_offset_of__individualWheels_10() { return static_cast<int32_t>(offsetof(TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456, ____individualWheels_10)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__individualWheels_10() const { return ____individualWheels_10; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__individualWheels_10() { return &____individualWheels_10; }
	inline void set__individualWheels_10(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____individualWheels_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____individualWheels_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDistanceU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456, ___U3CDistanceU3Ek__BackingField_11)); }
	inline float get_U3CDistanceU3Ek__BackingField_11() const { return ___U3CDistanceU3Ek__BackingField_11; }
	inline float* get_address_of_U3CDistanceU3Ek__BackingField_11() { return &___U3CDistanceU3Ek__BackingField_11; }
	inline void set_U3CDistanceU3Ek__BackingField_11(float value)
	{
		___U3CDistanceU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_scale_12() { return static_cast<int32_t>(offsetof(TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456, ___scale_12)); }
	inline float get_scale_12() const { return ___scale_12; }
	inline float* get_address_of_scale_12() { return &___scale_12; }
	inline void set_scale_12(float value)
	{
		___scale_12 = value;
	}

	inline static int32_t get_offset_of__frontPose_13() { return static_cast<int32_t>(offsetof(TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456, ____frontPose_13)); }
	inline Pose_t8062E0F070422627AB6D1693718F8D8C38DBA742 * get__frontPose_13() const { return ____frontPose_13; }
	inline Pose_t8062E0F070422627AB6D1693718F8D8C38DBA742 ** get_address_of__frontPose_13() { return &____frontPose_13; }
	inline void set__frontPose_13(Pose_t8062E0F070422627AB6D1693718F8D8C38DBA742 * value)
	{
		____frontPose_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frontPose_13), (void*)value);
	}

	inline static int32_t get_offset_of__rearPose_14() { return static_cast<int32_t>(offsetof(TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456, ____rearPose_14)); }
	inline Pose_t8062E0F070422627AB6D1693718F8D8C38DBA742 * get__rearPose_14() const { return ____rearPose_14; }
	inline Pose_t8062E0F070422627AB6D1693718F8D8C38DBA742 ** get_address_of__rearPose_14() { return &____rearPose_14; }
	inline void set__rearPose_14(Pose_t8062E0F070422627AB6D1693718F8D8C38DBA742 * value)
	{
		____rearPose_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rearPose_14), (void*)value);
	}
};

struct TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456_StaticFields
{
public:
	// UnityEngine.Vector3 OculusSampleFramework.TrainCarBase::OFFSET
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___OFFSET_4;

public:
	inline static int32_t get_offset_of_OFFSET_4() { return static_cast<int32_t>(offsetof(TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456_StaticFields, ___OFFSET_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_OFFSET_4() const { return ___OFFSET_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_OFFSET_4() { return &___OFFSET_4; }
	inline void set_OFFSET_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___OFFSET_4 = value;
	}
};


// OculusSampleFramework.TrainCrossingController
struct TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource OculusSampleFramework.TrainCrossingController::_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audioSource_4;
	// UnityEngine.AudioClip[] OculusSampleFramework.TrainCrossingController::_crossingSounds
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ____crossingSounds_5;
	// UnityEngine.MeshRenderer OculusSampleFramework.TrainCrossingController::_lightSide1Renderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ____lightSide1Renderer_6;
	// UnityEngine.MeshRenderer OculusSampleFramework.TrainCrossingController::_lightSide2Renderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ____lightSide2Renderer_7;
	// OculusSampleFramework.SelectionCylinder OculusSampleFramework.TrainCrossingController::_selectionCylinder
	SelectionCylinder_tD00E5523E40CEE87C221B093CB293B99706AE041 * ____selectionCylinder_8;
	// UnityEngine.Material OculusSampleFramework.TrainCrossingController::_lightsSide1Mat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____lightsSide1Mat_9;
	// UnityEngine.Material OculusSampleFramework.TrainCrossingController::_lightsSide2Mat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____lightsSide2Mat_10;
	// System.Int32 OculusSampleFramework.TrainCrossingController::_colorId
	int32_t ____colorId_11;
	// UnityEngine.Coroutine OculusSampleFramework.TrainCrossingController::_xingAnimationCr
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____xingAnimationCr_12;
	// OculusSampleFramework.InteractableTool OculusSampleFramework.TrainCrossingController::_toolInteractingWithMe
	InteractableTool_t3492A009F902935C1291A66C2D9E53DDB96B296C * ____toolInteractingWithMe_13;

public:
	inline static int32_t get_offset_of__audioSource_4() { return static_cast<int32_t>(offsetof(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37, ____audioSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audioSource_4() const { return ____audioSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audioSource_4() { return &____audioSource_4; }
	inline void set__audioSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of__crossingSounds_5() { return static_cast<int32_t>(offsetof(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37, ____crossingSounds_5)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get__crossingSounds_5() const { return ____crossingSounds_5; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of__crossingSounds_5() { return &____crossingSounds_5; }
	inline void set__crossingSounds_5(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		____crossingSounds_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossingSounds_5), (void*)value);
	}

	inline static int32_t get_offset_of__lightSide1Renderer_6() { return static_cast<int32_t>(offsetof(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37, ____lightSide1Renderer_6)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get__lightSide1Renderer_6() const { return ____lightSide1Renderer_6; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of__lightSide1Renderer_6() { return &____lightSide1Renderer_6; }
	inline void set__lightSide1Renderer_6(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		____lightSide1Renderer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lightSide1Renderer_6), (void*)value);
	}

	inline static int32_t get_offset_of__lightSide2Renderer_7() { return static_cast<int32_t>(offsetof(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37, ____lightSide2Renderer_7)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get__lightSide2Renderer_7() const { return ____lightSide2Renderer_7; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of__lightSide2Renderer_7() { return &____lightSide2Renderer_7; }
	inline void set__lightSide2Renderer_7(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		____lightSide2Renderer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lightSide2Renderer_7), (void*)value);
	}

	inline static int32_t get_offset_of__selectionCylinder_8() { return static_cast<int32_t>(offsetof(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37, ____selectionCylinder_8)); }
	inline SelectionCylinder_tD00E5523E40CEE87C221B093CB293B99706AE041 * get__selectionCylinder_8() const { return ____selectionCylinder_8; }
	inline SelectionCylinder_tD00E5523E40CEE87C221B093CB293B99706AE041 ** get_address_of__selectionCylinder_8() { return &____selectionCylinder_8; }
	inline void set__selectionCylinder_8(SelectionCylinder_tD00E5523E40CEE87C221B093CB293B99706AE041 * value)
	{
		____selectionCylinder_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectionCylinder_8), (void*)value);
	}

	inline static int32_t get_offset_of__lightsSide1Mat_9() { return static_cast<int32_t>(offsetof(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37, ____lightsSide1Mat_9)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__lightsSide1Mat_9() const { return ____lightsSide1Mat_9; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__lightsSide1Mat_9() { return &____lightsSide1Mat_9; }
	inline void set__lightsSide1Mat_9(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____lightsSide1Mat_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lightsSide1Mat_9), (void*)value);
	}

	inline static int32_t get_offset_of__lightsSide2Mat_10() { return static_cast<int32_t>(offsetof(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37, ____lightsSide2Mat_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__lightsSide2Mat_10() const { return ____lightsSide2Mat_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__lightsSide2Mat_10() { return &____lightsSide2Mat_10; }
	inline void set__lightsSide2Mat_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____lightsSide2Mat_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lightsSide2Mat_10), (void*)value);
	}

	inline static int32_t get_offset_of__colorId_11() { return static_cast<int32_t>(offsetof(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37, ____colorId_11)); }
	inline int32_t get__colorId_11() const { return ____colorId_11; }
	inline int32_t* get_address_of__colorId_11() { return &____colorId_11; }
	inline void set__colorId_11(int32_t value)
	{
		____colorId_11 = value;
	}

	inline static int32_t get_offset_of__xingAnimationCr_12() { return static_cast<int32_t>(offsetof(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37, ____xingAnimationCr_12)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__xingAnimationCr_12() const { return ____xingAnimationCr_12; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__xingAnimationCr_12() { return &____xingAnimationCr_12; }
	inline void set__xingAnimationCr_12(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____xingAnimationCr_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xingAnimationCr_12), (void*)value);
	}

	inline static int32_t get_offset_of__toolInteractingWithMe_13() { return static_cast<int32_t>(offsetof(TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37, ____toolInteractingWithMe_13)); }
	inline InteractableTool_t3492A009F902935C1291A66C2D9E53DDB96B296C * get__toolInteractingWithMe_13() const { return ____toolInteractingWithMe_13; }
	inline InteractableTool_t3492A009F902935C1291A66C2D9E53DDB96B296C ** get_address_of__toolInteractingWithMe_13() { return &____toolInteractingWithMe_13; }
	inline void set__toolInteractingWithMe_13(InteractableTool_t3492A009F902935C1291A66C2D9E53DDB96B296C * value)
	{
		____toolInteractingWithMe_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____toolInteractingWithMe_13), (void*)value);
	}
};


// OculusSampleFramework.WindmillBladesController
struct WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource OculusSampleFramework.WindmillBladesController::_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audioSource_5;
	// UnityEngine.AudioClip OculusSampleFramework.WindmillBladesController::_windMillRotationSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____windMillRotationSound_6;
	// UnityEngine.AudioClip OculusSampleFramework.WindmillBladesController::_windMillStartSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____windMillStartSound_7;
	// UnityEngine.AudioClip OculusSampleFramework.WindmillBladesController::_windMillStopSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____windMillStopSound_8;
	// System.Boolean OculusSampleFramework.WindmillBladesController::<IsMoving>k__BackingField
	bool ___U3CIsMovingU3Ek__BackingField_9;
	// System.Single OculusSampleFramework.WindmillBladesController::_currentSpeed
	float ____currentSpeed_10;
	// UnityEngine.Coroutine OculusSampleFramework.WindmillBladesController::_lerpSpeedCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____lerpSpeedCoroutine_11;
	// UnityEngine.Coroutine OculusSampleFramework.WindmillBladesController::_audioChangeCr
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____audioChangeCr_12;
	// UnityEngine.Quaternion OculusSampleFramework.WindmillBladesController::_originalRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____originalRotation_13;
	// System.Single OculusSampleFramework.WindmillBladesController::_rotAngle
	float ____rotAngle_14;

public:
	inline static int32_t get_offset_of__audioSource_5() { return static_cast<int32_t>(offsetof(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3, ____audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audioSource_5() const { return ____audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audioSource_5() { return &____audioSource_5; }
	inline void set__audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of__windMillRotationSound_6() { return static_cast<int32_t>(offsetof(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3, ____windMillRotationSound_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__windMillRotationSound_6() const { return ____windMillRotationSound_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__windMillRotationSound_6() { return &____windMillRotationSound_6; }
	inline void set__windMillRotationSound_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____windMillRotationSound_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____windMillRotationSound_6), (void*)value);
	}

	inline static int32_t get_offset_of__windMillStartSound_7() { return static_cast<int32_t>(offsetof(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3, ____windMillStartSound_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__windMillStartSound_7() const { return ____windMillStartSound_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__windMillStartSound_7() { return &____windMillStartSound_7; }
	inline void set__windMillStartSound_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____windMillStartSound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____windMillStartSound_7), (void*)value);
	}

	inline static int32_t get_offset_of__windMillStopSound_8() { return static_cast<int32_t>(offsetof(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3, ____windMillStopSound_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__windMillStopSound_8() const { return ____windMillStopSound_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__windMillStopSound_8() { return &____windMillStopSound_8; }
	inline void set__windMillStopSound_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____windMillStopSound_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____windMillStopSound_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsMovingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3, ___U3CIsMovingU3Ek__BackingField_9)); }
	inline bool get_U3CIsMovingU3Ek__BackingField_9() const { return ___U3CIsMovingU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsMovingU3Ek__BackingField_9() { return &___U3CIsMovingU3Ek__BackingField_9; }
	inline void set_U3CIsMovingU3Ek__BackingField_9(bool value)
	{
		___U3CIsMovingU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__currentSpeed_10() { return static_cast<int32_t>(offsetof(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3, ____currentSpeed_10)); }
	inline float get__currentSpeed_10() const { return ____currentSpeed_10; }
	inline float* get_address_of__currentSpeed_10() { return &____currentSpeed_10; }
	inline void set__currentSpeed_10(float value)
	{
		____currentSpeed_10 = value;
	}

	inline static int32_t get_offset_of__lerpSpeedCoroutine_11() { return static_cast<int32_t>(offsetof(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3, ____lerpSpeedCoroutine_11)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__lerpSpeedCoroutine_11() const { return ____lerpSpeedCoroutine_11; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__lerpSpeedCoroutine_11() { return &____lerpSpeedCoroutine_11; }
	inline void set__lerpSpeedCoroutine_11(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____lerpSpeedCoroutine_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lerpSpeedCoroutine_11), (void*)value);
	}

	inline static int32_t get_offset_of__audioChangeCr_12() { return static_cast<int32_t>(offsetof(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3, ____audioChangeCr_12)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__audioChangeCr_12() const { return ____audioChangeCr_12; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__audioChangeCr_12() { return &____audioChangeCr_12; }
	inline void set__audioChangeCr_12(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____audioChangeCr_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioChangeCr_12), (void*)value);
	}

	inline static int32_t get_offset_of__originalRotation_13() { return static_cast<int32_t>(offsetof(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3, ____originalRotation_13)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__originalRotation_13() const { return ____originalRotation_13; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__originalRotation_13() { return &____originalRotation_13; }
	inline void set__originalRotation_13(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____originalRotation_13 = value;
	}

	inline static int32_t get_offset_of__rotAngle_14() { return static_cast<int32_t>(offsetof(WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3, ____rotAngle_14)); }
	inline float get__rotAngle_14() const { return ____rotAngle_14; }
	inline float* get_address_of__rotAngle_14() { return &____rotAngle_14; }
	inline void set__rotAngle_14(float value)
	{
		____rotAngle_14 = value;
	}
};


// TeleportAimHandler
struct TeleportAimHandler_tC1C6D09FC478B420E7C892ECCB6E625F537D3BBD  : public TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121
{
public:

public:
};


// TeleportInputHandler
struct TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D  : public TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121
{
public:
	// System.Action TeleportInputHandler::_startReadyAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____startReadyAction_6;
	// System.Action TeleportInputHandler::_startAimAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____startAimAction_7;

public:
	inline static int32_t get_offset_of__startReadyAction_6() { return static_cast<int32_t>(offsetof(TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D, ____startReadyAction_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__startReadyAction_6() const { return ____startReadyAction_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__startReadyAction_6() { return &____startReadyAction_6; }
	inline void set__startReadyAction_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____startReadyAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startReadyAction_6), (void*)value);
	}

	inline static int32_t get_offset_of__startAimAction_7() { return static_cast<int32_t>(offsetof(TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D, ____startAimAction_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__startAimAction_7() const { return ____startAimAction_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__startAimAction_7() { return &____startAimAction_7; }
	inline void set__startAimAction_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____startAimAction_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startAimAction_7), (void*)value);
	}
};


// TeleportOrientationHandler
struct TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D  : public TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121
{
public:
	// System.Action TeleportOrientationHandler::_updateOrientationAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____updateOrientationAction_6;
	// System.Action`1<LocomotionTeleport/AimData> TeleportOrientationHandler::_updateAimDataAction
	Action_1_t92198758A8B104AAC58CEBF1192A89AFDC67850B * ____updateAimDataAction_7;
	// LocomotionTeleport/AimData TeleportOrientationHandler::AimData
	AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * ___AimData_8;

public:
	inline static int32_t get_offset_of__updateOrientationAction_6() { return static_cast<int32_t>(offsetof(TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D, ____updateOrientationAction_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__updateOrientationAction_6() const { return ____updateOrientationAction_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__updateOrientationAction_6() { return &____updateOrientationAction_6; }
	inline void set__updateOrientationAction_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____updateOrientationAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updateOrientationAction_6), (void*)value);
	}

	inline static int32_t get_offset_of__updateAimDataAction_7() { return static_cast<int32_t>(offsetof(TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D, ____updateAimDataAction_7)); }
	inline Action_1_t92198758A8B104AAC58CEBF1192A89AFDC67850B * get__updateAimDataAction_7() const { return ____updateAimDataAction_7; }
	inline Action_1_t92198758A8B104AAC58CEBF1192A89AFDC67850B ** get_address_of__updateAimDataAction_7() { return &____updateAimDataAction_7; }
	inline void set__updateAimDataAction_7(Action_1_t92198758A8B104AAC58CEBF1192A89AFDC67850B * value)
	{
		____updateAimDataAction_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updateAimDataAction_7), (void*)value);
	}

	inline static int32_t get_offset_of_AimData_8() { return static_cast<int32_t>(offsetof(TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D, ___AimData_8)); }
	inline AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * get_AimData_8() const { return ___AimData_8; }
	inline AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA ** get_address_of_AimData_8() { return &___AimData_8; }
	inline void set_AimData_8(AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * value)
	{
		___AimData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AimData_8), (void*)value);
	}
};


// TeleportTargetHandler
struct TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273  : public TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121
{
public:
	// UnityEngine.LayerMask TeleportTargetHandler::AimCollisionLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___AimCollisionLayerMask_6;
	// LocomotionTeleport/AimData TeleportTargetHandler::AimData
	AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * ___AimData_7;
	// System.Action TeleportTargetHandler::_startAimAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____startAimAction_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> TeleportTargetHandler::_aimPoints
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ____aimPoints_9;

public:
	inline static int32_t get_offset_of_AimCollisionLayerMask_6() { return static_cast<int32_t>(offsetof(TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273, ___AimCollisionLayerMask_6)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_AimCollisionLayerMask_6() const { return ___AimCollisionLayerMask_6; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_AimCollisionLayerMask_6() { return &___AimCollisionLayerMask_6; }
	inline void set_AimCollisionLayerMask_6(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___AimCollisionLayerMask_6 = value;
	}

	inline static int32_t get_offset_of_AimData_7() { return static_cast<int32_t>(offsetof(TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273, ___AimData_7)); }
	inline AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * get_AimData_7() const { return ___AimData_7; }
	inline AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA ** get_address_of_AimData_7() { return &___AimData_7; }
	inline void set_AimData_7(AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * value)
	{
		___AimData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AimData_7), (void*)value);
	}

	inline static int32_t get_offset_of__startAimAction_8() { return static_cast<int32_t>(offsetof(TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273, ____startAimAction_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__startAimAction_8() const { return ____startAimAction_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__startAimAction_8() { return &____startAimAction_8; }
	inline void set__startAimAction_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____startAimAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startAimAction_8), (void*)value);
	}

	inline static int32_t get_offset_of__aimPoints_9() { return static_cast<int32_t>(offsetof(TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273, ____aimPoints_9)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get__aimPoints_9() const { return ____aimPoints_9; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of__aimPoints_9() { return &____aimPoints_9; }
	inline void set__aimPoints_9(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		____aimPoints_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____aimPoints_9), (void*)value);
	}
};


// TeleportTransition
struct TeleportTransition_tBF8EC872DEFA8AFCC167216EBA01D4642897C76D  : public TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121
{
public:

public:
};


// OculusSampleFramework.TrainLocomotive
struct TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331  : public TrainCarBase_tB4EDBE5E85CE292877DC28F3A001BA8C27F0D456
{
public:
	// System.Single OculusSampleFramework.TrainLocomotive::_initialSpeed
	float ____initialSpeed_19;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_startStopButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____startStopButton_20;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_decreaseSpeedButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____decreaseSpeedButton_21;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_increaseSpeedButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____increaseSpeedButton_22;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_smokeButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____smokeButton_23;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_whistleButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____whistleButton_24;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_reverseButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____reverseButton_25;
	// UnityEngine.AudioSource OculusSampleFramework.TrainLocomotive::_whistleAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____whistleAudioSource_26;
	// UnityEngine.AudioClip OculusSampleFramework.TrainLocomotive::_whistleSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____whistleSound_27;
	// UnityEngine.AudioSource OculusSampleFramework.TrainLocomotive::_engineAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____engineAudioSource_28;
	// UnityEngine.AudioClip[] OculusSampleFramework.TrainLocomotive::_accelerationSounds
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ____accelerationSounds_29;
	// UnityEngine.AudioClip[] OculusSampleFramework.TrainLocomotive::_decelerationSounds
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ____decelerationSounds_30;
	// UnityEngine.AudioClip OculusSampleFramework.TrainLocomotive::_startUpSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____startUpSound_31;
	// UnityEngine.AudioSource OculusSampleFramework.TrainLocomotive::_smokeStackAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____smokeStackAudioSource_32;
	// UnityEngine.AudioClip OculusSampleFramework.TrainLocomotive::_smokeSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____smokeSound_33;
	// UnityEngine.ParticleSystem OculusSampleFramework.TrainLocomotive::_smoke1
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ____smoke1_34;
	// UnityEngine.ParticleSystem OculusSampleFramework.TrainLocomotive::_smoke2
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ____smoke2_35;
	// OculusSampleFramework.TrainCarBase[] OculusSampleFramework.TrainLocomotive::_childCars
	TrainCarBaseU5BU5D_tEA9FA40EA871BECB324EAE0EA10A02C42C3FA5AA* ____childCars_36;
	// System.Boolean OculusSampleFramework.TrainLocomotive::_isMoving
	bool ____isMoving_37;
	// System.Boolean OculusSampleFramework.TrainLocomotive::_reverse
	bool ____reverse_38;
	// System.Single OculusSampleFramework.TrainLocomotive::_currentSpeed
	float ____currentSpeed_39;
	// System.Single OculusSampleFramework.TrainLocomotive::_speedDiv
	float ____speedDiv_40;
	// System.Single OculusSampleFramework.TrainLocomotive::_standardRateOverTimeMultiplier
	float ____standardRateOverTimeMultiplier_41;
	// System.Int32 OculusSampleFramework.TrainLocomotive::_standardMaxParticles
	int32_t ____standardMaxParticles_42;
	// UnityEngine.Coroutine OculusSampleFramework.TrainLocomotive::_startStopTrainCr
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____startStopTrainCr_43;

public:
	inline static int32_t get_offset_of__initialSpeed_19() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____initialSpeed_19)); }
	inline float get__initialSpeed_19() const { return ____initialSpeed_19; }
	inline float* get_address_of__initialSpeed_19() { return &____initialSpeed_19; }
	inline void set__initialSpeed_19(float value)
	{
		____initialSpeed_19 = value;
	}

	inline static int32_t get_offset_of__startStopButton_20() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____startStopButton_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__startStopButton_20() const { return ____startStopButton_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__startStopButton_20() { return &____startStopButton_20; }
	inline void set__startStopButton_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____startStopButton_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startStopButton_20), (void*)value);
	}

	inline static int32_t get_offset_of__decreaseSpeedButton_21() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____decreaseSpeedButton_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__decreaseSpeedButton_21() const { return ____decreaseSpeedButton_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__decreaseSpeedButton_21() { return &____decreaseSpeedButton_21; }
	inline void set__decreaseSpeedButton_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____decreaseSpeedButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____decreaseSpeedButton_21), (void*)value);
	}

	inline static int32_t get_offset_of__increaseSpeedButton_22() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____increaseSpeedButton_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__increaseSpeedButton_22() const { return ____increaseSpeedButton_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__increaseSpeedButton_22() { return &____increaseSpeedButton_22; }
	inline void set__increaseSpeedButton_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____increaseSpeedButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____increaseSpeedButton_22), (void*)value);
	}

	inline static int32_t get_offset_of__smokeButton_23() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____smokeButton_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__smokeButton_23() const { return ____smokeButton_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__smokeButton_23() { return &____smokeButton_23; }
	inline void set__smokeButton_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____smokeButton_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____smokeButton_23), (void*)value);
	}

	inline static int32_t get_offset_of__whistleButton_24() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____whistleButton_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__whistleButton_24() const { return ____whistleButton_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__whistleButton_24() { return &____whistleButton_24; }
	inline void set__whistleButton_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____whistleButton_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whistleButton_24), (void*)value);
	}

	inline static int32_t get_offset_of__reverseButton_25() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____reverseButton_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__reverseButton_25() const { return ____reverseButton_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__reverseButton_25() { return &____reverseButton_25; }
	inline void set__reverseButton_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____reverseButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reverseButton_25), (void*)value);
	}

	inline static int32_t get_offset_of__whistleAudioSource_26() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____whistleAudioSource_26)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__whistleAudioSource_26() const { return ____whistleAudioSource_26; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__whistleAudioSource_26() { return &____whistleAudioSource_26; }
	inline void set__whistleAudioSource_26(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____whistleAudioSource_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whistleAudioSource_26), (void*)value);
	}

	inline static int32_t get_offset_of__whistleSound_27() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____whistleSound_27)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__whistleSound_27() const { return ____whistleSound_27; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__whistleSound_27() { return &____whistleSound_27; }
	inline void set__whistleSound_27(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____whistleSound_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whistleSound_27), (void*)value);
	}

	inline static int32_t get_offset_of__engineAudioSource_28() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____engineAudioSource_28)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__engineAudioSource_28() const { return ____engineAudioSource_28; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__engineAudioSource_28() { return &____engineAudioSource_28; }
	inline void set__engineAudioSource_28(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____engineAudioSource_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____engineAudioSource_28), (void*)value);
	}

	inline static int32_t get_offset_of__accelerationSounds_29() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____accelerationSounds_29)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get__accelerationSounds_29() const { return ____accelerationSounds_29; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of__accelerationSounds_29() { return &____accelerationSounds_29; }
	inline void set__accelerationSounds_29(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		____accelerationSounds_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____accelerationSounds_29), (void*)value);
	}

	inline static int32_t get_offset_of__decelerationSounds_30() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____decelerationSounds_30)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get__decelerationSounds_30() const { return ____decelerationSounds_30; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of__decelerationSounds_30() { return &____decelerationSounds_30; }
	inline void set__decelerationSounds_30(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		____decelerationSounds_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____decelerationSounds_30), (void*)value);
	}

	inline static int32_t get_offset_of__startUpSound_31() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____startUpSound_31)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__startUpSound_31() const { return ____startUpSound_31; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__startUpSound_31() { return &____startUpSound_31; }
	inline void set__startUpSound_31(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____startUpSound_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startUpSound_31), (void*)value);
	}

	inline static int32_t get_offset_of__smokeStackAudioSource_32() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____smokeStackAudioSource_32)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__smokeStackAudioSource_32() const { return ____smokeStackAudioSource_32; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__smokeStackAudioSource_32() { return &____smokeStackAudioSource_32; }
	inline void set__smokeStackAudioSource_32(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____smokeStackAudioSource_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____smokeStackAudioSource_32), (void*)value);
	}

	inline static int32_t get_offset_of__smokeSound_33() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____smokeSound_33)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__smokeSound_33() const { return ____smokeSound_33; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__smokeSound_33() { return &____smokeSound_33; }
	inline void set__smokeSound_33(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____smokeSound_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____smokeSound_33), (void*)value);
	}

	inline static int32_t get_offset_of__smoke1_34() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____smoke1_34)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get__smoke1_34() const { return ____smoke1_34; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of__smoke1_34() { return &____smoke1_34; }
	inline void set__smoke1_34(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		____smoke1_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____smoke1_34), (void*)value);
	}

	inline static int32_t get_offset_of__smoke2_35() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____smoke2_35)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get__smoke2_35() const { return ____smoke2_35; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of__smoke2_35() { return &____smoke2_35; }
	inline void set__smoke2_35(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		____smoke2_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____smoke2_35), (void*)value);
	}

	inline static int32_t get_offset_of__childCars_36() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____childCars_36)); }
	inline TrainCarBaseU5BU5D_tEA9FA40EA871BECB324EAE0EA10A02C42C3FA5AA* get__childCars_36() const { return ____childCars_36; }
	inline TrainCarBaseU5BU5D_tEA9FA40EA871BECB324EAE0EA10A02C42C3FA5AA** get_address_of__childCars_36() { return &____childCars_36; }
	inline void set__childCars_36(TrainCarBaseU5BU5D_tEA9FA40EA871BECB324EAE0EA10A02C42C3FA5AA* value)
	{
		____childCars_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childCars_36), (void*)value);
	}

	inline static int32_t get_offset_of__isMoving_37() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____isMoving_37)); }
	inline bool get__isMoving_37() const { return ____isMoving_37; }
	inline bool* get_address_of__isMoving_37() { return &____isMoving_37; }
	inline void set__isMoving_37(bool value)
	{
		____isMoving_37 = value;
	}

	inline static int32_t get_offset_of__reverse_38() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____reverse_38)); }
	inline bool get__reverse_38() const { return ____reverse_38; }
	inline bool* get_address_of__reverse_38() { return &____reverse_38; }
	inline void set__reverse_38(bool value)
	{
		____reverse_38 = value;
	}

	inline static int32_t get_offset_of__currentSpeed_39() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____currentSpeed_39)); }
	inline float get__currentSpeed_39() const { return ____currentSpeed_39; }
	inline float* get_address_of__currentSpeed_39() { return &____currentSpeed_39; }
	inline void set__currentSpeed_39(float value)
	{
		____currentSpeed_39 = value;
	}

	inline static int32_t get_offset_of__speedDiv_40() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____speedDiv_40)); }
	inline float get__speedDiv_40() const { return ____speedDiv_40; }
	inline float* get_address_of__speedDiv_40() { return &____speedDiv_40; }
	inline void set__speedDiv_40(float value)
	{
		____speedDiv_40 = value;
	}

	inline static int32_t get_offset_of__standardRateOverTimeMultiplier_41() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____standardRateOverTimeMultiplier_41)); }
	inline float get__standardRateOverTimeMultiplier_41() const { return ____standardRateOverTimeMultiplier_41; }
	inline float* get_address_of__standardRateOverTimeMultiplier_41() { return &____standardRateOverTimeMultiplier_41; }
	inline void set__standardRateOverTimeMultiplier_41(float value)
	{
		____standardRateOverTimeMultiplier_41 = value;
	}

	inline static int32_t get_offset_of__standardMaxParticles_42() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____standardMaxParticles_42)); }
	inline int32_t get__standardMaxParticles_42() const { return ____standardMaxParticles_42; }
	inline int32_t* get_address_of__standardMaxParticles_42() { return &____standardMaxParticles_42; }
	inline void set__standardMaxParticles_42(int32_t value)
	{
		____standardMaxParticles_42 = value;
	}

	inline static int32_t get_offset_of__startStopTrainCr_43() { return static_cast<int32_t>(offsetof(TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331, ____startStopTrainCr_43)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__startStopTrainCr_43() const { return ____startStopTrainCr_43; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__startStopTrainCr_43() { return &____startStopTrainCr_43; }
	inline void set__startStopTrainCr_43(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____startStopTrainCr_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startStopTrainCr_43), (void*)value);
	}
};


// TeleportTransitionBlink
struct TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977  : public TeleportTransition_tBF8EC872DEFA8AFCC167216EBA01D4642897C76D
{
public:
	// System.Single TeleportTransitionBlink::TransitionDuration
	float ___TransitionDuration_6;
	// System.Single TeleportTransitionBlink::TeleportDelay
	float ___TeleportDelay_7;
	// UnityEngine.AnimationCurve TeleportTransitionBlink::FadeLevels
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___FadeLevels_8;

public:
	inline static int32_t get_offset_of_TransitionDuration_6() { return static_cast<int32_t>(offsetof(TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977, ___TransitionDuration_6)); }
	inline float get_TransitionDuration_6() const { return ___TransitionDuration_6; }
	inline float* get_address_of_TransitionDuration_6() { return &___TransitionDuration_6; }
	inline void set_TransitionDuration_6(float value)
	{
		___TransitionDuration_6 = value;
	}

	inline static int32_t get_offset_of_TeleportDelay_7() { return static_cast<int32_t>(offsetof(TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977, ___TeleportDelay_7)); }
	inline float get_TeleportDelay_7() const { return ___TeleportDelay_7; }
	inline float* get_address_of_TeleportDelay_7() { return &___TeleportDelay_7; }
	inline void set_TeleportDelay_7(float value)
	{
		___TeleportDelay_7 = value;
	}

	inline static int32_t get_offset_of_FadeLevels_8() { return static_cast<int32_t>(offsetof(TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977, ___FadeLevels_8)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_FadeLevels_8() const { return ___FadeLevels_8; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_FadeLevels_8() { return &___FadeLevels_8; }
	inline void set_FadeLevels_8(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___FadeLevels_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FadeLevels_8), (void*)value);
	}
};


// TeleportTransitionWarp
struct TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37  : public TeleportTransition_tBF8EC872DEFA8AFCC167216EBA01D4642897C76D
{
public:
	// System.Single TeleportTransitionWarp::TransitionDuration
	float ___TransitionDuration_6;
	// UnityEngine.AnimationCurve TeleportTransitionWarp::PositionLerp
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___PositionLerp_7;

public:
	inline static int32_t get_offset_of_TransitionDuration_6() { return static_cast<int32_t>(offsetof(TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37, ___TransitionDuration_6)); }
	inline float get_TransitionDuration_6() const { return ___TransitionDuration_6; }
	inline float* get_address_of_TransitionDuration_6() { return &___TransitionDuration_6; }
	inline void set_TransitionDuration_6(float value)
	{
		___TransitionDuration_6 = value;
	}

	inline static int32_t get_offset_of_PositionLerp_7() { return static_cast<int32_t>(offsetof(TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37, ___PositionLerp_7)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_PositionLerp_7() const { return ___PositionLerp_7; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_PositionLerp_7() { return &___PositionLerp_7; }
	inline void set_PositionLerp_7(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___PositionLerp_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositionLerp_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * m_Items[1];

public:
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  m_Items[1];

public:
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke(const ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD& unmarshaled, ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke_back(const ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke& marshaled, ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD& unmarshaled);
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke_cleanup(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com(const ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD& unmarshaled, ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com_back(const ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com& marshaled, ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD& unmarshaled);
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com_cleanup(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com& marshaled);

// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt64,System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE  Dictionary_2_GetEnumerator_mE8A18E0CC2F91910A0D69865532151049C7BD0F0_gshared (Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Boolean>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  Enumerator_get_Current_mB5222DC7F4812D6052E1E91F09C6241C5B6EFECD_gshared_inline (Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Boolean>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m274F462788E4F381B6EBE1FAEF4188F917A073EE_gshared_inline (KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12  Dictionary_2_GetEnumerator_m1D8D9E0A3297309037B575EE089F6CF4885CCA07_gshared (Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB  Enumerator_get_Current_mF902680F1B8043D67FC40B01196D478C5ED5D14E_gshared_inline (Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m7769F73190D62E056480E9CBAEE2BCE4000236CA_gshared_inline (KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  KeyValuePair_2_get_Value_mDF44B651756195C7279CBC5F83030E1706453A7E_gshared_inline (KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Boolean>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_gshared_inline (KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m72798A23D6B4CE080273CA5064E1007FF817C2C9_gshared (Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mF62D569F5B584522E6FE3FCB1AFD50F51530A43B_gshared (Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m12610C8EC87E168D9C1A63C104C34ADD599CD3CC_gshared (Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0194EB4680D46858D1698080DE4DCCC258C82F15_gshared (Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC2DB69DC0FC7CE69BECAB9E2C37562DC8C0B02D2_gshared (Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.LinkedList`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_gshared_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Single>::get_First()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_gshared_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.LinkedListNode`1<System.Single>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_gshared_inline (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Single>::RemoveFirst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756_gshared (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Single>::AddLast(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_gshared (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F_gshared (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);

// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// OvrAvatarDriver/ControllerPose OvrAvatarDriver/ControllerPose::Interpolate(OvrAvatarDriver/ControllerPose,OvrAvatarDriver/ControllerPose,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  ControllerPose_Interpolate_mFFCD926E9C586FA2A7BAE504FCEB42A231D31300 (ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  ___a0, ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_GetInt_m5B62B127CF60B5226EC9B8930060B7F48BF6F614 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Material_GetTag_mEAF0285CDE4B5747603C684BB900CA34DCB8B5F9 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___tag0, bool ___searchFallbacks1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::IsKeywordEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB (const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// OvrAvatarSDKManager OvrAvatarSDKManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF * OvrAvatarSDKManager_get_Instance_mB9B5FF8B8F1E78391247927F232F3F7383E70563 (const RuntimeMethod* method);
// OvrAvatarTextureCopyManager OvrAvatarSDKManager::GetTextureCopyManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * OvrAvatarSDKManager_GetTextureCopyManager_mAD832C2A625A244AA199A83CF6729915A056625A (OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF * __this, const RuntimeMethod* method);
// System.Int32 OvrAvatarTextureCopyManager::GetTextureCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OvrAvatarTextureCopyManager_GetTextureCount_m7E8EFA97005056B17B3ADDBF04E715C20AE287DA (OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetOverrideTag(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetOverrideTag_m5786C05270AD48B5B0756D5BC367017965B880C4 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___tag0, String_t* ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void OvrAvatarMaterialManager::ApplyMaterialPropertyBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvrAvatarMaterialManager_ApplyMaterialPropertyBlock_mBFBBAB70543AD985D044D1B1261EB07B8226325B (OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void OvrAvatarSDKManager/AvatarSpecRequestParams::.ctor(System.UInt64,specificationCallback,System.Boolean,ovrAvatarAssetLevelOfDetail,System.Boolean,ovrAvatarLookAndFeelVersion,ovrAvatarLookAndFeelVersion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSpecRequestParams__ctor_mC4E88966CA0552017DF34A410391946CFEF4021D (AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5 * __this, uint64_t ___userId0, specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0 * ___callback1, bool ___useCombinedMesh2, int32_t ___lod3, bool ___forceMobileTextureFormat4, int32_t ___lookVersion5, int32_t ___fallbackVersion6, bool ___enableExpressive7, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean OvrAvatarSDKManager::IsAvatarLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OvrAvatarSDKManager_IsAvatarLoading_mFEDFCD39684FAC17722B08023D9DA140A1C4322D (OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt64,System.Boolean>::GetEnumerator()
inline Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE  Dictionary_2_GetEnumerator_mE8A18E0CC2F91910A0D69865532151049C7BD0F0 (Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE  (*) (Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mE8A18E0CC2F91910A0D69865532151049C7BD0F0_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Boolean>::get_Current()
inline KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  Enumerator_get_Current_mB5222DC7F4812D6052E1E91F09C6241C5B6EFECD_inline (Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  (*) (Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE *, const RuntimeMethod*))Enumerator_get_Current_mB5222DC7F4812D6052E1E91F09C6241C5B6EFECD_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m274F462788E4F381B6EBE1FAEF4188F917A073EE_inline (KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m274F462788E4F381B6EBE1FAEF4188F917A073EE_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::GetEnumerator()
inline Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12  Dictionary_2_GetEnumerator_m1D8D9E0A3297309037B575EE089F6CF4885CCA07 (Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12  (*) (Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m1D8D9E0A3297309037B575EE089F6CF4885CCA07_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::get_Current()
inline KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB  Enumerator_get_Current_mF902680F1B8043D67FC40B01196D478C5ED5D14E_inline (Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB  (*) (Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 *, const RuntimeMethod*))Enumerator_get_Current_mF902680F1B8043D67FC40B01196D478C5ED5D14E_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m7769F73190D62E056480E9CBAEE2BCE4000236CA_inline (KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB *, const RuntimeMethod*))KeyValuePair_2_get_Key_m7769F73190D62E056480E9CBAEE2BCE4000236CA_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::get_Value()
inline TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  KeyValuePair_2_get_Value_mDF44B651756195C7279CBC5F83030E1706453A7E_inline (KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB * __this, const RuntimeMethod* method)
{
	return ((  TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  (*) (KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB *, const RuntimeMethod*))KeyValuePair_2_get_Value_mDF44B651756195C7279CBC5F83030E1706453A7E_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Boolean>::get_Key()
inline uint64_t KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_inline (KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 * __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Boolean>::MoveNext()
inline bool Enumerator_MoveNext_m72798A23D6B4CE080273CA5064E1007FF817C2C9 (Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE *, const RuntimeMethod*))Enumerator_MoveNext_m72798A23D6B4CE080273CA5064E1007FF817C2C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Boolean>::Dispose()
inline void Enumerator_Dispose_mF62D569F5B584522E6FE3FCB1AFD50F51530A43B (Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE *, const RuntimeMethod*))Enumerator_Dispose_mF62D569F5B584522E6FE3FCB1AFD50F51530A43B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::MoveNext()
inline bool Enumerator_MoveNext_m12610C8EC87E168D9C1A63C104C34ADD599CD3CC (Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 *, const RuntimeMethod*))Enumerator_MoveNext_m12610C8EC87E168D9C1A63C104C34ADD599CD3CC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::Dispose()
inline void Enumerator_Dispose_m0194EB4680D46858D1698080DE4DCCC258C82F15 (Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 *, const RuntimeMethod*))Enumerator_Dispose_m0194EB4680D46858D1698080DE4DCCC258C82F15_gshared)(__this, method);
}
// UnityEngine.Texture2D OvrAvatarComponent::GetLoadedTexture(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * OvrAvatarComponent_GetLoadedTexture_mBF2D9B2CFF2F9C22B661DC446C30EE924080DA7B (uint64_t ___assetId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void OvrAvatarSDKManager::DeleteAssetFromCache(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvrAvatarSDKManager_DeleteAssetFromCache_mB2BEEC55CFB786AF0B6EE172F2C75B7AAB2A97B3 (OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF * __this, uint64_t ___assetId0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet>::Remove(!0)
inline bool Dictionary_2_Remove_mC2DB69DC0FC7CE69BECAB9E2C37562DC8C0B02D2 (Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mC2DB69DC0FC7CE69BECAB9E2C37562DC8C0B02D2_gshared)(__this, ___key0, method);
}
// System.Void OvrAvatarTextureCopyManager/CopyTextureParams::.ctor(UnityEngine.Texture,UnityEngine.Texture,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyTextureParams__ctor_m1B3ADEEC9C61F14F8CA8EBCFF0FED7020C338DC2 (CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___src0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___dst1, int32_t ___mip2, int32_t ___srcSize3, int32_t ___dstElement4, const RuntimeMethod* method);
// System.Void OvrAvatarTextureCopyManager/TextureSet::.ctor(System.Collections.Generic.Dictionary`2<System.UInt64,System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSet__ctor_mD82F34E402F4351FF6634FAF2614B45506EC8B8C (TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D * __this, Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * ___textureIDSingleMeshPair0, bool ___isProcessed1, const RuntimeMethod* method);
// UnityEngine.Vector3 OculusSampleFramework.PanelHMDFollower::CalculateIdealAnchorPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PanelHMDFollower_CalculateIdealAnchorPosition_m74F280D8BC9291C194EB4FC9817A4150ABC944E2 (PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * __this, const RuntimeMethod* method);
// UnityEngine.Transform OVRCameraRig::get_centerEyeAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * OVRCameraRig_get_centerEyeAnchor_mC0875856CE4EBA9D0867E69A1A05DE40A443E1FF_inline (OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void OVRPassthroughLayer::set_edgeRenderingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPassthroughLayer_set_edgeRenderingEnabled_mAD01AD97216755C868F1E46F1414CE68D82DE896 (OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void OVRPassthroughLayer::set_edgeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPassthroughLayer_set_edgeColor_mB8D0F9ACAF8F3EB0F204798AE706CD8ADDBB8790 (OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color OVRPassthroughLayer::get_edgeColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  OVRPassthroughLayer_get_edgeColor_mC1323150AAA1042A87A1E138E35863CAD05C9E49_inline (OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.LinkedList`1<System.Single>::get_Count()
inline int32_t LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, const RuntimeMethod*))LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Single>::get_First()
inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, const RuntimeMethod*))LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.LinkedListNode`1<System.Single>::get_Value()
inline float LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_inline (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 *, const RuntimeMethod*))LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.LinkedList`1<System.Single>::RemoveFirst()
inline void LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756 (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, const RuntimeMethod*))LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756_gshared)(__this, method);
}
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Single>::AddLast(!0)
inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3 (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, float ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, float, const RuntimeMethod*))LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.LinkedList`1<System.Single>::.ctor()
inline void LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, const RuntimeMethod*))LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F_gshared)(__this, method);
}
// System.Void StartMenu::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenu_LoadScene_mF7663ABFF602CD53F3A26C076E6A8FA200347F97 (StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * __this, int32_t ___idx0, const RuntimeMethod* method);
// LocomotionTeleport TeleportSupport::get_LocomotionTeleport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline (TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121 * __this, const RuntimeMethod* method);
// LocomotionTeleport/States LocomotionTeleport::get_CurrentState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocomotionTeleport_get_CurrentState_mCEDC22238BFC0EB60D9DE2616698C71D0CEF0BA8_inline (LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> LocomotionTeleport/AimData::get_Points()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * AimData_get_Points_m3169977C66C0D412F32CECB2B7FD471F65A191B2_inline (AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// System.Void LocomotionTeleport::OnUpdateAimData(LocomotionTeleport/AimData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionTeleport_OnUpdateAimData_m76ED9D517FF45B8A7CE7757BD0E8D147892F90A8 (LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * __this, AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * ___aimData0, const RuntimeMethod* method);
// System.Void LocomotionTeleport::DoTeleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionTeleport_DoTeleport_m1477EB38D2FD6E2AD4A7553EB3237B18D40C0B0C (LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 LocomotionTeleport::GetCharacterPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  LocomotionTeleport_GetCharacterPosition_m30F7EB551F5787D2489CE2716284B848D2C11D26 (LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void LocomotionTeleport::DoWarp(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionTeleport_DoWarp_m2195B0DF360E9B04AD486855F66560DFC22EEB76 (LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPos0, float ___positionPercent1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void OculusSampleFramework.TrainCrossingController::ToggleLightObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController_ToggleLightObjects_m4B93FC82AC5CA62BC1F0755839F5AE2D3983C38C (TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * __this, bool ___enableState0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m9DE63FCC5A31918F8A9A2E4FCED70C298677A7B4 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTimeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverTimeMultiplier_m13A0F78D648A10145C2AE38A25A40E384791B961 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_m6FD14B44787B44D38DEDAE4FCBE9596A86A0460D (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single OculusSampleFramework.TrainLocomotive::PlayEngineSound(OculusSampleFramework.TrainLocomotive/EngineSoundState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrainLocomotive_PlayEngineSound_mBBE7F6F9988F707FFC60EE195E18C7C7C37C05CE (TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * __this, int32_t ___engineSoundState0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void OculusSampleFramework.TrainLocomotive::UpdateSmokeEmissionBasedOnSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_UpdateSmokeEmissionBasedOnSpeed_mABC70306F1FBF3D00E0BA0901760D44793F9D3EF (TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Boolean OculusSampleFramework.WindmillBladesController::get_IsMoving()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindmillBladesController_get_IsMoving_m5B2902A40908BBD84B5478EDA121ED00DBDECF56_inline (WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator OculusSampleFramework.WindmillBladesController::PlaySoundDelayed(UnityEngine.AudioClip,UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindmillBladesController_PlaySoundDelayed_m5C9465C96F6157B1A20D4F7F5A7D4F307D10D0FA (WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___initial0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, float ___timeDelayAfterInitial2, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void OculusSampleFramework.WindmillBladesController::PlaySound(UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillBladesController_PlaySound_mBFB8F38297A3551225D2E57F4285B58E9EF1EA63 (WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, bool ___loop1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void OvrAvatar/PacketEventArgs::.ctor(OvrAvatarPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketEventArgs__ctor_m0D15EF1306EC9B22B3DE0C03199ACC05DB3FBFC2 (PacketEventArgs_t8CCCE0BDBF25464C0C987F8C2901A94A91F602C6 * __this, OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F * ___packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PacketEventArgs(OvrAvatarPacket packet)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// Packet = packet;
		OvrAvatarPacket_tF1895FAD0EE16D4171B55E3E9FB9E7805FD4009F * L_0 = ___packet0;
		__this->set_Packet_1(L_0);
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
// Conversion methods for marshalling of: OvrAvatarDriver/ControllerPose
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke(const ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD& unmarshaled, ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke& marshaled)
{
	marshaled.___buttons_0 = unmarshaled.get_buttons_0();
	marshaled.___touches_1 = unmarshaled.get_touches_1();
	marshaled.___joystickPosition_2 = unmarshaled.get_joystickPosition_2();
	marshaled.___indexTrigger_3 = unmarshaled.get_indexTrigger_3();
	marshaled.___handTrigger_4 = unmarshaled.get_handTrigger_4();
	marshaled.___isActive_5 = static_cast<int32_t>(unmarshaled.get_isActive_5());
}
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke_back(const ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke& marshaled, ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD& unmarshaled)
{
	int32_t unmarshaled_buttons_temp_0 = 0;
	unmarshaled_buttons_temp_0 = marshaled.___buttons_0;
	unmarshaled.set_buttons_0(unmarshaled_buttons_temp_0);
	int32_t unmarshaled_touches_temp_1 = 0;
	unmarshaled_touches_temp_1 = marshaled.___touches_1;
	unmarshaled.set_touches_1(unmarshaled_touches_temp_1);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_joystickPosition_temp_2;
	memset((&unmarshaled_joystickPosition_temp_2), 0, sizeof(unmarshaled_joystickPosition_temp_2));
	unmarshaled_joystickPosition_temp_2 = marshaled.___joystickPosition_2;
	unmarshaled.set_joystickPosition_2(unmarshaled_joystickPosition_temp_2);
	float unmarshaled_indexTrigger_temp_3 = 0.0f;
	unmarshaled_indexTrigger_temp_3 = marshaled.___indexTrigger_3;
	unmarshaled.set_indexTrigger_3(unmarshaled_indexTrigger_temp_3);
	float unmarshaled_handTrigger_temp_4 = 0.0f;
	unmarshaled_handTrigger_temp_4 = marshaled.___handTrigger_4;
	unmarshaled.set_handTrigger_4(unmarshaled_handTrigger_temp_4);
	bool unmarshaled_isActive_temp_5 = false;
	unmarshaled_isActive_temp_5 = static_cast<bool>(marshaled.___isActive_5);
	unmarshaled.set_isActive_5(unmarshaled_isActive_temp_5);
}
// Conversion method for clean up from marshalling of: OvrAvatarDriver/ControllerPose
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke_cleanup(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: OvrAvatarDriver/ControllerPose
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com(const ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD& unmarshaled, ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com& marshaled)
{
	marshaled.___buttons_0 = unmarshaled.get_buttons_0();
	marshaled.___touches_1 = unmarshaled.get_touches_1();
	marshaled.___joystickPosition_2 = unmarshaled.get_joystickPosition_2();
	marshaled.___indexTrigger_3 = unmarshaled.get_indexTrigger_3();
	marshaled.___handTrigger_4 = unmarshaled.get_handTrigger_4();
	marshaled.___isActive_5 = static_cast<int32_t>(unmarshaled.get_isActive_5());
}
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com_back(const ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com& marshaled, ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD& unmarshaled)
{
	int32_t unmarshaled_buttons_temp_0 = 0;
	unmarshaled_buttons_temp_0 = marshaled.___buttons_0;
	unmarshaled.set_buttons_0(unmarshaled_buttons_temp_0);
	int32_t unmarshaled_touches_temp_1 = 0;
	unmarshaled_touches_temp_1 = marshaled.___touches_1;
	unmarshaled.set_touches_1(unmarshaled_touches_temp_1);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_joystickPosition_temp_2;
	memset((&unmarshaled_joystickPosition_temp_2), 0, sizeof(unmarshaled_joystickPosition_temp_2));
	unmarshaled_joystickPosition_temp_2 = marshaled.___joystickPosition_2;
	unmarshaled.set_joystickPosition_2(unmarshaled_joystickPosition_temp_2);
	float unmarshaled_indexTrigger_temp_3 = 0.0f;
	unmarshaled_indexTrigger_temp_3 = marshaled.___indexTrigger_3;
	unmarshaled.set_indexTrigger_3(unmarshaled_indexTrigger_temp_3);
	float unmarshaled_handTrigger_temp_4 = 0.0f;
	unmarshaled_handTrigger_temp_4 = marshaled.___handTrigger_4;
	unmarshaled.set_handTrigger_4(unmarshaled_handTrigger_temp_4);
	bool unmarshaled_isActive_temp_5 = false;
	unmarshaled_isActive_temp_5 = static_cast<bool>(marshaled.___isActive_5);
	unmarshaled.set_isActive_5(unmarshaled_isActive_temp_5);
}
// Conversion method for clean up from marshalling of: OvrAvatarDriver/ControllerPose
IL2CPP_EXTERN_C void ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com_cleanup(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshaled_com& marshaled)
{
}
// OvrAvatarDriver/ControllerPose OvrAvatarDriver/ControllerPose::Interpolate(OvrAvatarDriver/ControllerPose,OvrAvatarDriver/ControllerPose,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  ControllerPose_Interpolate_mFFCD926E9C586FA2A7BAE504FCEB42A231D31300 (ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  ___a0, ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  ___b1, float ___t2, const RuntimeMethod* method)
{
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * G_B2_0 = NULL;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * G_B3_1 = NULL;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * G_B5_0 = NULL;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * G_B6_1 = NULL;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * G_B8_0 = NULL;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * G_B7_0 = NULL;
	bool G_B9_0 = false;
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD * G_B9_1 = NULL;
	{
		// return new ControllerPose
		// {
		//     buttons = t < 0.5f ? a.buttons : b.buttons,
		//     touches = t < 0.5f ? a.touches : b.touches,
		//     joystickPosition = Vector2.Lerp(a.joystickPosition, b.joystickPosition, t),
		//     indexTrigger = Mathf.Lerp(a.indexTrigger, b.indexTrigger, t),
		//     handTrigger = Mathf.Lerp(a.handTrigger, b.handTrigger, t),
		//     isActive = t < 0.5f ? a.isActive : b.isActive,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD ));
		float L_0 = ___t2;
		G_B1_0 = (&V_0);
		if ((((float)L_0) < ((float)(0.5f))))
		{
			G_B2_0 = (&V_0);
			goto IL_001a;
		}
	}
	{
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_1 = ___b1;
		int32_t L_2 = L_1.get_buttons_0();
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_001a:
	{
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_3 = ___a0;
		int32_t L_4 = L_3.get_buttons_0();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		G_B3_1->set_buttons_0(G_B3_0);
		float L_5 = ___t2;
		G_B4_0 = (&V_0);
		if ((((float)L_5) < ((float)(0.5f))))
		{
			G_B5_0 = (&V_0);
			goto IL_0037;
		}
	}
	{
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_6 = ___b1;
		int32_t L_7 = L_6.get_touches_1();
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		goto IL_003d;
	}

IL_0037:
	{
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_8 = ___a0;
		int32_t L_9 = L_8.get_touches_1();
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
	}

IL_003d:
	{
		G_B6_1->set_touches_1(G_B6_0);
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_10 = ___a0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = L_10.get_joystickPosition_2();
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_12 = ___b1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = L_12.get_joystickPosition_2();
		float L_14 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline(L_11, L_13, L_14, /*hidden argument*/NULL);
		(&V_0)->set_joystickPosition_2(L_15);
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_16 = ___a0;
		float L_17 = L_16.get_indexTrigger_3();
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_18 = ___b1;
		float L_19 = L_18.get_indexTrigger_3();
		float L_20 = ___t2;
		float L_21;
		L_21 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_17, L_19, L_20, /*hidden argument*/NULL);
		(&V_0)->set_indexTrigger_3(L_21);
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_22 = ___a0;
		float L_23 = L_22.get_handTrigger_4();
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_24 = ___b1;
		float L_25 = L_24.get_handTrigger_4();
		float L_26 = ___t2;
		float L_27;
		L_27 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_23, L_25, L_26, /*hidden argument*/NULL);
		(&V_0)->set_handTrigger_4(L_27);
		float L_28 = ___t2;
		G_B7_0 = (&V_0);
		if ((((float)L_28) < ((float)(0.5f))))
		{
			G_B8_0 = (&V_0);
			goto IL_009f;
		}
	}
	{
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_29 = ___b1;
		bool L_30 = L_29.get_isActive_5();
		G_B9_0 = L_30;
		G_B9_1 = G_B7_0;
		goto IL_00a5;
	}

IL_009f:
	{
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_31 = ___a0;
		bool L_32 = L_31.get_isActive_5();
		G_B9_0 = L_32;
		G_B9_1 = G_B8_0;
	}

IL_00a5:
	{
		G_B9_1->set_isActive_5(G_B9_0);
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_33 = V_0;
		return L_33;
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




// Conversion methods for marshalling of: OvrAvatarDriver/PoseFrame
IL2CPP_EXTERN_C void PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshal_pinvoke(const PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7& unmarshaled, PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshaled_pinvoke& marshaled)
{
	marshaled.___headPosition_0 = unmarshaled.get_headPosition_0();
	marshaled.___headRotation_1 = unmarshaled.get_headRotation_1();
	marshaled.___handLeftPosition_2 = unmarshaled.get_handLeftPosition_2();
	marshaled.___handLeftRotation_3 = unmarshaled.get_handLeftRotation_3();
	marshaled.___handRightPosition_4 = unmarshaled.get_handRightPosition_4();
	marshaled.___handRightRotation_5 = unmarshaled.get_handRightRotation_5();
	marshaled.___voiceAmplitude_6 = unmarshaled.get_voiceAmplitude_6();
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke(unmarshaled.get_controllerLeftPose_7(), marshaled.___controllerLeftPose_7);
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke(unmarshaled.get_controllerRightPose_8(), marshaled.___controllerRightPose_8);
}
IL2CPP_EXTERN_C void PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshal_pinvoke_back(const PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshaled_pinvoke& marshaled, PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7& unmarshaled)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_headPosition_temp_0;
	memset((&unmarshaled_headPosition_temp_0), 0, sizeof(unmarshaled_headPosition_temp_0));
	unmarshaled_headPosition_temp_0 = marshaled.___headPosition_0;
	unmarshaled.set_headPosition_0(unmarshaled_headPosition_temp_0);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_headRotation_temp_1;
	memset((&unmarshaled_headRotation_temp_1), 0, sizeof(unmarshaled_headRotation_temp_1));
	unmarshaled_headRotation_temp_1 = marshaled.___headRotation_1;
	unmarshaled.set_headRotation_1(unmarshaled_headRotation_temp_1);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_handLeftPosition_temp_2;
	memset((&unmarshaled_handLeftPosition_temp_2), 0, sizeof(unmarshaled_handLeftPosition_temp_2));
	unmarshaled_handLeftPosition_temp_2 = marshaled.___handLeftPosition_2;
	unmarshaled.set_handLeftPosition_2(unmarshaled_handLeftPosition_temp_2);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_handLeftRotation_temp_3;
	memset((&unmarshaled_handLeftRotation_temp_3), 0, sizeof(unmarshaled_handLeftRotation_temp_3));
	unmarshaled_handLeftRotation_temp_3 = marshaled.___handLeftRotation_3;
	unmarshaled.set_handLeftRotation_3(unmarshaled_handLeftRotation_temp_3);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_handRightPosition_temp_4;
	memset((&unmarshaled_handRightPosition_temp_4), 0, sizeof(unmarshaled_handRightPosition_temp_4));
	unmarshaled_handRightPosition_temp_4 = marshaled.___handRightPosition_4;
	unmarshaled.set_handRightPosition_4(unmarshaled_handRightPosition_temp_4);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_handRightRotation_temp_5;
	memset((&unmarshaled_handRightRotation_temp_5), 0, sizeof(unmarshaled_handRightRotation_temp_5));
	unmarshaled_handRightRotation_temp_5 = marshaled.___handRightRotation_5;
	unmarshaled.set_handRightRotation_5(unmarshaled_handRightRotation_temp_5);
	float unmarshaled_voiceAmplitude_temp_6 = 0.0f;
	unmarshaled_voiceAmplitude_temp_6 = marshaled.___voiceAmplitude_6;
	unmarshaled.set_voiceAmplitude_6(unmarshaled_voiceAmplitude_temp_6);
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  unmarshaled_controllerLeftPose_temp_7;
	memset((&unmarshaled_controllerLeftPose_temp_7), 0, sizeof(unmarshaled_controllerLeftPose_temp_7));
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke_back(marshaled.___controllerLeftPose_7, unmarshaled_controllerLeftPose_temp_7);
	unmarshaled.set_controllerLeftPose_7(unmarshaled_controllerLeftPose_temp_7);
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  unmarshaled_controllerRightPose_temp_8;
	memset((&unmarshaled_controllerRightPose_temp_8), 0, sizeof(unmarshaled_controllerRightPose_temp_8));
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke_back(marshaled.___controllerRightPose_8, unmarshaled_controllerRightPose_temp_8);
	unmarshaled.set_controllerRightPose_8(unmarshaled_controllerRightPose_temp_8);
}
// Conversion method for clean up from marshalling of: OvrAvatarDriver/PoseFrame
IL2CPP_EXTERN_C void PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshal_pinvoke_cleanup(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshaled_pinvoke& marshaled)
{
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke_cleanup(marshaled.___controllerLeftPose_7);
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_pinvoke_cleanup(marshaled.___controllerRightPose_8);
}




// Conversion methods for marshalling of: OvrAvatarDriver/PoseFrame
IL2CPP_EXTERN_C void PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshal_com(const PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7& unmarshaled, PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshaled_com& marshaled)
{
	marshaled.___headPosition_0 = unmarshaled.get_headPosition_0();
	marshaled.___headRotation_1 = unmarshaled.get_headRotation_1();
	marshaled.___handLeftPosition_2 = unmarshaled.get_handLeftPosition_2();
	marshaled.___handLeftRotation_3 = unmarshaled.get_handLeftRotation_3();
	marshaled.___handRightPosition_4 = unmarshaled.get_handRightPosition_4();
	marshaled.___handRightRotation_5 = unmarshaled.get_handRightRotation_5();
	marshaled.___voiceAmplitude_6 = unmarshaled.get_voiceAmplitude_6();
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com(unmarshaled.get_controllerLeftPose_7(), marshaled.___controllerLeftPose_7);
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com(unmarshaled.get_controllerRightPose_8(), marshaled.___controllerRightPose_8);
}
IL2CPP_EXTERN_C void PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshal_com_back(const PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshaled_com& marshaled, PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7& unmarshaled)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_headPosition_temp_0;
	memset((&unmarshaled_headPosition_temp_0), 0, sizeof(unmarshaled_headPosition_temp_0));
	unmarshaled_headPosition_temp_0 = marshaled.___headPosition_0;
	unmarshaled.set_headPosition_0(unmarshaled_headPosition_temp_0);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_headRotation_temp_1;
	memset((&unmarshaled_headRotation_temp_1), 0, sizeof(unmarshaled_headRotation_temp_1));
	unmarshaled_headRotation_temp_1 = marshaled.___headRotation_1;
	unmarshaled.set_headRotation_1(unmarshaled_headRotation_temp_1);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_handLeftPosition_temp_2;
	memset((&unmarshaled_handLeftPosition_temp_2), 0, sizeof(unmarshaled_handLeftPosition_temp_2));
	unmarshaled_handLeftPosition_temp_2 = marshaled.___handLeftPosition_2;
	unmarshaled.set_handLeftPosition_2(unmarshaled_handLeftPosition_temp_2);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_handLeftRotation_temp_3;
	memset((&unmarshaled_handLeftRotation_temp_3), 0, sizeof(unmarshaled_handLeftRotation_temp_3));
	unmarshaled_handLeftRotation_temp_3 = marshaled.___handLeftRotation_3;
	unmarshaled.set_handLeftRotation_3(unmarshaled_handLeftRotation_temp_3);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_handRightPosition_temp_4;
	memset((&unmarshaled_handRightPosition_temp_4), 0, sizeof(unmarshaled_handRightPosition_temp_4));
	unmarshaled_handRightPosition_temp_4 = marshaled.___handRightPosition_4;
	unmarshaled.set_handRightPosition_4(unmarshaled_handRightPosition_temp_4);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_handRightRotation_temp_5;
	memset((&unmarshaled_handRightRotation_temp_5), 0, sizeof(unmarshaled_handRightRotation_temp_5));
	unmarshaled_handRightRotation_temp_5 = marshaled.___handRightRotation_5;
	unmarshaled.set_handRightRotation_5(unmarshaled_handRightRotation_temp_5);
	float unmarshaled_voiceAmplitude_temp_6 = 0.0f;
	unmarshaled_voiceAmplitude_temp_6 = marshaled.___voiceAmplitude_6;
	unmarshaled.set_voiceAmplitude_6(unmarshaled_voiceAmplitude_temp_6);
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  unmarshaled_controllerLeftPose_temp_7;
	memset((&unmarshaled_controllerLeftPose_temp_7), 0, sizeof(unmarshaled_controllerLeftPose_temp_7));
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com_back(marshaled.___controllerLeftPose_7, unmarshaled_controllerLeftPose_temp_7);
	unmarshaled.set_controllerLeftPose_7(unmarshaled_controllerLeftPose_temp_7);
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  unmarshaled_controllerRightPose_temp_8;
	memset((&unmarshaled_controllerRightPose_temp_8), 0, sizeof(unmarshaled_controllerRightPose_temp_8));
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com_back(marshaled.___controllerRightPose_8, unmarshaled_controllerRightPose_temp_8);
	unmarshaled.set_controllerRightPose_8(unmarshaled_controllerRightPose_temp_8);
}
// Conversion method for clean up from marshalling of: OvrAvatarDriver/PoseFrame
IL2CPP_EXTERN_C void PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshal_com_cleanup(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7_marshaled_com& marshaled)
{
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com_cleanup(marshaled.___controllerLeftPose_7);
	ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD_marshal_com_cleanup(marshaled.___controllerRightPose_8);
}
// OvrAvatarDriver/PoseFrame OvrAvatarDriver/PoseFrame::Interpolate(OvrAvatarDriver/PoseFrame,OvrAvatarDriver/PoseFrame,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  PoseFrame_Interpolate_mF56FB29ACBA999727C9C7C7CC80534F60FB927ED (PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  ___a0, PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  ___b1, float ___t2, const RuntimeMethod* method)
{
	PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new PoseFrame
		// {
		//     headPosition = Vector3.Lerp(a.headPosition, b.headPosition, t),
		//     headRotation = Quaternion.Slerp(a.headRotation, b.headRotation, t),
		//     handLeftPosition = Vector3.Lerp(a.handLeftPosition, b.handLeftPosition, t),
		//     handLeftRotation = Quaternion.Slerp(a.handLeftRotation, b.handLeftRotation, t),
		//     handRightPosition = Vector3.Lerp(a.handRightPosition, b.handRightPosition, t),
		//     handRightRotation = Quaternion.Slerp(a.handRightRotation, b.handRightRotation, t),
		//     voiceAmplitude = Mathf.Lerp(a.voiceAmplitude, b.voiceAmplitude, t),
		//     controllerLeftPose = ControllerPose.Interpolate(a.controllerLeftPose, b.controllerLeftPose, t),
		//     controllerRightPose = ControllerPose.Interpolate(a.controllerRightPose, b.controllerRightPose, t),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7 ));
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_headPosition_0();
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_headPosition_0();
		float L_4 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_1, L_3, L_4, /*hidden argument*/NULL);
		(&V_0)->set_headPosition_0(L_5);
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_6 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = L_6.get_headRotation_1();
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_8 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_headRotation_1();
		float L_10 = ___t2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_7, L_9, L_10, /*hidden argument*/NULL);
		(&V_0)->set_headRotation_1(L_11);
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_12 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = L_12.get_handLeftPosition_2();
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_14 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = L_14.get_handLeftPosition_2();
		float L_16 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_13, L_15, L_16, /*hidden argument*/NULL);
		(&V_0)->set_handLeftPosition_2(L_17);
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_18 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19 = L_18.get_handLeftRotation_3();
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_20 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21 = L_20.get_handLeftRotation_3();
		float L_22 = ___t2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_19, L_21, L_22, /*hidden argument*/NULL);
		(&V_0)->set_handLeftRotation_3(L_23);
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_24 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = L_24.get_handRightPosition_4();
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_26 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = L_26.get_handRightPosition_4();
		float L_28 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_25, L_27, L_28, /*hidden argument*/NULL);
		(&V_0)->set_handRightPosition_4(L_29);
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_30 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = L_30.get_handRightRotation_5();
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_32 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33 = L_32.get_handRightRotation_5();
		float L_34 = ___t2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35;
		L_35 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_31, L_33, L_34, /*hidden argument*/NULL);
		(&V_0)->set_handRightRotation_5(L_35);
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_36 = ___a0;
		float L_37 = L_36.get_voiceAmplitude_6();
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_38 = ___b1;
		float L_39 = L_38.get_voiceAmplitude_6();
		float L_40 = ___t2;
		float L_41;
		L_41 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_37, L_39, L_40, /*hidden argument*/NULL);
		(&V_0)->set_voiceAmplitude_6(L_41);
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_42 = ___a0;
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_43 = L_42.get_controllerLeftPose_7();
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_44 = ___b1;
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_45 = L_44.get_controllerLeftPose_7();
		float L_46 = ___t2;
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_47;
		L_47 = ControllerPose_Interpolate_mFFCD926E9C586FA2A7BAE504FCEB42A231D31300(L_43, L_45, L_46, /*hidden argument*/NULL);
		(&V_0)->set_controllerLeftPose_7(L_47);
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_48 = ___a0;
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_49 = L_48.get_controllerRightPose_8();
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_50 = ___b1;
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_51 = L_50.get_controllerRightPose_8();
		float L_52 = ___t2;
		ControllerPose_t1F5C9AA27425C2A5C27AD83F643A0C2B571ACCFD  L_53;
		L_53 = ControllerPose_Interpolate_mFFCD926E9C586FA2A7BAE504FCEB42A231D31300(L_49, L_51, L_52, /*hidden argument*/NULL);
		(&V_0)->set_controllerRightPose_8(L_53);
		PoseFrame_t845FC42DA6F5F31A4BB604F7097D0406E3B495F7  L_54 = V_0;
		return L_54;
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
// System.Void OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunLoadingAnimationU3Ed__49__ctor_m43C27C76F38D8F3F3F60BD229ACA2F5DE8A34A81 (U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunLoadingAnimationU3Ed__49_System_IDisposable_Dispose_mE08FA819A41936B454B0DC7414239CE5E49BE750 (U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRunLoadingAnimationU3Ed__49_MoveNext_m37A6368254A8C97B72D2550D01F14CAAFC442121 (U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral565F9C56DD9483223083FD5E97FB3FF2136D8C25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5B09A917F4F6B1AFC012E5D971BF59C538FD26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0E8ACCC72C7CBBB860173D8F86FC1851A0B6494);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0193;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// CombinedShader = TargetRenderer.sharedMaterial.shader;
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_4 = V_1;
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_5 = V_1;
		NullCheck(L_5);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_6 = L_5->get_TargetRenderer_4();
		NullCheck(L_6);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7;
		L_7 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_8;
		L_8 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_CombinedShader_9(L_8);
		// int srcBlend = TargetRenderer.sharedMaterial.GetInt("_SrcBlend");
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_9 = V_1;
		NullCheck(L_9);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_10 = L_9->get_TargetRenderer_4();
		NullCheck(L_10);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11;
		L_11 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Material_GetInt_m5B62B127CF60B5226EC9B8930060B7F48BF6F614(L_11, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, /*hidden argument*/NULL);
		__this->set_U3CsrcBlendU3E5__2_4(L_12);
		// int dstBlend = TargetRenderer.sharedMaterial.GetInt("_DstBlend");
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_13 = V_1;
		NullCheck(L_13);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_14 = L_13->get_TargetRenderer_4();
		NullCheck(L_14);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15;
		L_15 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Material_GetInt_m5B62B127CF60B5226EC9B8930060B7F48BF6F614(L_15, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, /*hidden argument*/NULL);
		__this->set_U3CdstBlendU3E5__3_5(L_16);
		// string lightModeTag = TargetRenderer.sharedMaterial.GetTag("LightMode", false);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_17 = V_1;
		NullCheck(L_17);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18 = L_17->get_TargetRenderer_4();
		NullCheck(L_18);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19;
		L_19 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Material_GetTag_mEAF0285CDE4B5747603C684BB900CA34DCB8B5F9(L_19, _stringLiteral565F9C56DD9483223083FD5E97FB3FF2136D8C25, (bool)0, /*hidden argument*/NULL);
		__this->set_U3ClightModeTagU3E5__4_6(L_20);
		// string renderTypeTag = TargetRenderer.sharedMaterial.GetTag("RenderType", false);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_21 = V_1;
		NullCheck(L_21);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_22 = L_21->get_TargetRenderer_4();
		NullCheck(L_22);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23;
		L_23 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Material_GetTag_mEAF0285CDE4B5747603C684BB900CA34DCB8B5F9(L_23, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, (bool)0, /*hidden argument*/NULL);
		__this->set_U3CrenderTypeTagU3E5__5_7(L_24);
		// string renderQueueTag = TargetRenderer.sharedMaterial.GetTag("Queue", false);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_25 = V_1;
		NullCheck(L_25);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_26 = L_25->get_TargetRenderer_4();
		NullCheck(L_26);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27;
		L_27 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Material_GetTag_mEAF0285CDE4B5747603C684BB900CA34DCB8B5F9(L_27, _stringLiteral5D5B09A917F4F6B1AFC012E5D971BF59C538FD26, (bool)0, /*hidden argument*/NULL);
		__this->set_U3CrenderQueueTagU3E5__6_8(L_28);
		// string ignoreProjectorTag = TargetRenderer.sharedMaterial.GetTag("IgnoreProjector", false);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_29 = V_1;
		NullCheck(L_29);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_30 = L_29->get_TargetRenderer_4();
		NullCheck(L_30);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_31;
		L_31 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Material_GetTag_mEAF0285CDE4B5747603C684BB900CA34DCB8B5F9(L_31, _stringLiteralF0E8ACCC72C7CBBB860173D8F86FC1851A0B6494, (bool)0, /*hidden argument*/NULL);
		__this->set_U3CignoreProjectorTagU3E5__7_9(L_32);
		// int renderQueue = TargetRenderer.sharedMaterial.renderQueue;
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_33 = V_1;
		NullCheck(L_33);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_34 = L_33->get_TargetRenderer_4();
		NullCheck(L_34);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_35;
		L_35 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C(L_35, /*hidden argument*/NULL);
		__this->set_U3CrenderQueueU3E5__8_10(L_36);
		// bool transparentQueue = TargetRenderer.sharedMaterial.IsKeywordEnabled("_ALPHATEST_ON");
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_37 = V_1;
		NullCheck(L_37);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_38 = L_37->get_TargetRenderer_4();
		NullCheck(L_38);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_39;
		L_39 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		bool L_40;
		L_40 = Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E(L_39, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, /*hidden argument*/NULL);
		__this->set_U3CtransparentQueueU3E5__9_11(L_40);
		// TargetRenderer.sharedMaterial.shader = Shader.Find(AVATAR_SHADER_LOADER);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_41 = V_1;
		NullCheck(L_41);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_42 = L_41->get_TargetRenderer_4();
		NullCheck(L_42);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43;
		L_43 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_il2cpp_TypeInfo_var);
		String_t* L_44 = ((OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields*)il2cpp_codegen_static_fields_for(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_il2cpp_TypeInfo_var))->get_AVATAR_SHADER_LOADER_10();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_45;
		L_45 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_43, L_45, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.SetColor(AVATAR_SHADER_COLOR, Color.white);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_46 = V_1;
		NullCheck(L_46);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_47 = L_46->get_TargetRenderer_4();
		NullCheck(L_47);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48;
		L_48 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_47, /*hidden argument*/NULL);
		String_t* L_49 = ((OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields*)il2cpp_codegen_static_fields_for(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_il2cpp_TypeInfo_var))->get_AVATAR_SHADER_COLOR_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_50;
		L_50 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_48);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_48, L_49, L_50, /*hidden argument*/NULL);
		goto IL_019a;
	}

IL_0144:
	{
		// float distance = (LOADING_ANIMATION_AMPLITUDE * Mathf.Sin(Time.timeSinceLevelLoad / LOADING_ANIMATION_PERIOD) +
		//     LOADING_ANIMATION_AMPLITUDE) * (LOADING_ANIMATION_CURVE_SCALE) + LOADING_ANIMATION_DIMMER_MIN;
		float L_51;
		L_51 = Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB(/*hidden argument*/NULL);
		float L_52;
		L_52 = sinf(((float)((float)L_51/(float)(0.349999994f))));
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_52)), (float)(0.5f))), (float)(0.25f))), (float)(0.300000012f)));
		// TargetRenderer.sharedMaterial.SetFloat(AVATAR_SHADER_LOADING_DIMMER, distance);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_53 = V_1;
		NullCheck(L_53);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_54 = L_53->get_TargetRenderer_4();
		NullCheck(L_54);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_55;
		L_55 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_il2cpp_TypeInfo_var);
		String_t* L_56 = ((OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields*)il2cpp_codegen_static_fields_for(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_il2cpp_TypeInfo_var))->get_AVATAR_SHADER_LOADING_DIMMER_20();
		float L_57 = V_2;
		NullCheck(L_55);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_55, L_56, L_57, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0193:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_019a:
	{
		// while (OvrAvatarSDKManager.Instance.GetTextureCopyManager().GetTextureCount() > 0)
		OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF * L_58;
		L_58 = OvrAvatarSDKManager_get_Instance_mB9B5FF8B8F1E78391247927F232F3F7383E70563(/*hidden argument*/NULL);
		NullCheck(L_58);
		OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * L_59;
		L_59 = OvrAvatarSDKManager_GetTextureCopyManager_mAD832C2A625A244AA199A83CF6729915A056625A(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		int32_t L_60;
		L_60 = OvrAvatarTextureCopyManager_GetTextureCount_m7E8EFA97005056B17B3ADDBF04E715C20AE287DA(L_59, /*hidden argument*/NULL);
		if ((((int32_t)L_60) > ((int32_t)0)))
		{
			goto IL_0144;
		}
	}
	{
		// TargetRenderer.sharedMaterial.SetFloat(AVATAR_SHADER_LOADING_DIMMER, 1f);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_61 = V_1;
		NullCheck(L_61);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_62 = L_61->get_TargetRenderer_4();
		NullCheck(L_62);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_63;
		L_63 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_il2cpp_TypeInfo_var);
		String_t* L_64 = ((OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_StaticFields*)il2cpp_codegen_static_fields_for(OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720_il2cpp_TypeInfo_var))->get_AVATAR_SHADER_LOADING_DIMMER_20();
		NullCheck(L_63);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_63, L_64, (1.0f), /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.shader = CombinedShader;
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_65 = V_1;
		NullCheck(L_65);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_66 = L_65->get_TargetRenderer_4();
		NullCheck(L_66);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_66, /*hidden argument*/NULL);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_68 = V_1;
		NullCheck(L_68);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_69 = L_68->get_CombinedShader_9();
		NullCheck(L_67);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_67, L_69, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.SetInt("_SrcBlend", srcBlend);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_70 = V_1;
		NullCheck(L_70);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_71 = L_70->get_TargetRenderer_4();
		NullCheck(L_71);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72;
		L_72 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_71, /*hidden argument*/NULL);
		int32_t L_73 = __this->get_U3CsrcBlendU3E5__2_4();
		NullCheck(L_72);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_72, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, L_73, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.SetInt("_DstBlend", dstBlend);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_74 = V_1;
		NullCheck(L_74);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_75 = L_74->get_TargetRenderer_4();
		NullCheck(L_75);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_76;
		L_76 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_75, /*hidden argument*/NULL);
		int32_t L_77 = __this->get_U3CdstBlendU3E5__3_5();
		NullCheck(L_76);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_76, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, L_77, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.SetOverrideTag("LightMode", lightModeTag);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_78 = V_1;
		NullCheck(L_78);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_79 = L_78->get_TargetRenderer_4();
		NullCheck(L_79);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_80;
		L_80 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_79, /*hidden argument*/NULL);
		String_t* L_81 = __this->get_U3ClightModeTagU3E5__4_6();
		NullCheck(L_80);
		Material_SetOverrideTag_m5786C05270AD48B5B0756D5BC367017965B880C4(L_80, _stringLiteral565F9C56DD9483223083FD5E97FB3FF2136D8C25, L_81, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.SetOverrideTag("RenderType", renderTypeTag);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_82 = V_1;
		NullCheck(L_82);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_83 = L_82->get_TargetRenderer_4();
		NullCheck(L_83);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_84;
		L_84 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_83, /*hidden argument*/NULL);
		String_t* L_85 = __this->get_U3CrenderTypeTagU3E5__5_7();
		NullCheck(L_84);
		Material_SetOverrideTag_m5786C05270AD48B5B0756D5BC367017965B880C4(L_84, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, L_85, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.SetOverrideTag("Queue", renderQueueTag);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_86 = V_1;
		NullCheck(L_86);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_87 = L_86->get_TargetRenderer_4();
		NullCheck(L_87);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_88;
		L_88 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_87, /*hidden argument*/NULL);
		String_t* L_89 = __this->get_U3CrenderQueueTagU3E5__6_8();
		NullCheck(L_88);
		Material_SetOverrideTag_m5786C05270AD48B5B0756D5BC367017965B880C4(L_88, _stringLiteral5D5B09A917F4F6B1AFC012E5D971BF59C538FD26, L_89, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.SetOverrideTag("IgnoreProjector", ignoreProjectorTag);
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_90 = V_1;
		NullCheck(L_90);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_91 = L_90->get_TargetRenderer_4();
		NullCheck(L_91);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_92;
		L_92 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_91, /*hidden argument*/NULL);
		String_t* L_93 = __this->get_U3CignoreProjectorTagU3E5__7_9();
		NullCheck(L_92);
		Material_SetOverrideTag_m5786C05270AD48B5B0756D5BC367017965B880C4(L_92, _stringLiteralF0E8ACCC72C7CBBB860173D8F86FC1851A0B6494, L_93, /*hidden argument*/NULL);
		// if (transparentQueue)
		bool L_94 = __this->get_U3CtransparentQueueU3E5__9_11();
		if (!L_94)
		{
			goto IL_02c7;
		}
	}
	{
		// TargetRenderer.sharedMaterial.EnableKeyword("_ALPHATEST_ON");
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_95 = V_1;
		NullCheck(L_95);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_96 = L_95->get_TargetRenderer_4();
		NullCheck(L_96);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_97;
		L_97 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_97, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.EnableKeyword("_ALPHABLEND_ON");
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_98 = V_1;
		NullCheck(L_98);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_99 = L_98->get_TargetRenderer_4();
		NullCheck(L_99);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_100;
		L_100 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_99, /*hidden argument*/NULL);
		NullCheck(L_100);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_100, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.EnableKeyword("_ALPHAPREMULTIPLY_ON");
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_101 = V_1;
		NullCheck(L_101);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_102 = L_101->get_TargetRenderer_4();
		NullCheck(L_102);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_103;
		L_103 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_102, /*hidden argument*/NULL);
		NullCheck(L_103);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_103, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, /*hidden argument*/NULL);
		// }
		goto IL_0306;
	}

IL_02c7:
	{
		// TargetRenderer.sharedMaterial.DisableKeyword("_ALPHATEST_ON");
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_104 = V_1;
		NullCheck(L_104);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_105 = L_104->get_TargetRenderer_4();
		NullCheck(L_105);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_106;
		L_106 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_105, /*hidden argument*/NULL);
		NullCheck(L_106);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_106, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.DisableKeyword("_ALPHABLEND_ON");
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_107 = V_1;
		NullCheck(L_107);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_108 = L_107->get_TargetRenderer_4();
		NullCheck(L_108);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_109;
		L_109 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_108, /*hidden argument*/NULL);
		NullCheck(L_109);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_109, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, /*hidden argument*/NULL);
		// TargetRenderer.sharedMaterial.DisableKeyword("_ALPHAPREMULTIPLY_ON");
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_110 = V_1;
		NullCheck(L_110);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_111 = L_110->get_TargetRenderer_4();
		NullCheck(L_111);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_112;
		L_112 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_111, /*hidden argument*/NULL);
		NullCheck(L_112);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_112, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, /*hidden argument*/NULL);
	}

IL_0306:
	{
		// TargetRenderer.sharedMaterial.renderQueue = renderQueue;
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_113 = V_1;
		NullCheck(L_113);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_114 = L_113->get_TargetRenderer_4();
		NullCheck(L_114);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_115;
		L_115 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_114, /*hidden argument*/NULL);
		int32_t L_116 = __this->get_U3CrenderQueueU3E5__8_10();
		NullCheck(L_115);
		Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_115, L_116, /*hidden argument*/NULL);
		// ApplyMaterialPropertyBlock();
		OvrAvatarMaterialManager_t4F50C710CA27EA281CA9CB158F6E14366FA3A720 * L_117 = V_1;
		NullCheck(L_117);
		OvrAvatarMaterialManager_ApplyMaterialPropertyBlock_mBFBBAB70543AD985D044D1B1261EB07B8226325B(L_117, /*hidden argument*/NULL);
		// if (callBack != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_118 = __this->get_callBack_3();
		if (!L_118)
		{
			goto IL_0335;
		}
	}
	{
		// callBack();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_119 = __this->get_callBack_3();
		NullCheck(L_119);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_119, /*hidden argument*/NULL);
	}

IL_0335:
	{
		// }
		return (bool)0;
	}
}
// System.Object OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunLoadingAnimationU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDC75F672BB6BAD350DD052C15CA28E17A0E2C380 (U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunLoadingAnimationU3Ed__49_System_Collections_IEnumerator_Reset_mE0F680342E7E1E8ED7EF4068256FD39CEC1C3CB9 (U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRunLoadingAnimationU3Ed__49_System_Collections_IEnumerator_Reset_mE0F680342E7E1E8ED7EF4068256FD39CEC1C3CB9_RuntimeMethod_var)));
	}
}
// System.Object OvrAvatarMaterialManager/<RunLoadingAnimation>d__49::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunLoadingAnimationU3Ed__49_System_Collections_IEnumerator_get_Current_mA67FEEB470D478F15DB1A503103A714AB1794D33 (U3CRunLoadingAnimationU3Ed__49_tF30BDC91C07F4EE7A342977C082DF53E3AC44DCB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: OvrAvatarMaterialManager/AvatarComponentMaterialProperties
IL2CPP_EXTERN_C void AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshal_pinvoke(const AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110& unmarshaled, AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Textures_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Textures' of type 'AvatarComponentMaterialProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Textures_2Exception, NULL);
}
IL2CPP_EXTERN_C void AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshal_pinvoke_back(const AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshaled_pinvoke& marshaled, AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110& unmarshaled)
{
	Exception_t* ___Textures_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Textures' of type 'AvatarComponentMaterialProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Textures_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: OvrAvatarMaterialManager/AvatarComponentMaterialProperties
IL2CPP_EXTERN_C void AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshal_pinvoke_cleanup(AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: OvrAvatarMaterialManager/AvatarComponentMaterialProperties
IL2CPP_EXTERN_C void AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshal_com(const AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110& unmarshaled, AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshaled_com& marshaled)
{
	Exception_t* ___Textures_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Textures' of type 'AvatarComponentMaterialProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Textures_2Exception, NULL);
}
IL2CPP_EXTERN_C void AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshal_com_back(const AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshaled_com& marshaled, AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110& unmarshaled)
{
	Exception_t* ___Textures_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Textures' of type 'AvatarComponentMaterialProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Textures_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: OvrAvatarMaterialManager/AvatarComponentMaterialProperties
IL2CPP_EXTERN_C void AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshal_com_cleanup(AvatarComponentMaterialProperties_t3B9647679EFEB428C3502E9A1A1C3739A3CF8110_marshaled_com& marshaled)
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
// System.Void OvrAvatarMaterialManager/AvatarMaterialConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarMaterialConfig__ctor_m94DAF6BC95EAE1BEEFB2C2E7D2CAB0942F14AEDC (AvatarMaterialConfig_t68C0A6847F7A05CF97CDF3580293DC0F7EDFC34D * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: OvrAvatarMaterialManager/AvatarMaterialPropertyBlock
IL2CPP_EXTERN_C void AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshal_pinvoke(const AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878& unmarshaled, AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_Colors_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_Colors_Length = (unmarshaled.get_Colors_0())->max_length;
		marshaled.___Colors_0 = il2cpp_codegen_marshal_allocate_array<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 >(_unmarshaled_Colors_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_Colors_Length); i++)
		{
			(marshaled.___Colors_0)[i] = (unmarshaled.get_Colors_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Colors_0 = NULL;
	}
	marshaled.___DiffuseIntensities_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_DiffuseIntensities_1());
	marshaled.___RimIntensities_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_RimIntensities_2());
	marshaled.___ReflectionIntensities_3 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_ReflectionIntensities_3());
}
IL2CPP_EXTERN_C void AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshal_pinvoke_back(const AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshaled_pinvoke& marshaled, AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___Colors_0 != NULL)
	{
		if (unmarshaled.get_Colors_0() == NULL)
		{
			unmarshaled.set_Colors_0(reinterpret_cast<Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*>((Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)SZArrayNew(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_Colors_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_Colors_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Colors_0)[i]);
		}
	}
	unmarshaled.set_DiffuseIntensities_1((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___DiffuseIntensities_1));
	unmarshaled.set_RimIntensities_2((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___RimIntensities_2));
	unmarshaled.set_ReflectionIntensities_3((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___ReflectionIntensities_3));
}
// Conversion method for clean up from marshalling of: OvrAvatarMaterialManager/AvatarMaterialPropertyBlock
IL2CPP_EXTERN_C void AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshal_pinvoke_cleanup(AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshaled_pinvoke& marshaled)
{
	if (marshaled.___Colors_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Colors_0);
		marshaled.___Colors_0 = NULL;
	}
	il2cpp_codegen_com_destroy_safe_array(marshaled.___DiffuseIntensities_1);
	marshaled.___DiffuseIntensities_1 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___RimIntensities_2);
	marshaled.___RimIntensities_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___ReflectionIntensities_3);
	marshaled.___ReflectionIntensities_3 = NULL;
}
// Conversion methods for marshalling of: OvrAvatarMaterialManager/AvatarMaterialPropertyBlock
IL2CPP_EXTERN_C void AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshal_com(const AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878& unmarshaled, AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshaled_com& marshaled)
{
	if (unmarshaled.get_Colors_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_Colors_Length = (unmarshaled.get_Colors_0())->max_length;
		marshaled.___Colors_0 = il2cpp_codegen_marshal_allocate_array<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 >(_unmarshaled_Colors_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_Colors_Length); i++)
		{
			(marshaled.___Colors_0)[i] = (unmarshaled.get_Colors_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Colors_0 = NULL;
	}
	marshaled.___DiffuseIntensities_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_DiffuseIntensities_1());
	marshaled.___RimIntensities_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_RimIntensities_2());
	marshaled.___ReflectionIntensities_3 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_ReflectionIntensities_3());
}
IL2CPP_EXTERN_C void AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshal_com_back(const AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshaled_com& marshaled, AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___Colors_0 != NULL)
	{
		if (unmarshaled.get_Colors_0() == NULL)
		{
			unmarshaled.set_Colors_0(reinterpret_cast<Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*>((Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)SZArrayNew(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_Colors_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_Colors_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Colors_0)[i]);
		}
	}
	unmarshaled.set_DiffuseIntensities_1((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___DiffuseIntensities_1));
	unmarshaled.set_RimIntensities_2((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___RimIntensities_2));
	unmarshaled.set_ReflectionIntensities_3((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___ReflectionIntensities_3));
}
// Conversion method for clean up from marshalling of: OvrAvatarMaterialManager/AvatarMaterialPropertyBlock
IL2CPP_EXTERN_C void AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshal_com_cleanup(AvatarMaterialPropertyBlock_tB33B5DDBFA7A08D161E5CCAA910D2FD825954878_marshaled_com& marshaled)
{
	if (marshaled.___Colors_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Colors_0);
		marshaled.___Colors_0 = NULL;
	}
	il2cpp_codegen_com_destroy_safe_array(marshaled.___DiffuseIntensities_1);
	marshaled.___DiffuseIntensities_1 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___RimIntensities_2);
	marshaled.___RimIntensities_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___ReflectionIntensities_3);
	marshaled.___ReflectionIntensities_3 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: OvrAvatarMaterialManager/AvatarTextureArrayProperties
IL2CPP_EXTERN_C void AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshal_pinvoke(const AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02& unmarshaled, AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Textures_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Textures' of type 'AvatarTextureArrayProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Textures_0Exception, NULL);
}
IL2CPP_EXTERN_C void AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshal_pinvoke_back(const AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshaled_pinvoke& marshaled, AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02& unmarshaled)
{
	Exception_t* ___Textures_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Textures' of type 'AvatarTextureArrayProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Textures_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: OvrAvatarMaterialManager/AvatarTextureArrayProperties
IL2CPP_EXTERN_C void AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshal_pinvoke_cleanup(AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: OvrAvatarMaterialManager/AvatarTextureArrayProperties
IL2CPP_EXTERN_C void AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshal_com(const AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02& unmarshaled, AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshaled_com& marshaled)
{
	Exception_t* ___Textures_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Textures' of type 'AvatarTextureArrayProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Textures_0Exception, NULL);
}
IL2CPP_EXTERN_C void AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshal_com_back(const AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshaled_com& marshaled, AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02& unmarshaled)
{
	Exception_t* ___Textures_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Textures' of type 'AvatarTextureArrayProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Textures_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: OvrAvatarMaterialManager/AvatarTextureArrayProperties
IL2CPP_EXTERN_C void AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshal_com_cleanup(AvatarTextureArrayProperties_t1FA2CC0F110E767BC80CE54F7D31022804914F02_marshaled_com& marshaled)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: OvrAvatarSDKManager/AvatarSpecRequestParams
IL2CPP_EXTERN_C void AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshal_pinvoke(const AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5& unmarshaled, AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshaled_pinvoke& marshaled)
{
	marshaled.____userId_0 = unmarshaled.get__userId_0();
	marshaled.____callback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get__callback_1()));
	marshaled.____useCombinedMesh_2 = static_cast<int32_t>(unmarshaled.get__useCombinedMesh_2());
	marshaled.____lod_3 = unmarshaled.get__lod_3();
	marshaled.____forceMobileTextureFormat_4 = static_cast<int32_t>(unmarshaled.get__forceMobileTextureFormat_4());
	marshaled.____lookVersion_5 = unmarshaled.get__lookVersion_5();
	marshaled.____fallbackVersion_6 = unmarshaled.get__fallbackVersion_6();
	marshaled.____enableExpressive_7 = static_cast<int32_t>(unmarshaled.get__enableExpressive_7());
}
IL2CPP_EXTERN_C void AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshal_pinvoke_back(const AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshaled_pinvoke& marshaled, AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t unmarshaled__userId_temp_0 = 0;
	unmarshaled__userId_temp_0 = marshaled.____userId_0;
	unmarshaled.set__userId_0(unmarshaled__userId_temp_0);
	unmarshaled.set__callback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0>(marshaled.____callback_1, specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0_il2cpp_TypeInfo_var));
	bool unmarshaled__useCombinedMesh_temp_2 = false;
	unmarshaled__useCombinedMesh_temp_2 = static_cast<bool>(marshaled.____useCombinedMesh_2);
	unmarshaled.set__useCombinedMesh_2(unmarshaled__useCombinedMesh_temp_2);
	int32_t unmarshaled__lod_temp_3 = 0;
	unmarshaled__lod_temp_3 = marshaled.____lod_3;
	unmarshaled.set__lod_3(unmarshaled__lod_temp_3);
	bool unmarshaled__forceMobileTextureFormat_temp_4 = false;
	unmarshaled__forceMobileTextureFormat_temp_4 = static_cast<bool>(marshaled.____forceMobileTextureFormat_4);
	unmarshaled.set__forceMobileTextureFormat_4(unmarshaled__forceMobileTextureFormat_temp_4);
	int32_t unmarshaled__lookVersion_temp_5 = 0;
	unmarshaled__lookVersion_temp_5 = marshaled.____lookVersion_5;
	unmarshaled.set__lookVersion_5(unmarshaled__lookVersion_temp_5);
	int32_t unmarshaled__fallbackVersion_temp_6 = 0;
	unmarshaled__fallbackVersion_temp_6 = marshaled.____fallbackVersion_6;
	unmarshaled.set__fallbackVersion_6(unmarshaled__fallbackVersion_temp_6);
	bool unmarshaled__enableExpressive_temp_7 = false;
	unmarshaled__enableExpressive_temp_7 = static_cast<bool>(marshaled.____enableExpressive_7);
	unmarshaled.set__enableExpressive_7(unmarshaled__enableExpressive_temp_7);
}
// Conversion method for clean up from marshalling of: OvrAvatarSDKManager/AvatarSpecRequestParams
IL2CPP_EXTERN_C void AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshal_pinvoke_cleanup(AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: OvrAvatarSDKManager/AvatarSpecRequestParams
IL2CPP_EXTERN_C void AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshal_com(const AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5& unmarshaled, AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshaled_com& marshaled)
{
	marshaled.____userId_0 = unmarshaled.get__userId_0();
	marshaled.____callback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get__callback_1()));
	marshaled.____useCombinedMesh_2 = static_cast<int32_t>(unmarshaled.get__useCombinedMesh_2());
	marshaled.____lod_3 = unmarshaled.get__lod_3();
	marshaled.____forceMobileTextureFormat_4 = static_cast<int32_t>(unmarshaled.get__forceMobileTextureFormat_4());
	marshaled.____lookVersion_5 = unmarshaled.get__lookVersion_5();
	marshaled.____fallbackVersion_6 = unmarshaled.get__fallbackVersion_6();
	marshaled.____enableExpressive_7 = static_cast<int32_t>(unmarshaled.get__enableExpressive_7());
}
IL2CPP_EXTERN_C void AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshal_com_back(const AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshaled_com& marshaled, AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t unmarshaled__userId_temp_0 = 0;
	unmarshaled__userId_temp_0 = marshaled.____userId_0;
	unmarshaled.set__userId_0(unmarshaled__userId_temp_0);
	unmarshaled.set__callback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0>(marshaled.____callback_1, specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0_il2cpp_TypeInfo_var));
	bool unmarshaled__useCombinedMesh_temp_2 = false;
	unmarshaled__useCombinedMesh_temp_2 = static_cast<bool>(marshaled.____useCombinedMesh_2);
	unmarshaled.set__useCombinedMesh_2(unmarshaled__useCombinedMesh_temp_2);
	int32_t unmarshaled__lod_temp_3 = 0;
	unmarshaled__lod_temp_3 = marshaled.____lod_3;
	unmarshaled.set__lod_3(unmarshaled__lod_temp_3);
	bool unmarshaled__forceMobileTextureFormat_temp_4 = false;
	unmarshaled__forceMobileTextureFormat_temp_4 = static_cast<bool>(marshaled.____forceMobileTextureFormat_4);
	unmarshaled.set__forceMobileTextureFormat_4(unmarshaled__forceMobileTextureFormat_temp_4);
	int32_t unmarshaled__lookVersion_temp_5 = 0;
	unmarshaled__lookVersion_temp_5 = marshaled.____lookVersion_5;
	unmarshaled.set__lookVersion_5(unmarshaled__lookVersion_temp_5);
	int32_t unmarshaled__fallbackVersion_temp_6 = 0;
	unmarshaled__fallbackVersion_temp_6 = marshaled.____fallbackVersion_6;
	unmarshaled.set__fallbackVersion_6(unmarshaled__fallbackVersion_temp_6);
	bool unmarshaled__enableExpressive_temp_7 = false;
	unmarshaled__enableExpressive_temp_7 = static_cast<bool>(marshaled.____enableExpressive_7);
	unmarshaled.set__enableExpressive_7(unmarshaled__enableExpressive_temp_7);
}
// Conversion method for clean up from marshalling of: OvrAvatarSDKManager/AvatarSpecRequestParams
IL2CPP_EXTERN_C void AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshal_com_cleanup(AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5_marshaled_com& marshaled)
{
}
// System.Void OvrAvatarSDKManager/AvatarSpecRequestParams::.ctor(System.UInt64,specificationCallback,System.Boolean,ovrAvatarAssetLevelOfDetail,System.Boolean,ovrAvatarLookAndFeelVersion,ovrAvatarLookAndFeelVersion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSpecRequestParams__ctor_mC4E88966CA0552017DF34A410391946CFEF4021D (AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5 * __this, uint64_t ___userId0, specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0 * ___callback1, bool ___useCombinedMesh2, int32_t ___lod3, bool ___forceMobileTextureFormat4, int32_t ___lookVersion5, int32_t ___fallbackVersion6, bool ___enableExpressive7, const RuntimeMethod* method)
{
	{
		// _userId = userId;
		uint64_t L_0 = ___userId0;
		__this->set__userId_0(L_0);
		// _callback = callback;
		specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0 * L_1 = ___callback1;
		__this->set__callback_1(L_1);
		// _useCombinedMesh = useCombinedMesh;
		bool L_2 = ___useCombinedMesh2;
		__this->set__useCombinedMesh_2(L_2);
		// _lod = lod;
		int32_t L_3 = ___lod3;
		__this->set__lod_3(L_3);
		// _forceMobileTextureFormat = forceMobileTextureFormat;
		bool L_4 = ___forceMobileTextureFormat4;
		__this->set__forceMobileTextureFormat_4(L_4);
		// _lookVersion = lookVersion;
		int32_t L_5 = ___lookVersion5;
		__this->set__lookVersion_5(L_5);
		// _fallbackVersion = fallbackVersion;
		int32_t L_6 = ___fallbackVersion6;
		__this->set__fallbackVersion_6(L_6);
		// _enableExpressive = enableExpressive;
		bool L_7 = ___enableExpressive7;
		__this->set__enableExpressive_7(L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AvatarSpecRequestParams__ctor_mC4E88966CA0552017DF34A410391946CFEF4021D_AdjustorThunk (RuntimeObject * __this, uint64_t ___userId0, specificationCallback_tA01CD38C5E0E82AC6CAB4EF626D2D47500CAB5B0 * ___callback1, bool ___useCombinedMesh2, int32_t ___lod3, bool ___forceMobileTextureFormat4, int32_t ___lookVersion5, int32_t ___fallbackVersion6, bool ___enableExpressive7, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5 * _thisAdjusted = reinterpret_cast<AvatarSpecRequestParams_tACC2D3CB06AFF62B5140A7B95D0A82C384C9FDB5 *>(__this + _offset);
	AvatarSpecRequestParams__ctor_mC4E88966CA0552017DF34A410391946CFEF4021D(_thisAdjusted, ___userId0, ___callback1, ___useCombinedMesh2, ___lod3, ___forceMobileTextureFormat4, ___lookVersion5, ___fallbackVersion6, ___enableExpressive7, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteTextureSetCoroutineU3Ed__24__ctor_m79238538B0AB6415A5C3E0847361F2043C061051 (U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteTextureSetCoroutineU3Ed__24_System_IDisposable_Dispose_mC19B8CDE02AA7463AF3A312C1BDA6DCF40660D7E (U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeleteTextureSetCoroutineU3Ed__24_MoveNext_m5D84322450A11F76FAE8AC3D25744EFF9B3198A6 (U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m1D8D9E0A3297309037B575EE089F6CF4885CCA07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mE8A18E0CC2F91910A0D69865532151049C7BD0F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC2DB69DC0FC7CE69BECAB9E2C37562DC8C0B02D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0194EB4680D46858D1698080DE4DCCC258C82F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF62D569F5B584522E6FE3FCB1AFD50F51530A43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m12610C8EC87E168D9C1A63C104C34ADD599CD3CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m72798A23D6B4CE080273CA5064E1007FF817C2C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB5222DC7F4812D6052E1E91F09C6241C5B6EFECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF902680F1B8043D67FC40B01196D478C5ED5D14E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m7769F73190D62E056480E9CBAEE2BCE4000236CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m274F462788E4F381B6EBE1FAEF4188F917A073EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDF44B651756195C7279CBC5F83030E1706453A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarComponent_t9786A3A318610B62A38544306547F630079FB6BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * V_1 = NULL;
	Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12  V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE  V_7;
	memset((&V_7), 0, sizeof(V_7));
	KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_005b;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(GPU_TEXTURE_COPY_WAIT_TIME);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (10.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0062;
	}

IL_004b:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_005b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0062:
	{
		// while (OvrAvatarSDKManager.Instance.IsAvatarLoading())
		OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF * L_4;
		L_4 = OvrAvatarSDKManager_get_Instance_mB9B5FF8B8F1E78391247927F232F3F7383E70563(/*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = OvrAvatarSDKManager_IsAvatarLoading_mFEDFCD39684FAC17722B08023D9DA140A1C4322D(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		// foreach (var textureIdAndSingleMeshFlag in textureSetToDelete.TextureIDSingleMeshPair)
		TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D * L_6 = __this->get_address_of_textureSetToDelete_2();
		Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * L_7 = L_6->get_TextureIDSingleMeshPair_0();
		NullCheck(L_7);
		Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE  L_8;
		L_8 = Dictionary_2_GetEnumerator_mE8A18E0CC2F91910A0D69865532151049C7BD0F0(L_7, /*hidden argument*/Dictionary_2_GetEnumerator_mE8A18E0CC2F91910A0D69865532151049C7BD0F0_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_007f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0182;
		}

IL_0084:
		{
			// foreach (var textureIdAndSingleMeshFlag in textureSetToDelete.TextureIDSingleMeshPair)
			KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  L_9;
			L_9 = Enumerator_get_Current_mB5222DC7F4812D6052E1E91F09C6241C5B6EFECD_inline((Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB5222DC7F4812D6052E1E91F09C6241C5B6EFECD_RuntimeMethod_var);
			V_3 = L_9;
			// bool triggerDelete = !textureIdAndSingleMeshFlag.Value;
			bool L_10;
			L_10 = KeyValuePair_2_get_Value_m274F462788E4F381B6EBE1FAEF4188F917A073EE_inline((KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m274F462788E4F381B6EBE1FAEF4188F917A073EE_RuntimeMethod_var);
			V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
			// if (triggerDelete)
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_014e;
			}
		}

IL_009f:
		{
			// foreach (KeyValuePair<int, TextureSet> textureSet in textureSets)
			OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * L_12 = V_1;
			NullCheck(L_12);
			Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * L_13 = L_12->get_textureSets_6();
			NullCheck(L_13);
			Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12  L_14;
			L_14 = Dictionary_2_GetEnumerator_m1D8D9E0A3297309037B575EE089F6CF4885CCA07(L_13, /*hidden argument*/Dictionary_2_GetEnumerator_m1D8D9E0A3297309037B575EE089F6CF4885CCA07_RuntimeMethod_var);
			V_5 = L_14;
		}

IL_00ac:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0132;
			}

IL_00b1:
			{
				// foreach (KeyValuePair<int, TextureSet> textureSet in textureSets)
				KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB  L_15;
				L_15 = Enumerator_get_Current_mF902680F1B8043D67FC40B01196D478C5ED5D14E_inline((Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 *)(&V_5), /*hidden argument*/Enumerator_get_Current_mF902680F1B8043D67FC40B01196D478C5ED5D14E_RuntimeMethod_var);
				V_6 = L_15;
				// if (textureSet.Key == gameobjectID)
				int32_t L_16;
				L_16 = KeyValuePair_2_get_Key_m7769F73190D62E056480E9CBAEE2BCE4000236CA_inline((KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Key_m7769F73190D62E056480E9CBAEE2BCE4000236CA_RuntimeMethod_var);
				int32_t L_17 = __this->get_gameobjectID_4();
				if ((((int32_t)L_16) == ((int32_t)L_17)))
				{
					goto IL_0132;
				}
			}

IL_00c9:
			{
				// foreach (var comparisonTextureIDSingleMeshPair in textureSet.Value.TextureIDSingleMeshPair)
				TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  L_18;
				L_18 = KeyValuePair_2_get_Value_mDF44B651756195C7279CBC5F83030E1706453A7E_inline((KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_mDF44B651756195C7279CBC5F83030E1706453A7E_RuntimeMethod_var);
				Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * L_19 = L_18.get_TextureIDSingleMeshPair_0();
				NullCheck(L_19);
				Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE  L_20;
				L_20 = Dictionary_2_GetEnumerator_mE8A18E0CC2F91910A0D69865532151049C7BD0F0(L_19, /*hidden argument*/Dictionary_2_GetEnumerator_mE8A18E0CC2F91910A0D69865532151049C7BD0F0_RuntimeMethod_var);
				V_7 = L_20;
			}

IL_00dc:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0113;
				}

IL_00de:
				{
					// foreach (var comparisonTextureIDSingleMeshPair in textureSet.Value.TextureIDSingleMeshPair)
					KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  L_21;
					L_21 = Enumerator_get_Current_mB5222DC7F4812D6052E1E91F09C6241C5B6EFECD_inline((Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE *)(&V_7), /*hidden argument*/Enumerator_get_Current_mB5222DC7F4812D6052E1E91F09C6241C5B6EFECD_RuntimeMethod_var);
					V_8 = L_21;
					// if (comparisonTextureIDSingleMeshPair.Key == textureIdAndSingleMeshFlag.Key &&
					//     (!textureSet.Value.IsProcessed || comparisonTextureIDSingleMeshPair.Value))
					uint64_t L_22;
					L_22 = KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_inline((KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_RuntimeMethod_var);
					uint64_t L_23;
					L_23 = KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_inline((KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_RuntimeMethod_var);
					if ((!(((uint64_t)L_22) == ((uint64_t)L_23))))
					{
						goto IL_0113;
					}
				}

IL_00f7:
				{
					TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  L_24;
					L_24 = KeyValuePair_2_get_Value_mDF44B651756195C7279CBC5F83030E1706453A7E_inline((KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_mDF44B651756195C7279CBC5F83030E1706453A7E_RuntimeMethod_var);
					bool L_25 = L_24.get_IsProcessed_1();
					if (!L_25)
					{
						goto IL_010e;
					}
				}

IL_0105:
				{
					bool L_26;
					L_26 = KeyValuePair_2_get_Value_m274F462788E4F381B6EBE1FAEF4188F917A073EE_inline((KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Value_m274F462788E4F381B6EBE1FAEF4188F917A073EE_RuntimeMethod_var);
					if (!L_26)
					{
						goto IL_0113;
					}
				}

IL_010e:
				{
					// triggerDelete = false;
					V_4 = (bool)0;
					// break;
					IL2CPP_LEAVE(0x12C, FINALLY_011e);
				}

IL_0113:
				{
					// foreach (var comparisonTextureIDSingleMeshPair in textureSet.Value.TextureIDSingleMeshPair)
					bool L_27;
					L_27 = Enumerator_MoveNext_m72798A23D6B4CE080273CA5064E1007FF817C2C9((Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m72798A23D6B4CE080273CA5064E1007FF817C2C9_RuntimeMethod_var);
					if (L_27)
					{
						goto IL_00de;
					}
				}

IL_011c:
				{
					IL2CPP_LEAVE(0x12C, FINALLY_011e);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_011e;
			}

FINALLY_011e:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_mF62D569F5B584522E6FE3FCB1AFD50F51530A43B((Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE *)(&V_7), /*hidden argument*/Enumerator_Dispose_mF62D569F5B584522E6FE3FCB1AFD50F51530A43B_RuntimeMethod_var);
				IL2CPP_END_FINALLY(286)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(286)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x12C, IL_012c)
			}

IL_012c:
			{
				// if (!triggerDelete)
				bool L_28 = V_4;
				if (L_28)
				{
					goto IL_0132;
				}
			}

IL_0130:
			{
				// break;
				IL2CPP_LEAVE(0x14E, FINALLY_0140);
			}

IL_0132:
			{
				// foreach (KeyValuePair<int, TextureSet> textureSet in textureSets)
				bool L_29;
				L_29 = Enumerator_MoveNext_m12610C8EC87E168D9C1A63C104C34ADD599CD3CC((Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m12610C8EC87E168D9C1A63C104C34ADD599CD3CC_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00b1;
				}
			}

IL_013e:
			{
				IL2CPP_LEAVE(0x14E, FINALLY_0140);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0140;
		}

FINALLY_0140:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m0194EB4680D46858D1698080DE4DCCC258C82F15((Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m0194EB4680D46858D1698080DE4DCCC258C82F15_RuntimeMethod_var);
			IL2CPP_END_FINALLY(320)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(320)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x14E, IL_014e)
		}

IL_014e:
		{
			// if (triggerDelete)
			bool L_30 = V_4;
			if (!L_30)
			{
				goto IL_0182;
			}
		}

IL_0152:
		{
			// Texture2D textureToDelete = OvrAvatarComponent.GetLoadedTexture(textureIdAndSingleMeshFlag.Key);
			uint64_t L_31;
			L_31 = KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_inline((KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(OvrAvatarComponent_t9786A3A318610B62A38544306547F630079FB6BF_il2cpp_TypeInfo_var);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_32;
			L_32 = OvrAvatarComponent_GetLoadedTexture_mBF2D9B2CFF2F9C22B661DC446C30EE924080DA7B(L_31, /*hidden argument*/NULL);
			V_9 = L_32;
			// if (textureToDelete != null)
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_33 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_34;
			L_34 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_0182;
			}
		}

IL_016a:
		{
			// OvrAvatarSDKManager.Instance.DeleteAssetFromCache(textureIdAndSingleMeshFlag.Key);
			OvrAvatarSDKManager_tE3ED909FBF87D116C3BD3724AB71AF3A920102EF * L_35;
			L_35 = OvrAvatarSDKManager_get_Instance_mB9B5FF8B8F1E78391247927F232F3F7383E70563(/*hidden argument*/NULL);
			uint64_t L_36;
			L_36 = KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_inline((KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_RuntimeMethod_var);
			NullCheck(L_35);
			OvrAvatarSDKManager_DeleteAssetFromCache_mB2BEEC55CFB786AF0B6EE172F2C75B7AAB2A97B3(L_35, L_36, /*hidden argument*/NULL);
			// Destroy(textureToDelete);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_37, /*hidden argument*/NULL);
		}

IL_0182:
		{
			// foreach (var textureIdAndSingleMeshFlag in textureSetToDelete.TextureIDSingleMeshPair)
			bool L_38;
			L_38 = Enumerator_MoveNext_m72798A23D6B4CE080273CA5064E1007FF817C2C9((Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m72798A23D6B4CE080273CA5064E1007FF817C2C9_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0084;
			}
		}

IL_018e:
		{
			IL2CPP_LEAVE(0x19E, FINALLY_0190);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0190;
	}

FINALLY_0190:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF62D569F5B584522E6FE3FCB1AFD50F51530A43B((Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE *)(&V_2), /*hidden argument*/Enumerator_Dispose_mF62D569F5B584522E6FE3FCB1AFD50F51530A43B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(400)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(400)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19E, IL_019e)
	}

IL_019e:
	{
		// textureSetToDelete.IsProcessed = true;
		TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D * L_39 = __this->get_address_of_textureSetToDelete_2();
		L_39->set_IsProcessed_1((bool)1);
		// textureSets.Remove(gameobjectID);
		OvrAvatarTextureCopyManager_t3428F056EE68CFEC8467EBC36F697CD7EA86B93A * L_40 = V_1;
		NullCheck(L_40);
		Dictionary_2_tC0CCEC859445723AD80A318D5AA9281C64CE5712 * L_41 = L_40->get_textureSets_6();
		int32_t L_42 = __this->get_gameobjectID_4();
		NullCheck(L_41);
		bool L_43;
		L_43 = Dictionary_2_Remove_mC2DB69DC0FC7CE69BECAB9E2C37562DC8C0B02D2(L_41, L_42, /*hidden argument*/Dictionary_2_Remove_mC2DB69DC0FC7CE69BECAB9E2C37562DC8C0B02D2_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeleteTextureSetCoroutineU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD3BB8FBE6FBCB81BC013B5E77224876F974568FF (U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteTextureSetCoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m6A4C0016B310142BB80ECBD048150ADCA25E6EDD (U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeleteTextureSetCoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m6A4C0016B310142BB80ECBD048150ADCA25E6EDD_RuntimeMethod_var)));
	}
}
// System.Object OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeleteTextureSetCoroutineU3Ed__24_System_Collections_IEnumerator_get_Current_m1941004ECF1ADA168283893C759EA71E996784C1 (U3CDeleteTextureSetCoroutineU3Ed__24_t8A35F1A8BAD52B74E701C0C72BC5CD0C51D1E833 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: OvrAvatarTextureCopyManager/CopyTextureParams
IL2CPP_EXTERN_C void CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshal_pinvoke(const CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504& unmarshaled, CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Src_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Src' of type 'CopyTextureParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Src_0Exception, NULL);
}
IL2CPP_EXTERN_C void CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshal_pinvoke_back(const CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshaled_pinvoke& marshaled, CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504& unmarshaled)
{
	Exception_t* ___Src_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Src' of type 'CopyTextureParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Src_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: OvrAvatarTextureCopyManager/CopyTextureParams
IL2CPP_EXTERN_C void CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshal_pinvoke_cleanup(CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: OvrAvatarTextureCopyManager/CopyTextureParams
IL2CPP_EXTERN_C void CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshal_com(const CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504& unmarshaled, CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshaled_com& marshaled)
{
	Exception_t* ___Src_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Src' of type 'CopyTextureParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Src_0Exception, NULL);
}
IL2CPP_EXTERN_C void CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshal_com_back(const CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshaled_com& marshaled, CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504& unmarshaled)
{
	Exception_t* ___Src_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Src' of type 'CopyTextureParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Src_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: OvrAvatarTextureCopyManager/CopyTextureParams
IL2CPP_EXTERN_C void CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshal_com_cleanup(CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504_marshaled_com& marshaled)
{
}
// System.Void OvrAvatarTextureCopyManager/CopyTextureParams::.ctor(UnityEngine.Texture,UnityEngine.Texture,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyTextureParams__ctor_m1B3ADEEC9C61F14F8CA8EBCFF0FED7020C338DC2 (CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___src0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___dst1, int32_t ___mip2, int32_t ___srcSize3, int32_t ___dstElement4, const RuntimeMethod* method)
{
	{
		// Src = src;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___src0;
		__this->set_Src_0(L_0);
		// Dst = dst;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_1 = ___dst1;
		__this->set_Dst_1(L_1);
		// Mip = mip;
		int32_t L_2 = ___mip2;
		__this->set_Mip_2(L_2);
		// SrcSize = srcSize;
		int32_t L_3 = ___srcSize3;
		__this->set_SrcSize_3(L_3);
		// DstElement = dstElement;
		int32_t L_4 = ___dstElement4;
		__this->set_DstElement_4(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CopyTextureParams__ctor_m1B3ADEEC9C61F14F8CA8EBCFF0FED7020C338DC2_AdjustorThunk (RuntimeObject * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___src0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___dst1, int32_t ___mip2, int32_t ___srcSize3, int32_t ___dstElement4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504 * _thisAdjusted = reinterpret_cast<CopyTextureParams_tB845C4C7EDF46F8B124F3886D4DA99B1E0993504 *>(__this + _offset);
	CopyTextureParams__ctor_m1B3ADEEC9C61F14F8CA8EBCFF0FED7020C338DC2(_thisAdjusted, ___src0, ___dst1, ___mip2, ___srcSize3, ___dstElement4, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: OvrAvatarTextureCopyManager/FallbackTextureSet
IL2CPP_EXTERN_C void FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshal_pinvoke(const FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE& unmarshaled, FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___DiffuseRoughness_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DiffuseRoughness' of type 'FallbackTextureSet': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DiffuseRoughness_1Exception, NULL);
}
IL2CPP_EXTERN_C void FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshal_pinvoke_back(const FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshaled_pinvoke& marshaled, FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE& unmarshaled)
{
	Exception_t* ___DiffuseRoughness_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DiffuseRoughness' of type 'FallbackTextureSet': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DiffuseRoughness_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: OvrAvatarTextureCopyManager/FallbackTextureSet
IL2CPP_EXTERN_C void FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshal_pinvoke_cleanup(FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: OvrAvatarTextureCopyManager/FallbackTextureSet
IL2CPP_EXTERN_C void FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshal_com(const FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE& unmarshaled, FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshaled_com& marshaled)
{
	Exception_t* ___DiffuseRoughness_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DiffuseRoughness' of type 'FallbackTextureSet': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DiffuseRoughness_1Exception, NULL);
}
IL2CPP_EXTERN_C void FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshal_com_back(const FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshaled_com& marshaled, FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE& unmarshaled)
{
	Exception_t* ___DiffuseRoughness_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DiffuseRoughness' of type 'FallbackTextureSet': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DiffuseRoughness_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: OvrAvatarTextureCopyManager/FallbackTextureSet
IL2CPP_EXTERN_C void FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshal_com_cleanup(FallbackTextureSet_tC98A8627A57620F03351D4544B43EAB3F6CA10BE_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: OvrAvatarTextureCopyManager/TextureSet
IL2CPP_EXTERN_C void TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshal_pinvoke(const TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D& unmarshaled, TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___TextureIDSingleMeshPair_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TextureIDSingleMeshPair' of type 'TextureSet'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TextureIDSingleMeshPair_0Exception, NULL);
}
IL2CPP_EXTERN_C void TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshal_pinvoke_back(const TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshaled_pinvoke& marshaled, TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D& unmarshaled)
{
	Exception_t* ___TextureIDSingleMeshPair_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TextureIDSingleMeshPair' of type 'TextureSet'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TextureIDSingleMeshPair_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: OvrAvatarTextureCopyManager/TextureSet
IL2CPP_EXTERN_C void TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshal_pinvoke_cleanup(TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: OvrAvatarTextureCopyManager/TextureSet
IL2CPP_EXTERN_C void TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshal_com(const TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D& unmarshaled, TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshaled_com& marshaled)
{
	Exception_t* ___TextureIDSingleMeshPair_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TextureIDSingleMeshPair' of type 'TextureSet'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TextureIDSingleMeshPair_0Exception, NULL);
}
IL2CPP_EXTERN_C void TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshal_com_back(const TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshaled_com& marshaled, TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D& unmarshaled)
{
	Exception_t* ___TextureIDSingleMeshPair_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TextureIDSingleMeshPair' of type 'TextureSet'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TextureIDSingleMeshPair_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: OvrAvatarTextureCopyManager/TextureSet
IL2CPP_EXTERN_C void TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshal_com_cleanup(TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D_marshaled_com& marshaled)
{
}
// System.Void OvrAvatarTextureCopyManager/TextureSet::.ctor(System.Collections.Generic.Dictionary`2<System.UInt64,System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSet__ctor_mD82F34E402F4351FF6634FAF2614B45506EC8B8C (TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D * __this, Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * ___textureIDSingleMeshPair0, bool ___isProcessed1, const RuntimeMethod* method)
{
	{
		// TextureIDSingleMeshPair = textureIDSingleMeshPair;
		Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * L_0 = ___textureIDSingleMeshPair0;
		__this->set_TextureIDSingleMeshPair_0(L_0);
		// IsProcessed = isProcessed;
		bool L_1 = ___isProcessed1;
		__this->set_IsProcessed_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TextureSet__ctor_mD82F34E402F4351FF6634FAF2614B45506EC8B8C_AdjustorThunk (RuntimeObject * __this, Dictionary_2_tC3E9315C8AB93130E82AB39DD62CEFA307E26724 * ___textureIDSingleMeshPair0, bool ___isProcessed1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D * _thisAdjusted = reinterpret_cast<TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D *>(__this + _offset);
	TextureSet__ctor_mD82F34E402F4351FF6634FAF2614B45506EC8B8C(_thisAdjusted, ___textureIDSingleMeshPair0, ___isProcessed1, method);
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
// System.Void OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpToHMDU3Ed__13__ctor_m2718D92561980DA3B2F04C2D102AB928155D0AAA (U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpToHMDU3Ed__13_System_IDisposable_Dispose_m6F79FD9B76A0633FBC96538B385DB07AF57C90DC (U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLerpToHMDU3Ed__13_MoveNext_m9C0F7AA018E489420080E85A9C327248E2301DC4 (U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 newPanelPosition = CalculateIdealAnchorPosition();
		PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * L_4 = V_1;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = PanelHMDFollower_CalculateIdealAnchorPosition_m74F280D8BC9291C194EB4FC9817A4150ABC944E2(L_4, /*hidden argument*/NULL);
		__this->set_U3CnewPanelPositionU3E5__2_3(L_5);
		// _lastMovedToPos = _cameraRig.centerEyeAnchor.position;
		PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * L_6 = V_1;
		PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * L_7 = V_1;
		NullCheck(L_7);
		OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * L_8 = L_7->get__cameraRig_9();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = OVRCameraRig_get_centerEyeAnchor_mC0875856CE4EBA9D0867E69A1A05DE40A443E1FF_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set__lastMovedToPos_13(L_10);
		// float startTime = Time.time;
		float L_11;
		L_11 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__3_4(L_11);
		// float endTime = Time.time + TOTAL_DURATION;
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CendTimeU3E5__4_5(((float)il2cpp_codegen_add((float)L_12, (float)(3.0f))));
		goto IL_00ab;
	}

IL_0061:
	{
		// transform.position =
		//   Vector3.Lerp(transform.position, newPanelPosition, (Time.time - startTime) / TOTAL_DURATION);
		PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * L_13 = V_1;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * L_15 = V_1;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_U3CnewPanelPositionU3E5__2_3();
		float L_19;
		L_19 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_20 = __this->get_U3CstartTimeU3E5__3_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_17, L_18, ((float)((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_20))/(float)(3.0f))), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_21, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00ab:
	{
		// while (Time.time < endTime)
		float L_22;
		L_22 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_23 = __this->get_U3CendTimeU3E5__4_5();
		if ((((float)L_22) < ((float)L_23)))
		{
			goto IL_0061;
		}
	}
	{
		// transform.position = newPanelPosition;
		PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * L_24 = V_1;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get_U3CnewPanelPositionU3E5__2_3();
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_26, /*hidden argument*/NULL);
		// _coroutine = null;
		PanelHMDFollower_tA3193DDEA22FCAE5D406BE613B12A4DF5AAE4162 * L_27 = V_1;
		NullCheck(L_27);
		L_27->set__coroutine_11((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLerpToHMDU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD58D03CC073A72DDD7B0EC4188CB4614E92A68AF (U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpToHMDU3Ed__13_System_Collections_IEnumerator_Reset_mA09722794732F819AA5D31CB2AF5BCB0C2FD817A (U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLerpToHMDU3Ed__13_System_Collections_IEnumerator_Reset_mA09722794732F819AA5D31CB2AF5BCB0C2FD817A_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.PanelHMDFollower/<LerpToHMD>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLerpToHMDU3Ed__13_System_Collections_IEnumerator_get_Current_mF39A3910A6D633D8600FF5B154BC7B6764772E9C (U3CLerpToHMDU3Ed__13_tF06BEDB6A7FE433C81FC694D02700655FE625CB4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PassthroughStyler/<FadeToCurrentStyle>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToCurrentStyleU3Ed__19__ctor_mAE485AE3924BF8387544A21DBBDC07DCC91AA9BD (U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PassthroughStyler/<FadeToCurrentStyle>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToCurrentStyleU3Ed__19_System_IDisposable_Dispose_mB7C7E02379F912796844ECB81A7ABAB5101237E4 (U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PassthroughStyler/<FadeToCurrentStyle>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeToCurrentStyleU3Ed__19_MoveNext_m695EBBCC6271D725364D7EDA234F63636A989360 (U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_014a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float timer = 0.0f;
		__this->set_U3CtimerU3E5__2_4((0.0f));
		// float brightness = passthroughLayer.colorMapEditorBrightness;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_4 = V_1;
		NullCheck(L_4);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_5 = L_4->get_passthroughLayer_5();
		NullCheck(L_5);
		float L_6 = L_5->get_colorMapEditorBrightness_16();
		__this->set_U3CbrightnessU3E5__3_5(L_6);
		// float contrast = passthroughLayer.colorMapEditorContrast;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_7 = V_1;
		NullCheck(L_7);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_8 = L_7->get_passthroughLayer_5();
		NullCheck(L_8);
		float L_9 = L_8->get_colorMapEditorContrast_14();
		__this->set_U3CcontrastU3E5__4_6(L_9);
		// float posterize = passthroughLayer.colorMapEditorPosterize;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_10 = V_1;
		NullCheck(L_10);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_11 = L_10->get_passthroughLayer_5();
		NullCheck(L_11);
		float L_12 = L_11->get_colorMapEditorPosterize_18();
		__this->set_U3CposterizeU3E5__5_7(L_12);
		// Color edgeCol = new Color(savedColor.r, savedColor.g, savedColor.b, 0.0f);
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_13 = V_1;
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_14 = L_13->get_address_of_savedColor_13();
		float L_15 = L_14->get_r_0();
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_16 = V_1;
		NullCheck(L_16);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_17 = L_16->get_address_of_savedColor_13();
		float L_18 = L_17->get_g_1();
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_19 = V_1;
		NullCheck(L_19);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_20 = L_19->get_address_of_savedColor_13();
		float L_21 = L_20->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_22), L_15, L_18, L_21, (0.0f), /*hidden argument*/NULL);
		__this->set_U3CedgeColU3E5__6_8(L_22);
		// passthroughLayer.edgeRenderingEnabled = true;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_23 = V_1;
		NullCheck(L_23);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_24 = L_23->get_passthroughLayer_5();
		NullCheck(L_24);
		OVRPassthroughLayer_set_edgeRenderingEnabled_mAD01AD97216755C868F1E46F1414CE68D82DE896(L_24, (bool)1, /*hidden argument*/NULL);
		goto IL_0151;
	}

IL_00a1:
	{
		// timer += Time.deltaTime;
		float L_25 = __this->get_U3CtimerU3E5__2_4();
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimerU3E5__2_4(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
		// float normTimer = Mathf.Clamp01(timer / fadeTime);
		float L_27 = __this->get_U3CtimerU3E5__2_4();
		float L_28 = __this->get_fadeTime_3();
		float L_29;
		L_29 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_27/(float)L_28)), /*hidden argument*/NULL);
		V_2 = L_29;
		// passthroughLayer.colorMapEditorBrightness = Mathf.Lerp(brightness, savedBrightness, normTimer);
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_30 = V_1;
		NullCheck(L_30);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_31 = L_30->get_passthroughLayer_5();
		float L_32 = __this->get_U3CbrightnessU3E5__3_5();
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_33 = V_1;
		NullCheck(L_33);
		float L_34 = L_33->get_savedBrightness_14();
		float L_35 = V_2;
		float L_36;
		L_36 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_32, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_31);
		L_31->set_colorMapEditorBrightness_16(L_36);
		// passthroughLayer.colorMapEditorContrast = Mathf.Lerp(contrast, savedContrast, normTimer);
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_37 = V_1;
		NullCheck(L_37);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_38 = L_37->get_passthroughLayer_5();
		float L_39 = __this->get_U3CcontrastU3E5__4_6();
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_40 = V_1;
		NullCheck(L_40);
		float L_41 = L_40->get_savedContrast_15();
		float L_42 = V_2;
		float L_43;
		L_43 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_39, L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_38);
		L_38->set_colorMapEditorContrast_14(L_43);
		// passthroughLayer.colorMapEditorPosterize = Mathf.Lerp(posterize, savedPosterize, normTimer);
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_44 = V_1;
		NullCheck(L_44);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_45 = L_44->get_passthroughLayer_5();
		float L_46 = __this->get_U3CposterizeU3E5__5_7();
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_47 = V_1;
		NullCheck(L_47);
		float L_48 = L_47->get_savedPosterize_16();
		float L_49 = V_2;
		float L_50;
		L_50 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_46, L_48, L_49, /*hidden argument*/NULL);
		NullCheck(L_45);
		L_45->set_colorMapEditorPosterize_18(L_50);
		// passthroughLayer.edgeColor = Color.Lerp(edgeCol, savedColor, normTimer);
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_51 = V_1;
		NullCheck(L_51);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_52 = L_51->get_passthroughLayer_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53 = __this->get_U3CedgeColU3E5__6_8();
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_54 = V_1;
		NullCheck(L_54);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55 = L_54->get_savedColor_13();
		float L_56 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_57;
		L_57 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_53, L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_52);
		OVRPassthroughLayer_set_edgeColor_mB8D0F9ACAF8F3EB0F204798AE706CD8ADDBB8790(L_52, L_57, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_014a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0151:
	{
		// while (timer <= fadeTime)
		float L_58 = __this->get_U3CtimerU3E5__2_4();
		float L_59 = __this->get_fadeTime_3();
		if ((((float)L_58) <= ((float)L_59)))
		{
			goto IL_00a1;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PassthroughStyler/<FadeToCurrentStyle>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeToCurrentStyleU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m62E9360956FC142D7DBC1E9381A9FBDD782771BA (U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PassthroughStyler/<FadeToCurrentStyle>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToCurrentStyleU3Ed__19_System_Collections_IEnumerator_Reset_mB5C2710DD59CC9A98A6208DB18E20E1779BE046F (U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeToCurrentStyleU3Ed__19_System_Collections_IEnumerator_Reset_mB5C2710DD59CC9A98A6208DB18E20E1779BE046F_RuntimeMethod_var)));
	}
}
// System.Object PassthroughStyler/<FadeToCurrentStyle>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeToCurrentStyleU3Ed__19_System_Collections_IEnumerator_get_Current_mAA54D3F70B51CFA5841047A0C02E509EBCA0E1B2 (U3CFadeToCurrentStyleU3Ed__19_tE0FDE7F7A843A363EEACDAF32AA16509DF9E1D9C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PassthroughStyler/<FadeToDefaultPassthrough>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToDefaultPassthroughU3Ed__20__ctor_mD5734AE35E978B6016AC4BAAF5BD2885854E7289 (U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PassthroughStyler/<FadeToDefaultPassthrough>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToDefaultPassthroughU3Ed__20_System_IDisposable_Dispose_m098A05EF49FFD658B51912059ADA457D2E5BCF4E (U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PassthroughStyler/<FadeToDefaultPassthrough>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeToDefaultPassthroughU3Ed__20_MoveNext_m2E27578A23C55A27E901446E92898D8B8C50843E (U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_015a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float timer = 0.0f;
		__this->set_U3CtimerU3E5__2_4((0.0f));
		// float brightness = passthroughLayer.colorMapEditorBrightness;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_4 = V_1;
		NullCheck(L_4);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_5 = L_4->get_passthroughLayer_5();
		NullCheck(L_5);
		float L_6 = L_5->get_colorMapEditorBrightness_16();
		__this->set_U3CbrightnessU3E5__3_5(L_6);
		// float contrast = passthroughLayer.colorMapEditorContrast;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_7 = V_1;
		NullCheck(L_7);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_8 = L_7->get_passthroughLayer_5();
		NullCheck(L_8);
		float L_9 = L_8->get_colorMapEditorContrast_14();
		__this->set_U3CcontrastU3E5__4_6(L_9);
		// float posterize = passthroughLayer.colorMapEditorPosterize;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_10 = V_1;
		NullCheck(L_10);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_11 = L_10->get_passthroughLayer_5();
		NullCheck(L_11);
		float L_12 = L_11->get_colorMapEditorPosterize_18();
		__this->set_U3CposterizeU3E5__5_7(L_12);
		// Color edgeCol = passthroughLayer.edgeColor;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_13 = V_1;
		NullCheck(L_13);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_14 = L_13->get_passthroughLayer_5();
		NullCheck(L_14);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = OVRPassthroughLayer_get_edgeColor_mC1323150AAA1042A87A1E138E35863CAD05C9E49_inline(L_14, /*hidden argument*/NULL);
		__this->set_U3CedgeColU3E5__6_8(L_15);
		goto IL_0161;
	}

IL_0075:
	{
		// timer += Time.deltaTime;
		float L_16 = __this->get_U3CtimerU3E5__2_4();
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimerU3E5__2_4(((float)il2cpp_codegen_add((float)L_16, (float)L_17)));
		// float normTimer = Mathf.Clamp01(timer / fadeTime);
		float L_18 = __this->get_U3CtimerU3E5__2_4();
		float L_19 = __this->get_fadeTime_3();
		float L_20;
		L_20 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_18/(float)L_19)), /*hidden argument*/NULL);
		V_2 = L_20;
		// passthroughLayer.colorMapEditorBrightness = Mathf.Lerp(brightness, 0.0f, normTimer);
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_21 = V_1;
		NullCheck(L_21);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_22 = L_21->get_passthroughLayer_5();
		float L_23 = __this->get_U3CbrightnessU3E5__3_5();
		float L_24 = V_2;
		float L_25;
		L_25 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_23, (0.0f), L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_colorMapEditorBrightness_16(L_25);
		// passthroughLayer.colorMapEditorContrast = Mathf.Lerp(contrast, 0.0f, normTimer);
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_26 = V_1;
		NullCheck(L_26);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_27 = L_26->get_passthroughLayer_5();
		float L_28 = __this->get_U3CcontrastU3E5__4_6();
		float L_29 = V_2;
		float L_30;
		L_30 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_28, (0.0f), L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->set_colorMapEditorContrast_14(L_30);
		// passthroughLayer.colorMapEditorPosterize = Mathf.Lerp(posterize, 0.0f, normTimer);
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_31 = V_1;
		NullCheck(L_31);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_32 = L_31->get_passthroughLayer_5();
		float L_33 = __this->get_U3CposterizeU3E5__5_7();
		float L_34 = V_2;
		float L_35;
		L_35 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_33, (0.0f), L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set_colorMapEditorPosterize_18(L_35);
		// passthroughLayer.edgeColor = Color.Lerp(edgeCol, new Color(edgeCol.r, edgeCol.g, edgeCol.b, 0.0f), normTimer);
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_36 = V_1;
		NullCheck(L_36);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_37 = L_36->get_passthroughLayer_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38 = __this->get_U3CedgeColU3E5__6_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_39 = __this->get_address_of_U3CedgeColU3E5__6_8();
		float L_40 = L_39->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_41 = __this->get_address_of_U3CedgeColU3E5__6_8();
		float L_42 = L_41->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_43 = __this->get_address_of_U3CedgeColU3E5__6_8();
		float L_44 = L_43->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_45), L_40, L_42, L_44, (0.0f), /*hidden argument*/NULL);
		float L_46 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47;
		L_47 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_38, L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_37);
		OVRPassthroughLayer_set_edgeColor_mB8D0F9ACAF8F3EB0F204798AE706CD8ADDBB8790(L_37, L_47, /*hidden argument*/NULL);
		// if (timer > fadeTime)
		float L_48 = __this->get_U3CtimerU3E5__2_4();
		float L_49 = __this->get_fadeTime_3();
		if ((!(((float)L_48) > ((float)L_49))))
		{
			goto IL_014a;
		}
	}
	{
		// passthroughLayer.edgeRenderingEnabled = false;
		PassthroughStyler_t6BC0ED3A919A3FB191574F198A108689F4E40D32 * L_50 = V_1;
		NullCheck(L_50);
		OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * L_51 = L_50->get_passthroughLayer_5();
		NullCheck(L_51);
		OVRPassthroughLayer_set_edgeRenderingEnabled_mAD01AD97216755C868F1E46F1414CE68D82DE896(L_51, (bool)0, /*hidden argument*/NULL);
	}

IL_014a:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_015a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0161:
	{
		// while (timer <= fadeTime)
		float L_52 = __this->get_U3CtimerU3E5__2_4();
		float L_53 = __this->get_fadeTime_3();
		if ((((float)L_52) <= ((float)L_53)))
		{
			goto IL_0075;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PassthroughStyler/<FadeToDefaultPassthrough>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeToDefaultPassthroughU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m53DC68C1CCCDF30EC9CB9DB49C519C931805FABC (U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PassthroughStyler/<FadeToDefaultPassthrough>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToDefaultPassthroughU3Ed__20_System_Collections_IEnumerator_Reset_m67B84B18ED37EF94A7E28DC9D942BF28EE813ED8 (U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeToDefaultPassthroughU3Ed__20_System_Collections_IEnumerator_Reset_m67B84B18ED37EF94A7E28DC9D942BF28EE813ED8_RuntimeMethod_var)));
	}
}
// System.Object PassthroughStyler/<FadeToDefaultPassthrough>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeToDefaultPassthroughU3Ed__20_System_Collections_IEnumerator_get_Current_m271ADFE5A502CB0CE024D87718FCE1B1BD5220BC (U3CFadeToDefaultPassthroughU3Ed__20_t5A2B942C5749915E9B9DD7D3865FCBEF0EFB9732 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RemoteLoopbackManager/PacketLatencyPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketLatencyPair__ctor_m8689B42992068A72EC9825E4D0D5BEA59C6CA17B (PacketLatencyPair_tB00B8B1B83E2801DA568D38A169B959F1FBCE25D * __this, const RuntimeMethod* method)
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
// System.Single RemoteLoopbackManager/SimulatedLatencySettings::NextValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimulatedLatencySettings_NextValue_mE0F727E70EE772D2380E3B700425942729C05EC4 (SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// AverageWindow = LatencySum / (float)LatencyValues.Count;
		float L_0 = __this->get_LatencySum_5();
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_1 = __this->get_LatencyValues_6();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_inline(L_1, /*hidden argument*/LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_RuntimeMethod_var);
		__this->set_AverageWindow_4(((float)((float)L_0/(float)((float)((float)L_2)))));
		// float RandomLatency = UnityEngine.Random.Range(FakeLatencyMin, FakeLatencyMax);
		float L_3 = __this->get_FakeLatencyMin_1();
		float L_4 = __this->get_FakeLatencyMax_0();
		float L_5;
		L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// float FakeLatency = AverageWindow * (1f - LatencyWeight) + LatencyWeight * RandomLatency;
		float L_6 = __this->get_AverageWindow_4();
		float L_7 = __this->get_LatencyWeight_2();
		float L_8 = __this->get_LatencyWeight_2();
		float L_9 = V_0;
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_6, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9))));
		// if (LatencyValues.Count >= MaxSamples)
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_10 = __this->get_LatencyValues_6();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_inline(L_10, /*hidden argument*/LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_RuntimeMethod_var);
		int32_t L_12 = __this->get_MaxSamples_3();
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0083;
		}
	}
	{
		// LatencySum -= LatencyValues.First.Value;
		float L_13 = __this->get_LatencySum_5();
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_14 = __this->get_LatencyValues_6();
		NullCheck(L_14);
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_15;
		L_15 = LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_inline(L_14, /*hidden argument*/LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16;
		L_16 = LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_inline(L_15, /*hidden argument*/LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_RuntimeMethod_var);
		__this->set_LatencySum_5(((float)il2cpp_codegen_subtract((float)L_13, (float)L_16)));
		// LatencyValues.RemoveFirst();
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_17 = __this->get_LatencyValues_6();
		NullCheck(L_17);
		LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756(L_17, /*hidden argument*/LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756_RuntimeMethod_var);
	}

IL_0083:
	{
		// LatencySum += FakeLatency;
		float L_18 = __this->get_LatencySum_5();
		float L_19 = V_1;
		__this->set_LatencySum_5(((float)il2cpp_codegen_add((float)L_18, (float)L_19)));
		// LatencyValues.AddLast(FakeLatency);
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_20 = __this->get_LatencyValues_6();
		float L_21 = V_1;
		NullCheck(L_20);
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_22;
		L_22 = LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3(L_20, L_21, /*hidden argument*/LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_RuntimeMethod_var);
		// return FakeLatency;
		float L_23 = V_1;
		return L_23;
	}
}
// System.Void RemoteLoopbackManager/SimulatedLatencySettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedLatencySettings__ctor_mDC4701382DCAB4B34E2AE9BD7ED27DCEC0306B6C (SimulatedLatencySettings_t3C66FBDC0E1133AA2BAAF5E3BBEBB4B8B6A1894B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float FakeLatencyMax = 0.25f; //250 ms max latency
		__this->set_FakeLatencyMax_0((0.25f));
		// public float FakeLatencyMin = 0.002f; //2ms min latency
		__this->set_FakeLatencyMin_1((0.00200000009f));
		// public float LatencyWeight = 0.25f;  // How much the latest sample impacts the current latency
		__this->set_LatencyWeight_2((0.25f));
		// public int MaxSamples = 4; //How many samples in our window
		__this->set_MaxSamples_3(4);
		// internal LinkedList<float> LatencyValues = new LinkedList<float>();
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_0 = (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *)il2cpp_codegen_object_new(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F(L_0, /*hidden argument*/LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F_RuntimeMethod_var);
		__this->set_LatencyValues_6(L_0);
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
// System.Void StartMenu/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mB4BEA21B02CB620F151FB8C1D57C0384883E9130 (U3CU3Ec__DisplayClass3_0_t27B782281E85B4B9B9C194DA1B73C3535D5CC46D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartMenu/<>c__DisplayClass3_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CStartU3Eb__0_mFE41F96EFC3E7314714C2E5F6392280A788A23D2 (U3CU3Ec__DisplayClass3_0_t27B782281E85B4B9B9C194DA1B73C3535D5CC46D * __this, const RuntimeMethod* method)
{
	{
		// DebugUIBuilder.instance.AddButton(Path.GetFileNameWithoutExtension(path), () => LoadScene(sceneIndex));
		StartMenu_t549376AD4E2045D8D42C75AF8C5ED808D56807F3 * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_sceneIndex_0();
		NullCheck(L_0);
		StartMenu_LoadScene_mF7663ABFF602CD53F3A26C076E6A8FA200347F97(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void TeleportInputHandler/<TeleportAimCoroutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportAimCoroutineU3Ed__6__ctor_mE2F9BDC7C3225737B5ADD2AD7AAF0E449CFADE47 (U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TeleportInputHandler/<TeleportAimCoroutine>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportAimCoroutineU3Ed__6_System_IDisposable_Dispose_m443089F5C3CB24CF2E58C43B6D940BB6A97E7059 (U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TeleportInputHandler/<TeleportAimCoroutine>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTeleportAimCoroutineU3Ed__6_MoveNext_m3D532A7ED8718469618989D091672C1E1E833FA0 (U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LocomotionTeleport.TeleportIntentions intention = GetIntention();
		TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* LocomotionTeleport/TeleportIntentions TeleportInputHandler::GetIntention() */, L_4);
		V_2 = L_5;
		goto IL_0051;
	}

IL_0027:
	{
		// LocomotionTeleport.CurrentIntention = intention;
		TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * L_6 = V_1;
		NullCheck(L_6);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_7;
		L_7 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		L_7->set_CurrentIntention_18(L_8);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// intention = GetIntention();
		TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(8 /* LocomotionTeleport/TeleportIntentions TeleportInputHandler::GetIntention() */, L_9);
		V_2 = L_10;
	}

IL_0051:
	{
		// while (intention == LocomotionTeleport.TeleportIntentions.Aim || intention == LocomotionTeleport.TeleportIntentions.PreTeleport)
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		// LocomotionTeleport.CurrentIntention = intention;
		TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * L_13 = V_1;
		NullCheck(L_13);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_14;
		L_14 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		NullCheck(L_14);
		L_14->set_CurrentIntention_18(L_15);
		// }
		return (bool)0;
	}
}
// System.Object TeleportInputHandler/<TeleportAimCoroutine>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTeleportAimCoroutineU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m02583125A115ADE4CC8896C0108B7A2ADD9FCAFE (U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TeleportInputHandler/<TeleportAimCoroutine>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportAimCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_mE894BDC51B100595A10489704983F8922185CCF8 (U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTeleportAimCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_mE894BDC51B100595A10489704983F8922185CCF8_RuntimeMethod_var)));
	}
}
// System.Object TeleportInputHandler/<TeleportAimCoroutine>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTeleportAimCoroutineU3Ed__6_System_Collections_IEnumerator_get_Current_m28CB29942297ECF9C327DDDAB3D53AF8A77ABF05 (U3CTeleportAimCoroutineU3Ed__6_tCB63F9E53975A1A5FAD660B3F2A2BBFDC62B24B7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TeleportInputHandler/<TeleportReadyCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportReadyCoroutineU3Ed__5__ctor_m7C396BD2404ABCBF1CF83320ACF13FA1B621B4FB (U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TeleportInputHandler/<TeleportReadyCoroutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportReadyCoroutineU3Ed__5_System_IDisposable_Dispose_mA2DFF1E0C765EA7B2F4BA2E1EF7721049E8EA046 (U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TeleportInputHandler/<TeleportReadyCoroutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTeleportReadyCoroutineU3Ed__5_MoveNext_m5A64679B873617863C4B38AA8008C8CC1E564029 (U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0037;
	}

IL_0020:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0037:
	{
		// while (GetIntention() != LocomotionTeleport.TeleportIntentions.Aim)
		TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* LocomotionTeleport/TeleportIntentions TeleportInputHandler::GetIntention() */, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		// LocomotionTeleport.CurrentIntention = LocomotionTeleport.TeleportIntentions.Aim;
		TeleportInputHandler_t578EF30A84A8A5B0538B7474C664F9EC28BF106D * L_6 = V_1;
		NullCheck(L_6);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_7;
		L_7 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_CurrentIntention_18(1);
		// }
		return (bool)0;
	}
}
// System.Object TeleportInputHandler/<TeleportReadyCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTeleportReadyCoroutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m41A381D2B7B87AD5810E05A3C55A66FD7D8CADA2 (U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TeleportInputHandler/<TeleportReadyCoroutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportReadyCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m12F830ADD072802D84BE4B3231F43A12FA4F8E73 (U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTeleportReadyCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m12F830ADD072802D84BE4B3231F43A12FA4F8E73_RuntimeMethod_var)));
	}
}
// System.Object TeleportInputHandler/<TeleportReadyCoroutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTeleportReadyCoroutineU3Ed__5_System_Collections_IEnumerator_get_Current_mF8243C3A677F944C06A59D21D17CC3AF8DD1B594 (U3CTeleportReadyCoroutineU3Ed__5_tD24456DD09C4CDDB04F3F677F58ECE51D0582848 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateOrientationCoroutineU3Ed__7__ctor_m5DFE7ADCE7BF42B372F2097C1C019F301BBE3DFE (U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateOrientationCoroutineU3Ed__7_System_IDisposable_Dispose_m159520706F62855F2F55F4686A47A89D093AD2B0 (U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateOrientationCoroutineU3Ed__7_MoveNext_m2D766D50632FD169A27EF1E4EE39B50AAEF4512C (U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// InitializeTeleportDestination();
		TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(8 /* System.Void TeleportOrientationHandler::InitializeTeleportDestination() */, L_4);
		goto IL_004b;
	}

IL_0026:
	{
		// if (AimData != null)
		TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D * L_5 = V_1;
		NullCheck(L_5);
		AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * L_6 = L_5->get_AimData_8();
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// UpdateTeleportDestination();
		TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(9 /* System.Void TeleportOrientationHandler::UpdateTeleportDestination() */, L_7);
	}

IL_0034:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0044:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004b:
	{
		// while (LocomotionTeleport.CurrentState == LocomotionTeleport.States.Aim || LocomotionTeleport.CurrentState == LocomotionTeleport.States.PreTeleport)
		TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D * L_8 = V_1;
		NullCheck(L_8);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_9;
		L_9 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = LocomotionTeleport_get_CurrentState_mCEDC22238BFC0EB60D9DE2616698C71D0CEF0BA8_inline(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		TeleportOrientationHandler_t2D984EDC757C7E5AD387D11F0720BE8679FCDA2D * L_11 = V_1;
		NullCheck(L_11);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_12;
		L_12 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = LocomotionTeleport_get_CurrentState_mCEDC22238BFC0EB60D9DE2616698C71D0CEF0BA8_inline(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) == ((int32_t)3)))
		{
			goto IL_0026;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateOrientationCoroutineU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m87C4EB920BA4BF331493243117342D5E99905F1C (U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateOrientationCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_m8957A7F5F8D1D9C630D84F24A7C2B66642CA9B95 (U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateOrientationCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_m8957A7F5F8D1D9C630D84F24A7C2B66642CA9B95_RuntimeMethod_var)));
	}
}
// System.Object TeleportOrientationHandler/<UpdateOrientationCoroutine>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateOrientationCoroutineU3Ed__7_System_Collections_IEnumerator_get_Current_mDB4E059717A313A10584DB05F88E813A45D9A606 (U3CUpdateOrientationCoroutineU3Ed__7_t08EC88545E04719BD7CA409A02BB443CB86819E5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TeleportTargetHandler/<TargetAimCoroutine>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTargetAimCoroutineU3Ed__7__ctor_m23D9D0D8A352A65E0D99985A676E454304BF8FE4 (U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TeleportTargetHandler/<TargetAimCoroutine>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTargetAimCoroutineU3Ed__7_System_IDisposable_Dispose_m21B111D2C0E7C1EB3CE98929690C0DD190716414 (U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TeleportTargetHandler/<TargetAimCoroutine>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTargetAimCoroutineU3Ed__7_MoveNext_m67B9E5EA47ACD29BD93DB469A85D596C9D94F69A (U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0119;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0120;
	}

IL_0026:
	{
		// ResetAimData();
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(8 /* System.Void TeleportTargetHandler::ResetAimData() */, L_4);
		// var current = LocomotionTeleport.transform.position;
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_5 = V_1;
		NullCheck(L_5);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_6;
		L_6 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// _aimPoints.Clear();
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_9 = V_1;
		NullCheck(L_9);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_10 = L_9->get__aimPoints_9();
		NullCheck(L_10);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_10, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// LocomotionTeleport.AimHandler.GetPoints(_aimPoints);
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_11 = V_1;
		NullCheck(L_11);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_12;
		L_12 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		TeleportAimHandler_tC1C6D09FC478B420E7C892ECCB6E625F537D3BBD * L_13 = L_12->get_AimHandler_13();
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_14 = V_1;
		NullCheck(L_14);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_15 = L_14->get__aimPoints_9();
		NullCheck(L_13);
		VirtActionInvoker1< List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * >::Invoke(8 /* System.Void TeleportAimHandler::GetPoints(System.Collections.Generic.List`1<UnityEngine.Vector3>) */, L_13, L_15);
		// for(int i = 0; i < _aimPoints.Count; i++)
		V_3 = 0;
		goto IL_00e7;
	}

IL_0065:
	{
		// var adjustedPoint = _aimPoints[i];
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_16 = V_1;
		NullCheck(L_16);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_17 = L_16->get__aimPoints_9();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		V_4 = L_19;
		// AimData.TargetValid = ConsiderTeleport(current, ref adjustedPoint);
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_20 = V_1;
		NullCheck(L_20);
		AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * L_21 = L_20->get_AimData_7();
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_22 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_2;
		NullCheck(L_22);
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * >::Invoke(9 /* System.Boolean TeleportTargetHandler::ConsiderTeleport(UnityEngine.Vector3,UnityEngine.Vector3&) */, L_22, L_23, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4));
		NullCheck(L_21);
		L_21->set_TargetValid_1(L_24);
		// AimData.Points.Add(adjustedPoint);
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_25 = V_1;
		NullCheck(L_25);
		AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * L_26 = L_25->get_AimData_7();
		NullCheck(L_26);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_27;
		L_27 = AimData_get_Points_m3169977C66C0D412F32CECB2B7FD471F65A191B2_inline(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_4;
		NullCheck(L_27);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_27, L_28, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// if (AimData.TargetValid)
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_29 = V_1;
		NullCheck(L_29);
		AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * L_30 = L_29->get_AimData_7();
		NullCheck(L_30);
		bool L_31 = L_30->get_TargetValid_1();
		if (!L_31)
		{
			goto IL_00d6;
		}
	}
	{
		// AimData.Destination = ConsiderDestination(adjustedPoint);
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_32 = V_1;
		NullCheck(L_32);
		AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * L_33 = L_32->get_AimData_7();
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_34 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_4;
		NullCheck(L_34);
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_36;
		L_36 = VirtFuncInvoker1< Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(10 /* System.Nullable`1<UnityEngine.Vector3> TeleportTargetHandler::ConsiderDestination(UnityEngine.Vector3) */, L_34, L_35);
		NullCheck(L_33);
		L_33->set_Destination_2(L_36);
		// AimData.TargetValid = AimData.Destination.HasValue;
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_37 = V_1;
		NullCheck(L_37);
		AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * L_38 = L_37->get_AimData_7();
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_39 = V_1;
		NullCheck(L_39);
		AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * L_40 = L_39->get_AimData_7();
		NullCheck(L_40);
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_41 = L_40->get_address_of_Destination_2();
		bool L_42;
		L_42 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_41, /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		NullCheck(L_38);
		L_38->set_TargetValid_1(L_42);
		// break;
		goto IL_00f8;
	}

IL_00d6:
	{
		// current = _aimPoints[i];
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_43 = V_1;
		NullCheck(L_43);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_44 = L_43->get__aimPoints_9();
		int32_t L_45 = V_3;
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_44, L_45, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		V_2 = L_46;
		// for(int i = 0; i < _aimPoints.Count; i++)
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00e7:
	{
		// for(int i = 0; i < _aimPoints.Count; i++)
		int32_t L_48 = V_3;
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_49 = V_1;
		NullCheck(L_49);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_50 = L_49->get__aimPoints_9();
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_50, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0065;
		}
	}

IL_00f8:
	{
		// LocomotionTeleport.OnUpdateAimData(AimData);
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_52 = V_1;
		NullCheck(L_52);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_53;
		L_53 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_52, /*hidden argument*/NULL);
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_54 = V_1;
		NullCheck(L_54);
		AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * L_55 = L_54->get_AimData_7();
		NullCheck(L_53);
		LocomotionTeleport_OnUpdateAimData_m76ED9D517FF45B8A7CE7757BD0E8D147892F90A8(L_53, L_55, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0119:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0120:
	{
		// while (LocomotionTeleport.CurrentState == LocomotionTeleport.States.Aim)
		TeleportTargetHandler_t08585D582D3CDE6D7BECA85833479451FFC3D273 * L_56 = V_1;
		NullCheck(L_56);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_57;
		L_57 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		int32_t L_58;
		L_58 = LocomotionTeleport_get_CurrentState_mCEDC22238BFC0EB60D9DE2616698C71D0CEF0BA8_inline(L_57, /*hidden argument*/NULL);
		if ((((int32_t)L_58) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TeleportTargetHandler/<TargetAimCoroutine>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTargetAimCoroutineU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m73510D945678774D27D2FEE03C45CF482A2EBBE6 (U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TeleportTargetHandler/<TargetAimCoroutine>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTargetAimCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_m2BC8EDEB99F6EEEA6DB6EE8F703C99E5CC6A7301 (U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTargetAimCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_m2BC8EDEB99F6EEEA6DB6EE8F703C99E5CC6A7301_RuntimeMethod_var)));
	}
}
// System.Object TeleportTargetHandler/<TargetAimCoroutine>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTargetAimCoroutineU3Ed__7_System_Collections_IEnumerator_get_Current_mF0915E668ADBDEC27BF20ED85385A44114046F62 (U3CTargetAimCoroutineU3Ed__7_t105CA081A5F93C24A3D7607840940BE5D3A33AAF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TeleportTransitionBlink/<BlinkCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkCoroutineU3Ed__4__ctor_m73115DAF8E2D89A49A9F6BD9AB03485AA7551BCD (U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TeleportTransitionBlink/<BlinkCoroutine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkCoroutineU3Ed__4_System_IDisposable_Dispose_m6A66CCE325E70F5794414025EA6A7B8EABFAE259 (U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TeleportTransitionBlink/<BlinkCoroutine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBlinkCoroutineU3Ed__4_MoveNext_mBEC5B507954BA0961920B4141D150885CE4D309B (U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LocomotionTeleport.IsTransitioning = true;
		TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * L_4 = V_1;
		NullCheck(L_4);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_5;
		L_5 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_IsTransitioning_20((bool)1);
		// float elapsedTime = 0;
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		// var teleportTime = TransitionDuration * TeleportDelay;
		TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->get_TransitionDuration_6();
		TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_TeleportDelay_7();
		__this->set_U3CteleportTimeU3E5__3_4(((float)il2cpp_codegen_multiply((float)L_7, (float)L_9)));
		// var teleported = false;
		__this->set_U3CteleportedU3E5__4_5((bool)0);
		goto IL_00a2;
	}

IL_0051:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0061:
	{
		__this->set_U3CU3E1__state_0((-1));
		// elapsedTime += Time.deltaTime;
		float L_10 = __this->get_U3CelapsedTimeU3E5__2_3();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		// if (!teleported && elapsedTime >= teleportTime)
		bool L_12 = __this->get_U3CteleportedU3E5__4_5();
		if (L_12)
		{
			goto IL_00a2;
		}
	}
	{
		float L_13 = __this->get_U3CelapsedTimeU3E5__2_3();
		float L_14 = __this->get_U3CteleportTimeU3E5__3_4();
		if ((!(((float)L_13) >= ((float)L_14))))
		{
			goto IL_00a2;
		}
	}
	{
		// teleported = true;
		__this->set_U3CteleportedU3E5__4_5((bool)1);
		// LocomotionTeleport.DoTeleport();
		TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * L_15 = V_1;
		NullCheck(L_15);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_16;
		L_16 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		LocomotionTeleport_DoTeleport_m1477EB38D2FD6E2AD4A7553EB3237B18D40C0B0C(L_16, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// while (elapsedTime < TransitionDuration)
		float L_17 = __this->get_U3CelapsedTimeU3E5__2_3();
		TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->get_TransitionDuration_6();
		if ((((float)L_17) < ((float)L_19)))
		{
			goto IL_0051;
		}
	}
	{
		// LocomotionTeleport.IsTransitioning = false;
		TeleportTransitionBlink_t405541A5340FA52DC0FB59AD894186D86D33F977 * L_20 = V_1;
		NullCheck(L_20);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_21;
		L_21 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_IsTransitioning_20((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object TeleportTransitionBlink/<BlinkCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBlinkCoroutineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFB31D456C6490D00742481C0F18817914FC76018 (U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TeleportTransitionBlink/<BlinkCoroutine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlinkCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m6E21661229B022076FA60AF6C49A1980E56609E1 (U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBlinkCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m6E21661229B022076FA60AF6C49A1980E56609E1_RuntimeMethod_var)));
	}
}
// System.Object TeleportTransitionBlink/<BlinkCoroutine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBlinkCoroutineU3Ed__4_System_Collections_IEnumerator_get_Current_mAA053761AFFEF4D53F8AC25C2BDA6DC4729996DF (U3CBlinkCoroutineU3Ed__4_t22431191674A306D5943B04EE01DDAB238A30A9A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TeleportTransitionWarp/<DoWarp>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoWarpU3Ed__3__ctor_mA023019BAD546DB8BFCFC8326BF22566DC855B45 (U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TeleportTransitionWarp/<DoWarp>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoWarpU3Ed__3_System_IDisposable_Dispose_mE361978D56E79BC8335160F0DA180CB96DCE29F9 (U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TeleportTransitionWarp/<DoWarp>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoWarpU3Ed__3_MoveNext_m84CA338E50BBE257229411F56CD6B4D7F46015B1 (U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LocomotionTeleport.IsTransitioning = true;
		TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * L_4 = V_1;
		NullCheck(L_4);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_5;
		L_5 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_IsTransitioning_20((bool)1);
		// var startPosition = LocomotionTeleport.GetCharacterPosition();
		TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * L_6 = V_1;
		NullCheck(L_6);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_7;
		L_7 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = LocomotionTeleport_GetCharacterPosition_m30F7EB551F5787D2489CE2716284B848D2C11D26(L_7, /*hidden argument*/NULL);
		__this->set_U3CstartPositionU3E5__2_3(L_8);
		// float elapsedTime = 0;
		__this->set_U3CelapsedTimeU3E5__3_4((0.0f));
		goto IL_00a1;
	}

IL_004b:
	{
		// elapsedTime += Time.deltaTime;
		float L_9 = __this->get_U3CelapsedTimeU3E5__3_4();
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E5__3_4(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
		// var t = elapsedTime / TransitionDuration;
		float L_11 = __this->get_U3CelapsedTimeU3E5__3_4();
		TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_TransitionDuration_6();
		V_2 = ((float)((float)L_11/(float)L_13));
		// var pLerp = PositionLerp.Evaluate(t);
		TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * L_14 = V_1;
		NullCheck(L_14);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = L_14->get_PositionLerp_7();
		float L_16 = V_2;
		NullCheck(L_15);
		float L_17;
		L_17 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// LocomotionTeleport.DoWarp(startPosition, pLerp);
		TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * L_18 = V_1;
		NullCheck(L_18);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_19;
		L_19 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_U3CstartPositionU3E5__2_3();
		float L_21 = V_3;
		NullCheck(L_19);
		LocomotionTeleport_DoWarp_m2195B0DF360E9B04AD486855F66560DFC22EEB76(L_19, L_20, L_21, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a1:
	{
		// while (elapsedTime < TransitionDuration)
		float L_22 = __this->get_U3CelapsedTimeU3E5__3_4();
		TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->get_TransitionDuration_6();
		if ((((float)L_22) < ((float)L_24)))
		{
			goto IL_004b;
		}
	}
	{
		// LocomotionTeleport.DoWarp(startPosition, 1.0f);
		TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * L_25 = V_1;
		NullCheck(L_25);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_26;
		L_26 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get_U3CstartPositionU3E5__2_3();
		NullCheck(L_26);
		LocomotionTeleport_DoWarp_m2195B0DF360E9B04AD486855F66560DFC22EEB76(L_26, L_27, (1.0f), /*hidden argument*/NULL);
		// LocomotionTeleport.IsTransitioning = false;
		TeleportTransitionWarp_t8CCCAD91DA4969819A4D68DB925708D377323E37 * L_28 = V_1;
		NullCheck(L_28);
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_29;
		L_29 = TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		L_29->set_IsTransitioning_20((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object TeleportTransitionWarp/<DoWarp>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoWarpU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m94EA3502B1F9442D23A5EBF53483F6C85D484208 (U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TeleportTransitionWarp/<DoWarp>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoWarpU3Ed__3_System_Collections_IEnumerator_Reset_mE692557C58D90117915B599FA91A88FC7D238200 (U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoWarpU3Ed__3_System_Collections_IEnumerator_Reset_mE692557C58D90117915B599FA91A88FC7D238200_RuntimeMethod_var)));
	}
}
// System.Object TeleportTransitionWarp/<DoWarp>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoWarpU3Ed__3_System_Collections_IEnumerator_get_Current_mD1CE2712B5B0919B97EE26421E8DDC32F11E5314 (U3CDoWarpU3Ed__3_t4348B9455D74E7F0B4AFBE2D1FFD204E4906B935 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetPositionU3Ed__26__ctor_m5635000743474AB03A282A54DAA034BE871944D8 (U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetPositionU3Ed__26_System_IDisposable_Dispose_mFD4D0FB62BBFDC93E0DEAD7EA68430B7A4ACAF69 (U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetPositionU3Ed__26_MoveNext_m5E72132EBEF7DB0236E6E8EBD6632A16E0F748E0 (U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_007f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var startTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__2_3(L_4);
		// var endTime = Time.time + LERP_TO_OLD_POS_DURATION;
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CendTimeU3E5__3_4(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
		goto IL_0086;
	}

IL_003c:
	{
		// transform.localPosition = Vector3.Lerp(transform.localPosition, _oldPosition,
		//   (Time.time - startTime) / LERP_TO_OLD_POS_DURATION);
		TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * L_6 = V_1;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * L_8 = V_1;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_9, /*hidden argument*/NULL);
		TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * L_11 = V_1;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = L_11->get__oldPosition_20();
		float L_13;
		L_13 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_14 = __this->get_U3CstartTimeU3E5__2_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_10, L_12, ((float)((float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_14))/(float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_7, L_15, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0086:
	{
		// while (Time.time < endTime)
		float L_16;
		L_16 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_17 = __this->get_U3CendTimeU3E5__3_4();
		if ((((float)L_16) < ((float)L_17)))
		{
			goto IL_003c;
		}
	}
	{
		// transform.localPosition = _oldPosition;
		TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * L_18 = V_1;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * L_20 = V_1;
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = L_20->get__oldPosition_20();
		NullCheck(L_19);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_19, L_21, /*hidden argument*/NULL);
		// _lerpToOldPositionCr = null;
		TrainButtonVisualController_t723A8AC2E0FF93B8D83FCEFA3856A745E9B0F151 * L_22 = V_1;
		NullCheck(L_22);
		L_22->set__lerpToOldPositionCr_19((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetPositionU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2BE3FF62F4373A00DD3E8BBCBB2036F6761E547B (U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetPositionU3Ed__26_System_Collections_IEnumerator_Reset_mFAB28539B7B0AF0B783CD738C41D9DC51A1E8853 (U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetPositionU3Ed__26_System_Collections_IEnumerator_Reset_mFAB28539B7B0AF0B783CD738C41D9DC51A1E8853_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetPositionU3Ed__26_System_Collections_IEnumerator_get_Current_m84A8CF3B9E09A2B224C5C4969FBB701BB9E8FF7B (U3CResetPositionU3Ed__26_t18EC641E47205F09E3BAB1CD58C23444594D98B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateCrossingU3Ed__15__ctor_mFAA4EB62DD8CF2E800A17FB70610D210D4572B2C (U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateCrossingU3Ed__15_System_IDisposable_Dispose_m15B4C628F2391E4765AAD7E5FBEB1ED37163CF6C (U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateCrossingU3Ed__15_MoveNext_m9E22324ADCB019B88C3415E7B1087C2E5E277572 (U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * V_1 = NULL;
	float V_2 = 0.0f;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0172;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ToggleLightObjects(true);
		TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * L_4 = V_1;
		NullCheck(L_4);
		TrainCrossingController_ToggleLightObjects_m4B93FC82AC5CA62BC1F0755839F5AE2D3983C38C(L_4, (bool)1, /*hidden argument*/NULL);
		// float animationEndTime = Time.time + animationLength;
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_6 = __this->get_animationLength_3();
		__this->set_U3CanimationEndTimeU3E5__2_4(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
		// float lightBlinkDuration = animationLength * 0.1f;
		float L_7 = __this->get_animationLength_3();
		__this->set_U3ClightBlinkDurationU3E5__3_5(((float)il2cpp_codegen_multiply((float)L_7, (float)(0.100000001f))));
		// float lightBlinkStartTime = Time.time;
		float L_8;
		L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3ClightBlinkStartTimeU3E5__4_6(L_8);
		// float lightBlinkEndTime = Time.time + lightBlinkDuration;
		float L_9;
		L_9 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_10 = __this->get_U3ClightBlinkDurationU3E5__3_5();
		__this->set_U3ClightBlinkEndTimeU3E5__5_7(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
		// Material lightToBlinkOn = _lightsSide1Mat;
		TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * L_11 = V_1;
		NullCheck(L_11);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = L_11->get__lightsSide1Mat_9();
		__this->set_U3ClightToBlinkOnU3E5__6_8(L_12);
		// Material lightToBlinkOff = _lightsSide2Mat;
		TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * L_13 = V_1;
		NullCheck(L_13);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = L_13->get__lightsSide2Mat_10();
		__this->set_U3ClightToBlinkOffU3E5__7_9(L_14);
		// Color onColor = new Color(1.0f, 1.0f, 1.0f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_15), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_U3ConColorU3E5__8_10(L_15);
		// Color offColor = new Color(1.0f, 1.0f, 1.0f, 0.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_16), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_U3CoffColorU3E5__9_11(L_16);
		goto IL_0179;
	}

IL_00c4:
	{
		// float t = (Time.time - lightBlinkStartTime) / lightBlinkDuration;
		float L_17;
		L_17 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_18 = __this->get_U3ClightBlinkStartTimeU3E5__4_6();
		float L_19 = __this->get_U3ClightBlinkDurationU3E5__3_5();
		V_2 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_18))/(float)L_19));
		// lightToBlinkOn.SetColor(_colorId, Color.Lerp(offColor, onColor, t));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_U3ClightToBlinkOnU3E5__6_8();
		TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__colorId_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = __this->get_U3CoffColorU3E5__9_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24 = __this->get_U3ConColorU3E5__8_10();
		float L_25 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
		L_26 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_23, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		Material_SetColor_m9DE63FCC5A31918F8A9A2E4FCED70C298677A7B4(L_20, L_22, L_26, /*hidden argument*/NULL);
		// lightToBlinkOff.SetColor(_colorId, Color.Lerp(onColor, offColor, t));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_U3ClightToBlinkOffU3E5__7_9();
		TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->get__colorId_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = __this->get_U3ConColorU3E5__8_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = __this->get_U3CoffColorU3E5__9_11();
		float L_32 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		L_33 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_30, L_31, L_32, /*hidden argument*/NULL);
		NullCheck(L_27);
		Material_SetColor_m9DE63FCC5A31918F8A9A2E4FCED70C298677A7B4(L_27, L_29, L_33, /*hidden argument*/NULL);
		// if (Time.time > lightBlinkEndTime)
		float L_34;
		L_34 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_35 = __this->get_U3ClightBlinkEndTimeU3E5__5_7();
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_0162;
		}
	}
	{
		// Material temp = lightToBlinkOn;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_U3ClightToBlinkOnU3E5__6_8();
		V_3 = L_36;
		// lightToBlinkOn = lightToBlinkOff;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_U3ClightToBlinkOffU3E5__7_9();
		__this->set_U3ClightToBlinkOnU3E5__6_8(L_37);
		// lightToBlinkOff = temp;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_38 = V_3;
		__this->set_U3ClightToBlinkOffU3E5__7_9(L_38);
		// lightBlinkStartTime = Time.time;
		float L_39;
		L_39 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3ClightBlinkStartTimeU3E5__4_6(L_39);
		// lightBlinkEndTime = Time.time + lightBlinkDuration;
		float L_40;
		L_40 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_41 = __this->get_U3ClightBlinkDurationU3E5__3_5();
		__this->set_U3ClightBlinkEndTimeU3E5__5_7(((float)il2cpp_codegen_add((float)L_40, (float)L_41)));
	}

IL_0162:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0172:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0179:
	{
		// while (Time.time < animationEndTime)
		float L_42;
		L_42 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_43 = __this->get_U3CanimationEndTimeU3E5__2_4();
		if ((((float)L_42) < ((float)L_43)))
		{
			goto IL_00c4;
		}
	}
	{
		// ToggleLightObjects(false);
		TrainCrossingController_t8EAFD0499EF55DDAFA9727BF0F1331832E38ED37 * L_44 = V_1;
		NullCheck(L_44);
		TrainCrossingController_ToggleLightObjects_m4B93FC82AC5CA62BC1F0755839F5AE2D3983C38C(L_44, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateCrossingU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2E5821A766805B7DA85AF5CDF5B3E79C9007A97D (U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateCrossingU3Ed__15_System_Collections_IEnumerator_Reset_m1221B7705FF6866AB85D415E8D00A92F1B40B0C3 (U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateCrossingU3Ed__15_System_Collections_IEnumerator_Reset_m1221B7705FF6866AB85D415E8D00A92F1B40B0C3_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateCrossingU3Ed__15_System_Collections_IEnumerator_get_Current_mDF8E56DBC547B33C024A5EB10750F3D8B075A412 (U3CAnimateCrossingU3Ed__15_t03284E4EFB0B5DF867473E3CCA455DD255B7BE79 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStopTrainU3Ed__34__ctor_m39BEC907A4658AB1DC65D214A86D35F6E246795A (U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStopTrainU3Ed__34_System_IDisposable_Dispose_m6A0A898733F46F849ACEF0984B4C8938E5A88B20 (U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartStopTrainU3Ed__34_MoveNext_m02D96704D3CA82F8BECFC12A487D9C4AC7903FA1 (U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * V_1 = NULL;
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723 * G_B5_0 = NULL;
	U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723 * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723 * G_B6_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0142;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float endSpeed = startTrain ? _initialSpeed : 0.0f;
		bool L_4 = __this->get_startTrain_2();
		G_B4_0 = __this;
		if (L_4)
		{
			G_B5_0 = __this;
			goto IL_0031;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0031:
	{
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->get__initialSpeed_19();
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_U3CendSpeedU3E5__2_4(G_B6_0);
		// var timePeriodForSpeedChange = 3.0f;
		__this->set_U3CtimePeriodForSpeedChangeU3E5__3_5((3.0f));
		// if (startTrain)
		bool L_7 = __this->get_startTrain_2();
		if (!L_7)
		{
			goto IL_00a2;
		}
	}
	{
		// _smoke1.Play();
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_8 = V_1;
		NullCheck(L_8);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_9 = L_8->get__smoke1_34();
		NullCheck(L_9);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_9, /*hidden argument*/NULL);
		// _isMoving = true;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_10 = V_1;
		NullCheck(L_10);
		L_10->set__isMoving_37((bool)1);
		// var emissionModule1 = _smoke1.emission;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_11 = V_1;
		NullCheck(L_11);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_12 = L_11->get__smoke1_34();
		NullCheck(L_12);
		EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  L_13;
		L_13 = ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// var mainModule = _smoke1.main;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_14 = V_1;
		NullCheck(L_14);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = L_14->get__smoke1_34();
		NullCheck(L_15);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_16;
		L_16 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// emissionModule1.rateOverTimeMultiplier = _standardRateOverTimeMultiplier;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->get__standardRateOverTimeMultiplier_41();
		EmissionModule_set_rateOverTimeMultiplier_m13A0F78D648A10145C2AE38A25A40E384791B961((EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *)(&V_2), L_18, /*hidden argument*/NULL);
		// mainModule.maxParticles = _standardMaxParticles;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->get__standardMaxParticles_42();
		MainModule_set_maxParticles_m6FD14B44787B44D38DEDAE4FCBE9596A86A0460D((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_3), L_20, /*hidden argument*/NULL);
		// timePeriodForSpeedChange = PlayEngineSound(EngineSoundState.Start);
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_21 = V_1;
		NullCheck(L_21);
		float L_22;
		L_22 = TrainLocomotive_PlayEngineSound_mBBE7F6F9988F707FFC60EE195E18C7C7C37C05CE(L_21, 0, /*hidden argument*/NULL);
		__this->set_U3CtimePeriodForSpeedChangeU3E5__3_5(L_22);
		// }
		goto IL_00af;
	}

IL_00a2:
	{
		// timePeriodForSpeedChange = PlayEngineSound(EngineSoundState.Stop);
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_23 = V_1;
		NullCheck(L_23);
		float L_24;
		L_24 = TrainLocomotive_PlayEngineSound_mBBE7F6F9988F707FFC60EE195E18C7C7C37C05CE(L_23, 2, /*hidden argument*/NULL);
		__this->set_U3CtimePeriodForSpeedChangeU3E5__3_5(L_24);
	}

IL_00af:
	{
		// _engineAudioSource.loop = false;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_25 = V_1;
		NullCheck(L_25);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_26 = L_25->get__engineAudioSource_28();
		NullCheck(L_26);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_26, (bool)0, /*hidden argument*/NULL);
		// timePeriodForSpeedChange = timePeriodForSpeedChange * 0.9f;
		float L_27 = __this->get_U3CtimePeriodForSpeedChangeU3E5__3_5();
		__this->set_U3CtimePeriodForSpeedChangeU3E5__3_5(((float)il2cpp_codegen_multiply((float)L_27, (float)(0.899999976f))));
		// float startTime = Time.time;
		float L_28;
		L_28 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__4_6(L_28);
		// float endTime = Time.time + timePeriodForSpeedChange;
		float L_29;
		L_29 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_30 = __this->get_U3CtimePeriodForSpeedChangeU3E5__3_5();
		__this->set_U3CendTimeU3E5__5_7(((float)il2cpp_codegen_add((float)L_29, (float)L_30)));
		// float startSpeed = _currentSpeed;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_31 = V_1;
		NullCheck(L_31);
		float L_32 = L_31->get__currentSpeed_39();
		__this->set_U3CstartSpeedU3E5__6_8(L_32);
		goto IL_0149;
	}

IL_00f8:
	{
		// float t = (Time.time - startTime) / timePeriodForSpeedChange;
		float L_33;
		L_33 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_34 = __this->get_U3CstartTimeU3E5__4_6();
		float L_35 = __this->get_U3CtimePeriodForSpeedChangeU3E5__3_5();
		V_4 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_33, (float)L_34))/(float)L_35));
		// _currentSpeed = startSpeed * (1.0f - t) + endSpeed * t;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_36 = V_1;
		float L_37 = __this->get_U3CstartSpeedU3E5__6_8();
		float L_38 = V_4;
		float L_39 = __this->get_U3CendSpeedU3E5__2_4();
		float L_40 = V_4;
		NullCheck(L_36);
		L_36->set__currentSpeed_39(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_37, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_38)))), (float)((float)il2cpp_codegen_multiply((float)L_39, (float)L_40)))));
		// UpdateSmokeEmissionBasedOnSpeed();
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_41 = V_1;
		NullCheck(L_41);
		TrainLocomotive_UpdateSmokeEmissionBasedOnSpeed_mABC70306F1FBF3D00E0BA0901760D44793F9D3EF(L_41, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0142:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0149:
	{
		// while (Time.time < endTime)
		float L_42;
		L_42 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_43 = __this->get_U3CendTimeU3E5__5_7();
		if ((((float)L_42) < ((float)L_43)))
		{
			goto IL_00f8;
		}
	}
	{
		// _currentSpeed = endSpeed;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_44 = V_1;
		float L_45 = __this->get_U3CendSpeedU3E5__2_4();
		NullCheck(L_44);
		L_44->set__currentSpeed_39(L_45);
		// _startStopTrainCr = null;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_46 = V_1;
		NullCheck(L_46);
		L_46->set__startStopTrainCr_43((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// _isMoving = startTrain;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_47 = V_1;
		bool L_48 = __this->get_startTrain_2();
		NullCheck(L_47);
		L_47->set__isMoving_37(L_48);
		// if (!_isMoving)
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_49 = V_1;
		NullCheck(L_49);
		bool L_50 = L_49->get__isMoving_37();
		if (L_50)
		{
			goto IL_018a;
		}
	}
	{
		// _smoke1.Stop();
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_51 = V_1;
		NullCheck(L_51);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_52 = L_51->get__smoke1_34();
		NullCheck(L_52);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_52, /*hidden argument*/NULL);
		// }
		goto IL_019e;
	}

IL_018a:
	{
		// _engineAudioSource.loop = true;
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_53 = V_1;
		NullCheck(L_53);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_54 = L_53->get__engineAudioSource_28();
		NullCheck(L_54);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_54, (bool)1, /*hidden argument*/NULL);
		// PlayEngineSound(EngineSoundState.AccelerateOrSetProperSpeed);
		TrainLocomotive_t2C268A830FCCA832C591095DC092DA488299C331 * L_55 = V_1;
		NullCheck(L_55);
		float L_56;
		L_56 = TrainLocomotive_PlayEngineSound_mBBE7F6F9988F707FFC60EE195E18C7C7C37C05CE(L_55, 1, /*hidden argument*/NULL);
	}

IL_019e:
	{
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartStopTrainU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m26D7E65A695D870236E43D9C2E2D46D88EA33065 (U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStopTrainU3Ed__34_System_Collections_IEnumerator_Reset_mE5B9500E4605106C99B8718D3105A15B0CB73A87 (U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartStopTrainU3Ed__34_System_Collections_IEnumerator_Reset_mE5B9500E4605106C99B8718D3105A15B0CB73A87_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartStopTrainU3Ed__34_System_Collections_IEnumerator_get_Current_mEF6808D31C6E8D74E845C551B8618F3902FC469E (U3CStartStopTrainU3Ed__34_t907E2CF7AFD4EF68917D60A52422A00185CBB723 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpToSpeedU3Ed__17__ctor_mC566935DE291006EA7DBEFE0365E202472FD9E7B (U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpToSpeedU3Ed__17_System_IDisposable_Dispose_m47D668CCF11A5E20E41EE17981808A194A891934 (U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLerpToSpeedU3Ed__17_MoveNext_mEA106649270155724FF7B4F3557200EB0C46C649 (U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ec;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var totalTime = 0f;
		__this->set_U3CtotalTimeU3E5__2_4((0.0f));
		// var startSpeed = _currentSpeed;
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get__currentSpeed_10();
		__this->set_U3CstartSpeedU3E5__3_5(L_5);
		// if (_audioChangeCr != null)
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_6 = V_1;
		NullCheck(L_6);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7 = L_6->get__audioChangeCr_12();
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// StopCoroutine(_audioChangeCr);
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_8 = V_1;
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_9 = V_1;
		NullCheck(L_9);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_10 = L_9->get__audioChangeCr_12();
		NullCheck(L_8);
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(L_8, L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// if (IsMoving)
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_11 = V_1;
		NullCheck(L_11);
		bool L_12;
		L_12 = WindmillBladesController_get_IsMoving_m5B2902A40908BBD84B5478EDA121ED00DBDECF56_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0085;
		}
	}
	{
		// _audioChangeCr = StartCoroutine(PlaySoundDelayed(_windMillStartSound,
		//   _windMillRotationSound, _windMillStartSound.length * 0.95f));
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_13 = V_1;
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_14 = V_1;
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_15 = V_1;
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_16 = V_1;
		NullCheck(L_16);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17 = L_16->get__windMillStartSound_7();
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_18 = V_1;
		NullCheck(L_18);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_19 = L_18->get__windMillRotationSound_6();
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_20 = V_1;
		NullCheck(L_20);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_21 = L_20->get__windMillStartSound_7();
		NullCheck(L_21);
		float L_22;
		L_22 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_21, /*hidden argument*/NULL);
		NullCheck(L_15);
		RuntimeObject* L_23;
		L_23 = WindmillBladesController_PlaySoundDelayed_m5C9465C96F6157B1A20D4F7F5A7D4F307D10D0FA(L_15, L_17, L_19, ((float)il2cpp_codegen_multiply((float)L_22, (float)(0.949999988f))), /*hidden argument*/NULL);
		NullCheck(L_14);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_24;
		L_24 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_14, L_23, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->set__audioChangeCr_12(L_24);
		// } // stop
		goto IL_0092;
	}

IL_0085:
	{
		// PlaySound(_windMillStopSound);
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_25 = V_1;
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_26 = V_1;
		NullCheck(L_26);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_27 = L_26->get__windMillStopSound_8();
		NullCheck(L_25);
		WindmillBladesController_PlaySound_mBFB8F38297A3551225D2E57F4285B58E9EF1EA63(L_25, L_27, (bool)0, /*hidden argument*/NULL);
	}

IL_0092:
	{
		// var diffSpeeds = Mathf.Abs(_currentSpeed - goalSpeed);
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_28 = V_1;
		NullCheck(L_28);
		float L_29 = L_28->get__currentSpeed_10();
		float L_30 = __this->get_goalSpeed_3();
		float L_31;
		L_31 = fabsf(((float)il2cpp_codegen_subtract((float)L_29, (float)L_30)));
		V_2 = L_31;
		goto IL_0106;
	}

IL_00a7:
	{
		// _currentSpeed = Mathf.Lerp(startSpeed, goalSpeed, totalTime / MAX_TIME);
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_32 = V_1;
		float L_33 = __this->get_U3CstartSpeedU3E5__3_5();
		float L_34 = __this->get_goalSpeed_3();
		float L_35 = __this->get_U3CtotalTimeU3E5__2_4();
		float L_36;
		L_36 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_33, L_34, ((float)((float)L_35/(float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set__currentSpeed_10(L_36);
		// totalTime += Time.deltaTime;
		float L_37 = __this->get_U3CtotalTimeU3E5__2_4();
		float L_38;
		L_38 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtotalTimeU3E5__2_4(((float)il2cpp_codegen_add((float)L_37, (float)L_38)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ec:
	{
		__this->set_U3CU3E1__state_0((-1));
		// diffSpeeds = Mathf.Abs(_currentSpeed - goalSpeed);
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_39 = V_1;
		NullCheck(L_39);
		float L_40 = L_39->get__currentSpeed_10();
		float L_41 = __this->get_goalSpeed_3();
		float L_42;
		L_42 = fabsf(((float)il2cpp_codegen_subtract((float)L_40, (float)L_41)));
		V_2 = L_42;
	}

IL_0106:
	{
		// while (diffSpeeds > Mathf.Epsilon)
		float L_43 = V_2;
		float L_44 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((((float)L_43) > ((float)L_44)))
		{
			goto IL_00a7;
		}
	}
	{
		// _lerpSpeedCoroutine = null;
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_45 = V_1;
		NullCheck(L_45);
		L_45->set__lerpSpeedCoroutine_11((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLerpToSpeedU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0BCE854267BF1FBEBD932AD293ECE426245E39C3 (U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpToSpeedU3Ed__17_System_Collections_IEnumerator_Reset_mDB45CD8EC190F294BD562D4090ADB533E5EBF9F7 (U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLerpToSpeedU3Ed__17_System_Collections_IEnumerator_Reset_mDB45CD8EC190F294BD562D4090ADB533E5EBF9F7_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLerpToSpeedU3Ed__17_System_Collections_IEnumerator_get_Current_m81542027D8F2618D5B750EF7344E51128D3A6EA3 (U3CLerpToSpeedU3Ed__17_t9CDE768CAD150E4D7ED5A19EB0ECEEBD11A2451D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySoundDelayedU3Ed__18__ctor_m43BFCD0BBEAFA46AF3EC55B65A2F55BF43541166 (U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySoundDelayedU3Ed__18_System_IDisposable_Dispose_m3978D8C006709205406E26F305AAD051EDA0CB61 (U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlaySoundDelayedU3Ed__18_MoveNext_m5CE5E650B1870D226841E3D4EA3A269EC73C7493 (U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PlaySound(initial, false);
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_4 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get_initial_3();
		NullCheck(L_4);
		WindmillBladesController_PlaySound_mBFB8F38297A3551225D2E57F4285B58E9EF1EA63(L_4, L_5, (bool)0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(timeDelayAfterInitial);
		float L_6 = __this->get_timeDelayAfterInitial_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PlaySound(clip, true);
		WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * L_8 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9 = __this->get_clip_5();
		NullCheck(L_8);
		WindmillBladesController_PlaySound_mBFB8F38297A3551225D2E57F4285B58E9EF1EA63(L_8, L_9, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlaySoundDelayedU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6DE8A8951E14A7AB0C941F512740278C4DF7841A (U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySoundDelayedU3Ed__18_System_Collections_IEnumerator_Reset_mD0C04D5F54AAD444CE77C15B853BE79F5504160F (U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlaySoundDelayedU3Ed__18_System_Collections_IEnumerator_Reset_mD0C04D5F54AAD444CE77C15B853BE79F5504160F_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlaySoundDelayedU3Ed__18_System_Collections_IEnumerator_get_Current_mC1F5FCA59AD560DFD85357BAC5AD0581AE393182 (U3CPlaySoundDelayedU3Ed__18_t8F0C89D2566AF3B264667814637857DF23D896A9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___b1;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___a0;
		float L_7 = L_6.get_x_0();
		float L_8 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___a0;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___b1;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___a0;
		float L_14 = L_13.get_y_1();
		float L_15 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		return L_17;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * OVRCameraRig_get_centerEyeAnchor_mC0875856CE4EBA9D0867E69A1A05DE40A443E1FF_inline (OVRCameraRig_t743037A817D9B163CBAAA707F8B74E095D77A517 * __this, const RuntimeMethod* method)
{
	{
		// public Transform centerEyeAnchor { get; private set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CcenterEyeAnchorU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  OVRPassthroughLayer_get_edgeColor_mC1323150AAA1042A87A1E138E35863CAD05C9E49_inline (OVRPassthroughLayer_t5E9DB341891664EC179D63B778948C649620EBCB * __this, const RuntimeMethod* method)
{
	{
		// return edgeColor_;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_edgeColor__28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * TeleportSupport_get_LocomotionTeleport_mC25D8C8701C7D25C8FBA30EB3C92527B8184A714_inline (TeleportSupport_t026B41AD8BFD67B4EB80376E64272DCC79979121 * __this, const RuntimeMethod* method)
{
	{
		// protected LocomotionTeleport LocomotionTeleport { get; private set; }
		LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * L_0 = __this->get_U3CLocomotionTeleportU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocomotionTeleport_get_CurrentState_mCEDC22238BFC0EB60D9DE2616698C71D0CEF0BA8_inline (LocomotionTeleport_t727D11E3C6D163E075E04B98A06F630E61D13206 * __this, const RuntimeMethod* method)
{
	{
		// public States CurrentState { get; private set; }
		int32_t L_0 = __this->get_U3CCurrentStateU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * AimData_get_Points_m3169977C66C0D412F32CECB2B7FD471F65A191B2_inline (AimData_t4E1F88EE5D337AD83879336C4B72A4EC783E04BA * __this, const RuntimeMethod* method)
{
	{
		// public List<Vector3> Points { get; private set; }
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_U3CPointsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindmillBladesController_get_IsMoving_m5B2902A40908BBD84B5478EDA121ED00DBDECF56_inline (WindmillBladesController_t71983948C596F91E28320A4EE77CF01AE7CE67A3 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsMoving { get; private set; }
		bool L_0 = __this->get_U3CIsMovingU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  Enumerator_get_Current_mB5222DC7F4812D6052E1E91F09C6241C5B6EFECD_gshared_inline (Enumerator_tDFB99C2DEB0C2220C4D4AF9FB1AD9BB9AD0745BE * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5  L_0 = (KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 )__this->get_current_3();
		return (KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m274F462788E4F381B6EBE1FAEF4188F917A073EE_gshared_inline (KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB  Enumerator_get_Current_mF902680F1B8043D67FC40B01196D478C5ED5D14E_gshared_inline (Enumerator_tC851E22B57C5975E556279071C8885E7835F9D12 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB  L_0 = (KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB )__this->get_current_3();
		return (KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m7769F73190D62E056480E9CBAEE2BCE4000236CA_gshared_inline (KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  KeyValuePair_2_get_Value_mDF44B651756195C7279CBC5F83030E1706453A7E_gshared_inline (KeyValuePair_2_tD90647EFC3A0649132594FBE66B21E94FC5294DB * __this, const RuntimeMethod* method)
{
	{
		TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D  L_0 = (TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D )__this->get_value_1();
		return (TextureSet_tA5A205FC113FC27D6E81F7E8D2AA6F36BE07111D )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_m557C18EFC332CFAAC70FBCE89E1ECA1F22A49153_gshared_inline (KeyValuePair_2_tAD0585F9A52B707CBF24EE973B02356488C6C2F5 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = (uint64_t)__this->get_key_0();
		return (uint64_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_gshared_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_count_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_gshared_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	{
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_0 = (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 *)__this->get_head_0();
		return (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_gshared_inline (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_item_3();
		return (float)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
