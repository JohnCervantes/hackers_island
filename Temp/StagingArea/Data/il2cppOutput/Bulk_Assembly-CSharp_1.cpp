#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// SecondCutscene/<loadDialogue>c__Iterator0
struct U3CloadDialogueU3Ec__Iterator0_t642204687;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// SecondCutscene
struct SecondCutscene_t524439269;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.Object
struct Object_t631007953;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// SecondCutscene/<textScroll>c__Iterator1
struct U3CtextScrollU3Ec__Iterator1_t3175231331;
// SecondCutscene/<textScroll1>c__Iterator2
struct U3CtextScroll1U3Ec__Iterator2_t437998880;
// shuriken
struct shuriken_t1718313326;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// PlayerMovement
struct PlayerMovement_t2731566919;
// SideWall
struct SideWall_t2083452592;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// sortLayer
struct sortLayer_t2536625413;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// TextBoxManager
struct TextBoxManager_t1855233713;
// TextBoxManager/<fading>c__Iterator0
struct U3CfadingU3Ec__Iterator0_t3917186881;
// TextBoxManager/<textScroll>c__Iterator1
struct U3CtextScrollU3Ec__Iterator1_t3632678001;
// TextBoxManager/<run>c__Iterator2
struct U3CrunU3Ec__Iterator2_t2869353945;
// System.Xml.XmlDocument
struct XmlDocument_t2837193595;
// TextBoxManager/<loadDialogue>c__AnonStorey3
struct U3CloadDialogueU3Ec__AnonStorey3_t3225074152;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// UnityEngine.WaitUntil
struct WaitUntil_t3373419216;
// threshold
struct threshold_t4008198305;
// UnityEngine.UI.Image
struct Image_t2670269651;
// Timer
struct Timer_t4185932343;
// Timer/<startTimer>c__Iterator0
struct U3CstartTimerU3Ec__Iterator0_t3414868529;
// WIFINetworkManager
struct WIFINetworkManager_t1080793997;
// Timer/<PlayCleared>c__Iterator1
struct U3CPlayClearedU3Ec__Iterator1_t737918195;
// AddScore
struct AddScore_t369591168;
// TipHandler
struct TipHandler_t807666407;
// TipManager
struct TipManager_t3568936214;
// TipManager/<displayDragFoodTip>c__Iterator0
struct U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526;
// TipManager/<displayFeedTip>c__Iterator1
struct U3CdisplayFeedTipU3Ec__Iterator1_t3766578656;
// TipManager/<displayTheTip>c__Iterator2
struct U3CdisplayTheTipU3Ec__Iterator2_t819713326;
// TransitionHandler
struct TransitionHandler_t1104418219;
// TransitionHandler/<fadeIn>c__Iterator0
struct U3CfadeInU3Ec__Iterator0_t1457657473;
// TransitionHandler/<fadeOut>c__Iterator1
struct U3CfadeOutU3Ec__Iterator1_t1640331254;
// TransitionHandler/<glitch>c__Iterator2
struct U3CglitchU3Ec__Iterator2_t2262882800;
// TransitionHandler/<cutsceneGlitch>c__Iterator3
struct U3CcutsceneGlitchU3Ec__Iterator3_t1280322269;
// TransitionHandler/<cutsceneFade>c__Iterator4
struct U3CcutsceneFadeU3Ec__Iterator4_t1553545759;
// TransitionHandler/<barSounds>c__Iterator5
struct U3CbarSoundsU3Ec__Iterator5_t3061910389;
// TransitionHandler/<openTheDoor>c__Iterator6
struct U3CopenTheDoorU3Ec__Iterator6_t558074977;
// DialogueSceneManager
struct DialogueSceneManager_t3025860002;
// Kino.AnalogGlitch
struct AnalogGlitch_t1106357039;
// Kino.DigitalGlitch
struct DigitalGlitch_t3418514828;
// System.Random
struct Random_t108471755;
// TriggersAndAnimation
struct TriggersAndAnimation_t1403829264;
// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t1076084509;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t57175488;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// FlameManager
struct FlameManager_t1876929043;
// NpcDialogue
struct NpcDialogue_t1608584690;
// PrivacyStateHandler
struct PrivacyStateHandler_t2222435893;
// WIFINetworkManager/<reset>c__Iterator0
struct U3CresetU3Ec__Iterator0_t3593363922;
// WIFINetworkManager/<endGame>c__Iterator1
struct U3CendGameU3Ec__Iterator1_t3834751616;
// WIFINetworkManager/<setStoreName>c__Iterator2
struct U3CsetStoreNameU3Ec__Iterator2_t2546226351;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.UI.Toggle
struct Toggle_t2735377061;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// WIFIToggleManager
struct WIFIToggleManager_t3203504582;
// WIFINetworkManager/<wrongGuessHint>c__Iterator3
struct U3CwrongGuessHintU3Ec__Iterator3_t338836333;
// WIFIToggleManager/<enableRigidBody>c__Iterator0
struct U3CenableRigidBodyU3Ec__Iterator0_t2874225266;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t139615908;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t1082692789;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.XmlImplementation
struct XmlImplementation_t254178875;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2890546907;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1437094927;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t266093086;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t934654762;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1533444722;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t2316283784;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t1073099671;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t521873611;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.TextAsset
struct TextAsset_t3022178571;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t648412432;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t467195904;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t2355412304;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Event
struct Event_t2956885303;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t123837990;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t1873685584;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.UI.FontData
struct FontData_t746620069;

extern RuntimeClass* QuestManager_t588401851_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var;
extern String_t* _stringLiteral85179081;
extern String_t* _stringLiteral742876383;
extern String_t* _stringLiteral4249957872;
extern String_t* _stringLiteral2554266375;
extern const uint32_t U3CloadDialogueU3Ec__Iterator0_MoveNext_m149437221_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CloadDialogueU3Ec__Iterator0_Reset_m2500002816_RuntimeMethod_var;
extern const uint32_t U3CloadDialogueU3Ec__Iterator0_Reset_m2500002816_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t U3CtextScrollU3Ec__Iterator1_MoveNext_m1747632617_MetadataUsageId;
extern const RuntimeMethod* U3CtextScrollU3Ec__Iterator1_Reset_m3683828037_RuntimeMethod_var;
extern const uint32_t U3CtextScrollU3Ec__Iterator1_Reset_m3683828037_MetadataUsageId;
extern const uint32_t U3CtextScroll1U3Ec__Iterator2_MoveNext_m549708253_MetadataUsageId;
extern const RuntimeMethod* U3CtextScroll1U3Ec__Iterator2_Reset_m1592797280_RuntimeMethod_var;
extern const uint32_t U3CtextScroll1U3Ec__Iterator2_Reset_m1592797280_MetadataUsageId;
extern String_t* _stringLiteral2323074440;
extern String_t* _stringLiteral4294193667;
extern String_t* _stringLiteral2670504175;
extern String_t* _stringLiteral2261821926;
extern const uint32_t shuriken_Awake_m3071974445_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const uint32_t shuriken_Start_m3886224900_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t shuriken_Update_m1093423832_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisPlayerMovement_t2731566919_m3781804095_RuntimeMethod_var;
extern String_t* _stringLiteral2554004238;
extern const uint32_t shuriken_OnTriggerEnter2D_m1696924794_MetadataUsageId;
extern String_t* _stringLiteral37314645;
extern const uint32_t SideWall_OnCollisionEnter2D_m1214773207_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var;
extern const uint32_t sortLayer_Start_m188579359_MetadataUsageId;
extern const uint32_t TextBoxManager_Start_m3228580100_MetadataUsageId;
extern RuntimeClass* U3CfadingU3Ec__Iterator0_t3917186881_il2cpp_TypeInfo_var;
extern const uint32_t TextBoxManager_fading_m1319799917_MetadataUsageId;
extern RuntimeClass* U3CtextScrollU3Ec__Iterator1_t3632678001_il2cpp_TypeInfo_var;
extern const uint32_t TextBoxManager_textScroll_m2712319739_MetadataUsageId;
extern RuntimeClass* U3CrunU3Ec__Iterator2_t2869353945_il2cpp_TypeInfo_var;
extern const uint32_t TextBoxManager_run_m2556487987_MetadataUsageId;
extern RuntimeClass* XmlDocument_t2837193595_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CloadDialogueU3Ec__AnonStorey3_t3225074152_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNode_t3767805227_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var;
extern const RuntimeMethod* U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__0_m2818858869_RuntimeMethod_var;
extern const RuntimeMethod* U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__1_m1252774928_RuntimeMethod_var;
extern const RuntimeMethod* U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__2_m1656059455_RuntimeMethod_var;
extern const RuntimeMethod* U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__3_m89975514_RuntimeMethod_var;
extern const RuntimeMethod* U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__4_m849490401_RuntimeMethod_var;
extern const RuntimeMethod* U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__5_m3578373756_RuntimeMethod_var;
extern const RuntimeMethod* U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__6_m3981658283_RuntimeMethod_var;
extern const RuntimeMethod* U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__7_m2415574342_RuntimeMethod_var;
extern String_t* _stringLiteral115248270;
extern String_t* _stringLiteral2963533511;
extern String_t* _stringLiteral791021989;
extern String_t* _stringLiteral3033935407;
extern String_t* _stringLiteral2715198515;
extern String_t* _stringLiteral751995096;
extern const uint32_t TextBoxManager_loadDialogue_m3548346734_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t TextBoxManager_Update_m3479694462_MetadataUsageId;
extern RuntimeClass* Func_1_t3822001908_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitUntil_t3373419216_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CfadingU3Ec__Iterator0_U3CU3Em__0_m2337224762_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m1399073142_RuntimeMethod_var;
extern String_t* _stringLiteral1985039536;
extern String_t* _stringLiteral1350711218;
extern const uint32_t U3CfadingU3Ec__Iterator0_MoveNext_m2983973274_MetadataUsageId;
extern const RuntimeMethod* U3CfadingU3Ec__Iterator0_Reset_m2494072195_RuntimeMethod_var;
extern const uint32_t U3CfadingU3Ec__Iterator0_Reset_m2494072195_MetadataUsageId;
extern const uint32_t U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__0_m2818858869_MetadataUsageId;
extern const uint32_t U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__1_m1252774928_MetadataUsageId;
extern const uint32_t U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__2_m1656059455_MetadataUsageId;
extern const uint32_t U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__3_m89975514_MetadataUsageId;
extern const uint32_t U3CrunU3Ec__Iterator2_MoveNext_m4067925234_MetadataUsageId;
extern const RuntimeMethod* U3CrunU3Ec__Iterator2_Reset_m3373437599_RuntimeMethod_var;
extern const uint32_t U3CrunU3Ec__Iterator2_Reset_m3373437599_MetadataUsageId;
extern const uint32_t U3CtextScrollU3Ec__Iterator1_MoveNext_m2786425576_MetadataUsageId;
extern const RuntimeMethod* U3CtextScrollU3Ec__Iterator1_Reset_m977415632_RuntimeMethod_var;
extern const uint32_t U3CtextScrollU3Ec__Iterator1_Reset_m977415632_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const uint32_t threshold_Start_m1505551740_MetadataUsageId;
extern String_t* _stringLiteral3683405234;
extern const uint32_t Timer_Start_m762003253_MetadataUsageId;
extern const uint32_t Timer_startTime_m981800786_MetadataUsageId;
extern RuntimeClass* U3CstartTimerU3Ec__Iterator0_t3414868529_il2cpp_TypeInfo_var;
extern const uint32_t Timer_startTimer_m310409824_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836_RuntimeMethod_var;
extern String_t* _stringLiteral3452614618;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614550;
extern const uint32_t Timer_resetTimer_m2408204133_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern String_t* _stringLiteral3451369349;
extern String_t* _stringLiteral402302843;
extern const uint32_t Timer_addSecond_m3960220265_MetadataUsageId;
extern String_t* _stringLiteral1124821496;
extern const uint32_t Timer_Cleared_m930012561_MetadataUsageId;
extern RuntimeClass* U3CPlayClearedU3Ec__Iterator1_t737918195_il2cpp_TypeInfo_var;
extern const uint32_t Timer_PlayCleared_m3393821971_MetadataUsageId;
extern String_t* _stringLiteral3451500419;
extern const uint32_t Timer_minusSecond_m595946876_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisAddScore_t369591168_m926236821_RuntimeMethod_var;
extern String_t* _stringLiteral1948332219;
extern String_t* _stringLiteral3446402805;
extern String_t* _stringLiteral1569897770;
extern const uint32_t U3CPlayClearedU3Ec__Iterator1_MoveNext_m2346019571_MetadataUsageId;
extern const RuntimeMethod* U3CPlayClearedU3Ec__Iterator1_Reset_m2247739549_RuntimeMethod_var;
extern const uint32_t U3CPlayClearedU3Ec__Iterator1_Reset_m2247739549_MetadataUsageId;
extern String_t* _stringLiteral16340778;
extern String_t* _stringLiteral2129753532;
extern String_t* _stringLiteral1494761329;
extern String_t* _stringLiteral3331235418;
extern const uint32_t U3CstartTimerU3Ec__Iterator0_MoveNext_m1545303613_MetadataUsageId;
extern const RuntimeMethod* U3CstartTimerU3Ec__Iterator0_Reset_m4039162806_RuntimeMethod_var;
extern const uint32_t U3CstartTimerU3Ec__Iterator0_Reset_m4039162806_MetadataUsageId;
extern RuntimeClass* TipHandler_t807666407_il2cpp_TypeInfo_var;
extern const uint32_t TipHandler_Awake_m1385988640_MetadataUsageId;
extern String_t* _stringLiteral2181160080;
extern const uint32_t TipManager_activateTip_m3671668630_MetadataUsageId;
extern String_t* _stringLiteral2623322390;
extern const uint32_t TipManager_activateFeedTip_m12669531_MetadataUsageId;
extern String_t* _stringLiteral2742928688;
extern const uint32_t TipManager_activateDragFoodTip_m1310825194_MetadataUsageId;
extern RuntimeClass* U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526_il2cpp_TypeInfo_var;
extern const uint32_t TipManager_displayDragFoodTip_m3467840621_MetadataUsageId;
extern RuntimeClass* U3CdisplayFeedTipU3Ec__Iterator1_t3766578656_il2cpp_TypeInfo_var;
extern const uint32_t TipManager_displayFeedTip_m4063381061_MetadataUsageId;
extern RuntimeClass* U3CdisplayTheTipU3Ec__Iterator2_t819713326_il2cpp_TypeInfo_var;
extern const uint32_t TipManager_displayTheTip_m1735305784_MetadataUsageId;
extern const RuntimeMethod* U3CdisplayDragFoodTipU3Ec__Iterator0_U3CU3Em__0_m1793873601_RuntimeMethod_var;
extern String_t* _stringLiteral3596802249;
extern String_t* _stringLiteral1012805017;
extern const uint32_t U3CdisplayDragFoodTipU3Ec__Iterator0_MoveNext_m1838243671_MetadataUsageId;
extern const RuntimeMethod* U3CdisplayDragFoodTipU3Ec__Iterator0_Reset_m4066243835_RuntimeMethod_var;
extern const uint32_t U3CdisplayDragFoodTipU3Ec__Iterator0_Reset_m4066243835_MetadataUsageId;
extern const RuntimeMethod* U3CdisplayFeedTipU3Ec__Iterator1_U3CU3Em__0_m3194802045_RuntimeMethod_var;
extern String_t* _stringLiteral3015081003;
extern const uint32_t U3CdisplayFeedTipU3Ec__Iterator1_MoveNext_m3067223184_MetadataUsageId;
extern const RuntimeMethod* U3CdisplayFeedTipU3Ec__Iterator1_Reset_m1866582987_RuntimeMethod_var;
extern const uint32_t U3CdisplayFeedTipU3Ec__Iterator1_Reset_m1866582987_MetadataUsageId;
extern const RuntimeMethod* U3CdisplayTheTipU3Ec__Iterator2_U3CU3Em__0_m1321429568_RuntimeMethod_var;
extern String_t* _stringLiteral1675528485;
extern const uint32_t U3CdisplayTheTipU3Ec__Iterator2_MoveNext_m163689845_MetadataUsageId;
extern const RuntimeMethod* U3CdisplayTheTipU3Ec__Iterator2_Reset_m254125540_RuntimeMethod_var;
extern const uint32_t U3CdisplayTheTipU3Ec__Iterator2_Reset_m254125540_MetadataUsageId;
extern String_t* _stringLiteral1204401978;
extern String_t* _stringLiteral796787853;
extern String_t* _stringLiteral1390680558;
extern String_t* _stringLiteral3271040427;
extern const uint32_t TransitionHandler_Start_m1666210609_MetadataUsageId;
extern RuntimeClass* U3CfadeInU3Ec__Iterator0_t1457657473_il2cpp_TypeInfo_var;
extern const uint32_t TransitionHandler_fadeIn_m1713082052_MetadataUsageId;
extern RuntimeClass* U3CfadeOutU3Ec__Iterator1_t1640331254_il2cpp_TypeInfo_var;
extern const uint32_t TransitionHandler_fadeOut_m1051979518_MetadataUsageId;
extern RuntimeClass* U3CglitchU3Ec__Iterator2_t2262882800_il2cpp_TypeInfo_var;
extern const uint32_t TransitionHandler_glitch_m4266019766_MetadataUsageId;
extern RuntimeClass* U3CcutsceneGlitchU3Ec__Iterator3_t1280322269_il2cpp_TypeInfo_var;
extern const uint32_t TransitionHandler_cutsceneGlitch_m963952661_MetadataUsageId;
extern String_t* _stringLiteral765399478;
extern const uint32_t TransitionHandler_fadeInCutscene_m2410043246_MetadataUsageId;
extern RuntimeClass* U3CcutsceneFadeU3Ec__Iterator4_t1553545759_il2cpp_TypeInfo_var;
extern const uint32_t TransitionHandler_cutsceneFade_m3533874575_MetadataUsageId;
extern RuntimeClass* U3CbarSoundsU3Ec__Iterator5_t3061910389_il2cpp_TypeInfo_var;
extern const uint32_t TransitionHandler_barSounds_m299674539_MetadataUsageId;
extern RuntimeClass* U3CopenTheDoorU3Ec__Iterator6_t558074977_il2cpp_TypeInfo_var;
extern const uint32_t TransitionHandler_openTheDoor_m102649761_MetadataUsageId;
extern const uint32_t U3CbarSoundsU3Ec__Iterator5_MoveNext_m1872652176_MetadataUsageId;
extern const RuntimeMethod* U3CbarSoundsU3Ec__Iterator5_Reset_m1320742757_RuntimeMethod_var;
extern const uint32_t U3CbarSoundsU3Ec__Iterator5_Reset_m1320742757_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisDialogueSceneManager_t3025860002_m1735645841_RuntimeMethod_var;
extern const uint32_t U3CcutsceneFadeU3Ec__Iterator4_MoveNext_m1713777134_MetadataUsageId;
extern const RuntimeMethod* U3CcutsceneFadeU3Ec__Iterator4_Reset_m2670442084_RuntimeMethod_var;
extern const uint32_t U3CcutsceneFadeU3Ec__Iterator4_Reset_m2670442084_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAnalogGlitch_t1106357039_m3773877626_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisDigitalGlitch_t3418514828_m3421226099_RuntimeMethod_var;
extern const uint32_t U3CcutsceneGlitchU3Ec__Iterator3_MoveNext_m2506498723_MetadataUsageId;
extern const RuntimeMethod* U3CcutsceneGlitchU3Ec__Iterator3_Reset_m2013727578_RuntimeMethod_var;
extern const uint32_t U3CcutsceneGlitchU3Ec__Iterator3_Reset_m2013727578_MetadataUsageId;
extern String_t* _stringLiteral1949827611;
extern const uint32_t U3CfadeInU3Ec__Iterator0_MoveNext_m762267816_MetadataUsageId;
extern const RuntimeMethod* U3CfadeInU3Ec__Iterator0_Reset_m1263144180_RuntimeMethod_var;
extern const uint32_t U3CfadeInU3Ec__Iterator0_Reset_m1263144180_MetadataUsageId;
extern const uint32_t U3CfadeOutU3Ec__Iterator1_MoveNext_m2589012993_MetadataUsageId;
extern const RuntimeMethod* U3CfadeOutU3Ec__Iterator1_Reset_m3968039446_RuntimeMethod_var;
extern const uint32_t U3CfadeOutU3Ec__Iterator1_Reset_m3968039446_MetadataUsageId;
extern RuntimeClass* Random_t108471755_il2cpp_TypeInfo_var;
extern const uint32_t U3CglitchU3Ec__Iterator2_MoveNext_m3311734819_MetadataUsageId;
extern const RuntimeMethod* U3CglitchU3Ec__Iterator2_Reset_m791629191_RuntimeMethod_var;
extern const uint32_t U3CglitchU3Ec__Iterator2_Reset_m791629191_MetadataUsageId;
extern const uint32_t U3CopenTheDoorU3Ec__Iterator6_MoveNext_m1295403915_MetadataUsageId;
extern const RuntimeMethod* U3CopenTheDoorU3Ec__Iterator6_Reset_m2031337731_RuntimeMethod_var;
extern const uint32_t U3CopenTheDoorU3Ec__Iterator6_Reset_m2031337731_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisEventTrigger_t1076084509_m3277609990_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisPolygonCollider2D_t57175488_m3980671823_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCollider2D_t2806799626_m1184015940_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisFlameManager_t1876929043_m750444410_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisNpcDialogue_t1608584690_m1796970400_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisPrivacyStateHandler_t2222435893_m2945413539_RuntimeMethod_var;
extern const uint32_t TriggersAndAnimation_activateTriggersAndAnimation_m2779203266_MetadataUsageId;
extern const uint32_t TriggersAndAnimation_disableTriggersAndAnimation_m1580211138_MetadataUsageId;
extern const uint32_t TriggersAndAnimation_disableTriggersForCampFire_m136309580_MetadataUsageId;
extern RuntimeClass* U3CresetU3Ec__Iterator0_t3593363922_il2cpp_TypeInfo_var;
extern const uint32_t WIFINetworkManager_reset_m4041041805_MetadataUsageId;
extern String_t* _stringLiteral3614788601;
extern const uint32_t WIFINetworkManager_setStoresName_m4034154371_MetadataUsageId;
extern String_t* _stringLiteral3316209797;
extern const uint32_t WIFINetworkManager_endTheGame_m70675779_MetadataUsageId;
extern RuntimeClass* U3CendGameU3Ec__Iterator1_t3834751616_il2cpp_TypeInfo_var;
extern const uint32_t WIFINetworkManager_endGame_m1945075042_MetadataUsageId;
extern RuntimeClass* U3CsetStoreNameU3Ec__Iterator2_t2546226351_il2cpp_TypeInfo_var;
extern const uint32_t WIFINetworkManager_setStoreName_m905477757_MetadataUsageId;
extern String_t* _stringLiteral598538385;
extern String_t* _stringLiteral2350441889;
extern String_t* _stringLiteral2206457458;
extern String_t* _stringLiteral3679119671;
extern String_t* _stringLiteral1358947352;
extern String_t* _stringLiteral536729632;
extern String_t* _stringLiteral3565619804;
extern String_t* _stringLiteral2452879852;
extern String_t* _stringLiteral390687449;
extern String_t* _stringLiteral2379172613;
extern String_t* _stringLiteral3387866240;
extern String_t* _stringLiteral615998840;
extern String_t* _stringLiteral2408696772;
extern String_t* _stringLiteral3493222036;
extern String_t* _stringLiteral3079059194;
extern String_t* _stringLiteral2496365360;
extern String_t* _stringLiteral1968283866;
extern String_t* _stringLiteral380872013;
extern String_t* _stringLiteral1852833359;
extern String_t* _stringLiteral3006138710;
extern String_t* _stringLiteral3101199581;
extern String_t* _stringLiteral3451630837;
extern String_t* _stringLiteral4019984948;
extern String_t* _stringLiteral123666461;
extern String_t* _stringLiteral3420890756;
extern String_t* _stringLiteral2333220324;
extern String_t* _stringLiteral2379038957;
extern String_t* _stringLiteral1197743551;
extern String_t* _stringLiteral797480808;
extern String_t* _stringLiteral3670735769;
extern String_t* _stringLiteral3093169590;
extern String_t* _stringLiteral130483863;
extern String_t* _stringLiteral4211699796;
extern String_t* _stringLiteral2775804149;
extern String_t* _stringLiteral477332598;
extern const uint32_t WIFINetworkManager_setWIFINames_m341559950_MetadataUsageId;
extern const uint32_t WIFINetworkManager_assignWifiNames_m1412370316_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var;
extern const uint32_t WIFINetworkManager_selectToggle_m2131513956_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var;
extern String_t* _stringLiteral2376700570;
extern String_t* _stringLiteral1167972383;
extern String_t* _stringLiteral1982708895;
extern String_t* _stringLiteral1636124867;
extern String_t* _stringLiteral4274950676;
extern String_t* _stringLiteral38048410;
extern String_t* _stringLiteral1994363546;
extern String_t* _stringLiteral3950678682;
extern const uint32_t WIFINetworkManager_hack_m3077616452_MetadataUsageId;
extern String_t* _stringLiteral3893191915;
extern const uint32_t WIFINetworkManager_connect_m2875164044_MetadataUsageId;
extern RuntimeClass* U3CwrongGuessHintU3Ec__Iterator3_t338836333_il2cpp_TypeInfo_var;
extern const uint32_t WIFINetworkManager_wrongGuessHint_m743773196_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175_RuntimeMethod_var;
extern const uint32_t U3CendGameU3Ec__Iterator1_MoveNext_m3834194961_MetadataUsageId;
extern const RuntimeMethod* U3CendGameU3Ec__Iterator1_Reset_m1529540789_RuntimeMethod_var;
extern const uint32_t U3CendGameU3Ec__Iterator1_Reset_m1529540789_MetadataUsageId;
extern const uint32_t U3CresetU3Ec__Iterator0_MoveNext_m935688804_MetadataUsageId;
extern const RuntimeMethod* U3CresetU3Ec__Iterator0_Reset_m2791248715_RuntimeMethod_var;
extern const uint32_t U3CresetU3Ec__Iterator0_Reset_m2791248715_MetadataUsageId;
extern String_t* _stringLiteral3902473660;
extern const uint32_t U3CsetStoreNameU3Ec__Iterator2_MoveNext_m1706329_MetadataUsageId;
extern const RuntimeMethod* U3CsetStoreNameU3Ec__Iterator2_Reset_m322904897_RuntimeMethod_var;
extern const uint32_t U3CsetStoreNameU3Ec__Iterator2_Reset_m322904897_MetadataUsageId;
extern const uint32_t U3CwrongGuessHintU3Ec__Iterator3_MoveNext_m4121418976_MetadataUsageId;
extern const RuntimeMethod* U3CwrongGuessHintU3Ec__Iterator3_Reset_m1732157802_RuntimeMethod_var;
extern const uint32_t U3CwrongGuessHintU3Ec__Iterator3_Reset_m1732157802_MetadataUsageId;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern const uint32_t WIFIToggleManager_Awake_m271548787_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013_RuntimeMethod_var;
extern const uint32_t WIFIToggleManager_assignPictures_m3690339988_MetadataUsageId;
extern RuntimeClass* U3CenableRigidBodyU3Ec__Iterator0_t2874225266_il2cpp_TypeInfo_var;
extern const uint32_t WIFIToggleManager_enableRigidBody_m1377820160_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const uint32_t U3CenableRigidBodyU3Ec__Iterator0_MoveNext_m1588595225_MetadataUsageId;
extern const RuntimeMethod* U3CenableRigidBodyU3Ec__Iterator0_Reset_m2531681844_RuntimeMethod_var;
extern const uint32_t U3CenableRigidBodyU3Ec__Iterator0_Reset_m2531681844_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;

struct StringU5BU5D_t1281789340;
struct SpriteRendererU5BU5D_t911335936;
struct Int32U5BU5D_t385246372;
struct GameObjectU5BU5D_t3328599146;
struct SpriteU5BU5D_t2581906349;
struct Vector3U5BU5D_t1718750761;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef XMLNODELIST_T2551693786_H
#define XMLNODELIST_T2551693786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeList
struct  XmlNodeList_t2551693786  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODELIST_T2551693786_H
#ifndef U3CLOADDIALOGUEU3EC__ANONSTOREY3_T3225074152_H
#define U3CLOADDIALOGUEU3EC__ANONSTOREY3_T3225074152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextBoxManager/<loadDialogue>c__AnonStorey3
struct  U3CloadDialogueU3Ec__AnonStorey3_t3225074152  : public RuntimeObject
{
public:
	// System.Xml.XmlNode TextBoxManager/<loadDialogue>c__AnonStorey3::node
	XmlNode_t3767805227 * ___node_0;
	// TextBoxManager TextBoxManager/<loadDialogue>c__AnonStorey3::$this
	TextBoxManager_t1855233713 * ___U24this_1;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(U3CloadDialogueU3Ec__AnonStorey3_t3225074152, ___node_0)); }
	inline XmlNode_t3767805227 * get_node_0() const { return ___node_0; }
	inline XmlNode_t3767805227 ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(XmlNode_t3767805227 * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier((&___node_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CloadDialogueU3Ec__AnonStorey3_t3225074152, ___U24this_1)); }
	inline TextBoxManager_t1855233713 * get_U24this_1() const { return ___U24this_1; }
	inline TextBoxManager_t1855233713 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(TextBoxManager_t1855233713 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADDIALOGUEU3EC__ANONSTOREY3_T3225074152_H
#ifndef U3CRUNU3EC__ITERATOR2_T2869353945_H
#define U3CRUNU3EC__ITERATOR2_T2869353945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextBoxManager/<run>c__Iterator2
struct  U3CrunU3Ec__Iterator2_t2869353945  : public RuntimeObject
{
public:
	// TextBoxManager TextBoxManager/<run>c__Iterator2::$this
	TextBoxManager_t1855233713 * ___U24this_0;
	// System.Object TextBoxManager/<run>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TextBoxManager/<run>c__Iterator2::$disposing
	bool ___U24disposing_2;
	// System.Int32 TextBoxManager/<run>c__Iterator2::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CrunU3Ec__Iterator2_t2869353945, ___U24this_0)); }
	inline TextBoxManager_t1855233713 * get_U24this_0() const { return ___U24this_0; }
	inline TextBoxManager_t1855233713 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TextBoxManager_t1855233713 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CrunU3Ec__Iterator2_t2869353945, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CrunU3Ec__Iterator2_t2869353945, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CrunU3Ec__Iterator2_t2869353945, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNU3EC__ITERATOR2_T2869353945_H
#ifndef U3CSETSTORENAMEU3EC__ITERATOR2_T2546226351_H
#define U3CSETSTORENAMEU3EC__ITERATOR2_T2546226351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WIFINetworkManager/<setStoreName>c__Iterator2
struct  U3CsetStoreNameU3Ec__Iterator2_t2546226351  : public RuntimeObject
{
public:
	// System.Single WIFINetworkManager/<setStoreName>c__Iterator2::<time>__0
	float ___U3CtimeU3E__0_0;
	// System.Int32 WIFINetworkManager/<setStoreName>c__Iterator2::<counter>__0
	int32_t ___U3CcounterU3E__0_1;
	// System.Int32 WIFINetworkManager/<setStoreName>c__Iterator2::<random>__0
	int32_t ___U3CrandomU3E__0_2;
	// WIFINetworkManager WIFINetworkManager/<setStoreName>c__Iterator2::$this
	WIFINetworkManager_t1080793997 * ___U24this_3;
	// System.Object WIFINetworkManager/<setStoreName>c__Iterator2::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean WIFINetworkManager/<setStoreName>c__Iterator2::$disposing
	bool ___U24disposing_5;
	// System.Int32 WIFINetworkManager/<setStoreName>c__Iterator2::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CtimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CsetStoreNameU3Ec__Iterator2_t2546226351, ___U3CtimeU3E__0_0)); }
	inline float get_U3CtimeU3E__0_0() const { return ___U3CtimeU3E__0_0; }
	inline float* get_address_of_U3CtimeU3E__0_0() { return &___U3CtimeU3E__0_0; }
	inline void set_U3CtimeU3E__0_0(float value)
	{
		___U3CtimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CcounterU3E__0_1() { return static_cast<int32_t>(offsetof(U3CsetStoreNameU3Ec__Iterator2_t2546226351, ___U3CcounterU3E__0_1)); }
	inline int32_t get_U3CcounterU3E__0_1() const { return ___U3CcounterU3E__0_1; }
	inline int32_t* get_address_of_U3CcounterU3E__0_1() { return &___U3CcounterU3E__0_1; }
	inline void set_U3CcounterU3E__0_1(int32_t value)
	{
		___U3CcounterU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CrandomU3E__0_2() { return static_cast<int32_t>(offsetof(U3CsetStoreNameU3Ec__Iterator2_t2546226351, ___U3CrandomU3E__0_2)); }
	inline int32_t get_U3CrandomU3E__0_2() const { return ___U3CrandomU3E__0_2; }
	inline int32_t* get_address_of_U3CrandomU3E__0_2() { return &___U3CrandomU3E__0_2; }
	inline void set_U3CrandomU3E__0_2(int32_t value)
	{
		___U3CrandomU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CsetStoreNameU3Ec__Iterator2_t2546226351, ___U24this_3)); }
	inline WIFINetworkManager_t1080793997 * get_U24this_3() const { return ___U24this_3; }
	inline WIFINetworkManager_t1080793997 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(WIFINetworkManager_t1080793997 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CsetStoreNameU3Ec__Iterator2_t2546226351, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CsetStoreNameU3Ec__Iterator2_t2546226351, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CsetStoreNameU3Ec__Iterator2_t2546226351, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSETSTORENAMEU3EC__ITERATOR2_T2546226351_H
#ifndef XMLNODE_T3767805227_H
#define XMLNODE_T3767805227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t3767805227  : public RuntimeObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t2837193595 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3767805227 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t1082692789 * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___ownerDocument_1)); }
	inline XmlDocument_t2837193595 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t2837193595 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t2837193595 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_1), value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___parentNode_2)); }
	inline XmlNode_t3767805227 * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t3767805227 ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t3767805227 * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_2), value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___childNodes_3)); }
	inline XmlNodeListChildren_t1082692789 * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t1082692789 ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t1082692789 * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier((&___childNodes_3), value);
	}
};

struct XmlNode_t3767805227_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t139615908 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map44_4;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t139615908 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t139615908 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t139615908 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyList_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map44_4() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___U3CU3Ef__switchU24map44_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map44_4() const { return ___U3CU3Ef__switchU24map44_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map44_4() { return &___U3CU3Ef__switchU24map44_4; }
	inline void set_U3CU3Ef__switchU24map44_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map44_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map44_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T3767805227_H
#ifndef U3CENDGAMEU3EC__ITERATOR1_T3834751616_H
#define U3CENDGAMEU3EC__ITERATOR1_T3834751616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WIFINetworkManager/<endGame>c__Iterator1
struct  U3CendGameU3Ec__Iterator1_t3834751616  : public RuntimeObject
{
public:
	// WIFINetworkManager WIFINetworkManager/<endGame>c__Iterator1::$this
	WIFINetworkManager_t1080793997 * ___U24this_0;
	// System.Object WIFINetworkManager/<endGame>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean WIFINetworkManager/<endGame>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 WIFINetworkManager/<endGame>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CendGameU3Ec__Iterator1_t3834751616, ___U24this_0)); }
	inline WIFINetworkManager_t1080793997 * get_U24this_0() const { return ___U24this_0; }
	inline WIFINetworkManager_t1080793997 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(WIFINetworkManager_t1080793997 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CendGameU3Ec__Iterator1_t3834751616, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CendGameU3Ec__Iterator1_t3834751616, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CendGameU3Ec__Iterator1_t3834751616, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENDGAMEU3EC__ITERATOR1_T3834751616_H
#ifndef U3CTEXTSCROLLU3EC__ITERATOR1_T3632678001_H
#define U3CTEXTSCROLLU3EC__ITERATOR1_T3632678001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextBoxManager/<textScroll>c__Iterator1
struct  U3CtextScrollU3Ec__Iterator1_t3632678001  : public RuntimeObject
{
public:
	// System.Int32 TextBoxManager/<textScroll>c__Iterator1::<letter>__0
	int32_t ___U3CletterU3E__0_0;
	// System.String TextBoxManager/<textScroll>c__Iterator1::lineOfText
	String_t* ___lineOfText_1;
	// TextBoxManager TextBoxManager/<textScroll>c__Iterator1::$this
	TextBoxManager_t1855233713 * ___U24this_2;
	// System.Object TextBoxManager/<textScroll>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean TextBoxManager/<textScroll>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 TextBoxManager/<textScroll>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CletterU3E__0_0() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3632678001, ___U3CletterU3E__0_0)); }
	inline int32_t get_U3CletterU3E__0_0() const { return ___U3CletterU3E__0_0; }
	inline int32_t* get_address_of_U3CletterU3E__0_0() { return &___U3CletterU3E__0_0; }
	inline void set_U3CletterU3E__0_0(int32_t value)
	{
		___U3CletterU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_lineOfText_1() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3632678001, ___lineOfText_1)); }
	inline String_t* get_lineOfText_1() const { return ___lineOfText_1; }
	inline String_t** get_address_of_lineOfText_1() { return &___lineOfText_1; }
	inline void set_lineOfText_1(String_t* value)
	{
		___lineOfText_1 = value;
		Il2CppCodeGenWriteBarrier((&___lineOfText_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3632678001, ___U24this_2)); }
	inline TextBoxManager_t1855233713 * get_U24this_2() const { return ___U24this_2; }
	inline TextBoxManager_t1855233713 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(TextBoxManager_t1855233713 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3632678001, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3632678001, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3632678001, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTEXTSCROLLU3EC__ITERATOR1_T3632678001_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef U3CDISPLAYFEEDTIPU3EC__ITERATOR1_T3766578656_H
#define U3CDISPLAYFEEDTIPU3EC__ITERATOR1_T3766578656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TipManager/<displayFeedTip>c__Iterator1
struct  U3CdisplayFeedTipU3Ec__Iterator1_t3766578656  : public RuntimeObject
{
public:
	// TipManager TipManager/<displayFeedTip>c__Iterator1::$this
	TipManager_t3568936214 * ___U24this_0;
	// System.Object TipManager/<displayFeedTip>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TipManager/<displayFeedTip>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 TipManager/<displayFeedTip>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CdisplayFeedTipU3Ec__Iterator1_t3766578656, ___U24this_0)); }
	inline TipManager_t3568936214 * get_U24this_0() const { return ___U24this_0; }
	inline TipManager_t3568936214 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TipManager_t3568936214 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CdisplayFeedTipU3Ec__Iterator1_t3766578656, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CdisplayFeedTipU3Ec__Iterator1_t3766578656, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CdisplayFeedTipU3Ec__Iterator1_t3766578656, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISPLAYFEEDTIPU3EC__ITERATOR1_T3766578656_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef U3CFADINGU3EC__ITERATOR0_T3917186881_H
#define U3CFADINGU3EC__ITERATOR0_T3917186881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextBoxManager/<fading>c__Iterator0
struct  U3CfadingU3Ec__Iterator0_t3917186881  : public RuntimeObject
{
public:
	// TextBoxManager TextBoxManager/<fading>c__Iterator0::$this
	TextBoxManager_t1855233713 * ___U24this_0;
	// System.Object TextBoxManager/<fading>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TextBoxManager/<fading>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 TextBoxManager/<fading>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CfadingU3Ec__Iterator0_t3917186881, ___U24this_0)); }
	inline TextBoxManager_t1855233713 * get_U24this_0() const { return ___U24this_0; }
	inline TextBoxManager_t1855233713 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TextBoxManager_t1855233713 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CfadingU3Ec__Iterator0_t3917186881, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CfadingU3Ec__Iterator0_t3917186881, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CfadingU3Ec__Iterator0_t3917186881, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADINGU3EC__ITERATOR0_T3917186881_H
#ifndef U3CENABLERIGIDBODYU3EC__ITERATOR0_T2874225266_H
#define U3CENABLERIGIDBODYU3EC__ITERATOR0_T2874225266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WIFIToggleManager/<enableRigidBody>c__Iterator0
struct  U3CenableRigidBodyU3Ec__Iterator0_t2874225266  : public RuntimeObject
{
public:
	// System.Int32 WIFIToggleManager/<enableRigidBody>c__Iterator0::count
	int32_t ___count_0;
	// WIFIToggleManager WIFIToggleManager/<enableRigidBody>c__Iterator0::$this
	WIFIToggleManager_t3203504582 * ___U24this_1;
	// System.Object WIFIToggleManager/<enableRigidBody>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean WIFIToggleManager/<enableRigidBody>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 WIFIToggleManager/<enableRigidBody>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(U3CenableRigidBodyU3Ec__Iterator0_t2874225266, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CenableRigidBodyU3Ec__Iterator0_t2874225266, ___U24this_1)); }
	inline WIFIToggleManager_t3203504582 * get_U24this_1() const { return ___U24this_1; }
	inline WIFIToggleManager_t3203504582 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(WIFIToggleManager_t3203504582 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CenableRigidBodyU3Ec__Iterator0_t2874225266, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CenableRigidBodyU3Ec__Iterator0_t2874225266, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CenableRigidBodyU3Ec__Iterator0_t2874225266, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENABLERIGIDBODYU3EC__ITERATOR0_T2874225266_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CPLAYCLEAREDU3EC__ITERATOR1_T737918195_H
#define U3CPLAYCLEAREDU3EC__ITERATOR1_T737918195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer/<PlayCleared>c__Iterator1
struct  U3CPlayClearedU3Ec__Iterator1_t737918195  : public RuntimeObject
{
public:
	// Timer Timer/<PlayCleared>c__Iterator1::$this
	Timer_t4185932343 * ___U24this_0;
	// System.Object Timer/<PlayCleared>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Timer/<PlayCleared>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 Timer/<PlayCleared>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CPlayClearedU3Ec__Iterator1_t737918195, ___U24this_0)); }
	inline Timer_t4185932343 * get_U24this_0() const { return ___U24this_0; }
	inline Timer_t4185932343 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Timer_t4185932343 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CPlayClearedU3Ec__Iterator1_t737918195, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CPlayClearedU3Ec__Iterator1_t737918195, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CPlayClearedU3Ec__Iterator1_t737918195, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPLAYCLEAREDU3EC__ITERATOR1_T737918195_H
#ifndef U3CFADEOUTU3EC__ITERATOR1_T1640331254_H
#define U3CFADEOUTU3EC__ITERATOR1_T1640331254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransitionHandler/<fadeOut>c__Iterator1
struct  U3CfadeOutU3Ec__Iterator1_t1640331254  : public RuntimeObject
{
public:
	// TransitionHandler TransitionHandler/<fadeOut>c__Iterator1::$this
	TransitionHandler_t1104418219 * ___U24this_0;
	// System.Object TransitionHandler/<fadeOut>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TransitionHandler/<fadeOut>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 TransitionHandler/<fadeOut>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CfadeOutU3Ec__Iterator1_t1640331254, ___U24this_0)); }
	inline TransitionHandler_t1104418219 * get_U24this_0() const { return ___U24this_0; }
	inline TransitionHandler_t1104418219 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TransitionHandler_t1104418219 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CfadeOutU3Ec__Iterator1_t1640331254, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CfadeOutU3Ec__Iterator1_t1640331254, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CfadeOutU3Ec__Iterator1_t1640331254, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEOUTU3EC__ITERATOR1_T1640331254_H
#ifndef U3CSTARTTIMERU3EC__ITERATOR0_T3414868529_H
#define U3CSTARTTIMERU3EC__ITERATOR0_T3414868529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer/<startTimer>c__Iterator0
struct  U3CstartTimerU3Ec__Iterator0_t3414868529  : public RuntimeObject
{
public:
	// System.String Timer/<startTimer>c__Iterator0::<k>__0
	String_t* ___U3CkU3E__0_0;
	// Timer Timer/<startTimer>c__Iterator0::$this
	Timer_t4185932343 * ___U24this_1;
	// System.Object Timer/<startTimer>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Timer/<startTimer>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Timer/<startTimer>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CkU3E__0_0() { return static_cast<int32_t>(offsetof(U3CstartTimerU3Ec__Iterator0_t3414868529, ___U3CkU3E__0_0)); }
	inline String_t* get_U3CkU3E__0_0() const { return ___U3CkU3E__0_0; }
	inline String_t** get_address_of_U3CkU3E__0_0() { return &___U3CkU3E__0_0; }
	inline void set_U3CkU3E__0_0(String_t* value)
	{
		___U3CkU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CkU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CstartTimerU3Ec__Iterator0_t3414868529, ___U24this_1)); }
	inline Timer_t4185932343 * get_U24this_1() const { return ___U24this_1; }
	inline Timer_t4185932343 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Timer_t4185932343 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CstartTimerU3Ec__Iterator0_t3414868529, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CstartTimerU3Ec__Iterator0_t3414868529, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CstartTimerU3Ec__Iterator0_t3414868529, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTTIMERU3EC__ITERATOR0_T3414868529_H
#ifndef U3CDISPLAYDRAGFOODTIPU3EC__ITERATOR0_T1480909526_H
#define U3CDISPLAYDRAGFOODTIPU3EC__ITERATOR0_T1480909526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TipManager/<displayDragFoodTip>c__Iterator0
struct  U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526  : public RuntimeObject
{
public:
	// TipManager TipManager/<displayDragFoodTip>c__Iterator0::$this
	TipManager_t3568936214 * ___U24this_0;
	// System.Object TipManager/<displayDragFoodTip>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TipManager/<displayDragFoodTip>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 TipManager/<displayDragFoodTip>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526, ___U24this_0)); }
	inline TipManager_t3568936214 * get_U24this_0() const { return ___U24this_0; }
	inline TipManager_t3568936214 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TipManager_t3568936214 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISPLAYDRAGFOODTIPU3EC__ITERATOR0_T1480909526_H
#ifndef U3CDISPLAYTHETIPU3EC__ITERATOR2_T819713326_H
#define U3CDISPLAYTHETIPU3EC__ITERATOR2_T819713326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TipManager/<displayTheTip>c__Iterator2
struct  U3CdisplayTheTipU3Ec__Iterator2_t819713326  : public RuntimeObject
{
public:
	// TipManager TipManager/<displayTheTip>c__Iterator2::$this
	TipManager_t3568936214 * ___U24this_0;
	// System.Object TipManager/<displayTheTip>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TipManager/<displayTheTip>c__Iterator2::$disposing
	bool ___U24disposing_2;
	// System.Int32 TipManager/<displayTheTip>c__Iterator2::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CdisplayTheTipU3Ec__Iterator2_t819713326, ___U24this_0)); }
	inline TipManager_t3568936214 * get_U24this_0() const { return ___U24this_0; }
	inline TipManager_t3568936214 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TipManager_t3568936214 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CdisplayTheTipU3Ec__Iterator2_t819713326, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CdisplayTheTipU3Ec__Iterator2_t819713326, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CdisplayTheTipU3Ec__Iterator2_t819713326, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISPLAYTHETIPU3EC__ITERATOR2_T819713326_H
#ifndef U3CFADEINU3EC__ITERATOR0_T1457657473_H
#define U3CFADEINU3EC__ITERATOR0_T1457657473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransitionHandler/<fadeIn>c__Iterator0
struct  U3CfadeInU3Ec__Iterator0_t1457657473  : public RuntimeObject
{
public:
	// TransitionHandler TransitionHandler/<fadeIn>c__Iterator0::$this
	TransitionHandler_t1104418219 * ___U24this_0;
	// System.Object TransitionHandler/<fadeIn>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TransitionHandler/<fadeIn>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 TransitionHandler/<fadeIn>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CfadeInU3Ec__Iterator0_t1457657473, ___U24this_0)); }
	inline TransitionHandler_t1104418219 * get_U24this_0() const { return ___U24this_0; }
	inline TransitionHandler_t1104418219 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TransitionHandler_t1104418219 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CfadeInU3Ec__Iterator0_t1457657473, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CfadeInU3Ec__Iterator0_t1457657473, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CfadeInU3Ec__Iterator0_t1457657473, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEINU3EC__ITERATOR0_T1457657473_H
#ifndef U3CGLITCHU3EC__ITERATOR2_T2262882800_H
#define U3CGLITCHU3EC__ITERATOR2_T2262882800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransitionHandler/<glitch>c__Iterator2
struct  U3CglitchU3Ec__Iterator2_t2262882800  : public RuntimeObject
{
public:
	// System.Random TransitionHandler/<glitch>c__Iterator2::<random>__1
	Random_t108471755 * ___U3CrandomU3E__1_0;
	// System.Int32 TransitionHandler/<glitch>c__Iterator2::<numb>__1
	int32_t ___U3CnumbU3E__1_1;
	// TransitionHandler TransitionHandler/<glitch>c__Iterator2::$this
	TransitionHandler_t1104418219 * ___U24this_2;
	// System.Object TransitionHandler/<glitch>c__Iterator2::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean TransitionHandler/<glitch>c__Iterator2::$disposing
	bool ___U24disposing_4;
	// System.Int32 TransitionHandler/<glitch>c__Iterator2::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CrandomU3E__1_0() { return static_cast<int32_t>(offsetof(U3CglitchU3Ec__Iterator2_t2262882800, ___U3CrandomU3E__1_0)); }
	inline Random_t108471755 * get_U3CrandomU3E__1_0() const { return ___U3CrandomU3E__1_0; }
	inline Random_t108471755 ** get_address_of_U3CrandomU3E__1_0() { return &___U3CrandomU3E__1_0; }
	inline void set_U3CrandomU3E__1_0(Random_t108471755 * value)
	{
		___U3CrandomU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrandomU3E__1_0), value);
	}

	inline static int32_t get_offset_of_U3CnumbU3E__1_1() { return static_cast<int32_t>(offsetof(U3CglitchU3Ec__Iterator2_t2262882800, ___U3CnumbU3E__1_1)); }
	inline int32_t get_U3CnumbU3E__1_1() const { return ___U3CnumbU3E__1_1; }
	inline int32_t* get_address_of_U3CnumbU3E__1_1() { return &___U3CnumbU3E__1_1; }
	inline void set_U3CnumbU3E__1_1(int32_t value)
	{
		___U3CnumbU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CglitchU3Ec__Iterator2_t2262882800, ___U24this_2)); }
	inline TransitionHandler_t1104418219 * get_U24this_2() const { return ___U24this_2; }
	inline TransitionHandler_t1104418219 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(TransitionHandler_t1104418219 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CglitchU3Ec__Iterator2_t2262882800, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CglitchU3Ec__Iterator2_t2262882800, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CglitchU3Ec__Iterator2_t2262882800, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGLITCHU3EC__ITERATOR2_T2262882800_H
#ifndef U3COPENTHEDOORU3EC__ITERATOR6_T558074977_H
#define U3COPENTHEDOORU3EC__ITERATOR6_T558074977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransitionHandler/<openTheDoor>c__Iterator6
struct  U3CopenTheDoorU3Ec__Iterator6_t558074977  : public RuntimeObject
{
public:
	// TransitionHandler TransitionHandler/<openTheDoor>c__Iterator6::$this
	TransitionHandler_t1104418219 * ___U24this_0;
	// System.Object TransitionHandler/<openTheDoor>c__Iterator6::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TransitionHandler/<openTheDoor>c__Iterator6::$disposing
	bool ___U24disposing_2;
	// System.Int32 TransitionHandler/<openTheDoor>c__Iterator6::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CopenTheDoorU3Ec__Iterator6_t558074977, ___U24this_0)); }
	inline TransitionHandler_t1104418219 * get_U24this_0() const { return ___U24this_0; }
	inline TransitionHandler_t1104418219 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TransitionHandler_t1104418219 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CopenTheDoorU3Ec__Iterator6_t558074977, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CopenTheDoorU3Ec__Iterator6_t558074977, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CopenTheDoorU3Ec__Iterator6_t558074977, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3COPENTHEDOORU3EC__ITERATOR6_T558074977_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_5)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef U3CRESETU3EC__ITERATOR0_T3593363922_H
#define U3CRESETU3EC__ITERATOR0_T3593363922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WIFINetworkManager/<reset>c__Iterator0
struct  U3CresetU3Ec__Iterator0_t3593363922  : public RuntimeObject
{
public:
	// WIFINetworkManager WIFINetworkManager/<reset>c__Iterator0::$this
	WIFINetworkManager_t1080793997 * ___U24this_0;
	// System.Object WIFINetworkManager/<reset>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean WIFINetworkManager/<reset>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 WIFINetworkManager/<reset>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CresetU3Ec__Iterator0_t3593363922, ___U24this_0)); }
	inline WIFINetworkManager_t1080793997 * get_U24this_0() const { return ___U24this_0; }
	inline WIFINetworkManager_t1080793997 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(WIFINetworkManager_t1080793997 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CresetU3Ec__Iterator0_t3593363922, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CresetU3Ec__Iterator0_t3593363922, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CresetU3Ec__Iterator0_t3593363922, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRESETU3EC__ITERATOR0_T3593363922_H
#ifndef U3CCUTSCENEGLITCHU3EC__ITERATOR3_T1280322269_H
#define U3CCUTSCENEGLITCHU3EC__ITERATOR3_T1280322269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransitionHandler/<cutsceneGlitch>c__Iterator3
struct  U3CcutsceneGlitchU3Ec__Iterator3_t1280322269  : public RuntimeObject
{
public:
	// TransitionHandler TransitionHandler/<cutsceneGlitch>c__Iterator3::$this
	TransitionHandler_t1104418219 * ___U24this_0;
	// System.Object TransitionHandler/<cutsceneGlitch>c__Iterator3::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TransitionHandler/<cutsceneGlitch>c__Iterator3::$disposing
	bool ___U24disposing_2;
	// System.Int32 TransitionHandler/<cutsceneGlitch>c__Iterator3::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CcutsceneGlitchU3Ec__Iterator3_t1280322269, ___U24this_0)); }
	inline TransitionHandler_t1104418219 * get_U24this_0() const { return ___U24this_0; }
	inline TransitionHandler_t1104418219 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TransitionHandler_t1104418219 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CcutsceneGlitchU3Ec__Iterator3_t1280322269, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CcutsceneGlitchU3Ec__Iterator3_t1280322269, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CcutsceneGlitchU3Ec__Iterator3_t1280322269, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCUTSCENEGLITCHU3EC__ITERATOR3_T1280322269_H
#ifndef U3CCUTSCENEFADEU3EC__ITERATOR4_T1553545759_H
#define U3CCUTSCENEFADEU3EC__ITERATOR4_T1553545759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransitionHandler/<cutsceneFade>c__Iterator4
struct  U3CcutsceneFadeU3Ec__Iterator4_t1553545759  : public RuntimeObject
{
public:
	// TransitionHandler TransitionHandler/<cutsceneFade>c__Iterator4::$this
	TransitionHandler_t1104418219 * ___U24this_0;
	// System.Object TransitionHandler/<cutsceneFade>c__Iterator4::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TransitionHandler/<cutsceneFade>c__Iterator4::$disposing
	bool ___U24disposing_2;
	// System.Int32 TransitionHandler/<cutsceneFade>c__Iterator4::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CcutsceneFadeU3Ec__Iterator4_t1553545759, ___U24this_0)); }
	inline TransitionHandler_t1104418219 * get_U24this_0() const { return ___U24this_0; }
	inline TransitionHandler_t1104418219 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TransitionHandler_t1104418219 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CcutsceneFadeU3Ec__Iterator4_t1553545759, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CcutsceneFadeU3Ec__Iterator4_t1553545759, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CcutsceneFadeU3Ec__Iterator4_t1553545759, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCUTSCENEFADEU3EC__ITERATOR4_T1553545759_H
#ifndef U3CBARSOUNDSU3EC__ITERATOR5_T3061910389_H
#define U3CBARSOUNDSU3EC__ITERATOR5_T3061910389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransitionHandler/<barSounds>c__Iterator5
struct  U3CbarSoundsU3Ec__Iterator5_t3061910389  : public RuntimeObject
{
public:
	// TransitionHandler TransitionHandler/<barSounds>c__Iterator5::$this
	TransitionHandler_t1104418219 * ___U24this_0;
	// System.Object TransitionHandler/<barSounds>c__Iterator5::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean TransitionHandler/<barSounds>c__Iterator5::$disposing
	bool ___U24disposing_2;
	// System.Int32 TransitionHandler/<barSounds>c__Iterator5::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CbarSoundsU3Ec__Iterator5_t3061910389, ___U24this_0)); }
	inline TransitionHandler_t1104418219 * get_U24this_0() const { return ___U24this_0; }
	inline TransitionHandler_t1104418219 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(TransitionHandler_t1104418219 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CbarSoundsU3Ec__Iterator5_t3061910389, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CbarSoundsU3Ec__Iterator5_t3061910389, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CbarSoundsU3Ec__Iterator5_t3061910389, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBARSOUNDSU3EC__ITERATOR5_T3061910389_H
#ifndef U3CTEXTSCROLLU3EC__ITERATOR1_T3175231331_H
#define U3CTEXTSCROLLU3EC__ITERATOR1_T3175231331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SecondCutscene/<textScroll>c__Iterator1
struct  U3CtextScrollU3Ec__Iterator1_t3175231331  : public RuntimeObject
{
public:
	// System.Int32 SecondCutscene/<textScroll>c__Iterator1::<letter>__0
	int32_t ___U3CletterU3E__0_0;
	// System.String SecondCutscene/<textScroll>c__Iterator1::lineOfText
	String_t* ___lineOfText_1;
	// SecondCutscene SecondCutscene/<textScroll>c__Iterator1::$this
	SecondCutscene_t524439269 * ___U24this_2;
	// System.Object SecondCutscene/<textScroll>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean SecondCutscene/<textScroll>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 SecondCutscene/<textScroll>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CletterU3E__0_0() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3175231331, ___U3CletterU3E__0_0)); }
	inline int32_t get_U3CletterU3E__0_0() const { return ___U3CletterU3E__0_0; }
	inline int32_t* get_address_of_U3CletterU3E__0_0() { return &___U3CletterU3E__0_0; }
	inline void set_U3CletterU3E__0_0(int32_t value)
	{
		___U3CletterU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_lineOfText_1() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3175231331, ___lineOfText_1)); }
	inline String_t* get_lineOfText_1() const { return ___lineOfText_1; }
	inline String_t** get_address_of_lineOfText_1() { return &___lineOfText_1; }
	inline void set_lineOfText_1(String_t* value)
	{
		___lineOfText_1 = value;
		Il2CppCodeGenWriteBarrier((&___lineOfText_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3175231331, ___U24this_2)); }
	inline SecondCutscene_t524439269 * get_U24this_2() const { return ___U24this_2; }
	inline SecondCutscene_t524439269 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SecondCutscene_t524439269 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3175231331, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3175231331, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CtextScrollU3Ec__Iterator1_t3175231331, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTEXTSCROLLU3EC__ITERATOR1_T3175231331_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef U3CTEXTSCROLL1U3EC__ITERATOR2_T437998880_H
#define U3CTEXTSCROLL1U3EC__ITERATOR2_T437998880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SecondCutscene/<textScroll1>c__Iterator2
struct  U3CtextScroll1U3Ec__Iterator2_t437998880  : public RuntimeObject
{
public:
	// System.Int32 SecondCutscene/<textScroll1>c__Iterator2::<letter>__0
	int32_t ___U3CletterU3E__0_0;
	// System.String SecondCutscene/<textScroll1>c__Iterator2::lineOfText
	String_t* ___lineOfText_1;
	// SecondCutscene SecondCutscene/<textScroll1>c__Iterator2::$this
	SecondCutscene_t524439269 * ___U24this_2;
	// System.Object SecondCutscene/<textScroll1>c__Iterator2::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean SecondCutscene/<textScroll1>c__Iterator2::$disposing
	bool ___U24disposing_4;
	// System.Int32 SecondCutscene/<textScroll1>c__Iterator2::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CletterU3E__0_0() { return static_cast<int32_t>(offsetof(U3CtextScroll1U3Ec__Iterator2_t437998880, ___U3CletterU3E__0_0)); }
	inline int32_t get_U3CletterU3E__0_0() const { return ___U3CletterU3E__0_0; }
	inline int32_t* get_address_of_U3CletterU3E__0_0() { return &___U3CletterU3E__0_0; }
	inline void set_U3CletterU3E__0_0(int32_t value)
	{
		___U3CletterU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_lineOfText_1() { return static_cast<int32_t>(offsetof(U3CtextScroll1U3Ec__Iterator2_t437998880, ___lineOfText_1)); }
	inline String_t* get_lineOfText_1() const { return ___lineOfText_1; }
	inline String_t** get_address_of_lineOfText_1() { return &___lineOfText_1; }
	inline void set_lineOfText_1(String_t* value)
	{
		___lineOfText_1 = value;
		Il2CppCodeGenWriteBarrier((&___lineOfText_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CtextScroll1U3Ec__Iterator2_t437998880, ___U24this_2)); }
	inline SecondCutscene_t524439269 * get_U24this_2() const { return ___U24this_2; }
	inline SecondCutscene_t524439269 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SecondCutscene_t524439269 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CtextScroll1U3Ec__Iterator2_t437998880, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CtextScroll1U3Ec__Iterator2_t437998880, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CtextScroll1U3Ec__Iterator2_t437998880, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTEXTSCROLL1U3EC__ITERATOR2_T437998880_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef U3CLOADDIALOGUEU3EC__ITERATOR0_T642204687_H
#define U3CLOADDIALOGUEU3EC__ITERATOR0_T642204687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SecondCutscene/<loadDialogue>c__Iterator0
struct  U3CloadDialogueU3Ec__Iterator0_t642204687  : public RuntimeObject
{
public:
	// SecondCutscene SecondCutscene/<loadDialogue>c__Iterator0::$this
	SecondCutscene_t524439269 * ___U24this_0;
	// System.Object SecondCutscene/<loadDialogue>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean SecondCutscene/<loadDialogue>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 SecondCutscene/<loadDialogue>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CloadDialogueU3Ec__Iterator0_t642204687, ___U24this_0)); }
	inline SecondCutscene_t524439269 * get_U24this_0() const { return ___U24this_0; }
	inline SecondCutscene_t524439269 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(SecondCutscene_t524439269 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CloadDialogueU3Ec__Iterator0_t642204687, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CloadDialogueU3Ec__Iterator0_t642204687, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CloadDialogueU3Ec__Iterator0_t642204687, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADDIALOGUEU3EC__ITERATOR0_T642204687_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef WAITUNTIL_T3373419216_H
#define WAITUNTIL_T3373419216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitUntil
struct  WaitUntil_t3373419216  : public CustomYieldInstruction_t1895667560
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t3822001908 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t3373419216, ___m_Predicate_0)); }
	inline Func_1_t3822001908 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t3822001908 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t3822001908 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Predicate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITUNTIL_T3373419216_H
#ifndef XMLDOCUMENT_T2837193595_H
#define XMLDOCUMENT_T2837193595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t2837193595  : public XmlNode_t3767805227
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t71772148 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t254178875 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t626023767 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1853889766 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t2890546907 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_15;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t266093086 * ___schemas_16;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	RuntimeObject* ___schemaInfo_17;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanged_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanging_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserted_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserting_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoved_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoving_24;

public:
	inline static int32_t get_offset_of_optimal_create_element_6() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_element_6)); }
	inline bool get_optimal_create_element_6() const { return ___optimal_create_element_6; }
	inline bool* get_address_of_optimal_create_element_6() { return &___optimal_create_element_6; }
	inline void set_optimal_create_element_6(bool value)
	{
		___optimal_create_element_6 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_7() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_attribute_7)); }
	inline bool get_optimal_create_attribute_7() const { return ___optimal_create_attribute_7; }
	inline bool* get_address_of_optimal_create_attribute_7() { return &___optimal_create_attribute_7; }
	inline void set_optimal_create_attribute_7(bool value)
	{
		___optimal_create_attribute_7 = value;
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameTable_8)); }
	inline XmlNameTable_t71772148 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t71772148 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_8), value);
	}

	inline static int32_t get_offset_of_baseURI_9() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___baseURI_9)); }
	inline String_t* get_baseURI_9() const { return ___baseURI_9; }
	inline String_t** get_address_of_baseURI_9() { return &___baseURI_9; }
	inline void set_baseURI_9(String_t* value)
	{
		___baseURI_9 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_9), value);
	}

	inline static int32_t get_offset_of_implementation_10() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___implementation_10)); }
	inline XmlImplementation_t254178875 * get_implementation_10() const { return ___implementation_10; }
	inline XmlImplementation_t254178875 ** get_address_of_implementation_10() { return &___implementation_10; }
	inline void set_implementation_10(XmlImplementation_t254178875 * value)
	{
		___implementation_10 = value;
		Il2CppCodeGenWriteBarrier((&___implementation_10), value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_11() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___preserveWhitespace_11)); }
	inline bool get_preserveWhitespace_11() const { return ___preserveWhitespace_11; }
	inline bool* get_address_of_preserveWhitespace_11() { return &___preserveWhitespace_11; }
	inline void set_preserveWhitespace_11(bool value)
	{
		___preserveWhitespace_11 = value;
	}

	inline static int32_t get_offset_of_resolver_12() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___resolver_12)); }
	inline XmlResolver_t626023767 * get_resolver_12() const { return ___resolver_12; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_12() { return &___resolver_12; }
	inline void set_resolver_12(XmlResolver_t626023767 * value)
	{
		___resolver_12 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_12), value);
	}

	inline static int32_t get_offset_of_idTable_13() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___idTable_13)); }
	inline Hashtable_t1853889766 * get_idTable_13() const { return ___idTable_13; }
	inline Hashtable_t1853889766 ** get_address_of_idTable_13() { return &___idTable_13; }
	inline void set_idTable_13(Hashtable_t1853889766 * value)
	{
		___idTable_13 = value;
		Il2CppCodeGenWriteBarrier((&___idTable_13), value);
	}

	inline static int32_t get_offset_of_nameCache_14() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameCache_14)); }
	inline XmlNameEntryCache_t2890546907 * get_nameCache_14() const { return ___nameCache_14; }
	inline XmlNameEntryCache_t2890546907 ** get_address_of_nameCache_14() { return &___nameCache_14; }
	inline void set_nameCache_14(XmlNameEntryCache_t2890546907 * value)
	{
		___nameCache_14 = value;
		Il2CppCodeGenWriteBarrier((&___nameCache_14), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_15() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___lastLinkedChild_15)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_15() const { return ___lastLinkedChild_15; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_15() { return &___lastLinkedChild_15; }
	inline void set_lastLinkedChild_15(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_15 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_15), value);
	}

	inline static int32_t get_offset_of_schemas_16() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemas_16)); }
	inline XmlSchemaSet_t266093086 * get_schemas_16() const { return ___schemas_16; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_16() { return &___schemas_16; }
	inline void set_schemas_16(XmlSchemaSet_t266093086 * value)
	{
		___schemas_16 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_16), value);
	}

	inline static int32_t get_offset_of_schemaInfo_17() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemaInfo_17)); }
	inline RuntimeObject* get_schemaInfo_17() const { return ___schemaInfo_17; }
	inline RuntimeObject** get_address_of_schemaInfo_17() { return &___schemaInfo_17; }
	inline void set_schemaInfo_17(RuntimeObject* value)
	{
		___schemaInfo_17 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_17), value);
	}

	inline static int32_t get_offset_of_loadMode_18() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___loadMode_18)); }
	inline bool get_loadMode_18() const { return ___loadMode_18; }
	inline bool* get_address_of_loadMode_18() { return &___loadMode_18; }
	inline void set_loadMode_18(bool value)
	{
		___loadMode_18 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_19() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanged_19)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanged_19() const { return ___NodeChanged_19; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanged_19() { return &___NodeChanged_19; }
	inline void set_NodeChanged_19(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanged_19), value);
	}

	inline static int32_t get_offset_of_NodeChanging_20() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanging_20)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanging_20() const { return ___NodeChanging_20; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanging_20() { return &___NodeChanging_20; }
	inline void set_NodeChanging_20(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanging_20 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanging_20), value);
	}

	inline static int32_t get_offset_of_NodeInserted_21() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserted_21)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserted_21() const { return ___NodeInserted_21; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserted_21() { return &___NodeInserted_21; }
	inline void set_NodeInserted_21(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserted_21 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserted_21), value);
	}

	inline static int32_t get_offset_of_NodeInserting_22() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserting_22)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserting_22() const { return ___NodeInserting_22; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserting_22() { return &___NodeInserting_22; }
	inline void set_NodeInserting_22(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserting_22 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserting_22), value);
	}

	inline static int32_t get_offset_of_NodeRemoved_23() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoved_23)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoved_23() const { return ___NodeRemoved_23; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoved_23() { return &___NodeRemoved_23; }
	inline void set_NodeRemoved_23(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoved_23 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoved_23), value);
	}

	inline static int32_t get_offset_of_NodeRemoving_24() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoving_24)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoving_24() const { return ___NodeRemoving_24; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoving_24() { return &___NodeRemoving_24; }
	inline void set_NodeRemoving_24(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoving_24 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoving_24), value);
	}
};

struct XmlDocument_t2837193595_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t3940880105* ___optimal_create_types_5;

public:
	inline static int32_t get_offset_of_optimal_create_types_5() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___optimal_create_types_5)); }
	inline TypeU5BU5D_t3940880105* get_optimal_create_types_5() const { return ___optimal_create_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_optimal_create_types_5() { return &___optimal_create_types_5; }
	inline void set_optimal_create_types_5(TypeU5BU5D_t3940880105* value)
	{
		___optimal_create_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___optimal_create_types_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOCUMENT_T2837193595_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef XMLLINKEDNODE_T1437094927_H
#define XMLLINKEDNODE_T1437094927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t1437094927  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::nextSibling
	XmlLinkedNode_t1437094927 * ___nextSibling_5;

public:
	inline static int32_t get_offset_of_nextSibling_5() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t1437094927, ___nextSibling_5)); }
	inline XmlLinkedNode_t1437094927 * get_nextSibling_5() const { return ___nextSibling_5; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_nextSibling_5() { return &___nextSibling_5; }
	inline void set_nextSibling_5(XmlLinkedNode_t1437094927 * value)
	{
		___nextSibling_5 = value;
		Il2CppCodeGenWriteBarrier((&___nextSibling_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLINKEDNODE_T1437094927_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef LINETYPE_T4214648469_H
#define LINETYPE_T4214648469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/LineType
struct  LineType_t4214648469 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LineType_t4214648469, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINETYPE_T4214648469_H
#ifndef CONTACTPOINT2D_T3390240644_H
#define CONTACTPOINT2D_T3390240644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3390240644 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t2156229523  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t2156229523  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Point_0)); }
	inline Vector2_t2156229523  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t2156229523 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t2156229523  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Normal_1)); }
	inline Vector2_t2156229523  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t2156229523  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_RelativeVelocity_2)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T3390240644_H
#ifndef CHARACTERVALIDATION_T4051914437_H
#define CHARACTERVALIDATION_T4051914437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t4051914437 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterValidation_t4051914437, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERVALIDATION_T4051914437_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef INPUTTYPE_T1770400679_H
#define INPUTTYPE_T1770400679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/InputType
struct  InputType_t1770400679 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputType_t1770400679, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTTYPE_T1770400679_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T1787303396_H
#ifndef RIGIDBODYTYPE2D_T1648102732_H
#define RIGIDBODYTYPE2D_T1648102732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RigidbodyType2D
struct  RigidbodyType2D_t1648102732 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RigidbodyType2D_t1648102732, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODYTYPE2D_T1648102732_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef CURSORMODE_T4010326064_H
#define CURSORMODE_T4010326064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorMode
struct  CursorMode_t4010326064 
{
public:
	// System.Int32 UnityEngine.CursorMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorMode_t4010326064, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSORMODE_T4010326064_H
#ifndef TOGGLETRANSITION_T3587297765_H
#define TOGGLETRANSITION_T3587297765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleTransition
struct  ToggleTransition_t3587297765 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ToggleTransition_t3587297765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLETRANSITION_T3587297765_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef U3CWRONGGUESSHINTU3EC__ITERATOR3_T338836333_H
#define U3CWRONGGUESSHINTU3EC__ITERATOR3_T338836333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WIFINetworkManager/<wrongGuessHint>c__Iterator3
struct  U3CwrongGuessHintU3Ec__Iterator3_t338836333  : public RuntimeObject
{
public:
	// UnityEngine.UI.Image WIFINetworkManager/<wrongGuessHint>c__Iterator3::k
	Image_t2670269651 * ___k_0;
	// UnityEngine.Color WIFINetworkManager/<wrongGuessHint>c__Iterator3::<x>__0
	Color_t2555686324  ___U3CxU3E__0_1;
	// System.Object WIFINetworkManager/<wrongGuessHint>c__Iterator3::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean WIFINetworkManager/<wrongGuessHint>c__Iterator3::$disposing
	bool ___U24disposing_3;
	// System.Int32 WIFINetworkManager/<wrongGuessHint>c__Iterator3::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_k_0() { return static_cast<int32_t>(offsetof(U3CwrongGuessHintU3Ec__Iterator3_t338836333, ___k_0)); }
	inline Image_t2670269651 * get_k_0() const { return ___k_0; }
	inline Image_t2670269651 ** get_address_of_k_0() { return &___k_0; }
	inline void set_k_0(Image_t2670269651 * value)
	{
		___k_0 = value;
		Il2CppCodeGenWriteBarrier((&___k_0), value);
	}

	inline static int32_t get_offset_of_U3CxU3E__0_1() { return static_cast<int32_t>(offsetof(U3CwrongGuessHintU3Ec__Iterator3_t338836333, ___U3CxU3E__0_1)); }
	inline Color_t2555686324  get_U3CxU3E__0_1() const { return ___U3CxU3E__0_1; }
	inline Color_t2555686324 * get_address_of_U3CxU3E__0_1() { return &___U3CxU3E__0_1; }
	inline void set_U3CxU3E__0_1(Color_t2555686324  value)
	{
		___U3CxU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CwrongGuessHintU3Ec__Iterator3_t338836333, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CwrongGuessHintU3Ec__Iterator3_t338836333, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CwrongGuessHintU3Ec__Iterator3_t338836333, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWRONGGUESSHINTU3EC__ITERATOR3_T338836333_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef XMLELEMENT_T561603118_H
#define XMLELEMENT_T561603118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlElement
struct  XmlElement_t561603118  : public XmlLinkedNode_t1437094927
{
public:
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_t2316283784 * ___attributes_6;
	// System.Xml.XmlNameEntry System.Xml.XmlElement::name
	XmlNameEntry_t1073099671 * ___name_7;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_8;
	// System.Boolean System.Xml.XmlElement::isNotEmpty
	bool ___isNotEmpty_9;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlElement::schemaInfo
	RuntimeObject* ___schemaInfo_10;

public:
	inline static int32_t get_offset_of_attributes_6() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___attributes_6)); }
	inline XmlAttributeCollection_t2316283784 * get_attributes_6() const { return ___attributes_6; }
	inline XmlAttributeCollection_t2316283784 ** get_address_of_attributes_6() { return &___attributes_6; }
	inline void set_attributes_6(XmlAttributeCollection_t2316283784 * value)
	{
		___attributes_6 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___name_7)); }
	inline XmlNameEntry_t1073099671 * get_name_7() const { return ___name_7; }
	inline XmlNameEntry_t1073099671 ** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(XmlNameEntry_t1073099671 * value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_8() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___lastLinkedChild_8)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_8() const { return ___lastLinkedChild_8; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_8() { return &___lastLinkedChild_8; }
	inline void set_lastLinkedChild_8(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_8 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_8), value);
	}

	inline static int32_t get_offset_of_isNotEmpty_9() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___isNotEmpty_9)); }
	inline bool get_isNotEmpty_9() const { return ___isNotEmpty_9; }
	inline bool* get_address_of_isNotEmpty_9() { return &___isNotEmpty_9; }
	inline void set_isNotEmpty_9(bool value)
	{
		___isNotEmpty_9 = value;
	}

	inline static int32_t get_offset_of_schemaInfo_10() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___schemaInfo_10)); }
	inline RuntimeObject* get_schemaInfo_10() const { return ___schemaInfo_10; }
	inline RuntimeObject** get_address_of_schemaInfo_10() { return &___schemaInfo_10; }
	inline void set_schemaInfo_10(RuntimeObject* value)
	{
		___schemaInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLELEMENT_T561603118_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef CACHEDCONTACTPOINTS2D_T2523437281_H
#define CACHEDCONTACTPOINTS2D_T2523437281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CachedContactPoints2D
struct  CachedContactPoints2D_t2523437281 
{
public:
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact0
	ContactPoint2D_t3390240644  ___m_Contact0_0;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact1
	ContactPoint2D_t3390240644  ___m_Contact1_1;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact2
	ContactPoint2D_t3390240644  ___m_Contact2_2;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact3
	ContactPoint2D_t3390240644  ___m_Contact3_3;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact4
	ContactPoint2D_t3390240644  ___m_Contact4_4;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact5
	ContactPoint2D_t3390240644  ___m_Contact5_5;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact6
	ContactPoint2D_t3390240644  ___m_Contact6_6;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact7
	ContactPoint2D_t3390240644  ___m_Contact7_7;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact8
	ContactPoint2D_t3390240644  ___m_Contact8_8;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact9
	ContactPoint2D_t3390240644  ___m_Contact9_9;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact10
	ContactPoint2D_t3390240644  ___m_Contact10_10;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact11
	ContactPoint2D_t3390240644  ___m_Contact11_11;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact12
	ContactPoint2D_t3390240644  ___m_Contact12_12;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact13
	ContactPoint2D_t3390240644  ___m_Contact13_13;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact14
	ContactPoint2D_t3390240644  ___m_Contact14_14;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact15
	ContactPoint2D_t3390240644  ___m_Contact15_15;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact16
	ContactPoint2D_t3390240644  ___m_Contact16_16;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact17
	ContactPoint2D_t3390240644  ___m_Contact17_17;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact18
	ContactPoint2D_t3390240644  ___m_Contact18_18;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact19
	ContactPoint2D_t3390240644  ___m_Contact19_19;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact20
	ContactPoint2D_t3390240644  ___m_Contact20_20;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact21
	ContactPoint2D_t3390240644  ___m_Contact21_21;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact22
	ContactPoint2D_t3390240644  ___m_Contact22_22;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact23
	ContactPoint2D_t3390240644  ___m_Contact23_23;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact24
	ContactPoint2D_t3390240644  ___m_Contact24_24;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact25
	ContactPoint2D_t3390240644  ___m_Contact25_25;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact26
	ContactPoint2D_t3390240644  ___m_Contact26_26;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact27
	ContactPoint2D_t3390240644  ___m_Contact27_27;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact28
	ContactPoint2D_t3390240644  ___m_Contact28_28;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact29
	ContactPoint2D_t3390240644  ___m_Contact29_29;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact30
	ContactPoint2D_t3390240644  ___m_Contact30_30;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact31
	ContactPoint2D_t3390240644  ___m_Contact31_31;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact32
	ContactPoint2D_t3390240644  ___m_Contact32_32;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact33
	ContactPoint2D_t3390240644  ___m_Contact33_33;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact34
	ContactPoint2D_t3390240644  ___m_Contact34_34;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact35
	ContactPoint2D_t3390240644  ___m_Contact35_35;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact36
	ContactPoint2D_t3390240644  ___m_Contact36_36;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact37
	ContactPoint2D_t3390240644  ___m_Contact37_37;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact38
	ContactPoint2D_t3390240644  ___m_Contact38_38;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact39
	ContactPoint2D_t3390240644  ___m_Contact39_39;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact40
	ContactPoint2D_t3390240644  ___m_Contact40_40;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact41
	ContactPoint2D_t3390240644  ___m_Contact41_41;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact42
	ContactPoint2D_t3390240644  ___m_Contact42_42;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact43
	ContactPoint2D_t3390240644  ___m_Contact43_43;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact44
	ContactPoint2D_t3390240644  ___m_Contact44_44;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact45
	ContactPoint2D_t3390240644  ___m_Contact45_45;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact46
	ContactPoint2D_t3390240644  ___m_Contact46_46;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact47
	ContactPoint2D_t3390240644  ___m_Contact47_47;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact48
	ContactPoint2D_t3390240644  ___m_Contact48_48;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact49
	ContactPoint2D_t3390240644  ___m_Contact49_49;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact50
	ContactPoint2D_t3390240644  ___m_Contact50_50;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact51
	ContactPoint2D_t3390240644  ___m_Contact51_51;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact52
	ContactPoint2D_t3390240644  ___m_Contact52_52;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact53
	ContactPoint2D_t3390240644  ___m_Contact53_53;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact54
	ContactPoint2D_t3390240644  ___m_Contact54_54;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact55
	ContactPoint2D_t3390240644  ___m_Contact55_55;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact56
	ContactPoint2D_t3390240644  ___m_Contact56_56;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact57
	ContactPoint2D_t3390240644  ___m_Contact57_57;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact58
	ContactPoint2D_t3390240644  ___m_Contact58_58;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact59
	ContactPoint2D_t3390240644  ___m_Contact59_59;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact60
	ContactPoint2D_t3390240644  ___m_Contact60_60;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact61
	ContactPoint2D_t3390240644  ___m_Contact61_61;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact62
	ContactPoint2D_t3390240644  ___m_Contact62_62;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact63
	ContactPoint2D_t3390240644  ___m_Contact63_63;

public:
	inline static int32_t get_offset_of_m_Contact0_0() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact0_0)); }
	inline ContactPoint2D_t3390240644  get_m_Contact0_0() const { return ___m_Contact0_0; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact0_0() { return &___m_Contact0_0; }
	inline void set_m_Contact0_0(ContactPoint2D_t3390240644  value)
	{
		___m_Contact0_0 = value;
	}

	inline static int32_t get_offset_of_m_Contact1_1() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact1_1)); }
	inline ContactPoint2D_t3390240644  get_m_Contact1_1() const { return ___m_Contact1_1; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact1_1() { return &___m_Contact1_1; }
	inline void set_m_Contact1_1(ContactPoint2D_t3390240644  value)
	{
		___m_Contact1_1 = value;
	}

	inline static int32_t get_offset_of_m_Contact2_2() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact2_2)); }
	inline ContactPoint2D_t3390240644  get_m_Contact2_2() const { return ___m_Contact2_2; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact2_2() { return &___m_Contact2_2; }
	inline void set_m_Contact2_2(ContactPoint2D_t3390240644  value)
	{
		___m_Contact2_2 = value;
	}

	inline static int32_t get_offset_of_m_Contact3_3() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact3_3)); }
	inline ContactPoint2D_t3390240644  get_m_Contact3_3() const { return ___m_Contact3_3; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact3_3() { return &___m_Contact3_3; }
	inline void set_m_Contact3_3(ContactPoint2D_t3390240644  value)
	{
		___m_Contact3_3 = value;
	}

	inline static int32_t get_offset_of_m_Contact4_4() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact4_4)); }
	inline ContactPoint2D_t3390240644  get_m_Contact4_4() const { return ___m_Contact4_4; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact4_4() { return &___m_Contact4_4; }
	inline void set_m_Contact4_4(ContactPoint2D_t3390240644  value)
	{
		___m_Contact4_4 = value;
	}

	inline static int32_t get_offset_of_m_Contact5_5() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact5_5)); }
	inline ContactPoint2D_t3390240644  get_m_Contact5_5() const { return ___m_Contact5_5; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact5_5() { return &___m_Contact5_5; }
	inline void set_m_Contact5_5(ContactPoint2D_t3390240644  value)
	{
		___m_Contact5_5 = value;
	}

	inline static int32_t get_offset_of_m_Contact6_6() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact6_6)); }
	inline ContactPoint2D_t3390240644  get_m_Contact6_6() const { return ___m_Contact6_6; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact6_6() { return &___m_Contact6_6; }
	inline void set_m_Contact6_6(ContactPoint2D_t3390240644  value)
	{
		___m_Contact6_6 = value;
	}

	inline static int32_t get_offset_of_m_Contact7_7() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact7_7)); }
	inline ContactPoint2D_t3390240644  get_m_Contact7_7() const { return ___m_Contact7_7; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact7_7() { return &___m_Contact7_7; }
	inline void set_m_Contact7_7(ContactPoint2D_t3390240644  value)
	{
		___m_Contact7_7 = value;
	}

	inline static int32_t get_offset_of_m_Contact8_8() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact8_8)); }
	inline ContactPoint2D_t3390240644  get_m_Contact8_8() const { return ___m_Contact8_8; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact8_8() { return &___m_Contact8_8; }
	inline void set_m_Contact8_8(ContactPoint2D_t3390240644  value)
	{
		___m_Contact8_8 = value;
	}

	inline static int32_t get_offset_of_m_Contact9_9() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact9_9)); }
	inline ContactPoint2D_t3390240644  get_m_Contact9_9() const { return ___m_Contact9_9; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact9_9() { return &___m_Contact9_9; }
	inline void set_m_Contact9_9(ContactPoint2D_t3390240644  value)
	{
		___m_Contact9_9 = value;
	}

	inline static int32_t get_offset_of_m_Contact10_10() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact10_10)); }
	inline ContactPoint2D_t3390240644  get_m_Contact10_10() const { return ___m_Contact10_10; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact10_10() { return &___m_Contact10_10; }
	inline void set_m_Contact10_10(ContactPoint2D_t3390240644  value)
	{
		___m_Contact10_10 = value;
	}

	inline static int32_t get_offset_of_m_Contact11_11() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact11_11)); }
	inline ContactPoint2D_t3390240644  get_m_Contact11_11() const { return ___m_Contact11_11; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact11_11() { return &___m_Contact11_11; }
	inline void set_m_Contact11_11(ContactPoint2D_t3390240644  value)
	{
		___m_Contact11_11 = value;
	}

	inline static int32_t get_offset_of_m_Contact12_12() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact12_12)); }
	inline ContactPoint2D_t3390240644  get_m_Contact12_12() const { return ___m_Contact12_12; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact12_12() { return &___m_Contact12_12; }
	inline void set_m_Contact12_12(ContactPoint2D_t3390240644  value)
	{
		___m_Contact12_12 = value;
	}

	inline static int32_t get_offset_of_m_Contact13_13() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact13_13)); }
	inline ContactPoint2D_t3390240644  get_m_Contact13_13() const { return ___m_Contact13_13; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact13_13() { return &___m_Contact13_13; }
	inline void set_m_Contact13_13(ContactPoint2D_t3390240644  value)
	{
		___m_Contact13_13 = value;
	}

	inline static int32_t get_offset_of_m_Contact14_14() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact14_14)); }
	inline ContactPoint2D_t3390240644  get_m_Contact14_14() const { return ___m_Contact14_14; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact14_14() { return &___m_Contact14_14; }
	inline void set_m_Contact14_14(ContactPoint2D_t3390240644  value)
	{
		___m_Contact14_14 = value;
	}

	inline static int32_t get_offset_of_m_Contact15_15() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact15_15)); }
	inline ContactPoint2D_t3390240644  get_m_Contact15_15() const { return ___m_Contact15_15; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact15_15() { return &___m_Contact15_15; }
	inline void set_m_Contact15_15(ContactPoint2D_t3390240644  value)
	{
		___m_Contact15_15 = value;
	}

	inline static int32_t get_offset_of_m_Contact16_16() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact16_16)); }
	inline ContactPoint2D_t3390240644  get_m_Contact16_16() const { return ___m_Contact16_16; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact16_16() { return &___m_Contact16_16; }
	inline void set_m_Contact16_16(ContactPoint2D_t3390240644  value)
	{
		___m_Contact16_16 = value;
	}

	inline static int32_t get_offset_of_m_Contact17_17() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact17_17)); }
	inline ContactPoint2D_t3390240644  get_m_Contact17_17() const { return ___m_Contact17_17; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact17_17() { return &___m_Contact17_17; }
	inline void set_m_Contact17_17(ContactPoint2D_t3390240644  value)
	{
		___m_Contact17_17 = value;
	}

	inline static int32_t get_offset_of_m_Contact18_18() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact18_18)); }
	inline ContactPoint2D_t3390240644  get_m_Contact18_18() const { return ___m_Contact18_18; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact18_18() { return &___m_Contact18_18; }
	inline void set_m_Contact18_18(ContactPoint2D_t3390240644  value)
	{
		___m_Contact18_18 = value;
	}

	inline static int32_t get_offset_of_m_Contact19_19() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact19_19)); }
	inline ContactPoint2D_t3390240644  get_m_Contact19_19() const { return ___m_Contact19_19; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact19_19() { return &___m_Contact19_19; }
	inline void set_m_Contact19_19(ContactPoint2D_t3390240644  value)
	{
		___m_Contact19_19 = value;
	}

	inline static int32_t get_offset_of_m_Contact20_20() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact20_20)); }
	inline ContactPoint2D_t3390240644  get_m_Contact20_20() const { return ___m_Contact20_20; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact20_20() { return &___m_Contact20_20; }
	inline void set_m_Contact20_20(ContactPoint2D_t3390240644  value)
	{
		___m_Contact20_20 = value;
	}

	inline static int32_t get_offset_of_m_Contact21_21() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact21_21)); }
	inline ContactPoint2D_t3390240644  get_m_Contact21_21() const { return ___m_Contact21_21; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact21_21() { return &___m_Contact21_21; }
	inline void set_m_Contact21_21(ContactPoint2D_t3390240644  value)
	{
		___m_Contact21_21 = value;
	}

	inline static int32_t get_offset_of_m_Contact22_22() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact22_22)); }
	inline ContactPoint2D_t3390240644  get_m_Contact22_22() const { return ___m_Contact22_22; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact22_22() { return &___m_Contact22_22; }
	inline void set_m_Contact22_22(ContactPoint2D_t3390240644  value)
	{
		___m_Contact22_22 = value;
	}

	inline static int32_t get_offset_of_m_Contact23_23() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact23_23)); }
	inline ContactPoint2D_t3390240644  get_m_Contact23_23() const { return ___m_Contact23_23; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact23_23() { return &___m_Contact23_23; }
	inline void set_m_Contact23_23(ContactPoint2D_t3390240644  value)
	{
		___m_Contact23_23 = value;
	}

	inline static int32_t get_offset_of_m_Contact24_24() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact24_24)); }
	inline ContactPoint2D_t3390240644  get_m_Contact24_24() const { return ___m_Contact24_24; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact24_24() { return &___m_Contact24_24; }
	inline void set_m_Contact24_24(ContactPoint2D_t3390240644  value)
	{
		___m_Contact24_24 = value;
	}

	inline static int32_t get_offset_of_m_Contact25_25() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact25_25)); }
	inline ContactPoint2D_t3390240644  get_m_Contact25_25() const { return ___m_Contact25_25; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact25_25() { return &___m_Contact25_25; }
	inline void set_m_Contact25_25(ContactPoint2D_t3390240644  value)
	{
		___m_Contact25_25 = value;
	}

	inline static int32_t get_offset_of_m_Contact26_26() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact26_26)); }
	inline ContactPoint2D_t3390240644  get_m_Contact26_26() const { return ___m_Contact26_26; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact26_26() { return &___m_Contact26_26; }
	inline void set_m_Contact26_26(ContactPoint2D_t3390240644  value)
	{
		___m_Contact26_26 = value;
	}

	inline static int32_t get_offset_of_m_Contact27_27() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact27_27)); }
	inline ContactPoint2D_t3390240644  get_m_Contact27_27() const { return ___m_Contact27_27; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact27_27() { return &___m_Contact27_27; }
	inline void set_m_Contact27_27(ContactPoint2D_t3390240644  value)
	{
		___m_Contact27_27 = value;
	}

	inline static int32_t get_offset_of_m_Contact28_28() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact28_28)); }
	inline ContactPoint2D_t3390240644  get_m_Contact28_28() const { return ___m_Contact28_28; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact28_28() { return &___m_Contact28_28; }
	inline void set_m_Contact28_28(ContactPoint2D_t3390240644  value)
	{
		___m_Contact28_28 = value;
	}

	inline static int32_t get_offset_of_m_Contact29_29() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact29_29)); }
	inline ContactPoint2D_t3390240644  get_m_Contact29_29() const { return ___m_Contact29_29; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact29_29() { return &___m_Contact29_29; }
	inline void set_m_Contact29_29(ContactPoint2D_t3390240644  value)
	{
		___m_Contact29_29 = value;
	}

	inline static int32_t get_offset_of_m_Contact30_30() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact30_30)); }
	inline ContactPoint2D_t3390240644  get_m_Contact30_30() const { return ___m_Contact30_30; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact30_30() { return &___m_Contact30_30; }
	inline void set_m_Contact30_30(ContactPoint2D_t3390240644  value)
	{
		___m_Contact30_30 = value;
	}

	inline static int32_t get_offset_of_m_Contact31_31() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact31_31)); }
	inline ContactPoint2D_t3390240644  get_m_Contact31_31() const { return ___m_Contact31_31; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact31_31() { return &___m_Contact31_31; }
	inline void set_m_Contact31_31(ContactPoint2D_t3390240644  value)
	{
		___m_Contact31_31 = value;
	}

	inline static int32_t get_offset_of_m_Contact32_32() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact32_32)); }
	inline ContactPoint2D_t3390240644  get_m_Contact32_32() const { return ___m_Contact32_32; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact32_32() { return &___m_Contact32_32; }
	inline void set_m_Contact32_32(ContactPoint2D_t3390240644  value)
	{
		___m_Contact32_32 = value;
	}

	inline static int32_t get_offset_of_m_Contact33_33() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact33_33)); }
	inline ContactPoint2D_t3390240644  get_m_Contact33_33() const { return ___m_Contact33_33; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact33_33() { return &___m_Contact33_33; }
	inline void set_m_Contact33_33(ContactPoint2D_t3390240644  value)
	{
		___m_Contact33_33 = value;
	}

	inline static int32_t get_offset_of_m_Contact34_34() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact34_34)); }
	inline ContactPoint2D_t3390240644  get_m_Contact34_34() const { return ___m_Contact34_34; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact34_34() { return &___m_Contact34_34; }
	inline void set_m_Contact34_34(ContactPoint2D_t3390240644  value)
	{
		___m_Contact34_34 = value;
	}

	inline static int32_t get_offset_of_m_Contact35_35() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact35_35)); }
	inline ContactPoint2D_t3390240644  get_m_Contact35_35() const { return ___m_Contact35_35; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact35_35() { return &___m_Contact35_35; }
	inline void set_m_Contact35_35(ContactPoint2D_t3390240644  value)
	{
		___m_Contact35_35 = value;
	}

	inline static int32_t get_offset_of_m_Contact36_36() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact36_36)); }
	inline ContactPoint2D_t3390240644  get_m_Contact36_36() const { return ___m_Contact36_36; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact36_36() { return &___m_Contact36_36; }
	inline void set_m_Contact36_36(ContactPoint2D_t3390240644  value)
	{
		___m_Contact36_36 = value;
	}

	inline static int32_t get_offset_of_m_Contact37_37() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact37_37)); }
	inline ContactPoint2D_t3390240644  get_m_Contact37_37() const { return ___m_Contact37_37; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact37_37() { return &___m_Contact37_37; }
	inline void set_m_Contact37_37(ContactPoint2D_t3390240644  value)
	{
		___m_Contact37_37 = value;
	}

	inline static int32_t get_offset_of_m_Contact38_38() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact38_38)); }
	inline ContactPoint2D_t3390240644  get_m_Contact38_38() const { return ___m_Contact38_38; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact38_38() { return &___m_Contact38_38; }
	inline void set_m_Contact38_38(ContactPoint2D_t3390240644  value)
	{
		___m_Contact38_38 = value;
	}

	inline static int32_t get_offset_of_m_Contact39_39() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact39_39)); }
	inline ContactPoint2D_t3390240644  get_m_Contact39_39() const { return ___m_Contact39_39; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact39_39() { return &___m_Contact39_39; }
	inline void set_m_Contact39_39(ContactPoint2D_t3390240644  value)
	{
		___m_Contact39_39 = value;
	}

	inline static int32_t get_offset_of_m_Contact40_40() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact40_40)); }
	inline ContactPoint2D_t3390240644  get_m_Contact40_40() const { return ___m_Contact40_40; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact40_40() { return &___m_Contact40_40; }
	inline void set_m_Contact40_40(ContactPoint2D_t3390240644  value)
	{
		___m_Contact40_40 = value;
	}

	inline static int32_t get_offset_of_m_Contact41_41() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact41_41)); }
	inline ContactPoint2D_t3390240644  get_m_Contact41_41() const { return ___m_Contact41_41; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact41_41() { return &___m_Contact41_41; }
	inline void set_m_Contact41_41(ContactPoint2D_t3390240644  value)
	{
		___m_Contact41_41 = value;
	}

	inline static int32_t get_offset_of_m_Contact42_42() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact42_42)); }
	inline ContactPoint2D_t3390240644  get_m_Contact42_42() const { return ___m_Contact42_42; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact42_42() { return &___m_Contact42_42; }
	inline void set_m_Contact42_42(ContactPoint2D_t3390240644  value)
	{
		___m_Contact42_42 = value;
	}

	inline static int32_t get_offset_of_m_Contact43_43() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact43_43)); }
	inline ContactPoint2D_t3390240644  get_m_Contact43_43() const { return ___m_Contact43_43; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact43_43() { return &___m_Contact43_43; }
	inline void set_m_Contact43_43(ContactPoint2D_t3390240644  value)
	{
		___m_Contact43_43 = value;
	}

	inline static int32_t get_offset_of_m_Contact44_44() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact44_44)); }
	inline ContactPoint2D_t3390240644  get_m_Contact44_44() const { return ___m_Contact44_44; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact44_44() { return &___m_Contact44_44; }
	inline void set_m_Contact44_44(ContactPoint2D_t3390240644  value)
	{
		___m_Contact44_44 = value;
	}

	inline static int32_t get_offset_of_m_Contact45_45() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact45_45)); }
	inline ContactPoint2D_t3390240644  get_m_Contact45_45() const { return ___m_Contact45_45; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact45_45() { return &___m_Contact45_45; }
	inline void set_m_Contact45_45(ContactPoint2D_t3390240644  value)
	{
		___m_Contact45_45 = value;
	}

	inline static int32_t get_offset_of_m_Contact46_46() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact46_46)); }
	inline ContactPoint2D_t3390240644  get_m_Contact46_46() const { return ___m_Contact46_46; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact46_46() { return &___m_Contact46_46; }
	inline void set_m_Contact46_46(ContactPoint2D_t3390240644  value)
	{
		___m_Contact46_46 = value;
	}

	inline static int32_t get_offset_of_m_Contact47_47() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact47_47)); }
	inline ContactPoint2D_t3390240644  get_m_Contact47_47() const { return ___m_Contact47_47; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact47_47() { return &___m_Contact47_47; }
	inline void set_m_Contact47_47(ContactPoint2D_t3390240644  value)
	{
		___m_Contact47_47 = value;
	}

	inline static int32_t get_offset_of_m_Contact48_48() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact48_48)); }
	inline ContactPoint2D_t3390240644  get_m_Contact48_48() const { return ___m_Contact48_48; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact48_48() { return &___m_Contact48_48; }
	inline void set_m_Contact48_48(ContactPoint2D_t3390240644  value)
	{
		___m_Contact48_48 = value;
	}

	inline static int32_t get_offset_of_m_Contact49_49() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact49_49)); }
	inline ContactPoint2D_t3390240644  get_m_Contact49_49() const { return ___m_Contact49_49; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact49_49() { return &___m_Contact49_49; }
	inline void set_m_Contact49_49(ContactPoint2D_t3390240644  value)
	{
		___m_Contact49_49 = value;
	}

	inline static int32_t get_offset_of_m_Contact50_50() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact50_50)); }
	inline ContactPoint2D_t3390240644  get_m_Contact50_50() const { return ___m_Contact50_50; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact50_50() { return &___m_Contact50_50; }
	inline void set_m_Contact50_50(ContactPoint2D_t3390240644  value)
	{
		___m_Contact50_50 = value;
	}

	inline static int32_t get_offset_of_m_Contact51_51() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact51_51)); }
	inline ContactPoint2D_t3390240644  get_m_Contact51_51() const { return ___m_Contact51_51; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact51_51() { return &___m_Contact51_51; }
	inline void set_m_Contact51_51(ContactPoint2D_t3390240644  value)
	{
		___m_Contact51_51 = value;
	}

	inline static int32_t get_offset_of_m_Contact52_52() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact52_52)); }
	inline ContactPoint2D_t3390240644  get_m_Contact52_52() const { return ___m_Contact52_52; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact52_52() { return &___m_Contact52_52; }
	inline void set_m_Contact52_52(ContactPoint2D_t3390240644  value)
	{
		___m_Contact52_52 = value;
	}

	inline static int32_t get_offset_of_m_Contact53_53() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact53_53)); }
	inline ContactPoint2D_t3390240644  get_m_Contact53_53() const { return ___m_Contact53_53; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact53_53() { return &___m_Contact53_53; }
	inline void set_m_Contact53_53(ContactPoint2D_t3390240644  value)
	{
		___m_Contact53_53 = value;
	}

	inline static int32_t get_offset_of_m_Contact54_54() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact54_54)); }
	inline ContactPoint2D_t3390240644  get_m_Contact54_54() const { return ___m_Contact54_54; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact54_54() { return &___m_Contact54_54; }
	inline void set_m_Contact54_54(ContactPoint2D_t3390240644  value)
	{
		___m_Contact54_54 = value;
	}

	inline static int32_t get_offset_of_m_Contact55_55() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact55_55)); }
	inline ContactPoint2D_t3390240644  get_m_Contact55_55() const { return ___m_Contact55_55; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact55_55() { return &___m_Contact55_55; }
	inline void set_m_Contact55_55(ContactPoint2D_t3390240644  value)
	{
		___m_Contact55_55 = value;
	}

	inline static int32_t get_offset_of_m_Contact56_56() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact56_56)); }
	inline ContactPoint2D_t3390240644  get_m_Contact56_56() const { return ___m_Contact56_56; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact56_56() { return &___m_Contact56_56; }
	inline void set_m_Contact56_56(ContactPoint2D_t3390240644  value)
	{
		___m_Contact56_56 = value;
	}

	inline static int32_t get_offset_of_m_Contact57_57() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact57_57)); }
	inline ContactPoint2D_t3390240644  get_m_Contact57_57() const { return ___m_Contact57_57; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact57_57() { return &___m_Contact57_57; }
	inline void set_m_Contact57_57(ContactPoint2D_t3390240644  value)
	{
		___m_Contact57_57 = value;
	}

	inline static int32_t get_offset_of_m_Contact58_58() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact58_58)); }
	inline ContactPoint2D_t3390240644  get_m_Contact58_58() const { return ___m_Contact58_58; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact58_58() { return &___m_Contact58_58; }
	inline void set_m_Contact58_58(ContactPoint2D_t3390240644  value)
	{
		___m_Contact58_58 = value;
	}

	inline static int32_t get_offset_of_m_Contact59_59() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact59_59)); }
	inline ContactPoint2D_t3390240644  get_m_Contact59_59() const { return ___m_Contact59_59; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact59_59() { return &___m_Contact59_59; }
	inline void set_m_Contact59_59(ContactPoint2D_t3390240644  value)
	{
		___m_Contact59_59 = value;
	}

	inline static int32_t get_offset_of_m_Contact60_60() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact60_60)); }
	inline ContactPoint2D_t3390240644  get_m_Contact60_60() const { return ___m_Contact60_60; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact60_60() { return &___m_Contact60_60; }
	inline void set_m_Contact60_60(ContactPoint2D_t3390240644  value)
	{
		___m_Contact60_60 = value;
	}

	inline static int32_t get_offset_of_m_Contact61_61() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact61_61)); }
	inline ContactPoint2D_t3390240644  get_m_Contact61_61() const { return ___m_Contact61_61; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact61_61() { return &___m_Contact61_61; }
	inline void set_m_Contact61_61(ContactPoint2D_t3390240644  value)
	{
		___m_Contact61_61 = value;
	}

	inline static int32_t get_offset_of_m_Contact62_62() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact62_62)); }
	inline ContactPoint2D_t3390240644  get_m_Contact62_62() const { return ___m_Contact62_62; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact62_62() { return &___m_Contact62_62; }
	inline void set_m_Contact62_62(ContactPoint2D_t3390240644  value)
	{
		___m_Contact62_62 = value;
	}

	inline static int32_t get_offset_of_m_Contact63_63() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact63_63)); }
	inline ContactPoint2D_t3390240644  get_m_Contact63_63() const { return ___m_Contact63_63; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact63_63() { return &___m_Contact63_63; }
	inline void set_m_Contact63_63(ContactPoint2D_t3390240644  value)
	{
		___m_Contact63_63 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDCONTACTPOINTS2D_T2523437281_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.CachedContactPoints2D UnityEngine.Collision2D::m_CachedContactPoints
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContactArray
	ContactPoint2DU5BU5D_t96683501* ___m_LegacyContactArray_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_4)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_CachedContactPoints_7() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_CachedContactPoints_7)); }
	inline CachedContactPoints2D_t2523437281  get_m_CachedContactPoints_7() const { return ___m_CachedContactPoints_7; }
	inline CachedContactPoints2D_t2523437281 * get_address_of_m_CachedContactPoints_7() { return &___m_CachedContactPoints_7; }
	inline void set_m_CachedContactPoints_7(CachedContactPoints2D_t2523437281  value)
	{
		___m_CachedContactPoints_7 = value;
	}

	inline static int32_t get_offset_of_m_LegacyContactArray_8() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_LegacyContactArray_8)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_LegacyContactArray_8() const { return ___m_LegacyContactArray_8; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_LegacyContactArray_8() { return &___m_LegacyContactArray_8; }
	inline void set_m_LegacyContactArray_8(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_LegacyContactArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_LegacyContactArray_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	ContactPoint2D_t3390240644 * ___m_LegacyContactArray_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	ContactPoint2D_t3390240644 * ___m_LegacyContactArray_8;
};
#endif // COLLISION2D_T2842956331_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef FUNC_1_T3822001908_H
#define FUNC_1_T3822001908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t3822001908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3822001908_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef QUESTMANAGER_T588401851_H
#define QUESTMANAGER_T588401851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestManager
struct  QuestManager_t588401851  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject QuestManager::triggers
	GameObject_t1113636619 * ___triggers_3;
	// UnityEngine.GameObject QuestManager::questBuildFire
	GameObject_t1113636619 * ___questBuildFire_4;
	// UnityEngine.GameObject QuestManager::questShootBirds
	GameObject_t1113636619 * ___questShootBirds_5;
	// System.Boolean QuestManager::hasPlayedFirstCutscene
	bool ___hasPlayedFirstCutscene_6;
	// System.Boolean QuestManager::hasPlayedSecondCutscene
	bool ___hasPlayedSecondCutscene_7;
	// System.Boolean QuestManager::canEnterCastle
	bool ___canEnterCastle_8;
	// System.Boolean QuestManager::hasTakenTheQuestionaire
	bool ___hasTakenTheQuestionaire_9;
	// System.Boolean QuestManager::hasClearedQuestBuildFire
	bool ___hasClearedQuestBuildFire_10;
	// System.Boolean QuestManager::hasClearedQuestShootBirds
	bool ___hasClearedQuestShootBirds_11;
	// System.Boolean QuestManager::hasFinishedWifi
	bool ___hasFinishedWifi_12;
	// System.Boolean QuestManager::hasFinishedPhish
	bool ___hasFinishedPhish_13;
	// System.Boolean QuestManager::hasFinishedSpymon
	bool ___hasFinishedSpymon_14;
	// System.Int32 QuestManager::feedCount
	int32_t ___feedCount_15;
	// System.Int32 QuestManager::forteMultiplier
	int32_t ___forteMultiplier_16;
	// System.String QuestManager::playerName
	String_t* ___playerName_17;

public:
	inline static int32_t get_offset_of_triggers_3() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___triggers_3)); }
	inline GameObject_t1113636619 * get_triggers_3() const { return ___triggers_3; }
	inline GameObject_t1113636619 ** get_address_of_triggers_3() { return &___triggers_3; }
	inline void set_triggers_3(GameObject_t1113636619 * value)
	{
		___triggers_3 = value;
		Il2CppCodeGenWriteBarrier((&___triggers_3), value);
	}

	inline static int32_t get_offset_of_questBuildFire_4() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___questBuildFire_4)); }
	inline GameObject_t1113636619 * get_questBuildFire_4() const { return ___questBuildFire_4; }
	inline GameObject_t1113636619 ** get_address_of_questBuildFire_4() { return &___questBuildFire_4; }
	inline void set_questBuildFire_4(GameObject_t1113636619 * value)
	{
		___questBuildFire_4 = value;
		Il2CppCodeGenWriteBarrier((&___questBuildFire_4), value);
	}

	inline static int32_t get_offset_of_questShootBirds_5() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___questShootBirds_5)); }
	inline GameObject_t1113636619 * get_questShootBirds_5() const { return ___questShootBirds_5; }
	inline GameObject_t1113636619 ** get_address_of_questShootBirds_5() { return &___questShootBirds_5; }
	inline void set_questShootBirds_5(GameObject_t1113636619 * value)
	{
		___questShootBirds_5 = value;
		Il2CppCodeGenWriteBarrier((&___questShootBirds_5), value);
	}

	inline static int32_t get_offset_of_hasPlayedFirstCutscene_6() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___hasPlayedFirstCutscene_6)); }
	inline bool get_hasPlayedFirstCutscene_6() const { return ___hasPlayedFirstCutscene_6; }
	inline bool* get_address_of_hasPlayedFirstCutscene_6() { return &___hasPlayedFirstCutscene_6; }
	inline void set_hasPlayedFirstCutscene_6(bool value)
	{
		___hasPlayedFirstCutscene_6 = value;
	}

	inline static int32_t get_offset_of_hasPlayedSecondCutscene_7() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___hasPlayedSecondCutscene_7)); }
	inline bool get_hasPlayedSecondCutscene_7() const { return ___hasPlayedSecondCutscene_7; }
	inline bool* get_address_of_hasPlayedSecondCutscene_7() { return &___hasPlayedSecondCutscene_7; }
	inline void set_hasPlayedSecondCutscene_7(bool value)
	{
		___hasPlayedSecondCutscene_7 = value;
	}

	inline static int32_t get_offset_of_canEnterCastle_8() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___canEnterCastle_8)); }
	inline bool get_canEnterCastle_8() const { return ___canEnterCastle_8; }
	inline bool* get_address_of_canEnterCastle_8() { return &___canEnterCastle_8; }
	inline void set_canEnterCastle_8(bool value)
	{
		___canEnterCastle_8 = value;
	}

	inline static int32_t get_offset_of_hasTakenTheQuestionaire_9() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___hasTakenTheQuestionaire_9)); }
	inline bool get_hasTakenTheQuestionaire_9() const { return ___hasTakenTheQuestionaire_9; }
	inline bool* get_address_of_hasTakenTheQuestionaire_9() { return &___hasTakenTheQuestionaire_9; }
	inline void set_hasTakenTheQuestionaire_9(bool value)
	{
		___hasTakenTheQuestionaire_9 = value;
	}

	inline static int32_t get_offset_of_hasClearedQuestBuildFire_10() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___hasClearedQuestBuildFire_10)); }
	inline bool get_hasClearedQuestBuildFire_10() const { return ___hasClearedQuestBuildFire_10; }
	inline bool* get_address_of_hasClearedQuestBuildFire_10() { return &___hasClearedQuestBuildFire_10; }
	inline void set_hasClearedQuestBuildFire_10(bool value)
	{
		___hasClearedQuestBuildFire_10 = value;
	}

	inline static int32_t get_offset_of_hasClearedQuestShootBirds_11() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___hasClearedQuestShootBirds_11)); }
	inline bool get_hasClearedQuestShootBirds_11() const { return ___hasClearedQuestShootBirds_11; }
	inline bool* get_address_of_hasClearedQuestShootBirds_11() { return &___hasClearedQuestShootBirds_11; }
	inline void set_hasClearedQuestShootBirds_11(bool value)
	{
		___hasClearedQuestShootBirds_11 = value;
	}

	inline static int32_t get_offset_of_hasFinishedWifi_12() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___hasFinishedWifi_12)); }
	inline bool get_hasFinishedWifi_12() const { return ___hasFinishedWifi_12; }
	inline bool* get_address_of_hasFinishedWifi_12() { return &___hasFinishedWifi_12; }
	inline void set_hasFinishedWifi_12(bool value)
	{
		___hasFinishedWifi_12 = value;
	}

	inline static int32_t get_offset_of_hasFinishedPhish_13() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___hasFinishedPhish_13)); }
	inline bool get_hasFinishedPhish_13() const { return ___hasFinishedPhish_13; }
	inline bool* get_address_of_hasFinishedPhish_13() { return &___hasFinishedPhish_13; }
	inline void set_hasFinishedPhish_13(bool value)
	{
		___hasFinishedPhish_13 = value;
	}

	inline static int32_t get_offset_of_hasFinishedSpymon_14() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___hasFinishedSpymon_14)); }
	inline bool get_hasFinishedSpymon_14() const { return ___hasFinishedSpymon_14; }
	inline bool* get_address_of_hasFinishedSpymon_14() { return &___hasFinishedSpymon_14; }
	inline void set_hasFinishedSpymon_14(bool value)
	{
		___hasFinishedSpymon_14 = value;
	}

	inline static int32_t get_offset_of_feedCount_15() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___feedCount_15)); }
	inline int32_t get_feedCount_15() const { return ___feedCount_15; }
	inline int32_t* get_address_of_feedCount_15() { return &___feedCount_15; }
	inline void set_feedCount_15(int32_t value)
	{
		___feedCount_15 = value;
	}

	inline static int32_t get_offset_of_forteMultiplier_16() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___forteMultiplier_16)); }
	inline int32_t get_forteMultiplier_16() const { return ___forteMultiplier_16; }
	inline int32_t* get_address_of_forteMultiplier_16() { return &___forteMultiplier_16; }
	inline void set_forteMultiplier_16(int32_t value)
	{
		___forteMultiplier_16 = value;
	}

	inline static int32_t get_offset_of_playerName_17() { return static_cast<int32_t>(offsetof(QuestManager_t588401851, ___playerName_17)); }
	inline String_t* get_playerName_17() const { return ___playerName_17; }
	inline String_t** get_address_of_playerName_17() { return &___playerName_17; }
	inline void set_playerName_17(String_t* value)
	{
		___playerName_17 = value;
		Il2CppCodeGenWriteBarrier((&___playerName_17), value);
	}
};

struct QuestManager_t588401851_StaticFields
{
public:
	// QuestManager QuestManager::instance
	QuestManager_t588401851 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(QuestManager_t588401851_StaticFields, ___instance_2)); }
	inline QuestManager_t588401851 * get_instance_2() const { return ___instance_2; }
	inline QuestManager_t588401851 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(QuestManager_t588401851 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUESTMANAGER_T588401851_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef ADDSCORE_T369591168_H
#define ADDSCORE_T369591168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AddScore
struct  AddScore_t369591168  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject AddScore::privacyRoot
	GameObject_t1113636619 * ___privacyRoot_2;
	// UnityEngine.UI.Text AddScore::scoreText
	Text_t1901882714 * ___scoreText_3;
	// System.Int32 AddScore::score
	int32_t ___score_4;

public:
	inline static int32_t get_offset_of_privacyRoot_2() { return static_cast<int32_t>(offsetof(AddScore_t369591168, ___privacyRoot_2)); }
	inline GameObject_t1113636619 * get_privacyRoot_2() const { return ___privacyRoot_2; }
	inline GameObject_t1113636619 ** get_address_of_privacyRoot_2() { return &___privacyRoot_2; }
	inline void set_privacyRoot_2(GameObject_t1113636619 * value)
	{
		___privacyRoot_2 = value;
		Il2CppCodeGenWriteBarrier((&___privacyRoot_2), value);
	}

	inline static int32_t get_offset_of_scoreText_3() { return static_cast<int32_t>(offsetof(AddScore_t369591168, ___scoreText_3)); }
	inline Text_t1901882714 * get_scoreText_3() const { return ___scoreText_3; }
	inline Text_t1901882714 ** get_address_of_scoreText_3() { return &___scoreText_3; }
	inline void set_scoreText_3(Text_t1901882714 * value)
	{
		___scoreText_3 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_3), value);
	}

	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(AddScore_t369591168, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDSCORE_T369591168_H
#ifndef SORTLAYER_T2536625413_H
#define SORTLAYER_T2536625413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sortLayer
struct  sortLayer_t2536625413  : public MonoBehaviour_t3962482529
{
public:
	// System.String sortLayer::sortLayerName
	String_t* ___sortLayerName_2;

public:
	inline static int32_t get_offset_of_sortLayerName_2() { return static_cast<int32_t>(offsetof(sortLayer_t2536625413, ___sortLayerName_2)); }
	inline String_t* get_sortLayerName_2() const { return ___sortLayerName_2; }
	inline String_t** get_address_of_sortLayerName_2() { return &___sortLayerName_2; }
	inline void set_sortLayerName_2(String_t* value)
	{
		___sortLayerName_2 = value;
		Il2CppCodeGenWriteBarrier((&___sortLayerName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTLAYER_T2536625413_H
#ifndef PLAYERMOVEMENT_T2731566919_H
#define PLAYERMOVEMENT_T2731566919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t2731566919  : public MonoBehaviour_t3962482529
{
public:
	// System.Single PlayerMovement::playerSpeed
	float ___playerSpeed_2;
	// System.Int32 PlayerMovement::playerJumpPower
	int32_t ___playerJumpPower_3;
	// System.Single PlayerMovement::moveX
	float ___moveX_4;
	// UnityEngine.Animator PlayerMovement::playerAnim
	Animator_t434523843 * ___playerAnim_5;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_6;
	// System.Single PlayerMovement::jumpForce
	float ___jumpForce_7;
	// UnityEngine.Vector3 PlayerMovement::origPos
	Vector3_t3722313464  ___origPos_8;
	// UnityEngine.GameObject PlayerMovement::rightBullet
	GameObject_t1113636619 * ___rightBullet_9;
	// UnityEngine.GameObject PlayerMovement::leftBullet
	GameObject_t1113636619 * ___leftBullet_10;
	// UnityEngine.Transform PlayerMovement::firePosLeft
	Transform_t3600365921 * ___firePosLeft_11;
	// UnityEngine.Transform PlayerMovement::firePosRight
	Transform_t3600365921 * ___firePosRight_12;
	// System.Boolean PlayerMovement::canShoot
	bool ___canShoot_13;
	// UnityEngine.GameObject PlayerMovement::gunHint
	GameObject_t1113636619 * ___gunHint_14;
	// UnityEngine.AudioSource PlayerMovement::canvasAudio
	AudioSource_t3935305588 * ___canvasAudio_15;
	// UnityEngine.AudioClip PlayerMovement::shoot
	AudioClip_t3680889665 * ___shoot_16;
	// UnityEngine.AudioClip PlayerMovement::gb
	AudioClip_t3680889665 * ___gb_17;
	// System.Single PlayerMovement::horizontal
	float ___horizontal_18;
	// System.Boolean PlayerMovement::isShooting
	bool ___isShooting_19;

public:
	inline static int32_t get_offset_of_playerSpeed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___playerSpeed_2)); }
	inline float get_playerSpeed_2() const { return ___playerSpeed_2; }
	inline float* get_address_of_playerSpeed_2() { return &___playerSpeed_2; }
	inline void set_playerSpeed_2(float value)
	{
		___playerSpeed_2 = value;
	}

	inline static int32_t get_offset_of_playerJumpPower_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___playerJumpPower_3)); }
	inline int32_t get_playerJumpPower_3() const { return ___playerJumpPower_3; }
	inline int32_t* get_address_of_playerJumpPower_3() { return &___playerJumpPower_3; }
	inline void set_playerJumpPower_3(int32_t value)
	{
		___playerJumpPower_3 = value;
	}

	inline static int32_t get_offset_of_moveX_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___moveX_4)); }
	inline float get_moveX_4() const { return ___moveX_4; }
	inline float* get_address_of_moveX_4() { return &___moveX_4; }
	inline void set_moveX_4(float value)
	{
		___moveX_4 = value;
	}

	inline static int32_t get_offset_of_playerAnim_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___playerAnim_5)); }
	inline Animator_t434523843 * get_playerAnim_5() const { return ___playerAnim_5; }
	inline Animator_t434523843 ** get_address_of_playerAnim_5() { return &___playerAnim_5; }
	inline void set_playerAnim_5(Animator_t434523843 * value)
	{
		___playerAnim_5 = value;
		Il2CppCodeGenWriteBarrier((&___playerAnim_5), value);
	}

	inline static int32_t get_offset_of_isGrounded_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___isGrounded_6)); }
	inline bool get_isGrounded_6() const { return ___isGrounded_6; }
	inline bool* get_address_of_isGrounded_6() { return &___isGrounded_6; }
	inline void set_isGrounded_6(bool value)
	{
		___isGrounded_6 = value;
	}

	inline static int32_t get_offset_of_jumpForce_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___jumpForce_7)); }
	inline float get_jumpForce_7() const { return ___jumpForce_7; }
	inline float* get_address_of_jumpForce_7() { return &___jumpForce_7; }
	inline void set_jumpForce_7(float value)
	{
		___jumpForce_7 = value;
	}

	inline static int32_t get_offset_of_origPos_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___origPos_8)); }
	inline Vector3_t3722313464  get_origPos_8() const { return ___origPos_8; }
	inline Vector3_t3722313464 * get_address_of_origPos_8() { return &___origPos_8; }
	inline void set_origPos_8(Vector3_t3722313464  value)
	{
		___origPos_8 = value;
	}

	inline static int32_t get_offset_of_rightBullet_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___rightBullet_9)); }
	inline GameObject_t1113636619 * get_rightBullet_9() const { return ___rightBullet_9; }
	inline GameObject_t1113636619 ** get_address_of_rightBullet_9() { return &___rightBullet_9; }
	inline void set_rightBullet_9(GameObject_t1113636619 * value)
	{
		___rightBullet_9 = value;
		Il2CppCodeGenWriteBarrier((&___rightBullet_9), value);
	}

	inline static int32_t get_offset_of_leftBullet_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___leftBullet_10)); }
	inline GameObject_t1113636619 * get_leftBullet_10() const { return ___leftBullet_10; }
	inline GameObject_t1113636619 ** get_address_of_leftBullet_10() { return &___leftBullet_10; }
	inline void set_leftBullet_10(GameObject_t1113636619 * value)
	{
		___leftBullet_10 = value;
		Il2CppCodeGenWriteBarrier((&___leftBullet_10), value);
	}

	inline static int32_t get_offset_of_firePosLeft_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___firePosLeft_11)); }
	inline Transform_t3600365921 * get_firePosLeft_11() const { return ___firePosLeft_11; }
	inline Transform_t3600365921 ** get_address_of_firePosLeft_11() { return &___firePosLeft_11; }
	inline void set_firePosLeft_11(Transform_t3600365921 * value)
	{
		___firePosLeft_11 = value;
		Il2CppCodeGenWriteBarrier((&___firePosLeft_11), value);
	}

	inline static int32_t get_offset_of_firePosRight_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___firePosRight_12)); }
	inline Transform_t3600365921 * get_firePosRight_12() const { return ___firePosRight_12; }
	inline Transform_t3600365921 ** get_address_of_firePosRight_12() { return &___firePosRight_12; }
	inline void set_firePosRight_12(Transform_t3600365921 * value)
	{
		___firePosRight_12 = value;
		Il2CppCodeGenWriteBarrier((&___firePosRight_12), value);
	}

	inline static int32_t get_offset_of_canShoot_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___canShoot_13)); }
	inline bool get_canShoot_13() const { return ___canShoot_13; }
	inline bool* get_address_of_canShoot_13() { return &___canShoot_13; }
	inline void set_canShoot_13(bool value)
	{
		___canShoot_13 = value;
	}

	inline static int32_t get_offset_of_gunHint_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___gunHint_14)); }
	inline GameObject_t1113636619 * get_gunHint_14() const { return ___gunHint_14; }
	inline GameObject_t1113636619 ** get_address_of_gunHint_14() { return &___gunHint_14; }
	inline void set_gunHint_14(GameObject_t1113636619 * value)
	{
		___gunHint_14 = value;
		Il2CppCodeGenWriteBarrier((&___gunHint_14), value);
	}

	inline static int32_t get_offset_of_canvasAudio_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___canvasAudio_15)); }
	inline AudioSource_t3935305588 * get_canvasAudio_15() const { return ___canvasAudio_15; }
	inline AudioSource_t3935305588 ** get_address_of_canvasAudio_15() { return &___canvasAudio_15; }
	inline void set_canvasAudio_15(AudioSource_t3935305588 * value)
	{
		___canvasAudio_15 = value;
		Il2CppCodeGenWriteBarrier((&___canvasAudio_15), value);
	}

	inline static int32_t get_offset_of_shoot_16() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___shoot_16)); }
	inline AudioClip_t3680889665 * get_shoot_16() const { return ___shoot_16; }
	inline AudioClip_t3680889665 ** get_address_of_shoot_16() { return &___shoot_16; }
	inline void set_shoot_16(AudioClip_t3680889665 * value)
	{
		___shoot_16 = value;
		Il2CppCodeGenWriteBarrier((&___shoot_16), value);
	}

	inline static int32_t get_offset_of_gb_17() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___gb_17)); }
	inline AudioClip_t3680889665 * get_gb_17() const { return ___gb_17; }
	inline AudioClip_t3680889665 ** get_address_of_gb_17() { return &___gb_17; }
	inline void set_gb_17(AudioClip_t3680889665 * value)
	{
		___gb_17 = value;
		Il2CppCodeGenWriteBarrier((&___gb_17), value);
	}

	inline static int32_t get_offset_of_horizontal_18() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___horizontal_18)); }
	inline float get_horizontal_18() const { return ___horizontal_18; }
	inline float* get_address_of_horizontal_18() { return &___horizontal_18; }
	inline void set_horizontal_18(float value)
	{
		___horizontal_18 = value;
	}

	inline static int32_t get_offset_of_isShooting_19() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___isShooting_19)); }
	inline bool get_isShooting_19() const { return ___isShooting_19; }
	inline bool* get_address_of_isShooting_19() { return &___isShooting_19; }
	inline void set_isShooting_19(bool value)
	{
		___isShooting_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERMOVEMENT_T2731566919_H
#ifndef SHURIKEN_T1718313326_H
#define SHURIKEN_T1718313326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// shuriken
struct  shuriken_t1718313326  : public MonoBehaviour_t3962482529
{
public:
	// System.Single shuriken::speed
	float ___speed_2;
	// UnityEngine.Rigidbody2D shuriken::rb
	Rigidbody2D_t939494601 * ___rb_3;
	// UnityEngine.Transform shuriken::target
	Transform_t3600365921 * ___target_4;
	// UnityEngine.Transform shuriken::source
	Transform_t3600365921 * ___source_5;
	// UnityEngine.Vector3 shuriken::angle
	Vector3_t3722313464  ___angle_6;
	// UnityEngine.GameObject shuriken::canvas
	GameObject_t1113636619 * ___canvas_7;
	// UnityEngine.Transform shuriken::player
	Transform_t3600365921 * ___player_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(shuriken_t1718313326, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(shuriken_t1718313326, ___rb_3)); }
	inline Rigidbody2D_t939494601 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody2D_t939494601 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier((&___rb_3), value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(shuriken_t1718313326, ___target_4)); }
	inline Transform_t3600365921 * get_target_4() const { return ___target_4; }
	inline Transform_t3600365921 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t3600365921 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((&___target_4), value);
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(shuriken_t1718313326, ___source_5)); }
	inline Transform_t3600365921 * get_source_5() const { return ___source_5; }
	inline Transform_t3600365921 ** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(Transform_t3600365921 * value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier((&___source_5), value);
	}

	inline static int32_t get_offset_of_angle_6() { return static_cast<int32_t>(offsetof(shuriken_t1718313326, ___angle_6)); }
	inline Vector3_t3722313464  get_angle_6() const { return ___angle_6; }
	inline Vector3_t3722313464 * get_address_of_angle_6() { return &___angle_6; }
	inline void set_angle_6(Vector3_t3722313464  value)
	{
		___angle_6 = value;
	}

	inline static int32_t get_offset_of_canvas_7() { return static_cast<int32_t>(offsetof(shuriken_t1718313326, ___canvas_7)); }
	inline GameObject_t1113636619 * get_canvas_7() const { return ___canvas_7; }
	inline GameObject_t1113636619 ** get_address_of_canvas_7() { return &___canvas_7; }
	inline void set_canvas_7(GameObject_t1113636619 * value)
	{
		___canvas_7 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_7), value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(shuriken_t1718313326, ___player_8)); }
	inline Transform_t3600365921 * get_player_8() const { return ___player_8; }
	inline Transform_t3600365921 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Transform_t3600365921 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((&___player_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHURIKEN_T1718313326_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef SECONDCUTSCENE_T524439269_H
#define SECONDCUTSCENE_T524439269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SecondCutscene
struct  SecondCutscene_t524439269  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject SecondCutscene::parent
	GameObject_t1113636619 * ___parent_2;
	// UnityEngine.AudioSource SecondCutscene::cameraAudio
	AudioSource_t3935305588 * ___cameraAudio_3;
	// UnityEngine.AudioSource SecondCutscene::canvasAudio
	AudioSource_t3935305588 * ___canvasAudio_4;
	// UnityEngine.AudioClip SecondCutscene::castleTheme
	AudioClip_t3680889665 * ___castleTheme_5;
	// UnityEngine.GameObject SecondCutscene::brocoleetBubble
	GameObject_t1113636619 * ___brocoleetBubble_6;
	// UnityEngine.GameObject SecondCutscene::tutrleBubble
	GameObject_t1113636619 * ___tutrleBubble_7;
	// UnityEngine.AudioClip SecondCutscene::brocoBeep
	AudioClip_t3680889665 * ___brocoBeep_8;
	// UnityEngine.AudioClip SecondCutscene::turtleBeep
	AudioClip_t3680889665 * ___turtleBeep_9;
	// UnityEngine.UI.Text SecondCutscene::BrocoleeText
	Text_t1901882714 * ___BrocoleeText_10;
	// UnityEngine.UI.Text SecondCutscene::turtleText
	Text_t1901882714 * ___turtleText_11;
	// System.String[] SecondCutscene::brocoleetScript
	StringU5BU5D_t1281789340* ___brocoleetScript_12;
	// System.String[] SecondCutscene::turtletScript
	StringU5BU5D_t1281789340* ___turtletScript_13;
	// UnityEngine.Animator SecondCutscene::turle
	Animator_t434523843 * ___turle_14;
	// UnityEngine.Animator SecondCutscene::brocol33t
	Animator_t434523843 * ___brocol33t_15;
	// UnityEngine.GameObject SecondCutscene::fade
	GameObject_t1113636619 * ___fade_16;
	// UnityEngine.GameObject SecondCutscene::platformer
	GameObject_t1113636619 * ___platformer_17;
	// UnityEngine.AudioClip SecondCutscene::night
	AudioClip_t3680889665 * ___night_18;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___parent_2)); }
	inline GameObject_t1113636619 * get_parent_2() const { return ___parent_2; }
	inline GameObject_t1113636619 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(GameObject_t1113636619 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((&___parent_2), value);
	}

	inline static int32_t get_offset_of_cameraAudio_3() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___cameraAudio_3)); }
	inline AudioSource_t3935305588 * get_cameraAudio_3() const { return ___cameraAudio_3; }
	inline AudioSource_t3935305588 ** get_address_of_cameraAudio_3() { return &___cameraAudio_3; }
	inline void set_cameraAudio_3(AudioSource_t3935305588 * value)
	{
		___cameraAudio_3 = value;
		Il2CppCodeGenWriteBarrier((&___cameraAudio_3), value);
	}

	inline static int32_t get_offset_of_canvasAudio_4() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___canvasAudio_4)); }
	inline AudioSource_t3935305588 * get_canvasAudio_4() const { return ___canvasAudio_4; }
	inline AudioSource_t3935305588 ** get_address_of_canvasAudio_4() { return &___canvasAudio_4; }
	inline void set_canvasAudio_4(AudioSource_t3935305588 * value)
	{
		___canvasAudio_4 = value;
		Il2CppCodeGenWriteBarrier((&___canvasAudio_4), value);
	}

	inline static int32_t get_offset_of_castleTheme_5() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___castleTheme_5)); }
	inline AudioClip_t3680889665 * get_castleTheme_5() const { return ___castleTheme_5; }
	inline AudioClip_t3680889665 ** get_address_of_castleTheme_5() { return &___castleTheme_5; }
	inline void set_castleTheme_5(AudioClip_t3680889665 * value)
	{
		___castleTheme_5 = value;
		Il2CppCodeGenWriteBarrier((&___castleTheme_5), value);
	}

	inline static int32_t get_offset_of_brocoleetBubble_6() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___brocoleetBubble_6)); }
	inline GameObject_t1113636619 * get_brocoleetBubble_6() const { return ___brocoleetBubble_6; }
	inline GameObject_t1113636619 ** get_address_of_brocoleetBubble_6() { return &___brocoleetBubble_6; }
	inline void set_brocoleetBubble_6(GameObject_t1113636619 * value)
	{
		___brocoleetBubble_6 = value;
		Il2CppCodeGenWriteBarrier((&___brocoleetBubble_6), value);
	}

	inline static int32_t get_offset_of_tutrleBubble_7() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___tutrleBubble_7)); }
	inline GameObject_t1113636619 * get_tutrleBubble_7() const { return ___tutrleBubble_7; }
	inline GameObject_t1113636619 ** get_address_of_tutrleBubble_7() { return &___tutrleBubble_7; }
	inline void set_tutrleBubble_7(GameObject_t1113636619 * value)
	{
		___tutrleBubble_7 = value;
		Il2CppCodeGenWriteBarrier((&___tutrleBubble_7), value);
	}

	inline static int32_t get_offset_of_brocoBeep_8() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___brocoBeep_8)); }
	inline AudioClip_t3680889665 * get_brocoBeep_8() const { return ___brocoBeep_8; }
	inline AudioClip_t3680889665 ** get_address_of_brocoBeep_8() { return &___brocoBeep_8; }
	inline void set_brocoBeep_8(AudioClip_t3680889665 * value)
	{
		___brocoBeep_8 = value;
		Il2CppCodeGenWriteBarrier((&___brocoBeep_8), value);
	}

	inline static int32_t get_offset_of_turtleBeep_9() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___turtleBeep_9)); }
	inline AudioClip_t3680889665 * get_turtleBeep_9() const { return ___turtleBeep_9; }
	inline AudioClip_t3680889665 ** get_address_of_turtleBeep_9() { return &___turtleBeep_9; }
	inline void set_turtleBeep_9(AudioClip_t3680889665 * value)
	{
		___turtleBeep_9 = value;
		Il2CppCodeGenWriteBarrier((&___turtleBeep_9), value);
	}

	inline static int32_t get_offset_of_BrocoleeText_10() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___BrocoleeText_10)); }
	inline Text_t1901882714 * get_BrocoleeText_10() const { return ___BrocoleeText_10; }
	inline Text_t1901882714 ** get_address_of_BrocoleeText_10() { return &___BrocoleeText_10; }
	inline void set_BrocoleeText_10(Text_t1901882714 * value)
	{
		___BrocoleeText_10 = value;
		Il2CppCodeGenWriteBarrier((&___BrocoleeText_10), value);
	}

	inline static int32_t get_offset_of_turtleText_11() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___turtleText_11)); }
	inline Text_t1901882714 * get_turtleText_11() const { return ___turtleText_11; }
	inline Text_t1901882714 ** get_address_of_turtleText_11() { return &___turtleText_11; }
	inline void set_turtleText_11(Text_t1901882714 * value)
	{
		___turtleText_11 = value;
		Il2CppCodeGenWriteBarrier((&___turtleText_11), value);
	}

	inline static int32_t get_offset_of_brocoleetScript_12() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___brocoleetScript_12)); }
	inline StringU5BU5D_t1281789340* get_brocoleetScript_12() const { return ___brocoleetScript_12; }
	inline StringU5BU5D_t1281789340** get_address_of_brocoleetScript_12() { return &___brocoleetScript_12; }
	inline void set_brocoleetScript_12(StringU5BU5D_t1281789340* value)
	{
		___brocoleetScript_12 = value;
		Il2CppCodeGenWriteBarrier((&___brocoleetScript_12), value);
	}

	inline static int32_t get_offset_of_turtletScript_13() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___turtletScript_13)); }
	inline StringU5BU5D_t1281789340* get_turtletScript_13() const { return ___turtletScript_13; }
	inline StringU5BU5D_t1281789340** get_address_of_turtletScript_13() { return &___turtletScript_13; }
	inline void set_turtletScript_13(StringU5BU5D_t1281789340* value)
	{
		___turtletScript_13 = value;
		Il2CppCodeGenWriteBarrier((&___turtletScript_13), value);
	}

	inline static int32_t get_offset_of_turle_14() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___turle_14)); }
	inline Animator_t434523843 * get_turle_14() const { return ___turle_14; }
	inline Animator_t434523843 ** get_address_of_turle_14() { return &___turle_14; }
	inline void set_turle_14(Animator_t434523843 * value)
	{
		___turle_14 = value;
		Il2CppCodeGenWriteBarrier((&___turle_14), value);
	}

	inline static int32_t get_offset_of_brocol33t_15() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___brocol33t_15)); }
	inline Animator_t434523843 * get_brocol33t_15() const { return ___brocol33t_15; }
	inline Animator_t434523843 ** get_address_of_brocol33t_15() { return &___brocol33t_15; }
	inline void set_brocol33t_15(Animator_t434523843 * value)
	{
		___brocol33t_15 = value;
		Il2CppCodeGenWriteBarrier((&___brocol33t_15), value);
	}

	inline static int32_t get_offset_of_fade_16() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___fade_16)); }
	inline GameObject_t1113636619 * get_fade_16() const { return ___fade_16; }
	inline GameObject_t1113636619 ** get_address_of_fade_16() { return &___fade_16; }
	inline void set_fade_16(GameObject_t1113636619 * value)
	{
		___fade_16 = value;
		Il2CppCodeGenWriteBarrier((&___fade_16), value);
	}

	inline static int32_t get_offset_of_platformer_17() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___platformer_17)); }
	inline GameObject_t1113636619 * get_platformer_17() const { return ___platformer_17; }
	inline GameObject_t1113636619 ** get_address_of_platformer_17() { return &___platformer_17; }
	inline void set_platformer_17(GameObject_t1113636619 * value)
	{
		___platformer_17 = value;
		Il2CppCodeGenWriteBarrier((&___platformer_17), value);
	}

	inline static int32_t get_offset_of_night_18() { return static_cast<int32_t>(offsetof(SecondCutscene_t524439269, ___night_18)); }
	inline AudioClip_t3680889665 * get_night_18() const { return ___night_18; }
	inline AudioClip_t3680889665 ** get_address_of_night_18() { return &___night_18; }
	inline void set_night_18(AudioClip_t3680889665 * value)
	{
		___night_18 = value;
		Il2CppCodeGenWriteBarrier((&___night_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECONDCUTSCENE_T524439269_H
#ifndef SIDEWALL_T2083452592_H
#define SIDEWALL_T2083452592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SideWall
struct  SideWall_t2083452592  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIDEWALL_T2083452592_H
#ifndef DIGITALGLITCH_T3418514828_H
#define DIGITALGLITCH_T3418514828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kino.DigitalGlitch
struct  DigitalGlitch_t3418514828  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Kino.DigitalGlitch::_intensity
	float ____intensity_2;
	// UnityEngine.Shader Kino.DigitalGlitch::_shader
	Shader_t4151988712 * ____shader_3;
	// UnityEngine.Material Kino.DigitalGlitch::_material
	Material_t340375123 * ____material_4;
	// UnityEngine.Texture2D Kino.DigitalGlitch::_noiseTexture
	Texture2D_t3840446185 * ____noiseTexture_5;
	// UnityEngine.RenderTexture Kino.DigitalGlitch::_trashFrame1
	RenderTexture_t2108887433 * ____trashFrame1_6;
	// UnityEngine.RenderTexture Kino.DigitalGlitch::_trashFrame2
	RenderTexture_t2108887433 * ____trashFrame2_7;

public:
	inline static int32_t get_offset_of__intensity_2() { return static_cast<int32_t>(offsetof(DigitalGlitch_t3418514828, ____intensity_2)); }
	inline float get__intensity_2() const { return ____intensity_2; }
	inline float* get_address_of__intensity_2() { return &____intensity_2; }
	inline void set__intensity_2(float value)
	{
		____intensity_2 = value;
	}

	inline static int32_t get_offset_of__shader_3() { return static_cast<int32_t>(offsetof(DigitalGlitch_t3418514828, ____shader_3)); }
	inline Shader_t4151988712 * get__shader_3() const { return ____shader_3; }
	inline Shader_t4151988712 ** get_address_of__shader_3() { return &____shader_3; }
	inline void set__shader_3(Shader_t4151988712 * value)
	{
		____shader_3 = value;
		Il2CppCodeGenWriteBarrier((&____shader_3), value);
	}

	inline static int32_t get_offset_of__material_4() { return static_cast<int32_t>(offsetof(DigitalGlitch_t3418514828, ____material_4)); }
	inline Material_t340375123 * get__material_4() const { return ____material_4; }
	inline Material_t340375123 ** get_address_of__material_4() { return &____material_4; }
	inline void set__material_4(Material_t340375123 * value)
	{
		____material_4 = value;
		Il2CppCodeGenWriteBarrier((&____material_4), value);
	}

	inline static int32_t get_offset_of__noiseTexture_5() { return static_cast<int32_t>(offsetof(DigitalGlitch_t3418514828, ____noiseTexture_5)); }
	inline Texture2D_t3840446185 * get__noiseTexture_5() const { return ____noiseTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of__noiseTexture_5() { return &____noiseTexture_5; }
	inline void set__noiseTexture_5(Texture2D_t3840446185 * value)
	{
		____noiseTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&____noiseTexture_5), value);
	}

	inline static int32_t get_offset_of__trashFrame1_6() { return static_cast<int32_t>(offsetof(DigitalGlitch_t3418514828, ____trashFrame1_6)); }
	inline RenderTexture_t2108887433 * get__trashFrame1_6() const { return ____trashFrame1_6; }
	inline RenderTexture_t2108887433 ** get_address_of__trashFrame1_6() { return &____trashFrame1_6; }
	inline void set__trashFrame1_6(RenderTexture_t2108887433 * value)
	{
		____trashFrame1_6 = value;
		Il2CppCodeGenWriteBarrier((&____trashFrame1_6), value);
	}

	inline static int32_t get_offset_of__trashFrame2_7() { return static_cast<int32_t>(offsetof(DigitalGlitch_t3418514828, ____trashFrame2_7)); }
	inline RenderTexture_t2108887433 * get__trashFrame2_7() const { return ____trashFrame2_7; }
	inline RenderTexture_t2108887433 ** get_address_of__trashFrame2_7() { return &____trashFrame2_7; }
	inline void set__trashFrame2_7(RenderTexture_t2108887433 * value)
	{
		____trashFrame2_7 = value;
		Il2CppCodeGenWriteBarrier((&____trashFrame2_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGITALGLITCH_T3418514828_H
#ifndef ANALOGGLITCH_T1106357039_H
#define ANALOGGLITCH_T1106357039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kino.AnalogGlitch
struct  AnalogGlitch_t1106357039  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Kino.AnalogGlitch::_scanLineJitter
	float ____scanLineJitter_2;
	// System.Single Kino.AnalogGlitch::_verticalJump
	float ____verticalJump_3;
	// System.Single Kino.AnalogGlitch::_horizontalShake
	float ____horizontalShake_4;
	// System.Single Kino.AnalogGlitch::_colorDrift
	float ____colorDrift_5;
	// UnityEngine.Shader Kino.AnalogGlitch::_shader
	Shader_t4151988712 * ____shader_6;
	// UnityEngine.Material Kino.AnalogGlitch::_material
	Material_t340375123 * ____material_7;
	// System.Single Kino.AnalogGlitch::_verticalJumpTime
	float ____verticalJumpTime_8;

public:
	inline static int32_t get_offset_of__scanLineJitter_2() { return static_cast<int32_t>(offsetof(AnalogGlitch_t1106357039, ____scanLineJitter_2)); }
	inline float get__scanLineJitter_2() const { return ____scanLineJitter_2; }
	inline float* get_address_of__scanLineJitter_2() { return &____scanLineJitter_2; }
	inline void set__scanLineJitter_2(float value)
	{
		____scanLineJitter_2 = value;
	}

	inline static int32_t get_offset_of__verticalJump_3() { return static_cast<int32_t>(offsetof(AnalogGlitch_t1106357039, ____verticalJump_3)); }
	inline float get__verticalJump_3() const { return ____verticalJump_3; }
	inline float* get_address_of__verticalJump_3() { return &____verticalJump_3; }
	inline void set__verticalJump_3(float value)
	{
		____verticalJump_3 = value;
	}

	inline static int32_t get_offset_of__horizontalShake_4() { return static_cast<int32_t>(offsetof(AnalogGlitch_t1106357039, ____horizontalShake_4)); }
	inline float get__horizontalShake_4() const { return ____horizontalShake_4; }
	inline float* get_address_of__horizontalShake_4() { return &____horizontalShake_4; }
	inline void set__horizontalShake_4(float value)
	{
		____horizontalShake_4 = value;
	}

	inline static int32_t get_offset_of__colorDrift_5() { return static_cast<int32_t>(offsetof(AnalogGlitch_t1106357039, ____colorDrift_5)); }
	inline float get__colorDrift_5() const { return ____colorDrift_5; }
	inline float* get_address_of__colorDrift_5() { return &____colorDrift_5; }
	inline void set__colorDrift_5(float value)
	{
		____colorDrift_5 = value;
	}

	inline static int32_t get_offset_of__shader_6() { return static_cast<int32_t>(offsetof(AnalogGlitch_t1106357039, ____shader_6)); }
	inline Shader_t4151988712 * get__shader_6() const { return ____shader_6; }
	inline Shader_t4151988712 ** get_address_of__shader_6() { return &____shader_6; }
	inline void set__shader_6(Shader_t4151988712 * value)
	{
		____shader_6 = value;
		Il2CppCodeGenWriteBarrier((&____shader_6), value);
	}

	inline static int32_t get_offset_of__material_7() { return static_cast<int32_t>(offsetof(AnalogGlitch_t1106357039, ____material_7)); }
	inline Material_t340375123 * get__material_7() const { return ____material_7; }
	inline Material_t340375123 ** get_address_of__material_7() { return &____material_7; }
	inline void set__material_7(Material_t340375123 * value)
	{
		____material_7 = value;
		Il2CppCodeGenWriteBarrier((&____material_7), value);
	}

	inline static int32_t get_offset_of__verticalJumpTime_8() { return static_cast<int32_t>(offsetof(AnalogGlitch_t1106357039, ____verticalJumpTime_8)); }
	inline float get__verticalJumpTime_8() const { return ____verticalJumpTime_8; }
	inline float* get_address_of__verticalJumpTime_8() { return &____verticalJumpTime_8; }
	inline void set__verticalJumpTime_8(float value)
	{
		____verticalJumpTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALOGGLITCH_T1106357039_H
#ifndef TRIGGERSANDANIMATION_T1403829264_H
#define TRIGGERSANDANIMATION_T1403829264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriggersAndAnimation
struct  TriggersAndAnimation_t1403829264  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TriggersAndAnimation::sun
	GameObject_t1113636619 * ___sun_2;
	// UnityEngine.GameObject TriggersAndAnimation::campFire
	GameObject_t1113636619 * ___campFire_3;
	// UnityEngine.GameObject TriggersAndAnimation::npcTip
	GameObject_t1113636619 * ___npcTip_4;
	// UnityEngine.GameObject TriggersAndAnimation::forte
	GameObject_t1113636619 * ___forte_5;
	// UnityEngine.GameObject TriggersAndAnimation::house
	GameObject_t1113636619 * ___house_6;
	// UnityEngine.GameObject TriggersAndAnimation::castleSign
	GameObject_t1113636619 * ___castleSign_7;
	// UnityEngine.GameObject TriggersAndAnimation::bird
	GameObject_t1113636619 * ___bird_8;
	// UnityEngine.GameObject TriggersAndAnimation::objectiveButton
	GameObject_t1113636619 * ___objectiveButton_9;
	// UnityEngine.GameObject TriggersAndAnimation::privacy
	GameObject_t1113636619 * ___privacy_10;

public:
	inline static int32_t get_offset_of_sun_2() { return static_cast<int32_t>(offsetof(TriggersAndAnimation_t1403829264, ___sun_2)); }
	inline GameObject_t1113636619 * get_sun_2() const { return ___sun_2; }
	inline GameObject_t1113636619 ** get_address_of_sun_2() { return &___sun_2; }
	inline void set_sun_2(GameObject_t1113636619 * value)
	{
		___sun_2 = value;
		Il2CppCodeGenWriteBarrier((&___sun_2), value);
	}

	inline static int32_t get_offset_of_campFire_3() { return static_cast<int32_t>(offsetof(TriggersAndAnimation_t1403829264, ___campFire_3)); }
	inline GameObject_t1113636619 * get_campFire_3() const { return ___campFire_3; }
	inline GameObject_t1113636619 ** get_address_of_campFire_3() { return &___campFire_3; }
	inline void set_campFire_3(GameObject_t1113636619 * value)
	{
		___campFire_3 = value;
		Il2CppCodeGenWriteBarrier((&___campFire_3), value);
	}

	inline static int32_t get_offset_of_npcTip_4() { return static_cast<int32_t>(offsetof(TriggersAndAnimation_t1403829264, ___npcTip_4)); }
	inline GameObject_t1113636619 * get_npcTip_4() const { return ___npcTip_4; }
	inline GameObject_t1113636619 ** get_address_of_npcTip_4() { return &___npcTip_4; }
	inline void set_npcTip_4(GameObject_t1113636619 * value)
	{
		___npcTip_4 = value;
		Il2CppCodeGenWriteBarrier((&___npcTip_4), value);
	}

	inline static int32_t get_offset_of_forte_5() { return static_cast<int32_t>(offsetof(TriggersAndAnimation_t1403829264, ___forte_5)); }
	inline GameObject_t1113636619 * get_forte_5() const { return ___forte_5; }
	inline GameObject_t1113636619 ** get_address_of_forte_5() { return &___forte_5; }
	inline void set_forte_5(GameObject_t1113636619 * value)
	{
		___forte_5 = value;
		Il2CppCodeGenWriteBarrier((&___forte_5), value);
	}

	inline static int32_t get_offset_of_house_6() { return static_cast<int32_t>(offsetof(TriggersAndAnimation_t1403829264, ___house_6)); }
	inline GameObject_t1113636619 * get_house_6() const { return ___house_6; }
	inline GameObject_t1113636619 ** get_address_of_house_6() { return &___house_6; }
	inline void set_house_6(GameObject_t1113636619 * value)
	{
		___house_6 = value;
		Il2CppCodeGenWriteBarrier((&___house_6), value);
	}

	inline static int32_t get_offset_of_castleSign_7() { return static_cast<int32_t>(offsetof(TriggersAndAnimation_t1403829264, ___castleSign_7)); }
	inline GameObject_t1113636619 * get_castleSign_7() const { return ___castleSign_7; }
	inline GameObject_t1113636619 ** get_address_of_castleSign_7() { return &___castleSign_7; }
	inline void set_castleSign_7(GameObject_t1113636619 * value)
	{
		___castleSign_7 = value;
		Il2CppCodeGenWriteBarrier((&___castleSign_7), value);
	}

	inline static int32_t get_offset_of_bird_8() { return static_cast<int32_t>(offsetof(TriggersAndAnimation_t1403829264, ___bird_8)); }
	inline GameObject_t1113636619 * get_bird_8() const { return ___bird_8; }
	inline GameObject_t1113636619 ** get_address_of_bird_8() { return &___bird_8; }
	inline void set_bird_8(GameObject_t1113636619 * value)
	{
		___bird_8 = value;
		Il2CppCodeGenWriteBarrier((&___bird_8), value);
	}

	inline static int32_t get_offset_of_objectiveButton_9() { return static_cast<int32_t>(offsetof(TriggersAndAnimation_t1403829264, ___objectiveButton_9)); }
	inline GameObject_t1113636619 * get_objectiveButton_9() const { return ___objectiveButton_9; }
	inline GameObject_t1113636619 ** get_address_of_objectiveButton_9() { return &___objectiveButton_9; }
	inline void set_objectiveButton_9(GameObject_t1113636619 * value)
	{
		___objectiveButton_9 = value;
		Il2CppCodeGenWriteBarrier((&___objectiveButton_9), value);
	}

	inline static int32_t get_offset_of_privacy_10() { return static_cast<int32_t>(offsetof(TriggersAndAnimation_t1403829264, ___privacy_10)); }
	inline GameObject_t1113636619 * get_privacy_10() const { return ___privacy_10; }
	inline GameObject_t1113636619 ** get_address_of_privacy_10() { return &___privacy_10; }
	inline void set_privacy_10(GameObject_t1113636619 * value)
	{
		___privacy_10 = value;
		Il2CppCodeGenWriteBarrier((&___privacy_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERSANDANIMATION_T1403829264_H
#ifndef POLYGONCOLLIDER2D_T57175488_H
#define POLYGONCOLLIDER2D_T57175488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PolygonCollider2D
struct  PolygonCollider2D_t57175488  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYGONCOLLIDER2D_T57175488_H
#ifndef EVENTTRIGGER_T1076084509_H
#define EVENTTRIGGER_T1076084509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTrigger
struct  EventTrigger_t1076084509  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::m_Delegates
	List_1_t521873611 * ___m_Delegates_2;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::delegates
	List_1_t521873611 * ___delegates_3;

public:
	inline static int32_t get_offset_of_m_Delegates_2() { return static_cast<int32_t>(offsetof(EventTrigger_t1076084509, ___m_Delegates_2)); }
	inline List_1_t521873611 * get_m_Delegates_2() const { return ___m_Delegates_2; }
	inline List_1_t521873611 ** get_address_of_m_Delegates_2() { return &___m_Delegates_2; }
	inline void set_m_Delegates_2(List_1_t521873611 * value)
	{
		___m_Delegates_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Delegates_2), value);
	}

	inline static int32_t get_offset_of_delegates_3() { return static_cast<int32_t>(offsetof(EventTrigger_t1076084509, ___delegates_3)); }
	inline List_1_t521873611 * get_delegates_3() const { return ___delegates_3; }
	inline List_1_t521873611 ** get_address_of_delegates_3() { return &___delegates_3; }
	inline void set_delegates_3(List_1_t521873611 * value)
	{
		___delegates_3 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTRIGGER_T1076084509_H
#ifndef DIALOGUESCENEMANAGER_T3025860002_H
#define DIALOGUESCENEMANAGER_T3025860002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueSceneManager
struct  DialogueSceneManager_t3025860002  : public MonoBehaviour_t3962482529
{
public:
	// DialogueSceneManager DialogueSceneManager::instance
	DialogueSceneManager_t3025860002 * ___instance_2;
	// UnityEngine.Animator DialogueSceneManager::privacy
	Animator_t434523843 * ___privacy_3;
	// UnityEngine.GameObject DialogueSceneManager::cam
	GameObject_t1113636619 * ___cam_4;
	// UnityEngine.GameObject DialogueSceneManager::parent
	GameObject_t1113636619 * ___parent_5;
	// UnityEngine.GameObject DialogueSceneManager::npcDog
	GameObject_t1113636619 * ___npcDog_6;
	// UnityEngine.GameObject DialogueSceneManager::npcKid
	GameObject_t1113636619 * ___npcKid_7;
	// UnityEngine.GameObject DialogueSceneManager::blackImage
	GameObject_t1113636619 * ___blackImage_8;
	// UnityEngine.GameObject DialogueSceneManager::nameLeft
	GameObject_t1113636619 * ___nameLeft_9;
	// UnityEngine.GameObject DialogueSceneManager::nameRight
	GameObject_t1113636619 * ___nameRight_10;
	// UnityEngine.UI.Text DialogueSceneManager::nameTextLeft
	Text_t1901882714 * ___nameTextLeft_11;
	// UnityEngine.UI.Text DialogueSceneManager::nameTextRight
	Text_t1901882714 * ___nameTextRight_12;
	// UnityEngine.GameObject DialogueSceneManager::dialogueBox
	GameObject_t1113636619 * ___dialogueBox_13;
	// UnityEngine.UI.Text DialogueSceneManager::dialogueText
	Text_t1901882714 * ___dialogueText_14;
	// UnityEngine.Animator DialogueSceneManager::dog
	Animator_t434523843 * ___dog_15;
	// UnityEngine.Animator DialogueSceneManager::kid
	Animator_t434523843 * ___kid_16;
	// UnityEngine.AudioSource DialogueSceneManager::source
	AudioSource_t3935305588 * ___source_17;
	// UnityEngine.AudioClip DialogueSceneManager::beepDog
	AudioClip_t3680889665 * ___beepDog_18;
	// UnityEngine.AudioClip DialogueSceneManager::beepKid
	AudioClip_t3680889665 * ___beepKid_19;
	// System.Int32 DialogueSceneManager::count
	int32_t ___count_20;
	// System.Boolean DialogueSceneManager::isTyping
	bool ___isTyping_21;
	// System.Boolean DialogueSceneManager::cancelTyping
	bool ___cancelTyping_22;
	// System.Boolean DialogueSceneManager::hasPlayedBossCutscene
	bool ___hasPlayedBossCutscene_23;
	// System.String DialogueSceneManager::cursor
	String_t* ___cursor_24;
	// System.Boolean DialogueSceneManager::isBlinking
	bool ___isBlinking_25;
	// System.Int32 DialogueSceneManager::letter
	int32_t ___letter_26;
	// UnityEngine.Animator DialogueSceneManager::tipbox
	Animator_t434523843 * ___tipbox_27;
	// UnityEngine.GameObject DialogueSceneManager::objectives
	GameObject_t1113636619 * ___objectives_28;
	// UnityEngine.GameObject DialogueSceneManager::bossCutsene
	GameObject_t1113636619 * ___bossCutsene_29;
	// UnityEngine.GameObject DialogueSceneManager::triggersAndAnimations
	GameObject_t1113636619 * ___triggersAndAnimations_30;
	// System.String[] DialogueSceneManager::script
	StringU5BU5D_t1281789340* ___script_31;
	// System.Boolean DialogueSceneManager::isDogSpeaking
	bool ___isDogSpeaking_32;
	// System.Boolean DialogueSceneManager::isKidSpeaking
	bool ___isKidSpeaking_33;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___instance_2)); }
	inline DialogueSceneManager_t3025860002 * get_instance_2() const { return ___instance_2; }
	inline DialogueSceneManager_t3025860002 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(DialogueSceneManager_t3025860002 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}

	inline static int32_t get_offset_of_privacy_3() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___privacy_3)); }
	inline Animator_t434523843 * get_privacy_3() const { return ___privacy_3; }
	inline Animator_t434523843 ** get_address_of_privacy_3() { return &___privacy_3; }
	inline void set_privacy_3(Animator_t434523843 * value)
	{
		___privacy_3 = value;
		Il2CppCodeGenWriteBarrier((&___privacy_3), value);
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___cam_4)); }
	inline GameObject_t1113636619 * get_cam_4() const { return ___cam_4; }
	inline GameObject_t1113636619 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(GameObject_t1113636619 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((&___cam_4), value);
	}

	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___parent_5)); }
	inline GameObject_t1113636619 * get_parent_5() const { return ___parent_5; }
	inline GameObject_t1113636619 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(GameObject_t1113636619 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((&___parent_5), value);
	}

	inline static int32_t get_offset_of_npcDog_6() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___npcDog_6)); }
	inline GameObject_t1113636619 * get_npcDog_6() const { return ___npcDog_6; }
	inline GameObject_t1113636619 ** get_address_of_npcDog_6() { return &___npcDog_6; }
	inline void set_npcDog_6(GameObject_t1113636619 * value)
	{
		___npcDog_6 = value;
		Il2CppCodeGenWriteBarrier((&___npcDog_6), value);
	}

	inline static int32_t get_offset_of_npcKid_7() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___npcKid_7)); }
	inline GameObject_t1113636619 * get_npcKid_7() const { return ___npcKid_7; }
	inline GameObject_t1113636619 ** get_address_of_npcKid_7() { return &___npcKid_7; }
	inline void set_npcKid_7(GameObject_t1113636619 * value)
	{
		___npcKid_7 = value;
		Il2CppCodeGenWriteBarrier((&___npcKid_7), value);
	}

	inline static int32_t get_offset_of_blackImage_8() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___blackImage_8)); }
	inline GameObject_t1113636619 * get_blackImage_8() const { return ___blackImage_8; }
	inline GameObject_t1113636619 ** get_address_of_blackImage_8() { return &___blackImage_8; }
	inline void set_blackImage_8(GameObject_t1113636619 * value)
	{
		___blackImage_8 = value;
		Il2CppCodeGenWriteBarrier((&___blackImage_8), value);
	}

	inline static int32_t get_offset_of_nameLeft_9() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___nameLeft_9)); }
	inline GameObject_t1113636619 * get_nameLeft_9() const { return ___nameLeft_9; }
	inline GameObject_t1113636619 ** get_address_of_nameLeft_9() { return &___nameLeft_9; }
	inline void set_nameLeft_9(GameObject_t1113636619 * value)
	{
		___nameLeft_9 = value;
		Il2CppCodeGenWriteBarrier((&___nameLeft_9), value);
	}

	inline static int32_t get_offset_of_nameRight_10() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___nameRight_10)); }
	inline GameObject_t1113636619 * get_nameRight_10() const { return ___nameRight_10; }
	inline GameObject_t1113636619 ** get_address_of_nameRight_10() { return &___nameRight_10; }
	inline void set_nameRight_10(GameObject_t1113636619 * value)
	{
		___nameRight_10 = value;
		Il2CppCodeGenWriteBarrier((&___nameRight_10), value);
	}

	inline static int32_t get_offset_of_nameTextLeft_11() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___nameTextLeft_11)); }
	inline Text_t1901882714 * get_nameTextLeft_11() const { return ___nameTextLeft_11; }
	inline Text_t1901882714 ** get_address_of_nameTextLeft_11() { return &___nameTextLeft_11; }
	inline void set_nameTextLeft_11(Text_t1901882714 * value)
	{
		___nameTextLeft_11 = value;
		Il2CppCodeGenWriteBarrier((&___nameTextLeft_11), value);
	}

	inline static int32_t get_offset_of_nameTextRight_12() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___nameTextRight_12)); }
	inline Text_t1901882714 * get_nameTextRight_12() const { return ___nameTextRight_12; }
	inline Text_t1901882714 ** get_address_of_nameTextRight_12() { return &___nameTextRight_12; }
	inline void set_nameTextRight_12(Text_t1901882714 * value)
	{
		___nameTextRight_12 = value;
		Il2CppCodeGenWriteBarrier((&___nameTextRight_12), value);
	}

	inline static int32_t get_offset_of_dialogueBox_13() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___dialogueBox_13)); }
	inline GameObject_t1113636619 * get_dialogueBox_13() const { return ___dialogueBox_13; }
	inline GameObject_t1113636619 ** get_address_of_dialogueBox_13() { return &___dialogueBox_13; }
	inline void set_dialogueBox_13(GameObject_t1113636619 * value)
	{
		___dialogueBox_13 = value;
		Il2CppCodeGenWriteBarrier((&___dialogueBox_13), value);
	}

	inline static int32_t get_offset_of_dialogueText_14() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___dialogueText_14)); }
	inline Text_t1901882714 * get_dialogueText_14() const { return ___dialogueText_14; }
	inline Text_t1901882714 ** get_address_of_dialogueText_14() { return &___dialogueText_14; }
	inline void set_dialogueText_14(Text_t1901882714 * value)
	{
		___dialogueText_14 = value;
		Il2CppCodeGenWriteBarrier((&___dialogueText_14), value);
	}

	inline static int32_t get_offset_of_dog_15() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___dog_15)); }
	inline Animator_t434523843 * get_dog_15() const { return ___dog_15; }
	inline Animator_t434523843 ** get_address_of_dog_15() { return &___dog_15; }
	inline void set_dog_15(Animator_t434523843 * value)
	{
		___dog_15 = value;
		Il2CppCodeGenWriteBarrier((&___dog_15), value);
	}

	inline static int32_t get_offset_of_kid_16() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___kid_16)); }
	inline Animator_t434523843 * get_kid_16() const { return ___kid_16; }
	inline Animator_t434523843 ** get_address_of_kid_16() { return &___kid_16; }
	inline void set_kid_16(Animator_t434523843 * value)
	{
		___kid_16 = value;
		Il2CppCodeGenWriteBarrier((&___kid_16), value);
	}

	inline static int32_t get_offset_of_source_17() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___source_17)); }
	inline AudioSource_t3935305588 * get_source_17() const { return ___source_17; }
	inline AudioSource_t3935305588 ** get_address_of_source_17() { return &___source_17; }
	inline void set_source_17(AudioSource_t3935305588 * value)
	{
		___source_17 = value;
		Il2CppCodeGenWriteBarrier((&___source_17), value);
	}

	inline static int32_t get_offset_of_beepDog_18() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___beepDog_18)); }
	inline AudioClip_t3680889665 * get_beepDog_18() const { return ___beepDog_18; }
	inline AudioClip_t3680889665 ** get_address_of_beepDog_18() { return &___beepDog_18; }
	inline void set_beepDog_18(AudioClip_t3680889665 * value)
	{
		___beepDog_18 = value;
		Il2CppCodeGenWriteBarrier((&___beepDog_18), value);
	}

	inline static int32_t get_offset_of_beepKid_19() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___beepKid_19)); }
	inline AudioClip_t3680889665 * get_beepKid_19() const { return ___beepKid_19; }
	inline AudioClip_t3680889665 ** get_address_of_beepKid_19() { return &___beepKid_19; }
	inline void set_beepKid_19(AudioClip_t3680889665 * value)
	{
		___beepKid_19 = value;
		Il2CppCodeGenWriteBarrier((&___beepKid_19), value);
	}

	inline static int32_t get_offset_of_count_20() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___count_20)); }
	inline int32_t get_count_20() const { return ___count_20; }
	inline int32_t* get_address_of_count_20() { return &___count_20; }
	inline void set_count_20(int32_t value)
	{
		___count_20 = value;
	}

	inline static int32_t get_offset_of_isTyping_21() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___isTyping_21)); }
	inline bool get_isTyping_21() const { return ___isTyping_21; }
	inline bool* get_address_of_isTyping_21() { return &___isTyping_21; }
	inline void set_isTyping_21(bool value)
	{
		___isTyping_21 = value;
	}

	inline static int32_t get_offset_of_cancelTyping_22() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___cancelTyping_22)); }
	inline bool get_cancelTyping_22() const { return ___cancelTyping_22; }
	inline bool* get_address_of_cancelTyping_22() { return &___cancelTyping_22; }
	inline void set_cancelTyping_22(bool value)
	{
		___cancelTyping_22 = value;
	}

	inline static int32_t get_offset_of_hasPlayedBossCutscene_23() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___hasPlayedBossCutscene_23)); }
	inline bool get_hasPlayedBossCutscene_23() const { return ___hasPlayedBossCutscene_23; }
	inline bool* get_address_of_hasPlayedBossCutscene_23() { return &___hasPlayedBossCutscene_23; }
	inline void set_hasPlayedBossCutscene_23(bool value)
	{
		___hasPlayedBossCutscene_23 = value;
	}

	inline static int32_t get_offset_of_cursor_24() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___cursor_24)); }
	inline String_t* get_cursor_24() const { return ___cursor_24; }
	inline String_t** get_address_of_cursor_24() { return &___cursor_24; }
	inline void set_cursor_24(String_t* value)
	{
		___cursor_24 = value;
		Il2CppCodeGenWriteBarrier((&___cursor_24), value);
	}

	inline static int32_t get_offset_of_isBlinking_25() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___isBlinking_25)); }
	inline bool get_isBlinking_25() const { return ___isBlinking_25; }
	inline bool* get_address_of_isBlinking_25() { return &___isBlinking_25; }
	inline void set_isBlinking_25(bool value)
	{
		___isBlinking_25 = value;
	}

	inline static int32_t get_offset_of_letter_26() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___letter_26)); }
	inline int32_t get_letter_26() const { return ___letter_26; }
	inline int32_t* get_address_of_letter_26() { return &___letter_26; }
	inline void set_letter_26(int32_t value)
	{
		___letter_26 = value;
	}

	inline static int32_t get_offset_of_tipbox_27() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___tipbox_27)); }
	inline Animator_t434523843 * get_tipbox_27() const { return ___tipbox_27; }
	inline Animator_t434523843 ** get_address_of_tipbox_27() { return &___tipbox_27; }
	inline void set_tipbox_27(Animator_t434523843 * value)
	{
		___tipbox_27 = value;
		Il2CppCodeGenWriteBarrier((&___tipbox_27), value);
	}

	inline static int32_t get_offset_of_objectives_28() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___objectives_28)); }
	inline GameObject_t1113636619 * get_objectives_28() const { return ___objectives_28; }
	inline GameObject_t1113636619 ** get_address_of_objectives_28() { return &___objectives_28; }
	inline void set_objectives_28(GameObject_t1113636619 * value)
	{
		___objectives_28 = value;
		Il2CppCodeGenWriteBarrier((&___objectives_28), value);
	}

	inline static int32_t get_offset_of_bossCutsene_29() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___bossCutsene_29)); }
	inline GameObject_t1113636619 * get_bossCutsene_29() const { return ___bossCutsene_29; }
	inline GameObject_t1113636619 ** get_address_of_bossCutsene_29() { return &___bossCutsene_29; }
	inline void set_bossCutsene_29(GameObject_t1113636619 * value)
	{
		___bossCutsene_29 = value;
		Il2CppCodeGenWriteBarrier((&___bossCutsene_29), value);
	}

	inline static int32_t get_offset_of_triggersAndAnimations_30() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___triggersAndAnimations_30)); }
	inline GameObject_t1113636619 * get_triggersAndAnimations_30() const { return ___triggersAndAnimations_30; }
	inline GameObject_t1113636619 ** get_address_of_triggersAndAnimations_30() { return &___triggersAndAnimations_30; }
	inline void set_triggersAndAnimations_30(GameObject_t1113636619 * value)
	{
		___triggersAndAnimations_30 = value;
		Il2CppCodeGenWriteBarrier((&___triggersAndAnimations_30), value);
	}

	inline static int32_t get_offset_of_script_31() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___script_31)); }
	inline StringU5BU5D_t1281789340* get_script_31() const { return ___script_31; }
	inline StringU5BU5D_t1281789340** get_address_of_script_31() { return &___script_31; }
	inline void set_script_31(StringU5BU5D_t1281789340* value)
	{
		___script_31 = value;
		Il2CppCodeGenWriteBarrier((&___script_31), value);
	}

	inline static int32_t get_offset_of_isDogSpeaking_32() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___isDogSpeaking_32)); }
	inline bool get_isDogSpeaking_32() const { return ___isDogSpeaking_32; }
	inline bool* get_address_of_isDogSpeaking_32() { return &___isDogSpeaking_32; }
	inline void set_isDogSpeaking_32(bool value)
	{
		___isDogSpeaking_32 = value;
	}

	inline static int32_t get_offset_of_isKidSpeaking_33() { return static_cast<int32_t>(offsetof(DialogueSceneManager_t3025860002, ___isKidSpeaking_33)); }
	inline bool get_isKidSpeaking_33() const { return ___isKidSpeaking_33; }
	inline bool* get_address_of_isKidSpeaking_33() { return &___isKidSpeaking_33; }
	inline void set_isKidSpeaking_33(bool value)
	{
		___isKidSpeaking_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGUESCENEMANAGER_T3025860002_H
#ifndef TIPHANDLER_T807666407_H
#define TIPHANDLER_T807666407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TipHandler
struct  TipHandler_t807666407  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean TipHandler::hasPlayedInteractTip
	bool ___hasPlayedInteractTip_3;
	// System.Boolean TipHandler::hasplayedSelectFoodTip
	bool ___hasplayedSelectFoodTip_4;
	// System.Boolean TipHandler::hasPlayedDragFoodTip
	bool ___hasPlayedDragFoodTip_5;

public:
	inline static int32_t get_offset_of_hasPlayedInteractTip_3() { return static_cast<int32_t>(offsetof(TipHandler_t807666407, ___hasPlayedInteractTip_3)); }
	inline bool get_hasPlayedInteractTip_3() const { return ___hasPlayedInteractTip_3; }
	inline bool* get_address_of_hasPlayedInteractTip_3() { return &___hasPlayedInteractTip_3; }
	inline void set_hasPlayedInteractTip_3(bool value)
	{
		___hasPlayedInteractTip_3 = value;
	}

	inline static int32_t get_offset_of_hasplayedSelectFoodTip_4() { return static_cast<int32_t>(offsetof(TipHandler_t807666407, ___hasplayedSelectFoodTip_4)); }
	inline bool get_hasplayedSelectFoodTip_4() const { return ___hasplayedSelectFoodTip_4; }
	inline bool* get_address_of_hasplayedSelectFoodTip_4() { return &___hasplayedSelectFoodTip_4; }
	inline void set_hasplayedSelectFoodTip_4(bool value)
	{
		___hasplayedSelectFoodTip_4 = value;
	}

	inline static int32_t get_offset_of_hasPlayedDragFoodTip_5() { return static_cast<int32_t>(offsetof(TipHandler_t807666407, ___hasPlayedDragFoodTip_5)); }
	inline bool get_hasPlayedDragFoodTip_5() const { return ___hasPlayedDragFoodTip_5; }
	inline bool* get_address_of_hasPlayedDragFoodTip_5() { return &___hasPlayedDragFoodTip_5; }
	inline void set_hasPlayedDragFoodTip_5(bool value)
	{
		___hasPlayedDragFoodTip_5 = value;
	}
};

struct TipHandler_t807666407_StaticFields
{
public:
	// TipHandler TipHandler::instance
	TipHandler_t807666407 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(TipHandler_t807666407_StaticFields, ___instance_2)); }
	inline TipHandler_t807666407 * get_instance_2() const { return ___instance_2; }
	inline TipHandler_t807666407 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(TipHandler_t807666407 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIPHANDLER_T807666407_H
#ifndef TRANSITIONHANDLER_T1104418219_H
#define TRANSITIONHANDLER_T1104418219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransitionHandler
struct  TransitionHandler_t1104418219  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator TransitionHandler::fade
	Animator_t434523843 * ___fade_2;
	// UnityEngine.GameObject TransitionHandler::cutscene
	GameObject_t1113636619 * ___cutscene_3;
	// UnityEngine.AudioSource TransitionHandler::source
	AudioSource_t3935305588 * ___source_4;
	// UnityEngine.AudioSource TransitionHandler::canvas
	AudioSource_t3935305588 * ___canvas_5;
	// UnityEngine.AudioClip TransitionHandler::glitchSound
	AudioClip_t3680889665 * ___glitchSound_6;
	// UnityEngine.AudioClip TransitionHandler::villain
	AudioClip_t3680889665 * ___villain_7;
	// UnityEngine.AudioClip TransitionHandler::closeDoor
	AudioClip_t3680889665 * ___closeDoor_8;
	// UnityEngine.AudioClip TransitionHandler::openDoor
	AudioClip_t3680889665 * ___openDoor_9;
	// UnityEngine.AudioClip TransitionHandler::bar
	AudioClip_t3680889665 * ___bar_10;
	// UnityEngine.AudioClip TransitionHandler::boom
	AudioClip_t3680889665 * ___boom_11;
	// UnityEngine.AudioClip TransitionHandler::islandDay
	AudioClip_t3680889665 * ___islandDay_12;
	// UnityEngine.GameObject TransitionHandler::cutseneManager
	GameObject_t1113636619 * ___cutseneManager_13;
	// UnityEngine.AudioClip TransitionHandler::gameplay
	AudioClip_t3680889665 * ___gameplay_14;
	// UnityEngine.AudioClip TransitionHandler::chirp
	AudioClip_t3680889665 * ___chirp_15;
	// UnityEngine.AudioClip TransitionHandler::spawnChirp
	AudioClip_t3680889665 * ___spawnChirp_16;
	// UnityEngine.AudioClip TransitionHandler::sing
	AudioClip_t3680889665 * ___sing_17;
	// UnityEngine.AudioClip TransitionHandler::privacy
	AudioClip_t3680889665 * ___privacy_18;
	// UnityEngine.AudioClip TransitionHandler::privacyAdd
	AudioClip_t3680889665 * ___privacyAdd_19;
	// UnityEngine.AudioClip TransitionHandler::hover
	AudioClip_t3680889665 * ___hover_20;
	// UnityEngine.AudioClip TransitionHandler::mouseClick
	AudioClip_t3680889665 * ___mouseClick_21;
	// UnityEngine.AudioClip TransitionHandler::mouseClickPlay
	AudioClip_t3680889665 * ___mouseClickPlay_22;
	// UnityEngine.AudioClip TransitionHandler::shortSucess
	AudioClip_t3680889665 * ___shortSucess_23;
	// UnityEngine.AudioClip TransitionHandler::success
	AudioClip_t3680889665 * ___success_24;
	// System.Boolean TransitionHandler::glitching
	bool ___glitching_25;

public:
	inline static int32_t get_offset_of_fade_2() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___fade_2)); }
	inline Animator_t434523843 * get_fade_2() const { return ___fade_2; }
	inline Animator_t434523843 ** get_address_of_fade_2() { return &___fade_2; }
	inline void set_fade_2(Animator_t434523843 * value)
	{
		___fade_2 = value;
		Il2CppCodeGenWriteBarrier((&___fade_2), value);
	}

	inline static int32_t get_offset_of_cutscene_3() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___cutscene_3)); }
	inline GameObject_t1113636619 * get_cutscene_3() const { return ___cutscene_3; }
	inline GameObject_t1113636619 ** get_address_of_cutscene_3() { return &___cutscene_3; }
	inline void set_cutscene_3(GameObject_t1113636619 * value)
	{
		___cutscene_3 = value;
		Il2CppCodeGenWriteBarrier((&___cutscene_3), value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___source_4)); }
	inline AudioSource_t3935305588 * get_source_4() const { return ___source_4; }
	inline AudioSource_t3935305588 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(AudioSource_t3935305588 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}

	inline static int32_t get_offset_of_canvas_5() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___canvas_5)); }
	inline AudioSource_t3935305588 * get_canvas_5() const { return ___canvas_5; }
	inline AudioSource_t3935305588 ** get_address_of_canvas_5() { return &___canvas_5; }
	inline void set_canvas_5(AudioSource_t3935305588 * value)
	{
		___canvas_5 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_5), value);
	}

	inline static int32_t get_offset_of_glitchSound_6() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___glitchSound_6)); }
	inline AudioClip_t3680889665 * get_glitchSound_6() const { return ___glitchSound_6; }
	inline AudioClip_t3680889665 ** get_address_of_glitchSound_6() { return &___glitchSound_6; }
	inline void set_glitchSound_6(AudioClip_t3680889665 * value)
	{
		___glitchSound_6 = value;
		Il2CppCodeGenWriteBarrier((&___glitchSound_6), value);
	}

	inline static int32_t get_offset_of_villain_7() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___villain_7)); }
	inline AudioClip_t3680889665 * get_villain_7() const { return ___villain_7; }
	inline AudioClip_t3680889665 ** get_address_of_villain_7() { return &___villain_7; }
	inline void set_villain_7(AudioClip_t3680889665 * value)
	{
		___villain_7 = value;
		Il2CppCodeGenWriteBarrier((&___villain_7), value);
	}

	inline static int32_t get_offset_of_closeDoor_8() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___closeDoor_8)); }
	inline AudioClip_t3680889665 * get_closeDoor_8() const { return ___closeDoor_8; }
	inline AudioClip_t3680889665 ** get_address_of_closeDoor_8() { return &___closeDoor_8; }
	inline void set_closeDoor_8(AudioClip_t3680889665 * value)
	{
		___closeDoor_8 = value;
		Il2CppCodeGenWriteBarrier((&___closeDoor_8), value);
	}

	inline static int32_t get_offset_of_openDoor_9() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___openDoor_9)); }
	inline AudioClip_t3680889665 * get_openDoor_9() const { return ___openDoor_9; }
	inline AudioClip_t3680889665 ** get_address_of_openDoor_9() { return &___openDoor_9; }
	inline void set_openDoor_9(AudioClip_t3680889665 * value)
	{
		___openDoor_9 = value;
		Il2CppCodeGenWriteBarrier((&___openDoor_9), value);
	}

	inline static int32_t get_offset_of_bar_10() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___bar_10)); }
	inline AudioClip_t3680889665 * get_bar_10() const { return ___bar_10; }
	inline AudioClip_t3680889665 ** get_address_of_bar_10() { return &___bar_10; }
	inline void set_bar_10(AudioClip_t3680889665 * value)
	{
		___bar_10 = value;
		Il2CppCodeGenWriteBarrier((&___bar_10), value);
	}

	inline static int32_t get_offset_of_boom_11() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___boom_11)); }
	inline AudioClip_t3680889665 * get_boom_11() const { return ___boom_11; }
	inline AudioClip_t3680889665 ** get_address_of_boom_11() { return &___boom_11; }
	inline void set_boom_11(AudioClip_t3680889665 * value)
	{
		___boom_11 = value;
		Il2CppCodeGenWriteBarrier((&___boom_11), value);
	}

	inline static int32_t get_offset_of_islandDay_12() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___islandDay_12)); }
	inline AudioClip_t3680889665 * get_islandDay_12() const { return ___islandDay_12; }
	inline AudioClip_t3680889665 ** get_address_of_islandDay_12() { return &___islandDay_12; }
	inline void set_islandDay_12(AudioClip_t3680889665 * value)
	{
		___islandDay_12 = value;
		Il2CppCodeGenWriteBarrier((&___islandDay_12), value);
	}

	inline static int32_t get_offset_of_cutseneManager_13() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___cutseneManager_13)); }
	inline GameObject_t1113636619 * get_cutseneManager_13() const { return ___cutseneManager_13; }
	inline GameObject_t1113636619 ** get_address_of_cutseneManager_13() { return &___cutseneManager_13; }
	inline void set_cutseneManager_13(GameObject_t1113636619 * value)
	{
		___cutseneManager_13 = value;
		Il2CppCodeGenWriteBarrier((&___cutseneManager_13), value);
	}

	inline static int32_t get_offset_of_gameplay_14() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___gameplay_14)); }
	inline AudioClip_t3680889665 * get_gameplay_14() const { return ___gameplay_14; }
	inline AudioClip_t3680889665 ** get_address_of_gameplay_14() { return &___gameplay_14; }
	inline void set_gameplay_14(AudioClip_t3680889665 * value)
	{
		___gameplay_14 = value;
		Il2CppCodeGenWriteBarrier((&___gameplay_14), value);
	}

	inline static int32_t get_offset_of_chirp_15() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___chirp_15)); }
	inline AudioClip_t3680889665 * get_chirp_15() const { return ___chirp_15; }
	inline AudioClip_t3680889665 ** get_address_of_chirp_15() { return &___chirp_15; }
	inline void set_chirp_15(AudioClip_t3680889665 * value)
	{
		___chirp_15 = value;
		Il2CppCodeGenWriteBarrier((&___chirp_15), value);
	}

	inline static int32_t get_offset_of_spawnChirp_16() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___spawnChirp_16)); }
	inline AudioClip_t3680889665 * get_spawnChirp_16() const { return ___spawnChirp_16; }
	inline AudioClip_t3680889665 ** get_address_of_spawnChirp_16() { return &___spawnChirp_16; }
	inline void set_spawnChirp_16(AudioClip_t3680889665 * value)
	{
		___spawnChirp_16 = value;
		Il2CppCodeGenWriteBarrier((&___spawnChirp_16), value);
	}

	inline static int32_t get_offset_of_sing_17() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___sing_17)); }
	inline AudioClip_t3680889665 * get_sing_17() const { return ___sing_17; }
	inline AudioClip_t3680889665 ** get_address_of_sing_17() { return &___sing_17; }
	inline void set_sing_17(AudioClip_t3680889665 * value)
	{
		___sing_17 = value;
		Il2CppCodeGenWriteBarrier((&___sing_17), value);
	}

	inline static int32_t get_offset_of_privacy_18() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___privacy_18)); }
	inline AudioClip_t3680889665 * get_privacy_18() const { return ___privacy_18; }
	inline AudioClip_t3680889665 ** get_address_of_privacy_18() { return &___privacy_18; }
	inline void set_privacy_18(AudioClip_t3680889665 * value)
	{
		___privacy_18 = value;
		Il2CppCodeGenWriteBarrier((&___privacy_18), value);
	}

	inline static int32_t get_offset_of_privacyAdd_19() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___privacyAdd_19)); }
	inline AudioClip_t3680889665 * get_privacyAdd_19() const { return ___privacyAdd_19; }
	inline AudioClip_t3680889665 ** get_address_of_privacyAdd_19() { return &___privacyAdd_19; }
	inline void set_privacyAdd_19(AudioClip_t3680889665 * value)
	{
		___privacyAdd_19 = value;
		Il2CppCodeGenWriteBarrier((&___privacyAdd_19), value);
	}

	inline static int32_t get_offset_of_hover_20() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___hover_20)); }
	inline AudioClip_t3680889665 * get_hover_20() const { return ___hover_20; }
	inline AudioClip_t3680889665 ** get_address_of_hover_20() { return &___hover_20; }
	inline void set_hover_20(AudioClip_t3680889665 * value)
	{
		___hover_20 = value;
		Il2CppCodeGenWriteBarrier((&___hover_20), value);
	}

	inline static int32_t get_offset_of_mouseClick_21() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___mouseClick_21)); }
	inline AudioClip_t3680889665 * get_mouseClick_21() const { return ___mouseClick_21; }
	inline AudioClip_t3680889665 ** get_address_of_mouseClick_21() { return &___mouseClick_21; }
	inline void set_mouseClick_21(AudioClip_t3680889665 * value)
	{
		___mouseClick_21 = value;
		Il2CppCodeGenWriteBarrier((&___mouseClick_21), value);
	}

	inline static int32_t get_offset_of_mouseClickPlay_22() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___mouseClickPlay_22)); }
	inline AudioClip_t3680889665 * get_mouseClickPlay_22() const { return ___mouseClickPlay_22; }
	inline AudioClip_t3680889665 ** get_address_of_mouseClickPlay_22() { return &___mouseClickPlay_22; }
	inline void set_mouseClickPlay_22(AudioClip_t3680889665 * value)
	{
		___mouseClickPlay_22 = value;
		Il2CppCodeGenWriteBarrier((&___mouseClickPlay_22), value);
	}

	inline static int32_t get_offset_of_shortSucess_23() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___shortSucess_23)); }
	inline AudioClip_t3680889665 * get_shortSucess_23() const { return ___shortSucess_23; }
	inline AudioClip_t3680889665 ** get_address_of_shortSucess_23() { return &___shortSucess_23; }
	inline void set_shortSucess_23(AudioClip_t3680889665 * value)
	{
		___shortSucess_23 = value;
		Il2CppCodeGenWriteBarrier((&___shortSucess_23), value);
	}

	inline static int32_t get_offset_of_success_24() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___success_24)); }
	inline AudioClip_t3680889665 * get_success_24() const { return ___success_24; }
	inline AudioClip_t3680889665 ** get_address_of_success_24() { return &___success_24; }
	inline void set_success_24(AudioClip_t3680889665 * value)
	{
		___success_24 = value;
		Il2CppCodeGenWriteBarrier((&___success_24), value);
	}

	inline static int32_t get_offset_of_glitching_25() { return static_cast<int32_t>(offsetof(TransitionHandler_t1104418219, ___glitching_25)); }
	inline bool get_glitching_25() const { return ___glitching_25; }
	inline bool* get_address_of_glitching_25() { return &___glitching_25; }
	inline void set_glitching_25(bool value)
	{
		___glitching_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITIONHANDLER_T1104418219_H
#ifndef WIFINETWORKMANAGER_T1080793997_H
#define WIFINETWORKMANAGER_T1080793997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WIFINetworkManager
struct  WIFINetworkManager_t1080793997  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] WIFINetworkManager::wifi
	GameObjectU5BU5D_t3328599146* ___wifi_2;
	// UnityEngine.Sprite[] WIFINetworkManager::pics
	SpriteU5BU5D_t2581906349* ___pics_3;
	// UnityEngine.GameObject WIFINetworkManager::hint
	GameObject_t1113636619 * ___hint_4;
	// System.Int32 WIFINetworkManager::slot1
	int32_t ___slot1_5;
	// System.Int32 WIFINetworkManager::slot2
	int32_t ___slot2_6;
	// System.Int32 WIFINetworkManager::slot3
	int32_t ___slot3_7;
	// System.Int32 WIFINetworkManager::slot4
	int32_t ___slot4_8;
	// UnityEngine.UI.Image WIFINetworkManager::nameHolder
	Image_t2670269651 * ___nameHolder_9;
	// System.String[] WIFINetworkManager::wifiNames
	StringU5BU5D_t1281789340* ___wifiNames_10;
	// System.Int32 WIFINetworkManager::secured
	int32_t ___secured_11;
	// System.String WIFINetworkManager::correctAnswer
	String_t* ___correctAnswer_12;
	// UnityEngine.Animator WIFINetworkManager::button1
	Animator_t434523843 * ___button1_13;
	// UnityEngine.Animator WIFINetworkManager::button2
	Animator_t434523843 * ___button2_14;
	// UnityEngine.Animator WIFINetworkManager::button3
	Animator_t434523843 * ___button3_15;
	// UnityEngine.Animator WIFINetworkManager::button4
	Animator_t434523843 * ___button4_16;
	// UnityEngine.GameObject WIFINetworkManager::timer
	GameObject_t1113636619 * ___timer_17;

public:
	inline static int32_t get_offset_of_wifi_2() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___wifi_2)); }
	inline GameObjectU5BU5D_t3328599146* get_wifi_2() const { return ___wifi_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_wifi_2() { return &___wifi_2; }
	inline void set_wifi_2(GameObjectU5BU5D_t3328599146* value)
	{
		___wifi_2 = value;
		Il2CppCodeGenWriteBarrier((&___wifi_2), value);
	}

	inline static int32_t get_offset_of_pics_3() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___pics_3)); }
	inline SpriteU5BU5D_t2581906349* get_pics_3() const { return ___pics_3; }
	inline SpriteU5BU5D_t2581906349** get_address_of_pics_3() { return &___pics_3; }
	inline void set_pics_3(SpriteU5BU5D_t2581906349* value)
	{
		___pics_3 = value;
		Il2CppCodeGenWriteBarrier((&___pics_3), value);
	}

	inline static int32_t get_offset_of_hint_4() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___hint_4)); }
	inline GameObject_t1113636619 * get_hint_4() const { return ___hint_4; }
	inline GameObject_t1113636619 ** get_address_of_hint_4() { return &___hint_4; }
	inline void set_hint_4(GameObject_t1113636619 * value)
	{
		___hint_4 = value;
		Il2CppCodeGenWriteBarrier((&___hint_4), value);
	}

	inline static int32_t get_offset_of_slot1_5() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___slot1_5)); }
	inline int32_t get_slot1_5() const { return ___slot1_5; }
	inline int32_t* get_address_of_slot1_5() { return &___slot1_5; }
	inline void set_slot1_5(int32_t value)
	{
		___slot1_5 = value;
	}

	inline static int32_t get_offset_of_slot2_6() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___slot2_6)); }
	inline int32_t get_slot2_6() const { return ___slot2_6; }
	inline int32_t* get_address_of_slot2_6() { return &___slot2_6; }
	inline void set_slot2_6(int32_t value)
	{
		___slot2_6 = value;
	}

	inline static int32_t get_offset_of_slot3_7() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___slot3_7)); }
	inline int32_t get_slot3_7() const { return ___slot3_7; }
	inline int32_t* get_address_of_slot3_7() { return &___slot3_7; }
	inline void set_slot3_7(int32_t value)
	{
		___slot3_7 = value;
	}

	inline static int32_t get_offset_of_slot4_8() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___slot4_8)); }
	inline int32_t get_slot4_8() const { return ___slot4_8; }
	inline int32_t* get_address_of_slot4_8() { return &___slot4_8; }
	inline void set_slot4_8(int32_t value)
	{
		___slot4_8 = value;
	}

	inline static int32_t get_offset_of_nameHolder_9() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___nameHolder_9)); }
	inline Image_t2670269651 * get_nameHolder_9() const { return ___nameHolder_9; }
	inline Image_t2670269651 ** get_address_of_nameHolder_9() { return &___nameHolder_9; }
	inline void set_nameHolder_9(Image_t2670269651 * value)
	{
		___nameHolder_9 = value;
		Il2CppCodeGenWriteBarrier((&___nameHolder_9), value);
	}

	inline static int32_t get_offset_of_wifiNames_10() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___wifiNames_10)); }
	inline StringU5BU5D_t1281789340* get_wifiNames_10() const { return ___wifiNames_10; }
	inline StringU5BU5D_t1281789340** get_address_of_wifiNames_10() { return &___wifiNames_10; }
	inline void set_wifiNames_10(StringU5BU5D_t1281789340* value)
	{
		___wifiNames_10 = value;
		Il2CppCodeGenWriteBarrier((&___wifiNames_10), value);
	}

	inline static int32_t get_offset_of_secured_11() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___secured_11)); }
	inline int32_t get_secured_11() const { return ___secured_11; }
	inline int32_t* get_address_of_secured_11() { return &___secured_11; }
	inline void set_secured_11(int32_t value)
	{
		___secured_11 = value;
	}

	inline static int32_t get_offset_of_correctAnswer_12() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___correctAnswer_12)); }
	inline String_t* get_correctAnswer_12() const { return ___correctAnswer_12; }
	inline String_t** get_address_of_correctAnswer_12() { return &___correctAnswer_12; }
	inline void set_correctAnswer_12(String_t* value)
	{
		___correctAnswer_12 = value;
		Il2CppCodeGenWriteBarrier((&___correctAnswer_12), value);
	}

	inline static int32_t get_offset_of_button1_13() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___button1_13)); }
	inline Animator_t434523843 * get_button1_13() const { return ___button1_13; }
	inline Animator_t434523843 ** get_address_of_button1_13() { return &___button1_13; }
	inline void set_button1_13(Animator_t434523843 * value)
	{
		___button1_13 = value;
		Il2CppCodeGenWriteBarrier((&___button1_13), value);
	}

	inline static int32_t get_offset_of_button2_14() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___button2_14)); }
	inline Animator_t434523843 * get_button2_14() const { return ___button2_14; }
	inline Animator_t434523843 ** get_address_of_button2_14() { return &___button2_14; }
	inline void set_button2_14(Animator_t434523843 * value)
	{
		___button2_14 = value;
		Il2CppCodeGenWriteBarrier((&___button2_14), value);
	}

	inline static int32_t get_offset_of_button3_15() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___button3_15)); }
	inline Animator_t434523843 * get_button3_15() const { return ___button3_15; }
	inline Animator_t434523843 ** get_address_of_button3_15() { return &___button3_15; }
	inline void set_button3_15(Animator_t434523843 * value)
	{
		___button3_15 = value;
		Il2CppCodeGenWriteBarrier((&___button3_15), value);
	}

	inline static int32_t get_offset_of_button4_16() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___button4_16)); }
	inline Animator_t434523843 * get_button4_16() const { return ___button4_16; }
	inline Animator_t434523843 ** get_address_of_button4_16() { return &___button4_16; }
	inline void set_button4_16(Animator_t434523843 * value)
	{
		___button4_16 = value;
		Il2CppCodeGenWriteBarrier((&___button4_16), value);
	}

	inline static int32_t get_offset_of_timer_17() { return static_cast<int32_t>(offsetof(WIFINetworkManager_t1080793997, ___timer_17)); }
	inline GameObject_t1113636619 * get_timer_17() const { return ___timer_17; }
	inline GameObject_t1113636619 ** get_address_of_timer_17() { return &___timer_17; }
	inline void set_timer_17(GameObject_t1113636619 * value)
	{
		___timer_17 = value;
		Il2CppCodeGenWriteBarrier((&___timer_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIFINETWORKMANAGER_T1080793997_H
#ifndef THRESHOLD_T4008198305_H
#define THRESHOLD_T4008198305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// threshold
struct  threshold_t4008198305  : public MonoBehaviour_t3962482529
{
public:
	// System.Single threshold::AlphaThreshold
	float ___AlphaThreshold_2;

public:
	inline static int32_t get_offset_of_AlphaThreshold_2() { return static_cast<int32_t>(offsetof(threshold_t4008198305, ___AlphaThreshold_2)); }
	inline float get_AlphaThreshold_2() const { return ___AlphaThreshold_2; }
	inline float* get_address_of_AlphaThreshold_2() { return &___AlphaThreshold_2; }
	inline void set_AlphaThreshold_2(float value)
	{
		___AlphaThreshold_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THRESHOLD_T4008198305_H
#ifndef TIMER_T4185932343_H
#define TIMER_T4185932343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t4185932343  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator Timer::parent
	Animator_t434523843 * ___parent_2;
	// System.Boolean Timer::timesUp
	bool ___timesUp_3;
	// UnityEngine.GameObject Timer::main
	GameObject_t1113636619 * ___main_4;
	// UnityEngine.GameObject Timer::wifiNetwork
	GameObject_t1113636619 * ___wifiNetwork_5;
	// UnityEngine.GameObject Timer::cleared
	GameObject_t1113636619 * ___cleared_6;
	// System.Single Timer::length
	float ___length_7;
	// UnityEngine.UI.Text Timer::text
	Text_t1901882714 * ___text_8;
	// UnityEngine.UI.Text Timer::addOrSubtract
	Text_t1901882714 * ___addOrSubtract_9;
	// UnityEngine.UI.Text Timer::connections
	Text_t1901882714 * ___connections_10;
	// UnityEngine.GameObject Timer::fadeout
	GameObject_t1113636619 * ___fadeout_11;
	// System.Int32 Timer::multiplier
	int32_t ___multiplier_12;
	// UnityEngine.AudioSource Timer::canvasAudio
	AudioSource_t3935305588 * ___canvasAudio_13;
	// UnityEngine.AudioClip Timer::failed
	AudioClip_t3680889665 * ___failed_14;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___parent_2)); }
	inline Animator_t434523843 * get_parent_2() const { return ___parent_2; }
	inline Animator_t434523843 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(Animator_t434523843 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((&___parent_2), value);
	}

	inline static int32_t get_offset_of_timesUp_3() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___timesUp_3)); }
	inline bool get_timesUp_3() const { return ___timesUp_3; }
	inline bool* get_address_of_timesUp_3() { return &___timesUp_3; }
	inline void set_timesUp_3(bool value)
	{
		___timesUp_3 = value;
	}

	inline static int32_t get_offset_of_main_4() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___main_4)); }
	inline GameObject_t1113636619 * get_main_4() const { return ___main_4; }
	inline GameObject_t1113636619 ** get_address_of_main_4() { return &___main_4; }
	inline void set_main_4(GameObject_t1113636619 * value)
	{
		___main_4 = value;
		Il2CppCodeGenWriteBarrier((&___main_4), value);
	}

	inline static int32_t get_offset_of_wifiNetwork_5() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___wifiNetwork_5)); }
	inline GameObject_t1113636619 * get_wifiNetwork_5() const { return ___wifiNetwork_5; }
	inline GameObject_t1113636619 ** get_address_of_wifiNetwork_5() { return &___wifiNetwork_5; }
	inline void set_wifiNetwork_5(GameObject_t1113636619 * value)
	{
		___wifiNetwork_5 = value;
		Il2CppCodeGenWriteBarrier((&___wifiNetwork_5), value);
	}

	inline static int32_t get_offset_of_cleared_6() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___cleared_6)); }
	inline GameObject_t1113636619 * get_cleared_6() const { return ___cleared_6; }
	inline GameObject_t1113636619 ** get_address_of_cleared_6() { return &___cleared_6; }
	inline void set_cleared_6(GameObject_t1113636619 * value)
	{
		___cleared_6 = value;
		Il2CppCodeGenWriteBarrier((&___cleared_6), value);
	}

	inline static int32_t get_offset_of_length_7() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___length_7)); }
	inline float get_length_7() const { return ___length_7; }
	inline float* get_address_of_length_7() { return &___length_7; }
	inline void set_length_7(float value)
	{
		___length_7 = value;
	}

	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___text_8)); }
	inline Text_t1901882714 * get_text_8() const { return ___text_8; }
	inline Text_t1901882714 ** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(Text_t1901882714 * value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier((&___text_8), value);
	}

	inline static int32_t get_offset_of_addOrSubtract_9() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___addOrSubtract_9)); }
	inline Text_t1901882714 * get_addOrSubtract_9() const { return ___addOrSubtract_9; }
	inline Text_t1901882714 ** get_address_of_addOrSubtract_9() { return &___addOrSubtract_9; }
	inline void set_addOrSubtract_9(Text_t1901882714 * value)
	{
		___addOrSubtract_9 = value;
		Il2CppCodeGenWriteBarrier((&___addOrSubtract_9), value);
	}

	inline static int32_t get_offset_of_connections_10() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___connections_10)); }
	inline Text_t1901882714 * get_connections_10() const { return ___connections_10; }
	inline Text_t1901882714 ** get_address_of_connections_10() { return &___connections_10; }
	inline void set_connections_10(Text_t1901882714 * value)
	{
		___connections_10 = value;
		Il2CppCodeGenWriteBarrier((&___connections_10), value);
	}

	inline static int32_t get_offset_of_fadeout_11() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___fadeout_11)); }
	inline GameObject_t1113636619 * get_fadeout_11() const { return ___fadeout_11; }
	inline GameObject_t1113636619 ** get_address_of_fadeout_11() { return &___fadeout_11; }
	inline void set_fadeout_11(GameObject_t1113636619 * value)
	{
		___fadeout_11 = value;
		Il2CppCodeGenWriteBarrier((&___fadeout_11), value);
	}

	inline static int32_t get_offset_of_multiplier_12() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___multiplier_12)); }
	inline int32_t get_multiplier_12() const { return ___multiplier_12; }
	inline int32_t* get_address_of_multiplier_12() { return &___multiplier_12; }
	inline void set_multiplier_12(int32_t value)
	{
		___multiplier_12 = value;
	}

	inline static int32_t get_offset_of_canvasAudio_13() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___canvasAudio_13)); }
	inline AudioSource_t3935305588 * get_canvasAudio_13() const { return ___canvasAudio_13; }
	inline AudioSource_t3935305588 ** get_address_of_canvasAudio_13() { return &___canvasAudio_13; }
	inline void set_canvasAudio_13(AudioSource_t3935305588 * value)
	{
		___canvasAudio_13 = value;
		Il2CppCodeGenWriteBarrier((&___canvasAudio_13), value);
	}

	inline static int32_t get_offset_of_failed_14() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___failed_14)); }
	inline AudioClip_t3680889665 * get_failed_14() const { return ___failed_14; }
	inline AudioClip_t3680889665 ** get_address_of_failed_14() { return &___failed_14; }
	inline void set_failed_14(AudioClip_t3680889665 * value)
	{
		___failed_14 = value;
		Il2CppCodeGenWriteBarrier((&___failed_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T4185932343_H
#ifndef BOXCOLLIDER2D_T3581341831_H
#define BOXCOLLIDER2D_T3581341831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3581341831  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3581341831_H
#ifndef TEXTBOXMANAGER_T1855233713_H
#define TEXTBOXMANAGER_T1855233713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextBoxManager
struct  TextBoxManager_t1855233713  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TextBoxManager::textBox
	GameObject_t1113636619 * ___textBox_2;
	// UnityEngine.UI.Text TextBoxManager::testText
	Text_t1901882714 * ___testText_3;
	// UnityEngine.UI.Text TextBoxManager::mainUIText
	Text_t1901882714 * ___mainUIText_4;
	// UnityEngine.UI.Text TextBoxManager::optionText
	Text_t1901882714 * ___optionText_5;
	// System.Int32 TextBoxManager::selectOption
	int32_t ___selectOption_6;
	// UnityEngine.UI.Button TextBoxManager::button1
	Button_t4055032469 * ___button1_7;
	// UnityEngine.UI.Button TextBoxManager::button2
	Button_t4055032469 * ___button2_8;
	// UnityEngine.UI.Button TextBoxManager::button3
	Button_t4055032469 * ___button3_9;
	// UnityEngine.UI.Button TextBoxManager::button4
	Button_t4055032469 * ___button4_10;
	// System.Int32[] TextBoxManager::destinationCount
	Int32U5BU5D_t385246372* ___destinationCount_11;
	// System.String[] TextBoxManager::scripts
	StringU5BU5D_t1281789340* ___scripts_12;
	// System.Int32 TextBoxManager::count
	int32_t ___count_13;
	// System.Int32 TextBoxManager::nodeTracker
	int32_t ___nodeTracker_14;
	// UnityEngine.UI.InputField TextBoxManager::nameField
	InputField_t3762917431 * ___nameField_15;
	// System.String TextBoxManager::username
	String_t* ___username_16;
	// System.Boolean TextBoxManager::isTyping
	bool ___isTyping_17;
	// System.Boolean TextBoxManager::cancelTyping
	bool ___cancelTyping_18;
	// System.Int32 TextBoxManager::score
	int32_t ___score_19;
	// System.String TextBoxManager::optionTextHolder
	String_t* ___optionTextHolder_20;
	// UnityEngine.Animator TextBoxManager::anim
	Animator_t434523843 * ___anim_21;
	// UnityEngine.UI.Image TextBoxManager::black
	Image_t2670269651 * ___black_22;

public:
	inline static int32_t get_offset_of_textBox_2() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___textBox_2)); }
	inline GameObject_t1113636619 * get_textBox_2() const { return ___textBox_2; }
	inline GameObject_t1113636619 ** get_address_of_textBox_2() { return &___textBox_2; }
	inline void set_textBox_2(GameObject_t1113636619 * value)
	{
		___textBox_2 = value;
		Il2CppCodeGenWriteBarrier((&___textBox_2), value);
	}

	inline static int32_t get_offset_of_testText_3() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___testText_3)); }
	inline Text_t1901882714 * get_testText_3() const { return ___testText_3; }
	inline Text_t1901882714 ** get_address_of_testText_3() { return &___testText_3; }
	inline void set_testText_3(Text_t1901882714 * value)
	{
		___testText_3 = value;
		Il2CppCodeGenWriteBarrier((&___testText_3), value);
	}

	inline static int32_t get_offset_of_mainUIText_4() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___mainUIText_4)); }
	inline Text_t1901882714 * get_mainUIText_4() const { return ___mainUIText_4; }
	inline Text_t1901882714 ** get_address_of_mainUIText_4() { return &___mainUIText_4; }
	inline void set_mainUIText_4(Text_t1901882714 * value)
	{
		___mainUIText_4 = value;
		Il2CppCodeGenWriteBarrier((&___mainUIText_4), value);
	}

	inline static int32_t get_offset_of_optionText_5() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___optionText_5)); }
	inline Text_t1901882714 * get_optionText_5() const { return ___optionText_5; }
	inline Text_t1901882714 ** get_address_of_optionText_5() { return &___optionText_5; }
	inline void set_optionText_5(Text_t1901882714 * value)
	{
		___optionText_5 = value;
		Il2CppCodeGenWriteBarrier((&___optionText_5), value);
	}

	inline static int32_t get_offset_of_selectOption_6() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___selectOption_6)); }
	inline int32_t get_selectOption_6() const { return ___selectOption_6; }
	inline int32_t* get_address_of_selectOption_6() { return &___selectOption_6; }
	inline void set_selectOption_6(int32_t value)
	{
		___selectOption_6 = value;
	}

	inline static int32_t get_offset_of_button1_7() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___button1_7)); }
	inline Button_t4055032469 * get_button1_7() const { return ___button1_7; }
	inline Button_t4055032469 ** get_address_of_button1_7() { return &___button1_7; }
	inline void set_button1_7(Button_t4055032469 * value)
	{
		___button1_7 = value;
		Il2CppCodeGenWriteBarrier((&___button1_7), value);
	}

	inline static int32_t get_offset_of_button2_8() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___button2_8)); }
	inline Button_t4055032469 * get_button2_8() const { return ___button2_8; }
	inline Button_t4055032469 ** get_address_of_button2_8() { return &___button2_8; }
	inline void set_button2_8(Button_t4055032469 * value)
	{
		___button2_8 = value;
		Il2CppCodeGenWriteBarrier((&___button2_8), value);
	}

	inline static int32_t get_offset_of_button3_9() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___button3_9)); }
	inline Button_t4055032469 * get_button3_9() const { return ___button3_9; }
	inline Button_t4055032469 ** get_address_of_button3_9() { return &___button3_9; }
	inline void set_button3_9(Button_t4055032469 * value)
	{
		___button3_9 = value;
		Il2CppCodeGenWriteBarrier((&___button3_9), value);
	}

	inline static int32_t get_offset_of_button4_10() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___button4_10)); }
	inline Button_t4055032469 * get_button4_10() const { return ___button4_10; }
	inline Button_t4055032469 ** get_address_of_button4_10() { return &___button4_10; }
	inline void set_button4_10(Button_t4055032469 * value)
	{
		___button4_10 = value;
		Il2CppCodeGenWriteBarrier((&___button4_10), value);
	}

	inline static int32_t get_offset_of_destinationCount_11() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___destinationCount_11)); }
	inline Int32U5BU5D_t385246372* get_destinationCount_11() const { return ___destinationCount_11; }
	inline Int32U5BU5D_t385246372** get_address_of_destinationCount_11() { return &___destinationCount_11; }
	inline void set_destinationCount_11(Int32U5BU5D_t385246372* value)
	{
		___destinationCount_11 = value;
		Il2CppCodeGenWriteBarrier((&___destinationCount_11), value);
	}

	inline static int32_t get_offset_of_scripts_12() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___scripts_12)); }
	inline StringU5BU5D_t1281789340* get_scripts_12() const { return ___scripts_12; }
	inline StringU5BU5D_t1281789340** get_address_of_scripts_12() { return &___scripts_12; }
	inline void set_scripts_12(StringU5BU5D_t1281789340* value)
	{
		___scripts_12 = value;
		Il2CppCodeGenWriteBarrier((&___scripts_12), value);
	}

	inline static int32_t get_offset_of_count_13() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___count_13)); }
	inline int32_t get_count_13() const { return ___count_13; }
	inline int32_t* get_address_of_count_13() { return &___count_13; }
	inline void set_count_13(int32_t value)
	{
		___count_13 = value;
	}

	inline static int32_t get_offset_of_nodeTracker_14() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___nodeTracker_14)); }
	inline int32_t get_nodeTracker_14() const { return ___nodeTracker_14; }
	inline int32_t* get_address_of_nodeTracker_14() { return &___nodeTracker_14; }
	inline void set_nodeTracker_14(int32_t value)
	{
		___nodeTracker_14 = value;
	}

	inline static int32_t get_offset_of_nameField_15() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___nameField_15)); }
	inline InputField_t3762917431 * get_nameField_15() const { return ___nameField_15; }
	inline InputField_t3762917431 ** get_address_of_nameField_15() { return &___nameField_15; }
	inline void set_nameField_15(InputField_t3762917431 * value)
	{
		___nameField_15 = value;
		Il2CppCodeGenWriteBarrier((&___nameField_15), value);
	}

	inline static int32_t get_offset_of_username_16() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___username_16)); }
	inline String_t* get_username_16() const { return ___username_16; }
	inline String_t** get_address_of_username_16() { return &___username_16; }
	inline void set_username_16(String_t* value)
	{
		___username_16 = value;
		Il2CppCodeGenWriteBarrier((&___username_16), value);
	}

	inline static int32_t get_offset_of_isTyping_17() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___isTyping_17)); }
	inline bool get_isTyping_17() const { return ___isTyping_17; }
	inline bool* get_address_of_isTyping_17() { return &___isTyping_17; }
	inline void set_isTyping_17(bool value)
	{
		___isTyping_17 = value;
	}

	inline static int32_t get_offset_of_cancelTyping_18() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___cancelTyping_18)); }
	inline bool get_cancelTyping_18() const { return ___cancelTyping_18; }
	inline bool* get_address_of_cancelTyping_18() { return &___cancelTyping_18; }
	inline void set_cancelTyping_18(bool value)
	{
		___cancelTyping_18 = value;
	}

	inline static int32_t get_offset_of_score_19() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___score_19)); }
	inline int32_t get_score_19() const { return ___score_19; }
	inline int32_t* get_address_of_score_19() { return &___score_19; }
	inline void set_score_19(int32_t value)
	{
		___score_19 = value;
	}

	inline static int32_t get_offset_of_optionTextHolder_20() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___optionTextHolder_20)); }
	inline String_t* get_optionTextHolder_20() const { return ___optionTextHolder_20; }
	inline String_t** get_address_of_optionTextHolder_20() { return &___optionTextHolder_20; }
	inline void set_optionTextHolder_20(String_t* value)
	{
		___optionTextHolder_20 = value;
		Il2CppCodeGenWriteBarrier((&___optionTextHolder_20), value);
	}

	inline static int32_t get_offset_of_anim_21() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___anim_21)); }
	inline Animator_t434523843 * get_anim_21() const { return ___anim_21; }
	inline Animator_t434523843 ** get_address_of_anim_21() { return &___anim_21; }
	inline void set_anim_21(Animator_t434523843 * value)
	{
		___anim_21 = value;
		Il2CppCodeGenWriteBarrier((&___anim_21), value);
	}

	inline static int32_t get_offset_of_black_22() { return static_cast<int32_t>(offsetof(TextBoxManager_t1855233713, ___black_22)); }
	inline Image_t2670269651 * get_black_22() const { return ___black_22; }
	inline Image_t2670269651 ** get_address_of_black_22() { return &___black_22; }
	inline void set_black_22(Image_t2670269651 * value)
	{
		___black_22 = value;
		Il2CppCodeGenWriteBarrier((&___black_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTBOXMANAGER_T1855233713_H
#ifndef WIFITOGGLEMANAGER_T3203504582_H
#define WIFITOGGLEMANAGER_T3203504582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WIFIToggleManager
struct  WIFIToggleManager_t3203504582  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] WIFIToggleManager::lockOrSignal
	GameObjectU5BU5D_t3328599146* ___lockOrSignal_2;
	// UnityEngine.Sprite WIFIToggleManager::locker
	Sprite_t280657092 * ___locker_3;
	// UnityEngine.Sprite WIFIToggleManager::signal
	Sprite_t280657092 * ___signal_4;
	// UnityEngine.Vector3[] WIFIToggleManager::origPos
	Vector3U5BU5D_t1718750761* ___origPos_5;
	// System.Int32 WIFIToggleManager::someValue
	int32_t ___someValue_6;
	// System.Int32 WIFIToggleManager::count
	int32_t ___count_7;
	// UnityEngine.Sprite WIFIToggleManager::blank
	Sprite_t280657092 * ___blank_8;

public:
	inline static int32_t get_offset_of_lockOrSignal_2() { return static_cast<int32_t>(offsetof(WIFIToggleManager_t3203504582, ___lockOrSignal_2)); }
	inline GameObjectU5BU5D_t3328599146* get_lockOrSignal_2() const { return ___lockOrSignal_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_lockOrSignal_2() { return &___lockOrSignal_2; }
	inline void set_lockOrSignal_2(GameObjectU5BU5D_t3328599146* value)
	{
		___lockOrSignal_2 = value;
		Il2CppCodeGenWriteBarrier((&___lockOrSignal_2), value);
	}

	inline static int32_t get_offset_of_locker_3() { return static_cast<int32_t>(offsetof(WIFIToggleManager_t3203504582, ___locker_3)); }
	inline Sprite_t280657092 * get_locker_3() const { return ___locker_3; }
	inline Sprite_t280657092 ** get_address_of_locker_3() { return &___locker_3; }
	inline void set_locker_3(Sprite_t280657092 * value)
	{
		___locker_3 = value;
		Il2CppCodeGenWriteBarrier((&___locker_3), value);
	}

	inline static int32_t get_offset_of_signal_4() { return static_cast<int32_t>(offsetof(WIFIToggleManager_t3203504582, ___signal_4)); }
	inline Sprite_t280657092 * get_signal_4() const { return ___signal_4; }
	inline Sprite_t280657092 ** get_address_of_signal_4() { return &___signal_4; }
	inline void set_signal_4(Sprite_t280657092 * value)
	{
		___signal_4 = value;
		Il2CppCodeGenWriteBarrier((&___signal_4), value);
	}

	inline static int32_t get_offset_of_origPos_5() { return static_cast<int32_t>(offsetof(WIFIToggleManager_t3203504582, ___origPos_5)); }
	inline Vector3U5BU5D_t1718750761* get_origPos_5() const { return ___origPos_5; }
	inline Vector3U5BU5D_t1718750761** get_address_of_origPos_5() { return &___origPos_5; }
	inline void set_origPos_5(Vector3U5BU5D_t1718750761* value)
	{
		___origPos_5 = value;
		Il2CppCodeGenWriteBarrier((&___origPos_5), value);
	}

	inline static int32_t get_offset_of_someValue_6() { return static_cast<int32_t>(offsetof(WIFIToggleManager_t3203504582, ___someValue_6)); }
	inline int32_t get_someValue_6() const { return ___someValue_6; }
	inline int32_t* get_address_of_someValue_6() { return &___someValue_6; }
	inline void set_someValue_6(int32_t value)
	{
		___someValue_6 = value;
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(WIFIToggleManager_t3203504582, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_blank_8() { return static_cast<int32_t>(offsetof(WIFIToggleManager_t3203504582, ___blank_8)); }
	inline Sprite_t280657092 * get_blank_8() const { return ___blank_8; }
	inline Sprite_t280657092 ** get_address_of_blank_8() { return &___blank_8; }
	inline void set_blank_8(Sprite_t280657092 * value)
	{
		___blank_8 = value;
		Il2CppCodeGenWriteBarrier((&___blank_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIFITOGGLEMANAGER_T3203504582_H
#ifndef TIPMANAGER_T3568936214_H
#define TIPMANAGER_T3568936214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TipManager
struct  TipManager_t3568936214  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TipManager::tipBoxMain
	GameObject_t1113636619 * ___tipBoxMain_2;
	// UnityEngine.UI.Image TipManager::tipBox
	Image_t2670269651 * ___tipBox_3;
	// UnityEngine.Animator TipManager::anim
	Animator_t434523843 * ___anim_4;
	// UnityEngine.GameObject TipManager::tipIcon
	GameObject_t1113636619 * ___tipIcon_5;

public:
	inline static int32_t get_offset_of_tipBoxMain_2() { return static_cast<int32_t>(offsetof(TipManager_t3568936214, ___tipBoxMain_2)); }
	inline GameObject_t1113636619 * get_tipBoxMain_2() const { return ___tipBoxMain_2; }
	inline GameObject_t1113636619 ** get_address_of_tipBoxMain_2() { return &___tipBoxMain_2; }
	inline void set_tipBoxMain_2(GameObject_t1113636619 * value)
	{
		___tipBoxMain_2 = value;
		Il2CppCodeGenWriteBarrier((&___tipBoxMain_2), value);
	}

	inline static int32_t get_offset_of_tipBox_3() { return static_cast<int32_t>(offsetof(TipManager_t3568936214, ___tipBox_3)); }
	inline Image_t2670269651 * get_tipBox_3() const { return ___tipBox_3; }
	inline Image_t2670269651 ** get_address_of_tipBox_3() { return &___tipBox_3; }
	inline void set_tipBox_3(Image_t2670269651 * value)
	{
		___tipBox_3 = value;
		Il2CppCodeGenWriteBarrier((&___tipBox_3), value);
	}

	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(TipManager_t3568936214, ___anim_4)); }
	inline Animator_t434523843 * get_anim_4() const { return ___anim_4; }
	inline Animator_t434523843 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t434523843 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((&___anim_4), value);
	}

	inline static int32_t get_offset_of_tipIcon_5() { return static_cast<int32_t>(offsetof(TipManager_t3568936214, ___tipIcon_5)); }
	inline GameObject_t1113636619 * get_tipIcon_5() const { return ___tipIcon_5; }
	inline GameObject_t1113636619 ** get_address_of_tipIcon_5() { return &___tipIcon_5; }
	inline void set_tipIcon_5(GameObject_t1113636619 * value)
	{
		___tipIcon_5 = value;
		Il2CppCodeGenWriteBarrier((&___tipIcon_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIPMANAGER_T3568936214_H
#ifndef PRIVACYSTATEHANDLER_T2222435893_H
#define PRIVACYSTATEHANDLER_T2222435893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PrivacyStateHandler
struct  PrivacyStateHandler_t2222435893  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PrivacyStateHandler::camera
	GameObject_t1113636619 * ___camera_2;
	// UnityEngine.GameObject PrivacyStateHandler::parent
	GameObject_t1113636619 * ___parent_3;
	// System.Int32 PrivacyStateHandler::privacyAmmount
	int32_t ___privacyAmmount_4;
	// UnityEngine.UI.Text PrivacyStateHandler::privacyCountText
	Text_t1901882714 * ___privacyCountText_5;

public:
	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(PrivacyStateHandler_t2222435893, ___camera_2)); }
	inline GameObject_t1113636619 * get_camera_2() const { return ___camera_2; }
	inline GameObject_t1113636619 ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(GameObject_t1113636619 * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier((&___camera_2), value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(PrivacyStateHandler_t2222435893, ___parent_3)); }
	inline GameObject_t1113636619 * get_parent_3() const { return ___parent_3; }
	inline GameObject_t1113636619 ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(GameObject_t1113636619 * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((&___parent_3), value);
	}

	inline static int32_t get_offset_of_privacyAmmount_4() { return static_cast<int32_t>(offsetof(PrivacyStateHandler_t2222435893, ___privacyAmmount_4)); }
	inline int32_t get_privacyAmmount_4() const { return ___privacyAmmount_4; }
	inline int32_t* get_address_of_privacyAmmount_4() { return &___privacyAmmount_4; }
	inline void set_privacyAmmount_4(int32_t value)
	{
		___privacyAmmount_4 = value;
	}

	inline static int32_t get_offset_of_privacyCountText_5() { return static_cast<int32_t>(offsetof(PrivacyStateHandler_t2222435893, ___privacyCountText_5)); }
	inline Text_t1901882714 * get_privacyCountText_5() const { return ___privacyCountText_5; }
	inline Text_t1901882714 ** get_address_of_privacyCountText_5() { return &___privacyCountText_5; }
	inline void set_privacyCountText_5(Text_t1901882714 * value)
	{
		___privacyCountText_5 = value;
		Il2CppCodeGenWriteBarrier((&___privacyCountText_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVACYSTATEHANDLER_T2222435893_H
#ifndef NPCDIALOGUE_T1608584690_H
#define NPCDIALOGUE_T1608584690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NpcDialogue
struct  NpcDialogue_t1608584690  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject NpcDialogue::leftBubble
	GameObject_t1113636619 * ___leftBubble_2;
	// UnityEngine.GameObject NpcDialogue::rightBubble
	GameObject_t1113636619 * ___rightBubble_3;
	// UnityEngine.UI.Text NpcDialogue::leftBubbleText
	Text_t1901882714 * ___leftBubbleText_4;
	// UnityEngine.UI.Text NpcDialogue::rightBubbleText
	Text_t1901882714 * ___rightBubbleText_5;
	// UnityEngine.UI.Image NpcDialogue::leftBubbleBlack
	Image_t2670269651 * ___leftBubbleBlack_6;
	// UnityEngine.UI.Image NpcDialogue::rightBubbleBlack
	Image_t2670269651 * ___rightBubbleBlack_7;
	// UnityEngine.Animator NpcDialogue::leftBubbleAnim
	Animator_t434523843 * ___leftBubbleAnim_8;
	// UnityEngine.Animator NpcDialogue::rightBubbleAnim
	Animator_t434523843 * ___rightBubbleAnim_9;
	// System.Int32 NpcDialogue::Textcount
	int32_t ___Textcount_10;
	// System.String[] NpcDialogue::script
	StringU5BU5D_t1281789340* ___script_11;
	// System.Int32 NpcDialogue::random
	int32_t ___random_12;
	// System.Int32 NpcDialogue::birdScipt
	int32_t ___birdScipt_13;
	// System.Int32 NpcDialogue::fireScript
	int32_t ___fireScript_14;
	// System.Int32 NpcDialogue::lastNumber
	int32_t ___lastNumber_15;
	// UnityEngine.TextAsset NpcDialogue::xml
	TextAsset_t3022178571 * ___xml_16;

public:
	inline static int32_t get_offset_of_leftBubble_2() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___leftBubble_2)); }
	inline GameObject_t1113636619 * get_leftBubble_2() const { return ___leftBubble_2; }
	inline GameObject_t1113636619 ** get_address_of_leftBubble_2() { return &___leftBubble_2; }
	inline void set_leftBubble_2(GameObject_t1113636619 * value)
	{
		___leftBubble_2 = value;
		Il2CppCodeGenWriteBarrier((&___leftBubble_2), value);
	}

	inline static int32_t get_offset_of_rightBubble_3() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___rightBubble_3)); }
	inline GameObject_t1113636619 * get_rightBubble_3() const { return ___rightBubble_3; }
	inline GameObject_t1113636619 ** get_address_of_rightBubble_3() { return &___rightBubble_3; }
	inline void set_rightBubble_3(GameObject_t1113636619 * value)
	{
		___rightBubble_3 = value;
		Il2CppCodeGenWriteBarrier((&___rightBubble_3), value);
	}

	inline static int32_t get_offset_of_leftBubbleText_4() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___leftBubbleText_4)); }
	inline Text_t1901882714 * get_leftBubbleText_4() const { return ___leftBubbleText_4; }
	inline Text_t1901882714 ** get_address_of_leftBubbleText_4() { return &___leftBubbleText_4; }
	inline void set_leftBubbleText_4(Text_t1901882714 * value)
	{
		___leftBubbleText_4 = value;
		Il2CppCodeGenWriteBarrier((&___leftBubbleText_4), value);
	}

	inline static int32_t get_offset_of_rightBubbleText_5() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___rightBubbleText_5)); }
	inline Text_t1901882714 * get_rightBubbleText_5() const { return ___rightBubbleText_5; }
	inline Text_t1901882714 ** get_address_of_rightBubbleText_5() { return &___rightBubbleText_5; }
	inline void set_rightBubbleText_5(Text_t1901882714 * value)
	{
		___rightBubbleText_5 = value;
		Il2CppCodeGenWriteBarrier((&___rightBubbleText_5), value);
	}

	inline static int32_t get_offset_of_leftBubbleBlack_6() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___leftBubbleBlack_6)); }
	inline Image_t2670269651 * get_leftBubbleBlack_6() const { return ___leftBubbleBlack_6; }
	inline Image_t2670269651 ** get_address_of_leftBubbleBlack_6() { return &___leftBubbleBlack_6; }
	inline void set_leftBubbleBlack_6(Image_t2670269651 * value)
	{
		___leftBubbleBlack_6 = value;
		Il2CppCodeGenWriteBarrier((&___leftBubbleBlack_6), value);
	}

	inline static int32_t get_offset_of_rightBubbleBlack_7() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___rightBubbleBlack_7)); }
	inline Image_t2670269651 * get_rightBubbleBlack_7() const { return ___rightBubbleBlack_7; }
	inline Image_t2670269651 ** get_address_of_rightBubbleBlack_7() { return &___rightBubbleBlack_7; }
	inline void set_rightBubbleBlack_7(Image_t2670269651 * value)
	{
		___rightBubbleBlack_7 = value;
		Il2CppCodeGenWriteBarrier((&___rightBubbleBlack_7), value);
	}

	inline static int32_t get_offset_of_leftBubbleAnim_8() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___leftBubbleAnim_8)); }
	inline Animator_t434523843 * get_leftBubbleAnim_8() const { return ___leftBubbleAnim_8; }
	inline Animator_t434523843 ** get_address_of_leftBubbleAnim_8() { return &___leftBubbleAnim_8; }
	inline void set_leftBubbleAnim_8(Animator_t434523843 * value)
	{
		___leftBubbleAnim_8 = value;
		Il2CppCodeGenWriteBarrier((&___leftBubbleAnim_8), value);
	}

	inline static int32_t get_offset_of_rightBubbleAnim_9() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___rightBubbleAnim_9)); }
	inline Animator_t434523843 * get_rightBubbleAnim_9() const { return ___rightBubbleAnim_9; }
	inline Animator_t434523843 ** get_address_of_rightBubbleAnim_9() { return &___rightBubbleAnim_9; }
	inline void set_rightBubbleAnim_9(Animator_t434523843 * value)
	{
		___rightBubbleAnim_9 = value;
		Il2CppCodeGenWriteBarrier((&___rightBubbleAnim_9), value);
	}

	inline static int32_t get_offset_of_Textcount_10() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___Textcount_10)); }
	inline int32_t get_Textcount_10() const { return ___Textcount_10; }
	inline int32_t* get_address_of_Textcount_10() { return &___Textcount_10; }
	inline void set_Textcount_10(int32_t value)
	{
		___Textcount_10 = value;
	}

	inline static int32_t get_offset_of_script_11() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___script_11)); }
	inline StringU5BU5D_t1281789340* get_script_11() const { return ___script_11; }
	inline StringU5BU5D_t1281789340** get_address_of_script_11() { return &___script_11; }
	inline void set_script_11(StringU5BU5D_t1281789340* value)
	{
		___script_11 = value;
		Il2CppCodeGenWriteBarrier((&___script_11), value);
	}

	inline static int32_t get_offset_of_random_12() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___random_12)); }
	inline int32_t get_random_12() const { return ___random_12; }
	inline int32_t* get_address_of_random_12() { return &___random_12; }
	inline void set_random_12(int32_t value)
	{
		___random_12 = value;
	}

	inline static int32_t get_offset_of_birdScipt_13() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___birdScipt_13)); }
	inline int32_t get_birdScipt_13() const { return ___birdScipt_13; }
	inline int32_t* get_address_of_birdScipt_13() { return &___birdScipt_13; }
	inline void set_birdScipt_13(int32_t value)
	{
		___birdScipt_13 = value;
	}

	inline static int32_t get_offset_of_fireScript_14() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___fireScript_14)); }
	inline int32_t get_fireScript_14() const { return ___fireScript_14; }
	inline int32_t* get_address_of_fireScript_14() { return &___fireScript_14; }
	inline void set_fireScript_14(int32_t value)
	{
		___fireScript_14 = value;
	}

	inline static int32_t get_offset_of_lastNumber_15() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___lastNumber_15)); }
	inline int32_t get_lastNumber_15() const { return ___lastNumber_15; }
	inline int32_t* get_address_of_lastNumber_15() { return &___lastNumber_15; }
	inline void set_lastNumber_15(int32_t value)
	{
		___lastNumber_15 = value;
	}

	inline static int32_t get_offset_of_xml_16() { return static_cast<int32_t>(offsetof(NpcDialogue_t1608584690, ___xml_16)); }
	inline TextAsset_t3022178571 * get_xml_16() const { return ___xml_16; }
	inline TextAsset_t3022178571 ** get_address_of_xml_16() { return &___xml_16; }
	inline void set_xml_16(TextAsset_t3022178571 * value)
	{
		___xml_16 = value;
		Il2CppCodeGenWriteBarrier((&___xml_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NPCDIALOGUE_T1608584690_H
#ifndef FLAMEMANAGER_T1876929043_H
#define FLAMEMANAGER_T1876929043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlameManager
struct  FlameManager_t1876929043  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator FlameManager::campFire
	Animator_t434523843 * ___campFire_2;
	// UnityEngine.GameObject FlameManager::campFireObject
	GameObject_t1113636619 * ___campFireObject_3;
	// System.Int32 FlameManager::count
	int32_t ___count_4;
	// System.String[] FlameManager::animationState
	StringU5BU5D_t1281789340* ___animationState_5;
	// UnityEngine.GameObject FlameManager::flame
	GameObject_t1113636619 * ___flame_6;
	// System.Int32 FlameManager::countFlame
	int32_t ___countFlame_7;
	// UnityEngine.Vector3 FlameManager::mousePos
	Vector3_t3722313464  ___mousePos_8;
	// UnityEngine.Texture2D FlameManager::dropCursor
	Texture2D_t3840446185 * ___dropCursor_9;
	// UnityEngine.Texture2D FlameManager::defaultCursor
	Texture2D_t3840446185 * ___defaultCursor_10;
	// UnityEngine.CursorMode FlameManager::curMode
	int32_t ___curMode_11;
	// UnityEngine.Vector2 FlameManager::hotSpot
	Vector2_t2156229523  ___hotSpot_12;
	// UnityEngine.AudioSource FlameManager::dragAndDropSource
	AudioSource_t3935305588 * ___dragAndDropSource_13;
	// UnityEngine.AudioClip FlameManager::drag
	AudioClip_t3680889665 * ___drag_14;
	// UnityEngine.AudioClip FlameManager::drop
	AudioClip_t3680889665 * ___drop_15;
	// System.Boolean FlameManager::alreadyPlayed
	bool ___alreadyPlayed_16;
	// System.Boolean FlameManager::reachedLastAnimation
	bool ___reachedLastAnimation_17;
	// UnityEngine.GameObject FlameManager::npcDialogue
	GameObject_t1113636619 * ___npcDialogue_18;

public:
	inline static int32_t get_offset_of_campFire_2() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___campFire_2)); }
	inline Animator_t434523843 * get_campFire_2() const { return ___campFire_2; }
	inline Animator_t434523843 ** get_address_of_campFire_2() { return &___campFire_2; }
	inline void set_campFire_2(Animator_t434523843 * value)
	{
		___campFire_2 = value;
		Il2CppCodeGenWriteBarrier((&___campFire_2), value);
	}

	inline static int32_t get_offset_of_campFireObject_3() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___campFireObject_3)); }
	inline GameObject_t1113636619 * get_campFireObject_3() const { return ___campFireObject_3; }
	inline GameObject_t1113636619 ** get_address_of_campFireObject_3() { return &___campFireObject_3; }
	inline void set_campFireObject_3(GameObject_t1113636619 * value)
	{
		___campFireObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___campFireObject_3), value);
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}

	inline static int32_t get_offset_of_animationState_5() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___animationState_5)); }
	inline StringU5BU5D_t1281789340* get_animationState_5() const { return ___animationState_5; }
	inline StringU5BU5D_t1281789340** get_address_of_animationState_5() { return &___animationState_5; }
	inline void set_animationState_5(StringU5BU5D_t1281789340* value)
	{
		___animationState_5 = value;
		Il2CppCodeGenWriteBarrier((&___animationState_5), value);
	}

	inline static int32_t get_offset_of_flame_6() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___flame_6)); }
	inline GameObject_t1113636619 * get_flame_6() const { return ___flame_6; }
	inline GameObject_t1113636619 ** get_address_of_flame_6() { return &___flame_6; }
	inline void set_flame_6(GameObject_t1113636619 * value)
	{
		___flame_6 = value;
		Il2CppCodeGenWriteBarrier((&___flame_6), value);
	}

	inline static int32_t get_offset_of_countFlame_7() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___countFlame_7)); }
	inline int32_t get_countFlame_7() const { return ___countFlame_7; }
	inline int32_t* get_address_of_countFlame_7() { return &___countFlame_7; }
	inline void set_countFlame_7(int32_t value)
	{
		___countFlame_7 = value;
	}

	inline static int32_t get_offset_of_mousePos_8() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___mousePos_8)); }
	inline Vector3_t3722313464  get_mousePos_8() const { return ___mousePos_8; }
	inline Vector3_t3722313464 * get_address_of_mousePos_8() { return &___mousePos_8; }
	inline void set_mousePos_8(Vector3_t3722313464  value)
	{
		___mousePos_8 = value;
	}

	inline static int32_t get_offset_of_dropCursor_9() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___dropCursor_9)); }
	inline Texture2D_t3840446185 * get_dropCursor_9() const { return ___dropCursor_9; }
	inline Texture2D_t3840446185 ** get_address_of_dropCursor_9() { return &___dropCursor_9; }
	inline void set_dropCursor_9(Texture2D_t3840446185 * value)
	{
		___dropCursor_9 = value;
		Il2CppCodeGenWriteBarrier((&___dropCursor_9), value);
	}

	inline static int32_t get_offset_of_defaultCursor_10() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___defaultCursor_10)); }
	inline Texture2D_t3840446185 * get_defaultCursor_10() const { return ___defaultCursor_10; }
	inline Texture2D_t3840446185 ** get_address_of_defaultCursor_10() { return &___defaultCursor_10; }
	inline void set_defaultCursor_10(Texture2D_t3840446185 * value)
	{
		___defaultCursor_10 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCursor_10), value);
	}

	inline static int32_t get_offset_of_curMode_11() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___curMode_11)); }
	inline int32_t get_curMode_11() const { return ___curMode_11; }
	inline int32_t* get_address_of_curMode_11() { return &___curMode_11; }
	inline void set_curMode_11(int32_t value)
	{
		___curMode_11 = value;
	}

	inline static int32_t get_offset_of_hotSpot_12() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___hotSpot_12)); }
	inline Vector2_t2156229523  get_hotSpot_12() const { return ___hotSpot_12; }
	inline Vector2_t2156229523 * get_address_of_hotSpot_12() { return &___hotSpot_12; }
	inline void set_hotSpot_12(Vector2_t2156229523  value)
	{
		___hotSpot_12 = value;
	}

	inline static int32_t get_offset_of_dragAndDropSource_13() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___dragAndDropSource_13)); }
	inline AudioSource_t3935305588 * get_dragAndDropSource_13() const { return ___dragAndDropSource_13; }
	inline AudioSource_t3935305588 ** get_address_of_dragAndDropSource_13() { return &___dragAndDropSource_13; }
	inline void set_dragAndDropSource_13(AudioSource_t3935305588 * value)
	{
		___dragAndDropSource_13 = value;
		Il2CppCodeGenWriteBarrier((&___dragAndDropSource_13), value);
	}

	inline static int32_t get_offset_of_drag_14() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___drag_14)); }
	inline AudioClip_t3680889665 * get_drag_14() const { return ___drag_14; }
	inline AudioClip_t3680889665 ** get_address_of_drag_14() { return &___drag_14; }
	inline void set_drag_14(AudioClip_t3680889665 * value)
	{
		___drag_14 = value;
		Il2CppCodeGenWriteBarrier((&___drag_14), value);
	}

	inline static int32_t get_offset_of_drop_15() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___drop_15)); }
	inline AudioClip_t3680889665 * get_drop_15() const { return ___drop_15; }
	inline AudioClip_t3680889665 ** get_address_of_drop_15() { return &___drop_15; }
	inline void set_drop_15(AudioClip_t3680889665 * value)
	{
		___drop_15 = value;
		Il2CppCodeGenWriteBarrier((&___drop_15), value);
	}

	inline static int32_t get_offset_of_alreadyPlayed_16() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___alreadyPlayed_16)); }
	inline bool get_alreadyPlayed_16() const { return ___alreadyPlayed_16; }
	inline bool* get_address_of_alreadyPlayed_16() { return &___alreadyPlayed_16; }
	inline void set_alreadyPlayed_16(bool value)
	{
		___alreadyPlayed_16 = value;
	}

	inline static int32_t get_offset_of_reachedLastAnimation_17() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___reachedLastAnimation_17)); }
	inline bool get_reachedLastAnimation_17() const { return ___reachedLastAnimation_17; }
	inline bool* get_address_of_reachedLastAnimation_17() { return &___reachedLastAnimation_17; }
	inline void set_reachedLastAnimation_17(bool value)
	{
		___reachedLastAnimation_17 = value;
	}

	inline static int32_t get_offset_of_npcDialogue_18() { return static_cast<int32_t>(offsetof(FlameManager_t1876929043, ___npcDialogue_18)); }
	inline GameObject_t1113636619 * get_npcDialogue_18() const { return ___npcDialogue_18; }
	inline GameObject_t1113636619 ** get_address_of_npcDialogue_18() { return &___npcDialogue_18; }
	inline void set_npcDialogue_18(GameObject_t1113636619 * value)
	{
		___npcDialogue_18 = value;
		Il2CppCodeGenWriteBarrier((&___npcDialogue_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAMEMANAGER_T1876929043_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef INPUTFIELD_T3762917431_H
#define INPUTFIELD_T3762917431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t3762917431  : public Selectable_t3250028441
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t731888065 * ___m_Keyboard_16;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t1901882714 * ___m_TextComponent_18;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t1660335611 * ___m_Placeholder_19;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_20;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_21;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_22;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_23;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_24;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_25;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_26;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_27;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t648412432 * ___m_OnEndEdit_28;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t467195904 * ___m_OnValueChanged_29;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t2355412304 * ___m_OnValidateInput_30;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t2555686324  ___m_CaretColor_31;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t2555686324  ___m_SelectionColor_33;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_34;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_35;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_36;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_38;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_39;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3704657025 * ___caretRectTrans_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1981460040* ___m_CursorVerts_41;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t3211863866 * ___m_InputTextCache_42;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t2598313366 * ___m_CachedInputRenderer_43;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_44;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t3648964284 * ___m_Mesh_45;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_46;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_47;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_48;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_49;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t3829159415 * ___m_BlinkCoroutine_53;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_54;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_55;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t3829159415 * ___m_DragCoroutine_57;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_58;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_59;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_60;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t2956885303 * ___m_ProcessingEvent_62;

public:
	inline static int32_t get_offset_of_m_Keyboard_16() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Keyboard_16)); }
	inline TouchScreenKeyboard_t731888065 * get_m_Keyboard_16() const { return ___m_Keyboard_16; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_m_Keyboard_16() { return &___m_Keyboard_16; }
	inline void set_m_Keyboard_16(TouchScreenKeyboard_t731888065 * value)
	{
		___m_Keyboard_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Keyboard_16), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_18() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_TextComponent_18)); }
	inline Text_t1901882714 * get_m_TextComponent_18() const { return ___m_TextComponent_18; }
	inline Text_t1901882714 ** get_address_of_m_TextComponent_18() { return &___m_TextComponent_18; }
	inline void set_m_TextComponent_18(Text_t1901882714 * value)
	{
		___m_TextComponent_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_18), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_19() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Placeholder_19)); }
	inline Graphic_t1660335611 * get_m_Placeholder_19() const { return ___m_Placeholder_19; }
	inline Graphic_t1660335611 ** get_address_of_m_Placeholder_19() { return &___m_Placeholder_19; }
	inline void set_m_Placeholder_19(Graphic_t1660335611 * value)
	{
		___m_Placeholder_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_19), value);
	}

	inline static int32_t get_offset_of_m_ContentType_20() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ContentType_20)); }
	inline int32_t get_m_ContentType_20() const { return ___m_ContentType_20; }
	inline int32_t* get_address_of_m_ContentType_20() { return &___m_ContentType_20; }
	inline void set_m_ContentType_20(int32_t value)
	{
		___m_ContentType_20 = value;
	}

	inline static int32_t get_offset_of_m_InputType_21() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputType_21)); }
	inline int32_t get_m_InputType_21() const { return ___m_InputType_21; }
	inline int32_t* get_address_of_m_InputType_21() { return &___m_InputType_21; }
	inline void set_m_InputType_21(int32_t value)
	{
		___m_InputType_21 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_22() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AsteriskChar_22)); }
	inline Il2CppChar get_m_AsteriskChar_22() const { return ___m_AsteriskChar_22; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_22() { return &___m_AsteriskChar_22; }
	inline void set_m_AsteriskChar_22(Il2CppChar value)
	{
		___m_AsteriskChar_22 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_23() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_KeyboardType_23)); }
	inline int32_t get_m_KeyboardType_23() const { return ___m_KeyboardType_23; }
	inline int32_t* get_address_of_m_KeyboardType_23() { return &___m_KeyboardType_23; }
	inline void set_m_KeyboardType_23(int32_t value)
	{
		___m_KeyboardType_23 = value;
	}

	inline static int32_t get_offset_of_m_LineType_24() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_LineType_24)); }
	inline int32_t get_m_LineType_24() const { return ___m_LineType_24; }
	inline int32_t* get_address_of_m_LineType_24() { return &___m_LineType_24; }
	inline void set_m_LineType_24(int32_t value)
	{
		___m_LineType_24 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_25() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HideMobileInput_25)); }
	inline bool get_m_HideMobileInput_25() const { return ___m_HideMobileInput_25; }
	inline bool* get_address_of_m_HideMobileInput_25() { return &___m_HideMobileInput_25; }
	inline void set_m_HideMobileInput_25(bool value)
	{
		___m_HideMobileInput_25 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_26() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterValidation_26)); }
	inline int32_t get_m_CharacterValidation_26() const { return ___m_CharacterValidation_26; }
	inline int32_t* get_address_of_m_CharacterValidation_26() { return &___m_CharacterValidation_26; }
	inline void set_m_CharacterValidation_26(int32_t value)
	{
		___m_CharacterValidation_26 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_27() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterLimit_27)); }
	inline int32_t get_m_CharacterLimit_27() const { return ___m_CharacterLimit_27; }
	inline int32_t* get_address_of_m_CharacterLimit_27() { return &___m_CharacterLimit_27; }
	inline void set_m_CharacterLimit_27(int32_t value)
	{
		___m_CharacterLimit_27 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_28() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnEndEdit_28)); }
	inline SubmitEvent_t648412432 * get_m_OnEndEdit_28() const { return ___m_OnEndEdit_28; }
	inline SubmitEvent_t648412432 ** get_address_of_m_OnEndEdit_28() { return &___m_OnEndEdit_28; }
	inline void set_m_OnEndEdit_28(SubmitEvent_t648412432 * value)
	{
		___m_OnEndEdit_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEndEdit_28), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_29() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValueChanged_29)); }
	inline OnChangeEvent_t467195904 * get_m_OnValueChanged_29() const { return ___m_OnValueChanged_29; }
	inline OnChangeEvent_t467195904 ** get_address_of_m_OnValueChanged_29() { return &___m_OnValueChanged_29; }
	inline void set_m_OnValueChanged_29(OnChangeEvent_t467195904 * value)
	{
		___m_OnValueChanged_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_29), value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_30() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValidateInput_30)); }
	inline OnValidateInput_t2355412304 * get_m_OnValidateInput_30() const { return ___m_OnValidateInput_30; }
	inline OnValidateInput_t2355412304 ** get_address_of_m_OnValidateInput_30() { return &___m_OnValidateInput_30; }
	inline void set_m_OnValidateInput_30(OnValidateInput_t2355412304 * value)
	{
		___m_OnValidateInput_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValidateInput_30), value);
	}

	inline static int32_t get_offset_of_m_CaretColor_31() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretColor_31)); }
	inline Color_t2555686324  get_m_CaretColor_31() const { return ___m_CaretColor_31; }
	inline Color_t2555686324 * get_address_of_m_CaretColor_31() { return &___m_CaretColor_31; }
	inline void set_m_CaretColor_31(Color_t2555686324  value)
	{
		___m_CaretColor_31 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_32() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CustomCaretColor_32)); }
	inline bool get_m_CustomCaretColor_32() const { return ___m_CustomCaretColor_32; }
	inline bool* get_address_of_m_CustomCaretColor_32() { return &___m_CustomCaretColor_32; }
	inline void set_m_CustomCaretColor_32(bool value)
	{
		___m_CustomCaretColor_32 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_33() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_SelectionColor_33)); }
	inline Color_t2555686324  get_m_SelectionColor_33() const { return ___m_SelectionColor_33; }
	inline Color_t2555686324 * get_address_of_m_SelectionColor_33() { return &___m_SelectionColor_33; }
	inline void set_m_SelectionColor_33(Color_t2555686324  value)
	{
		___m_SelectionColor_33 = value;
	}

	inline static int32_t get_offset_of_m_Text_34() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Text_34)); }
	inline String_t* get_m_Text_34() const { return ___m_Text_34; }
	inline String_t** get_address_of_m_Text_34() { return &___m_Text_34; }
	inline void set_m_Text_34(String_t* value)
	{
		___m_Text_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_34), value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_35() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretBlinkRate_35)); }
	inline float get_m_CaretBlinkRate_35() const { return ___m_CaretBlinkRate_35; }
	inline float* get_address_of_m_CaretBlinkRate_35() { return &___m_CaretBlinkRate_35; }
	inline void set_m_CaretBlinkRate_35(float value)
	{
		___m_CaretBlinkRate_35 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_36() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretWidth_36)); }
	inline int32_t get_m_CaretWidth_36() const { return ___m_CaretWidth_36; }
	inline int32_t* get_address_of_m_CaretWidth_36() { return &___m_CaretWidth_36; }
	inline void set_m_CaretWidth_36(int32_t value)
	{
		___m_CaretWidth_36 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_37() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ReadOnly_37)); }
	inline bool get_m_ReadOnly_37() const { return ___m_ReadOnly_37; }
	inline bool* get_address_of_m_ReadOnly_37() { return &___m_ReadOnly_37; }
	inline void set_m_ReadOnly_37(bool value)
	{
		___m_ReadOnly_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_38() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretPosition_38)); }
	inline int32_t get_m_CaretPosition_38() const { return ___m_CaretPosition_38; }
	inline int32_t* get_address_of_m_CaretPosition_38() { return &___m_CaretPosition_38; }
	inline void set_m_CaretPosition_38(int32_t value)
	{
		___m_CaretPosition_38 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_39() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretSelectPosition_39)); }
	inline int32_t get_m_CaretSelectPosition_39() const { return ___m_CaretSelectPosition_39; }
	inline int32_t* get_address_of_m_CaretSelectPosition_39() { return &___m_CaretSelectPosition_39; }
	inline void set_m_CaretSelectPosition_39(int32_t value)
	{
		___m_CaretSelectPosition_39 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_40() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___caretRectTrans_40)); }
	inline RectTransform_t3704657025 * get_caretRectTrans_40() const { return ___caretRectTrans_40; }
	inline RectTransform_t3704657025 ** get_address_of_caretRectTrans_40() { return &___caretRectTrans_40; }
	inline void set_caretRectTrans_40(RectTransform_t3704657025 * value)
	{
		___caretRectTrans_40 = value;
		Il2CppCodeGenWriteBarrier((&___caretRectTrans_40), value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_41() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CursorVerts_41)); }
	inline UIVertexU5BU5D_t1981460040* get_m_CursorVerts_41() const { return ___m_CursorVerts_41; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_CursorVerts_41() { return &___m_CursorVerts_41; }
	inline void set_m_CursorVerts_41(UIVertexU5BU5D_t1981460040* value)
	{
		___m_CursorVerts_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_CursorVerts_41), value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_42() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputTextCache_42)); }
	inline TextGenerator_t3211863866 * get_m_InputTextCache_42() const { return ___m_InputTextCache_42; }
	inline TextGenerator_t3211863866 ** get_address_of_m_InputTextCache_42() { return &___m_InputTextCache_42; }
	inline void set_m_InputTextCache_42(TextGenerator_t3211863866 * value)
	{
		___m_InputTextCache_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputTextCache_42), value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_43() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CachedInputRenderer_43)); }
	inline CanvasRenderer_t2598313366 * get_m_CachedInputRenderer_43() const { return ___m_CachedInputRenderer_43; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CachedInputRenderer_43() { return &___m_CachedInputRenderer_43; }
	inline void set_m_CachedInputRenderer_43(CanvasRenderer_t2598313366 * value)
	{
		___m_CachedInputRenderer_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedInputRenderer_43), value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_44() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_PreventFontCallback_44)); }
	inline bool get_m_PreventFontCallback_44() const { return ___m_PreventFontCallback_44; }
	inline bool* get_address_of_m_PreventFontCallback_44() { return &___m_PreventFontCallback_44; }
	inline void set_m_PreventFontCallback_44(bool value)
	{
		___m_PreventFontCallback_44 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_45() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Mesh_45)); }
	inline Mesh_t3648964284 * get_m_Mesh_45() const { return ___m_Mesh_45; }
	inline Mesh_t3648964284 ** get_address_of_m_Mesh_45() { return &___m_Mesh_45; }
	inline void set_m_Mesh_45(Mesh_t3648964284 * value)
	{
		___m_Mesh_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_45), value);
	}

	inline static int32_t get_offset_of_m_AllowInput_46() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AllowInput_46)); }
	inline bool get_m_AllowInput_46() const { return ___m_AllowInput_46; }
	inline bool* get_address_of_m_AllowInput_46() { return &___m_AllowInput_46; }
	inline void set_m_AllowInput_46(bool value)
	{
		___m_AllowInput_46 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_47() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ShouldActivateNextUpdate_47)); }
	inline bool get_m_ShouldActivateNextUpdate_47() const { return ___m_ShouldActivateNextUpdate_47; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_47() { return &___m_ShouldActivateNextUpdate_47; }
	inline void set_m_ShouldActivateNextUpdate_47(bool value)
	{
		___m_ShouldActivateNextUpdate_47 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_48() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_UpdateDrag_48)); }
	inline bool get_m_UpdateDrag_48() const { return ___m_UpdateDrag_48; }
	inline bool* get_address_of_m_UpdateDrag_48() { return &___m_UpdateDrag_48; }
	inline void set_m_UpdateDrag_48(bool value)
	{
		___m_UpdateDrag_48 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_49() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragPositionOutOfBounds_49)); }
	inline bool get_m_DragPositionOutOfBounds_49() const { return ___m_DragPositionOutOfBounds_49; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_49() { return &___m_DragPositionOutOfBounds_49; }
	inline void set_m_DragPositionOutOfBounds_49(bool value)
	{
		___m_DragPositionOutOfBounds_49 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_52() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretVisible_52)); }
	inline bool get_m_CaretVisible_52() const { return ___m_CaretVisible_52; }
	inline bool* get_address_of_m_CaretVisible_52() { return &___m_CaretVisible_52; }
	inline void set_m_CaretVisible_52(bool value)
	{
		___m_CaretVisible_52 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_53() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkCoroutine_53)); }
	inline Coroutine_t3829159415 * get_m_BlinkCoroutine_53() const { return ___m_BlinkCoroutine_53; }
	inline Coroutine_t3829159415 ** get_address_of_m_BlinkCoroutine_53() { return &___m_BlinkCoroutine_53; }
	inline void set_m_BlinkCoroutine_53(Coroutine_t3829159415 * value)
	{
		___m_BlinkCoroutine_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlinkCoroutine_53), value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_54() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkStartTime_54)); }
	inline float get_m_BlinkStartTime_54() const { return ___m_BlinkStartTime_54; }
	inline float* get_address_of_m_BlinkStartTime_54() { return &___m_BlinkStartTime_54; }
	inline void set_m_BlinkStartTime_54(float value)
	{
		___m_BlinkStartTime_54 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_55() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawStart_55)); }
	inline int32_t get_m_DrawStart_55() const { return ___m_DrawStart_55; }
	inline int32_t* get_address_of_m_DrawStart_55() { return &___m_DrawStart_55; }
	inline void set_m_DrawStart_55(int32_t value)
	{
		___m_DrawStart_55 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_56() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawEnd_56)); }
	inline int32_t get_m_DrawEnd_56() const { return ___m_DrawEnd_56; }
	inline int32_t* get_address_of_m_DrawEnd_56() { return &___m_DrawEnd_56; }
	inline void set_m_DrawEnd_56(int32_t value)
	{
		___m_DrawEnd_56 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragCoroutine_57)); }
	inline Coroutine_t3829159415 * get_m_DragCoroutine_57() const { return ___m_DragCoroutine_57; }
	inline Coroutine_t3829159415 ** get_address_of_m_DragCoroutine_57() { return &___m_DragCoroutine_57; }
	inline void set_m_DragCoroutine_57(Coroutine_t3829159415 * value)
	{
		___m_DragCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_DragCoroutine_57), value);
	}

	inline static int32_t get_offset_of_m_OriginalText_58() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OriginalText_58)); }
	inline String_t* get_m_OriginalText_58() const { return ___m_OriginalText_58; }
	inline String_t** get_address_of_m_OriginalText_58() { return &___m_OriginalText_58; }
	inline void set_m_OriginalText_58(String_t* value)
	{
		___m_OriginalText_58 = value;
		Il2CppCodeGenWriteBarrier((&___m_OriginalText_58), value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_59() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_WasCanceled_59)); }
	inline bool get_m_WasCanceled_59() const { return ___m_WasCanceled_59; }
	inline bool* get_address_of_m_WasCanceled_59() { return &___m_WasCanceled_59; }
	inline void set_m_WasCanceled_59(bool value)
	{
		___m_WasCanceled_59 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_60() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HasDoneFocusTransition_60)); }
	inline bool get_m_HasDoneFocusTransition_60() const { return ___m_HasDoneFocusTransition_60; }
	inline bool* get_address_of_m_HasDoneFocusTransition_60() { return &___m_HasDoneFocusTransition_60; }
	inline void set_m_HasDoneFocusTransition_60(bool value)
	{
		___m_HasDoneFocusTransition_60 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_62() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ProcessingEvent_62)); }
	inline Event_t2956885303 * get_m_ProcessingEvent_62() const { return ___m_ProcessingEvent_62; }
	inline Event_t2956885303 ** get_address_of_m_ProcessingEvent_62() { return &___m_ProcessingEvent_62; }
	inline void set_m_ProcessingEvent_62(Event_t2956885303 * value)
	{
		___m_ProcessingEvent_62 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProcessingEvent_62), value);
	}
};

struct InputField_t3762917431_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3528271667* ___kSeparators_17;

public:
	inline static int32_t get_offset_of_kSeparators_17() { return static_cast<int32_t>(offsetof(InputField_t3762917431_StaticFields, ___kSeparators_17)); }
	inline CharU5BU5D_t3528271667* get_kSeparators_17() const { return ___kSeparators_17; }
	inline CharU5BU5D_t3528271667** get_address_of_kSeparators_17() { return &___kSeparators_17; }
	inline void set_kSeparators_17(CharU5BU5D_t3528271667* value)
	{
		___kSeparators_17 = value;
		Il2CppCodeGenWriteBarrier((&___kSeparators_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTFIELD_T3762917431_H
#ifndef TOGGLE_T2735377061_H
#define TOGGLE_T2735377061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t2735377061  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t1660335611 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t123837990 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t1873685584 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;

public:
	inline static int32_t get_offset_of_toggleTransition_16() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___toggleTransition_16)); }
	inline int32_t get_toggleTransition_16() const { return ___toggleTransition_16; }
	inline int32_t* get_address_of_toggleTransition_16() { return &___toggleTransition_16; }
	inline void set_toggleTransition_16(int32_t value)
	{
		___toggleTransition_16 = value;
	}

	inline static int32_t get_offset_of_graphic_17() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___graphic_17)); }
	inline Graphic_t1660335611 * get_graphic_17() const { return ___graphic_17; }
	inline Graphic_t1660335611 ** get_address_of_graphic_17() { return &___graphic_17; }
	inline void set_graphic_17(Graphic_t1660335611 * value)
	{
		___graphic_17 = value;
		Il2CppCodeGenWriteBarrier((&___graphic_17), value);
	}

	inline static int32_t get_offset_of_m_Group_18() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_Group_18)); }
	inline ToggleGroup_t123837990 * get_m_Group_18() const { return ___m_Group_18; }
	inline ToggleGroup_t123837990 ** get_address_of_m_Group_18() { return &___m_Group_18; }
	inline void set_m_Group_18(ToggleGroup_t123837990 * value)
	{
		___m_Group_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Group_18), value);
	}

	inline static int32_t get_offset_of_onValueChanged_19() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___onValueChanged_19)); }
	inline ToggleEvent_t1873685584 * get_onValueChanged_19() const { return ___onValueChanged_19; }
	inline ToggleEvent_t1873685584 ** get_address_of_onValueChanged_19() { return &___onValueChanged_19; }
	inline void set_onValueChanged_19(ToggleEvent_t1873685584 * value)
	{
		___onValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_19), value);
	}

	inline static int32_t get_offset_of_m_IsOn_20() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_IsOn_20)); }
	inline bool get_m_IsOn_20() const { return ___m_IsOn_20; }
	inline bool* get_address_of_m_IsOn_20() { return &___m_IsOn_20; }
	inline void set_m_IsOn_20(bool value)
	{
		___m_IsOn_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLE_T2735377061_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteRenderer_t3235626157 * m_Items[1];

public:
	inline SpriteRenderer_t3235626157 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t3235626157 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t3235626157 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpriteRenderer_t3235626157 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t3235626157 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t3235626157 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t280657092 * m_Items[1];

public:
	inline Sprite_t280657092 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t280657092 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m1399073142_gshared (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SecondCutscene::textScroll(System.String)
extern "C"  RuntimeObject* SecondCutscene_textScroll_m1940857857 (SecondCutscene_t524439269 * __this, String_t* ___lineOfText0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m2134052629 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SecondCutscene::textScroll1(System.String)
extern "C"  RuntimeObject* SecondCutscene_textScroll1_m1914580754 (SecondCutscene_t524439269 * __this, String_t* ___lineOfText0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C"  void Animator_ResetTrigger_m2321267720 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
#define GameObject_GetComponent_TisAnimator_t434523843_m440019408(__this, method) ((  Animator_t434523843 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C"  GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m2678069419 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C"  void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m3951609671 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<PlayerMovement>()
#define GameObject_GetComponent_TisPlayerMovement_t2731566919_m3781804095(__this, method) ((  PlayerMovement_t2731566919 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m2618285814 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C"  GameObject_t1113636619 * Collision2D_get_gameObject_m1443495885 (Collision2D_t2842956331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.SpriteRenderer>()
#define Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354(__this, method) ((  SpriteRendererU5BU5D_t911335936* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, method) ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
extern "C"  void Renderer_set_sortingLayerName_m3885968216 (Renderer_t2627027031 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager::setSelectOption(System.Int32)
extern "C"  void TextBoxManager_setSelectOption_m1115749924 (TextBoxManager_t1855233713 * __this, int32_t ___x0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager::showMainText()
extern "C"  void TextBoxManager_showMainText_m3777940172 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager::hideInput()
extern "C"  void TextBoxManager_hideInput_m329229818 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager::hideOptions()
extern "C"  void TextBoxManager_hideOptions_m3665273749 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager::runDialogue()
extern "C"  void TextBoxManager_runDialogue_m1497414678 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TextBoxManager::run()
extern "C"  RuntimeObject* TextBoxManager_run_m2556487987 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager/<fading>c__Iterator0::.ctor()
extern "C"  void U3CfadingU3Ec__Iterator0__ctor_m3036370343 (U3CfadingU3Ec__Iterator0_t3917186881 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager/<textScroll>c__Iterator1::.ctor()
extern "C"  void U3CtextScrollU3Ec__Iterator1__ctor_m1015419896 (U3CtextScrollU3Ec__Iterator1_t3632678001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager/<run>c__Iterator2::.ctor()
extern "C"  void U3CrunU3Ec__Iterator2__ctor_m4030987400 (U3CrunU3Ec__Iterator2_t2869353945 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor()
extern "C"  void XmlDocument__ctor_m1447119458 (XmlDocument_t2837193595 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager/<loadDialogue>c__AnonStorey3::.ctor()
extern "C"  void U3CloadDialogueU3Ec__AnonStorey3__ctor_m2950206124 (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C"  int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TextBoxManager::textScroll(System.String)
extern "C"  RuntimeObject* TextBoxManager_textScroll_m2712319739 (TextBoxManager_t1855233713 * __this, String_t* ___lineOfText0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager::showInput()
extern "C"  void TextBoxManager_showInput_m2379309978 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager::hideMainText()
extern "C"  void TextBoxManager_hideMainText_m3479932493 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
extern "C"  String_t* InputField_get_text_m3534748202 (InputField_t3762917431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C"  void InputField_set_text_m1877260015 (InputField_t3762917431 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager::showOptions()
extern "C"  void TextBoxManager_showOptions_m3024039106 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m234840832 (Animator_t434523843 * __this, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_1__ctor_m1399073142(__this, p0, p1, method) ((  void (*) (Func_1_t3822001908 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m1399073142_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
extern "C"  void WaitUntil__ctor_m4227046299 (WaitUntil_t3373419216 * __this, Func_1_t3822001908 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TextBoxManager::loadDialogue(System.Int32)
extern "C"  void TextBoxManager_loadDialogue_m3548346734 (TextBoxManager_t1855233713 * __this, int32_t ___dialogueDestination0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TextBoxManager::fading()
extern "C"  RuntimeObject* TextBoxManager_fading_m1319799917 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2670269651_m980647750(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.UI.Image::set_alphaHitTestMinimumThreshold(System.Single)
extern "C"  void Image_set_alphaHitTestMinimumThreshold_m650063757 (Image_t2670269651 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::resetTimer()
extern "C"  void Timer_resetTimer_m2408204133 (Timer_t4185932343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Timer/<startTimer>c__Iterator0::.ctor()
extern "C"  void U3CstartTimerU3Ec__Iterator0__ctor_m3205552421 (U3CstartTimerU3Ec__Iterator0_t3414868529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String)
extern "C"  String_t* Single_ToString_m3489843083 (float* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<WIFINetworkManager>()
#define GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836(__this, method) ((  WIFINetworkManager_t1080793997 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t1901882714_m4196288697(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, method) ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void Timer/<PlayCleared>c__Iterator1::.ctor()
extern "C"  void U3CPlayClearedU3Ec__Iterator1__ctor_m834496745 (U3CPlayClearedU3Ec__Iterator1_t737918195 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<AddScore>()
#define GameObject_GetComponent_TisAddScore_t369591168_m926236821(__this, method) ((  AddScore_t369591168 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void AddScore::playCleared()
extern "C"  void AddScore_playCleared_m650042174 (AddScore_t369591168 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WIFINetworkManager::endTheGame()
extern "C"  void WIFINetworkManager_endTheGame_m70675779 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String)
extern "C"  void Animator_Play_m1697843332 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C"  void MonoBehaviour_StopAllCoroutines_m3328507247 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TipHandler::disableInteractTip()
extern "C"  void TipHandler_disableInteractTip_m2762761214 (TipHandler_t807666407 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TipHandler::disableSelectFoodTip()
extern "C"  void TipHandler_disableSelectFoodTip_m3111082017 (TipHandler_t807666407 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TipHandler::disableDragFoodTip()
extern "C"  void TipHandler_disableDragFoodTip_m1315686439 (TipHandler_t807666407 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TipManager/<displayDragFoodTip>c__Iterator0::.ctor()
extern "C"  void U3CdisplayDragFoodTipU3Ec__Iterator0__ctor_m822813927 (U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TipManager/<displayFeedTip>c__Iterator1::.ctor()
extern "C"  void U3CdisplayFeedTipU3Ec__Iterator1__ctor_m994284039 (U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TipManager/<displayTheTip>c__Iterator2::.ctor()
extern "C"  void U3CdisplayTheTipU3Ec__Iterator2__ctor_m1460220713 (U3CdisplayTheTipU3Ec__Iterator2_t819713326 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C"  String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TransitionHandler/<fadeIn>c__Iterator0::.ctor()
extern "C"  void U3CfadeInU3Ec__Iterator0__ctor_m3226749971 (U3CfadeInU3Ec__Iterator0_t1457657473 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TransitionHandler/<fadeOut>c__Iterator1::.ctor()
extern "C"  void U3CfadeOutU3Ec__Iterator1__ctor_m2796055082 (U3CfadeOutU3Ec__Iterator1_t1640331254 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TransitionHandler/<glitch>c__Iterator2::.ctor()
extern "C"  void U3CglitchU3Ec__Iterator2__ctor_m990253206 (U3CglitchU3Ec__Iterator2_t2262882800 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TransitionHandler/<cutsceneGlitch>c__Iterator3::.ctor()
extern "C"  void U3CcutsceneGlitchU3Ec__Iterator3__ctor_m3372487107 (U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TransitionHandler/<cutsceneFade>c__Iterator4::.ctor()
extern "C"  void U3CcutsceneFadeU3Ec__Iterator4__ctor_m1536477293 (U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TransitionHandler/<barSounds>c__Iterator5::.ctor()
extern "C"  void U3CbarSoundsU3Ec__Iterator5__ctor_m4235670617 (U3CbarSoundsU3Ec__Iterator5_t3061910389 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TransitionHandler/<openTheDoor>c__Iterator6::.ctor()
extern "C"  void U3CopenTheDoorU3Ec__Iterator6__ctor_m860964715 (U3CopenTheDoorU3Ec__Iterator6_t558074977 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m2682712816 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<DialogueSceneManager>()
#define GameObject_GetComponent_TisDialogueSceneManager_t3025860002_m1735645841(__this, method) ((  DialogueSceneManager_t3025860002 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Collections.IEnumerator DialogueSceneManager::textScroll(System.String)
extern "C"  RuntimeObject* DialogueSceneManager_textScroll_m2895886184 (DialogueSceneManager_t3025860002 * __this, String_t* ___lineOfText0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Kino.AnalogGlitch>()
#define Component_GetComponent_TisAnalogGlitch_t1106357039_m3773877626(__this, method) ((  AnalogGlitch_t1106357039 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<Kino.DigitalGlitch>()
#define Component_GetComponent_TisDigitalGlitch_t3418514828_m3421226099(__this, method) ((  DigitalGlitch_t3418514828 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void System.Random::.ctor()
extern "C"  void Random__ctor_m4122933043 (Random_t108471755 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1273312851 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TriggersAndAnimation::activateTriggersAndAnimation()
extern "C"  void TriggersAndAnimation_activateTriggersAndAnimation_m2779203266 (TriggersAndAnimation_t1403829264 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.EventSystems.EventTrigger>()
#define GameObject_GetComponent_TisEventTrigger_t1076084509_m3277609990(__this, method) ((  EventTrigger_t1076084509 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.PolygonCollider2D>()
#define GameObject_GetComponent_TisPolygonCollider2D_t57175488_m3980671823(__this, method) ((  PolygonCollider2D_t57175488 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
#define GameObject_GetComponent_TisCollider2D_t2806799626_m1184015940(__this, method) ((  Collider2D_t2806799626 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider2D>()
#define GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(__this, method) ((  BoxCollider2D_t3581341831 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<FlameManager>()
#define GameObject_GetComponent_TisFlameManager_t1876929043_m750444410(__this, method) ((  FlameManager_t1876929043 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void FlameManager::startTheFire()
extern "C"  void FlameManager_startTheFire_m3913815109 (FlameManager_t1876929043 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<NpcDialogue>()
#define GameObject_GetComponent_TisNpcDialogue_t1608584690_m1796970400(__this, method) ((  NpcDialogue_t1608584690 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void NpcDialogue::activateNPCTips()
extern "C"  void NpcDialogue_activateNPCTips_m2345430883 (NpcDialogue_t1608584690 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
#define GameObject_GetComponent_TisButton_t4055032469_m1515138076(__this, method) ((  Button_t4055032469 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<PrivacyStateHandler>()
#define GameObject_GetComponent_TisPrivacyStateHandler_t2222435893_m2945413539(__this, method) ((  PrivacyStateHandler_t2222435893 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void PrivacyStateHandler::playDefault()
extern "C"  void PrivacyStateHandler_playDefault_m2217334642 (PrivacyStateHandler_t2222435893 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NpcDialogue::stopNPCTips()
extern "C"  void NpcDialogue_stopNPCTips_m3724202432 (NpcDialogue_t1608584690 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WIFINetworkManager/<reset>c__Iterator0::.ctor()
extern "C"  void U3CresetU3Ec__Iterator0__ctor_m1763102610 (U3CresetU3Ec__Iterator0_t3593363922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WIFINetworkManager/<endGame>c__Iterator1::.ctor()
extern "C"  void U3CendGameU3Ec__Iterator1__ctor_m2167917110 (U3CendGameU3Ec__Iterator1_t3834751616 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WIFINetworkManager/<setStoreName>c__Iterator2::.ctor()
extern "C"  void U3CsetStoreNameU3Ec__Iterator2__ctor_m2160374029 (U3CsetStoreNameU3Ec__Iterator2_t2546226351 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
extern "C"  Sprite_t280657092 * Image_get_sprite_m1811690853 (Image_t2670269651 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WIFINetworkManager::setWIFINames()
extern "C"  void WIFINetworkManager_setWIFINames_m341559950 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WIFINetworkManager::shuffle(System.String[])
extern "C"  void WIFINetworkManager_shuffle_m2419506700 (WIFINetworkManager_t1080793997 * __this, StringU5BU5D_t1281789340* ___k0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
#define GameObject_GetComponent_TisToggle_t2735377061_m3911858412(__this, method) ((  Toggle_t2735377061 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C"  bool Toggle_get_isOn_m1428293607 (Toggle_t2735377061 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
extern "C"  ColorBlock_t2139031574  Selectable_get_colors_m2213868400 (Selectable_t3250028441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.ColorBlock::get_highlightedColor()
extern "C"  Color_t2555686324  ColorBlock_get_highlightedColor_m588402203 (ColorBlock_t2139031574 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ColorBlock::set_normalColor(UnityEngine.Color)
extern "C"  void ColorBlock_set_normalColor_m254595671 (ColorBlock_t2139031574 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
extern "C"  void Selectable_set_colors_m1384394609 (Selectable_t3250028441 * __this, ColorBlock_t2139031574  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<WIFIToggleManager>()
#define GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(__this, method) ((  WIFIToggleManager_t3203504582 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t2670269651_m2486712510(__this, method) ((  Image_t2670269651 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Collections.IEnumerator WIFIToggleManager::enableRigidBody(System.Int32)
extern "C"  RuntimeObject* WIFIToggleManager_enableRigidBody_m1377820160 (WIFIToggleManager_t3203504582 * __this, int32_t ___count0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WIFINetworkManager::wrongGuessHint(UnityEngine.UI.Image)
extern "C"  RuntimeObject* WIFINetworkManager_wrongGuessHint_m743773196 (WIFINetworkManager_t1080793997 * __this, Image_t2670269651 * ___k0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Timer>()
#define GameObject_GetComponent_TisTimer_t4185932343_m2521844321(__this, method) ((  Timer_t4185932343 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void Timer::addSecond()
extern "C"  void Timer_addSecond_m3960220265 (Timer_t4185932343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::minusSecond()
extern "C"  void Timer_minusSecond_m595946876 (Timer_t4185932343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WIFINetworkManager/<wrongGuessHint>c__Iterator3::.ctor()
extern "C"  void U3CwrongGuessHintU3Ec__Iterator3__ctor_m889198 (U3CwrongGuessHintU3Ec__Iterator3_t338836333 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern "C"  void MonoBehaviour_StopCoroutine_m1962070247 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<WIFIToggleManager>()
#define Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175(__this, method) ((  WIFIToggleManager_t3203504582 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void WIFIToggleManager::assignPictures()
extern "C"  void WIFIToggleManager_assignPictures_m3690339988 (WIFIToggleManager_t3203504582 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C"  void Image_set_sprite_m2369174689 (Image_t2670269651 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WIFINetworkManager::assignWifiNames()
extern "C"  void WIFINetworkManager_assignWifiNames_m1412370316 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013(__this, method) ((  Rigidbody2D_t939494601 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
extern "C"  void Rigidbody2D_set_bodyType_m1814100804 (Rigidbody2D_t939494601 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WIFIToggleManager/<enableRigidBody>c__Iterator0::.ctor()
extern "C"  void U3CenableRigidBodyU3Ec__Iterator0__ctor_m3785979444 (U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int32)
extern "C"  float Convert_ToSingle_m3635698920 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SecondCutscene/<loadDialogue>c__Iterator0::.ctor()
extern "C"  void U3CloadDialogueU3Ec__Iterator0__ctor_m2003997380 (U3CloadDialogueU3Ec__Iterator0_t642204687 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SecondCutscene/<loadDialogue>c__Iterator0::MoveNext()
extern "C"  bool U3CloadDialogueU3Ec__Iterator0_MoveNext_m149437221 (U3CloadDialogueU3Ec__Iterator0_t642204687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CloadDialogueU3Ec__Iterator0_MoveNext_m149437221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_00d7;
			}
			case 3:
			{
				goto IL_0134;
			}
			case 4:
			{
				goto IL_0182;
			}
			case 5:
			{
				goto IL_01bb;
			}
			case 6:
			{
				goto IL_0203;
			}
			case 7:
			{
				goto IL_024b;
			}
			case 8:
			{
				goto IL_0293;
			}
			case 9:
			{
				goto IL_02dc;
			}
			case 10:
			{
				goto IL_0325;
			}
			case 11:
			{
				goto IL_036e;
			}
			case 12:
			{
				goto IL_03b7;
			}
			case 13:
			{
				goto IL_03f6;
			}
		}
	}
	{
		goto IL_04a4;
	}

IL_0051:
	{
		QuestManager_t588401851 * L_2 = ((QuestManager_t588401851_StaticFields*)il2cpp_codegen_static_fields_for(QuestManager_t588401851_il2cpp_TypeInfo_var))->get_instance_2();
		bool L_3 = L_2->get_hasPlayedSecondCutscene_7();
		if (L_3)
		{
			goto IL_044c;
		}
	}
	{
		QuestManager_t588401851 * L_4 = ((QuestManager_t588401851_StaticFields*)il2cpp_codegen_static_fields_for(QuestManager_t588401851_il2cpp_TypeInfo_var))->get_instance_2();
		L_4->set_hasPlayedSecondCutscene_7((bool)1);
		WaitForSeconds_t1699091251 * L_5 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_5, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_5);
		bool L_6 = __this->get_U24disposing_2();
		if (L_6)
		{
			goto IL_008a;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_008a:
	{
		goto IL_04a6;
	}

IL_008f:
	{
		SecondCutscene_t524439269 * L_7 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_8 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_9 = __this->get_U24this_0();
		StringU5BU5D_t1281789340* L_10 = L_9->get_brocoleetScript_12();
		int32_t L_11 = 0;
		String_t* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		RuntimeObject* L_13 = SecondCutscene_textScroll_m1940857857(L_8, L_12, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_7, L_13, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_14 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_14, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_14);
		bool L_15 = __this->get_U24disposing_2();
		if (L_15)
		{
			goto IL_00d2;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00d2:
	{
		goto IL_04a6;
	}

IL_00d7:
	{
		SecondCutscene_t524439269 * L_16 = __this->get_U24this_0();
		Animator_t434523843 * L_17 = L_16->get_turle_14();
		Animator_SetTrigger_m2134052629(L_17, _stringLiteral85179081, /*hidden argument*/NULL);
		SecondCutscene_t524439269 * L_18 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_19 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_20 = __this->get_U24this_0();
		StringU5BU5D_t1281789340* L_21 = L_20->get_turtletScript_13();
		int32_t L_22 = 0;
		String_t* L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		RuntimeObject* L_24 = SecondCutscene_textScroll1_m1914580754(L_19, L_23, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_18, L_24, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_25 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_25, (5.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_25);
		bool L_26 = __this->get_U24disposing_2();
		if (L_26)
		{
			goto IL_012f;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_012f:
	{
		goto IL_04a6;
	}

IL_0134:
	{
		SecondCutscene_t524439269 * L_27 = __this->get_U24this_0();
		Animator_t434523843 * L_28 = L_27->get_turle_14();
		Animator_ResetTrigger_m2321267720(L_28, _stringLiteral85179081, /*hidden argument*/NULL);
		SecondCutscene_t524439269 * L_29 = __this->get_U24this_0();
		Animator_t434523843 * L_30 = L_29->get_turle_14();
		Animator_SetTrigger_m2134052629(L_30, _stringLiteral742876383, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_31 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_31, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_31);
		bool L_32 = __this->get_U24disposing_2();
		if (L_32)
		{
			goto IL_017d;
		}
	}
	{
		__this->set_U24PC_3(4);
	}

IL_017d:
	{
		goto IL_04a6;
	}

IL_0182:
	{
		SecondCutscene_t524439269 * L_33 = __this->get_U24this_0();
		Animator_t434523843 * L_34 = L_33->get_brocol33t_15();
		Animator_SetTrigger_m2134052629(L_34, _stringLiteral4249957872, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_35 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_35, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_35);
		bool L_36 = __this->get_U24disposing_2();
		if (L_36)
		{
			goto IL_01b6;
		}
	}
	{
		__this->set_U24PC_3(5);
	}

IL_01b6:
	{
		goto IL_04a6;
	}

IL_01bb:
	{
		SecondCutscene_t524439269 * L_37 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_38 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_39 = __this->get_U24this_0();
		StringU5BU5D_t1281789340* L_40 = L_39->get_brocoleetScript_12();
		int32_t L_41 = 1;
		String_t* L_42 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		RuntimeObject* L_43 = SecondCutscene_textScroll_m1940857857(L_38, L_42, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_37, L_43, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_44 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_44, (5.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_44);
		bool L_45 = __this->get_U24disposing_2();
		if (L_45)
		{
			goto IL_01fe;
		}
	}
	{
		__this->set_U24PC_3(6);
	}

IL_01fe:
	{
		goto IL_04a6;
	}

IL_0203:
	{
		SecondCutscene_t524439269 * L_46 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_47 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_48 = __this->get_U24this_0();
		StringU5BU5D_t1281789340* L_49 = L_48->get_turtletScript_13();
		int32_t L_50 = 1;
		String_t* L_51 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		RuntimeObject* L_52 = SecondCutscene_textScroll1_m1914580754(L_47, L_51, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_46, L_52, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_53 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_53, (5.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_53);
		bool L_54 = __this->get_U24disposing_2();
		if (L_54)
		{
			goto IL_0246;
		}
	}
	{
		__this->set_U24PC_3(7);
	}

IL_0246:
	{
		goto IL_04a6;
	}

IL_024b:
	{
		SecondCutscene_t524439269 * L_55 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_56 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_57 = __this->get_U24this_0();
		StringU5BU5D_t1281789340* L_58 = L_57->get_brocoleetScript_12();
		int32_t L_59 = 2;
		String_t* L_60 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		RuntimeObject* L_61 = SecondCutscene_textScroll_m1940857857(L_56, L_60, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_55, L_61, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_62 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_62, (5.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_62);
		bool L_63 = __this->get_U24disposing_2();
		if (L_63)
		{
			goto IL_028e;
		}
	}
	{
		__this->set_U24PC_3(8);
	}

IL_028e:
	{
		goto IL_04a6;
	}

IL_0293:
	{
		SecondCutscene_t524439269 * L_64 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_65 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_66 = __this->get_U24this_0();
		StringU5BU5D_t1281789340* L_67 = L_66->get_turtletScript_13();
		int32_t L_68 = 2;
		String_t* L_69 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		RuntimeObject* L_70 = SecondCutscene_textScroll1_m1914580754(L_65, L_69, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_64, L_70, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_71 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_71, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_71);
		bool L_72 = __this->get_U24disposing_2();
		if (L_72)
		{
			goto IL_02d7;
		}
	}
	{
		__this->set_U24PC_3(((int32_t)9));
	}

IL_02d7:
	{
		goto IL_04a6;
	}

IL_02dc:
	{
		SecondCutscene_t524439269 * L_73 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_74 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_75 = __this->get_U24this_0();
		StringU5BU5D_t1281789340* L_76 = L_75->get_brocoleetScript_12();
		int32_t L_77 = 3;
		String_t* L_78 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		RuntimeObject* L_79 = SecondCutscene_textScroll_m1940857857(L_74, L_78, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_73, L_79, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_80 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_80, (5.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_80);
		bool L_81 = __this->get_U24disposing_2();
		if (L_81)
		{
			goto IL_0320;
		}
	}
	{
		__this->set_U24PC_3(((int32_t)10));
	}

IL_0320:
	{
		goto IL_04a6;
	}

IL_0325:
	{
		SecondCutscene_t524439269 * L_82 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_83 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_84 = __this->get_U24this_0();
		StringU5BU5D_t1281789340* L_85 = L_84->get_turtletScript_13();
		int32_t L_86 = 3;
		String_t* L_87 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		RuntimeObject* L_88 = SecondCutscene_textScroll1_m1914580754(L_83, L_87, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_82, L_88, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_89 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_89, (4.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_89);
		bool L_90 = __this->get_U24disposing_2();
		if (L_90)
		{
			goto IL_0369;
		}
	}
	{
		__this->set_U24PC_3(((int32_t)11));
	}

IL_0369:
	{
		goto IL_04a6;
	}

IL_036e:
	{
		SecondCutscene_t524439269 * L_91 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_92 = __this->get_U24this_0();
		SecondCutscene_t524439269 * L_93 = __this->get_U24this_0();
		StringU5BU5D_t1281789340* L_94 = L_93->get_brocoleetScript_12();
		int32_t L_95 = 4;
		String_t* L_96 = (L_94)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_95));
		RuntimeObject* L_97 = SecondCutscene_textScroll_m1940857857(L_92, L_96, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_91, L_97, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_98 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_98, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_98);
		bool L_99 = __this->get_U24disposing_2();
		if (L_99)
		{
			goto IL_03b2;
		}
	}
	{
		__this->set_U24PC_3(((int32_t)12));
	}

IL_03b2:
	{
		goto IL_04a6;
	}

IL_03b7:
	{
		SecondCutscene_t524439269 * L_100 = __this->get_U24this_0();
		GameObject_t1113636619 * L_101 = L_100->get_fade_16();
		Animator_t434523843 * L_102 = GameObject_GetComponent_TisAnimator_t434523843_m440019408(L_101, /*hidden argument*/GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var);
		Animator_SetTrigger_m2134052629(L_102, _stringLiteral2554266375, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_103 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_103, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_103);
		bool L_104 = __this->get_U24disposing_2();
		if (L_104)
		{
			goto IL_03f1;
		}
	}
	{
		__this->set_U24PC_3(((int32_t)13));
	}

IL_03f1:
	{
		goto IL_04a6;
	}

IL_03f6:
	{
		SecondCutscene_t524439269 * L_105 = __this->get_U24this_0();
		GameObject_t1113636619 * L_106 = L_105->get_platformer_17();
		GameObject_SetActive_m796801857(L_106, (bool)1, /*hidden argument*/NULL);
		SecondCutscene_t524439269 * L_107 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_108 = L_107->get_cameraAudio_3();
		SecondCutscene_t524439269 * L_109 = __this->get_U24this_0();
		AudioClip_t3680889665 * L_110 = L_109->get_night_18();
		AudioSource_set_clip_m31653938(L_108, L_110, /*hidden argument*/NULL);
		SecondCutscene_t524439269 * L_111 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_112 = L_111->get_cameraAudio_3();
		AudioSource_Play_m48294159(L_112, /*hidden argument*/NULL);
		SecondCutscene_t524439269 * L_113 = __this->get_U24this_0();
		GameObject_t1113636619 * L_114 = L_113->get_parent_2();
		GameObject_t1113636619 * L_115 = GameObject_get_gameObject_m3693461266(L_114, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_115, /*hidden argument*/NULL);
		goto IL_049d;
	}

IL_044c:
	{
		SecondCutscene_t524439269 * L_116 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_117 = L_116->get_cameraAudio_3();
		SecondCutscene_t524439269 * L_118 = __this->get_U24this_0();
		AudioClip_t3680889665 * L_119 = L_118->get_night_18();
		AudioSource_set_clip_m31653938(L_117, L_119, /*hidden argument*/NULL);
		SecondCutscene_t524439269 * L_120 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_121 = L_120->get_cameraAudio_3();
		AudioSource_Play_m48294159(L_121, /*hidden argument*/NULL);
		SecondCutscene_t524439269 * L_122 = __this->get_U24this_0();
		GameObject_t1113636619 * L_123 = L_122->get_platformer_17();
		GameObject_SetActive_m796801857(L_123, (bool)1, /*hidden argument*/NULL);
		SecondCutscene_t524439269 * L_124 = __this->get_U24this_0();
		GameObject_t1113636619 * L_125 = L_124->get_parent_2();
		GameObject_t1113636619 * L_126 = GameObject_get_gameObject_m3693461266(L_125, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_126, /*hidden argument*/NULL);
	}

IL_049d:
	{
		__this->set_U24PC_3((-1));
	}

IL_04a4:
	{
		return (bool)0;
	}

IL_04a6:
	{
		return (bool)1;
	}
}
// System.Object SecondCutscene/<loadDialogue>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CloadDialogueU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m879740664 (U3CloadDialogueU3Ec__Iterator0_t642204687 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object SecondCutscene/<loadDialogue>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CloadDialogueU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m878081653 (U3CloadDialogueU3Ec__Iterator0_t642204687 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void SecondCutscene/<loadDialogue>c__Iterator0::Dispose()
extern "C"  void U3CloadDialogueU3Ec__Iterator0_Dispose_m1493333833 (U3CloadDialogueU3Ec__Iterator0_t642204687 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void SecondCutscene/<loadDialogue>c__Iterator0::Reset()
extern "C"  void U3CloadDialogueU3Ec__Iterator0_Reset_m2500002816 (U3CloadDialogueU3Ec__Iterator0_t642204687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CloadDialogueU3Ec__Iterator0_Reset_m2500002816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CloadDialogueU3Ec__Iterator0_Reset_m2500002816_RuntimeMethod_var);
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
// System.Void SecondCutscene/<textScroll>c__Iterator1::.ctor()
extern "C"  void U3CtextScrollU3Ec__Iterator1__ctor_m1916484305 (U3CtextScrollU3Ec__Iterator1_t3175231331 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SecondCutscene/<textScroll>c__Iterator1::MoveNext()
extern "C"  bool U3CtextScrollU3Ec__Iterator1_MoveNext_m1747632617 (U3CtextScrollU3Ec__Iterator1_t3175231331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CtextScrollU3Ec__Iterator1_MoveNext_m1747632617_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00f6;
			}
			case 2:
			{
				goto IL_0132;
			}
		}
	}
	{
		goto IL_014f;
	}

IL_0025:
	{
		SecondCutscene_t524439269 * L_2 = __this->get_U24this_2();
		GameObject_t1113636619 * L_3 = L_2->get_brocoleetBubble_6();
		GameObject_t1113636619 * L_4 = GameObject_get_gameObject_m3693461266(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		__this->set_U3CletterU3E__0_0(0);
		SecondCutscene_t524439269 * L_5 = __this->get_U24this_2();
		Text_t1901882714 * L_6 = L_5->get_BrocoleeText_10();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		goto IL_00f6;
	}

IL_005c:
	{
		int32_t L_8 = __this->get_U3CletterU3E__0_0();
		if ((((int32_t)L_8) == ((int32_t)((int32_t)32))))
		{
			goto IL_0089;
		}
	}
	{
		SecondCutscene_t524439269 * L_9 = __this->get_U24this_2();
		AudioSource_t3935305588 * L_10 = L_9->get_canvasAudio_4();
		SecondCutscene_t524439269 * L_11 = __this->get_U24this_2();
		AudioClip_t3680889665 * L_12 = L_11->get_brocoBeep_8();
		AudioSource_PlayOneShot_m2678069419(L_10, L_12, (0.5f), /*hidden argument*/NULL);
	}

IL_0089:
	{
		SecondCutscene_t524439269 * L_13 = __this->get_U24this_2();
		Text_t1901882714 * L_14 = L_13->get_BrocoleeText_10();
		SecondCutscene_t524439269 * L_15 = __this->get_U24this_2();
		Text_t1901882714 * L_16 = L_15->get_BrocoleeText_10();
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_16);
		String_t* L_18 = __this->get_lineOfText_1();
		int32_t L_19 = __this->get_U3CletterU3E__0_0();
		Il2CppChar L_20 = String_get_Chars_m2986988803(L_18, L_19, /*hidden argument*/NULL);
		Il2CppChar L_21 = L_20;
		RuntimeObject * L_22 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m904156431(NULL /*static, unused*/, L_17, L_22, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_23);
		int32_t L_24 = __this->get_U3CletterU3E__0_0();
		__this->set_U3CletterU3E__0_0(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		WaitForSeconds_t1699091251 * L_25 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_25, (0.04f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_25);
		bool L_26 = __this->get_U24disposing_4();
		if (L_26)
		{
			goto IL_00f1;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00f1:
	{
		goto IL_0151;
	}

IL_00f6:
	{
		int32_t L_27 = __this->get_U3CletterU3E__0_0();
		String_t* L_28 = __this->get_lineOfText_1();
		int32_t L_29 = String_get_Length_m3847582255(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)))))
		{
			goto IL_005c;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_30 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_30, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_30);
		bool L_31 = __this->get_U24disposing_4();
		if (L_31)
		{
			goto IL_012d;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_012d:
	{
		goto IL_0151;
	}

IL_0132:
	{
		SecondCutscene_t524439269 * L_32 = __this->get_U24this_2();
		GameObject_t1113636619 * L_33 = L_32->get_brocoleetBubble_6();
		GameObject_t1113636619 * L_34 = GameObject_get_gameObject_m3693461266(L_33, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_34, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_014f:
	{
		return (bool)0;
	}

IL_0151:
	{
		return (bool)1;
	}
}
// System.Object SecondCutscene/<textScroll>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CtextScrollU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2879832169 (U3CtextScrollU3Ec__Iterator1_t3175231331 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object SecondCutscene/<textScroll>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CtextScrollU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m921892561 (U3CtextScrollU3Ec__Iterator1_t3175231331 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void SecondCutscene/<textScroll>c__Iterator1::Dispose()
extern "C"  void U3CtextScrollU3Ec__Iterator1_Dispose_m748136746 (U3CtextScrollU3Ec__Iterator1_t3175231331 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void SecondCutscene/<textScroll>c__Iterator1::Reset()
extern "C"  void U3CtextScrollU3Ec__Iterator1_Reset_m3683828037 (U3CtextScrollU3Ec__Iterator1_t3175231331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CtextScrollU3Ec__Iterator1_Reset_m3683828037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CtextScrollU3Ec__Iterator1_Reset_m3683828037_RuntimeMethod_var);
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
// System.Void SecondCutscene/<textScroll1>c__Iterator2::.ctor()
extern "C"  void U3CtextScroll1U3Ec__Iterator2__ctor_m1980441573 (U3CtextScroll1U3Ec__Iterator2_t437998880 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SecondCutscene/<textScroll1>c__Iterator2::MoveNext()
extern "C"  bool U3CtextScroll1U3Ec__Iterator2_MoveNext_m549708253 (U3CtextScroll1U3Ec__Iterator2_t437998880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CtextScroll1U3Ec__Iterator2_MoveNext_m549708253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00f6;
			}
			case 2:
			{
				goto IL_0132;
			}
		}
	}
	{
		goto IL_014f;
	}

IL_0025:
	{
		SecondCutscene_t524439269 * L_2 = __this->get_U24this_2();
		GameObject_t1113636619 * L_3 = L_2->get_tutrleBubble_7();
		GameObject_t1113636619 * L_4 = GameObject_get_gameObject_m3693461266(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		__this->set_U3CletterU3E__0_0(0);
		SecondCutscene_t524439269 * L_5 = __this->get_U24this_2();
		Text_t1901882714 * L_6 = L_5->get_turtleText_11();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		goto IL_00f6;
	}

IL_005c:
	{
		int32_t L_8 = __this->get_U3CletterU3E__0_0();
		if ((((int32_t)L_8) == ((int32_t)((int32_t)32))))
		{
			goto IL_0089;
		}
	}
	{
		SecondCutscene_t524439269 * L_9 = __this->get_U24this_2();
		AudioSource_t3935305588 * L_10 = L_9->get_canvasAudio_4();
		SecondCutscene_t524439269 * L_11 = __this->get_U24this_2();
		AudioClip_t3680889665 * L_12 = L_11->get_brocoBeep_8();
		AudioSource_PlayOneShot_m2678069419(L_10, L_12, (0.5f), /*hidden argument*/NULL);
	}

IL_0089:
	{
		SecondCutscene_t524439269 * L_13 = __this->get_U24this_2();
		Text_t1901882714 * L_14 = L_13->get_turtleText_11();
		SecondCutscene_t524439269 * L_15 = __this->get_U24this_2();
		Text_t1901882714 * L_16 = L_15->get_turtleText_11();
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_16);
		String_t* L_18 = __this->get_lineOfText_1();
		int32_t L_19 = __this->get_U3CletterU3E__0_0();
		Il2CppChar L_20 = String_get_Chars_m2986988803(L_18, L_19, /*hidden argument*/NULL);
		Il2CppChar L_21 = L_20;
		RuntimeObject * L_22 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m904156431(NULL /*static, unused*/, L_17, L_22, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_23);
		int32_t L_24 = __this->get_U3CletterU3E__0_0();
		__this->set_U3CletterU3E__0_0(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		WaitForSeconds_t1699091251 * L_25 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_25, (0.04f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_25);
		bool L_26 = __this->get_U24disposing_4();
		if (L_26)
		{
			goto IL_00f1;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00f1:
	{
		goto IL_0151;
	}

IL_00f6:
	{
		int32_t L_27 = __this->get_U3CletterU3E__0_0();
		String_t* L_28 = __this->get_lineOfText_1();
		int32_t L_29 = String_get_Length_m3847582255(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)))))
		{
			goto IL_005c;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_30 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_30, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_30);
		bool L_31 = __this->get_U24disposing_4();
		if (L_31)
		{
			goto IL_012d;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_012d:
	{
		goto IL_0151;
	}

IL_0132:
	{
		SecondCutscene_t524439269 * L_32 = __this->get_U24this_2();
		GameObject_t1113636619 * L_33 = L_32->get_tutrleBubble_7();
		GameObject_t1113636619 * L_34 = GameObject_get_gameObject_m3693461266(L_33, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_34, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_014f:
	{
		return (bool)0;
	}

IL_0151:
	{
		return (bool)1;
	}
}
// System.Object SecondCutscene/<textScroll1>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CtextScroll1U3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m749598724 (U3CtextScroll1U3Ec__Iterator2_t437998880 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object SecondCutscene/<textScroll1>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CtextScroll1U3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m2926106658 (U3CtextScroll1U3Ec__Iterator2_t437998880 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void SecondCutscene/<textScroll1>c__Iterator2::Dispose()
extern "C"  void U3CtextScroll1U3Ec__Iterator2_Dispose_m134547286 (U3CtextScroll1U3Ec__Iterator2_t437998880 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void SecondCutscene/<textScroll1>c__Iterator2::Reset()
extern "C"  void U3CtextScroll1U3Ec__Iterator2_Reset_m1592797280 (U3CtextScroll1U3Ec__Iterator2_t437998880 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CtextScroll1U3Ec__Iterator2_Reset_m1592797280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CtextScroll1U3Ec__Iterator2_Reset_m1592797280_RuntimeMethod_var);
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
// System.Void shuriken::.ctor()
extern "C"  void shuriken__ctor_m2842218122 (shuriken_t1718313326 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shuriken::Awake()
extern "C"  void shuriken_Awake_m3071974445 (shuriken_t1718313326 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shuriken_Awake_m3071974445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2323074440, /*hidden argument*/NULL);
		__this->set_canvas_7(L_0);
		GameObject_t1113636619 * L_1 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral4294193667, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		__this->set_source_5(L_2);
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2670504175, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		__this->set_target_4(L_4);
		GameObject_t1113636619 * L_5 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2261821926, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		__this->set_player_8(L_6);
		return;
	}
}
// System.Void shuriken::Start()
extern "C"  void shuriken_Start_m3886224900 (shuriken_t1718313326 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shuriken_Start_m3886224900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_canvas_7();
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		Transform_SetParent_m381167889(L_0, L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = __this->get_target_4();
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = __this->get_source_5();
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		__this->set_angle_6(L_7);
		Rigidbody2D_t939494601 * L_8 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb_3(L_8);
		return;
	}
}
// System.Void shuriken::Update()
extern "C"  void shuriken_Update_m1093423832 (shuriken_t1718313326 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shuriken_Update_m1093423832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t939494601 * L_0 = __this->get_rb_3();
		Vector3_t3722313464  L_1 = __this->get_angle_6();
		float L_2 = __this->get_speed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shuriken::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void shuriken_OnTriggerEnter2D_m1696924794 (shuriken_t1718313326 * __this, Collider2D_t2806799626 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shuriken_OnTriggerEnter2D_m1696924794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___col0;
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2261821926, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Collider2D_t2806799626 * L_4 = ___col0;
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		PlayerMovement_t2731566919 * L_6 = GameObject_GetComponent_TisPlayerMovement_t2731566919_m3781804095(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t2731566919_m3781804095_RuntimeMethod_var);
		MonoBehaviour_StartCoroutine_m2618285814(L_6, _stringLiteral2554004238, /*hidden argument*/NULL);
	}

IL_0030:
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
// System.Void SideWall::.ctor()
extern "C"  void SideWall__ctor_m3542105703 (SideWall_t2083452592 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SideWall::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void SideWall_OnCollisionEnter2D_m1214773207 (SideWall_t2083452592 * __this, Collision2D_t2842956331 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SideWall_OnCollisionEnter2D_m1214773207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t2842956331 * L_0 = ___coll0;
		GameObject_t1113636619 * L_1 = Collision2D_get_gameObject_m1443495885(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral37314645, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		Collision2D_t2842956331 * L_4 = ___coll0;
		GameObject_t1113636619 * L_5 = Collision2D_get_gameObject_m1443495885(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0025:
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
// System.Void sortLayer::.ctor()
extern "C"  void sortLayer__ctor_m836028637 (sortLayer_t2536625413 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void sortLayer::Start()
extern "C"  void sortLayer_Start_m188579359 (sortLayer_t2536625413 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (sortLayer_Start_m188579359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3235626157 * V_0 = NULL;
	SpriteRendererU5BU5D_t911335936* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SpriteRendererU5BU5D_t911335936* L_0 = Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354(__this, /*hidden argument*/Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354_RuntimeMethod_var);
		V_1 = L_0;
		V_2 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		SpriteRendererU5BU5D_t911335936* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		SpriteRenderer_t3235626157 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		SpriteRenderer_t3235626157 * L_5 = V_0;
		Renderer_t2627027031 * L_6 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(L_5, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		String_t* L_7 = __this->get_sortLayerName_2();
		Renderer_set_sortingLayerName_m3885968216(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0027:
	{
		int32_t L_9 = V_2;
		SpriteRendererU5BU5D_t911335936* L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000e;
		}
	}
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
// System.Void TextBoxManager::.ctor()
extern "C"  void TextBoxManager__ctor_m1129699356 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager::Start()
extern "C"  void TextBoxManager_Start_m3228580100 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextBoxManager_Start_m3228580100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_username_16(L_0);
		__this->set_nodeTracker_14(0);
		TextBoxManager_setSelectOption_m1115749924(__this, 0, /*hidden argument*/NULL);
		TextBoxManager_showMainText_m3777940172(__this, /*hidden argument*/NULL);
		TextBoxManager_hideInput_m329229818(__this, /*hidden argument*/NULL);
		TextBoxManager_hideOptions_m3665273749(__this, /*hidden argument*/NULL);
		TextBoxManager_runDialogue_m1497414678(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager::runDialogue()
extern "C"  void TextBoxManager_runDialogue_m1497414678 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = TextBoxManager_run_m2556487987(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TextBoxManager::fading()
extern "C"  RuntimeObject* TextBoxManager_fading_m1319799917 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextBoxManager_fading_m1319799917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CfadingU3Ec__Iterator0_t3917186881 * V_0 = NULL;
	{
		U3CfadingU3Ec__Iterator0_t3917186881 * L_0 = (U3CfadingU3Ec__Iterator0_t3917186881 *)il2cpp_codegen_object_new(U3CfadingU3Ec__Iterator0_t3917186881_il2cpp_TypeInfo_var);
		U3CfadingU3Ec__Iterator0__ctor_m3036370343(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CfadingU3Ec__Iterator0_t3917186881 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CfadingU3Ec__Iterator0_t3917186881 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator TextBoxManager::textScroll(System.String)
extern "C"  RuntimeObject* TextBoxManager_textScroll_m2712319739 (TextBoxManager_t1855233713 * __this, String_t* ___lineOfText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextBoxManager_textScroll_m2712319739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CtextScrollU3Ec__Iterator1_t3632678001 * V_0 = NULL;
	{
		U3CtextScrollU3Ec__Iterator1_t3632678001 * L_0 = (U3CtextScrollU3Ec__Iterator1_t3632678001 *)il2cpp_codegen_object_new(U3CtextScrollU3Ec__Iterator1_t3632678001_il2cpp_TypeInfo_var);
		U3CtextScrollU3Ec__Iterator1__ctor_m1015419896(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CtextScrollU3Ec__Iterator1_t3632678001 * L_1 = V_0;
		String_t* L_2 = ___lineOfText0;
		L_1->set_lineOfText_1(L_2);
		U3CtextScrollU3Ec__Iterator1_t3632678001 * L_3 = V_0;
		L_3->set_U24this_2(__this);
		U3CtextScrollU3Ec__Iterator1_t3632678001 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator TextBoxManager::run()
extern "C"  RuntimeObject* TextBoxManager_run_m2556487987 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextBoxManager_run_m2556487987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CrunU3Ec__Iterator2_t2869353945 * V_0 = NULL;
	{
		U3CrunU3Ec__Iterator2_t2869353945 * L_0 = (U3CrunU3Ec__Iterator2_t2869353945 *)il2cpp_codegen_object_new(U3CrunU3Ec__Iterator2_t2869353945_il2cpp_TypeInfo_var);
		U3CrunU3Ec__Iterator2__ctor_m4030987400(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CrunU3Ec__Iterator2_t2869353945 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CrunU3Ec__Iterator2_t2869353945 * L_2 = V_0;
		return L_2;
	}
}
// System.Void TextBoxManager::setSelectOption(System.Int32)
extern "C"  void TextBoxManager_setSelectOption_m1115749924 (TextBoxManager_t1855233713 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_selectOption_6(L_0);
		return;
	}
}
// System.Void TextBoxManager::loadDialogue(System.Int32)
extern "C"  void TextBoxManager_loadDialogue_m3548346734 (TextBoxManager_t1855233713 * __this, int32_t ___dialogueDestination0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextBoxManager_loadDialogue_m3548346734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m1447119458(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(54 /* System.Void System.Xml.XmlDocument::Load(System.String) */, L_1, _stringLiteral115248270);
		int32_t L_2 = ___dialogueDestination0;
		__this->set_nodeTracker_14(L_2);
		XmlDocument_t2837193595 * L_3 = V_0;
		XmlNodeList_t2551693786 * L_4 = VirtFuncInvoker1< XmlNodeList_t2551693786 *, String_t* >::Invoke(52 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String) */, L_3, _stringLiteral2963533511);
		RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_4);
		V_1 = L_5;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0568;
		}

IL_002e:
		{
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_6 = (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 *)il2cpp_codegen_object_new(U3CloadDialogueU3Ec__AnonStorey3_t3225074152_il2cpp_TypeInfo_var);
			U3CloadDialogueU3Ec__AnonStorey3__ctor_m2950206124(L_6, /*hidden argument*/NULL);
			V_2 = L_6;
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_7 = V_2;
			RuntimeObject* L_8 = V_1;
			RuntimeObject * L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			L_7->set_node_0(((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_9, XmlNode_t3767805227_il2cpp_TypeInfo_var)));
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_10 = V_2;
			L_10->set_U24this_1(__this);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_11 = V_2;
			XmlNode_t3767805227 * L_12 = L_11->get_node_0();
			XmlElement_t561603118 * L_13 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_12, _stringLiteral791021989);
			String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_13);
			String_t* L_15 = Int32_ToString_m141394615((int32_t*)(&___dialogueDestination0), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0568;
			}
		}

IL_0078:
		{
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_17 = V_2;
			XmlNode_t3767805227 * L_18 = L_17->get_node_0();
			XmlElement_t561603118 * L_19 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_18, _stringLiteral3033935407);
			XmlNodeList_t2551693786 * L_20 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_19);
			int32_t L_21 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_20);
			__this->set_scripts_12(((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_21)));
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_22 = V_2;
			XmlNode_t3767805227 * L_23 = L_22->get_node_0();
			XmlElement_t561603118 * L_24 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_23, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_25 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_24);
			int32_t L_26 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_25);
			__this->set_destinationCount_11(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_26)));
			Text_t1901882714 * L_27 = __this->get_optionText_5();
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_28 = V_2;
			XmlNode_t3767805227 * L_29 = L_28->get_node_0();
			XmlElement_t561603118 * L_30 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_29, _stringLiteral751995096);
			String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_30);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_31);
			V_3 = 0;
			goto IL_0115;
		}

IL_00e9:
		{
			StringU5BU5D_t1281789340* L_32 = __this->get_scripts_12();
			int32_t L_33 = V_3;
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_34 = V_2;
			XmlNode_t3767805227 * L_35 = L_34->get_node_0();
			XmlElement_t561603118 * L_36 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_35, _stringLiteral3033935407);
			XmlNodeList_t2551693786 * L_37 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_36);
			int32_t L_38 = V_3;
			XmlNode_t3767805227 * L_39 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_37, L_38);
			String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_39);
			ArrayElementTypeCheck (L_32, L_40);
			(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33), (String_t*)L_40);
			int32_t L_41 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		}

IL_0115:
		{
			int32_t L_42 = V_3;
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_43 = V_2;
			XmlNode_t3767805227 * L_44 = L_43->get_node_0();
			XmlElement_t561603118 * L_45 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_44, _stringLiteral3033935407);
			XmlNodeList_t2551693786 * L_46 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_45);
			int32_t L_47 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_46);
			if ((((int32_t)L_42) < ((int32_t)L_47)))
			{
				goto IL_00e9;
			}
		}

IL_0135:
		{
			V_4 = 0;
			goto IL_017d;
		}

IL_013d:
		{
			Int32U5BU5D_t385246372* L_48 = __this->get_destinationCount_11();
			int32_t L_49 = V_4;
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_50 = V_2;
			XmlNode_t3767805227 * L_51 = L_50->get_node_0();
			XmlElement_t561603118 * L_52 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_51, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_53 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_52);
			int32_t L_54 = V_4;
			XmlNode_t3767805227 * L_55 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_53, L_54);
			XmlNodeList_t2551693786 * L_56 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_55);
			XmlNode_t3767805227 * L_57 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_56, 1);
			String_t* L_58 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_57);
			int32_t L_59 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
			(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49), (int32_t)L_59);
			int32_t L_60 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		}

IL_017d:
		{
			int32_t L_61 = V_4;
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_62 = V_2;
			XmlNode_t3767805227 * L_63 = L_62->get_node_0();
			XmlElement_t561603118 * L_64 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_63, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_65 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_64);
			int32_t L_66 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_65);
			if ((((int32_t)L_61) < ((int32_t)L_66)))
			{
				goto IL_013d;
			}
		}

IL_019e:
		{
			int32_t L_67 = ___dialogueDestination0;
			if ((((int32_t)L_67) == ((int32_t)3)))
			{
				goto IL_01ac;
			}
		}

IL_01a5:
		{
			int32_t L_68 = ___dialogueDestination0;
			if ((!(((uint32_t)L_68) == ((uint32_t)4))))
			{
				goto IL_036c;
			}
		}

IL_01ac:
		{
			V_5 = 0;
			goto IL_0346;
		}

IL_01b4:
		{
			int32_t L_69 = V_5;
			switch (L_69)
			{
				case 0:
				{
					goto IL_01d0;
				}
				case 1:
				{
					goto IL_022c;
				}
				case 2:
				{
					goto IL_0288;
				}
				case 3:
				{
					goto IL_02e4;
				}
			}
		}

IL_01cb:
		{
			goto IL_0340;
		}

IL_01d0:
		{
			Button_t4055032469 * L_70 = __this->get_button1_7();
			Text_t1901882714 * L_71 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_70, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_72 = V_2;
			XmlNode_t3767805227 * L_73 = L_72->get_node_0();
			XmlElement_t561603118 * L_74 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_73, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_75 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_74);
			XmlNode_t3767805227 * L_76 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_75, 0);
			XmlNodeList_t2551693786 * L_77 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_76);
			XmlNode_t3767805227 * L_78 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_77, 0);
			String_t* L_79 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_78);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_71, L_79);
			Button_t4055032469 * L_80 = __this->get_button1_7();
			ButtonClickedEvent_t48803504 * L_81 = Button_get_onClick_m2332132945(L_80, /*hidden argument*/NULL);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_82 = V_2;
			intptr_t L_83 = (intptr_t)U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__0_m2818858869_RuntimeMethod_var;
			UnityAction_t3245792599 * L_84 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
			UnityAction__ctor_m772160306(L_84, L_82, L_83, /*hidden argument*/NULL);
			UnityEvent_AddListener_m2276267359(L_81, L_84, /*hidden argument*/NULL);
			goto IL_0340;
		}

IL_022c:
		{
			Button_t4055032469 * L_85 = __this->get_button2_8();
			Text_t1901882714 * L_86 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_85, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_87 = V_2;
			XmlNode_t3767805227 * L_88 = L_87->get_node_0();
			XmlElement_t561603118 * L_89 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_88, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_90 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_89);
			XmlNode_t3767805227 * L_91 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_90, 1);
			XmlNodeList_t2551693786 * L_92 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_91);
			XmlNode_t3767805227 * L_93 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_92, 0);
			String_t* L_94 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_93);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_86, L_94);
			Button_t4055032469 * L_95 = __this->get_button2_8();
			ButtonClickedEvent_t48803504 * L_96 = Button_get_onClick_m2332132945(L_95, /*hidden argument*/NULL);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_97 = V_2;
			intptr_t L_98 = (intptr_t)U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__1_m1252774928_RuntimeMethod_var;
			UnityAction_t3245792599 * L_99 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
			UnityAction__ctor_m772160306(L_99, L_97, L_98, /*hidden argument*/NULL);
			UnityEvent_AddListener_m2276267359(L_96, L_99, /*hidden argument*/NULL);
			goto IL_0340;
		}

IL_0288:
		{
			Button_t4055032469 * L_100 = __this->get_button3_9();
			Text_t1901882714 * L_101 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_100, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_102 = V_2;
			XmlNode_t3767805227 * L_103 = L_102->get_node_0();
			XmlElement_t561603118 * L_104 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_103, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_105 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_104);
			XmlNode_t3767805227 * L_106 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_105, 2);
			XmlNodeList_t2551693786 * L_107 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_106);
			XmlNode_t3767805227 * L_108 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_107, 0);
			String_t* L_109 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_108);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_101, L_109);
			Button_t4055032469 * L_110 = __this->get_button3_9();
			ButtonClickedEvent_t48803504 * L_111 = Button_get_onClick_m2332132945(L_110, /*hidden argument*/NULL);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_112 = V_2;
			intptr_t L_113 = (intptr_t)U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__2_m1656059455_RuntimeMethod_var;
			UnityAction_t3245792599 * L_114 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
			UnityAction__ctor_m772160306(L_114, L_112, L_113, /*hidden argument*/NULL);
			UnityEvent_AddListener_m2276267359(L_111, L_114, /*hidden argument*/NULL);
			goto IL_0340;
		}

IL_02e4:
		{
			Button_t4055032469 * L_115 = __this->get_button4_10();
			Text_t1901882714 * L_116 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_115, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_117 = V_2;
			XmlNode_t3767805227 * L_118 = L_117->get_node_0();
			XmlElement_t561603118 * L_119 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_118, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_120 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_119);
			XmlNode_t3767805227 * L_121 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_120, 3);
			XmlNodeList_t2551693786 * L_122 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_121);
			XmlNode_t3767805227 * L_123 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_122, 0);
			String_t* L_124 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_123);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_116, L_124);
			Button_t4055032469 * L_125 = __this->get_button4_10();
			ButtonClickedEvent_t48803504 * L_126 = Button_get_onClick_m2332132945(L_125, /*hidden argument*/NULL);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_127 = V_2;
			intptr_t L_128 = (intptr_t)U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__3_m89975514_RuntimeMethod_var;
			UnityAction_t3245792599 * L_129 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
			UnityAction__ctor_m772160306(L_129, L_127, L_128, /*hidden argument*/NULL);
			UnityEvent_AddListener_m2276267359(L_126, L_129, /*hidden argument*/NULL);
			goto IL_0340;
		}

IL_0340:
		{
			int32_t L_130 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
		}

IL_0346:
		{
			int32_t L_131 = V_5;
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_132 = V_2;
			XmlNode_t3767805227 * L_133 = L_132->get_node_0();
			XmlElement_t561603118 * L_134 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_133, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_135 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_134);
			int32_t L_136 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_135);
			if ((((int32_t)L_131) < ((int32_t)L_136)))
			{
				goto IL_01b4;
			}
		}

IL_0367:
		{
			goto IL_0527;
		}

IL_036c:
		{
			V_6 = 0;
			goto IL_0506;
		}

IL_0374:
		{
			int32_t L_137 = V_6;
			switch (L_137)
			{
				case 0:
				{
					goto IL_0390;
				}
				case 1:
				{
					goto IL_03ec;
				}
				case 2:
				{
					goto IL_0448;
				}
				case 3:
				{
					goto IL_04a4;
				}
			}
		}

IL_038b:
		{
			goto IL_0500;
		}

IL_0390:
		{
			Button_t4055032469 * L_138 = __this->get_button1_7();
			Text_t1901882714 * L_139 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_138, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_140 = V_2;
			XmlNode_t3767805227 * L_141 = L_140->get_node_0();
			XmlElement_t561603118 * L_142 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_141, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_143 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_142);
			XmlNode_t3767805227 * L_144 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_143, 0);
			XmlNodeList_t2551693786 * L_145 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_144);
			XmlNode_t3767805227 * L_146 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_145, 0);
			String_t* L_147 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_146);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_139, L_147);
			Button_t4055032469 * L_148 = __this->get_button1_7();
			ButtonClickedEvent_t48803504 * L_149 = Button_get_onClick_m2332132945(L_148, /*hidden argument*/NULL);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_150 = V_2;
			intptr_t L_151 = (intptr_t)U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__4_m849490401_RuntimeMethod_var;
			UnityAction_t3245792599 * L_152 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
			UnityAction__ctor_m772160306(L_152, L_150, L_151, /*hidden argument*/NULL);
			UnityEvent_AddListener_m2276267359(L_149, L_152, /*hidden argument*/NULL);
			goto IL_0500;
		}

IL_03ec:
		{
			Button_t4055032469 * L_153 = __this->get_button2_8();
			Text_t1901882714 * L_154 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_153, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_155 = V_2;
			XmlNode_t3767805227 * L_156 = L_155->get_node_0();
			XmlElement_t561603118 * L_157 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_156, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_158 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_157);
			XmlNode_t3767805227 * L_159 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_158, 1);
			XmlNodeList_t2551693786 * L_160 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_159);
			XmlNode_t3767805227 * L_161 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_160, 0);
			String_t* L_162 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_161);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_154, L_162);
			Button_t4055032469 * L_163 = __this->get_button2_8();
			ButtonClickedEvent_t48803504 * L_164 = Button_get_onClick_m2332132945(L_163, /*hidden argument*/NULL);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_165 = V_2;
			intptr_t L_166 = (intptr_t)U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__5_m3578373756_RuntimeMethod_var;
			UnityAction_t3245792599 * L_167 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
			UnityAction__ctor_m772160306(L_167, L_165, L_166, /*hidden argument*/NULL);
			UnityEvent_AddListener_m2276267359(L_164, L_167, /*hidden argument*/NULL);
			goto IL_0500;
		}

IL_0448:
		{
			Button_t4055032469 * L_168 = __this->get_button3_9();
			Text_t1901882714 * L_169 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_168, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_170 = V_2;
			XmlNode_t3767805227 * L_171 = L_170->get_node_0();
			XmlElement_t561603118 * L_172 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_171, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_173 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_172);
			XmlNode_t3767805227 * L_174 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_173, 2);
			XmlNodeList_t2551693786 * L_175 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_174);
			XmlNode_t3767805227 * L_176 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_175, 0);
			String_t* L_177 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_176);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_169, L_177);
			Button_t4055032469 * L_178 = __this->get_button3_9();
			ButtonClickedEvent_t48803504 * L_179 = Button_get_onClick_m2332132945(L_178, /*hidden argument*/NULL);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_180 = V_2;
			intptr_t L_181 = (intptr_t)U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__6_m3981658283_RuntimeMethod_var;
			UnityAction_t3245792599 * L_182 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
			UnityAction__ctor_m772160306(L_182, L_180, L_181, /*hidden argument*/NULL);
			UnityEvent_AddListener_m2276267359(L_179, L_182, /*hidden argument*/NULL);
			goto IL_0500;
		}

IL_04a4:
		{
			Button_t4055032469 * L_183 = __this->get_button4_10();
			Text_t1901882714 * L_184 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_183, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_185 = V_2;
			XmlNode_t3767805227 * L_186 = L_185->get_node_0();
			XmlElement_t561603118 * L_187 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_186, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_188 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_187);
			XmlNode_t3767805227 * L_189 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_188, 3);
			XmlNodeList_t2551693786 * L_190 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_189);
			XmlNode_t3767805227 * L_191 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_190, 0);
			String_t* L_192 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_191);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_184, L_192);
			Button_t4055032469 * L_193 = __this->get_button4_10();
			ButtonClickedEvent_t48803504 * L_194 = Button_get_onClick_m2332132945(L_193, /*hidden argument*/NULL);
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_195 = V_2;
			intptr_t L_196 = (intptr_t)U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__7_m2415574342_RuntimeMethod_var;
			UnityAction_t3245792599 * L_197 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
			UnityAction__ctor_m772160306(L_197, L_195, L_196, /*hidden argument*/NULL);
			UnityEvent_AddListener_m2276267359(L_194, L_197, /*hidden argument*/NULL);
			goto IL_0500;
		}

IL_0500:
		{
			int32_t L_198 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_198, (int32_t)1));
		}

IL_0506:
		{
			int32_t L_199 = V_6;
			U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * L_200 = V_2;
			XmlNode_t3767805227 * L_201 = L_200->get_node_0();
			XmlElement_t561603118 * L_202 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_201, _stringLiteral2715198515);
			XmlNodeList_t2551693786 * L_203 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_202);
			int32_t L_204 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_203);
			if ((((int32_t)L_199) < ((int32_t)L_204)))
			{
				goto IL_0374;
			}
		}

IL_0527:
		{
			int32_t L_205 = ___dialogueDestination0;
			if ((!(((uint32_t)L_205) == ((uint32_t)1))))
			{
				goto IL_0553;
			}
		}

IL_052e:
		{
			StringU5BU5D_t1281789340* L_206 = __this->get_scripts_12();
			int32_t L_207 = 0;
			String_t* L_208 = (L_206)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_207));
			String_t* L_209 = __this->get_username_16();
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_210 = String_Concat_m3937257545(NULL /*static, unused*/, L_208, L_209, /*hidden argument*/NULL);
			RuntimeObject* L_211 = TextBoxManager_textScroll_m2712319739(__this, L_210, /*hidden argument*/NULL);
			MonoBehaviour_StartCoroutine_m3411253000(__this, L_211, /*hidden argument*/NULL);
			goto IL_0568;
		}

IL_0553:
		{
			StringU5BU5D_t1281789340* L_212 = __this->get_scripts_12();
			int32_t L_213 = 0;
			String_t* L_214 = (L_212)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_213));
			RuntimeObject* L_215 = TextBoxManager_textScroll_m2712319739(__this, L_214, /*hidden argument*/NULL);
			MonoBehaviour_StartCoroutine_m3411253000(__this, L_215, /*hidden argument*/NULL);
		}

IL_0568:
		{
			RuntimeObject* L_216 = V_1;
			bool L_217 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_216);
			if (L_217)
			{
				goto IL_002e;
			}
		}

IL_0573:
		{
			IL2CPP_LEAVE(0x58E, FINALLY_0578);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0578;
	}

FINALLY_0578:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_218 = V_1;
			RuntimeObject* L_219 = ((RuntimeObject*)IsInst((RuntimeObject*)L_218, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_7 = L_219;
			if (!L_219)
			{
				goto IL_058d;
			}
		}

IL_0586:
		{
			RuntimeObject* L_220 = V_7;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_220);
		}

IL_058d:
		{
			IL2CPP_END_FINALLY(1400)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1400)
	{
		IL2CPP_JUMP_TBL(0x58E, IL_058e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_058e:
	{
		return;
	}
}
// System.Void TextBoxManager::showOptions()
extern "C"  void TextBoxManager_showOptions_m3024039106 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_optionText_5();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		Button_t4055032469 * L_2 = __this->get_button1_7();
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		Button_t4055032469 * L_4 = __this->get_button2_8();
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
		Button_t4055032469 * L_6 = __this->get_button3_9();
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_7, (bool)1, /*hidden argument*/NULL);
		Button_t4055032469 * L_8 = __this->get_button4_10();
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_9, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager::hideOptions()
extern "C"  void TextBoxManager_hideOptions_m3665273749 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_optionText_5();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		Button_t4055032469 * L_2 = __this->get_button1_7();
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		Button_t4055032469 * L_4 = __this->get_button2_8();
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		Button_t4055032469 * L_6 = __this->get_button3_9();
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_7, (bool)0, /*hidden argument*/NULL);
		Button_t4055032469 * L_8 = __this->get_button4_10();
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_9, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager::showInput()
extern "C"  void TextBoxManager_showInput_m2379309978 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	{
		InputField_t3762917431 * L_0 = __this->get_nameField_15();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		Text_t1901882714 * L_2 = __this->get_optionText_5();
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		InputField_t3762917431 * L_4 = __this->get_nameField_15();
		VirtActionInvoker0::Invoke(38 /* System.Void UnityEngine.UI.Selectable::Select() */, L_4);
		return;
	}
}
// System.Void TextBoxManager::hideInput()
extern "C"  void TextBoxManager_hideInput_m329229818 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	{
		InputField_t3762917431 * L_0 = __this->get_nameField_15();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		Text_t1901882714 * L_2 = __this->get_optionText_5();
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager::showMainText()
extern "C"  void TextBoxManager_showMainText_m3777940172 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_mainUIText_4();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager::hideMainText()
extern "C"  void TextBoxManager_hideMainText_m3479932493 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_mainUIText_4();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager::Update()
extern "C"  void TextBoxManager_Update_m3479694462 (TextBoxManager_t1855233713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextBoxManager_Update_m3479694462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_nodeTracker_14();
		if (L_0)
		{
			goto IL_010f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_010a;
		}
	}
	{
		bool L_2 = __this->get_isTyping_17();
		if (L_2)
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_3 = __this->get_count_13();
		__this->set_count_13(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = __this->get_count_13();
		StringU5BU5D_t1281789340* L_5 = __this->get_scripts_12();
		if ((!(((uint32_t)L_4) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))))))))
		{
			goto IL_005b;
		}
	}
	{
		TextBoxManager_showInput_m2379309978(__this, /*hidden argument*/NULL);
		TextBoxManager_hideMainText_m3479932493(__this, /*hidden argument*/NULL);
		__this->set_count_13(0);
		goto IL_00e8;
	}

IL_005b:
	{
		InputField_t3762917431 * L_6 = __this->get_nameField_15();
		String_t* L_7 = InputField_get_text_m3534748202(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_9 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_10 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		InputField_t3762917431 * L_11 = __this->get_nameField_15();
		String_t* L_12 = InputField_get_text_m3534748202(L_11, /*hidden argument*/NULL);
		__this->set_username_16(L_12);
		InputField_t3762917431 * L_13 = __this->get_nameField_15();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		InputField_set_text_m1877260015(L_13, L_14, /*hidden argument*/NULL);
		TextBoxManager_hideOptions_m3665273749(__this, /*hidden argument*/NULL);
		TextBoxManager_hideInput_m329229818(__this, /*hidden argument*/NULL);
		__this->set_count_13(0);
		StringU5BU5D_t1281789340* L_15 = __this->get_scripts_12();
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_16);
		TextBoxManager_setSelectOption_m1115749924(__this, 1, /*hidden argument*/NULL);
		goto IL_00e8;
	}

IL_00ce:
	{
		StringU5BU5D_t1281789340* L_17 = __this->get_scripts_12();
		int32_t L_18 = __this->get_count_13();
		int32_t L_19 = L_18;
		String_t* L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		RuntimeObject* L_21 = TextBoxManager_textScroll_m2712319739(__this, L_20, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_21, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		goto IL_010a;
	}

IL_00ed:
	{
		bool L_22 = __this->get_isTyping_17();
		if (!L_22)
		{
			goto IL_010a;
		}
	}
	{
		bool L_23 = __this->get_cancelTyping_18();
		if (L_23)
		{
			goto IL_010a;
		}
	}
	{
		__this->set_cancelTyping_18((bool)1);
	}

IL_010a:
	{
		goto IL_0384;
	}

IL_010f:
	{
		int32_t L_24 = __this->get_nodeTracker_14();
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_01db;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_25 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_01d6;
		}
	}
	{
		bool L_26 = __this->get_isTyping_17();
		if (L_26)
		{
			goto IL_01b9;
		}
	}
	{
		int32_t L_27 = __this->get_count_13();
		__this->set_count_13(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		int32_t L_28 = __this->get_count_13();
		StringU5BU5D_t1281789340* L_29 = __this->get_scripts_12();
		if ((!(((uint32_t)L_28) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length))))))))
		{
			goto IL_019a;
		}
	}
	{
		TextBoxManager_showOptions_m3024039106(__this, /*hidden argument*/NULL);
		Button_t4055032469 * L_30 = __this->get_button3_9();
		GameObject_t1113636619 * L_31 = Component_get_gameObject_m442555142(L_30, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_31, (bool)0, /*hidden argument*/NULL);
		Button_t4055032469 * L_32 = __this->get_button4_10();
		GameObject_t1113636619 * L_33 = Component_get_gameObject_m442555142(L_32, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_33, (bool)0, /*hidden argument*/NULL);
		TextBoxManager_hideMainText_m3479932493(__this, /*hidden argument*/NULL);
		__this->set_count_13(0);
		StringU5BU5D_t1281789340* L_34 = __this->get_scripts_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_35);
		goto IL_01b4;
	}

IL_019a:
	{
		StringU5BU5D_t1281789340* L_36 = __this->get_scripts_12();
		int32_t L_37 = __this->get_count_13();
		int32_t L_38 = L_37;
		String_t* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		RuntimeObject* L_40 = TextBoxManager_textScroll_m2712319739(__this, L_39, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_40, /*hidden argument*/NULL);
	}

IL_01b4:
	{
		goto IL_01d6;
	}

IL_01b9:
	{
		bool L_41 = __this->get_isTyping_17();
		if (!L_41)
		{
			goto IL_01d6;
		}
	}
	{
		bool L_42 = __this->get_cancelTyping_18();
		if (L_42)
		{
			goto IL_01d6;
		}
	}
	{
		__this->set_cancelTyping_18((bool)1);
	}

IL_01d6:
	{
		goto IL_0384;
	}

IL_01db:
	{
		int32_t L_43 = __this->get_nodeTracker_14();
		if ((!(((uint32_t)L_43) == ((uint32_t)2))))
		{
			goto IL_02eb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_44 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_02e6;
		}
	}
	{
		bool L_45 = __this->get_isTyping_17();
		if (L_45)
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_46 = __this->get_count_13();
		__this->set_count_13(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1)));
		int32_t L_47 = __this->get_count_13();
		StringU5BU5D_t1281789340* L_48 = __this->get_scripts_12();
		if ((!(((uint32_t)L_47) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_48)->max_length))))))))
		{
			goto IL_0237;
		}
	}
	{
		TextBoxManager_showInput_m2379309978(__this, /*hidden argument*/NULL);
		TextBoxManager_hideMainText_m3479932493(__this, /*hidden argument*/NULL);
		__this->set_count_13(0);
		goto IL_02c4;
	}

IL_0237:
	{
		InputField_t3762917431 * L_49 = __this->get_nameField_15();
		String_t* L_50 = InputField_get_text_m3534748202(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_51 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_52 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_02aa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_53 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_02aa;
		}
	}
	{
		InputField_t3762917431 * L_54 = __this->get_nameField_15();
		String_t* L_55 = InputField_get_text_m3534748202(L_54, /*hidden argument*/NULL);
		__this->set_username_16(L_55);
		InputField_t3762917431 * L_56 = __this->get_nameField_15();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_57 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		InputField_set_text_m1877260015(L_56, L_57, /*hidden argument*/NULL);
		TextBoxManager_hideOptions_m3665273749(__this, /*hidden argument*/NULL);
		TextBoxManager_hideInput_m329229818(__this, /*hidden argument*/NULL);
		__this->set_count_13(0);
		StringU5BU5D_t1281789340* L_58 = __this->get_scripts_12();
		String_t* L_59 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_59);
		TextBoxManager_setSelectOption_m1115749924(__this, 3, /*hidden argument*/NULL);
		goto IL_02c4;
	}

IL_02aa:
	{
		StringU5BU5D_t1281789340* L_60 = __this->get_scripts_12();
		int32_t L_61 = __this->get_count_13();
		int32_t L_62 = L_61;
		String_t* L_63 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		RuntimeObject* L_64 = TextBoxManager_textScroll_m2712319739(__this, L_63, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_64, /*hidden argument*/NULL);
	}

IL_02c4:
	{
		goto IL_02e6;
	}

IL_02c9:
	{
		bool L_65 = __this->get_isTyping_17();
		if (!L_65)
		{
			goto IL_02e6;
		}
	}
	{
		bool L_66 = __this->get_cancelTyping_18();
		if (L_66)
		{
			goto IL_02e6;
		}
	}
	{
		__this->set_cancelTyping_18((bool)1);
	}

IL_02e6:
	{
		goto IL_0384;
	}

IL_02eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_67 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0384;
		}
	}
	{
		bool L_68 = __this->get_isTyping_17();
		if (L_68)
		{
			goto IL_0367;
		}
	}
	{
		int32_t L_69 = __this->get_count_13();
		__this->set_count_13(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1)));
		int32_t L_70 = __this->get_count_13();
		StringU5BU5D_t1281789340* L_71 = __this->get_scripts_12();
		if ((!(((uint32_t)L_70) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_71)->max_length))))))))
		{
			goto IL_0348;
		}
	}
	{
		TextBoxManager_showOptions_m3024039106(__this, /*hidden argument*/NULL);
		TextBoxManager_hideMainText_m3479932493(__this, /*hidden argument*/NULL);
		__this->set_count_13(0);
		StringU5BU5D_t1281789340* L_72 = __this->get_scripts_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		ArrayElementTypeCheck (L_72, L_73);
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_73);
		goto IL_0362;
	}

IL_0348:
	{
		StringU5BU5D_t1281789340* L_74 = __this->get_scripts_12();
		int32_t L_75 = __this->get_count_13();
		int32_t L_76 = L_75;
		String_t* L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		RuntimeObject* L_78 = TextBoxManager_textScroll_m2712319739(__this, L_77, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_78, /*hidden argument*/NULL);
	}

IL_0362:
	{
		goto IL_0384;
	}

IL_0367:
	{
		bool L_79 = __this->get_isTyping_17();
		if (!L_79)
		{
			goto IL_0384;
		}
	}
	{
		bool L_80 = __this->get_cancelTyping_18();
		if (L_80)
		{
			goto IL_0384;
		}
	}
	{
		__this->set_cancelTyping_18((bool)1);
	}

IL_0384:
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
// System.Void TextBoxManager/<fading>c__Iterator0::.ctor()
extern "C"  void U3CfadingU3Ec__Iterator0__ctor_m3036370343 (U3CfadingU3Ec__Iterator0_t3917186881 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TextBoxManager/<fading>c__Iterator0::MoveNext()
extern "C"  bool U3CfadingU3Ec__Iterator0_MoveNext_m2983973274 (U3CfadingU3Ec__Iterator0_t3917186881 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CfadingU3Ec__Iterator0_MoveNext_m2983973274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0062;
			}
		}
	}
	{
		goto IL_0073;
	}

IL_0021:
	{
		TextBoxManager_t1855233713 * L_2 = __this->get_U24this_0();
		Animator_t434523843 * L_3 = L_2->get_anim_21();
		Animator_SetBool_m234840832(L_3, _stringLiteral1985039536, (bool)1, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)U3CfadingU3Ec__Iterator0_U3CU3Em__0_m2337224762_RuntimeMethod_var;
		Func_1_t3822001908 * L_5 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
		Func_1__ctor_m1399073142(L_5, __this, L_4, /*hidden argument*/Func_1__ctor_m1399073142_RuntimeMethod_var);
		WaitUntil_t3373419216 * L_6 = (WaitUntil_t3373419216 *)il2cpp_codegen_object_new(WaitUntil_t3373419216_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4227046299(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U24current_1(L_6);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_005d:
	{
		goto IL_0075;
	}

IL_0062:
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1350711218, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0073:
	{
		return (bool)0;
	}

IL_0075:
	{
		return (bool)1;
	}
}
// System.Object TextBoxManager/<fading>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CfadingU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3901933571 (U3CfadingU3Ec__Iterator0_t3917186881 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TextBoxManager/<fading>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CfadingU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m223610343 (U3CfadingU3Ec__Iterator0_t3917186881 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TextBoxManager/<fading>c__Iterator0::Dispose()
extern "C"  void U3CfadingU3Ec__Iterator0_Dispose_m2641666389 (U3CfadingU3Ec__Iterator0_t3917186881 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TextBoxManager/<fading>c__Iterator0::Reset()
extern "C"  void U3CfadingU3Ec__Iterator0_Reset_m2494072195 (U3CfadingU3Ec__Iterator0_t3917186881 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CfadingU3Ec__Iterator0_Reset_m2494072195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CfadingU3Ec__Iterator0_Reset_m2494072195_RuntimeMethod_var);
	}
}
// System.Boolean TextBoxManager/<fading>c__Iterator0::<>m__0()
extern "C"  bool U3CfadingU3Ec__Iterator0_U3CU3Em__0_m2337224762 (U3CfadingU3Ec__Iterator0_t3917186881 * __this, const RuntimeMethod* method)
{
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TextBoxManager_t1855233713 * L_0 = __this->get_U24this_0();
		Image_t2670269651 * L_1 = L_0->get_black_22();
		Color_t2555686324  L_2 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		float L_3 = (&V_0)->get_a_3();
		return (bool)((((float)L_3) == ((float)(1.0f)))? 1 : 0);
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
// System.Void TextBoxManager/<loadDialogue>c__AnonStorey3::.ctor()
extern "C"  void U3CloadDialogueU3Ec__AnonStorey3__ctor_m2950206124 (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager/<loadDialogue>c__AnonStorey3::<>m__0()
extern "C"  void U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__0_m2818858869 (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__0_m2818858869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextBoxManager_t1855233713 * L_0 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_1 = __this->get_U24this_1();
		Int32U5BU5D_t385246372* L_2 = L_1->get_destinationCount_11();
		int32_t L_3 = 0;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		TextBoxManager_setSelectOption_m1115749924(L_0, L_4, /*hidden argument*/NULL);
		TextBoxManager_t1855233713 * L_5 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_6 = __this->get_U24this_1();
		int32_t L_7 = L_6->get_score_19();
		XmlNode_t3767805227 * L_8 = __this->get_node_0();
		XmlElement_t561603118 * L_9 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_8, _stringLiteral2715198515);
		XmlNodeList_t2551693786 * L_10 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_9);
		XmlNode_t3767805227 * L_11 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_10, 0);
		XmlNodeList_t2551693786 * L_12 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_11);
		XmlNode_t3767805227 * L_13 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_12, 2);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_13);
		int32_t L_15 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		L_5->set_score_19(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_15)));
		return;
	}
}
// System.Void TextBoxManager/<loadDialogue>c__AnonStorey3::<>m__1()
extern "C"  void U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__1_m1252774928 (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__1_m1252774928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextBoxManager_t1855233713 * L_0 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_1 = __this->get_U24this_1();
		Int32U5BU5D_t385246372* L_2 = L_1->get_destinationCount_11();
		int32_t L_3 = 1;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		TextBoxManager_setSelectOption_m1115749924(L_0, L_4, /*hidden argument*/NULL);
		TextBoxManager_t1855233713 * L_5 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_6 = __this->get_U24this_1();
		int32_t L_7 = L_6->get_score_19();
		XmlNode_t3767805227 * L_8 = __this->get_node_0();
		XmlElement_t561603118 * L_9 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_8, _stringLiteral2715198515);
		XmlNodeList_t2551693786 * L_10 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_9);
		XmlNode_t3767805227 * L_11 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_10, 1);
		XmlNodeList_t2551693786 * L_12 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_11);
		XmlNode_t3767805227 * L_13 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_12, 2);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_13);
		int32_t L_15 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		L_5->set_score_19(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_15)));
		return;
	}
}
// System.Void TextBoxManager/<loadDialogue>c__AnonStorey3::<>m__2()
extern "C"  void U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__2_m1656059455 (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__2_m1656059455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextBoxManager_t1855233713 * L_0 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_1 = __this->get_U24this_1();
		Int32U5BU5D_t385246372* L_2 = L_1->get_destinationCount_11();
		int32_t L_3 = 2;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		TextBoxManager_setSelectOption_m1115749924(L_0, L_4, /*hidden argument*/NULL);
		TextBoxManager_t1855233713 * L_5 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_6 = __this->get_U24this_1();
		int32_t L_7 = L_6->get_score_19();
		XmlNode_t3767805227 * L_8 = __this->get_node_0();
		XmlElement_t561603118 * L_9 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_8, _stringLiteral2715198515);
		XmlNodeList_t2551693786 * L_10 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_9);
		XmlNode_t3767805227 * L_11 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_10, 2);
		XmlNodeList_t2551693786 * L_12 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_11);
		XmlNode_t3767805227 * L_13 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_12, 2);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_13);
		int32_t L_15 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		L_5->set_score_19(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_15)));
		return;
	}
}
// System.Void TextBoxManager/<loadDialogue>c__AnonStorey3::<>m__3()
extern "C"  void U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__3_m89975514 (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__3_m89975514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextBoxManager_t1855233713 * L_0 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_1 = __this->get_U24this_1();
		Int32U5BU5D_t385246372* L_2 = L_1->get_destinationCount_11();
		int32_t L_3 = 3;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		TextBoxManager_setSelectOption_m1115749924(L_0, L_4, /*hidden argument*/NULL);
		TextBoxManager_t1855233713 * L_5 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_6 = __this->get_U24this_1();
		int32_t L_7 = L_6->get_score_19();
		XmlNode_t3767805227 * L_8 = __this->get_node_0();
		XmlElement_t561603118 * L_9 = VirtFuncInvoker1< XmlElement_t561603118 *, String_t* >::Invoke(14 /* System.Xml.XmlElement System.Xml.XmlNode::get_Item(System.String) */, L_8, _stringLiteral2715198515);
		XmlNodeList_t2551693786 * L_10 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_9);
		XmlNode_t3767805227 * L_11 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_10, 3);
		XmlNodeList_t2551693786 * L_12 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_11);
		XmlNode_t3767805227 * L_13 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_12, 2);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_13);
		int32_t L_15 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		L_5->set_score_19(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_15)));
		return;
	}
}
// System.Void TextBoxManager/<loadDialogue>c__AnonStorey3::<>m__4()
extern "C"  void U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__4_m849490401 (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * __this, const RuntimeMethod* method)
{
	{
		TextBoxManager_t1855233713 * L_0 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_1 = __this->get_U24this_1();
		Int32U5BU5D_t385246372* L_2 = L_1->get_destinationCount_11();
		int32_t L_3 = 0;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		TextBoxManager_setSelectOption_m1115749924(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager/<loadDialogue>c__AnonStorey3::<>m__5()
extern "C"  void U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__5_m3578373756 (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * __this, const RuntimeMethod* method)
{
	{
		TextBoxManager_t1855233713 * L_0 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_1 = __this->get_U24this_1();
		Int32U5BU5D_t385246372* L_2 = L_1->get_destinationCount_11();
		int32_t L_3 = 1;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		TextBoxManager_setSelectOption_m1115749924(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager/<loadDialogue>c__AnonStorey3::<>m__6()
extern "C"  void U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__6_m3981658283 (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * __this, const RuntimeMethod* method)
{
	{
		TextBoxManager_t1855233713 * L_0 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_1 = __this->get_U24this_1();
		Int32U5BU5D_t385246372* L_2 = L_1->get_destinationCount_11();
		int32_t L_3 = 2;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		TextBoxManager_setSelectOption_m1115749924(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextBoxManager/<loadDialogue>c__AnonStorey3::<>m__7()
extern "C"  void U3CloadDialogueU3Ec__AnonStorey3_U3CU3Em__7_m2415574342 (U3CloadDialogueU3Ec__AnonStorey3_t3225074152 * __this, const RuntimeMethod* method)
{
	{
		TextBoxManager_t1855233713 * L_0 = __this->get_U24this_1();
		TextBoxManager_t1855233713 * L_1 = __this->get_U24this_1();
		Int32U5BU5D_t385246372* L_2 = L_1->get_destinationCount_11();
		int32_t L_3 = 3;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		TextBoxManager_setSelectOption_m1115749924(L_0, L_4, /*hidden argument*/NULL);
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
// System.Void TextBoxManager/<run>c__Iterator2::.ctor()
extern "C"  void U3CrunU3Ec__Iterator2__ctor_m4030987400 (U3CrunU3Ec__Iterator2_t2869353945 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TextBoxManager/<run>c__Iterator2::MoveNext()
extern "C"  bool U3CrunU3Ec__Iterator2_MoveNext_m4067925234 (U3CrunU3Ec__Iterator2_t2869353945 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CrunU3Ec__Iterator2_MoveNext_m4067925234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_007d;
			}
		}
	}
	{
		goto IL_00ea;
	}

IL_0021:
	{
		goto IL_00a5;
	}

IL_0026:
	{
		TextBoxManager_t1855233713 * L_2 = __this->get_U24this_0();
		TextBoxManager_t1855233713 * L_3 = __this->get_U24this_0();
		int32_t L_4 = L_3->get_selectOption_6();
		TextBoxManager_loadDialogue_m3548346734(L_2, L_4, /*hidden argument*/NULL);
		TextBoxManager_t1855233713 * L_5 = __this->get_U24this_0();
		TextBoxManager_showMainText_m3777940172(L_5, /*hidden argument*/NULL);
		TextBoxManager_t1855233713 * L_6 = __this->get_U24this_0();
		TextBoxManager_setSelectOption_m1115749924(L_6, ((int32_t)-2), /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_0059:
	{
		WaitForSeconds_t1699091251 * L_7 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_7, (0.25f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_7);
		bool L_8 = __this->get_U24disposing_2();
		if (L_8)
		{
			goto IL_0078;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0078:
	{
		goto IL_00ec;
	}

IL_007d:
	{
		TextBoxManager_t1855233713 * L_9 = __this->get_U24this_0();
		int32_t L_10 = L_9->get_selectOption_6();
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0059;
		}
	}
	{
		TextBoxManager_t1855233713 * L_11 = __this->get_U24this_0();
		TextBoxManager_hideOptions_m3665273749(L_11, /*hidden argument*/NULL);
		TextBoxManager_t1855233713 * L_12 = __this->get_U24this_0();
		TextBoxManager_hideMainText_m3479932493(L_12, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		TextBoxManager_t1855233713 * L_13 = __this->get_U24this_0();
		int32_t L_14 = L_13->get_selectOption_6();
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_0026;
		}
	}
	{
		TextBoxManager_t1855233713 * L_15 = __this->get_U24this_0();
		TextBoxManager_t1855233713 * L_16 = __this->get_U24this_0();
		RuntimeObject* L_17 = TextBoxManager_fading_m1319799917(L_16, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_15, L_17, /*hidden argument*/NULL);
		TextBoxManager_t1855233713 * L_18 = __this->get_U24this_0();
		GameObject_t1113636619 * L_19 = L_18->get_textBox_2();
		GameObject_t1113636619 * L_20 = GameObject_get_gameObject_m3693461266(L_19, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_20, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00ea:
	{
		return (bool)0;
	}

IL_00ec:
	{
		return (bool)1;
	}
}
// System.Object TextBoxManager/<run>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CrunU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m118478078 (U3CrunU3Ec__Iterator2_t2869353945 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TextBoxManager/<run>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CrunU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m3102371048 (U3CrunU3Ec__Iterator2_t2869353945 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TextBoxManager/<run>c__Iterator2::Dispose()
extern "C"  void U3CrunU3Ec__Iterator2_Dispose_m1056400173 (U3CrunU3Ec__Iterator2_t2869353945 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TextBoxManager/<run>c__Iterator2::Reset()
extern "C"  void U3CrunU3Ec__Iterator2_Reset_m3373437599 (U3CrunU3Ec__Iterator2_t2869353945 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CrunU3Ec__Iterator2_Reset_m3373437599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CrunU3Ec__Iterator2_Reset_m3373437599_RuntimeMethod_var);
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
// System.Void TextBoxManager/<textScroll>c__Iterator1::.ctor()
extern "C"  void U3CtextScrollU3Ec__Iterator1__ctor_m1015419896 (U3CtextScrollU3Ec__Iterator1_t3632678001 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TextBoxManager/<textScroll>c__Iterator1::MoveNext()
extern "C"  bool U3CtextScrollU3Ec__Iterator1_MoveNext_m2786425576 (U3CtextScrollU3Ec__Iterator1_t3632678001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CtextScrollU3Ec__Iterator1_MoveNext_m2786425576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00c7;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_0021:
	{
		__this->set_U3CletterU3E__0_0(0);
		TextBoxManager_t1855233713 * L_2 = __this->get_U24this_2();
		Text_t1901882714 * L_3 = L_2->get_mainUIText_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		TextBoxManager_t1855233713 * L_5 = __this->get_U24this_2();
		L_5->set_isTyping_17((bool)1);
		TextBoxManager_t1855233713 * L_6 = __this->get_U24this_2();
		L_6->set_cancelTyping_18((bool)0);
		goto IL_00c7;
	}

IL_005a:
	{
		TextBoxManager_t1855233713 * L_7 = __this->get_U24this_2();
		Text_t1901882714 * L_8 = L_7->get_mainUIText_4();
		TextBoxManager_t1855233713 * L_9 = __this->get_U24this_2();
		Text_t1901882714 * L_10 = L_9->get_mainUIText_4();
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		String_t* L_12 = __this->get_lineOfText_1();
		int32_t L_13 = __this->get_U3CletterU3E__0_0();
		Il2CppChar L_14 = String_get_Chars_m2986988803(L_12, L_13, /*hidden argument*/NULL);
		Il2CppChar L_15 = L_14;
		RuntimeObject * L_16 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m904156431(NULL /*static, unused*/, L_11, L_16, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_17);
		int32_t L_18 = __this->get_U3CletterU3E__0_0();
		__this->set_U3CletterU3E__0_0(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		WaitForSeconds_t1699091251 * L_19 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_19, (0.02f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_19);
		bool L_20 = __this->get_U24disposing_4();
		if (L_20)
		{
			goto IL_00c2;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00c2:
	{
		goto IL_0136;
	}

IL_00c7:
	{
		TextBoxManager_t1855233713 * L_21 = __this->get_U24this_2();
		bool L_22 = L_21->get_isTyping_17();
		if (!L_22)
		{
			goto IL_00ff;
		}
	}
	{
		TextBoxManager_t1855233713 * L_23 = __this->get_U24this_2();
		bool L_24 = L_23->get_cancelTyping_18();
		if (L_24)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_25 = __this->get_U3CletterU3E__0_0();
		String_t* L_26 = __this->get_lineOfText_1();
		int32_t L_27 = String_get_Length_m3847582255(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1)))))
		{
			goto IL_005a;
		}
	}

IL_00ff:
	{
		TextBoxManager_t1855233713 * L_28 = __this->get_U24this_2();
		Text_t1901882714 * L_29 = L_28->get_mainUIText_4();
		String_t* L_30 = __this->get_lineOfText_1();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_30);
		TextBoxManager_t1855233713 * L_31 = __this->get_U24this_2();
		L_31->set_isTyping_17((bool)0);
		TextBoxManager_t1855233713 * L_32 = __this->get_U24this_2();
		L_32->set_cancelTyping_18((bool)0);
		__this->set_U24PC_5((-1));
	}

IL_0134:
	{
		return (bool)0;
	}

IL_0136:
	{
		return (bool)1;
	}
}
// System.Object TextBoxManager/<textScroll>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CtextScrollU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3755027075 (U3CtextScrollU3Ec__Iterator1_t3632678001 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object TextBoxManager/<textScroll>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CtextScrollU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1422845653 (U3CtextScrollU3Ec__Iterator1_t3632678001 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void TextBoxManager/<textScroll>c__Iterator1::Dispose()
extern "C"  void U3CtextScrollU3Ec__Iterator1_Dispose_m1121676047 (U3CtextScrollU3Ec__Iterator1_t3632678001 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void TextBoxManager/<textScroll>c__Iterator1::Reset()
extern "C"  void U3CtextScrollU3Ec__Iterator1_Reset_m977415632 (U3CtextScrollU3Ec__Iterator1_t3632678001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CtextScrollU3Ec__Iterator1_Reset_m977415632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CtextScrollU3Ec__Iterator1_Reset_m977415632_RuntimeMethod_var);
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
// System.Void threshold::.ctor()
extern "C"  void threshold__ctor_m3080035220 (threshold_t4008198305 * __this, const RuntimeMethod* method)
{
	{
		__this->set_AlphaThreshold_2((0.1f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void threshold::Start()
extern "C"  void threshold_Start_m1505551740 (threshold_t4008198305 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (threshold_Start_m1505551740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		float L_1 = __this->get_AlphaThreshold_2();
		Image_set_alphaHitTestMinimumThreshold_m650063757(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Timer::.ctor()
extern "C"  void Timer__ctor_m1596977667 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Timer::Start()
extern "C"  void Timer_Start_m762003253 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_Start_m762003253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Timer_resetTimer_m2408204133(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral3683405234, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Timer::startTime()
extern "C"  void Timer_startTime_m981800786 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_startTime_m981800786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		QuestManager_t588401851 * L_0 = ((QuestManager_t588401851_StaticFields*)il2cpp_codegen_static_fields_for(QuestManager_t588401851_il2cpp_TypeInfo_var))->get_instance_2();
		int32_t L_1 = L_0->get_forteMultiplier_16();
		__this->set_multiplier_12(L_1);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral3683405234, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Timer::startTimer()
extern "C"  RuntimeObject* Timer_startTimer_m310409824 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_startTimer_m310409824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CstartTimerU3Ec__Iterator0_t3414868529 * V_0 = NULL;
	{
		U3CstartTimerU3Ec__Iterator0_t3414868529 * L_0 = (U3CstartTimerU3Ec__Iterator0_t3414868529 *)il2cpp_codegen_object_new(U3CstartTimerU3Ec__Iterator0_t3414868529_il2cpp_TypeInfo_var);
		U3CstartTimerU3Ec__Iterator0__ctor_m3205552421(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CstartTimerU3Ec__Iterator0_t3414868529 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CstartTimerU3Ec__Iterator0_t3414868529 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Timer::resetTimer()
extern "C"  void Timer_resetTimer_m2408204133 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_resetTimer_m2408204133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_length_7((30.0f));
		__this->set_timesUp_3((bool)0);
		Text_t1901882714 * L_0 = __this->get_text_8();
		float* L_1 = __this->get_address_of_length_7();
		String_t* L_2 = Single_ToString_m3489843083((float*)L_1, _stringLiteral3452614618, /*hidden argument*/NULL);
		String_t* L_3 = String_Replace_m1273907647(L_2, _stringLiteral3452614530, _stringLiteral3452614550, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		GameObject_t1113636619 * L_4 = __this->get_wifiNetwork_5();
		WIFINetworkManager_t1080793997 * L_5 = GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836(L_4, /*hidden argument*/GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836_RuntimeMethod_var);
		L_5->set_secured_11(0);
		return;
	}
}
// System.Void Timer::addSecond()
extern "C"  void Timer_addSecond_m3960220265 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_addSecond_m3960220265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_timesUp_3();
		if (L_0)
		{
			goto IL_0052;
		}
	}
	{
		float L_1 = __this->get_length_7();
		__this->set_length_7(((float)il2cpp_codegen_add((float)L_1, (float)(3.0f))));
		Text_t1901882714 * L_2 = __this->get_addOrSubtract_9();
		Text_t1901882714 * L_3 = Component_GetComponent_TisText_t1901882714_m4196288697(L_2, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		Color_t2555686324  L_4 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		Text_t1901882714 * L_5 = __this->get_addOrSubtract_9();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral3451369349);
		Animator_t434523843 * L_6 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		Animator_SetTrigger_m2134052629(L_6, _stringLiteral402302843, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void Timer::Cleared()
extern "C"  void Timer_Cleared_m930012561 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_Cleared_m930012561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral1124821496, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Timer::PlayCleared()
extern "C"  RuntimeObject* Timer_PlayCleared_m3393821971 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_PlayCleared_m3393821971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPlayClearedU3Ec__Iterator1_t737918195 * V_0 = NULL;
	{
		U3CPlayClearedU3Ec__Iterator1_t737918195 * L_0 = (U3CPlayClearedU3Ec__Iterator1_t737918195 *)il2cpp_codegen_object_new(U3CPlayClearedU3Ec__Iterator1_t737918195_il2cpp_TypeInfo_var);
		U3CPlayClearedU3Ec__Iterator1__ctor_m834496745(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayClearedU3Ec__Iterator1_t737918195 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CPlayClearedU3Ec__Iterator1_t737918195 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Timer::minusSecond()
extern "C"  void Timer_minusSecond_m595946876 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_minusSecond_m595946876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_timesUp_3();
		if (L_0)
		{
			goto IL_0052;
		}
	}
	{
		float L_1 = __this->get_length_7();
		__this->set_length_7(((float)il2cpp_codegen_subtract((float)L_1, (float)(1.0f))));
		Text_t1901882714 * L_2 = __this->get_addOrSubtract_9();
		Text_t1901882714 * L_3 = Component_GetComponent_TisText_t1901882714_m4196288697(L_2, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		Color_t2555686324  L_4 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		Text_t1901882714 * L_5 = __this->get_addOrSubtract_9();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral3451500419);
		Animator_t434523843 * L_6 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		Animator_SetTrigger_m2134052629(L_6, _stringLiteral402302843, /*hidden argument*/NULL);
	}

IL_0052:
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
// System.Void Timer/<PlayCleared>c__Iterator1::.ctor()
extern "C"  void U3CPlayClearedU3Ec__Iterator1__ctor_m834496745 (U3CPlayClearedU3Ec__Iterator1_t737918195 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Timer/<PlayCleared>c__Iterator1::MoveNext()
extern "C"  bool U3CPlayClearedU3Ec__Iterator1_MoveNext_m2346019571 (U3CPlayClearedU3Ec__Iterator1_t737918195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPlayClearedU3Ec__Iterator1_MoveNext_m2346019571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_00bd;
			}
			case 2:
			{
				goto IL_0101;
			}
			case 3:
			{
				goto IL_0125;
			}
			case 4:
			{
				goto IL_0175;
			}
			case 5:
			{
				goto IL_01ae;
			}
		}
	}
	{
		goto IL_01f5;
	}

IL_0031:
	{
		Timer_t4185932343 * L_2 = __this->get_U24this_0();
		GameObject_t1113636619 * L_3 = L_2->get_cleared_6();
		AddScore_t369591168 * L_4 = GameObject_GetComponent_TisAddScore_t369591168_m926236821(L_3, /*hidden argument*/GameObject_GetComponent_TisAddScore_t369591168_m926236821_RuntimeMethod_var);
		Timer_t4185932343 * L_5 = __this->get_U24this_0();
		GameObject_t1113636619 * L_6 = L_5->get_wifiNetwork_5();
		WIFINetworkManager_t1080793997 * L_7 = GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836(L_6, /*hidden argument*/GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836_RuntimeMethod_var);
		int32_t L_8 = L_7->get_secured_11();
		Timer_t4185932343 * L_9 = __this->get_U24this_0();
		int32_t L_10 = L_9->get_multiplier_12();
		L_4->set_score_4(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)10))), (int32_t)L_10)));
		Timer_t4185932343 * L_11 = __this->get_U24this_0();
		GameObject_t1113636619 * L_12 = L_11->get_cleared_6();
		AddScore_t369591168 * L_13 = GameObject_GetComponent_TisAddScore_t369591168_m926236821(L_12, /*hidden argument*/GameObject_GetComponent_TisAddScore_t369591168_m926236821_RuntimeMethod_var);
		AddScore_playCleared_m650042174(L_13, /*hidden argument*/NULL);
		Timer_t4185932343 * L_14 = __this->get_U24this_0();
		GameObject_t1113636619 * L_15 = L_14->get_wifiNetwork_5();
		WIFINetworkManager_t1080793997 * L_16 = GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836(L_15, /*hidden argument*/GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836_RuntimeMethod_var);
		int32_t L_17 = L_16->get_secured_11();
		if (L_17)
		{
			goto IL_0101;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_18 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_18, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_18);
		bool L_19 = __this->get_U24disposing_2();
		if (L_19)
		{
			goto IL_00b8;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_00b8:
	{
		goto IL_01f7;
	}

IL_00bd:
	{
		Timer_t4185932343 * L_20 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_21 = L_20->get_canvasAudio_13();
		Timer_t4185932343 * L_22 = __this->get_U24this_0();
		AudioClip_t3680889665 * L_23 = L_22->get_failed_14();
		AudioSource_PlayOneShot_m2678069419(L_21, L_23, (1.0f), /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_24 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_24, (4.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_24);
		bool L_25 = __this->get_U24disposing_2();
		if (L_25)
		{
			goto IL_00fc;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00fc:
	{
		goto IL_01f7;
	}

IL_0101:
	{
		WaitForSeconds_t1699091251 * L_26 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_26, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_26);
		bool L_27 = __this->get_U24disposing_2();
		if (L_27)
		{
			goto IL_0120;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_0120:
	{
		goto IL_01f7;
	}

IL_0125:
	{
		Timer_t4185932343 * L_28 = __this->get_U24this_0();
		GameObject_t1113636619 * L_29 = L_28->get_main_4();
		GameObject_t1113636619 * L_30 = GameObject_get_gameObject_m3693461266(L_29, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_30, (bool)1, /*hidden argument*/NULL);
		Timer_t4185932343 * L_31 = __this->get_U24this_0();
		GameObject_t1113636619 * L_32 = L_31->get_fadeout_11();
		GameObject_t1113636619 * L_33 = GameObject_get_gameObject_m3693461266(L_32, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_33, (bool)1, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_34 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_34, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_34);
		bool L_35 = __this->get_U24disposing_2();
		if (L_35)
		{
			goto IL_0170;
		}
	}
	{
		__this->set_U24PC_3(4);
	}

IL_0170:
	{
		goto IL_01f7;
	}

IL_0175:
	{
		Timer_t4185932343 * L_36 = __this->get_U24this_0();
		Animator_t434523843 * L_37 = L_36->get_parent_2();
		Animator_SetTrigger_m2134052629(L_37, _stringLiteral1948332219, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_38 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_38, (4.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_38);
		bool L_39 = __this->get_U24disposing_2();
		if (L_39)
		{
			goto IL_01a9;
		}
	}
	{
		__this->set_U24PC_3(5);
	}

IL_01a9:
	{
		goto IL_01f7;
	}

IL_01ae:
	{
		Timer_t4185932343 * L_40 = __this->get_U24this_0();
		GameObject_t1113636619 * L_41 = L_40->get_fadeout_11();
		GameObject_t1113636619 * L_42 = GameObject_get_gameObject_m3693461266(L_41, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_42, (bool)0, /*hidden argument*/NULL);
		Timer_t4185932343 * L_43 = __this->get_U24this_0();
		Animator_t434523843 * L_44 = L_43->get_parent_2();
		Animator_ResetTrigger_m2321267720(L_44, _stringLiteral3446402805, /*hidden argument*/NULL);
		Timer_t4185932343 * L_45 = __this->get_U24this_0();
		Animator_t434523843 * L_46 = L_45->get_parent_2();
		Animator_ResetTrigger_m2321267720(L_46, _stringLiteral1569897770, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_01f5:
	{
		return (bool)0;
	}

IL_01f7:
	{
		return (bool)1;
	}
}
// System.Object Timer/<PlayCleared>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CPlayClearedU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m348503648 (U3CPlayClearedU3Ec__Iterator1_t737918195 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Timer/<PlayCleared>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CPlayClearedU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3508452308 (U3CPlayClearedU3Ec__Iterator1_t737918195 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Timer/<PlayCleared>c__Iterator1::Dispose()
extern "C"  void U3CPlayClearedU3Ec__Iterator1_Dispose_m748377851 (U3CPlayClearedU3Ec__Iterator1_t737918195 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Timer/<PlayCleared>c__Iterator1::Reset()
extern "C"  void U3CPlayClearedU3Ec__Iterator1_Reset_m2247739549 (U3CPlayClearedU3Ec__Iterator1_t737918195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPlayClearedU3Ec__Iterator1_Reset_m2247739549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CPlayClearedU3Ec__Iterator1_Reset_m2247739549_RuntimeMethod_var);
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
// System.Void Timer/<startTimer>c__Iterator0::.ctor()
extern "C"  void U3CstartTimerU3Ec__Iterator0__ctor_m3205552421 (U3CstartTimerU3Ec__Iterator0_t3414868529 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Timer/<startTimer>c__Iterator0::MoveNext()
extern "C"  bool U3CstartTimerU3Ec__Iterator0_MoveNext_m1545303613 (U3CstartTimerU3Ec__Iterator0_t3414868529 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CstartTimerU3Ec__Iterator0_MoveNext_m1545303613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_00cd;
			}
		}
	}
	{
		goto IL_019f;
	}

IL_0025:
	{
		Timer_t4185932343 * L_2 = __this->get_U24this_1();
		Timer_resetTimer_m2408204133(L_2, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_004f;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_004f:
	{
		goto IL_01a1;
	}

IL_0054:
	{
		goto IL_00cd;
	}

IL_0059:
	{
		Timer_t4185932343 * L_5 = __this->get_U24this_1();
		Text_t1901882714 * L_6 = L_5->get_text_8();
		Timer_t4185932343 * L_7 = __this->get_U24this_1();
		float* L_8 = L_7->get_address_of_length_7();
		String_t* L_9 = Single_ToString_m3489843083((float*)L_8, _stringLiteral3452614618, /*hidden argument*/NULL);
		String_t* L_10 = String_Replace_m1273907647(L_9, _stringLiteral3452614530, _stringLiteral3452614550, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		Timer_t4185932343 * L_11 = __this->get_U24this_1();
		Timer_t4185932343 * L_12 = __this->get_U24this_1();
		float L_13 = L_12->get_length_7();
		L_11->set_length_7(((float)il2cpp_codegen_subtract((float)L_13, (float)(0.01f))));
		WaitForSeconds_t1699091251 * L_14 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_14, (0.01f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_14);
		bool L_15 = __this->get_U24disposing_3();
		if (L_15)
		{
			goto IL_00c8;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_00c8:
	{
		goto IL_01a1;
	}

IL_00cd:
	{
		Timer_t4185932343 * L_16 = __this->get_U24this_1();
		float L_17 = L_16->get_length_7();
		if ((((float)L_17) >= ((float)(0.0f))))
		{
			goto IL_0059;
		}
	}
	{
		Timer_t4185932343 * L_18 = __this->get_U24this_1();
		L_18->set_timesUp_3((bool)1);
		Timer_t4185932343 * L_19 = __this->get_U24this_1();
		Text_t1901882714 * L_20 = L_19->get_addOrSubtract_9();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_21);
		Timer_t4185932343 * L_22 = __this->get_U24this_1();
		Text_t1901882714 * L_23 = L_22->get_text_8();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, _stringLiteral16340778);
		Timer_t4185932343 * L_24 = __this->get_U24this_1();
		GameObject_t1113636619 * L_25 = L_24->get_wifiNetwork_5();
		WIFINetworkManager_t1080793997 * L_26 = GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836(L_25, /*hidden argument*/GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836_RuntimeMethod_var);
		WIFINetworkManager_endTheGame_m70675779(L_26, /*hidden argument*/NULL);
		Timer_t4185932343 * L_27 = __this->get_U24this_1();
		Animator_t434523843 * L_28 = Component_GetComponent_TisAnimator_t434523843_m2351447238(L_27, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		Animator_Play_m1697843332(L_28, _stringLiteral2129753532, /*hidden argument*/NULL);
		QuestManager_t588401851 * L_29 = ((QuestManager_t588401851_StaticFields*)il2cpp_codegen_static_fields_for(QuestManager_t588401851_il2cpp_TypeInfo_var))->get_instance_2();
		L_29->set_hasFinishedWifi_12((bool)1);
		Timer_t4185932343 * L_30 = __this->get_U24this_1();
		GameObject_t1113636619 * L_31 = L_30->get_wifiNetwork_5();
		WIFINetworkManager_t1080793997 * L_32 = GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836(L_31, /*hidden argument*/GameObject_GetComponent_TisWIFINetworkManager_t1080793997_m4008191836_RuntimeMethod_var);
		int32_t* L_33 = L_32->get_address_of_secured_11();
		String_t* L_34 = Int32_ToString_m141394615((int32_t*)L_33, /*hidden argument*/NULL);
		String_t* L_35 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1494761329, L_34, _stringLiteral3331235418, /*hidden argument*/NULL);
		__this->set_U3CkU3E__0_0(L_35);
		Timer_t4185932343 * L_36 = __this->get_U24this_1();
		Text_t1901882714 * L_37 = L_36->get_connections_10();
		String_t* L_38 = __this->get_U3CkU3E__0_0();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_38);
		__this->set_U24PC_4((-1));
	}

IL_019f:
	{
		return (bool)0;
	}

IL_01a1:
	{
		return (bool)1;
	}
}
// System.Object Timer/<startTimer>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CstartTimerU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m525624060 (U3CstartTimerU3Ec__Iterator0_t3414868529 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object Timer/<startTimer>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CstartTimerU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1421379939 (U3CstartTimerU3Ec__Iterator0_t3414868529 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void Timer/<startTimer>c__Iterator0::Dispose()
extern "C"  void U3CstartTimerU3Ec__Iterator0_Dispose_m2435120028 (U3CstartTimerU3Ec__Iterator0_t3414868529 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void Timer/<startTimer>c__Iterator0::Reset()
extern "C"  void U3CstartTimerU3Ec__Iterator0_Reset_m4039162806 (U3CstartTimerU3Ec__Iterator0_t3414868529 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CstartTimerU3Ec__Iterator0_Reset_m4039162806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CstartTimerU3Ec__Iterator0_Reset_m4039162806_RuntimeMethod_var);
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
// System.Void TipHandler::.ctor()
extern "C"  void TipHandler__ctor_m3119462329 (TipHandler_t807666407 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipHandler::Awake()
extern "C"  void TipHandler_Awake_m1385988640 (TipHandler_t807666407 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TipHandler_Awake_m1385988640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TipHandler_t807666407 * L_0 = ((TipHandler_t807666407_StaticFields*)il2cpp_codegen_static_fields_for(TipHandler_t807666407_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		((TipHandler_t807666407_StaticFields*)il2cpp_codegen_static_fields_for(TipHandler_t807666407_il2cpp_TypeInfo_var))->set_instance_2(__this);
		TipHandler_t807666407 * L_2 = ((TipHandler_t807666407_StaticFields*)il2cpp_codegen_static_fields_for(TipHandler_t807666407_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0025:
	{
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void TipHandler::disableInteractTip()
extern "C"  void TipHandler_disableInteractTip_m2762761214 (TipHandler_t807666407 * __this, const RuntimeMethod* method)
{
	{
		__this->set_hasPlayedInteractTip_3((bool)1);
		return;
	}
}
// System.Void TipHandler::disableSelectFoodTip()
extern "C"  void TipHandler_disableSelectFoodTip_m3111082017 (TipHandler_t807666407 * __this, const RuntimeMethod* method)
{
	{
		__this->set_hasplayedSelectFoodTip_4((bool)1);
		return;
	}
}
// System.Void TipHandler::disableDragFoodTip()
extern "C"  void TipHandler_disableDragFoodTip_m1315686439 (TipHandler_t807666407 * __this, const RuntimeMethod* method)
{
	{
		__this->set_hasPlayedDragFoodTip_5((bool)1);
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
// System.Void TipManager::.ctor()
extern "C"  void TipManager__ctor_m3417278890 (TipManager_t3568936214 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipManager::activateTip()
extern "C"  void TipManager_activateTip_m3671668630 (TipManager_t3568936214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TipManager_activateTip_m3671668630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TipHandler_t807666407 * L_0 = ((TipHandler_t807666407_StaticFields*)il2cpp_codegen_static_fields_for(TipHandler_t807666407_il2cpp_TypeInfo_var))->get_instance_2();
		bool L_1 = L_0->get_hasPlayedInteractTip_3();
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		MonoBehaviour_StopAllCoroutines_m3328507247(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral2181160080, /*hidden argument*/NULL);
		TipHandler_t807666407 * L_2 = ((TipHandler_t807666407_StaticFields*)il2cpp_codegen_static_fields_for(TipHandler_t807666407_il2cpp_TypeInfo_var))->get_instance_2();
		TipHandler_disableInteractTip_m2762761214(L_2, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void TipManager::activateFeedTip()
extern "C"  void TipManager_activateFeedTip_m12669531 (TipManager_t3568936214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TipManager_activateFeedTip_m12669531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TipHandler_t807666407 * L_0 = ((TipHandler_t807666407_StaticFields*)il2cpp_codegen_static_fields_for(TipHandler_t807666407_il2cpp_TypeInfo_var))->get_instance_2();
		bool L_1 = L_0->get_hasplayedSelectFoodTip_4();
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		MonoBehaviour_StopAllCoroutines_m3328507247(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral2623322390, /*hidden argument*/NULL);
		TipHandler_t807666407 * L_2 = ((TipHandler_t807666407_StaticFields*)il2cpp_codegen_static_fields_for(TipHandler_t807666407_il2cpp_TypeInfo_var))->get_instance_2();
		TipHandler_disableSelectFoodTip_m3111082017(L_2, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void TipManager::activateDragFoodTip()
extern "C"  void TipManager_activateDragFoodTip_m1310825194 (TipManager_t3568936214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TipManager_activateDragFoodTip_m1310825194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TipHandler_t807666407 * L_0 = ((TipHandler_t807666407_StaticFields*)il2cpp_codegen_static_fields_for(TipHandler_t807666407_il2cpp_TypeInfo_var))->get_instance_2();
		bool L_1 = L_0->get_hasPlayedDragFoodTip_5();
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		MonoBehaviour_StopAllCoroutines_m3328507247(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral2742928688, /*hidden argument*/NULL);
		TipHandler_t807666407 * L_2 = ((TipHandler_t807666407_StaticFields*)il2cpp_codegen_static_fields_for(TipHandler_t807666407_il2cpp_TypeInfo_var))->get_instance_2();
		TipHandler_disableDragFoodTip_m1315686439(L_2, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Collections.IEnumerator TipManager::displayDragFoodTip()
extern "C"  RuntimeObject* TipManager_displayDragFoodTip_m3467840621 (TipManager_t3568936214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TipManager_displayDragFoodTip_m3467840621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * V_0 = NULL;
	{
		U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * L_0 = (U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 *)il2cpp_codegen_object_new(U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526_il2cpp_TypeInfo_var);
		U3CdisplayDragFoodTipU3Ec__Iterator0__ctor_m822813927(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator TipManager::displayFeedTip()
extern "C"  RuntimeObject* TipManager_displayFeedTip_m4063381061 (TipManager_t3568936214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TipManager_displayFeedTip_m4063381061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * V_0 = NULL;
	{
		U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * L_0 = (U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 *)il2cpp_codegen_object_new(U3CdisplayFeedTipU3Ec__Iterator1_t3766578656_il2cpp_TypeInfo_var);
		U3CdisplayFeedTipU3Ec__Iterator1__ctor_m994284039(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator TipManager::displayTheTip()
extern "C"  RuntimeObject* TipManager_displayTheTip_m1735305784 (TipManager_t3568936214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TipManager_displayTheTip_m1735305784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CdisplayTheTipU3Ec__Iterator2_t819713326 * V_0 = NULL;
	{
		U3CdisplayTheTipU3Ec__Iterator2_t819713326 * L_0 = (U3CdisplayTheTipU3Ec__Iterator2_t819713326 *)il2cpp_codegen_object_new(U3CdisplayTheTipU3Ec__Iterator2_t819713326_il2cpp_TypeInfo_var);
		U3CdisplayTheTipU3Ec__Iterator2__ctor_m1460220713(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CdisplayTheTipU3Ec__Iterator2_t819713326 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CdisplayTheTipU3Ec__Iterator2_t819713326 * L_2 = V_0;
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
// System.Void TipManager/<displayDragFoodTip>c__Iterator0::.ctor()
extern "C"  void U3CdisplayDragFoodTipU3Ec__Iterator0__ctor_m822813927 (U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TipManager/<displayDragFoodTip>c__Iterator0::MoveNext()
extern "C"  bool U3CdisplayDragFoodTipU3Ec__Iterator0_MoveNext_m1838243671 (U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdisplayDragFoodTipU3Ec__Iterator0_MoveNext_m1838243671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00de;
			}
		}
	}
	{
		goto IL_00fb;
	}

IL_0029:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0048:
	{
		goto IL_00fd;
	}

IL_004d:
	{
		TipManager_t3568936214 * L_4 = __this->get_U24this_0();
		Animator_t434523843 * L_5 = L_4->get_anim_4();
		Animator_SetBool_m234840832(L_5, _stringLiteral3596802249, (bool)1, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_6 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_6, (5.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_6);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_0082;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_0082:
	{
		goto IL_00fd;
	}

IL_0087:
	{
		TipManager_t3568936214 * L_8 = __this->get_U24this_0();
		Animator_t434523843 * L_9 = L_8->get_anim_4();
		Animator_SetBool_m234840832(L_9, _stringLiteral3596802249, (bool)0, /*hidden argument*/NULL);
		TipManager_t3568936214 * L_10 = __this->get_U24this_0();
		Animator_t434523843 * L_11 = L_10->get_anim_4();
		Animator_SetBool_m234840832(L_11, _stringLiteral1012805017, (bool)1, /*hidden argument*/NULL);
		intptr_t L_12 = (intptr_t)U3CdisplayDragFoodTipU3Ec__Iterator0_U3CU3Em__0_m1793873601_RuntimeMethod_var;
		Func_1_t3822001908 * L_13 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
		Func_1__ctor_m1399073142(L_13, __this, L_12, /*hidden argument*/Func_1__ctor_m1399073142_RuntimeMethod_var);
		WaitUntil_t3373419216 * L_14 = (WaitUntil_t3373419216 *)il2cpp_codegen_object_new(WaitUntil_t3373419216_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4227046299(L_14, L_13, /*hidden argument*/NULL);
		__this->set_U24current_1(L_14);
		bool L_15 = __this->get_U24disposing_2();
		if (L_15)
		{
			goto IL_00d9;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_00d9:
	{
		goto IL_00fd;
	}

IL_00de:
	{
		TipManager_t3568936214 * L_16 = __this->get_U24this_0();
		Animator_t434523843 * L_17 = L_16->get_anim_4();
		Animator_SetBool_m234840832(L_17, _stringLiteral1012805017, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00fb:
	{
		return (bool)0;
	}

IL_00fd:
	{
		return (bool)1;
	}
}
// System.Object TipManager/<displayDragFoodTip>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CdisplayDragFoodTipU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2400210275 (U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TipManager/<displayDragFoodTip>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CdisplayDragFoodTipU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3732276557 (U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TipManager/<displayDragFoodTip>c__Iterator0::Dispose()
extern "C"  void U3CdisplayDragFoodTipU3Ec__Iterator0_Dispose_m386586536 (U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TipManager/<displayDragFoodTip>c__Iterator0::Reset()
extern "C"  void U3CdisplayDragFoodTipU3Ec__Iterator0_Reset_m4066243835 (U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdisplayDragFoodTipU3Ec__Iterator0_Reset_m4066243835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CdisplayDragFoodTipU3Ec__Iterator0_Reset_m4066243835_RuntimeMethod_var);
	}
}
// System.Boolean TipManager/<displayDragFoodTip>c__Iterator0::<>m__0()
extern "C"  bool U3CdisplayDragFoodTipU3Ec__Iterator0_U3CU3Em__0_m1793873601 (U3CdisplayDragFoodTipU3Ec__Iterator0_t1480909526 * __this, const RuntimeMethod* method)
{
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TipManager_t3568936214 * L_0 = __this->get_U24this_0();
		Image_t2670269651 * L_1 = L_0->get_tipBox_3();
		Color_t2555686324  L_2 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		float L_3 = (&V_0)->get_a_3();
		return (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
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
// System.Void TipManager/<displayFeedTip>c__Iterator1::.ctor()
extern "C"  void U3CdisplayFeedTipU3Ec__Iterator1__ctor_m994284039 (U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TipManager/<displayFeedTip>c__Iterator1::MoveNext()
extern "C"  bool U3CdisplayFeedTipU3Ec__Iterator1_MoveNext_m3067223184 (U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdisplayFeedTipU3Ec__Iterator1_MoveNext_m3067223184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00de;
			}
		}
	}
	{
		goto IL_00fb;
	}

IL_0029:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0048:
	{
		goto IL_00fd;
	}

IL_004d:
	{
		TipManager_t3568936214 * L_4 = __this->get_U24this_0();
		Animator_t434523843 * L_5 = L_4->get_anim_4();
		Animator_SetBool_m234840832(L_5, _stringLiteral3015081003, (bool)1, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_6 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_6, (5.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_6);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_0082;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_0082:
	{
		goto IL_00fd;
	}

IL_0087:
	{
		TipManager_t3568936214 * L_8 = __this->get_U24this_0();
		Animator_t434523843 * L_9 = L_8->get_anim_4();
		Animator_SetBool_m234840832(L_9, _stringLiteral3015081003, (bool)0, /*hidden argument*/NULL);
		TipManager_t3568936214 * L_10 = __this->get_U24this_0();
		Animator_t434523843 * L_11 = L_10->get_anim_4();
		Animator_SetBool_m234840832(L_11, _stringLiteral1012805017, (bool)1, /*hidden argument*/NULL);
		intptr_t L_12 = (intptr_t)U3CdisplayFeedTipU3Ec__Iterator1_U3CU3Em__0_m3194802045_RuntimeMethod_var;
		Func_1_t3822001908 * L_13 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
		Func_1__ctor_m1399073142(L_13, __this, L_12, /*hidden argument*/Func_1__ctor_m1399073142_RuntimeMethod_var);
		WaitUntil_t3373419216 * L_14 = (WaitUntil_t3373419216 *)il2cpp_codegen_object_new(WaitUntil_t3373419216_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4227046299(L_14, L_13, /*hidden argument*/NULL);
		__this->set_U24current_1(L_14);
		bool L_15 = __this->get_U24disposing_2();
		if (L_15)
		{
			goto IL_00d9;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_00d9:
	{
		goto IL_00fd;
	}

IL_00de:
	{
		TipManager_t3568936214 * L_16 = __this->get_U24this_0();
		Animator_t434523843 * L_17 = L_16->get_anim_4();
		Animator_SetBool_m234840832(L_17, _stringLiteral1012805017, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00fb:
	{
		return (bool)0;
	}

IL_00fd:
	{
		return (bool)1;
	}
}
// System.Object TipManager/<displayFeedTip>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CdisplayFeedTipU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m283937161 (U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TipManager/<displayFeedTip>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CdisplayFeedTipU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3466608011 (U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TipManager/<displayFeedTip>c__Iterator1::Dispose()
extern "C"  void U3CdisplayFeedTipU3Ec__Iterator1_Dispose_m1510947718 (U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TipManager/<displayFeedTip>c__Iterator1::Reset()
extern "C"  void U3CdisplayFeedTipU3Ec__Iterator1_Reset_m1866582987 (U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdisplayFeedTipU3Ec__Iterator1_Reset_m1866582987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CdisplayFeedTipU3Ec__Iterator1_Reset_m1866582987_RuntimeMethod_var);
	}
}
// System.Boolean TipManager/<displayFeedTip>c__Iterator1::<>m__0()
extern "C"  bool U3CdisplayFeedTipU3Ec__Iterator1_U3CU3Em__0_m3194802045 (U3CdisplayFeedTipU3Ec__Iterator1_t3766578656 * __this, const RuntimeMethod* method)
{
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TipManager_t3568936214 * L_0 = __this->get_U24this_0();
		Image_t2670269651 * L_1 = L_0->get_tipBox_3();
		Color_t2555686324  L_2 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		float L_3 = (&V_0)->get_a_3();
		return (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
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
// System.Void TipManager/<displayTheTip>c__Iterator2::.ctor()
extern "C"  void U3CdisplayTheTipU3Ec__Iterator2__ctor_m1460220713 (U3CdisplayTheTipU3Ec__Iterator2_t819713326 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TipManager/<displayTheTip>c__Iterator2::MoveNext()
extern "C"  bool U3CdisplayTheTipU3Ec__Iterator2_MoveNext_m163689845 (U3CdisplayTheTipU3Ec__Iterator2_t819713326 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdisplayTheTipU3Ec__Iterator2_MoveNext_m163689845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00de;
			}
		}
	}
	{
		goto IL_00fb;
	}

IL_0029:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0048:
	{
		goto IL_00fd;
	}

IL_004d:
	{
		TipManager_t3568936214 * L_4 = __this->get_U24this_0();
		Animator_t434523843 * L_5 = L_4->get_anim_4();
		Animator_SetBool_m234840832(L_5, _stringLiteral1675528485, (bool)1, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_6 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_6, (5.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_6);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_0082;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_0082:
	{
		goto IL_00fd;
	}

IL_0087:
	{
		TipManager_t3568936214 * L_8 = __this->get_U24this_0();
		Animator_t434523843 * L_9 = L_8->get_anim_4();
		Animator_SetBool_m234840832(L_9, _stringLiteral1675528485, (bool)0, /*hidden argument*/NULL);
		TipManager_t3568936214 * L_10 = __this->get_U24this_0();
		Animator_t434523843 * L_11 = L_10->get_anim_4();
		Animator_SetBool_m234840832(L_11, _stringLiteral1012805017, (bool)1, /*hidden argument*/NULL);
		intptr_t L_12 = (intptr_t)U3CdisplayTheTipU3Ec__Iterator2_U3CU3Em__0_m1321429568_RuntimeMethod_var;
		Func_1_t3822001908 * L_13 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
		Func_1__ctor_m1399073142(L_13, __this, L_12, /*hidden argument*/Func_1__ctor_m1399073142_RuntimeMethod_var);
		WaitUntil_t3373419216 * L_14 = (WaitUntil_t3373419216 *)il2cpp_codegen_object_new(WaitUntil_t3373419216_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4227046299(L_14, L_13, /*hidden argument*/NULL);
		__this->set_U24current_1(L_14);
		bool L_15 = __this->get_U24disposing_2();
		if (L_15)
		{
			goto IL_00d9;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_00d9:
	{
		goto IL_00fd;
	}

IL_00de:
	{
		TipManager_t3568936214 * L_16 = __this->get_U24this_0();
		Animator_t434523843 * L_17 = L_16->get_anim_4();
		Animator_SetBool_m234840832(L_17, _stringLiteral1012805017, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00fb:
	{
		return (bool)0;
	}

IL_00fd:
	{
		return (bool)1;
	}
}
// System.Object TipManager/<displayTheTip>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CdisplayTheTipU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m317946411 (U3CdisplayTheTipU3Ec__Iterator2_t819713326 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TipManager/<displayTheTip>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CdisplayTheTipU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m1532490043 (U3CdisplayTheTipU3Ec__Iterator2_t819713326 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TipManager/<displayTheTip>c__Iterator2::Dispose()
extern "C"  void U3CdisplayTheTipU3Ec__Iterator2_Dispose_m3460484252 (U3CdisplayTheTipU3Ec__Iterator2_t819713326 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TipManager/<displayTheTip>c__Iterator2::Reset()
extern "C"  void U3CdisplayTheTipU3Ec__Iterator2_Reset_m254125540 (U3CdisplayTheTipU3Ec__Iterator2_t819713326 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdisplayTheTipU3Ec__Iterator2_Reset_m254125540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CdisplayTheTipU3Ec__Iterator2_Reset_m254125540_RuntimeMethod_var);
	}
}
// System.Boolean TipManager/<displayTheTip>c__Iterator2::<>m__0()
extern "C"  bool U3CdisplayTheTipU3Ec__Iterator2_U3CU3Em__0_m1321429568 (U3CdisplayTheTipU3Ec__Iterator2_t819713326 * __this, const RuntimeMethod* method)
{
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TipManager_t3568936214 * L_0 = __this->get_U24this_0();
		Image_t2670269651 * L_1 = L_0->get_tipBox_3();
		Color_t2555686324  L_2 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		float L_3 = (&V_0)->get_a_3();
		return (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
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
// System.Void TransitionHandler::.ctor()
extern "C"  void TransitionHandler__ctor_m801813641 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::Start()
extern "C"  void TransitionHandler_Start_m1666210609 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionHandler_Start_m1666210609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Scene_t2348375561  L_0 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral1204401978, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral796787853, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_3 = __this->get_source_4();
		AudioClip_t3680889665 * L_4 = __this->get_islandDay_12();
		AudioSource_set_clip_m31653938(L_3, L_4, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_5 = __this->get_source_4();
		AudioSource_Play_m48294159(L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_cutscene_3();
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_0055:
	{
		Scene_t2348375561  L_7 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, _stringLiteral1390680558, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral3271040427, /*hidden argument*/NULL);
	}

IL_007d:
	{
		return;
	}
}
// System.Collections.IEnumerator TransitionHandler::fadeIn()
extern "C"  RuntimeObject* TransitionHandler_fadeIn_m1713082052 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionHandler_fadeIn_m1713082052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CfadeInU3Ec__Iterator0_t1457657473 * V_0 = NULL;
	{
		U3CfadeInU3Ec__Iterator0_t1457657473 * L_0 = (U3CfadeInU3Ec__Iterator0_t1457657473 *)il2cpp_codegen_object_new(U3CfadeInU3Ec__Iterator0_t1457657473_il2cpp_TypeInfo_var);
		U3CfadeInU3Ec__Iterator0__ctor_m3226749971(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CfadeInU3Ec__Iterator0_t1457657473 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CfadeInU3Ec__Iterator0_t1457657473 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator TransitionHandler::fadeOut()
extern "C"  RuntimeObject* TransitionHandler_fadeOut_m1051979518 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionHandler_fadeOut_m1051979518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CfadeOutU3Ec__Iterator1_t1640331254 * V_0 = NULL;
	{
		U3CfadeOutU3Ec__Iterator1_t1640331254 * L_0 = (U3CfadeOutU3Ec__Iterator1_t1640331254 *)il2cpp_codegen_object_new(U3CfadeOutU3Ec__Iterator1_t1640331254_il2cpp_TypeInfo_var);
		U3CfadeOutU3Ec__Iterator1__ctor_m2796055082(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CfadeOutU3Ec__Iterator1_t1640331254 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CfadeOutU3Ec__Iterator1_t1640331254 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator TransitionHandler::glitch()
extern "C"  RuntimeObject* TransitionHandler_glitch_m4266019766 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionHandler_glitch_m4266019766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CglitchU3Ec__Iterator2_t2262882800 * V_0 = NULL;
	{
		U3CglitchU3Ec__Iterator2_t2262882800 * L_0 = (U3CglitchU3Ec__Iterator2_t2262882800 *)il2cpp_codegen_object_new(U3CglitchU3Ec__Iterator2_t2262882800_il2cpp_TypeInfo_var);
		U3CglitchU3Ec__Iterator2__ctor_m990253206(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CglitchU3Ec__Iterator2_t2262882800 * L_1 = V_0;
		L_1->set_U24this_2(__this);
		U3CglitchU3Ec__Iterator2_t2262882800 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator TransitionHandler::cutsceneGlitch()
extern "C"  RuntimeObject* TransitionHandler_cutsceneGlitch_m963952661 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionHandler_cutsceneGlitch_m963952661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * V_0 = NULL;
	{
		U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * L_0 = (U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 *)il2cpp_codegen_object_new(U3CcutsceneGlitchU3Ec__Iterator3_t1280322269_il2cpp_TypeInfo_var);
		U3CcutsceneGlitchU3Ec__Iterator3__ctor_m3372487107(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * L_2 = V_0;
		return L_2;
	}
}
// System.Void TransitionHandler::fadeInCutscene()
extern "C"  void TransitionHandler_fadeInCutscene_m2410043246 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionHandler_fadeInCutscene_m2410043246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral765399478, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TransitionHandler::cutsceneFade()
extern "C"  RuntimeObject* TransitionHandler_cutsceneFade_m3533874575 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionHandler_cutsceneFade_m3533874575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * V_0 = NULL;
	{
		U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * L_0 = (U3CcutsceneFadeU3Ec__Iterator4_t1553545759 *)il2cpp_codegen_object_new(U3CcutsceneFadeU3Ec__Iterator4_t1553545759_il2cpp_TypeInfo_var);
		U3CcutsceneFadeU3Ec__Iterator4__ctor_m1536477293(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * L_2 = V_0;
		return L_2;
	}
}
// System.Void TransitionHandler::playIslandDay()
extern "C"  void TransitionHandler_playIslandDay_m4258871430 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_source_4();
		AudioClip_t3680889665 * L_1 = __this->get_islandDay_12();
		AudioSource_set_clip_m31653938(L_0, L_1, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_2 = __this->get_source_4();
		AudioSource_Play_m48294159(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TransitionHandler::barSounds()
extern "C"  RuntimeObject* TransitionHandler_barSounds_m299674539 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionHandler_barSounds_m299674539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CbarSoundsU3Ec__Iterator5_t3061910389 * V_0 = NULL;
	{
		U3CbarSoundsU3Ec__Iterator5_t3061910389 * L_0 = (U3CbarSoundsU3Ec__Iterator5_t3061910389 *)il2cpp_codegen_object_new(U3CbarSoundsU3Ec__Iterator5_t3061910389_il2cpp_TypeInfo_var);
		U3CbarSoundsU3Ec__Iterator5__ctor_m4235670617(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CbarSoundsU3Ec__Iterator5_t3061910389 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CbarSoundsU3Ec__Iterator5_t3061910389 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator TransitionHandler::openTheDoor()
extern "C"  RuntimeObject* TransitionHandler_openTheDoor_m102649761 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionHandler_openTheDoor_m102649761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CopenTheDoorU3Ec__Iterator6_t558074977 * V_0 = NULL;
	{
		U3CopenTheDoorU3Ec__Iterator6_t558074977 * L_0 = (U3CopenTheDoorU3Ec__Iterator6_t558074977 *)il2cpp_codegen_object_new(U3CopenTheDoorU3Ec__Iterator6_t558074977_il2cpp_TypeInfo_var);
		U3CopenTheDoorU3Ec__Iterator6__ctor_m860964715(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CopenTheDoorU3Ec__Iterator6_t558074977 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CopenTheDoorU3Ec__Iterator6_t558074977 * L_2 = V_0;
		return L_2;
	}
}
// System.Void TransitionHandler::playGameplaySound()
extern "C"  void TransitionHandler_playGameplaySound_m3430719937 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_source_4();
		AudioClip_t3680889665 * L_1 = __this->get_gameplay_14();
		AudioSource_set_clip_m31653938(L_0, L_1, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_2 = __this->get_source_4();
		AudioSource_Play_m48294159(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::playChirpSound()
extern "C"  void TransitionHandler_playChirpSound_m509069240 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_source_4();
		AudioClip_t3680889665 * L_1 = __this->get_chirp_15();
		AudioSource_PlayOneShot_m2678069419(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::playSpawnChirpSound()
extern "C"  void TransitionHandler_playSpawnChirpSound_m3177628965 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_source_4();
		AudioClip_t3680889665 * L_1 = __this->get_spawnChirp_16();
		AudioSource_PlayOneShot_m2678069419(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::playBirdSing()
extern "C"  void TransitionHandler_playBirdSing_m1333693107 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_source_4();
		AudioClip_t3680889665 * L_1 = __this->get_sing_17();
		AudioSource_PlayOneShot_m2678069419(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::playPrivacy()
extern "C"  void TransitionHandler_playPrivacy_m2334617560 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_canvas_5();
		AudioClip_t3680889665 * L_1 = __this->get_privacy_18();
		AudioSource_PlayOneShot_m2678069419(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::playPrivacyAdd()
extern "C"  void TransitionHandler_playPrivacyAdd_m2090782876 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_canvas_5();
		AudioClip_t3680889665 * L_1 = __this->get_privacyAdd_19();
		AudioSource_PlayOneShot_m2678069419(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::stopPrivacy()
extern "C"  void TransitionHandler_stopPrivacy_m4189743345 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_canvas_5();
		AudioSource_Stop_m2682712816(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::playHover()
extern "C"  void TransitionHandler_playHover_m1630925767 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_canvas_5();
		AudioClip_t3680889665 * L_1 = __this->get_hover_20();
		AudioSource_PlayOneShot_m1688286683(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::playMouseClick()
extern "C"  void TransitionHandler_playMouseClick_m3534408396 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_canvas_5();
		AudioClip_t3680889665 * L_1 = __this->get_mouseClick_21();
		AudioSource_PlayOneShot_m1688286683(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::playMouseClickPlay()
extern "C"  void TransitionHandler_playMouseClickPlay_m3872171209 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_canvas_5();
		AudioClip_t3680889665 * L_1 = __this->get_mouseClickPlay_22();
		AudioSource_PlayOneShot_m1688286683(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::playShortSucess()
extern "C"  void TransitionHandler_playShortSucess_m1214983353 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_canvas_5();
		AudioClip_t3680889665 * L_1 = __this->get_shortSucess_23();
		AudioSource_PlayOneShot_m1688286683(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionHandler::playSuccessSound()
extern "C"  void TransitionHandler_playSuccessSound_m3560830402 (TransitionHandler_t1104418219 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_canvas_5();
		AudioClip_t3680889665 * L_1 = __this->get_success_24();
		AudioSource_PlayOneShot_m2678069419(L_0, L_1, (1.0f), /*hidden argument*/NULL);
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
// System.Void TransitionHandler/<barSounds>c__Iterator5::.ctor()
extern "C"  void U3CbarSoundsU3Ec__Iterator5__ctor_m4235670617 (U3CbarSoundsU3Ec__Iterator5_t3061910389 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TransitionHandler/<barSounds>c__Iterator5::MoveNext()
extern "C"  bool U3CbarSoundsU3Ec__Iterator5_MoveNext_m1872652176 (U3CbarSoundsU3Ec__Iterator5_t3061910389 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CbarSoundsU3Ec__Iterator5_MoveNext_m1872652176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0071;
			}
		}
	}
	{
		goto IL_00a3;
	}

IL_0021:
	{
		TransitionHandler_t1104418219 * L_2 = __this->get_U24this_0();
		MonoBehaviour_StartCoroutine_m2618285814(L_2, _stringLiteral796787853, /*hidden argument*/NULL);
		TransitionHandler_t1104418219 * L_3 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_4 = L_3->get_source_4();
		TransitionHandler_t1104418219 * L_5 = __this->get_U24this_0();
		AudioClip_t3680889665 * L_6 = L_5->get_closeDoor_8();
		AudioSource_PlayOneShot_m1688286683(L_4, L_6, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_7 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_7, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_7);
		bool L_8 = __this->get_U24disposing_2();
		if (L_8)
		{
			goto IL_006c;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_006c:
	{
		goto IL_00a5;
	}

IL_0071:
	{
		TransitionHandler_t1104418219 * L_9 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_10 = L_9->get_source_4();
		TransitionHandler_t1104418219 * L_11 = __this->get_U24this_0();
		AudioClip_t3680889665 * L_12 = L_11->get_bar_10();
		AudioSource_set_clip_m31653938(L_10, L_12, /*hidden argument*/NULL);
		TransitionHandler_t1104418219 * L_13 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_14 = L_13->get_source_4();
		AudioSource_Play_m48294159(L_14, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00a3:
	{
		return (bool)0;
	}

IL_00a5:
	{
		return (bool)1;
	}
}
// System.Object TransitionHandler/<barSounds>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CbarSoundsU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m840384882 (U3CbarSoundsU3Ec__Iterator5_t3061910389 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TransitionHandler/<barSounds>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CbarSoundsU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m3569092549 (U3CbarSoundsU3Ec__Iterator5_t3061910389 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TransitionHandler/<barSounds>c__Iterator5::Dispose()
extern "C"  void U3CbarSoundsU3Ec__Iterator5_Dispose_m3382730689 (U3CbarSoundsU3Ec__Iterator5_t3061910389 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TransitionHandler/<barSounds>c__Iterator5::Reset()
extern "C"  void U3CbarSoundsU3Ec__Iterator5_Reset_m1320742757 (U3CbarSoundsU3Ec__Iterator5_t3061910389 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CbarSoundsU3Ec__Iterator5_Reset_m1320742757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CbarSoundsU3Ec__Iterator5_Reset_m1320742757_RuntimeMethod_var);
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
// System.Void TransitionHandler/<cutsceneFade>c__Iterator4::.ctor()
extern "C"  void U3CcutsceneFadeU3Ec__Iterator4__ctor_m1536477293 (U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TransitionHandler/<cutsceneFade>c__Iterator4::MoveNext()
extern "C"  bool U3CcutsceneFadeU3Ec__Iterator4_MoveNext_m1713777134 (U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcutsceneFadeU3Ec__Iterator4_MoveNext_m1713777134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_00de;
	}

IL_0021:
	{
		TransitionHandler_t1104418219 * L_2 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_3 = L_2->get_source_4();
		TransitionHandler_t1104418219 * L_4 = __this->get_U24this_0();
		AudioClip_t3680889665 * L_5 = L_4->get_boom_11();
		AudioSource_PlayOneShot_m1688286683(L_3, L_5, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_6 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_6, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_6);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_005b:
	{
		goto IL_00e0;
	}

IL_0060:
	{
		TransitionHandler_t1104418219 * L_8 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_9 = L_8->get_source_4();
		TransitionHandler_t1104418219 * L_10 = __this->get_U24this_0();
		AudioClip_t3680889665 * L_11 = L_10->get_islandDay_12();
		AudioSource_set_clip_m31653938(L_9, L_11, /*hidden argument*/NULL);
		TransitionHandler_t1104418219 * L_12 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_13 = L_12->get_source_4();
		AudioSource_Play_m48294159(L_13, /*hidden argument*/NULL);
		TransitionHandler_t1104418219 * L_14 = __this->get_U24this_0();
		TransitionHandler_t1104418219 * L_15 = __this->get_U24this_0();
		GameObject_t1113636619 * L_16 = L_15->get_cutseneManager_13();
		DialogueSceneManager_t3025860002 * L_17 = GameObject_GetComponent_TisDialogueSceneManager_t3025860002_m1735645841(L_16, /*hidden argument*/GameObject_GetComponent_TisDialogueSceneManager_t3025860002_m1735645841_RuntimeMethod_var);
		TransitionHandler_t1104418219 * L_18 = __this->get_U24this_0();
		GameObject_t1113636619 * L_19 = L_18->get_cutseneManager_13();
		DialogueSceneManager_t3025860002 * L_20 = GameObject_GetComponent_TisDialogueSceneManager_t3025860002_m1735645841(L_19, /*hidden argument*/GameObject_GetComponent_TisDialogueSceneManager_t3025860002_m1735645841_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_21 = L_20->get_script_31();
		TransitionHandler_t1104418219 * L_22 = __this->get_U24this_0();
		GameObject_t1113636619 * L_23 = L_22->get_cutseneManager_13();
		DialogueSceneManager_t3025860002 * L_24 = GameObject_GetComponent_TisDialogueSceneManager_t3025860002_m1735645841(L_23, /*hidden argument*/GameObject_GetComponent_TisDialogueSceneManager_t3025860002_m1735645841_RuntimeMethod_var);
		int32_t L_25 = L_24->get_count_20();
		int32_t L_26 = L_25;
		String_t* L_27 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		RuntimeObject* L_28 = DialogueSceneManager_textScroll_m2895886184(L_17, L_27, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_14, L_28, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00de:
	{
		return (bool)0;
	}

IL_00e0:
	{
		return (bool)1;
	}
}
// System.Object TransitionHandler/<cutsceneFade>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CcutsceneFadeU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2141710112 (U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TransitionHandler/<cutsceneFade>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CcutsceneFadeU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1311773602 (U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TransitionHandler/<cutsceneFade>c__Iterator4::Dispose()
extern "C"  void U3CcutsceneFadeU3Ec__Iterator4_Dispose_m1207763724 (U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TransitionHandler/<cutsceneFade>c__Iterator4::Reset()
extern "C"  void U3CcutsceneFadeU3Ec__Iterator4_Reset_m2670442084 (U3CcutsceneFadeU3Ec__Iterator4_t1553545759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcutsceneFadeU3Ec__Iterator4_Reset_m2670442084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CcutsceneFadeU3Ec__Iterator4_Reset_m2670442084_RuntimeMethod_var);
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
// System.Void TransitionHandler/<cutsceneGlitch>c__Iterator3::.ctor()
extern "C"  void U3CcutsceneGlitchU3Ec__Iterator3__ctor_m3372487107 (U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TransitionHandler/<cutsceneGlitch>c__Iterator3::MoveNext()
extern "C"  bool U3CcutsceneGlitchU3Ec__Iterator3_MoveNext_m2506498723 (U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcutsceneGlitchU3Ec__Iterator3_MoveNext_m2506498723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00a5;
			}
			case 2:
			{
				goto IL_011e;
			}
		}
	}
	{
		goto IL_0175;
	}

IL_0025:
	{
		TransitionHandler_t1104418219 * L_2 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_3 = L_2->get_source_4();
		TransitionHandler_t1104418219 * L_4 = __this->get_U24this_0();
		AudioClip_t3680889665 * L_5 = L_4->get_villain_7();
		AudioSource_set_clip_m31653938(L_3, L_5, /*hidden argument*/NULL);
		TransitionHandler_t1104418219 * L_6 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_7 = L_6->get_source_4();
		AudioSource_Play_m48294159(L_7, /*hidden argument*/NULL);
		TransitionHandler_t1104418219 * L_8 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_9 = L_8->get_source_4();
		TransitionHandler_t1104418219 * L_10 = __this->get_U24this_0();
		AudioClip_t3680889665 * L_11 = L_10->get_glitchSound_6();
		AudioSource_PlayOneShot_m1688286683(L_9, L_11, /*hidden argument*/NULL);
		TransitionHandler_t1104418219 * L_12 = __this->get_U24this_0();
		Animator_t434523843 * L_13 = L_12->get_fade_2();
		Animator_SetBool_m234840832(L_13, _stringLiteral796787853, (bool)1, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_14 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_14, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_14);
		bool L_15 = __this->get_U24disposing_2();
		if (L_15)
		{
			goto IL_00a0;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_00a0:
	{
		goto IL_0177;
	}

IL_00a5:
	{
		TransitionHandler_t1104418219 * L_16 = __this->get_U24this_0();
		Animator_t434523843 * L_17 = L_16->get_fade_2();
		Animator_SetBool_m234840832(L_17, _stringLiteral796787853, (bool)0, /*hidden argument*/NULL);
		TransitionHandler_t1104418219 * L_18 = __this->get_U24this_0();
		AnalogGlitch_t1106357039 * L_19 = Component_GetComponent_TisAnalogGlitch_t1106357039_m3773877626(L_18, /*hidden argument*/Component_GetComponent_TisAnalogGlitch_t1106357039_m3773877626_RuntimeMethod_var);
		L_19->set__colorDrift_5((0.3f));
		TransitionHandler_t1104418219 * L_20 = __this->get_U24this_0();
		AnalogGlitch_t1106357039 * L_21 = Component_GetComponent_TisAnalogGlitch_t1106357039_m3773877626(L_20, /*hidden argument*/Component_GetComponent_TisAnalogGlitch_t1106357039_m3773877626_RuntimeMethod_var);
		L_21->set__horizontalShake_4((0.2f));
		TransitionHandler_t1104418219 * L_22 = __this->get_U24this_0();
		DigitalGlitch_t3418514828 * L_23 = Component_GetComponent_TisDigitalGlitch_t3418514828_m3421226099(L_22, /*hidden argument*/Component_GetComponent_TisDigitalGlitch_t3418514828_m3421226099_RuntimeMethod_var);
		L_23->set__intensity_2((0.3f));
		WaitForSeconds_t1699091251 * L_24 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_24, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_24);
		bool L_25 = __this->get_U24disposing_2();
		if (L_25)
		{
			goto IL_0119;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_0119:
	{
		goto IL_0177;
	}

IL_011e:
	{
		TransitionHandler_t1104418219 * L_26 = __this->get_U24this_0();
		GameObject_t1113636619 * L_27 = L_26->get_cutscene_3();
		GameObject_SetActive_m796801857(L_27, (bool)1, /*hidden argument*/NULL);
		TransitionHandler_t1104418219 * L_28 = __this->get_U24this_0();
		AnalogGlitch_t1106357039 * L_29 = Component_GetComponent_TisAnalogGlitch_t1106357039_m3773877626(L_28, /*hidden argument*/Component_GetComponent_TisAnalogGlitch_t1106357039_m3773877626_RuntimeMethod_var);
		L_29->set__colorDrift_5((0.0f));
		TransitionHandler_t1104418219 * L_30 = __this->get_U24this_0();
		AnalogGlitch_t1106357039 * L_31 = Component_GetComponent_TisAnalogGlitch_t1106357039_m3773877626(L_30, /*hidden argument*/Component_GetComponent_TisAnalogGlitch_t1106357039_m3773877626_RuntimeMethod_var);
		L_31->set__horizontalShake_4((0.0f));
		TransitionHandler_t1104418219 * L_32 = __this->get_U24this_0();
		DigitalGlitch_t3418514828 * L_33 = Component_GetComponent_TisDigitalGlitch_t3418514828_m3421226099(L_32, /*hidden argument*/Component_GetComponent_TisDigitalGlitch_t3418514828_m3421226099_RuntimeMethod_var);
		L_33->set__intensity_2((0.0f));
		__this->set_U24PC_3((-1));
	}

IL_0175:
	{
		return (bool)0;
	}

IL_0177:
	{
		return (bool)1;
	}
}
// System.Object TransitionHandler/<cutsceneGlitch>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CcutsceneGlitchU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1102086749 (U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TransitionHandler/<cutsceneGlitch>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CcutsceneGlitchU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m1555477996 (U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TransitionHandler/<cutsceneGlitch>c__Iterator3::Dispose()
extern "C"  void U3CcutsceneGlitchU3Ec__Iterator3_Dispose_m2848240366 (U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TransitionHandler/<cutsceneGlitch>c__Iterator3::Reset()
extern "C"  void U3CcutsceneGlitchU3Ec__Iterator3_Reset_m2013727578 (U3CcutsceneGlitchU3Ec__Iterator3_t1280322269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcutsceneGlitchU3Ec__Iterator3_Reset_m2013727578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CcutsceneGlitchU3Ec__Iterator3_Reset_m2013727578_RuntimeMethod_var);
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
// System.Void TransitionHandler/<fadeIn>c__Iterator0::.ctor()
extern "C"  void U3CfadeInU3Ec__Iterator0__ctor_m3226749971 (U3CfadeInU3Ec__Iterator0_t1457657473 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TransitionHandler/<fadeIn>c__Iterator0::MoveNext()
extern "C"  bool U3CfadeInU3Ec__Iterator0_MoveNext_m762267816 (U3CfadeInU3Ec__Iterator0_t1457657473 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CfadeInU3Ec__Iterator0_MoveNext_m762267816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0091;
	}

IL_0021:
	{
		TransitionHandler_t1104418219 * L_2 = __this->get_U24this_0();
		L_2->set_glitching_25((bool)0);
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_3);
		bool L_4 = __this->get_U24disposing_2();
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_004c:
	{
		goto IL_0093;
	}

IL_0051:
	{
		Scene_t2348375561  L_5 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral1204401978, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_008a;
		}
	}
	{
		TransitionHandler_t1104418219 * L_8 = __this->get_U24this_0();
		L_8->set_glitching_25((bool)1);
		TransitionHandler_t1104418219 * L_9 = __this->get_U24this_0();
		MonoBehaviour_StartCoroutine_m2618285814(L_9, _stringLiteral1949827611, /*hidden argument*/NULL);
	}

IL_008a:
	{
		__this->set_U24PC_3((-1));
	}

IL_0091:
	{
		return (bool)0;
	}

IL_0093:
	{
		return (bool)1;
	}
}
// System.Object TransitionHandler/<fadeIn>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CfadeInU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m443135174 (U3CfadeInU3Ec__Iterator0_t1457657473 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TransitionHandler/<fadeIn>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CfadeInU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1258706169 (U3CfadeInU3Ec__Iterator0_t1457657473 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TransitionHandler/<fadeIn>c__Iterator0::Dispose()
extern "C"  void U3CfadeInU3Ec__Iterator0_Dispose_m3965844337 (U3CfadeInU3Ec__Iterator0_t1457657473 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TransitionHandler/<fadeIn>c__Iterator0::Reset()
extern "C"  void U3CfadeInU3Ec__Iterator0_Reset_m1263144180 (U3CfadeInU3Ec__Iterator0_t1457657473 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CfadeInU3Ec__Iterator0_Reset_m1263144180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CfadeInU3Ec__Iterator0_Reset_m1263144180_RuntimeMethod_var);
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
// System.Void TransitionHandler/<fadeOut>c__Iterator1::.ctor()
extern "C"  void U3CfadeOutU3Ec__Iterator1__ctor_m2796055082 (U3CfadeOutU3Ec__Iterator1_t1640331254 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TransitionHandler/<fadeOut>c__Iterator1::MoveNext()
extern "C"  bool U3CfadeOutU3Ec__Iterator1_MoveNext_m2589012993 (U3CfadeOutU3Ec__Iterator1_t1640331254 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CfadeOutU3Ec__Iterator1_MoveNext_m2589012993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_005b;
			}
		}
	}
	{
		goto IL_0078;
	}

IL_0021:
	{
		TransitionHandler_t1104418219 * L_2 = __this->get_U24this_0();
		Animator_t434523843 * L_3 = L_2->get_fade_2();
		Animator_SetBool_m234840832(L_3, _stringLiteral1012805017, (bool)1, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_4 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_4, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_4);
		bool L_5 = __this->get_U24disposing_2();
		if (L_5)
		{
			goto IL_0056;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0056:
	{
		goto IL_007a;
	}

IL_005b:
	{
		TransitionHandler_t1104418219 * L_6 = __this->get_U24this_0();
		Animator_t434523843 * L_7 = L_6->get_fade_2();
		Animator_SetBool_m234840832(L_7, _stringLiteral1012805017, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0078:
	{
		return (bool)0;
	}

IL_007a:
	{
		return (bool)1;
	}
}
// System.Object TransitionHandler/<fadeOut>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CfadeOutU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3812255914 (U3CfadeOutU3Ec__Iterator1_t1640331254 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TransitionHandler/<fadeOut>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CfadeOutU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3154545978 (U3CfadeOutU3Ec__Iterator1_t1640331254 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TransitionHandler/<fadeOut>c__Iterator1::Dispose()
extern "C"  void U3CfadeOutU3Ec__Iterator1_Dispose_m999249377 (U3CfadeOutU3Ec__Iterator1_t1640331254 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TransitionHandler/<fadeOut>c__Iterator1::Reset()
extern "C"  void U3CfadeOutU3Ec__Iterator1_Reset_m3968039446 (U3CfadeOutU3Ec__Iterator1_t1640331254 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CfadeOutU3Ec__Iterator1_Reset_m3968039446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CfadeOutU3Ec__Iterator1_Reset_m3968039446_RuntimeMethod_var);
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
// System.Void TransitionHandler/<glitch>c__Iterator2::.ctor()
extern "C"  void U3CglitchU3Ec__Iterator2__ctor_m990253206 (U3CglitchU3Ec__Iterator2_t2262882800 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TransitionHandler/<glitch>c__Iterator2::MoveNext()
extern "C"  bool U3CglitchU3Ec__Iterator2_MoveNext_m3311734819 (U3CglitchU3Ec__Iterator2_t2262882800 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CglitchU3Ec__Iterator2_MoveNext_m3311734819_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0088;
			}
			case 2:
			{
				goto IL_00c9;
			}
		}
	}
	{
		goto IL_00e0;
	}

IL_0025:
	{
		goto IL_00c9;
	}

IL_002a:
	{
		Random_t108471755 * L_2 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_2, /*hidden argument*/NULL);
		__this->set_U3CrandomU3E__1_0(L_2);
		Random_t108471755 * L_3 = __this->get_U3CrandomU3E__1_0();
		int32_t L_4 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_3, 4, ((int32_t)11));
		__this->set_U3CnumbU3E__1_1(L_4);
		TransitionHandler_t1104418219 * L_5 = __this->get_U24this_2();
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		Animator_t434523843 * L_7 = GameObject_GetComponent_TisAnimator_t434523843_m440019408(L_6, /*hidden argument*/GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var);
		Animator_SetBool_m234840832(L_7, _stringLiteral1949827611, (bool)1, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_8 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_8, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_8);
		bool L_9 = __this->get_U24disposing_4();
		if (L_9)
		{
			goto IL_0083;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0083:
	{
		goto IL_00e2;
	}

IL_0088:
	{
		TransitionHandler_t1104418219 * L_10 = __this->get_U24this_2();
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		Animator_t434523843 * L_12 = GameObject_GetComponent_TisAnimator_t434523843_m440019408(L_11, /*hidden argument*/GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var);
		Animator_SetBool_m234840832(L_12, _stringLiteral1949827611, (bool)0, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_U3CnumbU3E__1_1();
		WaitForSeconds_t1699091251 * L_14 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_14, (((float)((float)L_13))), /*hidden argument*/NULL);
		__this->set_U24current_3(L_14);
		bool L_15 = __this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00c4;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_00c4:
	{
		goto IL_00e2;
	}

IL_00c9:
	{
		TransitionHandler_t1104418219 * L_16 = __this->get_U24this_2();
		bool L_17 = L_16->get_glitching_25();
		if (L_17)
		{
			goto IL_002a;
		}
	}
	{
		__this->set_U24PC_5((-1));
	}

IL_00e0:
	{
		return (bool)0;
	}

IL_00e2:
	{
		return (bool)1;
	}
}
// System.Object TransitionHandler/<glitch>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CglitchU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2288092200 (U3CglitchU3Ec__Iterator2_t2262882800 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object TransitionHandler/<glitch>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CglitchU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m1190911924 (U3CglitchU3Ec__Iterator2_t2262882800 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void TransitionHandler/<glitch>c__Iterator2::Dispose()
extern "C"  void U3CglitchU3Ec__Iterator2_Dispose_m4174321083 (U3CglitchU3Ec__Iterator2_t2262882800 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void TransitionHandler/<glitch>c__Iterator2::Reset()
extern "C"  void U3CglitchU3Ec__Iterator2_Reset_m791629191 (U3CglitchU3Ec__Iterator2_t2262882800 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CglitchU3Ec__Iterator2_Reset_m791629191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CglitchU3Ec__Iterator2_Reset_m791629191_RuntimeMethod_var);
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
// System.Void TransitionHandler/<openTheDoor>c__Iterator6::.ctor()
extern "C"  void U3CopenTheDoorU3Ec__Iterator6__ctor_m860964715 (U3CopenTheDoorU3Ec__Iterator6_t558074977 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TransitionHandler/<openTheDoor>c__Iterator6::MoveNext()
extern "C"  bool U3CopenTheDoorU3Ec__Iterator6_MoveNext_m1295403915 (U3CopenTheDoorU3Ec__Iterator6_t558074977 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CopenTheDoorU3Ec__Iterator6_MoveNext_m1295403915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_007a;
			}
		}
	}
	{
		goto IL_0096;
	}

IL_0021:
	{
		TransitionHandler_t1104418219 * L_2 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_3 = L_2->get_source_4();
		AudioSource_set_volume_m1273312851(L_3, (0.5f), /*hidden argument*/NULL);
		TransitionHandler_t1104418219 * L_4 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_5 = L_4->get_canvas_5();
		TransitionHandler_t1104418219 * L_6 = __this->get_U24this_0();
		AudioClip_t3680889665 * L_7 = L_6->get_closeDoor_8();
		AudioSource_PlayOneShot_m2678069419(L_5, L_7, (1.0f), /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_8 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_8, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_8);
		bool L_9 = __this->get_U24disposing_2();
		if (L_9)
		{
			goto IL_0075;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0075:
	{
		goto IL_0098;
	}

IL_007a:
	{
		TransitionHandler_t1104418219 * L_10 = __this->get_U24this_0();
		AudioSource_t3935305588 * L_11 = L_10->get_source_4();
		AudioSource_set_volume_m1273312851(L_11, (1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0096:
	{
		return (bool)0;
	}

IL_0098:
	{
		return (bool)1;
	}
}
// System.Object TransitionHandler/<openTheDoor>c__Iterator6::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CopenTheDoorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4288019519 (U3CopenTheDoorU3Ec__Iterator6_t558074977 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object TransitionHandler/<openTheDoor>c__Iterator6::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CopenTheDoorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m1889871725 (U3CopenTheDoorU3Ec__Iterator6_t558074977 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void TransitionHandler/<openTheDoor>c__Iterator6::Dispose()
extern "C"  void U3CopenTheDoorU3Ec__Iterator6_Dispose_m1713544920 (U3CopenTheDoorU3Ec__Iterator6_t558074977 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void TransitionHandler/<openTheDoor>c__Iterator6::Reset()
extern "C"  void U3CopenTheDoorU3Ec__Iterator6_Reset_m2031337731 (U3CopenTheDoorU3Ec__Iterator6_t558074977 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CopenTheDoorU3Ec__Iterator6_Reset_m2031337731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CopenTheDoorU3Ec__Iterator6_Reset_m2031337731_RuntimeMethod_var);
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
// System.Void TriggersAndAnimation::.ctor()
extern "C"  void TriggersAndAnimation__ctor_m213533235 (TriggersAndAnimation_t1403829264 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriggersAndAnimation::Start()
extern "C"  void TriggersAndAnimation_Start_m100683863 (TriggersAndAnimation_t1403829264 * __this, const RuntimeMethod* method)
{
	{
		TriggersAndAnimation_activateTriggersAndAnimation_m2779203266(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriggersAndAnimation::activateTriggersAndAnimation()
extern "C"  void TriggersAndAnimation_activateTriggersAndAnimation_m2779203266 (TriggersAndAnimation_t1403829264 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggersAndAnimation_activateTriggersAndAnimation_m2779203266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_house_6();
		EventTrigger_t1076084509 * L_1 = GameObject_GetComponent_TisEventTrigger_t1076084509_m3277609990(L_0, /*hidden argument*/GameObject_GetComponent_TisEventTrigger_t1076084509_m3277609990_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_1, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_house_6();
		PolygonCollider2D_t57175488 * L_3 = GameObject_GetComponent_TisPolygonCollider2D_t57175488_m3980671823(L_2, /*hidden argument*/GameObject_GetComponent_TisPolygonCollider2D_t57175488_m3980671823_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_castleSign_7();
		EventTrigger_t1076084509 * L_5 = GameObject_GetComponent_TisEventTrigger_t1076084509_m3277609990(L_4, /*hidden argument*/GameObject_GetComponent_TisEventTrigger_t1076084509_m3277609990_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_5, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_castleSign_7();
		Collider2D_t2806799626 * L_7 = GameObject_GetComponent_TisCollider2D_t2806799626_m1184015940(L_6, /*hidden argument*/GameObject_GetComponent_TisCollider2D_t2806799626_m1184015940_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_7, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = __this->get_sun_2();
		BoxCollider2D_t3581341831 * L_9 = GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(L_8, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_9, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = __this->get_bird_8();
		BoxCollider2D_t3581341831 * L_11 = GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(L_10, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_11, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = __this->get_campFire_3();
		BoxCollider2D_t3581341831 * L_13 = GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(L_12, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_13, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = __this->get_forte_5();
		BoxCollider2D_t3581341831 * L_15 = GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(L_14, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_15, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = __this->get_sun_2();
		FlameManager_t1876929043 * L_17 = GameObject_GetComponent_TisFlameManager_t1876929043_m750444410(L_16, /*hidden argument*/GameObject_GetComponent_TisFlameManager_t1876929043_m750444410_RuntimeMethod_var);
		FlameManager_startTheFire_m3913815109(L_17, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_18 = __this->get_npcTip_4();
		NpcDialogue_t1608584690 * L_19 = GameObject_GetComponent_TisNpcDialogue_t1608584690_m1796970400(L_18, /*hidden argument*/GameObject_GetComponent_TisNpcDialogue_t1608584690_m1796970400_RuntimeMethod_var);
		NpcDialogue_activateNPCTips_m2345430883(L_19, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = __this->get_objectiveButton_9();
		Button_t4055032469 * L_21 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_20, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_21, (bool)1, /*hidden argument*/NULL);
		QuestManager_t588401851 * L_22 = ((QuestManager_t588401851_StaticFields*)il2cpp_codegen_static_fields_for(QuestManager_t588401851_il2cpp_TypeInfo_var))->get_instance_2();
		bool L_23 = L_22->get_hasPlayedFirstCutscene_6();
		if (!L_23)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t1113636619 * L_24 = __this->get_privacy_10();
		PrivacyStateHandler_t2222435893 * L_25 = GameObject_GetComponent_TisPrivacyStateHandler_t2222435893_m2945413539(L_24, /*hidden argument*/GameObject_GetComponent_TisPrivacyStateHandler_t2222435893_m2945413539_RuntimeMethod_var);
		PrivacyStateHandler_playDefault_m2217334642(L_25, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_26 = __this->get_objectiveButton_9();
		GameObject_SetActive_m796801857(L_26, (bool)1, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		return;
	}
}
// System.Void TriggersAndAnimation::disableTriggersAndAnimation()
extern "C"  void TriggersAndAnimation_disableTriggersAndAnimation_m1580211138 (TriggersAndAnimation_t1403829264 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggersAndAnimation_disableTriggersAndAnimation_m1580211138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_house_6();
		EventTrigger_t1076084509 * L_1 = GameObject_GetComponent_TisEventTrigger_t1076084509_m3277609990(L_0, /*hidden argument*/GameObject_GetComponent_TisEventTrigger_t1076084509_m3277609990_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_house_6();
		PolygonCollider2D_t57175488 * L_3 = GameObject_GetComponent_TisPolygonCollider2D_t57175488_m3980671823(L_2, /*hidden argument*/GameObject_GetComponent_TisPolygonCollider2D_t57175488_m3980671823_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_3, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_castleSign_7();
		EventTrigger_t1076084509 * L_5 = GameObject_GetComponent_TisEventTrigger_t1076084509_m3277609990(L_4, /*hidden argument*/GameObject_GetComponent_TisEventTrigger_t1076084509_m3277609990_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_5, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_castleSign_7();
		Collider2D_t2806799626 * L_7 = GameObject_GetComponent_TisCollider2D_t2806799626_m1184015940(L_6, /*hidden argument*/GameObject_GetComponent_TisCollider2D_t2806799626_m1184015940_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_7, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = __this->get_sun_2();
		BoxCollider2D_t3581341831 * L_9 = GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(L_8, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_9, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = __this->get_campFire_3();
		BoxCollider2D_t3581341831 * L_11 = GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(L_10, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_11, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = __this->get_bird_8();
		BoxCollider2D_t3581341831 * L_13 = GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(L_12, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_13, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = __this->get_forte_5();
		BoxCollider2D_t3581341831 * L_15 = GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(L_14, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_15, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = __this->get_npcTip_4();
		NpcDialogue_t1608584690 * L_17 = GameObject_GetComponent_TisNpcDialogue_t1608584690_m1796970400(L_16, /*hidden argument*/GameObject_GetComponent_TisNpcDialogue_t1608584690_m1796970400_RuntimeMethod_var);
		NpcDialogue_stopNPCTips_m3724202432(L_17, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_18 = __this->get_objectiveButton_9();
		Button_t4055032469 * L_19 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_18, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_19, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriggersAndAnimation::disableTriggersForCampFire()
extern "C"  void TriggersAndAnimation_disableTriggersForCampFire_m136309580 (TriggersAndAnimation_t1403829264 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggersAndAnimation_disableTriggersForCampFire_m136309580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_bird_8();
		BoxCollider2D_t3581341831 * L_1 = GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(L_0, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_forte_5();
		BoxCollider2D_t3581341831 * L_3 = GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742(L_2, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t3581341831_m3822577742_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_3, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_npcTip_4();
		NpcDialogue_t1608584690 * L_5 = GameObject_GetComponent_TisNpcDialogue_t1608584690_m1796970400(L_4, /*hidden argument*/GameObject_GetComponent_TisNpcDialogue_t1608584690_m1796970400_RuntimeMethod_var);
		NpcDialogue_stopNPCTips_m3724202432(L_5, /*hidden argument*/NULL);
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
// System.Void WIFINetworkManager::.ctor()
extern "C"  void WIFINetworkManager__ctor_m3302413557 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator WIFINetworkManager::reset()
extern "C"  RuntimeObject* WIFINetworkManager_reset_m4041041805 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_reset_m4041041805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CresetU3Ec__Iterator0_t3593363922 * V_0 = NULL;
	{
		U3CresetU3Ec__Iterator0_t3593363922 * L_0 = (U3CresetU3Ec__Iterator0_t3593363922 *)il2cpp_codegen_object_new(U3CresetU3Ec__Iterator0_t3593363922_il2cpp_TypeInfo_var);
		U3CresetU3Ec__Iterator0__ctor_m1763102610(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CresetU3Ec__Iterator0_t3593363922 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CresetU3Ec__Iterator0_t3593363922 * L_2 = V_0;
		return L_2;
	}
}
// System.Void WIFINetworkManager::Awake()
extern "C"  void WIFINetworkManager_Awake_m2799672784 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	{
		__this->set_slot1_5(0);
		__this->set_slot2_6(0);
		__this->set_slot3_7(0);
		__this->set_slot4_8(0);
		__this->set_secured_11(0);
		return;
	}
}
// System.Void WIFINetworkManager::setStoresName()
extern "C"  void WIFINetworkManager_setStoresName_m4034154371 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_setStoresName_m4034154371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral3614788601, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WIFINetworkManager::endTheGame()
extern "C"  void WIFINetworkManager_endTheGame_m70675779 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_endTheGame_m70675779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral3316209797, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator WIFINetworkManager::endGame()
extern "C"  RuntimeObject* WIFINetworkManager_endGame_m1945075042 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_endGame_m1945075042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CendGameU3Ec__Iterator1_t3834751616 * V_0 = NULL;
	{
		U3CendGameU3Ec__Iterator1_t3834751616 * L_0 = (U3CendGameU3Ec__Iterator1_t3834751616 *)il2cpp_codegen_object_new(U3CendGameU3Ec__Iterator1_t3834751616_il2cpp_TypeInfo_var);
		U3CendGameU3Ec__Iterator1__ctor_m2167917110(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CendGameU3Ec__Iterator1_t3834751616 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CendGameU3Ec__Iterator1_t3834751616 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator WIFINetworkManager::setStoreName()
extern "C"  RuntimeObject* WIFINetworkManager_setStoreName_m905477757 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_setStoreName_m905477757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CsetStoreNameU3Ec__Iterator2_t2546226351 * V_0 = NULL;
	{
		U3CsetStoreNameU3Ec__Iterator2_t2546226351 * L_0 = (U3CsetStoreNameU3Ec__Iterator2_t2546226351 *)il2cpp_codegen_object_new(U3CsetStoreNameU3Ec__Iterator2_t2546226351_il2cpp_TypeInfo_var);
		U3CsetStoreNameU3Ec__Iterator2__ctor_m2160374029(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CsetStoreNameU3Ec__Iterator2_t2546226351 * L_1 = V_0;
		L_1->set_U24this_3(__this);
		U3CsetStoreNameU3Ec__Iterator2_t2546226351 * L_2 = V_0;
		return L_2;
	}
}
// System.Void WIFINetworkManager::setWIFINames()
extern "C"  void WIFINetworkManager_setWIFINames_m341559950 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_setWIFINames_m341559950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = __this->get_nameHolder_9();
		Sprite_t280657092 * L_1 = Image_get_sprite_m1811690853(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral598538385, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_4, _stringLiteral2350441889);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2350441889);
		StringU5BU5D_t1281789340* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral2206457458);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2206457458);
		StringU5BU5D_t1281789340* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral3679119671);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3679119671);
		StringU5BU5D_t1281789340* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral1358947352);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1358947352);
		__this->set_wifiNames_10(L_7);
		__this->set_correctAnswer_12(_stringLiteral2350441889);
		goto IL_0278;
	}

IL_005b:
	{
		Image_t2670269651 * L_8 = __this->get_nameHolder_9();
		Sprite_t280657092 * L_9 = Image_get_sprite_m1811690853(L_8, /*hidden argument*/NULL);
		String_t* L_10 = Object_get_name_m4211327027(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, _stringLiteral536729632, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00b6;
		}
	}
	{
		StringU5BU5D_t1281789340* L_12 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_12, _stringLiteral3565619804);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3565619804);
		StringU5BU5D_t1281789340* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral2452879852);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2452879852);
		StringU5BU5D_t1281789340* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteral390687449);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral390687449);
		StringU5BU5D_t1281789340* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteral2379172613);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2379172613);
		__this->set_wifiNames_10(L_15);
		__this->set_correctAnswer_12(_stringLiteral3565619804);
		goto IL_0278;
	}

IL_00b6:
	{
		Image_t2670269651 * L_16 = __this->get_nameHolder_9();
		Sprite_t280657092 * L_17 = Image_get_sprite_m1811690853(L_16, /*hidden argument*/NULL);
		String_t* L_18 = Object_get_name_m4211327027(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m920492651(NULL /*static, unused*/, L_18, _stringLiteral3387866240, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0111;
		}
	}
	{
		StringU5BU5D_t1281789340* L_20 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_20, _stringLiteral615998840);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral615998840);
		StringU5BU5D_t1281789340* L_21 = L_20;
		ArrayElementTypeCheck (L_21, _stringLiteral2408696772);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2408696772);
		StringU5BU5D_t1281789340* L_22 = L_21;
		ArrayElementTypeCheck (L_22, _stringLiteral3493222036);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3493222036);
		StringU5BU5D_t1281789340* L_23 = L_22;
		ArrayElementTypeCheck (L_23, _stringLiteral3079059194);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3079059194);
		__this->set_wifiNames_10(L_23);
		__this->set_correctAnswer_12(_stringLiteral615998840);
		goto IL_0278;
	}

IL_0111:
	{
		Image_t2670269651 * L_24 = __this->get_nameHolder_9();
		Sprite_t280657092 * L_25 = Image_get_sprite_m1811690853(L_24, /*hidden argument*/NULL);
		String_t* L_26 = Object_get_name_m4211327027(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Equality_m920492651(NULL /*static, unused*/, L_26, _stringLiteral2496365360, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_016c;
		}
	}
	{
		StringU5BU5D_t1281789340* L_28 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_28, _stringLiteral1968283866);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1968283866);
		StringU5BU5D_t1281789340* L_29 = L_28;
		ArrayElementTypeCheck (L_29, _stringLiteral380872013);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral380872013);
		StringU5BU5D_t1281789340* L_30 = L_29;
		ArrayElementTypeCheck (L_30, _stringLiteral1852833359);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1852833359);
		StringU5BU5D_t1281789340* L_31 = L_30;
		ArrayElementTypeCheck (L_31, _stringLiteral3006138710);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3006138710);
		__this->set_wifiNames_10(L_31);
		__this->set_correctAnswer_12(_stringLiteral1968283866);
		goto IL_0278;
	}

IL_016c:
	{
		Image_t2670269651 * L_32 = __this->get_nameHolder_9();
		Sprite_t280657092 * L_33 = Image_get_sprite_m1811690853(L_32, /*hidden argument*/NULL);
		String_t* L_34 = Object_get_name_m4211327027(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_op_Equality_m920492651(NULL /*static, unused*/, L_34, _stringLiteral3101199581, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_01c7;
		}
	}
	{
		StringU5BU5D_t1281789340* L_36 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_36, _stringLiteral3451630837);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3451630837);
		StringU5BU5D_t1281789340* L_37 = L_36;
		ArrayElementTypeCheck (L_37, _stringLiteral4019984948);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4019984948);
		StringU5BU5D_t1281789340* L_38 = L_37;
		ArrayElementTypeCheck (L_38, _stringLiteral123666461);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral123666461);
		StringU5BU5D_t1281789340* L_39 = L_38;
		ArrayElementTypeCheck (L_39, _stringLiteral3420890756);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3420890756);
		__this->set_wifiNames_10(L_39);
		__this->set_correctAnswer_12(_stringLiteral3451630837);
		goto IL_0278;
	}

IL_01c7:
	{
		Image_t2670269651 * L_40 = __this->get_nameHolder_9();
		Sprite_t280657092 * L_41 = Image_get_sprite_m1811690853(L_40, /*hidden argument*/NULL);
		String_t* L_42 = Object_get_name_m4211327027(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_op_Equality_m920492651(NULL /*static, unused*/, L_42, _stringLiteral2333220324, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0222;
		}
	}
	{
		StringU5BU5D_t1281789340* L_44 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_44, _stringLiteral2379038957);
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2379038957);
		StringU5BU5D_t1281789340* L_45 = L_44;
		ArrayElementTypeCheck (L_45, _stringLiteral1197743551);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1197743551);
		StringU5BU5D_t1281789340* L_46 = L_45;
		ArrayElementTypeCheck (L_46, _stringLiteral797480808);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral797480808);
		StringU5BU5D_t1281789340* L_47 = L_46;
		ArrayElementTypeCheck (L_47, _stringLiteral3670735769);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3670735769);
		__this->set_wifiNames_10(L_47);
		__this->set_correctAnswer_12(_stringLiteral2379038957);
		goto IL_0278;
	}

IL_0222:
	{
		Image_t2670269651 * L_48 = __this->get_nameHolder_9();
		Sprite_t280657092 * L_49 = Image_get_sprite_m1811690853(L_48, /*hidden argument*/NULL);
		String_t* L_50 = Object_get_name_m4211327027(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_51 = String_op_Equality_m920492651(NULL /*static, unused*/, L_50, _stringLiteral3093169590, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0278;
		}
	}
	{
		StringU5BU5D_t1281789340* L_52 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_52, _stringLiteral130483863);
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral130483863);
		StringU5BU5D_t1281789340* L_53 = L_52;
		ArrayElementTypeCheck (L_53, _stringLiteral4211699796);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4211699796);
		StringU5BU5D_t1281789340* L_54 = L_53;
		ArrayElementTypeCheck (L_54, _stringLiteral2775804149);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2775804149);
		StringU5BU5D_t1281789340* L_55 = L_54;
		ArrayElementTypeCheck (L_55, _stringLiteral477332598);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral477332598);
		__this->set_wifiNames_10(L_55);
		__this->set_correctAnswer_12(_stringLiteral130483863);
	}

IL_0278:
	{
		return;
	}
}
// System.Void WIFINetworkManager::assignWifiNames()
extern "C"  void WIFINetworkManager_assignWifiNames_m1412370316 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_assignWifiNames_m1412370316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t1113636619 * V_1 = NULL;
	GameObjectU5BU5D_t3328599146* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		WIFINetworkManager_setWIFINames_m341559950(__this, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_0 = __this->get_wifiNames_10();
		WIFINetworkManager_shuffle_m2419506700(__this, L_0, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_1 = __this->get_wifi_2();
		V_2 = L_1;
		V_3 = 0;
		goto IL_004c;
	}

IL_0022:
	{
		GameObjectU5BU5D_t3328599146* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		GameObject_t1113636619 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		GameObject_t1113636619 * L_6 = V_1;
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Transform_GetChild_m1092972975(L_7, 0, /*hidden argument*/NULL);
		Text_t1901882714 * L_9 = Component_GetComponent_TisText_t1901882714_m4196288697(L_8, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_10 = __this->get_wifiNames_10();
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_13);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_16 = V_3;
		GameObjectU5BU5D_t3328599146* L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// System.Void WIFINetworkManager::shuffle(System.String[])
extern "C"  void WIFINetworkManager_shuffle_m2419506700 (WIFINetworkManager_t1080793997 * __this, StringU5BU5D_t1281789340* ___k0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		int32_t L_0 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		V_1 = L_0;
		StringU5BU5D_t1281789340* L_1 = ___k0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		StringU5BU5D_t1281789340* L_5 = ___k0;
		int32_t L_6 = V_0;
		StringU5BU5D_t1281789340* L_7 = ___k0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		ArrayElementTypeCheck (L_5, L_10);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (String_t*)L_10);
		StringU5BU5D_t1281789340* L_11 = ___k0;
		int32_t L_12 = V_1;
		String_t* L_13 = V_2;
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (String_t*)L_13);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_15 = V_0;
		StringU5BU5D_t1281789340* L_16 = ___k0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WIFINetworkManager::selectToggle()
extern "C"  void WIFINetworkManager_selectToggle_m2131513956 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_selectToggle_m2131513956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	Toggle_t2735377061 * V_3 = NULL;
	ColorBlock_t2139031574  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Toggle_t2735377061 * V_5 = NULL;
	ColorBlock_t2139031574  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_wifi_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0080;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3328599146* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		Toggle_t2735377061 * L_6 = GameObject_GetComponent_TisToggle_t2735377061_m3911858412(L_5, /*hidden argument*/GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var);
		bool L_7 = Toggle_get_isOn_m1428293607(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		GameObject_t1113636619 * L_8 = V_0;
		GameObject_t1113636619 * L_9 = GameObject_get_gameObject_m3693461266(L_8, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_10 = GameObject_GetComponent_TisToggle_t2735377061_m3911858412(L_9, /*hidden argument*/GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var);
		V_3 = L_10;
		Toggle_t2735377061 * L_11 = V_3;
		ColorBlock_t2139031574  L_12 = Selectable_get_colors_m2213868400(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		Color_t2555686324  L_13 = ColorBlock_get_highlightedColor_m588402203((ColorBlock_t2139031574 *)(&V_4), /*hidden argument*/NULL);
		ColorBlock_set_normalColor_m254595671((ColorBlock_t2139031574 *)(&V_4), L_13, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_14 = V_3;
		ColorBlock_t2139031574  L_15 = V_4;
		Selectable_set_colors_m1384394609(L_14, L_15, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_0051:
	{
		GameObject_t1113636619 * L_16 = V_0;
		GameObject_t1113636619 * L_17 = GameObject_get_gameObject_m3693461266(L_16, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_18 = GameObject_GetComponent_TisToggle_t2735377061_m3911858412(L_17, /*hidden argument*/GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var);
		V_5 = L_18;
		Toggle_t2735377061 * L_19 = V_5;
		ColorBlock_t2139031574  L_20 = Selectable_get_colors_m2213868400(L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		Color_t2555686324  L_21 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		ColorBlock_set_normalColor_m254595671((ColorBlock_t2139031574 *)(&V_6), L_21, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_22 = V_5;
		ColorBlock_t2139031574  L_23 = V_6;
		Selectable_set_colors_m1384394609(L_22, L_23, /*hidden argument*/NULL);
	}

IL_007c:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0080:
	{
		int32_t L_25 = V_2;
		GameObjectU5BU5D_t3328599146* L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void WIFINetworkManager::hack()
extern "C"  void WIFINetworkManager_hack_m3077616452 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_hack_m3077616452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_wifi_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_04f1;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3328599146* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		Toggle_t2735377061 * L_6 = GameObject_GetComponent_TisToggle_t2735377061_m3911858412(L_5, /*hidden argument*/GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var);
		bool L_7 = Toggle_get_isOn_m1428293607(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_04ed;
		}
	}
	{
		GameObject_t1113636619 * L_8 = V_0;
		String_t* L_9 = Object_get_name_m4211327027(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral2376700570, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0156;
		}
	}
	{
		GameObject_t1113636619 * L_11 = V_0;
		WIFIToggleManager_t3203504582 * L_12 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_11, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_13 = L_12->get_lockOrSignal_2();
		int32_t L_14 = __this->get_slot1_5();
		int32_t L_15 = L_14;
		GameObject_t1113636619 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		GameObject_t1113636619 * L_17 = GameObject_get_gameObject_m3693461266(L_16, /*hidden argument*/NULL);
		Image_t2670269651 * L_18 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_17, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_19 = Image_get_sprite_m1811690853(L_18, /*hidden argument*/NULL);
		String_t* L_20 = Object_get_name_m4211327027(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_op_Equality_m920492651(NULL /*static, unused*/, L_20, _stringLiteral1167972383, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0097;
		}
	}
	{
		GameObject_t1113636619 * L_22 = V_0;
		WIFIToggleManager_t3203504582 * L_23 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_22, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		int32_t L_24 = __this->get_slot1_5();
		RuntimeObject* L_25 = WIFIToggleManager_enableRigidBody_m1377820160(L_23, L_24, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_25, /*hidden argument*/NULL);
		int32_t L_26 = __this->get_slot1_5();
		__this->set_slot1_5(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
		goto IL_00c0;
	}

IL_0097:
	{
		GameObject_t1113636619 * L_27 = V_0;
		WIFIToggleManager_t3203504582 * L_28 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_27, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_29 = L_28->get_lockOrSignal_2();
		int32_t L_30 = __this->get_slot1_5();
		int32_t L_31 = L_30;
		GameObject_t1113636619 * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		GameObject_t1113636619 * L_33 = GameObject_get_gameObject_m3693461266(L_32, /*hidden argument*/NULL);
		Image_t2670269651 * L_34 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_33, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		RuntimeObject* L_35 = WIFINetworkManager_wrongGuessHint_m743773196(__this, L_34, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_35, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		int32_t L_36 = __this->get_slot1_5();
		if ((!(((uint32_t)L_36) == ((uint32_t)4))))
		{
			goto IL_0151;
		}
	}
	{
		GameObject_t1113636619 * L_37 = V_0;
		Transform_t3600365921 * L_38 = GameObject_get_transform_m1369836730(L_37, /*hidden argument*/NULL);
		Transform_t3600365921 * L_39 = Transform_GetChild_m1092972975(L_38, 0, /*hidden argument*/NULL);
		Text_t1901882714 * L_40 = Component_GetComponent_TisText_t1901882714_m4196288697(L_39, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_40);
		String_t* L_42 = __this->get_correctAnswer_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_op_Equality_m920492651(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0131;
		}
	}
	{
		GameObject_t1113636619 * L_44 = __this->get_timer_17();
		Timer_t4185932343 * L_45 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_44, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_addSecond_m3960220265(L_45, /*hidden argument*/NULL);
		Animator_t434523843 * L_46 = __this->get_button1_13();
		Animator_SetTrigger_m2134052629(L_46, _stringLiteral1982708895, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral1636124867, /*hidden argument*/NULL);
		int32_t L_47 = __this->get_secured_11();
		__this->set_secured_11(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)));
		goto IL_0151;
	}

IL_0131:
	{
		GameObject_t1113636619 * L_48 = __this->get_timer_17();
		Timer_t4185932343 * L_49 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_48, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_minusSecond_m595946876(L_49, /*hidden argument*/NULL);
		Animator_t434523843 * L_50 = __this->get_button1_13();
		Animator_SetTrigger_m2134052629(L_50, _stringLiteral4274950676, /*hidden argument*/NULL);
	}

IL_0151:
	{
		goto IL_04ed;
	}

IL_0156:
	{
		GameObject_t1113636619 * L_51 = V_0;
		String_t* L_52 = Object_get_name_m4211327027(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Equality_m920492651(NULL /*static, unused*/, L_52, _stringLiteral38048410, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_028a;
		}
	}
	{
		GameObject_t1113636619 * L_54 = V_0;
		WIFIToggleManager_t3203504582 * L_55 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_54, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_56 = L_55->get_lockOrSignal_2();
		int32_t L_57 = __this->get_slot2_6();
		int32_t L_58 = L_57;
		GameObject_t1113636619 * L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		GameObject_t1113636619 * L_60 = GameObject_get_gameObject_m3693461266(L_59, /*hidden argument*/NULL);
		Image_t2670269651 * L_61 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_60, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_62 = Image_get_sprite_m1811690853(L_61, /*hidden argument*/NULL);
		String_t* L_63 = Object_get_name_m4211327027(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_64 = String_op_Equality_m920492651(NULL /*static, unused*/, L_63, _stringLiteral1167972383, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_01cb;
		}
	}
	{
		GameObject_t1113636619 * L_65 = V_0;
		WIFIToggleManager_t3203504582 * L_66 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_65, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		int32_t L_67 = __this->get_slot2_6();
		RuntimeObject* L_68 = WIFIToggleManager_enableRigidBody_m1377820160(L_66, L_67, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_68, /*hidden argument*/NULL);
		int32_t L_69 = __this->get_slot2_6();
		__this->set_slot2_6(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1)));
		goto IL_01f4;
	}

IL_01cb:
	{
		GameObject_t1113636619 * L_70 = V_0;
		WIFIToggleManager_t3203504582 * L_71 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_70, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_72 = L_71->get_lockOrSignal_2();
		int32_t L_73 = __this->get_slot2_6();
		int32_t L_74 = L_73;
		GameObject_t1113636619 * L_75 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		GameObject_t1113636619 * L_76 = GameObject_get_gameObject_m3693461266(L_75, /*hidden argument*/NULL);
		Image_t2670269651 * L_77 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_76, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		RuntimeObject* L_78 = WIFINetworkManager_wrongGuessHint_m743773196(__this, L_77, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_78, /*hidden argument*/NULL);
	}

IL_01f4:
	{
		int32_t L_79 = __this->get_slot2_6();
		if ((!(((uint32_t)L_79) == ((uint32_t)4))))
		{
			goto IL_0285;
		}
	}
	{
		GameObject_t1113636619 * L_80 = V_0;
		Transform_t3600365921 * L_81 = GameObject_get_transform_m1369836730(L_80, /*hidden argument*/NULL);
		Transform_t3600365921 * L_82 = Transform_GetChild_m1092972975(L_81, 0, /*hidden argument*/NULL);
		Text_t1901882714 * L_83 = Component_GetComponent_TisText_t1901882714_m4196288697(L_82, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		String_t* L_84 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_83);
		String_t* L_85 = __this->get_correctAnswer_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_86 = String_op_Equality_m920492651(NULL /*static, unused*/, L_84, L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0265;
		}
	}
	{
		GameObject_t1113636619 * L_87 = __this->get_timer_17();
		Timer_t4185932343 * L_88 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_87, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_addSecond_m3960220265(L_88, /*hidden argument*/NULL);
		Animator_t434523843 * L_89 = __this->get_button2_14();
		Animator_SetTrigger_m2134052629(L_89, _stringLiteral1982708895, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral1636124867, /*hidden argument*/NULL);
		int32_t L_90 = __this->get_secured_11();
		__this->set_secured_11(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1)));
		goto IL_0285;
	}

IL_0265:
	{
		GameObject_t1113636619 * L_91 = __this->get_timer_17();
		Timer_t4185932343 * L_92 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_91, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_minusSecond_m595946876(L_92, /*hidden argument*/NULL);
		Animator_t434523843 * L_93 = __this->get_button2_14();
		Animator_SetTrigger_m2134052629(L_93, _stringLiteral4274950676, /*hidden argument*/NULL);
	}

IL_0285:
	{
		goto IL_04ed;
	}

IL_028a:
	{
		GameObject_t1113636619 * L_94 = V_0;
		String_t* L_95 = Object_get_name_m4211327027(L_94, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_96 = String_op_Equality_m920492651(NULL /*static, unused*/, L_95, _stringLiteral1994363546, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_03be;
		}
	}
	{
		GameObject_t1113636619 * L_97 = V_0;
		WIFIToggleManager_t3203504582 * L_98 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_97, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_99 = L_98->get_lockOrSignal_2();
		int32_t L_100 = __this->get_slot3_7();
		int32_t L_101 = L_100;
		GameObject_t1113636619 * L_102 = (L_99)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101));
		GameObject_t1113636619 * L_103 = GameObject_get_gameObject_m3693461266(L_102, /*hidden argument*/NULL);
		Image_t2670269651 * L_104 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_103, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_105 = Image_get_sprite_m1811690853(L_104, /*hidden argument*/NULL);
		String_t* L_106 = Object_get_name_m4211327027(L_105, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_107 = String_op_Equality_m920492651(NULL /*static, unused*/, L_106, _stringLiteral1167972383, /*hidden argument*/NULL);
		if (!L_107)
		{
			goto IL_02ff;
		}
	}
	{
		GameObject_t1113636619 * L_108 = V_0;
		WIFIToggleManager_t3203504582 * L_109 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_108, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		int32_t L_110 = __this->get_slot3_7();
		RuntimeObject* L_111 = WIFIToggleManager_enableRigidBody_m1377820160(L_109, L_110, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_111, /*hidden argument*/NULL);
		int32_t L_112 = __this->get_slot3_7();
		__this->set_slot3_7(((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1)));
		goto IL_0328;
	}

IL_02ff:
	{
		GameObject_t1113636619 * L_113 = V_0;
		WIFIToggleManager_t3203504582 * L_114 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_113, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_115 = L_114->get_lockOrSignal_2();
		int32_t L_116 = __this->get_slot3_7();
		int32_t L_117 = L_116;
		GameObject_t1113636619 * L_118 = (L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		GameObject_t1113636619 * L_119 = GameObject_get_gameObject_m3693461266(L_118, /*hidden argument*/NULL);
		Image_t2670269651 * L_120 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_119, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		RuntimeObject* L_121 = WIFINetworkManager_wrongGuessHint_m743773196(__this, L_120, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_121, /*hidden argument*/NULL);
	}

IL_0328:
	{
		int32_t L_122 = __this->get_slot3_7();
		if ((!(((uint32_t)L_122) == ((uint32_t)4))))
		{
			goto IL_03b9;
		}
	}
	{
		GameObject_t1113636619 * L_123 = V_0;
		Transform_t3600365921 * L_124 = GameObject_get_transform_m1369836730(L_123, /*hidden argument*/NULL);
		Transform_t3600365921 * L_125 = Transform_GetChild_m1092972975(L_124, 0, /*hidden argument*/NULL);
		Text_t1901882714 * L_126 = Component_GetComponent_TisText_t1901882714_m4196288697(L_125, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		String_t* L_127 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_126);
		String_t* L_128 = __this->get_correctAnswer_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_129 = String_op_Equality_m920492651(NULL /*static, unused*/, L_127, L_128, /*hidden argument*/NULL);
		if (!L_129)
		{
			goto IL_0399;
		}
	}
	{
		GameObject_t1113636619 * L_130 = __this->get_timer_17();
		Timer_t4185932343 * L_131 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_130, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_addSecond_m3960220265(L_131, /*hidden argument*/NULL);
		Animator_t434523843 * L_132 = __this->get_button3_15();
		Animator_SetTrigger_m2134052629(L_132, _stringLiteral1982708895, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral1636124867, /*hidden argument*/NULL);
		int32_t L_133 = __this->get_secured_11();
		__this->set_secured_11(((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1)));
		goto IL_03b9;
	}

IL_0399:
	{
		GameObject_t1113636619 * L_134 = __this->get_timer_17();
		Timer_t4185932343 * L_135 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_134, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_minusSecond_m595946876(L_135, /*hidden argument*/NULL);
		Animator_t434523843 * L_136 = __this->get_button3_15();
		Animator_SetTrigger_m2134052629(L_136, _stringLiteral4274950676, /*hidden argument*/NULL);
	}

IL_03b9:
	{
		goto IL_04ed;
	}

IL_03be:
	{
		GameObject_t1113636619 * L_137 = V_0;
		String_t* L_138 = Object_get_name_m4211327027(L_137, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_139 = String_op_Equality_m920492651(NULL /*static, unused*/, L_138, _stringLiteral3950678682, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_04ed;
		}
	}
	{
		GameObject_t1113636619 * L_140 = V_0;
		WIFIToggleManager_t3203504582 * L_141 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_140, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_142 = L_141->get_lockOrSignal_2();
		int32_t L_143 = __this->get_slot4_8();
		int32_t L_144 = L_143;
		GameObject_t1113636619 * L_145 = (L_142)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_144));
		GameObject_t1113636619 * L_146 = GameObject_get_gameObject_m3693461266(L_145, /*hidden argument*/NULL);
		Image_t2670269651 * L_147 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_146, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_148 = Image_get_sprite_m1811690853(L_147, /*hidden argument*/NULL);
		String_t* L_149 = Object_get_name_m4211327027(L_148, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_150 = String_op_Equality_m920492651(NULL /*static, unused*/, L_149, _stringLiteral1167972383, /*hidden argument*/NULL);
		if (!L_150)
		{
			goto IL_0433;
		}
	}
	{
		GameObject_t1113636619 * L_151 = V_0;
		WIFIToggleManager_t3203504582 * L_152 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_151, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		int32_t L_153 = __this->get_slot4_8();
		RuntimeObject* L_154 = WIFIToggleManager_enableRigidBody_m1377820160(L_152, L_153, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_154, /*hidden argument*/NULL);
		int32_t L_155 = __this->get_slot4_8();
		__this->set_slot4_8(((int32_t)il2cpp_codegen_add((int32_t)L_155, (int32_t)1)));
		goto IL_045c;
	}

IL_0433:
	{
		GameObject_t1113636619 * L_156 = V_0;
		WIFIToggleManager_t3203504582 * L_157 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_156, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_158 = L_157->get_lockOrSignal_2();
		int32_t L_159 = __this->get_slot4_8();
		int32_t L_160 = L_159;
		GameObject_t1113636619 * L_161 = (L_158)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_160));
		GameObject_t1113636619 * L_162 = GameObject_get_gameObject_m3693461266(L_161, /*hidden argument*/NULL);
		Image_t2670269651 * L_163 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_162, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		RuntimeObject* L_164 = WIFINetworkManager_wrongGuessHint_m743773196(__this, L_163, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_164, /*hidden argument*/NULL);
	}

IL_045c:
	{
		int32_t L_165 = __this->get_slot4_8();
		if ((!(((uint32_t)L_165) == ((uint32_t)4))))
		{
			goto IL_04ed;
		}
	}
	{
		GameObject_t1113636619 * L_166 = V_0;
		Transform_t3600365921 * L_167 = GameObject_get_transform_m1369836730(L_166, /*hidden argument*/NULL);
		Transform_t3600365921 * L_168 = Transform_GetChild_m1092972975(L_167, 0, /*hidden argument*/NULL);
		Text_t1901882714 * L_169 = Component_GetComponent_TisText_t1901882714_m4196288697(L_168, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		String_t* L_170 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_169);
		String_t* L_171 = __this->get_correctAnswer_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_172 = String_op_Equality_m920492651(NULL /*static, unused*/, L_170, L_171, /*hidden argument*/NULL);
		if (!L_172)
		{
			goto IL_04cd;
		}
	}
	{
		GameObject_t1113636619 * L_173 = __this->get_timer_17();
		Timer_t4185932343 * L_174 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_173, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_addSecond_m3960220265(L_174, /*hidden argument*/NULL);
		Animator_t434523843 * L_175 = __this->get_button4_16();
		Animator_SetTrigger_m2134052629(L_175, _stringLiteral1982708895, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral1636124867, /*hidden argument*/NULL);
		int32_t L_176 = __this->get_secured_11();
		__this->set_secured_11(((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1)));
		goto IL_04ed;
	}

IL_04cd:
	{
		GameObject_t1113636619 * L_177 = __this->get_timer_17();
		Timer_t4185932343 * L_178 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_177, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_minusSecond_m595946876(L_178, /*hidden argument*/NULL);
		Animator_t434523843 * L_179 = __this->get_button4_16();
		Animator_SetTrigger_m2134052629(L_179, _stringLiteral4274950676, /*hidden argument*/NULL);
	}

IL_04ed:
	{
		int32_t L_180 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1));
	}

IL_04f1:
	{
		int32_t L_181 = V_2;
		GameObjectU5BU5D_t3328599146* L_182 = V_1;
		if ((((int32_t)L_181) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_182)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void WIFINetworkManager::connect()
extern "C"  void WIFINetworkManager_connect_m2875164044 (WIFINetworkManager_t1080793997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_connect_m2875164044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_wifi_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_04f1;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3328599146* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		Toggle_t2735377061 * L_6 = GameObject_GetComponent_TisToggle_t2735377061_m3911858412(L_5, /*hidden argument*/GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var);
		bool L_7 = Toggle_get_isOn_m1428293607(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_04ed;
		}
	}
	{
		GameObject_t1113636619 * L_8 = V_0;
		String_t* L_9 = Object_get_name_m4211327027(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral2376700570, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0156;
		}
	}
	{
		GameObject_t1113636619 * L_11 = V_0;
		WIFIToggleManager_t3203504582 * L_12 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_11, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_13 = L_12->get_lockOrSignal_2();
		int32_t L_14 = __this->get_slot1_5();
		int32_t L_15 = L_14;
		GameObject_t1113636619 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		GameObject_t1113636619 * L_17 = GameObject_get_gameObject_m3693461266(L_16, /*hidden argument*/NULL);
		Image_t2670269651 * L_18 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_17, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_19 = Image_get_sprite_m1811690853(L_18, /*hidden argument*/NULL);
		String_t* L_20 = Object_get_name_m4211327027(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_op_Equality_m920492651(NULL /*static, unused*/, L_20, _stringLiteral3893191915, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0097;
		}
	}
	{
		GameObject_t1113636619 * L_22 = V_0;
		WIFIToggleManager_t3203504582 * L_23 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_22, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		int32_t L_24 = __this->get_slot1_5();
		RuntimeObject* L_25 = WIFIToggleManager_enableRigidBody_m1377820160(L_23, L_24, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_25, /*hidden argument*/NULL);
		int32_t L_26 = __this->get_slot1_5();
		__this->set_slot1_5(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
		goto IL_00c0;
	}

IL_0097:
	{
		GameObject_t1113636619 * L_27 = V_0;
		WIFIToggleManager_t3203504582 * L_28 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_27, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_29 = L_28->get_lockOrSignal_2();
		int32_t L_30 = __this->get_slot1_5();
		int32_t L_31 = L_30;
		GameObject_t1113636619 * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		GameObject_t1113636619 * L_33 = GameObject_get_gameObject_m3693461266(L_32, /*hidden argument*/NULL);
		Image_t2670269651 * L_34 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_33, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		RuntimeObject* L_35 = WIFINetworkManager_wrongGuessHint_m743773196(__this, L_34, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_35, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		int32_t L_36 = __this->get_slot1_5();
		if ((!(((uint32_t)L_36) == ((uint32_t)4))))
		{
			goto IL_0151;
		}
	}
	{
		GameObject_t1113636619 * L_37 = V_0;
		Transform_t3600365921 * L_38 = GameObject_get_transform_m1369836730(L_37, /*hidden argument*/NULL);
		Transform_t3600365921 * L_39 = Transform_GetChild_m1092972975(L_38, 0, /*hidden argument*/NULL);
		Text_t1901882714 * L_40 = Component_GetComponent_TisText_t1901882714_m4196288697(L_39, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_40);
		String_t* L_42 = __this->get_correctAnswer_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_op_Equality_m920492651(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0131;
		}
	}
	{
		GameObject_t1113636619 * L_44 = __this->get_timer_17();
		Timer_t4185932343 * L_45 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_44, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_addSecond_m3960220265(L_45, /*hidden argument*/NULL);
		Animator_t434523843 * L_46 = __this->get_button1_13();
		Animator_SetTrigger_m2134052629(L_46, _stringLiteral1982708895, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral1636124867, /*hidden argument*/NULL);
		int32_t L_47 = __this->get_secured_11();
		__this->set_secured_11(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)));
		goto IL_0151;
	}

IL_0131:
	{
		GameObject_t1113636619 * L_48 = __this->get_timer_17();
		Timer_t4185932343 * L_49 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_48, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_minusSecond_m595946876(L_49, /*hidden argument*/NULL);
		Animator_t434523843 * L_50 = __this->get_button1_13();
		Animator_SetTrigger_m2134052629(L_50, _stringLiteral4274950676, /*hidden argument*/NULL);
	}

IL_0151:
	{
		goto IL_04ed;
	}

IL_0156:
	{
		GameObject_t1113636619 * L_51 = V_0;
		String_t* L_52 = Object_get_name_m4211327027(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Equality_m920492651(NULL /*static, unused*/, L_52, _stringLiteral38048410, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_028a;
		}
	}
	{
		GameObject_t1113636619 * L_54 = V_0;
		WIFIToggleManager_t3203504582 * L_55 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_54, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_56 = L_55->get_lockOrSignal_2();
		int32_t L_57 = __this->get_slot2_6();
		int32_t L_58 = L_57;
		GameObject_t1113636619 * L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		GameObject_t1113636619 * L_60 = GameObject_get_gameObject_m3693461266(L_59, /*hidden argument*/NULL);
		Image_t2670269651 * L_61 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_60, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_62 = Image_get_sprite_m1811690853(L_61, /*hidden argument*/NULL);
		String_t* L_63 = Object_get_name_m4211327027(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_64 = String_op_Equality_m920492651(NULL /*static, unused*/, L_63, _stringLiteral3893191915, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_01cb;
		}
	}
	{
		GameObject_t1113636619 * L_65 = V_0;
		WIFIToggleManager_t3203504582 * L_66 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_65, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		int32_t L_67 = __this->get_slot2_6();
		RuntimeObject* L_68 = WIFIToggleManager_enableRigidBody_m1377820160(L_66, L_67, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_68, /*hidden argument*/NULL);
		int32_t L_69 = __this->get_slot2_6();
		__this->set_slot2_6(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1)));
		goto IL_01f4;
	}

IL_01cb:
	{
		GameObject_t1113636619 * L_70 = V_0;
		WIFIToggleManager_t3203504582 * L_71 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_70, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_72 = L_71->get_lockOrSignal_2();
		int32_t L_73 = __this->get_slot2_6();
		int32_t L_74 = L_73;
		GameObject_t1113636619 * L_75 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		GameObject_t1113636619 * L_76 = GameObject_get_gameObject_m3693461266(L_75, /*hidden argument*/NULL);
		Image_t2670269651 * L_77 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_76, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		RuntimeObject* L_78 = WIFINetworkManager_wrongGuessHint_m743773196(__this, L_77, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_78, /*hidden argument*/NULL);
	}

IL_01f4:
	{
		int32_t L_79 = __this->get_slot2_6();
		if ((!(((uint32_t)L_79) == ((uint32_t)4))))
		{
			goto IL_0285;
		}
	}
	{
		GameObject_t1113636619 * L_80 = V_0;
		Transform_t3600365921 * L_81 = GameObject_get_transform_m1369836730(L_80, /*hidden argument*/NULL);
		Transform_t3600365921 * L_82 = Transform_GetChild_m1092972975(L_81, 0, /*hidden argument*/NULL);
		Text_t1901882714 * L_83 = Component_GetComponent_TisText_t1901882714_m4196288697(L_82, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		String_t* L_84 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_83);
		String_t* L_85 = __this->get_correctAnswer_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_86 = String_op_Equality_m920492651(NULL /*static, unused*/, L_84, L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0265;
		}
	}
	{
		GameObject_t1113636619 * L_87 = __this->get_timer_17();
		Timer_t4185932343 * L_88 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_87, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_addSecond_m3960220265(L_88, /*hidden argument*/NULL);
		Animator_t434523843 * L_89 = __this->get_button2_14();
		Animator_SetTrigger_m2134052629(L_89, _stringLiteral1982708895, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral1636124867, /*hidden argument*/NULL);
		int32_t L_90 = __this->get_secured_11();
		__this->set_secured_11(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1)));
		goto IL_0285;
	}

IL_0265:
	{
		GameObject_t1113636619 * L_91 = __this->get_timer_17();
		Timer_t4185932343 * L_92 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_91, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_minusSecond_m595946876(L_92, /*hidden argument*/NULL);
		Animator_t434523843 * L_93 = __this->get_button2_14();
		Animator_SetTrigger_m2134052629(L_93, _stringLiteral4274950676, /*hidden argument*/NULL);
	}

IL_0285:
	{
		goto IL_04ed;
	}

IL_028a:
	{
		GameObject_t1113636619 * L_94 = V_0;
		String_t* L_95 = Object_get_name_m4211327027(L_94, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_96 = String_op_Equality_m920492651(NULL /*static, unused*/, L_95, _stringLiteral1994363546, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_03be;
		}
	}
	{
		GameObject_t1113636619 * L_97 = V_0;
		WIFIToggleManager_t3203504582 * L_98 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_97, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_99 = L_98->get_lockOrSignal_2();
		int32_t L_100 = __this->get_slot3_7();
		int32_t L_101 = L_100;
		GameObject_t1113636619 * L_102 = (L_99)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101));
		GameObject_t1113636619 * L_103 = GameObject_get_gameObject_m3693461266(L_102, /*hidden argument*/NULL);
		Image_t2670269651 * L_104 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_103, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_105 = Image_get_sprite_m1811690853(L_104, /*hidden argument*/NULL);
		String_t* L_106 = Object_get_name_m4211327027(L_105, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_107 = String_op_Equality_m920492651(NULL /*static, unused*/, L_106, _stringLiteral3893191915, /*hidden argument*/NULL);
		if (!L_107)
		{
			goto IL_02ff;
		}
	}
	{
		GameObject_t1113636619 * L_108 = V_0;
		WIFIToggleManager_t3203504582 * L_109 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_108, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		int32_t L_110 = __this->get_slot3_7();
		RuntimeObject* L_111 = WIFIToggleManager_enableRigidBody_m1377820160(L_109, L_110, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_111, /*hidden argument*/NULL);
		int32_t L_112 = __this->get_slot3_7();
		__this->set_slot3_7(((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1)));
		goto IL_0328;
	}

IL_02ff:
	{
		GameObject_t1113636619 * L_113 = V_0;
		WIFIToggleManager_t3203504582 * L_114 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_113, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_115 = L_114->get_lockOrSignal_2();
		int32_t L_116 = __this->get_slot3_7();
		int32_t L_117 = L_116;
		GameObject_t1113636619 * L_118 = (L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		GameObject_t1113636619 * L_119 = GameObject_get_gameObject_m3693461266(L_118, /*hidden argument*/NULL);
		Image_t2670269651 * L_120 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_119, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		RuntimeObject* L_121 = WIFINetworkManager_wrongGuessHint_m743773196(__this, L_120, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_121, /*hidden argument*/NULL);
	}

IL_0328:
	{
		int32_t L_122 = __this->get_slot3_7();
		if ((!(((uint32_t)L_122) == ((uint32_t)4))))
		{
			goto IL_03b9;
		}
	}
	{
		GameObject_t1113636619 * L_123 = V_0;
		Transform_t3600365921 * L_124 = GameObject_get_transform_m1369836730(L_123, /*hidden argument*/NULL);
		Transform_t3600365921 * L_125 = Transform_GetChild_m1092972975(L_124, 0, /*hidden argument*/NULL);
		Text_t1901882714 * L_126 = Component_GetComponent_TisText_t1901882714_m4196288697(L_125, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		String_t* L_127 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_126);
		String_t* L_128 = __this->get_correctAnswer_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_129 = String_op_Equality_m920492651(NULL /*static, unused*/, L_127, L_128, /*hidden argument*/NULL);
		if (!L_129)
		{
			goto IL_0399;
		}
	}
	{
		GameObject_t1113636619 * L_130 = __this->get_timer_17();
		Timer_t4185932343 * L_131 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_130, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_addSecond_m3960220265(L_131, /*hidden argument*/NULL);
		Animator_t434523843 * L_132 = __this->get_button3_15();
		Animator_SetTrigger_m2134052629(L_132, _stringLiteral1982708895, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral1636124867, /*hidden argument*/NULL);
		int32_t L_133 = __this->get_secured_11();
		__this->set_secured_11(((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1)));
		goto IL_03b9;
	}

IL_0399:
	{
		GameObject_t1113636619 * L_134 = __this->get_timer_17();
		Timer_t4185932343 * L_135 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_134, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_minusSecond_m595946876(L_135, /*hidden argument*/NULL);
		Animator_t434523843 * L_136 = __this->get_button3_15();
		Animator_SetTrigger_m2134052629(L_136, _stringLiteral4274950676, /*hidden argument*/NULL);
	}

IL_03b9:
	{
		goto IL_04ed;
	}

IL_03be:
	{
		GameObject_t1113636619 * L_137 = V_0;
		String_t* L_138 = Object_get_name_m4211327027(L_137, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_139 = String_op_Equality_m920492651(NULL /*static, unused*/, L_138, _stringLiteral3950678682, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_04ed;
		}
	}
	{
		GameObject_t1113636619 * L_140 = V_0;
		WIFIToggleManager_t3203504582 * L_141 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_140, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_142 = L_141->get_lockOrSignal_2();
		int32_t L_143 = __this->get_slot4_8();
		int32_t L_144 = L_143;
		GameObject_t1113636619 * L_145 = (L_142)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_144));
		GameObject_t1113636619 * L_146 = GameObject_get_gameObject_m3693461266(L_145, /*hidden argument*/NULL);
		Image_t2670269651 * L_147 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_146, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_148 = Image_get_sprite_m1811690853(L_147, /*hidden argument*/NULL);
		String_t* L_149 = Object_get_name_m4211327027(L_148, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_150 = String_op_Equality_m920492651(NULL /*static, unused*/, L_149, _stringLiteral3893191915, /*hidden argument*/NULL);
		if (!L_150)
		{
			goto IL_0433;
		}
	}
	{
		GameObject_t1113636619 * L_151 = V_0;
		WIFIToggleManager_t3203504582 * L_152 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_151, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		int32_t L_153 = __this->get_slot4_8();
		RuntimeObject* L_154 = WIFIToggleManager_enableRigidBody_m1377820160(L_152, L_153, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_154, /*hidden argument*/NULL);
		int32_t L_155 = __this->get_slot4_8();
		__this->set_slot4_8(((int32_t)il2cpp_codegen_add((int32_t)L_155, (int32_t)1)));
		goto IL_045c;
	}

IL_0433:
	{
		GameObject_t1113636619 * L_156 = V_0;
		WIFIToggleManager_t3203504582 * L_157 = GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691(L_156, /*hidden argument*/GameObject_GetComponent_TisWIFIToggleManager_t3203504582_m3305901691_RuntimeMethod_var);
		GameObjectU5BU5D_t3328599146* L_158 = L_157->get_lockOrSignal_2();
		int32_t L_159 = __this->get_slot4_8();
		int32_t L_160 = L_159;
		GameObject_t1113636619 * L_161 = (L_158)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_160));
		GameObject_t1113636619 * L_162 = GameObject_get_gameObject_m3693461266(L_161, /*hidden argument*/NULL);
		Image_t2670269651 * L_163 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_162, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		RuntimeObject* L_164 = WIFINetworkManager_wrongGuessHint_m743773196(__this, L_163, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_164, /*hidden argument*/NULL);
	}

IL_045c:
	{
		int32_t L_165 = __this->get_slot4_8();
		if ((!(((uint32_t)L_165) == ((uint32_t)4))))
		{
			goto IL_04ed;
		}
	}
	{
		GameObject_t1113636619 * L_166 = V_0;
		Transform_t3600365921 * L_167 = GameObject_get_transform_m1369836730(L_166, /*hidden argument*/NULL);
		Transform_t3600365921 * L_168 = Transform_GetChild_m1092972975(L_167, 0, /*hidden argument*/NULL);
		Text_t1901882714 * L_169 = Component_GetComponent_TisText_t1901882714_m4196288697(L_168, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		String_t* L_170 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_169);
		String_t* L_171 = __this->get_correctAnswer_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_172 = String_op_Equality_m920492651(NULL /*static, unused*/, L_170, L_171, /*hidden argument*/NULL);
		if (!L_172)
		{
			goto IL_04cd;
		}
	}
	{
		GameObject_t1113636619 * L_173 = __this->get_timer_17();
		Timer_t4185932343 * L_174 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_173, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_addSecond_m3960220265(L_174, /*hidden argument*/NULL);
		Animator_t434523843 * L_175 = __this->get_button4_16();
		Animator_SetTrigger_m2134052629(L_175, _stringLiteral1982708895, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral1636124867, /*hidden argument*/NULL);
		int32_t L_176 = __this->get_secured_11();
		__this->set_secured_11(((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1)));
		goto IL_04ed;
	}

IL_04cd:
	{
		GameObject_t1113636619 * L_177 = __this->get_timer_17();
		Timer_t4185932343 * L_178 = GameObject_GetComponent_TisTimer_t4185932343_m2521844321(L_177, /*hidden argument*/GameObject_GetComponent_TisTimer_t4185932343_m2521844321_RuntimeMethod_var);
		Timer_minusSecond_m595946876(L_178, /*hidden argument*/NULL);
		Animator_t434523843 * L_179 = __this->get_button4_16();
		Animator_SetTrigger_m2134052629(L_179, _stringLiteral4274950676, /*hidden argument*/NULL);
	}

IL_04ed:
	{
		int32_t L_180 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1));
	}

IL_04f1:
	{
		int32_t L_181 = V_2;
		GameObjectU5BU5D_t3328599146* L_182 = V_1;
		if ((((int32_t)L_181) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_182)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator WIFINetworkManager::wrongGuessHint(UnityEngine.UI.Image)
extern "C"  RuntimeObject* WIFINetworkManager_wrongGuessHint_m743773196 (WIFINetworkManager_t1080793997 * __this, Image_t2670269651 * ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFINetworkManager_wrongGuessHint_m743773196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CwrongGuessHintU3Ec__Iterator3_t338836333 * V_0 = NULL;
	{
		U3CwrongGuessHintU3Ec__Iterator3_t338836333 * L_0 = (U3CwrongGuessHintU3Ec__Iterator3_t338836333 *)il2cpp_codegen_object_new(U3CwrongGuessHintU3Ec__Iterator3_t338836333_il2cpp_TypeInfo_var);
		U3CwrongGuessHintU3Ec__Iterator3__ctor_m889198(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CwrongGuessHintU3Ec__Iterator3_t338836333 * L_1 = V_0;
		Image_t2670269651 * L_2 = ___k0;
		L_1->set_k_0(L_2);
		U3CwrongGuessHintU3Ec__Iterator3_t338836333 * L_3 = V_0;
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
// System.Void WIFINetworkManager/<endGame>c__Iterator1::.ctor()
extern "C"  void U3CendGameU3Ec__Iterator1__ctor_m2167917110 (U3CendGameU3Ec__Iterator1_t3834751616 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WIFINetworkManager/<endGame>c__Iterator1::MoveNext()
extern "C"  bool U3CendGameU3Ec__Iterator1_MoveNext_m3834194961 (U3CendGameU3Ec__Iterator1_t3834751616 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CendGameU3Ec__Iterator1_MoveNext_m3834194961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00ef;
			}
		}
	}
	{
		goto IL_014a;
	}

IL_0021:
	{
		WIFINetworkManager_t1080793997 * L_2 = __this->get_U24this_0();
		GameObject_t1113636619 * L_3 = L_2->get_hint_4();
		GameObject_t1113636619 * L_4 = GameObject_get_gameObject_m3693461266(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_5 = __this->get_U24this_0();
		MonoBehaviour_StopCoroutine_m1962070247(L_5, _stringLiteral3614788601, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_6 = __this->get_U24this_0();
		Animator_t434523843 * L_7 = L_6->get_button1_13();
		Animator_SetTrigger_m2134052629(L_7, _stringLiteral1948332219, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_8 = __this->get_U24this_0();
		Animator_t434523843 * L_9 = L_8->get_button2_14();
		Animator_SetTrigger_m2134052629(L_9, _stringLiteral1948332219, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_10 = __this->get_U24this_0();
		Animator_t434523843 * L_11 = L_10->get_button3_15();
		Animator_SetTrigger_m2134052629(L_11, _stringLiteral1948332219, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_12 = __this->get_U24this_0();
		Animator_t434523843 * L_13 = L_12->get_button4_16();
		Animator_SetTrigger_m2134052629(L_13, _stringLiteral1948332219, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_14 = __this->get_U24this_0();
		L_14->set_slot1_5(0);
		WIFINetworkManager_t1080793997 * L_15 = __this->get_U24this_0();
		L_15->set_slot2_6(0);
		WIFINetworkManager_t1080793997 * L_16 = __this->get_U24this_0();
		L_16->set_slot3_7(0);
		WIFINetworkManager_t1080793997 * L_17 = __this->get_U24this_0();
		L_17->set_slot4_8(0);
		WaitForSeconds_t1699091251 * L_18 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_18, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_18);
		bool L_19 = __this->get_U24disposing_2();
		if (L_19)
		{
			goto IL_00ea;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_00ea:
	{
		goto IL_014c;
	}

IL_00ef:
	{
		WIFINetworkManager_t1080793997 * L_20 = __this->get_U24this_0();
		Animator_t434523843 * L_21 = L_20->get_button1_13();
		WIFIToggleManager_t3203504582 * L_22 = Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175(L_21, /*hidden argument*/Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175_RuntimeMethod_var);
		WIFIToggleManager_assignPictures_m3690339988(L_22, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_23 = __this->get_U24this_0();
		Animator_t434523843 * L_24 = L_23->get_button2_14();
		WIFIToggleManager_t3203504582 * L_25 = Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175(L_24, /*hidden argument*/Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175_RuntimeMethod_var);
		WIFIToggleManager_assignPictures_m3690339988(L_25, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_26 = __this->get_U24this_0();
		Animator_t434523843 * L_27 = L_26->get_button3_15();
		WIFIToggleManager_t3203504582 * L_28 = Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175(L_27, /*hidden argument*/Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175_RuntimeMethod_var);
		WIFIToggleManager_assignPictures_m3690339988(L_28, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_29 = __this->get_U24this_0();
		Animator_t434523843 * L_30 = L_29->get_button4_16();
		WIFIToggleManager_t3203504582 * L_31 = Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175(L_30, /*hidden argument*/Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175_RuntimeMethod_var);
		WIFIToggleManager_assignPictures_m3690339988(L_31, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_014a:
	{
		return (bool)0;
	}

IL_014c:
	{
		return (bool)1;
	}
}
// System.Object WIFINetworkManager/<endGame>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CendGameU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1453950048 (U3CendGameU3Ec__Iterator1_t3834751616 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object WIFINetworkManager/<endGame>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CendGameU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1915261147 (U3CendGameU3Ec__Iterator1_t3834751616 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void WIFINetworkManager/<endGame>c__Iterator1::Dispose()
extern "C"  void U3CendGameU3Ec__Iterator1_Dispose_m267430119 (U3CendGameU3Ec__Iterator1_t3834751616 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void WIFINetworkManager/<endGame>c__Iterator1::Reset()
extern "C"  void U3CendGameU3Ec__Iterator1_Reset_m1529540789 (U3CendGameU3Ec__Iterator1_t3834751616 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CendGameU3Ec__Iterator1_Reset_m1529540789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CendGameU3Ec__Iterator1_Reset_m1529540789_RuntimeMethod_var);
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
// System.Void WIFINetworkManager/<reset>c__Iterator0::.ctor()
extern "C"  void U3CresetU3Ec__Iterator0__ctor_m1763102610 (U3CresetU3Ec__Iterator0_t3593363922 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WIFINetworkManager/<reset>c__Iterator0::MoveNext()
extern "C"  bool U3CresetU3Ec__Iterator0_MoveNext_m935688804 (U3CresetU3Ec__Iterator0_t3593363922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CresetU3Ec__Iterator0_MoveNext_m935688804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_00f1;
			}
		}
	}
	{
		goto IL_015d;
	}

IL_0025:
	{
		WIFINetworkManager_t1080793997 * L_2 = __this->get_U24this_0();
		L_2->set_slot1_5(0);
		WIFINetworkManager_t1080793997 * L_3 = __this->get_U24this_0();
		L_3->set_slot2_6(0);
		WIFINetworkManager_t1080793997 * L_4 = __this->get_U24this_0();
		L_4->set_slot3_7(0);
		WIFINetworkManager_t1080793997 * L_5 = __this->get_U24this_0();
		L_5->set_slot4_8(0);
		WaitForSeconds_t1699091251 * L_6 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_6, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_6);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_0074;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0074:
	{
		goto IL_015f;
	}

IL_0079:
	{
		WIFINetworkManager_t1080793997 * L_8 = __this->get_U24this_0();
		Animator_t434523843 * L_9 = L_8->get_button1_13();
		Animator_SetTrigger_m2134052629(L_9, _stringLiteral1948332219, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_10 = __this->get_U24this_0();
		Animator_t434523843 * L_11 = L_10->get_button2_14();
		Animator_SetTrigger_m2134052629(L_11, _stringLiteral1948332219, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_12 = __this->get_U24this_0();
		Animator_t434523843 * L_13 = L_12->get_button3_15();
		Animator_SetTrigger_m2134052629(L_13, _stringLiteral1948332219, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_14 = __this->get_U24this_0();
		Animator_t434523843 * L_15 = L_14->get_button4_16();
		Animator_SetTrigger_m2134052629(L_15, _stringLiteral1948332219, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_16 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_16, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_16);
		bool L_17 = __this->get_U24disposing_2();
		if (L_17)
		{
			goto IL_00ec;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00ec:
	{
		goto IL_015f;
	}

IL_00f1:
	{
		WIFINetworkManager_t1080793997 * L_18 = __this->get_U24this_0();
		MonoBehaviour_StartCoroutine_m2618285814(L_18, _stringLiteral3614788601, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_19 = __this->get_U24this_0();
		Animator_t434523843 * L_20 = L_19->get_button1_13();
		WIFIToggleManager_t3203504582 * L_21 = Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175(L_20, /*hidden argument*/Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175_RuntimeMethod_var);
		WIFIToggleManager_assignPictures_m3690339988(L_21, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_22 = __this->get_U24this_0();
		Animator_t434523843 * L_23 = L_22->get_button2_14();
		WIFIToggleManager_t3203504582 * L_24 = Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175(L_23, /*hidden argument*/Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175_RuntimeMethod_var);
		WIFIToggleManager_assignPictures_m3690339988(L_24, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_25 = __this->get_U24this_0();
		Animator_t434523843 * L_26 = L_25->get_button3_15();
		WIFIToggleManager_t3203504582 * L_27 = Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175(L_26, /*hidden argument*/Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175_RuntimeMethod_var);
		WIFIToggleManager_assignPictures_m3690339988(L_27, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_28 = __this->get_U24this_0();
		Animator_t434523843 * L_29 = L_28->get_button4_16();
		WIFIToggleManager_t3203504582 * L_30 = Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175(L_29, /*hidden argument*/Component_GetComponent_TisWIFIToggleManager_t3203504582_m1906513175_RuntimeMethod_var);
		WIFIToggleManager_assignPictures_m3690339988(L_30, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_015d:
	{
		return (bool)0;
	}

IL_015f:
	{
		return (bool)1;
	}
}
// System.Object WIFINetworkManager/<reset>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CresetU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2848020748 (U3CresetU3Ec__Iterator0_t3593363922 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object WIFINetworkManager/<reset>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CresetU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m4092345490 (U3CresetU3Ec__Iterator0_t3593363922 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void WIFINetworkManager/<reset>c__Iterator0::Dispose()
extern "C"  void U3CresetU3Ec__Iterator0_Dispose_m1058958981 (U3CresetU3Ec__Iterator0_t3593363922 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void WIFINetworkManager/<reset>c__Iterator0::Reset()
extern "C"  void U3CresetU3Ec__Iterator0_Reset_m2791248715 (U3CresetU3Ec__Iterator0_t3593363922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CresetU3Ec__Iterator0_Reset_m2791248715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CresetU3Ec__Iterator0_Reset_m2791248715_RuntimeMethod_var);
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
// System.Void WIFINetworkManager/<setStoreName>c__Iterator2::.ctor()
extern "C"  void U3CsetStoreNameU3Ec__Iterator2__ctor_m2160374029 (U3CsetStoreNameU3Ec__Iterator2_t2546226351 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WIFINetworkManager/<setStoreName>c__Iterator2::MoveNext()
extern "C"  bool U3CsetStoreNameU3Ec__Iterator2_MoveNext_m1706329 (U3CsetStoreNameU3Ec__Iterator2_t2546226351 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CsetStoreNameU3Ec__Iterator2_MoveNext_m1706329_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00a9;
			}
			case 2:
			{
				goto IL_0130;
			}
		}
	}
	{
		goto IL_0196;
	}

IL_0025:
	{
		__this->set_U3CtimeU3E__0_0((0.0f));
		__this->set_U3CcounterU3E__0_1(0);
		WIFINetworkManager_t1080793997 * L_2 = __this->get_U24this_3();
		SpriteU5BU5D_t2581906349* L_3 = L_2->get_pics_3();
		int32_t L_4 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), /*hidden argument*/NULL);
		__this->set_U3CrandomU3E__0_2(L_4);
		goto IL_00da;
	}

IL_0055:
	{
		WIFINetworkManager_t1080793997 * L_5 = __this->get_U24this_3();
		Image_t2670269651 * L_6 = L_5->get_nameHolder_9();
		WIFINetworkManager_t1080793997 * L_7 = __this->get_U24this_3();
		SpriteU5BU5D_t2581906349* L_8 = L_7->get_pics_3();
		int32_t L_9 = __this->get_U3CcounterU3E__0_1();
		int32_t L_10 = L_9;
		Sprite_t280657092 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Image_set_sprite_m2369174689(L_6, L_11, /*hidden argument*/NULL);
		int32_t L_12 = __this->get_U3CcounterU3E__0_1();
		__this->set_U3CcounterU3E__0_1(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		WaitForSeconds_t1699091251 * L_13 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_13, (0.01f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_13);
		bool L_14 = __this->get_U24disposing_5();
		if (L_14)
		{
			goto IL_00a4;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_00a4:
	{
		goto IL_0198;
	}

IL_00a9:
	{
		float L_15 = __this->get_U3CtimeU3E__0_0();
		__this->set_U3CtimeU3E__0_0(((float)il2cpp_codegen_add((float)L_15, (float)(0.1f))));
		int32_t L_16 = __this->get_U3CcounterU3E__0_1();
		WIFINetworkManager_t1080793997 * L_17 = __this->get_U24this_3();
		SpriteU5BU5D_t2581906349* L_18 = L_17->get_pics_3();
		if ((!(((uint32_t)L_16) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length))))))))
		{
			goto IL_00da;
		}
	}
	{
		__this->set_U3CcounterU3E__0_1(0);
	}

IL_00da:
	{
		float L_19 = __this->get_U3CtimeU3E__0_0();
		if ((((float)L_19) < ((float)(3.0f))))
		{
			goto IL_0055;
		}
	}
	{
		WIFINetworkManager_t1080793997 * L_20 = __this->get_U24this_3();
		Image_t2670269651 * L_21 = L_20->get_nameHolder_9();
		WIFINetworkManager_t1080793997 * L_22 = __this->get_U24this_3();
		SpriteU5BU5D_t2581906349* L_23 = L_22->get_pics_3();
		int32_t L_24 = __this->get_U3CrandomU3E__0_2();
		int32_t L_25 = L_24;
		Sprite_t280657092 * L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		Image_set_sprite_m2369174689(L_21, L_26, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_27 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_27, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_27);
		bool L_28 = __this->get_U24disposing_5();
		if (L_28)
		{
			goto IL_012b;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_012b:
	{
		goto IL_0198;
	}

IL_0130:
	{
		WIFINetworkManager_t1080793997 * L_29 = __this->get_U24this_3();
		WIFINetworkManager_assignWifiNames_m1412370316(L_29, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_30 = __this->get_U24this_3();
		Animator_t434523843 * L_31 = L_30->get_button1_13();
		Animator_SetTrigger_m2134052629(L_31, _stringLiteral3902473660, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_32 = __this->get_U24this_3();
		Animator_t434523843 * L_33 = L_32->get_button2_14();
		Animator_SetTrigger_m2134052629(L_33, _stringLiteral3902473660, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_34 = __this->get_U24this_3();
		Animator_t434523843 * L_35 = L_34->get_button3_15();
		Animator_SetTrigger_m2134052629(L_35, _stringLiteral3902473660, /*hidden argument*/NULL);
		WIFINetworkManager_t1080793997 * L_36 = __this->get_U24this_3();
		Animator_t434523843 * L_37 = L_36->get_button4_16();
		Animator_SetTrigger_m2134052629(L_37, _stringLiteral3902473660, /*hidden argument*/NULL);
		__this->set_U24PC_6((-1));
	}

IL_0196:
	{
		return (bool)0;
	}

IL_0198:
	{
		return (bool)1;
	}
}
// System.Object WIFINetworkManager/<setStoreName>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CsetStoreNameU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4024915322 (U3CsetStoreNameU3Ec__Iterator2_t2546226351 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object WIFINetworkManager/<setStoreName>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CsetStoreNameU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m3183966371 (U3CsetStoreNameU3Ec__Iterator2_t2546226351 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void WIFINetworkManager/<setStoreName>c__Iterator2::Dispose()
extern "C"  void U3CsetStoreNameU3Ec__Iterator2_Dispose_m1881131498 (U3CsetStoreNameU3Ec__Iterator2_t2546226351 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void WIFINetworkManager/<setStoreName>c__Iterator2::Reset()
extern "C"  void U3CsetStoreNameU3Ec__Iterator2_Reset_m322904897 (U3CsetStoreNameU3Ec__Iterator2_t2546226351 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CsetStoreNameU3Ec__Iterator2_Reset_m322904897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CsetStoreNameU3Ec__Iterator2_Reset_m322904897_RuntimeMethod_var);
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
// System.Void WIFINetworkManager/<wrongGuessHint>c__Iterator3::.ctor()
extern "C"  void U3CwrongGuessHintU3Ec__Iterator3__ctor_m889198 (U3CwrongGuessHintU3Ec__Iterator3_t338836333 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WIFINetworkManager/<wrongGuessHint>c__Iterator3::MoveNext()
extern "C"  bool U3CwrongGuessHintU3Ec__Iterator3_MoveNext_m4121418976 (U3CwrongGuessHintU3Ec__Iterator3_t338836333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwrongGuessHintU3Ec__Iterator3_MoveNext_m4121418976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_007f;
			}
			case 2:
			{
				goto IL_00c4;
			}
			case 3:
			{
				goto IL_0109;
			}
		}
	}
	{
		goto IL_0131;
	}

IL_0029:
	{
		Image_t2670269651 * L_2 = __this->get_k_0();
		Color_t2555686324  L_3 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->set_U3CxU3E__0_1(L_3);
		Color_t2555686324 * L_4 = __this->get_address_of_U3CxU3E__0_1();
		L_4->set_a_3((0.0f));
		Image_t2670269651 * L_5 = __this->get_k_0();
		Color_t2555686324  L_6 = __this->get_U3CxU3E__0_1();
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		WaitForSeconds_t1699091251 * L_7 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_7, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_7);
		bool L_8 = __this->get_U24disposing_3();
		if (L_8)
		{
			goto IL_007a;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_007a:
	{
		goto IL_0133;
	}

IL_007f:
	{
		Color_t2555686324 * L_9 = __this->get_address_of_U3CxU3E__0_1();
		L_9->set_a_3((1.0f));
		Image_t2670269651 * L_10 = __this->get_k_0();
		Color_t2555686324  L_11 = __this->get_U3CxU3E__0_1();
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		WaitForSeconds_t1699091251 * L_12 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_12, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_12);
		bool L_13 = __this->get_U24disposing_3();
		if (L_13)
		{
			goto IL_00bf;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_00bf:
	{
		goto IL_0133;
	}

IL_00c4:
	{
		Color_t2555686324 * L_14 = __this->get_address_of_U3CxU3E__0_1();
		L_14->set_a_3((0.0f));
		Image_t2670269651 * L_15 = __this->get_k_0();
		Color_t2555686324  L_16 = __this->get_U3CxU3E__0_1();
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		WaitForSeconds_t1699091251 * L_17 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_17, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_17);
		bool L_18 = __this->get_U24disposing_3();
		if (L_18)
		{
			goto IL_0104;
		}
	}
	{
		__this->set_U24PC_4(3);
	}

IL_0104:
	{
		goto IL_0133;
	}

IL_0109:
	{
		Color_t2555686324 * L_19 = __this->get_address_of_U3CxU3E__0_1();
		L_19->set_a_3((1.0f));
		Image_t2670269651 * L_20 = __this->get_k_0();
		Color_t2555686324  L_21 = __this->get_U3CxU3E__0_1();
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
		__this->set_U24PC_4((-1));
	}

IL_0131:
	{
		return (bool)0;
	}

IL_0133:
	{
		return (bool)1;
	}
}
// System.Object WIFINetworkManager/<wrongGuessHint>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CwrongGuessHintU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3737675351 (U3CwrongGuessHintU3Ec__Iterator3_t338836333 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object WIFINetworkManager/<wrongGuessHint>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CwrongGuessHintU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m1583601040 (U3CwrongGuessHintU3Ec__Iterator3_t338836333 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void WIFINetworkManager/<wrongGuessHint>c__Iterator3::Dispose()
extern "C"  void U3CwrongGuessHintU3Ec__Iterator3_Dispose_m1067294088 (U3CwrongGuessHintU3Ec__Iterator3_t338836333 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void WIFINetworkManager/<wrongGuessHint>c__Iterator3::Reset()
extern "C"  void U3CwrongGuessHintU3Ec__Iterator3_Reset_m1732157802 (U3CwrongGuessHintU3Ec__Iterator3_t338836333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwrongGuessHintU3Ec__Iterator3_Reset_m1732157802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CwrongGuessHintU3Ec__Iterator3_Reset_m1732157802_RuntimeMethod_var);
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
// System.Void WIFIToggleManager::.ctor()
extern "C"  void WIFIToggleManager__ctor_m466244179 (WIFIToggleManager_t3203504582 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WIFIToggleManager::Awake()
extern "C"  void WIFIToggleManager_Awake_m271548787 (WIFIToggleManager_t3203504582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFIToggleManager_Awake_m271548787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		__this->set_origPos_5(((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)4)));
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_lockOrSignal_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_00be;
	}

IL_001a:
	{
		GameObjectU5BU5D_t3328599146* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = Random_Range_m4054026115(NULL /*static, unused*/, 1, ((int32_t)11), /*hidden argument*/NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) > ((int32_t)5)))
		{
			goto IL_0044;
		}
	}
	{
		GameObject_t1113636619 * L_7 = V_0;
		Image_t2670269651 * L_8 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_9 = __this->get_signal_4();
		Image_set_sprite_m2369174689(L_8, L_9, /*hidden argument*/NULL);
		goto IL_0055;
	}

IL_0044:
	{
		GameObject_t1113636619 * L_10 = V_0;
		Image_t2670269651 * L_11 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_12 = __this->get_locker_3();
		Image_set_sprite_m2369174689(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0055:
	{
		Vector3U5BU5D_t1718750761* L_13 = __this->get_origPos_5();
		int32_t L_14 = __this->get_count_7();
		GameObject_t1113636619 * L_15 = V_0;
		Transform_t3600365921 * L_16 = GameObject_get_transform_m1369836730(L_15, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		float L_18 = (&V_4)->get_x_1();
		GameObject_t1113636619 * L_19 = V_0;
		Transform_t3600365921 * L_20 = GameObject_get_transform_m1369836730(L_19, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		float L_22 = (&V_5)->get_y_2();
		GameObject_t1113636619 * L_23 = V_0;
		Transform_t3600365921 * L_24 = GameObject_get_transform_m1369836730(L_23, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Transform_get_position_m36019626(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		float L_26 = (&V_6)->get_z_3();
		Vector3_t3722313464  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m3353183577((&L_27), L_18, L_22, L_26, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14))) = L_27;
		int32_t L_28 = __this->get_count_7();
		__this->set_count_7(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00be:
	{
		int32_t L_30 = V_2;
		GameObjectU5BU5D_t3328599146* L_31 = V_1;
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		__this->set_count_7(0);
		return;
	}
}
// System.Void WIFIToggleManager::assignPictures()
extern "C"  void WIFIToggleManager_assignPictures_m3690339988 (WIFIToggleManager_t3203504582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFIToggleManager_assignPictures_m3690339988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		__this->set_count_7(0);
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_lockOrSignal_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_008f;
	}

IL_0015:
	{
		GameObjectU5BU5D_t3328599146* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = Random_Range_m4054026115(NULL /*static, unused*/, 1, ((int32_t)11), /*hidden argument*/NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) > ((int32_t)5)))
		{
			goto IL_003f;
		}
	}
	{
		GameObject_t1113636619 * L_7 = V_0;
		Image_t2670269651 * L_8 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_9 = __this->get_signal_4();
		Image_set_sprite_m2369174689(L_8, L_9, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_003f:
	{
		GameObject_t1113636619 * L_10 = V_0;
		Image_t2670269651 * L_11 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_12 = __this->get_locker_3();
		Image_set_sprite_m2369174689(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0050:
	{
		GameObject_t1113636619 * L_13 = V_0;
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_15 = __this->get_origPos_5();
		int32_t L_16 = __this->get_count_7();
		Transform_set_position_m3387557959(L_14, (*(Vector3_t3722313464 *)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_17 = V_0;
		Rigidbody2D_t939494601 * L_18 = GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013(L_17, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013_RuntimeMethod_var);
		Rigidbody2D_set_bodyType_m1814100804(L_18, 2, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_count_7();
		__this->set_count_7(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_008f:
	{
		int32_t L_21 = V_2;
		GameObjectU5BU5D_t3328599146* L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator WIFIToggleManager::enableRigidBody(System.Int32)
extern "C"  RuntimeObject* WIFIToggleManager_enableRigidBody_m1377820160 (WIFIToggleManager_t3203504582 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WIFIToggleManager_enableRigidBody_m1377820160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * V_0 = NULL;
	{
		U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * L_0 = (U3CenableRigidBodyU3Ec__Iterator0_t2874225266 *)il2cpp_codegen_object_new(U3CenableRigidBodyU3Ec__Iterator0_t2874225266_il2cpp_TypeInfo_var);
		U3CenableRigidBodyU3Ec__Iterator0__ctor_m3785979444(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * L_1 = V_0;
		int32_t L_2 = ___count0;
		L_1->set_count_0(L_2);
		U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * L_3 = V_0;
		L_3->set_U24this_1(__this);
		U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * L_4 = V_0;
		return L_4;
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
// System.Void WIFIToggleManager/<enableRigidBody>c__Iterator0::.ctor()
extern "C"  void U3CenableRigidBodyU3Ec__Iterator0__ctor_m3785979444 (U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WIFIToggleManager/<enableRigidBody>c__Iterator0::MoveNext()
extern "C"  bool U3CenableRigidBodyU3Ec__Iterator0_MoveNext_m1588595225 (U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CenableRigidBodyU3Ec__Iterator0_MoveNext_m1588595225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00b8;
			}
		}
	}
	{
		goto IL_013a;
	}

IL_0021:
	{
		WIFIToggleManager_t3203504582 * L_2 = __this->get_U24this_1();
		int32_t L_3 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		L_2->set_someValue_6(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2)), (int32_t)1)));
		WIFIToggleManager_t3203504582 * L_4 = __this->get_U24this_1();
		GameObjectU5BU5D_t3328599146* L_5 = L_4->get_lockOrSignal_2();
		int32_t L_6 = __this->get_count_0();
		int32_t L_7 = L_6;
		GameObject_t1113636619 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Rigidbody2D_t939494601 * L_9 = GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013(L_8, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013_RuntimeMethod_var);
		Rigidbody2D_set_bodyType_m1814100804(L_9, 0, /*hidden argument*/NULL);
		WIFIToggleManager_t3203504582 * L_10 = __this->get_U24this_1();
		GameObjectU5BU5D_t3328599146* L_11 = L_10->get_lockOrSignal_2();
		int32_t L_12 = __this->get_count_0();
		int32_t L_13 = L_12;
		GameObject_t1113636619 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Rigidbody2D_t939494601 * L_15 = GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013(L_14, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013_RuntimeMethod_var);
		WIFIToggleManager_t3203504582 * L_16 = __this->get_U24this_1();
		int32_t L_17 = L_16->get_someValue_6();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_18 = Convert_ToSingle_m3635698920(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m3353183577((&L_19), L_18, (1.0f), (-100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_20 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_15, L_20, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_21 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_21, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_21);
		bool L_22 = __this->get_U24disposing_3();
		if (L_22)
		{
			goto IL_00b3;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00b3:
	{
		goto IL_013c;
	}

IL_00b8:
	{
		WIFIToggleManager_t3203504582 * L_23 = __this->get_U24this_1();
		GameObjectU5BU5D_t3328599146* L_24 = L_23->get_lockOrSignal_2();
		int32_t L_25 = __this->get_count_0();
		int32_t L_26 = L_25;
		GameObject_t1113636619 * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		Transform_t3600365921 * L_28 = GameObject_get_transform_m1369836730(L_27, /*hidden argument*/NULL);
		WIFIToggleManager_t3203504582 * L_29 = __this->get_U24this_1();
		Vector3U5BU5D_t1718750761* L_30 = L_29->get_origPos_5();
		int32_t L_31 = __this->get_count_0();
		Transform_set_position_m3387557959(L_28, (*(Vector3_t3722313464 *)((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))), /*hidden argument*/NULL);
		WIFIToggleManager_t3203504582 * L_32 = __this->get_U24this_1();
		GameObjectU5BU5D_t3328599146* L_33 = L_32->get_lockOrSignal_2();
		int32_t L_34 = __this->get_count_0();
		int32_t L_35 = L_34;
		GameObject_t1113636619 * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		Image_t2670269651 * L_37 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_36, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		WIFIToggleManager_t3203504582 * L_38 = __this->get_U24this_1();
		Sprite_t280657092 * L_39 = L_38->get_blank_8();
		Image_set_sprite_m2369174689(L_37, L_39, /*hidden argument*/NULL);
		WIFIToggleManager_t3203504582 * L_40 = __this->get_U24this_1();
		GameObjectU5BU5D_t3328599146* L_41 = L_40->get_lockOrSignal_2();
		int32_t L_42 = __this->get_count_0();
		int32_t L_43 = L_42;
		GameObject_t1113636619 * L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		Rigidbody2D_t939494601 * L_45 = GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013(L_44, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013_RuntimeMethod_var);
		Rigidbody2D_set_bodyType_m1814100804(L_45, 2, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_013a:
	{
		return (bool)0;
	}

IL_013c:
	{
		return (bool)1;
	}
}
// System.Object WIFIToggleManager/<enableRigidBody>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CenableRigidBodyU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2444343037 (U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object WIFIToggleManager/<enableRigidBody>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CenableRigidBodyU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m4070589818 (U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void WIFIToggleManager/<enableRigidBody>c__Iterator0::Dispose()
extern "C"  void U3CenableRigidBodyU3Ec__Iterator0_Dispose_m1754933967 (U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void WIFIToggleManager/<enableRigidBody>c__Iterator0::Reset()
extern "C"  void U3CenableRigidBodyU3Ec__Iterator0_Reset_m2531681844 (U3CenableRigidBodyU3Ec__Iterator0_t2874225266 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CenableRigidBodyU3Ec__Iterator0_Reset_m2531681844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CenableRigidBodyU3Ec__Iterator0_Reset_m2531681844_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
