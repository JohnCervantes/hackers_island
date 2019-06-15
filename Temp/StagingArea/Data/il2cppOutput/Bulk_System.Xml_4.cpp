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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Xml.XmlNodeListChildren/Enumerator
struct Enumerator_t97922292;
// System.Xml.IHasXmlChildNode
struct IHasXmlChildNode_t2708887342;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1437094927;
// System.Xml.XmlNotation
struct XmlNotation_t1476580686;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t2837193595;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.XmlParserContext
struct XmlParserContext_t2544895291;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t418790500;
// System.Text.Encoding
struct Encoding_t1523322056;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3455035481;
// System.IO.TextReader
struct TextReader_t283511965;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1729680289;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Xml.XmlParserContext/ContextItem
struct ContextItem_t3112052795;
// System.Xml.XmlException
struct XmlException_t1761730631;
// System.Xml.XmlParserInput
struct XmlParserInput_t2182411204;
// System.Collections.Stack
struct Stack_t2329662280;
// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t3533005609;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t3796253422;
// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t1228162861;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t425688976;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t535375154;
// System.Xml.XmlReader
struct XmlReader_t3121518892;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1809665003;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t934654762;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2186285234;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.IO.StringWriter
struct StringWriter_t802263757;
// System.Xml.XmlTextWriter
struct XmlTextWriter_t2114213153;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t1703763694;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t266093086;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// System.Uri
struct Uri_t100236324;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t1052520128;
// System.Xml.XmlCharacterData
struct XmlCharacterData_t1167807131;
// System.Xml.XmlStreamReader
struct XmlStreamReader_t727818754;
// System.Xml.XmlInputStream
struct XmlInputStream_t1691369434;
// System.Xml.NonBlockingStreamReader
struct NonBlockingStreamReader_t2495303928;
// System.IO.Stream
struct Stream_t1273022909;
// System.Xml.XmlText
struct XmlText_t2682211705;
// System.Xml.XmlTextReader
struct XmlTextReader_t4233384356;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t2353988607;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t2690840144;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Xml.XmlWriter
struct XmlWriter_t127905479;
// System.Xml.XmlTextWriter/XmlNodeInfo
struct XmlNodeInfo_t4030693883;
// System.Text.UTF8Encoding
struct UTF8Encoding_t3956466879;
// System.Xml.NameTable
struct NameTable_t3178203267;
// System.Exception
struct Exception_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t817895037;
// System.Type
struct Type_t;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.Net.WebRequest
struct WebRequest_t1939381076;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t1719295192;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t3946379043;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3610399789;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// Mono.Xml.Schema.XsdValidatingReader
struct XsdValidatingReader_t3961132625;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t791314227;
// System.Delegate
struct Delegate_t1188392813;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t2784773869;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3511258692;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t131741354;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t2877834729;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3530625384;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t2958275022;
// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t1050190167;
// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t465590953;
// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t3633486160;
// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t1406553220;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t222313714;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t2220366188;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t2844734410;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t2250844513;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t959292105;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t139615908;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t1082692789;
// System.Xml.XmlNamespaceManager/NsDecl[]
struct NsDeclU5BU5D_t2116608150;
// System.Xml.XmlNamespaceManager/NsScope[]
struct NsScopeU5BU5D_t382374428;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Net.ICredentials
struct ICredentials_t725721261;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Xml.XmlImplementation
struct XmlImplementation_t254178875;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2890546907;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1533444722;
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_t491982174;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t1267732406;
// Mono.Xml.DTDValidatingReader/AttributeSlot[]
struct AttributeSlotU5BU5D_t600906362;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t781538777;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1315720168;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t2546974348;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t2218765537;
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_t431163322;
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t2519673037;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
struct XmlAttributeTokenInfo_t384315108;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[]
struct XmlAttributeTokenInfoU5BU5D_t1089758477;
// Mono.Xml2.XmlTextReader/XmlTokenInfo[]
struct XmlTokenInfoU5BU5D_t2522587488;
// Mono.Xml2.XmlTextReader/TagName[]
struct TagNameU5BU5D_t2055670886;
// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct DtdInputStateStack_t339956957;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t74872415;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t4070033136;
// System.Net.IWebProxy
struct IWebProxy_t688979836;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t346244693;
// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t1008806102;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t726654767;

extern RuntimeClass* IHasXmlChildNode_t2708887342_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerator_get_Current_m1556743441_RuntimeMethod_var;
extern const uint32_t Enumerator_get_Current_m1556743441_MetadataUsageId;
extern const uint32_t Enumerator_MoveNext_m3130128147_MetadataUsageId;
extern RuntimeClass* XmlNode_t3767805227_il2cpp_TypeInfo_var;
extern const uint32_t XmlNotation__ctor_m1743872963_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614550;
extern const uint32_t XmlNotation_get_Name_m3496767814_MetadataUsageId;
extern const RuntimeMethod* XmlNotation_CloneNode_m141780236_RuntimeMethod_var;
extern String_t* _stringLiteral3117374684;
extern const uint32_t XmlNotation_CloneNode_m141780236_MetadataUsageId;
extern RuntimeClass* TextReader_t283511965_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextReader_t3455035481_il2cpp_TypeInfo_var;
extern const uint32_t XmlParserContext__ctor_m1245162613_MetadataUsageId;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern const uint32_t XmlParserContext__ctor_m2145142613_MetadataUsageId;
extern const uint32_t XmlParserContext_set_BaseURI_m3915640945_MetadataUsageId;
extern const uint32_t XmlParserContext_set_DocTypeName_m1738723375_MetadataUsageId;
extern const uint32_t XmlParserContext_set_InternalSubset_m2419608887_MetadataUsageId;
extern const uint32_t XmlParserContext_set_PublicId_m3531550524_MetadataUsageId;
extern const uint32_t XmlParserContext_set_SystemId_m2348109559_MetadataUsageId;
extern const uint32_t XmlParserContext_set_XmlLang_m1868304449_MetadataUsageId;
extern RuntimeClass* ContextItem_t3112052795_il2cpp_TypeInfo_var;
extern const uint32_t XmlParserContext_PushScope_m4047975352_MetadataUsageId;
extern RuntimeClass* XmlException_t1761730631_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlParserContext_PopScope_m4042017474_RuntimeMethod_var;
extern String_t* _stringLiteral1518790419;
extern const uint32_t XmlParserContext_PopScope_m4042017474_MetadataUsageId;
extern RuntimeClass* Stack_t2329662280_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlParserInputSource_t3533005609_il2cpp_TypeInfo_var;
extern const uint32_t XmlParserInput__ctor_m323061724_MetadataUsageId;
extern const uint32_t XmlParserInput_Close_m3748074016_MetadataUsageId;
extern RuntimeClass* StringReader_t3465604688_il2cpp_TypeInfo_var;
extern const uint32_t XmlParserInput_PushPEBuffer_m2114889766_MetadataUsageId;
extern const uint32_t XmlParserInput_ReadSourceChar_m479227790_MetadataUsageId;
extern RuntimeClass* XmlConvert_t1981561327_il2cpp_TypeInfo_var;
extern const uint32_t XmlProcessingInstruction__ctor_m3762799159_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlProcessingInstruction_set_Value_m567587449_RuntimeMethod_var;
extern String_t* _stringLiteral272001162;
extern const uint32_t XmlProcessingInstruction_set_Value_m567587449_MetadataUsageId;
extern RuntimeClass* XmlProcessingInstruction_t425688976_il2cpp_TypeInfo_var;
extern const uint32_t XmlProcessingInstruction_CloneNode_m1738034480_MetadataUsageId;
extern const uint32_t XmlQualifiedName__ctor_m1240160807_MetadataUsageId;
extern const uint32_t XmlQualifiedName__ctor_m270143366_MetadataUsageId;
extern const uint32_t XmlQualifiedName__ctor_m835061046_MetadataUsageId;
extern RuntimeClass* XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var;
extern const uint32_t XmlQualifiedName__cctor_m2817193852_MetadataUsageId;
extern const uint32_t XmlQualifiedName_Equals_m4044727681_MetadataUsageId;
extern const uint32_t XmlQualifiedName_ToString_m3581571648_MetadataUsageId;
extern RuntimeClass* IXmlNamespaceResolver_t535375154_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlQualifiedName_Parse_m1094507201_RuntimeMethod_var;
extern String_t* _stringLiteral2645001532;
extern const uint32_t XmlQualifiedName_Parse_m1094507201_MetadataUsageId;
extern const RuntimeMethod* XmlQualifiedName_Parse_m1187782343_RuntimeMethod_var;
extern const uint32_t XmlQualifiedName_Parse_m1187782343_MetadataUsageId;
extern const uint32_t XmlQualifiedName_op_Equality_m1684199236_MetadataUsageId;
extern const uint32_t XmlQualifiedName_op_Inequality_m3449274916_MetadataUsageId;
extern const uint32_t XmlReader_get_Name_m733252909_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlReader_MoveToAttribute_m673667036_RuntimeMethod_var;
extern const uint32_t XmlReader_MoveToAttribute_m673667036_MetadataUsageId;
extern RuntimeClass* StringWriter_t802263757_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextWriter_t2114213153_il2cpp_TypeInfo_var;
extern const uint32_t XmlReader_ReadOuterXml_m27436192_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const uint32_t CharGetter_BeginInvoke_m1792834121_MetadataUsageId;
extern RuntimeClass* XmlSchemaSet_t266093086_il2cpp_TypeInfo_var;
extern const uint32_t XmlReaderSettings_get_Schemas_m1700956566_MetadataUsageId;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlResolver_ResolveUri_m3051172150_RuntimeMethod_var;
extern String_t* _stringLiteral2467068554;
extern String_t* _stringLiteral1973861598;
extern String_t* _stringLiteral1976352021;
extern String_t* _stringLiteral2612015252;
extern String_t* _stringLiteral452222980;
extern const uint32_t XmlResolver_ResolveUri_m3051172150_MetadataUsageId;
extern String_t* _stringLiteral3452614548;
extern String_t* _stringLiteral3403826294;
extern String_t* _stringLiteral3452614546;
extern String_t* _stringLiteral271658412;
extern String_t* _stringLiteral3452614525;
extern String_t* _stringLiteral2671228134;
extern String_t* _stringLiteral3452614523;
extern String_t* _stringLiteral3834027548;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral4237312075;
extern const uint32_t XmlResolver_EscapeRelativeUriBody_m3919279314_MetadataUsageId;
extern String_t* _stringLiteral1556661878;
extern const uint32_t XmlSignificantWhitespace_get_LocalName_m4159671614_MetadataUsageId;
extern const uint32_t XmlSignificantWhitespace_get_Name_m1975580024_MetadataUsageId;
extern RuntimeClass* XmlChar_t3816087079_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlSignificantWhitespace_set_Value_m2869339402_RuntimeMethod_var;
extern String_t* _stringLiteral3922471879;
extern const uint32_t XmlSignificantWhitespace_set_Value_m2869339402_MetadataUsageId;
extern RuntimeClass* XmlSignificantWhitespace_t1052520128_il2cpp_TypeInfo_var;
extern const uint32_t XmlSignificantWhitespace_CloneNode_m1103115458_MetadataUsageId;
extern RuntimeClass* XmlInputStream_t1691369434_il2cpp_TypeInfo_var;
extern const uint32_t XmlStreamReader__ctor_m3688274484_MetadataUsageId;
extern const uint32_t XmlStreamReader__ctor_m3403779607_MetadataUsageId;
extern RuntimeClass* XmlStreamReader_t727818754_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral152590758;
extern const uint32_t XmlStreamReader__cctor_m3453438400_MetadataUsageId;
extern const RuntimeMethod* XmlStreamReader_Read_m1535597101_RuntimeMethod_var;
extern const uint32_t XmlStreamReader_Read_m1535597101_MetadataUsageId;
extern String_t* _stringLiteral2649583896;
extern const uint32_t XmlText_get_LocalName_m3191567904_MetadataUsageId;
extern const uint32_t XmlText_get_Name_m2818861068_MetadataUsageId;
extern const uint32_t XmlTextReader__ctor_m1872711927_MetadataUsageId;
extern const uint32_t XmlTextReader__ctor_m2920712854_MetadataUsageId;
extern const uint32_t XmlTextReader__ctor_m2025294095_MetadataUsageId;
extern const uint32_t XmlTextReader__ctor_m873020869_MetadataUsageId;
extern RuntimeClass* IHasXmlParserContext_t1330489402_il2cpp_TypeInfo_var;
extern const uint32_t XmlTextReader_get_ParserContext_m2090305018_MetadataUsageId;
extern RuntimeClass* Stack_1_t2690840144_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextReader_t4233384356_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlTextReader_ResolveEntity_m1104020615_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1__ctor_m936691270_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Contains_m1213713845_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m570958490_RuntimeMethod_var;
extern String_t* _stringLiteral899481384;
extern String_t* _stringLiteral2705683803;
extern String_t* _stringLiteral3575895782;
extern const uint32_t XmlTextReader_ResolveEntity_m1104020615_MetadataUsageId;
extern const RuntimeMethod* Stack_1_Pop_m2585401118_RuntimeMethod_var;
extern const uint32_t XmlTextReader_CloseEntity_m366351831_MetadataUsageId;
extern const uint32_t XmlTextReader_GetRemainder_m3491863577_MetadataUsageId;
extern RuntimeClass* XmlNodeInfoU5BU5D_t431163322_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlTextWriter__ctor_m1850551870_RuntimeMethod_var;
extern String_t* _stringLiteral3450517376;
extern String_t* _stringLiteral1980498921;
extern const uint32_t XmlTextWriter__ctor_m1850551870_MetadataUsageId;
extern RuntimeClass* UTF8Encoding_t3956466879_il2cpp_TypeInfo_var;
extern const uint32_t XmlTextWriter__cctor_m1817862492_MetadataUsageId;
extern RuntimeClass* NameTable_t3178203267_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamWriter_t1266378904_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNamespaceManager_t418790500_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlTextWriter_Initialize_m3279439671_RuntimeMethod_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D43_6_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D44_7_FieldInfo_var;
extern const uint32_t XmlTextWriter_Initialize_m3279439671_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_LookupPrefix_m1332716567_RuntimeMethod_var;
extern String_t* _stringLiteral654685373;
extern const uint32_t XmlTextWriter_LookupPrefix_m1332716567_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_WriteStartDocumentCore_m3985718073_RuntimeMethod_var;
extern String_t* _stringLiteral1924938561;
extern String_t* _stringLiteral553656983;
extern String_t* _stringLiteral950831942;
extern String_t* _stringLiteral3073726249;
extern String_t* _stringLiteral3906513894;
extern String_t* _stringLiteral2960723134;
extern String_t* _stringLiteral4119301762;
extern String_t* _stringLiteral3454777282;
extern String_t* _stringLiteral3451697041;
extern const uint32_t XmlTextWriter_WriteStartDocumentCore_m3985718073_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_WriteDocType_m3875009899_RuntimeMethod_var;
extern String_t* _stringLiteral62725243;
extern String_t* _stringLiteral2588054203;
extern String_t* _stringLiteral3664297627;
extern String_t* _stringLiteral4026494280;
extern String_t* _stringLiteral2551850054;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3452614643;
extern const uint32_t XmlTextWriter_WriteDocType_m3875009899_MetadataUsageId;
extern RuntimeClass* XmlNodeInfo_t4030693883_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlTextWriter_WriteStartElement_m362096410_RuntimeMethod_var;
extern String_t* _stringLiteral885171343;
extern String_t* _stringLiteral3884394238;
extern String_t* _stringLiteral4155493995;
extern String_t* _stringLiteral1065548103;
extern String_t* _stringLiteral2984480440;
extern String_t* _stringLiteral3156561689;
extern const uint32_t XmlTextWriter_WriteStartElement_m362096410_MetadataUsageId;
extern String_t* _stringLiteral3073361429;
extern String_t* _stringLiteral2787691749;
extern const uint32_t XmlTextWriter_CloseStartElementCore_m1099456942_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_WriteEndElementCore_m4151593863_RuntimeMethod_var;
extern String_t* _stringLiteral3333968179;
extern String_t* _stringLiteral3986749280;
extern String_t* _stringLiteral1910861284;
extern String_t* _stringLiteral3450582932;
extern const uint32_t XmlTextWriter_WriteEndElementCore_m4151593863_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_WriteStartAttribute_m796971626_RuntimeMethod_var;
extern String_t* _stringLiteral4158462482;
extern String_t* _stringLiteral2829469855;
extern String_t* _stringLiteral3929236445;
extern String_t* _stringLiteral2909972470;
extern String_t* _stringLiteral3406152438;
extern const uint32_t XmlTextWriter_WriteStartAttribute_m796971626_MetadataUsageId;
extern const uint32_t XmlTextWriter_DetermineAttributePrefix_m2990155447_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* StringUtil_t564231417_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3967258293;
extern const uint32_t XmlTextWriter_MockupPrefix_m1608841972_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2736202052_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlTextWriter_WriteEndAttribute_m380495009_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2392909825_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m282647386_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var;
extern String_t* _stringLiteral1135920161;
extern String_t* _stringLiteral1168662249;
extern String_t* _stringLiteral2919775337;
extern String_t* _stringLiteral2409271576;
extern String_t* _stringLiteral1613539661;
extern String_t* _stringLiteral1948332219;
extern String_t* _stringLiteral3137061838;
extern String_t* _stringLiteral162476857;
extern const uint32_t XmlTextWriter_WriteEndAttribute_m380495009_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_WriteComment_m3551275356_RuntimeMethod_var;
extern String_t* _stringLiteral3987835854;
extern String_t* _stringLiteral4015390292;
extern String_t* _stringLiteral3450713987;
extern String_t* _stringLiteral4102181145;
extern String_t* _stringLiteral3796264707;
extern String_t* _stringLiteral792871693;
extern String_t* _stringLiteral1910992359;
extern const uint32_t XmlTextWriter_WriteComment_m3551275356_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_WriteProcessingInstruction_m1814082884_RuntimeMethod_var;
extern String_t* _stringLiteral690829814;
extern String_t* _stringLiteral4143504235;
extern String_t* _stringLiteral3127550563;
extern String_t* _stringLiteral3451631508;
extern const uint32_t XmlTextWriter_WriteProcessingInstruction_m1814082884_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_WriteWhitespace_m1664061271_RuntimeMethod_var;
extern String_t* _stringLiteral247049230;
extern String_t* _stringLiteral1557367511;
extern const uint32_t XmlTextWriter_WriteWhitespace_m1664061271_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_WriteCData_m644505252_RuntimeMethod_var;
extern String_t* _stringLiteral2359536473;
extern String_t* _stringLiteral1918332503;
extern String_t* _stringLiteral2919660641;
extern String_t* _stringLiteral191191352;
extern const uint32_t XmlTextWriter_WriteCData_m644505252_MetadataUsageId;
extern String_t* _stringLiteral3987835886;
extern const uint32_t XmlTextWriter_WriteString_m406191177_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_WriteEntityRef_m586114214_RuntimeMethod_var;
extern String_t* _stringLiteral4206759088;
extern String_t* _stringLiteral4078869393;
extern const uint32_t XmlTextWriter_WriteEntityRef_m586114214_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_ShiftStateTopLevel_m3589898271_RuntimeMethod_var;
extern const uint32_t XmlTextWriter_ShiftStateTopLevel_m3589898271_MetadataUsageId;
extern const RuntimeMethod* XmlTextWriter_ShiftStateContent_m1491671115_RuntimeMethod_var;
extern const uint32_t XmlTextWriter_ShiftStateContent_m1491671115_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteEscapedString_m3514294598_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteCheckedString_m2937191976_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlTextWriter_WriteCheckedBuffer_m275259173_RuntimeMethod_var;
extern String_t* _stringLiteral3560330814;
extern String_t* _stringLiteral4162292604;
extern String_t* _stringLiteral3452614648;
extern const uint32_t XmlTextWriter_WriteCheckedBuffer_m275259173_MetadataUsageId;
extern String_t* _stringLiteral272773273;
extern String_t* _stringLiteral2319061079;
extern String_t* _stringLiteral2319061068;
extern String_t* _stringLiteral3509435951;
extern String_t* _stringLiteral1159970975;
extern String_t* _stringLiteral1415199655;
extern String_t* _stringLiteral4136188839;
extern const uint32_t XmlTextWriter_WriteEscapedBuffer_m903990798_MetadataUsageId;
extern const uint32_t XmlTextWriter_ArgumentError_m3627124320_MetadataUsageId;
extern const uint32_t XmlTextWriter_InvalidOperation_m988191293_MetadataUsageId;
extern RuntimeClass* WriteState_t3983380671_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral592849640;
extern const uint32_t XmlTextWriter_StateError_m571999665_MetadataUsageId;
extern const uint32_t StringUtil__cctor_m1463895374_MetadataUsageId;
extern const uint32_t StringUtil_IndexOf_m1748403443_MetadataUsageId;
extern const uint32_t StringUtil_Format_m4156193709_MetadataUsageId;
extern const RuntimeType* Stream_t1273022909_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FileStream_t4292183065_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequest_t1939381076_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlUrlResolver_GetEntity_m2245402732_RuntimeMethod_var;
extern String_t* _stringLiteral109070372;
extern String_t* _stringLiteral3264822601;
extern String_t* _stringLiteral1705633010;
extern String_t* _stringLiteral1629333464;
extern const uint32_t XmlUrlResolver_GetEntity_m2245402732_MetadataUsageId;
extern String_t* _stringLiteral3074512661;
extern String_t* _stringLiteral3452614528;
extern const uint32_t XmlUrlResolver_UnescapeRelativeUriBody_m2976662118_MetadataUsageId;
extern RuntimeClass* XmlUrlResolver_t817895037_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t XmlValidatingReader__ctor_m746074126_MetadataUsageId;
extern const uint32_t XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m2551608519_MetadataUsageId;
extern RuntimeClass* IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var;
extern const uint32_t XmlValidatingReader_get_LineNumber_m4160044902_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_LinePosition_m2821670432_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_LocalName_m3935686416_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_Name_m2521889568_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_NamespaceURI_m606176985_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_Prefix_m754810542_MetadataUsageId;
extern RuntimeClass* XmlSchemaCollection_t3610399789_il2cpp_TypeInfo_var;
extern const uint32_t XmlValidatingReader_get_Schemas_m1542506967_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlValidatingReader_set_ValidationType_m3850545770_RuntimeMethod_var;
extern String_t* _stringLiteral224365628;
extern const uint32_t XmlValidatingReader_set_ValidationType_m3850545770_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_Value_m2511111829_MetadataUsageId;
extern const uint32_t XmlValidatingReader_HasLineInfo_m870518869_MetadataUsageId;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlValidatingReader_MoveToAttribute_m565086185_RuntimeMethod_var;
extern String_t* _stringLiteral349273836;
extern const uint32_t XmlValidatingReader_MoveToAttribute_m565086185_MetadataUsageId;
extern RuntimeClass* DTDValidatingReader_t3946379043_il2cpp_TypeInfo_var;
extern RuntimeClass* XsdValidatingReader_t3961132625_il2cpp_TypeInfo_var;
extern RuntimeClass* ValidationEventHandler_t791314227_il2cpp_TypeInfo_var;
extern RuntimeClass* IHasXmlSchemaInfo_t74872415_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlValidatingReader_OnValidationEvent_m367061793_RuntimeMethod_var;
extern const RuntimeMethod* XmlValidatingReader_Read_m3555356476_RuntimeMethod_var;
extern const uint32_t XmlValidatingReader_Read_m3555356476_MetadataUsageId;
extern const uint32_t XmlValidatingReader_OnValidationEvent_m367061793_MetadataUsageId;
extern String_t* _stringLiteral1653520728;
extern const uint32_t XmlWhitespace_get_LocalName_m4124641324_MetadataUsageId;
extern const uint32_t XmlWhitespace_get_Name_m3062444240_MetadataUsageId;
extern const RuntimeMethod* XmlWhitespace_set_Value_m1380309567_RuntimeMethod_var;
extern const uint32_t XmlWhitespace_set_Value_m1380309567_MetadataUsageId;
extern RuntimeClass* XmlWhitespace_t131741354_il2cpp_TypeInfo_var;
extern const uint32_t XmlWhitespace_CloneNode_m2585972626_MetadataUsageId;
extern RuntimeClass* XmlNodeType_t1672767151_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlWriter_WriteNode_m263666930_RuntimeMethod_var;
extern String_t* _stringLiteral3984887517;
extern String_t* _stringLiteral3261774195;
extern String_t* _stringLiteral1152083996;
extern String_t* _stringLiteral3442940761;
extern const uint32_t XmlWriter_WriteNode_m263666930_MetadataUsageId;

struct CharU5BU5D_t3528271667;
struct XmlNodeInfoU5BU5D_t431163322;
struct ObjectU5BU5D_t2843939325;


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
#ifndef XMLWRITER_T127905479_H
#define XMLWRITER_T127905479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_t127905479  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITER_T127905479_H
#ifndef XMLRESOLVER_T626023767_H
#define XMLRESOLVER_T626023767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlResolver
struct  XmlResolver_t626023767  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLRESOLVER_T626023767_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_30;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_parser_30() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_30)); }
	inline UriParser_t3890150400 * get_parser_30() const { return ___parser_30; }
	inline UriParser_t3890150400 ** get_address_of_parser_30() { return &___parser_30; }
	inline void set_parser_30(UriParser_t3890150400 * value)
	{
		___parser_30 = value;
		Il2CppCodeGenWriteBarrier((&___parser_30), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_35;

public:
	inline static int32_t get_offset_of_hexUpperChars_17() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_17)); }
	inline String_t* get_hexUpperChars_17() const { return ___hexUpperChars_17; }
	inline String_t** get_address_of_hexUpperChars_17() { return &___hexUpperChars_17; }
	inline void set_hexUpperChars_17(String_t* value)
	{
		___hexUpperChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_17), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_18() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_18)); }
	inline String_t* get_SchemeDelimiter_18() const { return ___SchemeDelimiter_18; }
	inline String_t** get_address_of_SchemeDelimiter_18() { return &___SchemeDelimiter_18; }
	inline void set_SchemeDelimiter_18(String_t* value)
	{
		___SchemeDelimiter_18 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_19)); }
	inline String_t* get_UriSchemeFile_19() const { return ___UriSchemeFile_19; }
	inline String_t** get_address_of_UriSchemeFile_19() { return &___UriSchemeFile_19; }
	inline void set_UriSchemeFile_19(String_t* value)
	{
		___UriSchemeFile_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_20)); }
	inline String_t* get_UriSchemeFtp_20() const { return ___UriSchemeFtp_20; }
	inline String_t** get_address_of_UriSchemeFtp_20() { return &___UriSchemeFtp_20; }
	inline void set_UriSchemeFtp_20(String_t* value)
	{
		___UriSchemeFtp_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_21)); }
	inline String_t* get_UriSchemeGopher_21() const { return ___UriSchemeGopher_21; }
	inline String_t** get_address_of_UriSchemeGopher_21() { return &___UriSchemeGopher_21; }
	inline void set_UriSchemeGopher_21(String_t* value)
	{
		___UriSchemeGopher_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_22)); }
	inline String_t* get_UriSchemeHttp_22() const { return ___UriSchemeHttp_22; }
	inline String_t** get_address_of_UriSchemeHttp_22() { return &___UriSchemeHttp_22; }
	inline void set_UriSchemeHttp_22(String_t* value)
	{
		___UriSchemeHttp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_23)); }
	inline String_t* get_UriSchemeHttps_23() const { return ___UriSchemeHttps_23; }
	inline String_t** get_address_of_UriSchemeHttps_23() { return &___UriSchemeHttps_23; }
	inline void set_UriSchemeHttps_23(String_t* value)
	{
		___UriSchemeHttps_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_24)); }
	inline String_t* get_UriSchemeMailto_24() const { return ___UriSchemeMailto_24; }
	inline String_t** get_address_of_UriSchemeMailto_24() { return &___UriSchemeMailto_24; }
	inline void set_UriSchemeMailto_24(String_t* value)
	{
		___UriSchemeMailto_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_25)); }
	inline String_t* get_UriSchemeNews_25() const { return ___UriSchemeNews_25; }
	inline String_t** get_address_of_UriSchemeNews_25() { return &___UriSchemeNews_25; }
	inline void set_UriSchemeNews_25(String_t* value)
	{
		___UriSchemeNews_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_26)); }
	inline String_t* get_UriSchemeNntp_26() const { return ___UriSchemeNntp_26; }
	inline String_t** get_address_of_UriSchemeNntp_26() { return &___UriSchemeNntp_26; }
	inline void set_UriSchemeNntp_26(String_t* value)
	{
		___UriSchemeNntp_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_27)); }
	inline String_t* get_UriSchemeNetPipe_27() const { return ___UriSchemeNetPipe_27; }
	inline String_t** get_address_of_UriSchemeNetPipe_27() { return &___UriSchemeNetPipe_27; }
	inline void set_UriSchemeNetPipe_27(String_t* value)
	{
		___UriSchemeNetPipe_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_28)); }
	inline String_t* get_UriSchemeNetTcp_28() const { return ___UriSchemeNetTcp_28; }
	inline String_t** get_address_of_UriSchemeNetTcp_28() { return &___UriSchemeNetTcp_28; }
	inline void set_UriSchemeNetTcp_28(String_t* value)
	{
		___UriSchemeNetTcp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_28), value);
	}

	inline static int32_t get_offset_of_schemes_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_29)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_29() const { return ___schemes_29; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_29() { return &___schemes_29; }
	inline void set_schemes_29(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_29 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_31() const { return ___U3CU3Ef__switchU24map12_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_31() { return &___U3CU3Ef__switchU24map12_31; }
	inline void set_U3CU3Ef__switchU24map12_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_32() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_32() const { return ___U3CU3Ef__switchU24map13_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_32() { return &___U3CU3Ef__switchU24map13_32; }
	inline void set_U3CU3Ef__switchU24map13_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_33() const { return ___U3CU3Ef__switchU24map14_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_33() { return &___U3CU3Ef__switchU24map14_33; }
	inline void set_U3CU3Ef__switchU24map14_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_34() const { return ___U3CU3Ef__switchU24map15_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_34() { return &___U3CU3Ef__switchU24map15_34; }
	inline void set_U3CU3Ef__switchU24map15_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_35() const { return ___U3CU3Ef__switchU24map16_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_35() { return &___U3CU3Ef__switchU24map16_35; }
	inline void set_U3CU3Ef__switchU24map16_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_2)); }
	inline TextWriter_t3478189236 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t3478189236 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t3478189236 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef STACK_T2329662280_H
#define STACK_T2329662280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t2329662280  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t2843939325* ___contents_0;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_1;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_4;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___contents_0)); }
	inline ObjectU5BU5D_t2843939325* get_contents_0() const { return ___contents_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(ObjectU5BU5D_t2843939325* value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_modCount_4() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___modCount_4)); }
	inline int32_t get_modCount_4() const { return ___modCount_4; }
	inline int32_t* get_address_of_modCount_4() { return &___modCount_4; }
	inline void set_modCount_4(int32_t value)
	{
		___modCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T2329662280_H
#ifndef XMLPARSERINPUT_T2182411204_H
#define XMLPARSERINPUT_T2182411204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlParserInput
struct  XmlParserInput_t2182411204  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Xml.XmlParserInput::sourceStack
	Stack_t2329662280 * ___sourceStack_0;
	// System.Xml.XmlParserInput/XmlParserInputSource System.Xml.XmlParserInput::source
	XmlParserInputSource_t3533005609 * ___source_1;
	// System.Boolean System.Xml.XmlParserInput::has_peek
	bool ___has_peek_2;
	// System.Int32 System.Xml.XmlParserInput::peek_char
	int32_t ___peek_char_3;
	// System.Boolean System.Xml.XmlParserInput::allowTextDecl
	bool ___allowTextDecl_4;

public:
	inline static int32_t get_offset_of_sourceStack_0() { return static_cast<int32_t>(offsetof(XmlParserInput_t2182411204, ___sourceStack_0)); }
	inline Stack_t2329662280 * get_sourceStack_0() const { return ___sourceStack_0; }
	inline Stack_t2329662280 ** get_address_of_sourceStack_0() { return &___sourceStack_0; }
	inline void set_sourceStack_0(Stack_t2329662280 * value)
	{
		___sourceStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___sourceStack_0), value);
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(XmlParserInput_t2182411204, ___source_1)); }
	inline XmlParserInputSource_t3533005609 * get_source_1() const { return ___source_1; }
	inline XmlParserInputSource_t3533005609 ** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(XmlParserInputSource_t3533005609 * value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_has_peek_2() { return static_cast<int32_t>(offsetof(XmlParserInput_t2182411204, ___has_peek_2)); }
	inline bool get_has_peek_2() const { return ___has_peek_2; }
	inline bool* get_address_of_has_peek_2() { return &___has_peek_2; }
	inline void set_has_peek_2(bool value)
	{
		___has_peek_2 = value;
	}

	inline static int32_t get_offset_of_peek_char_3() { return static_cast<int32_t>(offsetof(XmlParserInput_t2182411204, ___peek_char_3)); }
	inline int32_t get_peek_char_3() const { return ___peek_char_3; }
	inline int32_t* get_address_of_peek_char_3() { return &___peek_char_3; }
	inline void set_peek_char_3(int32_t value)
	{
		___peek_char_3 = value;
	}

	inline static int32_t get_offset_of_allowTextDecl_4() { return static_cast<int32_t>(offsetof(XmlParserInput_t2182411204, ___allowTextDecl_4)); }
	inline bool get_allowTextDecl_4() const { return ___allowTextDecl_4; }
	inline bool* get_address_of_allowTextDecl_4() { return &___allowTextDecl_4; }
	inline void set_allowTextDecl_4(bool value)
	{
		___allowTextDecl_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPARSERINPUT_T2182411204_H
#ifndef XMLPARSERINPUTSOURCE_T3533005609_H
#define XMLPARSERINPUTSOURCE_T3533005609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlParserInput/XmlParserInputSource
struct  XmlParserInputSource_t3533005609  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlParserInput/XmlParserInputSource::BaseURI
	String_t* ___BaseURI_0;
	// System.IO.TextReader System.Xml.XmlParserInput/XmlParserInputSource::reader
	TextReader_t283511965 * ___reader_1;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::state
	int32_t ___state_2;
	// System.Boolean System.Xml.XmlParserInput/XmlParserInputSource::isPE
	bool ___isPE_3;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::line
	int32_t ___line_4;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::column
	int32_t ___column_5;

public:
	inline static int32_t get_offset_of_BaseURI_0() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t3533005609, ___BaseURI_0)); }
	inline String_t* get_BaseURI_0() const { return ___BaseURI_0; }
	inline String_t** get_address_of_BaseURI_0() { return &___BaseURI_0; }
	inline void set_BaseURI_0(String_t* value)
	{
		___BaseURI_0 = value;
		Il2CppCodeGenWriteBarrier((&___BaseURI_0), value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t3533005609, ___reader_1)); }
	inline TextReader_t283511965 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t283511965 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t283511965 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier((&___reader_1), value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t3533005609, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_isPE_3() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t3533005609, ___isPE_3)); }
	inline bool get_isPE_3() const { return ___isPE_3; }
	inline bool* get_address_of_isPE_3() { return &___isPE_3; }
	inline void set_isPE_3(bool value)
	{
		___isPE_3 = value;
	}

	inline static int32_t get_offset_of_line_4() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t3533005609, ___line_4)); }
	inline int32_t get_line_4() const { return ___line_4; }
	inline int32_t* get_address_of_line_4() { return &___line_4; }
	inline void set_line_4(int32_t value)
	{
		___line_4 = value;
	}

	inline static int32_t get_offset_of_column_5() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t3533005609, ___column_5)); }
	inline int32_t get_column_5() const { return ___column_5; }
	inline int32_t* get_address_of_column_5() { return &___column_5; }
	inline void set_column_5(int32_t value)
	{
		___column_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPARSERINPUTSOURCE_T3533005609_H
#ifndef XMLREADER_T3121518892_H
#define XMLREADER_T3121518892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_t3121518892  : public RuntimeObject
{
public:
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_t1809665003 * ___binary_0;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_t2186285234 * ___settings_1;

public:
	inline static int32_t get_offset_of_binary_0() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___binary_0)); }
	inline XmlReaderBinarySupport_t1809665003 * get_binary_0() const { return ___binary_0; }
	inline XmlReaderBinarySupport_t1809665003 ** get_address_of_binary_0() { return &___binary_0; }
	inline void set_binary_0(XmlReaderBinarySupport_t1809665003 * value)
	{
		___binary_0 = value;
		Il2CppCodeGenWriteBarrier((&___binary_0), value);
	}

	inline static int32_t get_offset_of_settings_1() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___settings_1)); }
	inline XmlReaderSettings_t2186285234 * get_settings_1() const { return ___settings_1; }
	inline XmlReaderSettings_t2186285234 ** get_address_of_settings_1() { return &___settings_1; }
	inline void set_settings_1(XmlReaderSettings_t2186285234 * value)
	{
		___settings_1 = value;
		Il2CppCodeGenWriteBarrier((&___settings_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADER_T3121518892_H
#ifndef XMLQUALIFIEDNAME_T2760654312_H
#define XMLQUALIFIEDNAME_T2760654312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlQualifiedName
struct  XmlQualifiedName_t2760654312  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlQualifiedName::name
	String_t* ___name_1;
	// System.String System.Xml.XmlQualifiedName::ns
	String_t* ___ns_2;
	// System.Int32 System.Xml.XmlQualifiedName::hash
	int32_t ___hash_3;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_ns_2() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___ns_2)); }
	inline String_t* get_ns_2() const { return ___ns_2; }
	inline String_t** get_address_of_ns_2() { return &___ns_2; }
	inline void set_ns_2(String_t* value)
	{
		___ns_2 = value;
		Il2CppCodeGenWriteBarrier((&___ns_2), value);
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___hash_3)); }
	inline int32_t get_hash_3() const { return ___hash_3; }
	inline int32_t* get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(int32_t value)
	{
		___hash_3 = value;
	}
};

struct XmlQualifiedName_t2760654312_StaticFields
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Empty
	XmlQualifiedName_t2760654312 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312_StaticFields, ___Empty_0)); }
	inline XmlQualifiedName_t2760654312 * get_Empty_0() const { return ___Empty_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(XmlQualifiedName_t2760654312 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLQUALIFIEDNAME_T2760654312_H
#ifndef STACK_1_T2690840144_H
#define STACK_1_T2690840144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.String>
struct  Stack_1_t2690840144  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	StringU5BU5D_t1281789340* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t2690840144, ____array_0)); }
	inline StringU5BU5D_t1281789340* get__array_0() const { return ____array_0; }
	inline StringU5BU5D_t1281789340** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(StringU5BU5D_t1281789340* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t2690840144, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t2690840144, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T2690840144_H
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
#ifndef XMLSCHEMACOLLECTION_T3610399789_H
#define XMLSCHEMACOLLECTION_T3610399789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaCollection
struct  XmlSchemaCollection_t3610399789  : public RuntimeObject
{
public:
	// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::schemaSet
	XmlSchemaSet_t266093086 * ___schemaSet_0;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaCollection::ValidationEventHandler
	ValidationEventHandler_t791314227 * ___ValidationEventHandler_1;

public:
	inline static int32_t get_offset_of_schemaSet_0() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___schemaSet_0)); }
	inline XmlSchemaSet_t266093086 * get_schemaSet_0() const { return ___schemaSet_0; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemaSet_0() { return &___schemaSet_0; }
	inline void set_schemaSet_0(XmlSchemaSet_t266093086 * value)
	{
		___schemaSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___schemaSet_0), value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_1() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___ValidationEventHandler_1)); }
	inline ValidationEventHandler_t791314227 * get_ValidationEventHandler_1() const { return ___ValidationEventHandler_1; }
	inline ValidationEventHandler_t791314227 ** get_address_of_ValidationEventHandler_1() { return &___ValidationEventHandler_1; }
	inline void set_ValidationEventHandler_1(ValidationEventHandler_t791314227 * value)
	{
		___ValidationEventHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOLLECTION_T3610399789_H
#ifndef DTDNODE_T858560093_H
#define DTDNODE_T858560093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDNode
struct  DTDNode_t858560093  : public RuntimeObject
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::root
	DTDObjectModel_t1729680289 * ___root_0;
	// System.Boolean Mono.Xml.DTDNode::isInternalSubset
	bool ___isInternalSubset_1;
	// System.String Mono.Xml.DTDNode::baseURI
	String_t* ___baseURI_2;
	// System.Int32 Mono.Xml.DTDNode::lineNumber
	int32_t ___lineNumber_3;
	// System.Int32 Mono.Xml.DTDNode::linePosition
	int32_t ___linePosition_4;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(DTDNode_t858560093, ___root_0)); }
	inline DTDObjectModel_t1729680289 * get_root_0() const { return ___root_0; }
	inline DTDObjectModel_t1729680289 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(DTDObjectModel_t1729680289 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier((&___root_0), value);
	}

	inline static int32_t get_offset_of_isInternalSubset_1() { return static_cast<int32_t>(offsetof(DTDNode_t858560093, ___isInternalSubset_1)); }
	inline bool get_isInternalSubset_1() const { return ___isInternalSubset_1; }
	inline bool* get_address_of_isInternalSubset_1() { return &___isInternalSubset_1; }
	inline void set_isInternalSubset_1(bool value)
	{
		___isInternalSubset_1 = value;
	}

	inline static int32_t get_offset_of_baseURI_2() { return static_cast<int32_t>(offsetof(DTDNode_t858560093, ___baseURI_2)); }
	inline String_t* get_baseURI_2() const { return ___baseURI_2; }
	inline String_t** get_address_of_baseURI_2() { return &___baseURI_2; }
	inline void set_baseURI_2(String_t* value)
	{
		___baseURI_2 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_2), value);
	}

	inline static int32_t get_offset_of_lineNumber_3() { return static_cast<int32_t>(offsetof(DTDNode_t858560093, ___lineNumber_3)); }
	inline int32_t get_lineNumber_3() const { return ___lineNumber_3; }
	inline int32_t* get_address_of_lineNumber_3() { return &___lineNumber_3; }
	inline void set_lineNumber_3(int32_t value)
	{
		___lineNumber_3 = value;
	}

	inline static int32_t get_offset_of_linePosition_4() { return static_cast<int32_t>(offsetof(DTDNode_t858560093, ___linePosition_4)); }
	inline int32_t get_linePosition_4() const { return ___linePosition_4; }
	inline int32_t* get_address_of_linePosition_4() { return &___linePosition_4; }
	inline void set_linePosition_4(int32_t value)
	{
		___linePosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDNODE_T858560093_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef COMPAREINFO_T1092934962_H
#define COMPAREINFO_T1092934962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t1092934962  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_1;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_2;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_3;
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_4;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t2877834729 * ___collator_5;

public:
	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___culture_1)); }
	inline int32_t get_culture_1() const { return ___culture_1; }
	inline int32_t* get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(int32_t value)
	{
		___culture_1 = value;
	}

	inline static int32_t get_offset_of_icu_name_2() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___icu_name_2)); }
	inline String_t* get_icu_name_2() const { return ___icu_name_2; }
	inline String_t** get_address_of_icu_name_2() { return &___icu_name_2; }
	inline void set_icu_name_2(String_t* value)
	{
		___icu_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_2), value);
	}

	inline static int32_t get_offset_of_win32LCID_3() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___win32LCID_3)); }
	inline int32_t get_win32LCID_3() const { return ___win32LCID_3; }
	inline int32_t* get_address_of_win32LCID_3() { return &___win32LCID_3; }
	inline void set_win32LCID_3(int32_t value)
	{
		___win32LCID_3 = value;
	}

	inline static int32_t get_offset_of_m_name_4() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_name_4)); }
	inline String_t* get_m_name_4() const { return ___m_name_4; }
	inline String_t** get_address_of_m_name_4() { return &___m_name_4; }
	inline void set_m_name_4(String_t* value)
	{
		___m_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_4), value);
	}

	inline static int32_t get_offset_of_collator_5() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___collator_5)); }
	inline SimpleCollator_t2877834729 * get_collator_5() const { return ___collator_5; }
	inline SimpleCollator_t2877834729 ** get_address_of_collator_5() { return &___collator_5; }
	inline void set_collator_5(SimpleCollator_t2877834729 * value)
	{
		___collator_5 = value;
		Il2CppCodeGenWriteBarrier((&___collator_5), value);
	}
};

struct CompareInfo_t1092934962_StaticFields
{
public:
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_0;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_t1853889766 * ___collators_6;
	// System.Object System.Globalization.CompareInfo::monitor
	RuntimeObject * ___monitor_7;

public:
	inline static int32_t get_offset_of_useManagedCollation_0() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___useManagedCollation_0)); }
	inline bool get_useManagedCollation_0() const { return ___useManagedCollation_0; }
	inline bool* get_address_of_useManagedCollation_0() { return &___useManagedCollation_0; }
	inline void set_useManagedCollation_0(bool value)
	{
		___useManagedCollation_0 = value;
	}

	inline static int32_t get_offset_of_collators_6() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___collators_6)); }
	inline Hashtable_t1853889766 * get_collators_6() const { return ___collators_6; }
	inline Hashtable_t1853889766 ** get_address_of_collators_6() { return &___collators_6; }
	inline void set_collators_6(Hashtable_t1853889766 * value)
	{
		___collators_6 = value;
		Il2CppCodeGenWriteBarrier((&___collators_6), value);
	}

	inline static int32_t get_offset_of_monitor_7() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___monitor_7)); }
	inline RuntimeObject * get_monitor_7() const { return ___monitor_7; }
	inline RuntimeObject ** get_address_of_monitor_7() { return &___monitor_7; }
	inline void set_monitor_7(RuntimeObject * value)
	{
		___monitor_7 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T1092934962_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
#ifndef DICTIONARY_2_T2736202052_H
#define DICTIONARY_2_T2736202052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_t2736202052  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2736202052_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3530625384 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3530625384 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3530625384 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3530625384 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2736202052_H
#ifndef STRINGUTIL_T564231417_H
#define STRINGUTIL_T564231417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/StringUtil
struct  StringUtil_t564231417  : public RuntimeObject
{
public:

public:
};

struct StringUtil_t564231417_StaticFields
{
public:
	// System.Globalization.CultureInfo System.Xml.XmlTextWriter/StringUtil::cul
	CultureInfo_t4157843068 * ___cul_0;
	// System.Globalization.CompareInfo System.Xml.XmlTextWriter/StringUtil::cmp
	CompareInfo_t1092934962 * ___cmp_1;

public:
	inline static int32_t get_offset_of_cul_0() { return static_cast<int32_t>(offsetof(StringUtil_t564231417_StaticFields, ___cul_0)); }
	inline CultureInfo_t4157843068 * get_cul_0() const { return ___cul_0; }
	inline CultureInfo_t4157843068 ** get_address_of_cul_0() { return &___cul_0; }
	inline void set_cul_0(CultureInfo_t4157843068 * value)
	{
		___cul_0 = value;
		Il2CppCodeGenWriteBarrier((&___cul_0), value);
	}

	inline static int32_t get_offset_of_cmp_1() { return static_cast<int32_t>(offsetof(StringUtil_t564231417_StaticFields, ___cmp_1)); }
	inline CompareInfo_t1092934962 * get_cmp_1() const { return ___cmp_1; }
	inline CompareInfo_t1092934962 ** get_address_of_cmp_1() { return &___cmp_1; }
	inline void set_cmp_1(CompareInfo_t1092934962 * value)
	{
		___cmp_1 = value;
		Il2CppCodeGenWriteBarrier((&___cmp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGUTIL_T564231417_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef DTDOBJECTMODEL_T1729680289_H
#define DTDOBJECTMODEL_T1729680289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDObjectModel
struct  DTDObjectModel_t1729680289  : public RuntimeObject
{
public:
	// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::factory
	DTDAutomataFactory_t2958275022 * ___factory_0;
	// Mono.Xml.DTDElementAutomata Mono.Xml.DTDObjectModel::rootAutomata
	DTDElementAutomata_t1050190167 * ___rootAutomata_1;
	// Mono.Xml.DTDEmptyAutomata Mono.Xml.DTDObjectModel::emptyAutomata
	DTDEmptyAutomata_t465590953 * ___emptyAutomata_2;
	// Mono.Xml.DTDAnyAutomata Mono.Xml.DTDObjectModel::anyAutomata
	DTDAnyAutomata_t3633486160 * ___anyAutomata_3;
	// Mono.Xml.DTDInvalidAutomata Mono.Xml.DTDObjectModel::invalidAutomata
	DTDInvalidAutomata_t1406553220 * ___invalidAutomata_4;
	// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::elementDecls
	DTDElementDeclarationCollection_t222313714 * ___elementDecls_5;
	// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::attListDecls
	DTDAttListDeclarationCollection_t2220366188 * ___attListDecls_6;
	// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::peDecls
	DTDParameterEntityDeclarationCollection_t2844734410 * ___peDecls_7;
	// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::entityDecls
	DTDEntityDeclarationCollection_t2250844513 * ___entityDecls_8;
	// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::notationDecls
	DTDNotationDeclarationCollection_t959292105 * ___notationDecls_9;
	// System.Collections.ArrayList Mono.Xml.DTDObjectModel::validationErrors
	ArrayList_t2718874744 * ___validationErrors_10;
	// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::resolver
	XmlResolver_t626023767 * ___resolver_11;
	// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::nameTable
	XmlNameTable_t71772148 * ___nameTable_12;
	// System.Collections.Hashtable Mono.Xml.DTDObjectModel::externalResources
	Hashtable_t1853889766 * ___externalResources_13;
	// System.String Mono.Xml.DTDObjectModel::baseURI
	String_t* ___baseURI_14;
	// System.String Mono.Xml.DTDObjectModel::name
	String_t* ___name_15;
	// System.String Mono.Xml.DTDObjectModel::publicId
	String_t* ___publicId_16;
	// System.String Mono.Xml.DTDObjectModel::systemId
	String_t* ___systemId_17;
	// System.String Mono.Xml.DTDObjectModel::intSubset
	String_t* ___intSubset_18;
	// System.Boolean Mono.Xml.DTDObjectModel::intSubsetHasPERef
	bool ___intSubsetHasPERef_19;
	// System.Boolean Mono.Xml.DTDObjectModel::isStandalone
	bool ___isStandalone_20;
	// System.Int32 Mono.Xml.DTDObjectModel::lineNumber
	int32_t ___lineNumber_21;
	// System.Int32 Mono.Xml.DTDObjectModel::linePosition
	int32_t ___linePosition_22;

public:
	inline static int32_t get_offset_of_factory_0() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___factory_0)); }
	inline DTDAutomataFactory_t2958275022 * get_factory_0() const { return ___factory_0; }
	inline DTDAutomataFactory_t2958275022 ** get_address_of_factory_0() { return &___factory_0; }
	inline void set_factory_0(DTDAutomataFactory_t2958275022 * value)
	{
		___factory_0 = value;
		Il2CppCodeGenWriteBarrier((&___factory_0), value);
	}

	inline static int32_t get_offset_of_rootAutomata_1() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___rootAutomata_1)); }
	inline DTDElementAutomata_t1050190167 * get_rootAutomata_1() const { return ___rootAutomata_1; }
	inline DTDElementAutomata_t1050190167 ** get_address_of_rootAutomata_1() { return &___rootAutomata_1; }
	inline void set_rootAutomata_1(DTDElementAutomata_t1050190167 * value)
	{
		___rootAutomata_1 = value;
		Il2CppCodeGenWriteBarrier((&___rootAutomata_1), value);
	}

	inline static int32_t get_offset_of_emptyAutomata_2() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___emptyAutomata_2)); }
	inline DTDEmptyAutomata_t465590953 * get_emptyAutomata_2() const { return ___emptyAutomata_2; }
	inline DTDEmptyAutomata_t465590953 ** get_address_of_emptyAutomata_2() { return &___emptyAutomata_2; }
	inline void set_emptyAutomata_2(DTDEmptyAutomata_t465590953 * value)
	{
		___emptyAutomata_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptyAutomata_2), value);
	}

	inline static int32_t get_offset_of_anyAutomata_3() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___anyAutomata_3)); }
	inline DTDAnyAutomata_t3633486160 * get_anyAutomata_3() const { return ___anyAutomata_3; }
	inline DTDAnyAutomata_t3633486160 ** get_address_of_anyAutomata_3() { return &___anyAutomata_3; }
	inline void set_anyAutomata_3(DTDAnyAutomata_t3633486160 * value)
	{
		___anyAutomata_3 = value;
		Il2CppCodeGenWriteBarrier((&___anyAutomata_3), value);
	}

	inline static int32_t get_offset_of_invalidAutomata_4() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___invalidAutomata_4)); }
	inline DTDInvalidAutomata_t1406553220 * get_invalidAutomata_4() const { return ___invalidAutomata_4; }
	inline DTDInvalidAutomata_t1406553220 ** get_address_of_invalidAutomata_4() { return &___invalidAutomata_4; }
	inline void set_invalidAutomata_4(DTDInvalidAutomata_t1406553220 * value)
	{
		___invalidAutomata_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalidAutomata_4), value);
	}

	inline static int32_t get_offset_of_elementDecls_5() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___elementDecls_5)); }
	inline DTDElementDeclarationCollection_t222313714 * get_elementDecls_5() const { return ___elementDecls_5; }
	inline DTDElementDeclarationCollection_t222313714 ** get_address_of_elementDecls_5() { return &___elementDecls_5; }
	inline void set_elementDecls_5(DTDElementDeclarationCollection_t222313714 * value)
	{
		___elementDecls_5 = value;
		Il2CppCodeGenWriteBarrier((&___elementDecls_5), value);
	}

	inline static int32_t get_offset_of_attListDecls_6() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___attListDecls_6)); }
	inline DTDAttListDeclarationCollection_t2220366188 * get_attListDecls_6() const { return ___attListDecls_6; }
	inline DTDAttListDeclarationCollection_t2220366188 ** get_address_of_attListDecls_6() { return &___attListDecls_6; }
	inline void set_attListDecls_6(DTDAttListDeclarationCollection_t2220366188 * value)
	{
		___attListDecls_6 = value;
		Il2CppCodeGenWriteBarrier((&___attListDecls_6), value);
	}

	inline static int32_t get_offset_of_peDecls_7() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___peDecls_7)); }
	inline DTDParameterEntityDeclarationCollection_t2844734410 * get_peDecls_7() const { return ___peDecls_7; }
	inline DTDParameterEntityDeclarationCollection_t2844734410 ** get_address_of_peDecls_7() { return &___peDecls_7; }
	inline void set_peDecls_7(DTDParameterEntityDeclarationCollection_t2844734410 * value)
	{
		___peDecls_7 = value;
		Il2CppCodeGenWriteBarrier((&___peDecls_7), value);
	}

	inline static int32_t get_offset_of_entityDecls_8() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___entityDecls_8)); }
	inline DTDEntityDeclarationCollection_t2250844513 * get_entityDecls_8() const { return ___entityDecls_8; }
	inline DTDEntityDeclarationCollection_t2250844513 ** get_address_of_entityDecls_8() { return &___entityDecls_8; }
	inline void set_entityDecls_8(DTDEntityDeclarationCollection_t2250844513 * value)
	{
		___entityDecls_8 = value;
		Il2CppCodeGenWriteBarrier((&___entityDecls_8), value);
	}

	inline static int32_t get_offset_of_notationDecls_9() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___notationDecls_9)); }
	inline DTDNotationDeclarationCollection_t959292105 * get_notationDecls_9() const { return ___notationDecls_9; }
	inline DTDNotationDeclarationCollection_t959292105 ** get_address_of_notationDecls_9() { return &___notationDecls_9; }
	inline void set_notationDecls_9(DTDNotationDeclarationCollection_t959292105 * value)
	{
		___notationDecls_9 = value;
		Il2CppCodeGenWriteBarrier((&___notationDecls_9), value);
	}

	inline static int32_t get_offset_of_validationErrors_10() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___validationErrors_10)); }
	inline ArrayList_t2718874744 * get_validationErrors_10() const { return ___validationErrors_10; }
	inline ArrayList_t2718874744 ** get_address_of_validationErrors_10() { return &___validationErrors_10; }
	inline void set_validationErrors_10(ArrayList_t2718874744 * value)
	{
		___validationErrors_10 = value;
		Il2CppCodeGenWriteBarrier((&___validationErrors_10), value);
	}

	inline static int32_t get_offset_of_resolver_11() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___resolver_11)); }
	inline XmlResolver_t626023767 * get_resolver_11() const { return ___resolver_11; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_11() { return &___resolver_11; }
	inline void set_resolver_11(XmlResolver_t626023767 * value)
	{
		___resolver_11 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_11), value);
	}

	inline static int32_t get_offset_of_nameTable_12() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___nameTable_12)); }
	inline XmlNameTable_t71772148 * get_nameTable_12() const { return ___nameTable_12; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_12() { return &___nameTable_12; }
	inline void set_nameTable_12(XmlNameTable_t71772148 * value)
	{
		___nameTable_12 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_12), value);
	}

	inline static int32_t get_offset_of_externalResources_13() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___externalResources_13)); }
	inline Hashtable_t1853889766 * get_externalResources_13() const { return ___externalResources_13; }
	inline Hashtable_t1853889766 ** get_address_of_externalResources_13() { return &___externalResources_13; }
	inline void set_externalResources_13(Hashtable_t1853889766 * value)
	{
		___externalResources_13 = value;
		Il2CppCodeGenWriteBarrier((&___externalResources_13), value);
	}

	inline static int32_t get_offset_of_baseURI_14() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___baseURI_14)); }
	inline String_t* get_baseURI_14() const { return ___baseURI_14; }
	inline String_t** get_address_of_baseURI_14() { return &___baseURI_14; }
	inline void set_baseURI_14(String_t* value)
	{
		___baseURI_14 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_14), value);
	}

	inline static int32_t get_offset_of_name_15() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___name_15)); }
	inline String_t* get_name_15() const { return ___name_15; }
	inline String_t** get_address_of_name_15() { return &___name_15; }
	inline void set_name_15(String_t* value)
	{
		___name_15 = value;
		Il2CppCodeGenWriteBarrier((&___name_15), value);
	}

	inline static int32_t get_offset_of_publicId_16() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___publicId_16)); }
	inline String_t* get_publicId_16() const { return ___publicId_16; }
	inline String_t** get_address_of_publicId_16() { return &___publicId_16; }
	inline void set_publicId_16(String_t* value)
	{
		___publicId_16 = value;
		Il2CppCodeGenWriteBarrier((&___publicId_16), value);
	}

	inline static int32_t get_offset_of_systemId_17() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___systemId_17)); }
	inline String_t* get_systemId_17() const { return ___systemId_17; }
	inline String_t** get_address_of_systemId_17() { return &___systemId_17; }
	inline void set_systemId_17(String_t* value)
	{
		___systemId_17 = value;
		Il2CppCodeGenWriteBarrier((&___systemId_17), value);
	}

	inline static int32_t get_offset_of_intSubset_18() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___intSubset_18)); }
	inline String_t* get_intSubset_18() const { return ___intSubset_18; }
	inline String_t** get_address_of_intSubset_18() { return &___intSubset_18; }
	inline void set_intSubset_18(String_t* value)
	{
		___intSubset_18 = value;
		Il2CppCodeGenWriteBarrier((&___intSubset_18), value);
	}

	inline static int32_t get_offset_of_intSubsetHasPERef_19() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___intSubsetHasPERef_19)); }
	inline bool get_intSubsetHasPERef_19() const { return ___intSubsetHasPERef_19; }
	inline bool* get_address_of_intSubsetHasPERef_19() { return &___intSubsetHasPERef_19; }
	inline void set_intSubsetHasPERef_19(bool value)
	{
		___intSubsetHasPERef_19 = value;
	}

	inline static int32_t get_offset_of_isStandalone_20() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___isStandalone_20)); }
	inline bool get_isStandalone_20() const { return ___isStandalone_20; }
	inline bool* get_address_of_isStandalone_20() { return &___isStandalone_20; }
	inline void set_isStandalone_20(bool value)
	{
		___isStandalone_20 = value;
	}

	inline static int32_t get_offset_of_lineNumber_21() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___lineNumber_21)); }
	inline int32_t get_lineNumber_21() const { return ___lineNumber_21; }
	inline int32_t* get_address_of_lineNumber_21() { return &___lineNumber_21; }
	inline void set_lineNumber_21(int32_t value)
	{
		___lineNumber_21 = value;
	}

	inline static int32_t get_offset_of_linePosition_22() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___linePosition_22)); }
	inline int32_t get_linePosition_22() const { return ___linePosition_22; }
	inline int32_t* get_address_of_linePosition_22() { return &___linePosition_22; }
	inline void set_linePosition_22(int32_t value)
	{
		___linePosition_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDOBJECTMODEL_T1729680289_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
#ifndef ENUMERATOR_T97922292_H
#define ENUMERATOR_T97922292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeListChildren/Enumerator
struct  Enumerator_t97922292  : public RuntimeObject
{
public:
	// System.Xml.IHasXmlChildNode System.Xml.XmlNodeListChildren/Enumerator::parent
	RuntimeObject* ___parent_0;
	// System.Xml.XmlLinkedNode System.Xml.XmlNodeListChildren/Enumerator::currentChild
	XmlLinkedNode_t1437094927 * ___currentChild_1;
	// System.Boolean System.Xml.XmlNodeListChildren/Enumerator::passedLastNode
	bool ___passedLastNode_2;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(Enumerator_t97922292, ___parent_0)); }
	inline RuntimeObject* get_parent_0() const { return ___parent_0; }
	inline RuntimeObject** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(RuntimeObject* value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_currentChild_1() { return static_cast<int32_t>(offsetof(Enumerator_t97922292, ___currentChild_1)); }
	inline XmlLinkedNode_t1437094927 * get_currentChild_1() const { return ___currentChild_1; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_currentChild_1() { return &___currentChild_1; }
	inline void set_currentChild_1(XmlLinkedNode_t1437094927 * value)
	{
		___currentChild_1 = value;
		Il2CppCodeGenWriteBarrier((&___currentChild_1), value);
	}

	inline static int32_t get_offset_of_passedLastNode_2() { return static_cast<int32_t>(offsetof(Enumerator_t97922292, ___passedLastNode_2)); }
	inline bool get_passedLastNode_2() const { return ___passedLastNode_2; }
	inline bool* get_address_of_passedLastNode_2() { return &___passedLastNode_2; }
	inline void set_passedLastNode_2(bool value)
	{
		___passedLastNode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T97922292_H
#ifndef XMLNAMETABLE_T71772148_H
#define XMLNAMETABLE_T71772148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNameTable
struct  XmlNameTable_t71772148  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMETABLE_T71772148_H
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
#ifndef XMLNAMESPACEMANAGER_T418790500_H
#define XMLNAMESPACEMANAGER_T418790500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t418790500  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NsDecl[] System.Xml.XmlNamespaceManager::decls
	NsDeclU5BU5D_t2116608150* ___decls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::declPos
	int32_t ___declPos_1;
	// System.Xml.XmlNamespaceManager/NsScope[] System.Xml.XmlNamespaceManager::scopes
	NsScopeU5BU5D_t382374428* ___scopes_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopePos
	int32_t ___scopePos_3;
	// System.String System.Xml.XmlNamespaceManager::defaultNamespace
	String_t* ___defaultNamespace_4;
	// System.Int32 System.Xml.XmlNamespaceManager::count
	int32_t ___count_5;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t71772148 * ___nameTable_6;
	// System.Boolean System.Xml.XmlNamespaceManager::internalAtomizedNames
	bool ___internalAtomizedNames_7;

public:
	inline static int32_t get_offset_of_decls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___decls_0)); }
	inline NsDeclU5BU5D_t2116608150* get_decls_0() const { return ___decls_0; }
	inline NsDeclU5BU5D_t2116608150** get_address_of_decls_0() { return &___decls_0; }
	inline void set_decls_0(NsDeclU5BU5D_t2116608150* value)
	{
		___decls_0 = value;
		Il2CppCodeGenWriteBarrier((&___decls_0), value);
	}

	inline static int32_t get_offset_of_declPos_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___declPos_1)); }
	inline int32_t get_declPos_1() const { return ___declPos_1; }
	inline int32_t* get_address_of_declPos_1() { return &___declPos_1; }
	inline void set_declPos_1(int32_t value)
	{
		___declPos_1 = value;
	}

	inline static int32_t get_offset_of_scopes_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopes_2)); }
	inline NsScopeU5BU5D_t382374428* get_scopes_2() const { return ___scopes_2; }
	inline NsScopeU5BU5D_t382374428** get_address_of_scopes_2() { return &___scopes_2; }
	inline void set_scopes_2(NsScopeU5BU5D_t382374428* value)
	{
		___scopes_2 = value;
		Il2CppCodeGenWriteBarrier((&___scopes_2), value);
	}

	inline static int32_t get_offset_of_scopePos_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopePos_3)); }
	inline int32_t get_scopePos_3() const { return ___scopePos_3; }
	inline int32_t* get_address_of_scopePos_3() { return &___scopePos_3; }
	inline void set_scopePos_3(int32_t value)
	{
		___scopePos_3 = value;
	}

	inline static int32_t get_offset_of_defaultNamespace_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___defaultNamespace_4)); }
	inline String_t* get_defaultNamespace_4() const { return ___defaultNamespace_4; }
	inline String_t** get_address_of_defaultNamespace_4() { return &___defaultNamespace_4; }
	inline void set_defaultNamespace_4(String_t* value)
	{
		___defaultNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultNamespace_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_nameTable_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___nameTable_6)); }
	inline XmlNameTable_t71772148 * get_nameTable_6() const { return ___nameTable_6; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_6() { return &___nameTable_6; }
	inline void set_nameTable_6(XmlNameTable_t71772148 * value)
	{
		___nameTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_6), value);
	}

	inline static int32_t get_offset_of_internalAtomizedNames_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___internalAtomizedNames_7)); }
	inline bool get_internalAtomizedNames_7() const { return ___internalAtomizedNames_7; }
	inline bool* get_address_of_internalAtomizedNames_7() { return &___internalAtomizedNames_7; }
	inline void set_internalAtomizedNames_7(bool value)
	{
		___internalAtomizedNames_7 = value;
	}
};

struct XmlNamespaceManager_t418790500_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::<>f__switch$map28
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map28_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_8() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500_StaticFields, ___U3CU3Ef__switchU24map28_8)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map28_8() const { return ___U3CU3Ef__switchU24map28_8; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map28_8() { return &___U3CU3Ef__switchU24map28_8; }
	inline void set_U3CU3Ef__switchU24map28_8(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map28_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMESPACEMANAGER_T418790500_H
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
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef WEBRESPONSE_T229922639_H
#define WEBRESPONSE_T229922639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebResponse
struct  WebResponse_t229922639  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRESPONSE_T229922639_H
#ifndef XMLTEXTREADER_T4233384356_H
#define XMLTEXTREADER_T4233384356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReader
struct  XmlTextReader_t4233384356  : public XmlReader_t3121518892
{
public:
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t4233384356 * ___entity_2;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t3455035481 * ___source_3;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_5;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t2690840144 * ___entityNameStack_6;

public:
	inline static int32_t get_offset_of_entity_2() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entity_2)); }
	inline XmlTextReader_t4233384356 * get_entity_2() const { return ___entity_2; }
	inline XmlTextReader_t4233384356 ** get_address_of_entity_2() { return &___entity_2; }
	inline void set_entity_2(XmlTextReader_t4233384356 * value)
	{
		___entity_2 = value;
		Il2CppCodeGenWriteBarrier((&___entity_2), value);
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___source_3)); }
	inline XmlTextReader_t3455035481 * get_source_3() const { return ___source_3; }
	inline XmlTextReader_t3455035481 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(XmlTextReader_t3455035481 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((&___source_3), value);
	}

	inline static int32_t get_offset_of_entityInsideAttribute_4() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entityInsideAttribute_4)); }
	inline bool get_entityInsideAttribute_4() const { return ___entityInsideAttribute_4; }
	inline bool* get_address_of_entityInsideAttribute_4() { return &___entityInsideAttribute_4; }
	inline void set_entityInsideAttribute_4(bool value)
	{
		___entityInsideAttribute_4 = value;
	}

	inline static int32_t get_offset_of_insideAttribute_5() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___insideAttribute_5)); }
	inline bool get_insideAttribute_5() const { return ___insideAttribute_5; }
	inline bool* get_address_of_insideAttribute_5() { return &___insideAttribute_5; }
	inline void set_insideAttribute_5(bool value)
	{
		___insideAttribute_5 = value;
	}

	inline static int32_t get_offset_of_entityNameStack_6() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entityNameStack_6)); }
	inline Stack_1_t2690840144 * get_entityNameStack_6() const { return ___entityNameStack_6; }
	inline Stack_1_t2690840144 ** get_address_of_entityNameStack_6() { return &___entityNameStack_6; }
	inline void set_entityNameStack_6(Stack_1_t2690840144 * value)
	{
		___entityNameStack_6 = value;
		Il2CppCodeGenWriteBarrier((&___entityNameStack_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTREADER_T4233384356_H
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
#ifndef NONBLOCKINGSTREAMREADER_T2495303928_H
#define NONBLOCKINGSTREAMREADER_T2495303928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NonBlockingStreamReader
struct  NonBlockingStreamReader_t2495303928  : public TextReader_t283511965
{
public:
	// System.Byte[] System.Xml.NonBlockingStreamReader::input_buffer
	ByteU5BU5D_t4116647657* ___input_buffer_1;
	// System.Char[] System.Xml.NonBlockingStreamReader::decoded_buffer
	CharU5BU5D_t3528271667* ___decoded_buffer_2;
	// System.Int32 System.Xml.NonBlockingStreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.Xml.NonBlockingStreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.Xml.NonBlockingStreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Text.Encoding System.Xml.NonBlockingStreamReader::encoding
	Encoding_t1523322056 * ___encoding_6;
	// System.Text.Decoder System.Xml.NonBlockingStreamReader::decoder
	Decoder_t2204182725 * ___decoder_7;
	// System.IO.Stream System.Xml.NonBlockingStreamReader::base_stream
	Stream_t1273022909 * ___base_stream_8;
	// System.Boolean System.Xml.NonBlockingStreamReader::mayBlock
	bool ___mayBlock_9;
	// System.Text.StringBuilder System.Xml.NonBlockingStreamReader::line_builder
	StringBuilder_t * ___line_builder_10;
	// System.Boolean System.Xml.NonBlockingStreamReader::foundCR
	bool ___foundCR_11;

public:
	inline static int32_t get_offset_of_input_buffer_1() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___input_buffer_1)); }
	inline ByteU5BU5D_t4116647657* get_input_buffer_1() const { return ___input_buffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_input_buffer_1() { return &___input_buffer_1; }
	inline void set_input_buffer_1(ByteU5BU5D_t4116647657* value)
	{
		___input_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_1), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_2() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___decoded_buffer_2)); }
	inline CharU5BU5D_t3528271667* get_decoded_buffer_2() const { return ___decoded_buffer_2; }
	inline CharU5BU5D_t3528271667** get_address_of_decoded_buffer_2() { return &___decoded_buffer_2; }
	inline void set_decoded_buffer_2(CharU5BU5D_t3528271667* value)
	{
		___decoded_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_count_3() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___decoded_count_3)); }
	inline int32_t get_decoded_count_3() const { return ___decoded_count_3; }
	inline int32_t* get_address_of_decoded_count_3() { return &___decoded_count_3; }
	inline void set_decoded_count_3(int32_t value)
	{
		___decoded_count_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___pos_4)); }
	inline int32_t get_pos_4() const { return ___pos_4; }
	inline int32_t* get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(int32_t value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_buffer_size_5() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___buffer_size_5)); }
	inline int32_t get_buffer_size_5() const { return ___buffer_size_5; }
	inline int32_t* get_address_of_buffer_size_5() { return &___buffer_size_5; }
	inline void set_buffer_size_5(int32_t value)
	{
		___buffer_size_5 = value;
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___encoding_6)); }
	inline Encoding_t1523322056 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_t1523322056 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_t1523322056 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_6), value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___decoder_7)); }
	inline Decoder_t2204182725 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t2204182725 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t2204182725 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_7), value);
	}

	inline static int32_t get_offset_of_base_stream_8() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___base_stream_8)); }
	inline Stream_t1273022909 * get_base_stream_8() const { return ___base_stream_8; }
	inline Stream_t1273022909 ** get_address_of_base_stream_8() { return &___base_stream_8; }
	inline void set_base_stream_8(Stream_t1273022909 * value)
	{
		___base_stream_8 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_8), value);
	}

	inline static int32_t get_offset_of_mayBlock_9() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___mayBlock_9)); }
	inline bool get_mayBlock_9() const { return ___mayBlock_9; }
	inline bool* get_address_of_mayBlock_9() { return &___mayBlock_9; }
	inline void set_mayBlock_9(bool value)
	{
		___mayBlock_9 = value;
	}

	inline static int32_t get_offset_of_line_builder_10() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___line_builder_10)); }
	inline StringBuilder_t * get_line_builder_10() const { return ___line_builder_10; }
	inline StringBuilder_t ** get_address_of_line_builder_10() { return &___line_builder_10; }
	inline void set_line_builder_10(StringBuilder_t * value)
	{
		___line_builder_10 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_10), value);
	}

	inline static int32_t get_offset_of_foundCR_11() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t2495303928, ___foundCR_11)); }
	inline bool get_foundCR_11() const { return ___foundCR_11; }
	inline bool* get_address_of_foundCR_11() { return &___foundCR_11; }
	inline void set_foundCR_11(bool value)
	{
		___foundCR_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONBLOCKINGSTREAMREADER_T2495303928_H
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
#ifndef XMLINPUTSTREAM_T1691369434_H
#define XMLINPUTSTREAM_T1691369434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlInputStream
struct  XmlInputStream_t1691369434  : public Stream_t1273022909
{
public:
	// System.Text.Encoding System.Xml.XmlInputStream::enc
	Encoding_t1523322056 * ___enc_2;
	// System.IO.Stream System.Xml.XmlInputStream::stream
	Stream_t1273022909 * ___stream_3;
	// System.Byte[] System.Xml.XmlInputStream::buffer
	ByteU5BU5D_t4116647657* ___buffer_4;
	// System.Int32 System.Xml.XmlInputStream::bufLength
	int32_t ___bufLength_5;
	// System.Int32 System.Xml.XmlInputStream::bufPos
	int32_t ___bufPos_6;

public:
	inline static int32_t get_offset_of_enc_2() { return static_cast<int32_t>(offsetof(XmlInputStream_t1691369434, ___enc_2)); }
	inline Encoding_t1523322056 * get_enc_2() const { return ___enc_2; }
	inline Encoding_t1523322056 ** get_address_of_enc_2() { return &___enc_2; }
	inline void set_enc_2(Encoding_t1523322056 * value)
	{
		___enc_2 = value;
		Il2CppCodeGenWriteBarrier((&___enc_2), value);
	}

	inline static int32_t get_offset_of_stream_3() { return static_cast<int32_t>(offsetof(XmlInputStream_t1691369434, ___stream_3)); }
	inline Stream_t1273022909 * get_stream_3() const { return ___stream_3; }
	inline Stream_t1273022909 ** get_address_of_stream_3() { return &___stream_3; }
	inline void set_stream_3(Stream_t1273022909 * value)
	{
		___stream_3 = value;
		Il2CppCodeGenWriteBarrier((&___stream_3), value);
	}

	inline static int32_t get_offset_of_buffer_4() { return static_cast<int32_t>(offsetof(XmlInputStream_t1691369434, ___buffer_4)); }
	inline ByteU5BU5D_t4116647657* get_buffer_4() const { return ___buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_4() { return &___buffer_4; }
	inline void set_buffer_4(ByteU5BU5D_t4116647657* value)
	{
		___buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_4), value);
	}

	inline static int32_t get_offset_of_bufLength_5() { return static_cast<int32_t>(offsetof(XmlInputStream_t1691369434, ___bufLength_5)); }
	inline int32_t get_bufLength_5() const { return ___bufLength_5; }
	inline int32_t* get_address_of_bufLength_5() { return &___bufLength_5; }
	inline void set_bufLength_5(int32_t value)
	{
		___bufLength_5 = value;
	}

	inline static int32_t get_offset_of_bufPos_6() { return static_cast<int32_t>(offsetof(XmlInputStream_t1691369434, ___bufPos_6)); }
	inline int32_t get_bufPos_6() const { return ___bufPos_6; }
	inline int32_t* get_address_of_bufPos_6() { return &___bufPos_6; }
	inline void set_bufPos_6(int32_t value)
	{
		___bufPos_6 = value;
	}
};

struct XmlInputStream_t1691369434_StaticFields
{
public:
	// System.Text.Encoding System.Xml.XmlInputStream::StrictUTF8
	Encoding_t1523322056 * ___StrictUTF8_1;
	// System.Xml.XmlException System.Xml.XmlInputStream::encodingException
	XmlException_t1761730631 * ___encodingException_7;

public:
	inline static int32_t get_offset_of_StrictUTF8_1() { return static_cast<int32_t>(offsetof(XmlInputStream_t1691369434_StaticFields, ___StrictUTF8_1)); }
	inline Encoding_t1523322056 * get_StrictUTF8_1() const { return ___StrictUTF8_1; }
	inline Encoding_t1523322056 ** get_address_of_StrictUTF8_1() { return &___StrictUTF8_1; }
	inline void set_StrictUTF8_1(Encoding_t1523322056 * value)
	{
		___StrictUTF8_1 = value;
		Il2CppCodeGenWriteBarrier((&___StrictUTF8_1), value);
	}

	inline static int32_t get_offset_of_encodingException_7() { return static_cast<int32_t>(offsetof(XmlInputStream_t1691369434_StaticFields, ___encodingException_7)); }
	inline XmlException_t1761730631 * get_encodingException_7() const { return ___encodingException_7; }
	inline XmlException_t1761730631 ** get_address_of_encodingException_7() { return &___encodingException_7; }
	inline void set_encodingException_7(XmlException_t1761730631 * value)
	{
		___encodingException_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodingException_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLINPUTSTREAM_T1691369434_H
#ifndef XMLURLRESOLVER_T817895037_H
#define XMLURLRESOLVER_T817895037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlUrlResolver
struct  XmlUrlResolver_t817895037  : public XmlResolver_t626023767
{
public:
	// System.Net.ICredentials System.Xml.XmlUrlResolver::credential
	RuntimeObject* ___credential_0;

public:
	inline static int32_t get_offset_of_credential_0() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t817895037, ___credential_0)); }
	inline RuntimeObject* get_credential_0() const { return ___credential_0; }
	inline RuntimeObject** get_address_of_credential_0() { return &___credential_0; }
	inline void set_credential_0(RuntimeObject* value)
	{
		___credential_0 = value;
		Il2CppCodeGenWriteBarrier((&___credential_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLURLRESOLVER_T817895037_H
#ifndef U24ARRAYTYPEU2412_T2490092599_H
#define U24ARRAYTYPEU2412_T2490092599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2490092599 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t2490092599__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2490092599_H
#ifndef XMLNOTATION_T1476580686_H
#define XMLNOTATION_T1476580686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNotation
struct  XmlNotation_t1476580686  : public XmlNode_t3767805227
{
public:
	// System.String System.Xml.XmlNotation::localName
	String_t* ___localName_5;
	// System.String System.Xml.XmlNotation::publicId
	String_t* ___publicId_6;
	// System.String System.Xml.XmlNotation::systemId
	String_t* ___systemId_7;
	// System.String System.Xml.XmlNotation::prefix
	String_t* ___prefix_8;

public:
	inline static int32_t get_offset_of_localName_5() { return static_cast<int32_t>(offsetof(XmlNotation_t1476580686, ___localName_5)); }
	inline String_t* get_localName_5() const { return ___localName_5; }
	inline String_t** get_address_of_localName_5() { return &___localName_5; }
	inline void set_localName_5(String_t* value)
	{
		___localName_5 = value;
		Il2CppCodeGenWriteBarrier((&___localName_5), value);
	}

	inline static int32_t get_offset_of_publicId_6() { return static_cast<int32_t>(offsetof(XmlNotation_t1476580686, ___publicId_6)); }
	inline String_t* get_publicId_6() const { return ___publicId_6; }
	inline String_t** get_address_of_publicId_6() { return &___publicId_6; }
	inline void set_publicId_6(String_t* value)
	{
		___publicId_6 = value;
		Il2CppCodeGenWriteBarrier((&___publicId_6), value);
	}

	inline static int32_t get_offset_of_systemId_7() { return static_cast<int32_t>(offsetof(XmlNotation_t1476580686, ___systemId_7)); }
	inline String_t* get_systemId_7() const { return ___systemId_7; }
	inline String_t** get_address_of_systemId_7() { return &___systemId_7; }
	inline void set_systemId_7(String_t* value)
	{
		___systemId_7 = value;
		Il2CppCodeGenWriteBarrier((&___systemId_7), value);
	}

	inline static int32_t get_offset_of_prefix_8() { return static_cast<int32_t>(offsetof(XmlNotation_t1476580686, ___prefix_8)); }
	inline String_t* get_prefix_8() const { return ___prefix_8; }
	inline String_t** get_address_of_prefix_8() { return &___prefix_8; }
	inline void set_prefix_8(String_t* value)
	{
		___prefix_8 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNOTATION_T1476580686_H
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
#ifndef UTF8ENCODING_T3956466879_H
#define UTF8ENCODING_T3956466879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3956466879  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_28;

public:
	inline static int32_t get_offset_of_emitIdentifier_28() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___emitIdentifier_28)); }
	inline bool get_emitIdentifier_28() const { return ___emitIdentifier_28; }
	inline bool* get_address_of_emitIdentifier_28() { return &___emitIdentifier_28; }
	inline void set_emitIdentifier_28(bool value)
	{
		___emitIdentifier_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3956466879_H
#ifndef NAMETABLE_T3178203267_H
#define NAMETABLE_T3178203267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NameTable
struct  NameTable_t3178203267  : public XmlNameTable_t71772148
{
public:
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count_0;
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::buckets
	EntryU5BU5D_t491982174* ___buckets_1;
	// System.Int32 System.Xml.NameTable::size
	int32_t ___size_2;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(NameTable_t3178203267, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_buckets_1() { return static_cast<int32_t>(offsetof(NameTable_t3178203267, ___buckets_1)); }
	inline EntryU5BU5D_t491982174* get_buckets_1() const { return ___buckets_1; }
	inline EntryU5BU5D_t491982174** get_address_of_buckets_1() { return &___buckets_1; }
	inline void set_buckets_1(EntryU5BU5D_t491982174* value)
	{
		___buckets_1 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_1), value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(NameTable_t3178203267, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMETABLE_T3178203267_H
#ifndef STREAMWRITER_T1266378904_H
#define STREAMWRITER_T1266378904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t1266378904  : public TextWriter_t3478189236
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t1523322056 * ___internalEncoding_3;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t1273022909 * ___internalStream_4;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_5;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t4116647657* ___byte_buf_6;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_7;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t3528271667* ___decode_buf_8;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_9;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_10;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_11;

public:
	inline static int32_t get_offset_of_internalEncoding_3() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalEncoding_3)); }
	inline Encoding_t1523322056 * get_internalEncoding_3() const { return ___internalEncoding_3; }
	inline Encoding_t1523322056 ** get_address_of_internalEncoding_3() { return &___internalEncoding_3; }
	inline void set_internalEncoding_3(Encoding_t1523322056 * value)
	{
		___internalEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalEncoding_3), value);
	}

	inline static int32_t get_offset_of_internalStream_4() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalStream_4)); }
	inline Stream_t1273022909 * get_internalStream_4() const { return ___internalStream_4; }
	inline Stream_t1273022909 ** get_address_of_internalStream_4() { return &___internalStream_4; }
	inline void set_internalStream_4(Stream_t1273022909 * value)
	{
		___internalStream_4 = value;
		Il2CppCodeGenWriteBarrier((&___internalStream_4), value);
	}

	inline static int32_t get_offset_of_iflush_5() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___iflush_5)); }
	inline bool get_iflush_5() const { return ___iflush_5; }
	inline bool* get_address_of_iflush_5() { return &___iflush_5; }
	inline void set_iflush_5(bool value)
	{
		___iflush_5 = value;
	}

	inline static int32_t get_offset_of_byte_buf_6() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_buf_6)); }
	inline ByteU5BU5D_t4116647657* get_byte_buf_6() const { return ___byte_buf_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_byte_buf_6() { return &___byte_buf_6; }
	inline void set_byte_buf_6(ByteU5BU5D_t4116647657* value)
	{
		___byte_buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___byte_buf_6), value);
	}

	inline static int32_t get_offset_of_byte_pos_7() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_pos_7)); }
	inline int32_t get_byte_pos_7() const { return ___byte_pos_7; }
	inline int32_t* get_address_of_byte_pos_7() { return &___byte_pos_7; }
	inline void set_byte_pos_7(int32_t value)
	{
		___byte_pos_7 = value;
	}

	inline static int32_t get_offset_of_decode_buf_8() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_buf_8)); }
	inline CharU5BU5D_t3528271667* get_decode_buf_8() const { return ___decode_buf_8; }
	inline CharU5BU5D_t3528271667** get_address_of_decode_buf_8() { return &___decode_buf_8; }
	inline void set_decode_buf_8(CharU5BU5D_t3528271667* value)
	{
		___decode_buf_8 = value;
		Il2CppCodeGenWriteBarrier((&___decode_buf_8), value);
	}

	inline static int32_t get_offset_of_decode_pos_9() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_pos_9)); }
	inline int32_t get_decode_pos_9() const { return ___decode_pos_9; }
	inline int32_t* get_address_of_decode_pos_9() { return &___decode_pos_9; }
	inline void set_decode_pos_9(int32_t value)
	{
		___decode_pos_9 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_10() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___DisposedAlready_10)); }
	inline bool get_DisposedAlready_10() const { return ___DisposedAlready_10; }
	inline bool* get_address_of_DisposedAlready_10() { return &___DisposedAlready_10; }
	inline void set_DisposedAlready_10(bool value)
	{
		___DisposedAlready_10 = value;
	}

	inline static int32_t get_offset_of_preamble_done_11() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___preamble_done_11)); }
	inline bool get_preamble_done_11() const { return ___preamble_done_11; }
	inline bool* get_address_of_preamble_done_11() { return &___preamble_done_11; }
	inline void set_preamble_done_11(bool value)
	{
		___preamble_done_11 = value;
	}
};

struct StreamWriter_t1266378904_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1266378904 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904_StaticFields, ___Null_12)); }
	inline StreamWriter_t1266378904 * get_Null_12() const { return ___Null_12; }
	inline StreamWriter_t1266378904 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamWriter_t1266378904 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITER_T1266378904_H
#ifndef U24ARRAYTYPEU248_T3244137464_H
#define U24ARRAYTYPEU248_T3244137464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t3244137464 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t3244137464__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T3244137464_H
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
#ifndef STRINGREADER_T3465604688_H
#define STRINGREADER_T3465604688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3465604688  : public TextReader_t283511965
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_1;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_2;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_nextChar_2() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___nextChar_2)); }
	inline int32_t get_nextChar_2() const { return ___nextChar_2; }
	inline int32_t* get_address_of_nextChar_2() { return &___nextChar_2; }
	inline void set_nextChar_2(int32_t value)
	{
		___nextChar_2 = value;
	}

	inline static int32_t get_offset_of_sourceLength_3() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___sourceLength_3)); }
	inline int32_t get_sourceLength_3() const { return ___sourceLength_3; }
	inline int32_t* get_address_of_sourceLength_3() { return &___sourceLength_3; }
	inline void set_sourceLength_3(int32_t value)
	{
		___sourceLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3465604688_H
#ifndef DTDENTITYBASE_T1228162861_H
#define DTDENTITYBASE_T1228162861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDEntityBase
struct  DTDEntityBase_t1228162861  : public DTDNode_t858560093
{
public:
	// System.String Mono.Xml.DTDEntityBase::name
	String_t* ___name_5;
	// System.String Mono.Xml.DTDEntityBase::publicId
	String_t* ___publicId_6;
	// System.String Mono.Xml.DTDEntityBase::systemId
	String_t* ___systemId_7;
	// System.String Mono.Xml.DTDEntityBase::literalValue
	String_t* ___literalValue_8;
	// System.String Mono.Xml.DTDEntityBase::replacementText
	String_t* ___replacementText_9;
	// System.String Mono.Xml.DTDEntityBase::uriString
	String_t* ___uriString_10;
	// System.Uri Mono.Xml.DTDEntityBase::absUri
	Uri_t100236324 * ___absUri_11;
	// System.Boolean Mono.Xml.DTDEntityBase::isInvalid
	bool ___isInvalid_12;
	// System.Boolean Mono.Xml.DTDEntityBase::loadFailed
	bool ___loadFailed_13;
	// System.Xml.XmlResolver Mono.Xml.DTDEntityBase::resolver
	XmlResolver_t626023767 * ___resolver_14;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(DTDEntityBase_t1228162861, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((&___name_5), value);
	}

	inline static int32_t get_offset_of_publicId_6() { return static_cast<int32_t>(offsetof(DTDEntityBase_t1228162861, ___publicId_6)); }
	inline String_t* get_publicId_6() const { return ___publicId_6; }
	inline String_t** get_address_of_publicId_6() { return &___publicId_6; }
	inline void set_publicId_6(String_t* value)
	{
		___publicId_6 = value;
		Il2CppCodeGenWriteBarrier((&___publicId_6), value);
	}

	inline static int32_t get_offset_of_systemId_7() { return static_cast<int32_t>(offsetof(DTDEntityBase_t1228162861, ___systemId_7)); }
	inline String_t* get_systemId_7() const { return ___systemId_7; }
	inline String_t** get_address_of_systemId_7() { return &___systemId_7; }
	inline void set_systemId_7(String_t* value)
	{
		___systemId_7 = value;
		Il2CppCodeGenWriteBarrier((&___systemId_7), value);
	}

	inline static int32_t get_offset_of_literalValue_8() { return static_cast<int32_t>(offsetof(DTDEntityBase_t1228162861, ___literalValue_8)); }
	inline String_t* get_literalValue_8() const { return ___literalValue_8; }
	inline String_t** get_address_of_literalValue_8() { return &___literalValue_8; }
	inline void set_literalValue_8(String_t* value)
	{
		___literalValue_8 = value;
		Il2CppCodeGenWriteBarrier((&___literalValue_8), value);
	}

	inline static int32_t get_offset_of_replacementText_9() { return static_cast<int32_t>(offsetof(DTDEntityBase_t1228162861, ___replacementText_9)); }
	inline String_t* get_replacementText_9() const { return ___replacementText_9; }
	inline String_t** get_address_of_replacementText_9() { return &___replacementText_9; }
	inline void set_replacementText_9(String_t* value)
	{
		___replacementText_9 = value;
		Il2CppCodeGenWriteBarrier((&___replacementText_9), value);
	}

	inline static int32_t get_offset_of_uriString_10() { return static_cast<int32_t>(offsetof(DTDEntityBase_t1228162861, ___uriString_10)); }
	inline String_t* get_uriString_10() const { return ___uriString_10; }
	inline String_t** get_address_of_uriString_10() { return &___uriString_10; }
	inline void set_uriString_10(String_t* value)
	{
		___uriString_10 = value;
		Il2CppCodeGenWriteBarrier((&___uriString_10), value);
	}

	inline static int32_t get_offset_of_absUri_11() { return static_cast<int32_t>(offsetof(DTDEntityBase_t1228162861, ___absUri_11)); }
	inline Uri_t100236324 * get_absUri_11() const { return ___absUri_11; }
	inline Uri_t100236324 ** get_address_of_absUri_11() { return &___absUri_11; }
	inline void set_absUri_11(Uri_t100236324 * value)
	{
		___absUri_11 = value;
		Il2CppCodeGenWriteBarrier((&___absUri_11), value);
	}

	inline static int32_t get_offset_of_isInvalid_12() { return static_cast<int32_t>(offsetof(DTDEntityBase_t1228162861, ___isInvalid_12)); }
	inline bool get_isInvalid_12() const { return ___isInvalid_12; }
	inline bool* get_address_of_isInvalid_12() { return &___isInvalid_12; }
	inline void set_isInvalid_12(bool value)
	{
		___isInvalid_12 = value;
	}

	inline static int32_t get_offset_of_loadFailed_13() { return static_cast<int32_t>(offsetof(DTDEntityBase_t1228162861, ___loadFailed_13)); }
	inline bool get_loadFailed_13() const { return ___loadFailed_13; }
	inline bool* get_address_of_loadFailed_13() { return &___loadFailed_13; }
	inline void set_loadFailed_13(bool value)
	{
		___loadFailed_13 = value;
	}

	inline static int32_t get_offset_of_resolver_14() { return static_cast<int32_t>(offsetof(DTDEntityBase_t1228162861, ___resolver_14)); }
	inline XmlResolver_t626023767 * get_resolver_14() const { return ___resolver_14; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_14() { return &___resolver_14; }
	inline void set_resolver_14(XmlResolver_t626023767 * value)
	{
		___resolver_14 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDENTITYBASE_T1228162861_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef STRINGWRITER_T802263757_H
#define STRINGWRITER_T802263757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t802263757  : public TextWriter_t3478189236
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___internalString_3)); }
	inline StringBuilder_t * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T802263757_H
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
#ifndef DTDVALIDATINGREADER_T3946379043_H
#define DTDVALIDATINGREADER_T3946379043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDValidatingReader
struct  DTDValidatingReader_t3946379043  : public XmlReader_t3121518892
{
public:
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::reader
	EntityResolvingXmlReader_t1267732406 * ___reader_2;
	// System.Xml.XmlTextReader Mono.Xml.DTDValidatingReader::sourceTextReader
	XmlTextReader_t4233384356 * ___sourceTextReader_3;
	// System.Xml.XmlValidatingReader Mono.Xml.DTDValidatingReader::validatingReader
	XmlValidatingReader_t1719295192 * ___validatingReader_4;
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::dtd
	DTDObjectModel_t1729680289 * ___dtd_5;
	// System.Xml.XmlResolver Mono.Xml.DTDValidatingReader::resolver
	XmlResolver_t626023767 * ___resolver_6;
	// System.String Mono.Xml.DTDValidatingReader::currentElement
	String_t* ___currentElement_7;
	// Mono.Xml.DTDValidatingReader/AttributeSlot[] Mono.Xml.DTDValidatingReader::attributes
	AttributeSlotU5BU5D_t600906362* ___attributes_8;
	// System.Int32 Mono.Xml.DTDValidatingReader::attributeCount
	int32_t ___attributeCount_9;
	// System.Int32 Mono.Xml.DTDValidatingReader::currentAttribute
	int32_t ___currentAttribute_10;
	// System.Boolean Mono.Xml.DTDValidatingReader::consumedAttribute
	bool ___consumedAttribute_11;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::elementStack
	Stack_t2329662280 * ___elementStack_12;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::automataStack
	Stack_t2329662280 * ___automataStack_13;
	// System.Boolean Mono.Xml.DTDValidatingReader::popScope
	bool ___popScope_14;
	// System.Boolean Mono.Xml.DTDValidatingReader::isStandalone
	bool ___isStandalone_15;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::currentAutomata
	DTDAutomata_t781538777 * ___currentAutomata_16;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::previousAutomata
	DTDAutomata_t781538777 * ___previousAutomata_17;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::idList
	ArrayList_t2718874744 * ___idList_18;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::missingIDReferences
	ArrayList_t2718874744 * ___missingIDReferences_19;
	// System.Xml.XmlNamespaceManager Mono.Xml.DTDValidatingReader::nsmgr
	XmlNamespaceManager_t418790500 * ___nsmgr_20;
	// System.String Mono.Xml.DTDValidatingReader::currentTextValue
	String_t* ___currentTextValue_21;
	// System.String Mono.Xml.DTDValidatingReader::constructingTextValue
	String_t* ___constructingTextValue_22;
	// System.Boolean Mono.Xml.DTDValidatingReader::shouldResetCurrentTextValue
	bool ___shouldResetCurrentTextValue_23;
	// System.Boolean Mono.Xml.DTDValidatingReader::isSignificantWhitespace
	bool ___isSignificantWhitespace_24;
	// System.Boolean Mono.Xml.DTDValidatingReader::isWhitespace
	bool ___isWhitespace_25;
	// System.Boolean Mono.Xml.DTDValidatingReader::isText
	bool ___isText_26;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::attributeValueEntityStack
	Stack_t2329662280 * ___attributeValueEntityStack_27;
	// System.Text.StringBuilder Mono.Xml.DTDValidatingReader::valueBuilder
	StringBuilder_t * ___valueBuilder_28;
	// System.Char[] Mono.Xml.DTDValidatingReader::whitespaceChars
	CharU5BU5D_t3528271667* ___whitespaceChars_29;

public:
	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___reader_2)); }
	inline EntityResolvingXmlReader_t1267732406 * get_reader_2() const { return ___reader_2; }
	inline EntityResolvingXmlReader_t1267732406 ** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(EntityResolvingXmlReader_t1267732406 * value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier((&___reader_2), value);
	}

	inline static int32_t get_offset_of_sourceTextReader_3() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___sourceTextReader_3)); }
	inline XmlTextReader_t4233384356 * get_sourceTextReader_3() const { return ___sourceTextReader_3; }
	inline XmlTextReader_t4233384356 ** get_address_of_sourceTextReader_3() { return &___sourceTextReader_3; }
	inline void set_sourceTextReader_3(XmlTextReader_t4233384356 * value)
	{
		___sourceTextReader_3 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTextReader_3), value);
	}

	inline static int32_t get_offset_of_validatingReader_4() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___validatingReader_4)); }
	inline XmlValidatingReader_t1719295192 * get_validatingReader_4() const { return ___validatingReader_4; }
	inline XmlValidatingReader_t1719295192 ** get_address_of_validatingReader_4() { return &___validatingReader_4; }
	inline void set_validatingReader_4(XmlValidatingReader_t1719295192 * value)
	{
		___validatingReader_4 = value;
		Il2CppCodeGenWriteBarrier((&___validatingReader_4), value);
	}

	inline static int32_t get_offset_of_dtd_5() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___dtd_5)); }
	inline DTDObjectModel_t1729680289 * get_dtd_5() const { return ___dtd_5; }
	inline DTDObjectModel_t1729680289 ** get_address_of_dtd_5() { return &___dtd_5; }
	inline void set_dtd_5(DTDObjectModel_t1729680289 * value)
	{
		___dtd_5 = value;
		Il2CppCodeGenWriteBarrier((&___dtd_5), value);
	}

	inline static int32_t get_offset_of_resolver_6() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___resolver_6)); }
	inline XmlResolver_t626023767 * get_resolver_6() const { return ___resolver_6; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_6() { return &___resolver_6; }
	inline void set_resolver_6(XmlResolver_t626023767 * value)
	{
		___resolver_6 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_6), value);
	}

	inline static int32_t get_offset_of_currentElement_7() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___currentElement_7)); }
	inline String_t* get_currentElement_7() const { return ___currentElement_7; }
	inline String_t** get_address_of_currentElement_7() { return &___currentElement_7; }
	inline void set_currentElement_7(String_t* value)
	{
		___currentElement_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_7), value);
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___attributes_8)); }
	inline AttributeSlotU5BU5D_t600906362* get_attributes_8() const { return ___attributes_8; }
	inline AttributeSlotU5BU5D_t600906362** get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(AttributeSlotU5BU5D_t600906362* value)
	{
		___attributes_8 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_8), value);
	}

	inline static int32_t get_offset_of_attributeCount_9() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___attributeCount_9)); }
	inline int32_t get_attributeCount_9() const { return ___attributeCount_9; }
	inline int32_t* get_address_of_attributeCount_9() { return &___attributeCount_9; }
	inline void set_attributeCount_9(int32_t value)
	{
		___attributeCount_9 = value;
	}

	inline static int32_t get_offset_of_currentAttribute_10() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___currentAttribute_10)); }
	inline int32_t get_currentAttribute_10() const { return ___currentAttribute_10; }
	inline int32_t* get_address_of_currentAttribute_10() { return &___currentAttribute_10; }
	inline void set_currentAttribute_10(int32_t value)
	{
		___currentAttribute_10 = value;
	}

	inline static int32_t get_offset_of_consumedAttribute_11() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___consumedAttribute_11)); }
	inline bool get_consumedAttribute_11() const { return ___consumedAttribute_11; }
	inline bool* get_address_of_consumedAttribute_11() { return &___consumedAttribute_11; }
	inline void set_consumedAttribute_11(bool value)
	{
		___consumedAttribute_11 = value;
	}

	inline static int32_t get_offset_of_elementStack_12() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___elementStack_12)); }
	inline Stack_t2329662280 * get_elementStack_12() const { return ___elementStack_12; }
	inline Stack_t2329662280 ** get_address_of_elementStack_12() { return &___elementStack_12; }
	inline void set_elementStack_12(Stack_t2329662280 * value)
	{
		___elementStack_12 = value;
		Il2CppCodeGenWriteBarrier((&___elementStack_12), value);
	}

	inline static int32_t get_offset_of_automataStack_13() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___automataStack_13)); }
	inline Stack_t2329662280 * get_automataStack_13() const { return ___automataStack_13; }
	inline Stack_t2329662280 ** get_address_of_automataStack_13() { return &___automataStack_13; }
	inline void set_automataStack_13(Stack_t2329662280 * value)
	{
		___automataStack_13 = value;
		Il2CppCodeGenWriteBarrier((&___automataStack_13), value);
	}

	inline static int32_t get_offset_of_popScope_14() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___popScope_14)); }
	inline bool get_popScope_14() const { return ___popScope_14; }
	inline bool* get_address_of_popScope_14() { return &___popScope_14; }
	inline void set_popScope_14(bool value)
	{
		___popScope_14 = value;
	}

	inline static int32_t get_offset_of_isStandalone_15() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___isStandalone_15)); }
	inline bool get_isStandalone_15() const { return ___isStandalone_15; }
	inline bool* get_address_of_isStandalone_15() { return &___isStandalone_15; }
	inline void set_isStandalone_15(bool value)
	{
		___isStandalone_15 = value;
	}

	inline static int32_t get_offset_of_currentAutomata_16() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___currentAutomata_16)); }
	inline DTDAutomata_t781538777 * get_currentAutomata_16() const { return ___currentAutomata_16; }
	inline DTDAutomata_t781538777 ** get_address_of_currentAutomata_16() { return &___currentAutomata_16; }
	inline void set_currentAutomata_16(DTDAutomata_t781538777 * value)
	{
		___currentAutomata_16 = value;
		Il2CppCodeGenWriteBarrier((&___currentAutomata_16), value);
	}

	inline static int32_t get_offset_of_previousAutomata_17() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___previousAutomata_17)); }
	inline DTDAutomata_t781538777 * get_previousAutomata_17() const { return ___previousAutomata_17; }
	inline DTDAutomata_t781538777 ** get_address_of_previousAutomata_17() { return &___previousAutomata_17; }
	inline void set_previousAutomata_17(DTDAutomata_t781538777 * value)
	{
		___previousAutomata_17 = value;
		Il2CppCodeGenWriteBarrier((&___previousAutomata_17), value);
	}

	inline static int32_t get_offset_of_idList_18() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___idList_18)); }
	inline ArrayList_t2718874744 * get_idList_18() const { return ___idList_18; }
	inline ArrayList_t2718874744 ** get_address_of_idList_18() { return &___idList_18; }
	inline void set_idList_18(ArrayList_t2718874744 * value)
	{
		___idList_18 = value;
		Il2CppCodeGenWriteBarrier((&___idList_18), value);
	}

	inline static int32_t get_offset_of_missingIDReferences_19() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___missingIDReferences_19)); }
	inline ArrayList_t2718874744 * get_missingIDReferences_19() const { return ___missingIDReferences_19; }
	inline ArrayList_t2718874744 ** get_address_of_missingIDReferences_19() { return &___missingIDReferences_19; }
	inline void set_missingIDReferences_19(ArrayList_t2718874744 * value)
	{
		___missingIDReferences_19 = value;
		Il2CppCodeGenWriteBarrier((&___missingIDReferences_19), value);
	}

	inline static int32_t get_offset_of_nsmgr_20() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___nsmgr_20)); }
	inline XmlNamespaceManager_t418790500 * get_nsmgr_20() const { return ___nsmgr_20; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_nsmgr_20() { return &___nsmgr_20; }
	inline void set_nsmgr_20(XmlNamespaceManager_t418790500 * value)
	{
		___nsmgr_20 = value;
		Il2CppCodeGenWriteBarrier((&___nsmgr_20), value);
	}

	inline static int32_t get_offset_of_currentTextValue_21() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___currentTextValue_21)); }
	inline String_t* get_currentTextValue_21() const { return ___currentTextValue_21; }
	inline String_t** get_address_of_currentTextValue_21() { return &___currentTextValue_21; }
	inline void set_currentTextValue_21(String_t* value)
	{
		___currentTextValue_21 = value;
		Il2CppCodeGenWriteBarrier((&___currentTextValue_21), value);
	}

	inline static int32_t get_offset_of_constructingTextValue_22() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___constructingTextValue_22)); }
	inline String_t* get_constructingTextValue_22() const { return ___constructingTextValue_22; }
	inline String_t** get_address_of_constructingTextValue_22() { return &___constructingTextValue_22; }
	inline void set_constructingTextValue_22(String_t* value)
	{
		___constructingTextValue_22 = value;
		Il2CppCodeGenWriteBarrier((&___constructingTextValue_22), value);
	}

	inline static int32_t get_offset_of_shouldResetCurrentTextValue_23() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___shouldResetCurrentTextValue_23)); }
	inline bool get_shouldResetCurrentTextValue_23() const { return ___shouldResetCurrentTextValue_23; }
	inline bool* get_address_of_shouldResetCurrentTextValue_23() { return &___shouldResetCurrentTextValue_23; }
	inline void set_shouldResetCurrentTextValue_23(bool value)
	{
		___shouldResetCurrentTextValue_23 = value;
	}

	inline static int32_t get_offset_of_isSignificantWhitespace_24() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___isSignificantWhitespace_24)); }
	inline bool get_isSignificantWhitespace_24() const { return ___isSignificantWhitespace_24; }
	inline bool* get_address_of_isSignificantWhitespace_24() { return &___isSignificantWhitespace_24; }
	inline void set_isSignificantWhitespace_24(bool value)
	{
		___isSignificantWhitespace_24 = value;
	}

	inline static int32_t get_offset_of_isWhitespace_25() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___isWhitespace_25)); }
	inline bool get_isWhitespace_25() const { return ___isWhitespace_25; }
	inline bool* get_address_of_isWhitespace_25() { return &___isWhitespace_25; }
	inline void set_isWhitespace_25(bool value)
	{
		___isWhitespace_25 = value;
	}

	inline static int32_t get_offset_of_isText_26() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___isText_26)); }
	inline bool get_isText_26() const { return ___isText_26; }
	inline bool* get_address_of_isText_26() { return &___isText_26; }
	inline void set_isText_26(bool value)
	{
		___isText_26 = value;
	}

	inline static int32_t get_offset_of_attributeValueEntityStack_27() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___attributeValueEntityStack_27)); }
	inline Stack_t2329662280 * get_attributeValueEntityStack_27() const { return ___attributeValueEntityStack_27; }
	inline Stack_t2329662280 ** get_address_of_attributeValueEntityStack_27() { return &___attributeValueEntityStack_27; }
	inline void set_attributeValueEntityStack_27(Stack_t2329662280 * value)
	{
		___attributeValueEntityStack_27 = value;
		Il2CppCodeGenWriteBarrier((&___attributeValueEntityStack_27), value);
	}

	inline static int32_t get_offset_of_valueBuilder_28() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___valueBuilder_28)); }
	inline StringBuilder_t * get_valueBuilder_28() const { return ___valueBuilder_28; }
	inline StringBuilder_t ** get_address_of_valueBuilder_28() { return &___valueBuilder_28; }
	inline void set_valueBuilder_28(StringBuilder_t * value)
	{
		___valueBuilder_28 = value;
		Il2CppCodeGenWriteBarrier((&___valueBuilder_28), value);
	}

	inline static int32_t get_offset_of_whitespaceChars_29() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___whitespaceChars_29)); }
	inline CharU5BU5D_t3528271667* get_whitespaceChars_29() const { return ___whitespaceChars_29; }
	inline CharU5BU5D_t3528271667** get_address_of_whitespaceChars_29() { return &___whitespaceChars_29; }
	inline void set_whitespaceChars_29(CharU5BU5D_t3528271667* value)
	{
		___whitespaceChars_29 = value;
		Il2CppCodeGenWriteBarrier((&___whitespaceChars_29), value);
	}
};

struct DTDValidatingReader_t3946379043_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.DTDValidatingReader::<>f__switch$map43
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map43_30;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map43_30() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043_StaticFields, ___U3CU3Ef__switchU24map43_30)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map43_30() const { return ___U3CU3Ef__switchU24map43_30; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map43_30() { return &___U3CU3Ef__switchU24map43_30; }
	inline void set_U3CU3Ef__switchU24map43_30(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map43_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map43_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDVALIDATINGREADER_T3946379043_H
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
#ifndef U24ARRAYTYPEU24256_T1929481985_H
#define U24ARRAYTYPEU24256_T1929481985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1929481985 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t1929481985__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1929481985_H
#ifndef U24ARRAYTYPEU241280_T4290130235_H
#define U24ARRAYTYPEU241280_T4290130235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1280
struct  U24ArrayTypeU241280_t4290130235 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241280_t4290130235__padding[1280];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241280_T4290130235_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef XMLNODETYPE_T1672767151_H
#define XMLNODETYPE_T1672767151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeType
struct  XmlNodeType_t1672767151 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlNodeType_t1672767151, ___value___1)); }
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
#endif // XMLNODETYPE_T1672767151_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef XMLTOKENIZEDTYPE_T3348692225_H
#define XMLTOKENIZEDTYPE_T3348692225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTokenizedType
struct  XmlTokenizedType_t3348692225 
{
public:
	// System.Int32 System.Xml.XmlTokenizedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlTokenizedType_t3348692225, ___value___1)); }
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
#endif // XMLTOKENIZEDTYPE_T3348692225_H
#ifndef AUTHENTICATIONLEVEL_T1236753641_H
#define AUTHENTICATIONLEVEL_T1236753641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t1236753641 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t1236753641, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_T1236753641_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
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
#ifndef XMLSCHEMAEXCEPTION_T3511258692_H
#define XMLSCHEMAEXCEPTION_T3511258692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaException
struct  XmlSchemaException_t3511258692  : public SystemException_t176217640
{
public:
	// System.Boolean System.Xml.Schema.XmlSchemaException::hasLineInfo
	bool ___hasLineInfo_11;
	// System.Int32 System.Xml.Schema.XmlSchemaException::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 System.Xml.Schema.XmlSchemaException::linePosition
	int32_t ___linePosition_13;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaException::sourceObj
	XmlSchemaObject_t1315720168 * ___sourceObj_14;
	// System.String System.Xml.Schema.XmlSchemaException::sourceUri
	String_t* ___sourceUri_15;

public:
	inline static int32_t get_offset_of_hasLineInfo_11() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___hasLineInfo_11)); }
	inline bool get_hasLineInfo_11() const { return ___hasLineInfo_11; }
	inline bool* get_address_of_hasLineInfo_11() { return &___hasLineInfo_11; }
	inline void set_hasLineInfo_11(bool value)
	{
		___hasLineInfo_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_linePosition_13() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___linePosition_13)); }
	inline int32_t get_linePosition_13() const { return ___linePosition_13; }
	inline int32_t* get_address_of_linePosition_13() { return &___linePosition_13; }
	inline void set_linePosition_13(int32_t value)
	{
		___linePosition_13 = value;
	}

	inline static int32_t get_offset_of_sourceObj_14() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___sourceObj_14)); }
	inline XmlSchemaObject_t1315720168 * get_sourceObj_14() const { return ___sourceObj_14; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_sourceObj_14() { return &___sourceObj_14; }
	inline void set_sourceObj_14(XmlSchemaObject_t1315720168 * value)
	{
		___sourceObj_14 = value;
		Il2CppCodeGenWriteBarrier((&___sourceObj_14), value);
	}

	inline static int32_t get_offset_of_sourceUri_15() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___sourceUri_15)); }
	inline String_t* get_sourceUri_15() const { return ___sourceUri_15; }
	inline String_t** get_address_of_sourceUri_15() { return &___sourceUri_15; }
	inline void set_sourceUri_15(String_t* value)
	{
		___sourceUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAEXCEPTION_T3511258692_H
#ifndef XMLSEVERITYTYPE_T1894651412_H
#define XMLSEVERITYTYPE_T1894651412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSeverityType
struct  XmlSeverityType_t1894651412 
{
public:
	// System.Int32 System.Xml.Schema.XmlSeverityType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSeverityType_t1894651412, ___value___1)); }
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
#endif // XMLSEVERITYTYPE_T1894651412_H
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
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef FILEMODE_T1183438340_H
#define FILEMODE_T1183438340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t1183438340 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t1183438340, ___value___1)); }
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
#endif // FILEMODE_T1183438340_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef VALIDATIONTYPE_T4049928607_H
#define VALIDATIONTYPE_T4049928607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ValidationType
struct  ValidationType_t4049928607 
{
public:
	// System.Int32 System.Xml.ValidationType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ValidationType_t4049928607, ___value___1)); }
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
#endif // VALIDATIONTYPE_T4049928607_H
#ifndef XMLEXCEPTION_T1761730631_H
#define XMLEXCEPTION_T1761730631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlException
struct  XmlException_t1761730631  : public SystemException_t176217640
{
public:
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_11;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_12;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_13;
	// System.String System.Xml.XmlException::res
	String_t* ___res_14;
	// System.String[] System.Xml.XmlException::messages
	StringU5BU5D_t1281789340* ___messages_15;

public:
	inline static int32_t get_offset_of_lineNumber_11() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___lineNumber_11)); }
	inline int32_t get_lineNumber_11() const { return ___lineNumber_11; }
	inline int32_t* get_address_of_lineNumber_11() { return &___lineNumber_11; }
	inline void set_lineNumber_11(int32_t value)
	{
		___lineNumber_11 = value;
	}

	inline static int32_t get_offset_of_linePosition_12() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___linePosition_12)); }
	inline int32_t get_linePosition_12() const { return ___linePosition_12; }
	inline int32_t* get_address_of_linePosition_12() { return &___linePosition_12; }
	inline void set_linePosition_12(int32_t value)
	{
		___linePosition_12 = value;
	}

	inline static int32_t get_offset_of_sourceUri_13() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___sourceUri_13)); }
	inline String_t* get_sourceUri_13() const { return ___sourceUri_13; }
	inline String_t** get_address_of_sourceUri_13() { return &___sourceUri_13; }
	inline void set_sourceUri_13(String_t* value)
	{
		___sourceUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_13), value);
	}

	inline static int32_t get_offset_of_res_14() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___res_14)); }
	inline String_t* get_res_14() const { return ___res_14; }
	inline String_t** get_address_of_res_14() { return &___res_14; }
	inline void set_res_14(String_t* value)
	{
		___res_14 = value;
		Il2CppCodeGenWriteBarrier((&___res_14), value);
	}

	inline static int32_t get_offset_of_messages_15() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___messages_15)); }
	inline StringU5BU5D_t1281789340* get_messages_15() const { return ___messages_15; }
	inline StringU5BU5D_t1281789340** get_address_of_messages_15() { return &___messages_15; }
	inline void set_messages_15(StringU5BU5D_t1281789340* value)
	{
		___messages_15 = value;
		Il2CppCodeGenWriteBarrier((&___messages_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLEXCEPTION_T1761730631_H
#ifndef FILESHARE_T3553318550_H
#define FILESHARE_T3553318550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileShare
struct  FileShare_t3553318550 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileShare_t3553318550, ___value___1)); }
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
#endif // FILESHARE_T3553318550_H
#ifndef NAMESPACEHANDLING_T4087553436_H
#define NAMESPACEHANDLING_T4087553436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NamespaceHandling
struct  NamespaceHandling_t4087553436 
{
public:
	// System.Int32 System.Xml.NamespaceHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NamespaceHandling_t4087553436, ___value___1)); }
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
#endif // NAMESPACEHANDLING_T4087553436_H
#ifndef XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#define XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaValidationFlags
struct  XmlSchemaValidationFlags_t877176585 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaValidationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSchemaValidationFlags_t877176585, ___value___1)); }
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
#endif // XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#ifndef XMLSCHEMASET_T266093086_H
#define XMLSCHEMASET_T266093086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSet
struct  XmlSchemaSet_t266093086  : public RuntimeObject
{
public:
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_t71772148 * ___nameTable_0;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaSet::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_1;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaSet::schemas
	ArrayList_t2718874744 * ___schemas_2;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::attributes
	XmlSchemaObjectTable_t2546974348 * ___attributes_3;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::elements
	XmlSchemaObjectTable_t2546974348 * ___elements_4;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::types
	XmlSchemaObjectTable_t2546974348 * ___types_5;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::idCollection
	Hashtable_t1853889766 * ___idCollection_6;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::namedIdentities
	XmlSchemaObjectTable_t2546974348 * ___namedIdentities_7;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::settings
	XmlSchemaCompilationSettings_t2218765537 * ___settings_8;
	// System.Boolean System.Xml.Schema.XmlSchemaSet::isCompiled
	bool ___isCompiled_9;
	// System.Guid System.Xml.Schema.XmlSchemaSet::CompilationId
	Guid_t  ___CompilationId_10;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaSet::ValidationEventHandler
	ValidationEventHandler_t791314227 * ___ValidationEventHandler_11;

public:
	inline static int32_t get_offset_of_nameTable_0() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___nameTable_0)); }
	inline XmlNameTable_t71772148 * get_nameTable_0() const { return ___nameTable_0; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_0() { return &___nameTable_0; }
	inline void set_nameTable_0(XmlNameTable_t71772148 * value)
	{
		___nameTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_0), value);
	}

	inline static int32_t get_offset_of_xmlResolver_1() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___xmlResolver_1)); }
	inline XmlResolver_t626023767 * get_xmlResolver_1() const { return ___xmlResolver_1; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_1() { return &___xmlResolver_1; }
	inline void set_xmlResolver_1(XmlResolver_t626023767 * value)
	{
		___xmlResolver_1 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_1), value);
	}

	inline static int32_t get_offset_of_schemas_2() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___schemas_2)); }
	inline ArrayList_t2718874744 * get_schemas_2() const { return ___schemas_2; }
	inline ArrayList_t2718874744 ** get_address_of_schemas_2() { return &___schemas_2; }
	inline void set_schemas_2(ArrayList_t2718874744 * value)
	{
		___schemas_2 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_2), value);
	}

	inline static int32_t get_offset_of_attributes_3() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___attributes_3)); }
	inline XmlSchemaObjectTable_t2546974348 * get_attributes_3() const { return ___attributes_3; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_attributes_3() { return &___attributes_3; }
	inline void set_attributes_3(XmlSchemaObjectTable_t2546974348 * value)
	{
		___attributes_3 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_3), value);
	}

	inline static int32_t get_offset_of_elements_4() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___elements_4)); }
	inline XmlSchemaObjectTable_t2546974348 * get_elements_4() const { return ___elements_4; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_elements_4() { return &___elements_4; }
	inline void set_elements_4(XmlSchemaObjectTable_t2546974348 * value)
	{
		___elements_4 = value;
		Il2CppCodeGenWriteBarrier((&___elements_4), value);
	}

	inline static int32_t get_offset_of_types_5() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___types_5)); }
	inline XmlSchemaObjectTable_t2546974348 * get_types_5() const { return ___types_5; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_types_5() { return &___types_5; }
	inline void set_types_5(XmlSchemaObjectTable_t2546974348 * value)
	{
		___types_5 = value;
		Il2CppCodeGenWriteBarrier((&___types_5), value);
	}

	inline static int32_t get_offset_of_idCollection_6() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___idCollection_6)); }
	inline Hashtable_t1853889766 * get_idCollection_6() const { return ___idCollection_6; }
	inline Hashtable_t1853889766 ** get_address_of_idCollection_6() { return &___idCollection_6; }
	inline void set_idCollection_6(Hashtable_t1853889766 * value)
	{
		___idCollection_6 = value;
		Il2CppCodeGenWriteBarrier((&___idCollection_6), value);
	}

	inline static int32_t get_offset_of_namedIdentities_7() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___namedIdentities_7)); }
	inline XmlSchemaObjectTable_t2546974348 * get_namedIdentities_7() const { return ___namedIdentities_7; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_namedIdentities_7() { return &___namedIdentities_7; }
	inline void set_namedIdentities_7(XmlSchemaObjectTable_t2546974348 * value)
	{
		___namedIdentities_7 = value;
		Il2CppCodeGenWriteBarrier((&___namedIdentities_7), value);
	}

	inline static int32_t get_offset_of_settings_8() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___settings_8)); }
	inline XmlSchemaCompilationSettings_t2218765537 * get_settings_8() const { return ___settings_8; }
	inline XmlSchemaCompilationSettings_t2218765537 ** get_address_of_settings_8() { return &___settings_8; }
	inline void set_settings_8(XmlSchemaCompilationSettings_t2218765537 * value)
	{
		___settings_8 = value;
		Il2CppCodeGenWriteBarrier((&___settings_8), value);
	}

	inline static int32_t get_offset_of_isCompiled_9() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___isCompiled_9)); }
	inline bool get_isCompiled_9() const { return ___isCompiled_9; }
	inline bool* get_address_of_isCompiled_9() { return &___isCompiled_9; }
	inline void set_isCompiled_9(bool value)
	{
		___isCompiled_9 = value;
	}

	inline static int32_t get_offset_of_CompilationId_10() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___CompilationId_10)); }
	inline Guid_t  get_CompilationId_10() const { return ___CompilationId_10; }
	inline Guid_t * get_address_of_CompilationId_10() { return &___CompilationId_10; }
	inline void set_CompilationId_10(Guid_t  value)
	{
		___CompilationId_10 = value;
	}

	inline static int32_t get_offset_of_ValidationEventHandler_11() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___ValidationEventHandler_11)); }
	inline ValidationEventHandler_t791314227 * get_ValidationEventHandler_11() const { return ___ValidationEventHandler_11; }
	inline ValidationEventHandler_t791314227 ** get_address_of_ValidationEventHandler_11() { return &___ValidationEventHandler_11; }
	inline void set_ValidationEventHandler_11(ValidationEventHandler_t791314227 * value)
	{
		___ValidationEventHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMASET_T266093086_H
#ifndef XMLSPACE_T3324193251_H
#define XMLSPACE_T3324193251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSpace
struct  XmlSpace_t3324193251 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSpace_t3324193251, ___value___1)); }
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
#endif // XMLSPACE_T3324193251_H
#ifndef XMLSTREAMREADER_T727818754_H
#define XMLSTREAMREADER_T727818754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlStreamReader
struct  XmlStreamReader_t727818754  : public NonBlockingStreamReader_t2495303928
{
public:
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t1691369434 * ___input_12;

public:
	inline static int32_t get_offset_of_input_12() { return static_cast<int32_t>(offsetof(XmlStreamReader_t727818754, ___input_12)); }
	inline XmlInputStream_t1691369434 * get_input_12() const { return ___input_12; }
	inline XmlInputStream_t1691369434 ** get_address_of_input_12() { return &___input_12; }
	inline void set_input_12(XmlInputStream_t1691369434 * value)
	{
		___input_12 = value;
		Il2CppCodeGenWriteBarrier((&___input_12), value);
	}
};

struct XmlStreamReader_t727818754_StaticFields
{
public:
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t1761730631 * ___invalidDataException_13;

public:
	inline static int32_t get_offset_of_invalidDataException_13() { return static_cast<int32_t>(offsetof(XmlStreamReader_t727818754_StaticFields, ___invalidDataException_13)); }
	inline XmlException_t1761730631 * get_invalidDataException_13() const { return ___invalidDataException_13; }
	inline XmlException_t1761730631 ** get_address_of_invalidDataException_13() { return &___invalidDataException_13; }
	inline void set_invalidDataException_13(XmlException_t1761730631 * value)
	{
		___invalidDataException_13 = value;
		Il2CppCodeGenWriteBarrier((&___invalidDataException_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSTREAMREADER_T727818754_H
#ifndef XMLCHARACTERDATA_T1167807131_H
#define XMLCHARACTERDATA_T1167807131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlCharacterData
struct  XmlCharacterData_t1167807131  : public XmlLinkedNode_t1437094927
{
public:
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_6;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(XmlCharacterData_t1167807131, ___data_6)); }
	inline String_t* get_data_6() const { return ___data_6; }
	inline String_t** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(String_t* value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier((&___data_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCHARACTERDATA_T1167807131_H
#ifndef CONFORMANCELEVEL_T3899847875_H
#define CONFORMANCELEVEL_T3899847875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ConformanceLevel
struct  ConformanceLevel_t3899847875 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConformanceLevel_t3899847875, ___value___1)); }
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
#endif // CONFORMANCELEVEL_T3899847875_H
#ifndef XMLPROCESSINGINSTRUCTION_T425688976_H
#define XMLPROCESSINGINSTRUCTION_T425688976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlProcessingInstruction
struct  XmlProcessingInstruction_t425688976  : public XmlLinkedNode_t1437094927
{
public:
	// System.String System.Xml.XmlProcessingInstruction::target
	String_t* ___target_6;
	// System.String System.Xml.XmlProcessingInstruction::data
	String_t* ___data_7;

public:
	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(XmlProcessingInstruction_t425688976, ___target_6)); }
	inline String_t* get_target_6() const { return ___target_6; }
	inline String_t** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(String_t* value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier((&___target_6), value);
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(XmlProcessingInstruction_t425688976, ___data_7)); }
	inline String_t* get_data_7() const { return ___data_7; }
	inline String_t** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(String_t* value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier((&___data_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPROCESSINGINSTRUCTION_T425688976_H
#ifndef DTDPARAMETERENTITYDECLARATION_T3796253422_H
#define DTDPARAMETERENTITYDECLARATION_T3796253422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDParameterEntityDeclaration
struct  DTDParameterEntityDeclaration_t3796253422  : public DTDEntityBase_t1228162861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDPARAMETERENTITYDECLARATION_T3796253422_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef COMMANDSTATE_T1020432923_H
#define COMMANDSTATE_T1020432923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderBinarySupport/CommandState
struct  CommandState_t1020432923 
{
public:
	// System.Int32 System.Xml.XmlReaderBinarySupport/CommandState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandState_t1020432923, ___value___1)); }
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
#endif // COMMANDSTATE_T1020432923_H
#ifndef READSTATE_T944984020_H
#define READSTATE_T944984020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ReadState
struct  ReadState_t944984020 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReadState_t944984020, ___value___1)); }
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
#endif // READSTATE_T944984020_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef NEWLINEHANDLING_T850339274_H
#define NEWLINEHANDLING_T850339274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NewLineHandling
struct  NewLineHandling_t850339274 
{
public:
	// System.Int32 System.Xml.NewLineHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NewLineHandling_t850339274, ___value___1)); }
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
#endif // NEWLINEHANDLING_T850339274_H
#ifndef WHITESPACEHANDLING_T784045650_H
#define WHITESPACEHANDLING_T784045650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.WhitespaceHandling
struct  WhitespaceHandling_t784045650 
{
public:
	// System.Int32 System.Xml.WhitespaceHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WhitespaceHandling_t784045650, ___value___1)); }
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
#endif // WHITESPACEHANDLING_T784045650_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D23_0;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D24_1;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D26_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24256_t1929481985  ___U24U24fieldU2D27_3;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-28
	U24ArrayTypeU24256_t1929481985  ___U24U24fieldU2D28_4;
	// <PrivateImplementationDetails>/$ArrayType$1280 <PrivateImplementationDetails>::$$field-29
	U24ArrayTypeU241280_t4290130235  ___U24U24fieldU2D29_5;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU2412_t2490092599  ___U24U24fieldU2D43_6;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU2412_t2490092599  ___U24U24fieldU2D44_7;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D23_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D23_0)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D23_0() const { return ___U24U24fieldU2D23_0; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D23_0() { return &___U24U24fieldU2D23_0; }
	inline void set_U24U24fieldU2D23_0(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D23_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D24_1)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D24_1() const { return ___U24U24fieldU2D24_1; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D24_1() { return &___U24U24fieldU2D24_1; }
	inline void set_U24U24fieldU2D24_1(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D24_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D26_2)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D26_2() const { return ___U24U24fieldU2D26_2; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D26_2() { return &___U24U24fieldU2D26_2; }
	inline void set_U24U24fieldU2D26_2(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D26_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D27_3)); }
	inline U24ArrayTypeU24256_t1929481985  get_U24U24fieldU2D27_3() const { return ___U24U24fieldU2D27_3; }
	inline U24ArrayTypeU24256_t1929481985 * get_address_of_U24U24fieldU2D27_3() { return &___U24U24fieldU2D27_3; }
	inline void set_U24U24fieldU2D27_3(U24ArrayTypeU24256_t1929481985  value)
	{
		___U24U24fieldU2D27_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D28_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D28_4)); }
	inline U24ArrayTypeU24256_t1929481985  get_U24U24fieldU2D28_4() const { return ___U24U24fieldU2D28_4; }
	inline U24ArrayTypeU24256_t1929481985 * get_address_of_U24U24fieldU2D28_4() { return &___U24U24fieldU2D28_4; }
	inline void set_U24U24fieldU2D28_4(U24ArrayTypeU24256_t1929481985  value)
	{
		___U24U24fieldU2D28_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D29_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D29_5)); }
	inline U24ArrayTypeU241280_t4290130235  get_U24U24fieldU2D29_5() const { return ___U24U24fieldU2D29_5; }
	inline U24ArrayTypeU241280_t4290130235 * get_address_of_U24U24fieldU2D29_5() { return &___U24U24fieldU2D29_5; }
	inline void set_U24U24fieldU2D29_5(U24ArrayTypeU241280_t4290130235  value)
	{
		___U24U24fieldU2D29_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D43_6)); }
	inline U24ArrayTypeU2412_t2490092599  get_U24U24fieldU2D43_6() const { return ___U24U24fieldU2D43_6; }
	inline U24ArrayTypeU2412_t2490092599 * get_address_of_U24U24fieldU2D43_6() { return &___U24U24fieldU2D43_6; }
	inline void set_U24U24fieldU2D43_6(U24ArrayTypeU2412_t2490092599  value)
	{
		___U24U24fieldU2D43_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D44_7)); }
	inline U24ArrayTypeU2412_t2490092599  get_U24U24fieldU2D44_7() const { return ___U24U24fieldU2D44_7; }
	inline U24ArrayTypeU2412_t2490092599 * get_address_of_U24U24fieldU2D44_7() { return &___U24U24fieldU2D44_7; }
	inline void set_U24U24fieldU2D44_7(U24ArrayTypeU2412_t2490092599  value)
	{
		___U24U24fieldU2D44_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifndef XMLDECLSTATE_T1683299469_H
#define XMLDECLSTATE_T1683299469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/XmlDeclState
struct  XmlDeclState_t1683299469 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/XmlDeclState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDeclState_t1683299469, ___value___1)); }
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
#endif // XMLDECLSTATE_T1683299469_H
#ifndef ENTITYHANDLING_T1047276436_H
#define ENTITYHANDLING_T1047276436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.EntityHandling
struct  EntityHandling_t1047276436 
{
public:
	// System.Int32 System.Xml.EntityHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EntityHandling_t1047276436, ___value___1)); }
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
#endif // ENTITYHANDLING_T1047276436_H
#ifndef WRITESTATE_T3983380671_H
#define WRITESTATE_T3983380671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.WriteState
struct  WriteState_t3983380671 
{
public:
	// System.Int32 System.Xml.WriteState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WriteState_t3983380671, ___value___1)); }
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
#endif // WRITESTATE_T3983380671_H
#ifndef XMLNODEINFO_T4030693883_H
#define XMLNODEINFO_T4030693883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/XmlNodeInfo
struct  XmlNodeInfo_t4030693883  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::Prefix
	String_t* ___Prefix_0;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::LocalName
	String_t* ___LocalName_1;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::NS
	String_t* ___NS_2;
	// System.Boolean System.Xml.XmlTextWriter/XmlNodeInfo::HasSimple
	bool ___HasSimple_3;
	// System.Boolean System.Xml.XmlTextWriter/XmlNodeInfo::HasElements
	bool ___HasElements_4;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::XmlLang
	String_t* ___XmlLang_5;
	// System.Xml.XmlSpace System.Xml.XmlTextWriter/XmlNodeInfo::XmlSpace
	int32_t ___XmlSpace_6;

public:
	inline static int32_t get_offset_of_Prefix_0() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___Prefix_0)); }
	inline String_t* get_Prefix_0() const { return ___Prefix_0; }
	inline String_t** get_address_of_Prefix_0() { return &___Prefix_0; }
	inline void set_Prefix_0(String_t* value)
	{
		___Prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___Prefix_0), value);
	}

	inline static int32_t get_offset_of_LocalName_1() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___LocalName_1)); }
	inline String_t* get_LocalName_1() const { return ___LocalName_1; }
	inline String_t** get_address_of_LocalName_1() { return &___LocalName_1; }
	inline void set_LocalName_1(String_t* value)
	{
		___LocalName_1 = value;
		Il2CppCodeGenWriteBarrier((&___LocalName_1), value);
	}

	inline static int32_t get_offset_of_NS_2() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___NS_2)); }
	inline String_t* get_NS_2() const { return ___NS_2; }
	inline String_t** get_address_of_NS_2() { return &___NS_2; }
	inline void set_NS_2(String_t* value)
	{
		___NS_2 = value;
		Il2CppCodeGenWriteBarrier((&___NS_2), value);
	}

	inline static int32_t get_offset_of_HasSimple_3() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___HasSimple_3)); }
	inline bool get_HasSimple_3() const { return ___HasSimple_3; }
	inline bool* get_address_of_HasSimple_3() { return &___HasSimple_3; }
	inline void set_HasSimple_3(bool value)
	{
		___HasSimple_3 = value;
	}

	inline static int32_t get_offset_of_HasElements_4() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___HasElements_4)); }
	inline bool get_HasElements_4() const { return ___HasElements_4; }
	inline bool* get_address_of_HasElements_4() { return &___HasElements_4; }
	inline void set_HasElements_4(bool value)
	{
		___HasElements_4 = value;
	}

	inline static int32_t get_offset_of_XmlLang_5() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___XmlLang_5)); }
	inline String_t* get_XmlLang_5() const { return ___XmlLang_5; }
	inline String_t** get_address_of_XmlLang_5() { return &___XmlLang_5; }
	inline void set_XmlLang_5(String_t* value)
	{
		___XmlLang_5 = value;
		Il2CppCodeGenWriteBarrier((&___XmlLang_5), value);
	}

	inline static int32_t get_offset_of_XmlSpace_6() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___XmlSpace_6)); }
	inline int32_t get_XmlSpace_6() const { return ___XmlSpace_6; }
	inline int32_t* get_address_of_XmlSpace_6() { return &___XmlSpace_6; }
	inline void set_XmlSpace_6(int32_t value)
	{
		___XmlSpace_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODEINFO_T4030693883_H
#ifndef XMLTEXTWRITER_T2114213153_H
#define XMLTEXTWRITER_T2114213153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter
struct  XmlTextWriter_t2114213153  : public XmlWriter_t127905479
{
public:
	// System.IO.Stream System.Xml.XmlTextWriter::base_stream
	Stream_t1273022909 * ___base_stream_3;
	// System.IO.TextWriter System.Xml.XmlTextWriter::source
	TextWriter_t3478189236 * ___source_4;
	// System.IO.TextWriter System.Xml.XmlTextWriter::writer
	TextWriter_t3478189236 * ___writer_5;
	// System.IO.StringWriter System.Xml.XmlTextWriter::preserver
	StringWriter_t802263757 * ___preserver_6;
	// System.String System.Xml.XmlTextWriter::preserved_name
	String_t* ___preserved_name_7;
	// System.Boolean System.Xml.XmlTextWriter::is_preserved_xmlns
	bool ___is_preserved_xmlns_8;
	// System.Boolean System.Xml.XmlTextWriter::allow_doc_fragment
	bool ___allow_doc_fragment_9;
	// System.Boolean System.Xml.XmlTextWriter::close_output_stream
	bool ___close_output_stream_10;
	// System.Boolean System.Xml.XmlTextWriter::ignore_encoding
	bool ___ignore_encoding_11;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_12;
	// System.Xml.XmlTextWriter/XmlDeclState System.Xml.XmlTextWriter::xmldecl_state
	int32_t ___xmldecl_state_13;
	// System.Boolean System.Xml.XmlTextWriter::check_character_validity
	bool ___check_character_validity_14;
	// System.Xml.NewLineHandling System.Xml.XmlTextWriter::newline_handling
	int32_t ___newline_handling_15;
	// System.Boolean System.Xml.XmlTextWriter::is_document_entity
	bool ___is_document_entity_16;
	// System.Xml.WriteState System.Xml.XmlTextWriter::state
	int32_t ___state_17;
	// System.Xml.XmlNodeType System.Xml.XmlTextWriter::node_state
	int32_t ___node_state_18;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextWriter::nsmanager
	XmlNamespaceManager_t418790500 * ___nsmanager_19;
	// System.Int32 System.Xml.XmlTextWriter::open_count
	int32_t ___open_count_20;
	// System.Xml.XmlTextWriter/XmlNodeInfo[] System.Xml.XmlTextWriter::elements
	XmlNodeInfoU5BU5D_t431163322* ___elements_21;
	// System.Collections.Stack System.Xml.XmlTextWriter::new_local_namespaces
	Stack_t2329662280 * ___new_local_namespaces_22;
	// System.Collections.ArrayList System.Xml.XmlTextWriter::explicit_nsdecls
	ArrayList_t2718874744 * ___explicit_nsdecls_23;
	// System.Xml.NamespaceHandling System.Xml.XmlTextWriter::namespace_handling
	int32_t ___namespace_handling_24;
	// System.Boolean System.Xml.XmlTextWriter::indent
	bool ___indent_25;
	// System.Int32 System.Xml.XmlTextWriter::indent_count
	int32_t ___indent_count_26;
	// System.Char System.Xml.XmlTextWriter::indent_char
	Il2CppChar ___indent_char_27;
	// System.String System.Xml.XmlTextWriter::indent_string
	String_t* ___indent_string_28;
	// System.String System.Xml.XmlTextWriter::newline
	String_t* ___newline_29;
	// System.Boolean System.Xml.XmlTextWriter::indent_attributes
	bool ___indent_attributes_30;
	// System.Char System.Xml.XmlTextWriter::quote_char
	Il2CppChar ___quote_char_31;
	// System.Boolean System.Xml.XmlTextWriter::v2
	bool ___v2_32;

public:
	inline static int32_t get_offset_of_base_stream_3() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___base_stream_3)); }
	inline Stream_t1273022909 * get_base_stream_3() const { return ___base_stream_3; }
	inline Stream_t1273022909 ** get_address_of_base_stream_3() { return &___base_stream_3; }
	inline void set_base_stream_3(Stream_t1273022909 * value)
	{
		___base_stream_3 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_3), value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___source_4)); }
	inline TextWriter_t3478189236 * get_source_4() const { return ___source_4; }
	inline TextWriter_t3478189236 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(TextWriter_t3478189236 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}

	inline static int32_t get_offset_of_writer_5() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___writer_5)); }
	inline TextWriter_t3478189236 * get_writer_5() const { return ___writer_5; }
	inline TextWriter_t3478189236 ** get_address_of_writer_5() { return &___writer_5; }
	inline void set_writer_5(TextWriter_t3478189236 * value)
	{
		___writer_5 = value;
		Il2CppCodeGenWriteBarrier((&___writer_5), value);
	}

	inline static int32_t get_offset_of_preserver_6() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___preserver_6)); }
	inline StringWriter_t802263757 * get_preserver_6() const { return ___preserver_6; }
	inline StringWriter_t802263757 ** get_address_of_preserver_6() { return &___preserver_6; }
	inline void set_preserver_6(StringWriter_t802263757 * value)
	{
		___preserver_6 = value;
		Il2CppCodeGenWriteBarrier((&___preserver_6), value);
	}

	inline static int32_t get_offset_of_preserved_name_7() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___preserved_name_7)); }
	inline String_t* get_preserved_name_7() const { return ___preserved_name_7; }
	inline String_t** get_address_of_preserved_name_7() { return &___preserved_name_7; }
	inline void set_preserved_name_7(String_t* value)
	{
		___preserved_name_7 = value;
		Il2CppCodeGenWriteBarrier((&___preserved_name_7), value);
	}

	inline static int32_t get_offset_of_is_preserved_xmlns_8() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___is_preserved_xmlns_8)); }
	inline bool get_is_preserved_xmlns_8() const { return ___is_preserved_xmlns_8; }
	inline bool* get_address_of_is_preserved_xmlns_8() { return &___is_preserved_xmlns_8; }
	inline void set_is_preserved_xmlns_8(bool value)
	{
		___is_preserved_xmlns_8 = value;
	}

	inline static int32_t get_offset_of_allow_doc_fragment_9() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___allow_doc_fragment_9)); }
	inline bool get_allow_doc_fragment_9() const { return ___allow_doc_fragment_9; }
	inline bool* get_address_of_allow_doc_fragment_9() { return &___allow_doc_fragment_9; }
	inline void set_allow_doc_fragment_9(bool value)
	{
		___allow_doc_fragment_9 = value;
	}

	inline static int32_t get_offset_of_close_output_stream_10() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___close_output_stream_10)); }
	inline bool get_close_output_stream_10() const { return ___close_output_stream_10; }
	inline bool* get_address_of_close_output_stream_10() { return &___close_output_stream_10; }
	inline void set_close_output_stream_10(bool value)
	{
		___close_output_stream_10 = value;
	}

	inline static int32_t get_offset_of_ignore_encoding_11() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___ignore_encoding_11)); }
	inline bool get_ignore_encoding_11() const { return ___ignore_encoding_11; }
	inline bool* get_address_of_ignore_encoding_11() { return &___ignore_encoding_11; }
	inline void set_ignore_encoding_11(bool value)
	{
		___ignore_encoding_11 = value;
	}

	inline static int32_t get_offset_of_namespaces_12() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___namespaces_12)); }
	inline bool get_namespaces_12() const { return ___namespaces_12; }
	inline bool* get_address_of_namespaces_12() { return &___namespaces_12; }
	inline void set_namespaces_12(bool value)
	{
		___namespaces_12 = value;
	}

	inline static int32_t get_offset_of_xmldecl_state_13() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___xmldecl_state_13)); }
	inline int32_t get_xmldecl_state_13() const { return ___xmldecl_state_13; }
	inline int32_t* get_address_of_xmldecl_state_13() { return &___xmldecl_state_13; }
	inline void set_xmldecl_state_13(int32_t value)
	{
		___xmldecl_state_13 = value;
	}

	inline static int32_t get_offset_of_check_character_validity_14() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___check_character_validity_14)); }
	inline bool get_check_character_validity_14() const { return ___check_character_validity_14; }
	inline bool* get_address_of_check_character_validity_14() { return &___check_character_validity_14; }
	inline void set_check_character_validity_14(bool value)
	{
		___check_character_validity_14 = value;
	}

	inline static int32_t get_offset_of_newline_handling_15() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___newline_handling_15)); }
	inline int32_t get_newline_handling_15() const { return ___newline_handling_15; }
	inline int32_t* get_address_of_newline_handling_15() { return &___newline_handling_15; }
	inline void set_newline_handling_15(int32_t value)
	{
		___newline_handling_15 = value;
	}

	inline static int32_t get_offset_of_is_document_entity_16() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___is_document_entity_16)); }
	inline bool get_is_document_entity_16() const { return ___is_document_entity_16; }
	inline bool* get_address_of_is_document_entity_16() { return &___is_document_entity_16; }
	inline void set_is_document_entity_16(bool value)
	{
		___is_document_entity_16 = value;
	}

	inline static int32_t get_offset_of_state_17() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___state_17)); }
	inline int32_t get_state_17() const { return ___state_17; }
	inline int32_t* get_address_of_state_17() { return &___state_17; }
	inline void set_state_17(int32_t value)
	{
		___state_17 = value;
	}

	inline static int32_t get_offset_of_node_state_18() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___node_state_18)); }
	inline int32_t get_node_state_18() const { return ___node_state_18; }
	inline int32_t* get_address_of_node_state_18() { return &___node_state_18; }
	inline void set_node_state_18(int32_t value)
	{
		___node_state_18 = value;
	}

	inline static int32_t get_offset_of_nsmanager_19() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___nsmanager_19)); }
	inline XmlNamespaceManager_t418790500 * get_nsmanager_19() const { return ___nsmanager_19; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_nsmanager_19() { return &___nsmanager_19; }
	inline void set_nsmanager_19(XmlNamespaceManager_t418790500 * value)
	{
		___nsmanager_19 = value;
		Il2CppCodeGenWriteBarrier((&___nsmanager_19), value);
	}

	inline static int32_t get_offset_of_open_count_20() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___open_count_20)); }
	inline int32_t get_open_count_20() const { return ___open_count_20; }
	inline int32_t* get_address_of_open_count_20() { return &___open_count_20; }
	inline void set_open_count_20(int32_t value)
	{
		___open_count_20 = value;
	}

	inline static int32_t get_offset_of_elements_21() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___elements_21)); }
	inline XmlNodeInfoU5BU5D_t431163322* get_elements_21() const { return ___elements_21; }
	inline XmlNodeInfoU5BU5D_t431163322** get_address_of_elements_21() { return &___elements_21; }
	inline void set_elements_21(XmlNodeInfoU5BU5D_t431163322* value)
	{
		___elements_21 = value;
		Il2CppCodeGenWriteBarrier((&___elements_21), value);
	}

	inline static int32_t get_offset_of_new_local_namespaces_22() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___new_local_namespaces_22)); }
	inline Stack_t2329662280 * get_new_local_namespaces_22() const { return ___new_local_namespaces_22; }
	inline Stack_t2329662280 ** get_address_of_new_local_namespaces_22() { return &___new_local_namespaces_22; }
	inline void set_new_local_namespaces_22(Stack_t2329662280 * value)
	{
		___new_local_namespaces_22 = value;
		Il2CppCodeGenWriteBarrier((&___new_local_namespaces_22), value);
	}

	inline static int32_t get_offset_of_explicit_nsdecls_23() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___explicit_nsdecls_23)); }
	inline ArrayList_t2718874744 * get_explicit_nsdecls_23() const { return ___explicit_nsdecls_23; }
	inline ArrayList_t2718874744 ** get_address_of_explicit_nsdecls_23() { return &___explicit_nsdecls_23; }
	inline void set_explicit_nsdecls_23(ArrayList_t2718874744 * value)
	{
		___explicit_nsdecls_23 = value;
		Il2CppCodeGenWriteBarrier((&___explicit_nsdecls_23), value);
	}

	inline static int32_t get_offset_of_namespace_handling_24() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___namespace_handling_24)); }
	inline int32_t get_namespace_handling_24() const { return ___namespace_handling_24; }
	inline int32_t* get_address_of_namespace_handling_24() { return &___namespace_handling_24; }
	inline void set_namespace_handling_24(int32_t value)
	{
		___namespace_handling_24 = value;
	}

	inline static int32_t get_offset_of_indent_25() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_25)); }
	inline bool get_indent_25() const { return ___indent_25; }
	inline bool* get_address_of_indent_25() { return &___indent_25; }
	inline void set_indent_25(bool value)
	{
		___indent_25 = value;
	}

	inline static int32_t get_offset_of_indent_count_26() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_count_26)); }
	inline int32_t get_indent_count_26() const { return ___indent_count_26; }
	inline int32_t* get_address_of_indent_count_26() { return &___indent_count_26; }
	inline void set_indent_count_26(int32_t value)
	{
		___indent_count_26 = value;
	}

	inline static int32_t get_offset_of_indent_char_27() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_char_27)); }
	inline Il2CppChar get_indent_char_27() const { return ___indent_char_27; }
	inline Il2CppChar* get_address_of_indent_char_27() { return &___indent_char_27; }
	inline void set_indent_char_27(Il2CppChar value)
	{
		___indent_char_27 = value;
	}

	inline static int32_t get_offset_of_indent_string_28() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_string_28)); }
	inline String_t* get_indent_string_28() const { return ___indent_string_28; }
	inline String_t** get_address_of_indent_string_28() { return &___indent_string_28; }
	inline void set_indent_string_28(String_t* value)
	{
		___indent_string_28 = value;
		Il2CppCodeGenWriteBarrier((&___indent_string_28), value);
	}

	inline static int32_t get_offset_of_newline_29() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___newline_29)); }
	inline String_t* get_newline_29() const { return ___newline_29; }
	inline String_t** get_address_of_newline_29() { return &___newline_29; }
	inline void set_newline_29(String_t* value)
	{
		___newline_29 = value;
		Il2CppCodeGenWriteBarrier((&___newline_29), value);
	}

	inline static int32_t get_offset_of_indent_attributes_30() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_attributes_30)); }
	inline bool get_indent_attributes_30() const { return ___indent_attributes_30; }
	inline bool* get_address_of_indent_attributes_30() { return &___indent_attributes_30; }
	inline void set_indent_attributes_30(bool value)
	{
		___indent_attributes_30 = value;
	}

	inline static int32_t get_offset_of_quote_char_31() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___quote_char_31)); }
	inline Il2CppChar get_quote_char_31() const { return ___quote_char_31; }
	inline Il2CppChar* get_address_of_quote_char_31() { return &___quote_char_31; }
	inline void set_quote_char_31(Il2CppChar value)
	{
		___quote_char_31 = value;
	}

	inline static int32_t get_offset_of_v2_32() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___v2_32)); }
	inline bool get_v2_32() const { return ___v2_32; }
	inline bool* get_address_of_v2_32() { return &___v2_32; }
	inline void set_v2_32(bool value)
	{
		___v2_32 = value;
	}
};

struct XmlTextWriter_t2114213153_StaticFields
{
public:
	// System.Text.Encoding System.Xml.XmlTextWriter::unmarked_utf8encoding
	Encoding_t1523322056 * ___unmarked_utf8encoding_0;
	// System.Char[] System.Xml.XmlTextWriter::escaped_text_chars
	CharU5BU5D_t3528271667* ___escaped_text_chars_1;
	// System.Char[] System.Xml.XmlTextWriter::escaped_attr_chars
	CharU5BU5D_t3528271667* ___escaped_attr_chars_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map53
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map53_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map54
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map54_34;

public:
	inline static int32_t get_offset_of_unmarked_utf8encoding_0() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___unmarked_utf8encoding_0)); }
	inline Encoding_t1523322056 * get_unmarked_utf8encoding_0() const { return ___unmarked_utf8encoding_0; }
	inline Encoding_t1523322056 ** get_address_of_unmarked_utf8encoding_0() { return &___unmarked_utf8encoding_0; }
	inline void set_unmarked_utf8encoding_0(Encoding_t1523322056 * value)
	{
		___unmarked_utf8encoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___unmarked_utf8encoding_0), value);
	}

	inline static int32_t get_offset_of_escaped_text_chars_1() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___escaped_text_chars_1)); }
	inline CharU5BU5D_t3528271667* get_escaped_text_chars_1() const { return ___escaped_text_chars_1; }
	inline CharU5BU5D_t3528271667** get_address_of_escaped_text_chars_1() { return &___escaped_text_chars_1; }
	inline void set_escaped_text_chars_1(CharU5BU5D_t3528271667* value)
	{
		___escaped_text_chars_1 = value;
		Il2CppCodeGenWriteBarrier((&___escaped_text_chars_1), value);
	}

	inline static int32_t get_offset_of_escaped_attr_chars_2() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___escaped_attr_chars_2)); }
	inline CharU5BU5D_t3528271667* get_escaped_attr_chars_2() const { return ___escaped_attr_chars_2; }
	inline CharU5BU5D_t3528271667** get_address_of_escaped_attr_chars_2() { return &___escaped_attr_chars_2; }
	inline void set_escaped_attr_chars_2(CharU5BU5D_t3528271667* value)
	{
		___escaped_attr_chars_2 = value;
		Il2CppCodeGenWriteBarrier((&___escaped_attr_chars_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map53_33() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___U3CU3Ef__switchU24map53_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map53_33() const { return ___U3CU3Ef__switchU24map53_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map53_33() { return &___U3CU3Ef__switchU24map53_33; }
	inline void set_U3CU3Ef__switchU24map53_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map53_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map53_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map54_34() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___U3CU3Ef__switchU24map54_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map54_34() const { return ___U3CU3Ef__switchU24map54_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map54_34() { return &___U3CU3Ef__switchU24map54_34; }
	inline void set_U3CU3Ef__switchU24map54_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map54_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map54_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTWRITER_T2114213153_H
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
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef XMLREADERBINARYSUPPORT_T1809665003_H
#define XMLREADERBINARYSUPPORT_T1809665003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderBinarySupport
struct  XmlReaderBinarySupport_t1809665003  : public RuntimeObject
{
public:
	// System.Xml.XmlReader System.Xml.XmlReaderBinarySupport::reader
	XmlReader_t3121518892 * ___reader_0;
	// System.Int32 System.Xml.XmlReaderBinarySupport::base64CacheStartsAt
	int32_t ___base64CacheStartsAt_1;
	// System.Xml.XmlReaderBinarySupport/CommandState System.Xml.XmlReaderBinarySupport::state
	int32_t ___state_2;
	// System.Boolean System.Xml.XmlReaderBinarySupport::hasCache
	bool ___hasCache_3;
	// System.Boolean System.Xml.XmlReaderBinarySupport::dontReset
	bool ___dontReset_4;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_t1809665003, ___reader_0)); }
	inline XmlReader_t3121518892 * get_reader_0() const { return ___reader_0; }
	inline XmlReader_t3121518892 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlReader_t3121518892 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_base64CacheStartsAt_1() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_t1809665003, ___base64CacheStartsAt_1)); }
	inline int32_t get_base64CacheStartsAt_1() const { return ___base64CacheStartsAt_1; }
	inline int32_t* get_address_of_base64CacheStartsAt_1() { return &___base64CacheStartsAt_1; }
	inline void set_base64CacheStartsAt_1(int32_t value)
	{
		___base64CacheStartsAt_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_t1809665003, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_hasCache_3() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_t1809665003, ___hasCache_3)); }
	inline bool get_hasCache_3() const { return ___hasCache_3; }
	inline bool* get_address_of_hasCache_3() { return &___hasCache_3; }
	inline void set_hasCache_3(bool value)
	{
		___hasCache_3 = value;
	}

	inline static int32_t get_offset_of_dontReset_4() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_t1809665003, ___dontReset_4)); }
	inline bool get_dontReset_4() const { return ___dontReset_4; }
	inline bool* get_address_of_dontReset_4() { return &___dontReset_4; }
	inline void set_dontReset_4(bool value)
	{
		___dontReset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADERBINARYSUPPORT_T1809665003_H
#ifndef XMLTEXTREADER_T3455035481_H
#define XMLTEXTREADER_T3455035481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml2.XmlTextReader
struct  XmlTextReader_t3455035481  : public XmlReader_t3121518892
{
public:
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::cursorToken
	XmlTokenInfo_t2519673037 * ___cursorToken_2;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentToken
	XmlTokenInfo_t2519673037 * ___currentToken_3;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo Mono.Xml2.XmlTextReader::currentAttributeToken
	XmlAttributeTokenInfo_t384315108 * ___currentAttributeToken_4;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentAttributeValueToken
	XmlTokenInfo_t2519673037 * ___currentAttributeValueToken_5;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[] Mono.Xml2.XmlTextReader::attributeTokens
	XmlAttributeTokenInfoU5BU5D_t1089758477* ___attributeTokens_6;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo[] Mono.Xml2.XmlTextReader::attributeValueTokens
	XmlTokenInfoU5BU5D_t2522587488* ___attributeValueTokens_7;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttribute
	int32_t ___currentAttribute_8;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttributeValue
	int32_t ___currentAttributeValue_9;
	// System.Int32 Mono.Xml2.XmlTextReader::attributeCount
	int32_t ___attributeCount_10;
	// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::parserContext
	XmlParserContext_t2544895291 * ___parserContext_11;
	// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::nameTable
	XmlNameTable_t71772148 * ___nameTable_12;
	// System.Xml.XmlNamespaceManager Mono.Xml2.XmlTextReader::nsmgr
	XmlNamespaceManager_t418790500 * ___nsmgr_13;
	// System.Xml.ReadState Mono.Xml2.XmlTextReader::readState
	int32_t ___readState_14;
	// System.Boolean Mono.Xml2.XmlTextReader::disallowReset
	bool ___disallowReset_15;
	// System.Int32 Mono.Xml2.XmlTextReader::depth
	int32_t ___depth_16;
	// System.Int32 Mono.Xml2.XmlTextReader::elementDepth
	int32_t ___elementDepth_17;
	// System.Boolean Mono.Xml2.XmlTextReader::depthUp
	bool ___depthUp_18;
	// System.Boolean Mono.Xml2.XmlTextReader::popScope
	bool ___popScope_19;
	// Mono.Xml2.XmlTextReader/TagName[] Mono.Xml2.XmlTextReader::elementNames
	TagNameU5BU5D_t2055670886* ___elementNames_20;
	// System.Int32 Mono.Xml2.XmlTextReader::elementNameStackPos
	int32_t ___elementNameStackPos_21;
	// System.Boolean Mono.Xml2.XmlTextReader::allowMultipleRoot
	bool ___allowMultipleRoot_22;
	// System.Boolean Mono.Xml2.XmlTextReader::isStandalone
	bool ___isStandalone_23;
	// System.Boolean Mono.Xml2.XmlTextReader::returnEntityReference
	bool ___returnEntityReference_24;
	// System.String Mono.Xml2.XmlTextReader::entityReferenceName
	String_t* ___entityReferenceName_25;
	// System.Text.StringBuilder Mono.Xml2.XmlTextReader::valueBuffer
	StringBuilder_t * ___valueBuffer_26;
	// System.IO.TextReader Mono.Xml2.XmlTextReader::reader
	TextReader_t283511965 * ___reader_27;
	// System.Char[] Mono.Xml2.XmlTextReader::peekChars
	CharU5BU5D_t3528271667* ___peekChars_28;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsIndex
	int32_t ___peekCharsIndex_29;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsLength
	int32_t ___peekCharsLength_30;
	// System.Int32 Mono.Xml2.XmlTextReader::curNodePeekIndex
	int32_t ___curNodePeekIndex_31;
	// System.Boolean Mono.Xml2.XmlTextReader::preserveCurrentTag
	bool ___preserveCurrentTag_32;
	// System.Int32 Mono.Xml2.XmlTextReader::line
	int32_t ___line_33;
	// System.Int32 Mono.Xml2.XmlTextReader::column
	int32_t ___column_34;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLineNumber
	int32_t ___currentLinkedNodeLineNumber_35;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLinePosition
	int32_t ___currentLinkedNodeLinePosition_36;
	// System.Boolean Mono.Xml2.XmlTextReader::useProceedingLineInfo
	bool ___useProceedingLineInfo_37;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::startNodeType
	int32_t ___startNodeType_38;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::currentState
	int32_t ___currentState_39;
	// System.Int32 Mono.Xml2.XmlTextReader::nestLevel
	int32_t ___nestLevel_40;
	// System.Boolean Mono.Xml2.XmlTextReader::readCharsInProgress
	bool ___readCharsInProgress_41;
	// System.Xml.XmlReaderBinarySupport/CharGetter Mono.Xml2.XmlTextReader::binaryCharGetter
	CharGetter_t1703763694 * ___binaryCharGetter_42;
	// System.Boolean Mono.Xml2.XmlTextReader::namespaces
	bool ___namespaces_43;
	// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::whitespaceHandling
	int32_t ___whitespaceHandling_44;
	// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::resolver
	XmlResolver_t626023767 * ___resolver_45;
	// System.Boolean Mono.Xml2.XmlTextReader::normalization
	bool ___normalization_46;
	// System.Boolean Mono.Xml2.XmlTextReader::checkCharacters
	bool ___checkCharacters_47;
	// System.Boolean Mono.Xml2.XmlTextReader::prohibitDtd
	bool ___prohibitDtd_48;
	// System.Boolean Mono.Xml2.XmlTextReader::closeInput
	bool ___closeInput_49;
	// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::entityHandling
	int32_t ___entityHandling_50;
	// System.Xml.NameTable Mono.Xml2.XmlTextReader::whitespacePool
	NameTable_t3178203267 * ___whitespacePool_51;
	// System.Char[] Mono.Xml2.XmlTextReader::whitespaceCache
	CharU5BU5D_t3528271667* ___whitespaceCache_52;
	// Mono.Xml2.XmlTextReader/DtdInputStateStack Mono.Xml2.XmlTextReader::stateStack
	DtdInputStateStack_t339956957 * ___stateStack_53;

public:
	inline static int32_t get_offset_of_cursorToken_2() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___cursorToken_2)); }
	inline XmlTokenInfo_t2519673037 * get_cursorToken_2() const { return ___cursorToken_2; }
	inline XmlTokenInfo_t2519673037 ** get_address_of_cursorToken_2() { return &___cursorToken_2; }
	inline void set_cursorToken_2(XmlTokenInfo_t2519673037 * value)
	{
		___cursorToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___cursorToken_2), value);
	}

	inline static int32_t get_offset_of_currentToken_3() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___currentToken_3)); }
	inline XmlTokenInfo_t2519673037 * get_currentToken_3() const { return ___currentToken_3; }
	inline XmlTokenInfo_t2519673037 ** get_address_of_currentToken_3() { return &___currentToken_3; }
	inline void set_currentToken_3(XmlTokenInfo_t2519673037 * value)
	{
		___currentToken_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentToken_3), value);
	}

	inline static int32_t get_offset_of_currentAttributeToken_4() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___currentAttributeToken_4)); }
	inline XmlAttributeTokenInfo_t384315108 * get_currentAttributeToken_4() const { return ___currentAttributeToken_4; }
	inline XmlAttributeTokenInfo_t384315108 ** get_address_of_currentAttributeToken_4() { return &___currentAttributeToken_4; }
	inline void set_currentAttributeToken_4(XmlAttributeTokenInfo_t384315108 * value)
	{
		___currentAttributeToken_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentAttributeToken_4), value);
	}

	inline static int32_t get_offset_of_currentAttributeValueToken_5() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___currentAttributeValueToken_5)); }
	inline XmlTokenInfo_t2519673037 * get_currentAttributeValueToken_5() const { return ___currentAttributeValueToken_5; }
	inline XmlTokenInfo_t2519673037 ** get_address_of_currentAttributeValueToken_5() { return &___currentAttributeValueToken_5; }
	inline void set_currentAttributeValueToken_5(XmlTokenInfo_t2519673037 * value)
	{
		___currentAttributeValueToken_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentAttributeValueToken_5), value);
	}

	inline static int32_t get_offset_of_attributeTokens_6() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___attributeTokens_6)); }
	inline XmlAttributeTokenInfoU5BU5D_t1089758477* get_attributeTokens_6() const { return ___attributeTokens_6; }
	inline XmlAttributeTokenInfoU5BU5D_t1089758477** get_address_of_attributeTokens_6() { return &___attributeTokens_6; }
	inline void set_attributeTokens_6(XmlAttributeTokenInfoU5BU5D_t1089758477* value)
	{
		___attributeTokens_6 = value;
		Il2CppCodeGenWriteBarrier((&___attributeTokens_6), value);
	}

	inline static int32_t get_offset_of_attributeValueTokens_7() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___attributeValueTokens_7)); }
	inline XmlTokenInfoU5BU5D_t2522587488* get_attributeValueTokens_7() const { return ___attributeValueTokens_7; }
	inline XmlTokenInfoU5BU5D_t2522587488** get_address_of_attributeValueTokens_7() { return &___attributeValueTokens_7; }
	inline void set_attributeValueTokens_7(XmlTokenInfoU5BU5D_t2522587488* value)
	{
		___attributeValueTokens_7 = value;
		Il2CppCodeGenWriteBarrier((&___attributeValueTokens_7), value);
	}

	inline static int32_t get_offset_of_currentAttribute_8() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___currentAttribute_8)); }
	inline int32_t get_currentAttribute_8() const { return ___currentAttribute_8; }
	inline int32_t* get_address_of_currentAttribute_8() { return &___currentAttribute_8; }
	inline void set_currentAttribute_8(int32_t value)
	{
		___currentAttribute_8 = value;
	}

	inline static int32_t get_offset_of_currentAttributeValue_9() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___currentAttributeValue_9)); }
	inline int32_t get_currentAttributeValue_9() const { return ___currentAttributeValue_9; }
	inline int32_t* get_address_of_currentAttributeValue_9() { return &___currentAttributeValue_9; }
	inline void set_currentAttributeValue_9(int32_t value)
	{
		___currentAttributeValue_9 = value;
	}

	inline static int32_t get_offset_of_attributeCount_10() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___attributeCount_10)); }
	inline int32_t get_attributeCount_10() const { return ___attributeCount_10; }
	inline int32_t* get_address_of_attributeCount_10() { return &___attributeCount_10; }
	inline void set_attributeCount_10(int32_t value)
	{
		___attributeCount_10 = value;
	}

	inline static int32_t get_offset_of_parserContext_11() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___parserContext_11)); }
	inline XmlParserContext_t2544895291 * get_parserContext_11() const { return ___parserContext_11; }
	inline XmlParserContext_t2544895291 ** get_address_of_parserContext_11() { return &___parserContext_11; }
	inline void set_parserContext_11(XmlParserContext_t2544895291 * value)
	{
		___parserContext_11 = value;
		Il2CppCodeGenWriteBarrier((&___parserContext_11), value);
	}

	inline static int32_t get_offset_of_nameTable_12() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___nameTable_12)); }
	inline XmlNameTable_t71772148 * get_nameTable_12() const { return ___nameTable_12; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_12() { return &___nameTable_12; }
	inline void set_nameTable_12(XmlNameTable_t71772148 * value)
	{
		___nameTable_12 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_12), value);
	}

	inline static int32_t get_offset_of_nsmgr_13() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___nsmgr_13)); }
	inline XmlNamespaceManager_t418790500 * get_nsmgr_13() const { return ___nsmgr_13; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_nsmgr_13() { return &___nsmgr_13; }
	inline void set_nsmgr_13(XmlNamespaceManager_t418790500 * value)
	{
		___nsmgr_13 = value;
		Il2CppCodeGenWriteBarrier((&___nsmgr_13), value);
	}

	inline static int32_t get_offset_of_readState_14() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___readState_14)); }
	inline int32_t get_readState_14() const { return ___readState_14; }
	inline int32_t* get_address_of_readState_14() { return &___readState_14; }
	inline void set_readState_14(int32_t value)
	{
		___readState_14 = value;
	}

	inline static int32_t get_offset_of_disallowReset_15() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___disallowReset_15)); }
	inline bool get_disallowReset_15() const { return ___disallowReset_15; }
	inline bool* get_address_of_disallowReset_15() { return &___disallowReset_15; }
	inline void set_disallowReset_15(bool value)
	{
		___disallowReset_15 = value;
	}

	inline static int32_t get_offset_of_depth_16() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___depth_16)); }
	inline int32_t get_depth_16() const { return ___depth_16; }
	inline int32_t* get_address_of_depth_16() { return &___depth_16; }
	inline void set_depth_16(int32_t value)
	{
		___depth_16 = value;
	}

	inline static int32_t get_offset_of_elementDepth_17() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___elementDepth_17)); }
	inline int32_t get_elementDepth_17() const { return ___elementDepth_17; }
	inline int32_t* get_address_of_elementDepth_17() { return &___elementDepth_17; }
	inline void set_elementDepth_17(int32_t value)
	{
		___elementDepth_17 = value;
	}

	inline static int32_t get_offset_of_depthUp_18() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___depthUp_18)); }
	inline bool get_depthUp_18() const { return ___depthUp_18; }
	inline bool* get_address_of_depthUp_18() { return &___depthUp_18; }
	inline void set_depthUp_18(bool value)
	{
		___depthUp_18 = value;
	}

	inline static int32_t get_offset_of_popScope_19() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___popScope_19)); }
	inline bool get_popScope_19() const { return ___popScope_19; }
	inline bool* get_address_of_popScope_19() { return &___popScope_19; }
	inline void set_popScope_19(bool value)
	{
		___popScope_19 = value;
	}

	inline static int32_t get_offset_of_elementNames_20() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___elementNames_20)); }
	inline TagNameU5BU5D_t2055670886* get_elementNames_20() const { return ___elementNames_20; }
	inline TagNameU5BU5D_t2055670886** get_address_of_elementNames_20() { return &___elementNames_20; }
	inline void set_elementNames_20(TagNameU5BU5D_t2055670886* value)
	{
		___elementNames_20 = value;
		Il2CppCodeGenWriteBarrier((&___elementNames_20), value);
	}

	inline static int32_t get_offset_of_elementNameStackPos_21() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___elementNameStackPos_21)); }
	inline int32_t get_elementNameStackPos_21() const { return ___elementNameStackPos_21; }
	inline int32_t* get_address_of_elementNameStackPos_21() { return &___elementNameStackPos_21; }
	inline void set_elementNameStackPos_21(int32_t value)
	{
		___elementNameStackPos_21 = value;
	}

	inline static int32_t get_offset_of_allowMultipleRoot_22() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___allowMultipleRoot_22)); }
	inline bool get_allowMultipleRoot_22() const { return ___allowMultipleRoot_22; }
	inline bool* get_address_of_allowMultipleRoot_22() { return &___allowMultipleRoot_22; }
	inline void set_allowMultipleRoot_22(bool value)
	{
		___allowMultipleRoot_22 = value;
	}

	inline static int32_t get_offset_of_isStandalone_23() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___isStandalone_23)); }
	inline bool get_isStandalone_23() const { return ___isStandalone_23; }
	inline bool* get_address_of_isStandalone_23() { return &___isStandalone_23; }
	inline void set_isStandalone_23(bool value)
	{
		___isStandalone_23 = value;
	}

	inline static int32_t get_offset_of_returnEntityReference_24() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___returnEntityReference_24)); }
	inline bool get_returnEntityReference_24() const { return ___returnEntityReference_24; }
	inline bool* get_address_of_returnEntityReference_24() { return &___returnEntityReference_24; }
	inline void set_returnEntityReference_24(bool value)
	{
		___returnEntityReference_24 = value;
	}

	inline static int32_t get_offset_of_entityReferenceName_25() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___entityReferenceName_25)); }
	inline String_t* get_entityReferenceName_25() const { return ___entityReferenceName_25; }
	inline String_t** get_address_of_entityReferenceName_25() { return &___entityReferenceName_25; }
	inline void set_entityReferenceName_25(String_t* value)
	{
		___entityReferenceName_25 = value;
		Il2CppCodeGenWriteBarrier((&___entityReferenceName_25), value);
	}

	inline static int32_t get_offset_of_valueBuffer_26() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___valueBuffer_26)); }
	inline StringBuilder_t * get_valueBuffer_26() const { return ___valueBuffer_26; }
	inline StringBuilder_t ** get_address_of_valueBuffer_26() { return &___valueBuffer_26; }
	inline void set_valueBuffer_26(StringBuilder_t * value)
	{
		___valueBuffer_26 = value;
		Il2CppCodeGenWriteBarrier((&___valueBuffer_26), value);
	}

	inline static int32_t get_offset_of_reader_27() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___reader_27)); }
	inline TextReader_t283511965 * get_reader_27() const { return ___reader_27; }
	inline TextReader_t283511965 ** get_address_of_reader_27() { return &___reader_27; }
	inline void set_reader_27(TextReader_t283511965 * value)
	{
		___reader_27 = value;
		Il2CppCodeGenWriteBarrier((&___reader_27), value);
	}

	inline static int32_t get_offset_of_peekChars_28() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___peekChars_28)); }
	inline CharU5BU5D_t3528271667* get_peekChars_28() const { return ___peekChars_28; }
	inline CharU5BU5D_t3528271667** get_address_of_peekChars_28() { return &___peekChars_28; }
	inline void set_peekChars_28(CharU5BU5D_t3528271667* value)
	{
		___peekChars_28 = value;
		Il2CppCodeGenWriteBarrier((&___peekChars_28), value);
	}

	inline static int32_t get_offset_of_peekCharsIndex_29() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___peekCharsIndex_29)); }
	inline int32_t get_peekCharsIndex_29() const { return ___peekCharsIndex_29; }
	inline int32_t* get_address_of_peekCharsIndex_29() { return &___peekCharsIndex_29; }
	inline void set_peekCharsIndex_29(int32_t value)
	{
		___peekCharsIndex_29 = value;
	}

	inline static int32_t get_offset_of_peekCharsLength_30() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___peekCharsLength_30)); }
	inline int32_t get_peekCharsLength_30() const { return ___peekCharsLength_30; }
	inline int32_t* get_address_of_peekCharsLength_30() { return &___peekCharsLength_30; }
	inline void set_peekCharsLength_30(int32_t value)
	{
		___peekCharsLength_30 = value;
	}

	inline static int32_t get_offset_of_curNodePeekIndex_31() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___curNodePeekIndex_31)); }
	inline int32_t get_curNodePeekIndex_31() const { return ___curNodePeekIndex_31; }
	inline int32_t* get_address_of_curNodePeekIndex_31() { return &___curNodePeekIndex_31; }
	inline void set_curNodePeekIndex_31(int32_t value)
	{
		___curNodePeekIndex_31 = value;
	}

	inline static int32_t get_offset_of_preserveCurrentTag_32() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___preserveCurrentTag_32)); }
	inline bool get_preserveCurrentTag_32() const { return ___preserveCurrentTag_32; }
	inline bool* get_address_of_preserveCurrentTag_32() { return &___preserveCurrentTag_32; }
	inline void set_preserveCurrentTag_32(bool value)
	{
		___preserveCurrentTag_32 = value;
	}

	inline static int32_t get_offset_of_line_33() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___line_33)); }
	inline int32_t get_line_33() const { return ___line_33; }
	inline int32_t* get_address_of_line_33() { return &___line_33; }
	inline void set_line_33(int32_t value)
	{
		___line_33 = value;
	}

	inline static int32_t get_offset_of_column_34() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___column_34)); }
	inline int32_t get_column_34() const { return ___column_34; }
	inline int32_t* get_address_of_column_34() { return &___column_34; }
	inline void set_column_34(int32_t value)
	{
		___column_34 = value;
	}

	inline static int32_t get_offset_of_currentLinkedNodeLineNumber_35() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___currentLinkedNodeLineNumber_35)); }
	inline int32_t get_currentLinkedNodeLineNumber_35() const { return ___currentLinkedNodeLineNumber_35; }
	inline int32_t* get_address_of_currentLinkedNodeLineNumber_35() { return &___currentLinkedNodeLineNumber_35; }
	inline void set_currentLinkedNodeLineNumber_35(int32_t value)
	{
		___currentLinkedNodeLineNumber_35 = value;
	}

	inline static int32_t get_offset_of_currentLinkedNodeLinePosition_36() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___currentLinkedNodeLinePosition_36)); }
	inline int32_t get_currentLinkedNodeLinePosition_36() const { return ___currentLinkedNodeLinePosition_36; }
	inline int32_t* get_address_of_currentLinkedNodeLinePosition_36() { return &___currentLinkedNodeLinePosition_36; }
	inline void set_currentLinkedNodeLinePosition_36(int32_t value)
	{
		___currentLinkedNodeLinePosition_36 = value;
	}

	inline static int32_t get_offset_of_useProceedingLineInfo_37() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___useProceedingLineInfo_37)); }
	inline bool get_useProceedingLineInfo_37() const { return ___useProceedingLineInfo_37; }
	inline bool* get_address_of_useProceedingLineInfo_37() { return &___useProceedingLineInfo_37; }
	inline void set_useProceedingLineInfo_37(bool value)
	{
		___useProceedingLineInfo_37 = value;
	}

	inline static int32_t get_offset_of_startNodeType_38() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___startNodeType_38)); }
	inline int32_t get_startNodeType_38() const { return ___startNodeType_38; }
	inline int32_t* get_address_of_startNodeType_38() { return &___startNodeType_38; }
	inline void set_startNodeType_38(int32_t value)
	{
		___startNodeType_38 = value;
	}

	inline static int32_t get_offset_of_currentState_39() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___currentState_39)); }
	inline int32_t get_currentState_39() const { return ___currentState_39; }
	inline int32_t* get_address_of_currentState_39() { return &___currentState_39; }
	inline void set_currentState_39(int32_t value)
	{
		___currentState_39 = value;
	}

	inline static int32_t get_offset_of_nestLevel_40() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___nestLevel_40)); }
	inline int32_t get_nestLevel_40() const { return ___nestLevel_40; }
	inline int32_t* get_address_of_nestLevel_40() { return &___nestLevel_40; }
	inline void set_nestLevel_40(int32_t value)
	{
		___nestLevel_40 = value;
	}

	inline static int32_t get_offset_of_readCharsInProgress_41() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___readCharsInProgress_41)); }
	inline bool get_readCharsInProgress_41() const { return ___readCharsInProgress_41; }
	inline bool* get_address_of_readCharsInProgress_41() { return &___readCharsInProgress_41; }
	inline void set_readCharsInProgress_41(bool value)
	{
		___readCharsInProgress_41 = value;
	}

	inline static int32_t get_offset_of_binaryCharGetter_42() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___binaryCharGetter_42)); }
	inline CharGetter_t1703763694 * get_binaryCharGetter_42() const { return ___binaryCharGetter_42; }
	inline CharGetter_t1703763694 ** get_address_of_binaryCharGetter_42() { return &___binaryCharGetter_42; }
	inline void set_binaryCharGetter_42(CharGetter_t1703763694 * value)
	{
		___binaryCharGetter_42 = value;
		Il2CppCodeGenWriteBarrier((&___binaryCharGetter_42), value);
	}

	inline static int32_t get_offset_of_namespaces_43() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___namespaces_43)); }
	inline bool get_namespaces_43() const { return ___namespaces_43; }
	inline bool* get_address_of_namespaces_43() { return &___namespaces_43; }
	inline void set_namespaces_43(bool value)
	{
		___namespaces_43 = value;
	}

	inline static int32_t get_offset_of_whitespaceHandling_44() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___whitespaceHandling_44)); }
	inline int32_t get_whitespaceHandling_44() const { return ___whitespaceHandling_44; }
	inline int32_t* get_address_of_whitespaceHandling_44() { return &___whitespaceHandling_44; }
	inline void set_whitespaceHandling_44(int32_t value)
	{
		___whitespaceHandling_44 = value;
	}

	inline static int32_t get_offset_of_resolver_45() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___resolver_45)); }
	inline XmlResolver_t626023767 * get_resolver_45() const { return ___resolver_45; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_45() { return &___resolver_45; }
	inline void set_resolver_45(XmlResolver_t626023767 * value)
	{
		___resolver_45 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_45), value);
	}

	inline static int32_t get_offset_of_normalization_46() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___normalization_46)); }
	inline bool get_normalization_46() const { return ___normalization_46; }
	inline bool* get_address_of_normalization_46() { return &___normalization_46; }
	inline void set_normalization_46(bool value)
	{
		___normalization_46 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_47() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___checkCharacters_47)); }
	inline bool get_checkCharacters_47() const { return ___checkCharacters_47; }
	inline bool* get_address_of_checkCharacters_47() { return &___checkCharacters_47; }
	inline void set_checkCharacters_47(bool value)
	{
		___checkCharacters_47 = value;
	}

	inline static int32_t get_offset_of_prohibitDtd_48() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___prohibitDtd_48)); }
	inline bool get_prohibitDtd_48() const { return ___prohibitDtd_48; }
	inline bool* get_address_of_prohibitDtd_48() { return &___prohibitDtd_48; }
	inline void set_prohibitDtd_48(bool value)
	{
		___prohibitDtd_48 = value;
	}

	inline static int32_t get_offset_of_closeInput_49() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___closeInput_49)); }
	inline bool get_closeInput_49() const { return ___closeInput_49; }
	inline bool* get_address_of_closeInput_49() { return &___closeInput_49; }
	inline void set_closeInput_49(bool value)
	{
		___closeInput_49 = value;
	}

	inline static int32_t get_offset_of_entityHandling_50() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___entityHandling_50)); }
	inline int32_t get_entityHandling_50() const { return ___entityHandling_50; }
	inline int32_t* get_address_of_entityHandling_50() { return &___entityHandling_50; }
	inline void set_entityHandling_50(int32_t value)
	{
		___entityHandling_50 = value;
	}

	inline static int32_t get_offset_of_whitespacePool_51() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___whitespacePool_51)); }
	inline NameTable_t3178203267 * get_whitespacePool_51() const { return ___whitespacePool_51; }
	inline NameTable_t3178203267 ** get_address_of_whitespacePool_51() { return &___whitespacePool_51; }
	inline void set_whitespacePool_51(NameTable_t3178203267 * value)
	{
		___whitespacePool_51 = value;
		Il2CppCodeGenWriteBarrier((&___whitespacePool_51), value);
	}

	inline static int32_t get_offset_of_whitespaceCache_52() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___whitespaceCache_52)); }
	inline CharU5BU5D_t3528271667* get_whitespaceCache_52() const { return ___whitespaceCache_52; }
	inline CharU5BU5D_t3528271667** get_address_of_whitespaceCache_52() { return &___whitespaceCache_52; }
	inline void set_whitespaceCache_52(CharU5BU5D_t3528271667* value)
	{
		___whitespaceCache_52 = value;
		Il2CppCodeGenWriteBarrier((&___whitespaceCache_52), value);
	}

	inline static int32_t get_offset_of_stateStack_53() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481, ___stateStack_53)); }
	inline DtdInputStateStack_t339956957 * get_stateStack_53() const { return ___stateStack_53; }
	inline DtdInputStateStack_t339956957 ** get_address_of_stateStack_53() { return &___stateStack_53; }
	inline void set_stateStack_53(DtdInputStateStack_t339956957 * value)
	{
		___stateStack_53 = value;
		Il2CppCodeGenWriteBarrier((&___stateStack_53), value);
	}
};

struct XmlTextReader_t3455035481_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map51
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map51_54;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map52
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map52_55;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map51_54() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481_StaticFields, ___U3CU3Ef__switchU24map51_54)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map51_54() const { return ___U3CU3Ef__switchU24map51_54; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map51_54() { return &___U3CU3Ef__switchU24map51_54; }
	inline void set_U3CU3Ef__switchU24map51_54(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map51_54 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map51_54), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map52_55() { return static_cast<int32_t>(offsetof(XmlTextReader_t3455035481_StaticFields, ___U3CU3Ef__switchU24map52_55)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map52_55() const { return ___U3CU3Ef__switchU24map52_55; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map52_55() { return &___U3CU3Ef__switchU24map52_55; }
	inline void set_U3CU3Ef__switchU24map52_55(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map52_55 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map52_55), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTREADER_T3455035481_H
#ifndef CONTEXTITEM_T3112052795_H
#define CONTEXTITEM_T3112052795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlParserContext/ContextItem
struct  ContextItem_t3112052795  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlParserContext/ContextItem::BaseURI
	String_t* ___BaseURI_0;
	// System.String System.Xml.XmlParserContext/ContextItem::XmlLang
	String_t* ___XmlLang_1;
	// System.Xml.XmlSpace System.Xml.XmlParserContext/ContextItem::XmlSpace
	int32_t ___XmlSpace_2;

public:
	inline static int32_t get_offset_of_BaseURI_0() { return static_cast<int32_t>(offsetof(ContextItem_t3112052795, ___BaseURI_0)); }
	inline String_t* get_BaseURI_0() const { return ___BaseURI_0; }
	inline String_t** get_address_of_BaseURI_0() { return &___BaseURI_0; }
	inline void set_BaseURI_0(String_t* value)
	{
		___BaseURI_0 = value;
		Il2CppCodeGenWriteBarrier((&___BaseURI_0), value);
	}

	inline static int32_t get_offset_of_XmlLang_1() { return static_cast<int32_t>(offsetof(ContextItem_t3112052795, ___XmlLang_1)); }
	inline String_t* get_XmlLang_1() const { return ___XmlLang_1; }
	inline String_t** get_address_of_XmlLang_1() { return &___XmlLang_1; }
	inline void set_XmlLang_1(String_t* value)
	{
		___XmlLang_1 = value;
		Il2CppCodeGenWriteBarrier((&___XmlLang_1), value);
	}

	inline static int32_t get_offset_of_XmlSpace_2() { return static_cast<int32_t>(offsetof(ContextItem_t3112052795, ___XmlSpace_2)); }
	inline int32_t get_XmlSpace_2() const { return ___XmlSpace_2; }
	inline int32_t* get_address_of_XmlSpace_2() { return &___XmlSpace_2; }
	inline void set_XmlSpace_2(int32_t value)
	{
		___XmlSpace_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTITEM_T3112052795_H
#ifndef XMLREADERSETTINGS_T2186285234_H
#define XMLREADERSETTINGS_T2186285234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_t2186285234  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformance
	int32_t ___conformance_1;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::schemas
	XmlSchemaSet_t266093086 * ___schemas_2;
	// System.Boolean System.Xml.XmlReaderSettings::schemasNeedsInitialization
	bool ___schemasNeedsInitialization_3;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::validationFlags
	int32_t ___validationFlags_4;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_conformance_1() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___conformance_1)); }
	inline int32_t get_conformance_1() const { return ___conformance_1; }
	inline int32_t* get_address_of_conformance_1() { return &___conformance_1; }
	inline void set_conformance_1(int32_t value)
	{
		___conformance_1 = value;
	}

	inline static int32_t get_offset_of_schemas_2() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___schemas_2)); }
	inline XmlSchemaSet_t266093086 * get_schemas_2() const { return ___schemas_2; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_2() { return &___schemas_2; }
	inline void set_schemas_2(XmlSchemaSet_t266093086 * value)
	{
		___schemas_2 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_2), value);
	}

	inline static int32_t get_offset_of_schemasNeedsInitialization_3() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___schemasNeedsInitialization_3)); }
	inline bool get_schemasNeedsInitialization_3() const { return ___schemasNeedsInitialization_3; }
	inline bool* get_address_of_schemasNeedsInitialization_3() { return &___schemasNeedsInitialization_3; }
	inline void set_schemasNeedsInitialization_3(bool value)
	{
		___schemasNeedsInitialization_3 = value;
	}

	inline static int32_t get_offset_of_validationFlags_4() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___validationFlags_4)); }
	inline int32_t get_validationFlags_4() const { return ___validationFlags_4; }
	inline int32_t* get_address_of_validationFlags_4() { return &___validationFlags_4; }
	inline void set_validationFlags_4(int32_t value)
	{
		___validationFlags_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADERSETTINGS_T2186285234_H
#ifndef XMLTEXT_T2682211705_H
#define XMLTEXT_T2682211705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlText
struct  XmlText_t2682211705  : public XmlCharacterData_t1167807131
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXT_T2682211705_H
#ifndef XMLSIGNIFICANTWHITESPACE_T1052520128_H
#define XMLSIGNIFICANTWHITESPACE_T1052520128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSignificantWhitespace
struct  XmlSignificantWhitespace_t1052520128  : public XmlCharacterData_t1167807131
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSIGNIFICANTWHITESPACE_T1052520128_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef XMLPARSERCONTEXT_T2544895291_H
#define XMLPARSERCONTEXT_T2544895291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlParserContext
struct  XmlParserContext_t2544895291  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlParserContext::baseURI
	String_t* ___baseURI_0;
	// System.String System.Xml.XmlParserContext::docTypeName
	String_t* ___docTypeName_1;
	// System.Text.Encoding System.Xml.XmlParserContext::encoding
	Encoding_t1523322056 * ___encoding_2;
	// System.String System.Xml.XmlParserContext::internalSubset
	String_t* ___internalSubset_3;
	// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::namespaceManager
	XmlNamespaceManager_t418790500 * ___namespaceManager_4;
	// System.Xml.XmlNameTable System.Xml.XmlParserContext::nameTable
	XmlNameTable_t71772148 * ___nameTable_5;
	// System.String System.Xml.XmlParserContext::publicID
	String_t* ___publicID_6;
	// System.String System.Xml.XmlParserContext::systemID
	String_t* ___systemID_7;
	// System.String System.Xml.XmlParserContext::xmlLang
	String_t* ___xmlLang_8;
	// System.Xml.XmlSpace System.Xml.XmlParserContext::xmlSpace
	int32_t ___xmlSpace_9;
	// System.Collections.ArrayList System.Xml.XmlParserContext::contextItems
	ArrayList_t2718874744 * ___contextItems_10;
	// System.Int32 System.Xml.XmlParserContext::contextItemCount
	int32_t ___contextItemCount_11;
	// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::dtd
	DTDObjectModel_t1729680289 * ___dtd_12;

public:
	inline static int32_t get_offset_of_baseURI_0() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___baseURI_0)); }
	inline String_t* get_baseURI_0() const { return ___baseURI_0; }
	inline String_t** get_address_of_baseURI_0() { return &___baseURI_0; }
	inline void set_baseURI_0(String_t* value)
	{
		___baseURI_0 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_0), value);
	}

	inline static int32_t get_offset_of_docTypeName_1() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___docTypeName_1)); }
	inline String_t* get_docTypeName_1() const { return ___docTypeName_1; }
	inline String_t** get_address_of_docTypeName_1() { return &___docTypeName_1; }
	inline void set_docTypeName_1(String_t* value)
	{
		___docTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___docTypeName_1), value);
	}

	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___encoding_2)); }
	inline Encoding_t1523322056 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t1523322056 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}

	inline static int32_t get_offset_of_internalSubset_3() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___internalSubset_3)); }
	inline String_t* get_internalSubset_3() const { return ___internalSubset_3; }
	inline String_t** get_address_of_internalSubset_3() { return &___internalSubset_3; }
	inline void set_internalSubset_3(String_t* value)
	{
		___internalSubset_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalSubset_3), value);
	}

	inline static int32_t get_offset_of_namespaceManager_4() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___namespaceManager_4)); }
	inline XmlNamespaceManager_t418790500 * get_namespaceManager_4() const { return ___namespaceManager_4; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_namespaceManager_4() { return &___namespaceManager_4; }
	inline void set_namespaceManager_4(XmlNamespaceManager_t418790500 * value)
	{
		___namespaceManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceManager_4), value);
	}

	inline static int32_t get_offset_of_nameTable_5() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___nameTable_5)); }
	inline XmlNameTable_t71772148 * get_nameTable_5() const { return ___nameTable_5; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_5() { return &___nameTable_5; }
	inline void set_nameTable_5(XmlNameTable_t71772148 * value)
	{
		___nameTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_5), value);
	}

	inline static int32_t get_offset_of_publicID_6() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___publicID_6)); }
	inline String_t* get_publicID_6() const { return ___publicID_6; }
	inline String_t** get_address_of_publicID_6() { return &___publicID_6; }
	inline void set_publicID_6(String_t* value)
	{
		___publicID_6 = value;
		Il2CppCodeGenWriteBarrier((&___publicID_6), value);
	}

	inline static int32_t get_offset_of_systemID_7() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___systemID_7)); }
	inline String_t* get_systemID_7() const { return ___systemID_7; }
	inline String_t** get_address_of_systemID_7() { return &___systemID_7; }
	inline void set_systemID_7(String_t* value)
	{
		___systemID_7 = value;
		Il2CppCodeGenWriteBarrier((&___systemID_7), value);
	}

	inline static int32_t get_offset_of_xmlLang_8() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___xmlLang_8)); }
	inline String_t* get_xmlLang_8() const { return ___xmlLang_8; }
	inline String_t** get_address_of_xmlLang_8() { return &___xmlLang_8; }
	inline void set_xmlLang_8(String_t* value)
	{
		___xmlLang_8 = value;
		Il2CppCodeGenWriteBarrier((&___xmlLang_8), value);
	}

	inline static int32_t get_offset_of_xmlSpace_9() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___xmlSpace_9)); }
	inline int32_t get_xmlSpace_9() const { return ___xmlSpace_9; }
	inline int32_t* get_address_of_xmlSpace_9() { return &___xmlSpace_9; }
	inline void set_xmlSpace_9(int32_t value)
	{
		___xmlSpace_9 = value;
	}

	inline static int32_t get_offset_of_contextItems_10() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___contextItems_10)); }
	inline ArrayList_t2718874744 * get_contextItems_10() const { return ___contextItems_10; }
	inline ArrayList_t2718874744 ** get_address_of_contextItems_10() { return &___contextItems_10; }
	inline void set_contextItems_10(ArrayList_t2718874744 * value)
	{
		___contextItems_10 = value;
		Il2CppCodeGenWriteBarrier((&___contextItems_10), value);
	}

	inline static int32_t get_offset_of_contextItemCount_11() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___contextItemCount_11)); }
	inline int32_t get_contextItemCount_11() const { return ___contextItemCount_11; }
	inline int32_t* get_address_of_contextItemCount_11() { return &___contextItemCount_11; }
	inline void set_contextItemCount_11(int32_t value)
	{
		___contextItemCount_11 = value;
	}

	inline static int32_t get_offset_of_dtd_12() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___dtd_12)); }
	inline DTDObjectModel_t1729680289 * get_dtd_12() const { return ___dtd_12; }
	inline DTDObjectModel_t1729680289 ** get_address_of_dtd_12() { return &___dtd_12; }
	inline void set_dtd_12(DTDObjectModel_t1729680289 * value)
	{
		___dtd_12 = value;
		Il2CppCodeGenWriteBarrier((&___dtd_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPARSERCONTEXT_T2544895291_H
#ifndef XMLVALIDATINGREADER_T1719295192_H
#define XMLVALIDATINGREADER_T1719295192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t1719295192  : public XmlReader_t3121518892
{
public:
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling_2;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_t3121518892 * ___sourceReader_3;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t4233384356 * ___xmlTextReader_4;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_t3121518892 * ___validatingReader_5;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_t626023767 * ___resolver_6;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified_7;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType_8;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t3610399789 * ___schemas_9;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t3946379043 * ___dtdReader_10;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	RuntimeObject* ___schemaInfo_11;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t * ___storedCharacters_12;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t791314227 * ___ValidationEventHandler_13;

public:
	inline static int32_t get_offset_of_entityHandling_2() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___entityHandling_2)); }
	inline int32_t get_entityHandling_2() const { return ___entityHandling_2; }
	inline int32_t* get_address_of_entityHandling_2() { return &___entityHandling_2; }
	inline void set_entityHandling_2(int32_t value)
	{
		___entityHandling_2 = value;
	}

	inline static int32_t get_offset_of_sourceReader_3() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___sourceReader_3)); }
	inline XmlReader_t3121518892 * get_sourceReader_3() const { return ___sourceReader_3; }
	inline XmlReader_t3121518892 ** get_address_of_sourceReader_3() { return &___sourceReader_3; }
	inline void set_sourceReader_3(XmlReader_t3121518892 * value)
	{
		___sourceReader_3 = value;
		Il2CppCodeGenWriteBarrier((&___sourceReader_3), value);
	}

	inline static int32_t get_offset_of_xmlTextReader_4() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___xmlTextReader_4)); }
	inline XmlTextReader_t4233384356 * get_xmlTextReader_4() const { return ___xmlTextReader_4; }
	inline XmlTextReader_t4233384356 ** get_address_of_xmlTextReader_4() { return &___xmlTextReader_4; }
	inline void set_xmlTextReader_4(XmlTextReader_t4233384356 * value)
	{
		___xmlTextReader_4 = value;
		Il2CppCodeGenWriteBarrier((&___xmlTextReader_4), value);
	}

	inline static int32_t get_offset_of_validatingReader_5() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___validatingReader_5)); }
	inline XmlReader_t3121518892 * get_validatingReader_5() const { return ___validatingReader_5; }
	inline XmlReader_t3121518892 ** get_address_of_validatingReader_5() { return &___validatingReader_5; }
	inline void set_validatingReader_5(XmlReader_t3121518892 * value)
	{
		___validatingReader_5 = value;
		Il2CppCodeGenWriteBarrier((&___validatingReader_5), value);
	}

	inline static int32_t get_offset_of_resolver_6() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___resolver_6)); }
	inline XmlResolver_t626023767 * get_resolver_6() const { return ___resolver_6; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_6() { return &___resolver_6; }
	inline void set_resolver_6(XmlResolver_t626023767 * value)
	{
		___resolver_6 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_6), value);
	}

	inline static int32_t get_offset_of_resolverSpecified_7() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___resolverSpecified_7)); }
	inline bool get_resolverSpecified_7() const { return ___resolverSpecified_7; }
	inline bool* get_address_of_resolverSpecified_7() { return &___resolverSpecified_7; }
	inline void set_resolverSpecified_7(bool value)
	{
		___resolverSpecified_7 = value;
	}

	inline static int32_t get_offset_of_validationType_8() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___validationType_8)); }
	inline int32_t get_validationType_8() const { return ___validationType_8; }
	inline int32_t* get_address_of_validationType_8() { return &___validationType_8; }
	inline void set_validationType_8(int32_t value)
	{
		___validationType_8 = value;
	}

	inline static int32_t get_offset_of_schemas_9() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___schemas_9)); }
	inline XmlSchemaCollection_t3610399789 * get_schemas_9() const { return ___schemas_9; }
	inline XmlSchemaCollection_t3610399789 ** get_address_of_schemas_9() { return &___schemas_9; }
	inline void set_schemas_9(XmlSchemaCollection_t3610399789 * value)
	{
		___schemas_9 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_9), value);
	}

	inline static int32_t get_offset_of_dtdReader_10() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___dtdReader_10)); }
	inline DTDValidatingReader_t3946379043 * get_dtdReader_10() const { return ___dtdReader_10; }
	inline DTDValidatingReader_t3946379043 ** get_address_of_dtdReader_10() { return &___dtdReader_10; }
	inline void set_dtdReader_10(DTDValidatingReader_t3946379043 * value)
	{
		___dtdReader_10 = value;
		Il2CppCodeGenWriteBarrier((&___dtdReader_10), value);
	}

	inline static int32_t get_offset_of_schemaInfo_11() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___schemaInfo_11)); }
	inline RuntimeObject* get_schemaInfo_11() const { return ___schemaInfo_11; }
	inline RuntimeObject** get_address_of_schemaInfo_11() { return &___schemaInfo_11; }
	inline void set_schemaInfo_11(RuntimeObject* value)
	{
		___schemaInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_11), value);
	}

	inline static int32_t get_offset_of_storedCharacters_12() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___storedCharacters_12)); }
	inline StringBuilder_t * get_storedCharacters_12() const { return ___storedCharacters_12; }
	inline StringBuilder_t ** get_address_of_storedCharacters_12() { return &___storedCharacters_12; }
	inline void set_storedCharacters_12(StringBuilder_t * value)
	{
		___storedCharacters_12 = value;
		Il2CppCodeGenWriteBarrier((&___storedCharacters_12), value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_13() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___ValidationEventHandler_13)); }
	inline ValidationEventHandler_t791314227 * get_ValidationEventHandler_13() const { return ___ValidationEventHandler_13; }
	inline ValidationEventHandler_t791314227 ** get_address_of_ValidationEventHandler_13() { return &___ValidationEventHandler_13; }
	inline void set_ValidationEventHandler_13(ValidationEventHandler_t791314227 * value)
	{
		___ValidationEventHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLVALIDATINGREADER_T1719295192_H
#ifndef WEBREQUEST_T1939381076_H
#define WEBREQUEST_T1939381076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t1939381076  : public MarshalByRefObject_t2760389100
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t1939381076_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t4070033136 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t4070033136 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t4070033136 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t4070033136 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T1939381076_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef XSDVALIDATINGREADER_T3961132625_H
#define XSDVALIDATINGREADER_T3961132625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdValidatingReader
struct  XsdValidatingReader_t3961132625  : public XmlReader_t3121518892
{
public:
	// System.Xml.XmlReader Mono.Xml.Schema.XsdValidatingReader::reader
	XmlReader_t3121518892 * ___reader_3;
	// System.Xml.XmlResolver Mono.Xml.Schema.XsdValidatingReader::resolver
	XmlResolver_t626023767 * ___resolver_4;
	// Mono.Xml.IHasXmlSchemaInfo Mono.Xml.Schema.XsdValidatingReader::sourceReaderSchemaInfo
	RuntimeObject* ___sourceReaderSchemaInfo_5;
	// System.Xml.IXmlLineInfo Mono.Xml.Schema.XsdValidatingReader::readerLineInfo
	RuntimeObject* ___readerLineInfo_6;
	// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::validationType
	int32_t ___validationType_7;
	// System.Xml.Schema.XmlSchemaSet Mono.Xml.Schema.XsdValidatingReader::schemas
	XmlSchemaSet_t266093086 * ___schemas_8;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::namespaces
	bool ___namespaces_9;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::validationStarted
	bool ___validationStarted_10;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkIdentity
	bool ___checkIdentity_11;
	// Mono.Xml.Schema.XsdIDManager Mono.Xml.Schema.XsdValidatingReader::idManager
	XsdIDManager_t1008806102 * ___idManager_12;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkKeyConstraints
	bool ___checkKeyConstraints_13;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::keyTables
	ArrayList_t2718874744 * ___keyTables_14;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::currentKeyFieldConsumers
	ArrayList_t2718874744 * ___currentKeyFieldConsumers_15;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::tmpKeyrefPool
	ArrayList_t2718874744 * ___tmpKeyrefPool_16;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::elementQNameStack
	ArrayList_t2718874744 * ___elementQNameStack_17;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidatingReader::state
	XsdParticleStateManager_t726654767 * ___state_18;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::skipValidationDepth
	int32_t ___skipValidationDepth_19;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::xsiNilDepth
	int32_t ___xsiNilDepth_20;
	// System.Text.StringBuilder Mono.Xml.Schema.XsdValidatingReader::storedCharacters
	StringBuilder_t * ___storedCharacters_21;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::shouldValidateCharacters
	bool ___shouldValidateCharacters_22;
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::defaultAttributes
	XmlSchemaAttributeU5BU5D_t346244693* ___defaultAttributes_23;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::currentDefaultAttribute
	int32_t ___currentDefaultAttribute_24;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::defaultAttributesCache
	ArrayList_t2718874744 * ___defaultAttributesCache_25;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::defaultAttributeConsumed
	bool ___defaultAttributeConsumed_26;
	// System.Object Mono.Xml.Schema.XsdValidatingReader::currentAttrType
	RuntimeObject * ___currentAttrType_27;
	// System.Xml.Schema.ValidationEventHandler Mono.Xml.Schema.XsdValidatingReader::ValidationEventHandler
	ValidationEventHandler_t791314227 * ___ValidationEventHandler_28;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___reader_3)); }
	inline XmlReader_t3121518892 * get_reader_3() const { return ___reader_3; }
	inline XmlReader_t3121518892 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(XmlReader_t3121518892 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier((&___reader_3), value);
	}

	inline static int32_t get_offset_of_resolver_4() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___resolver_4)); }
	inline XmlResolver_t626023767 * get_resolver_4() const { return ___resolver_4; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_4() { return &___resolver_4; }
	inline void set_resolver_4(XmlResolver_t626023767 * value)
	{
		___resolver_4 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_4), value);
	}

	inline static int32_t get_offset_of_sourceReaderSchemaInfo_5() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___sourceReaderSchemaInfo_5)); }
	inline RuntimeObject* get_sourceReaderSchemaInfo_5() const { return ___sourceReaderSchemaInfo_5; }
	inline RuntimeObject** get_address_of_sourceReaderSchemaInfo_5() { return &___sourceReaderSchemaInfo_5; }
	inline void set_sourceReaderSchemaInfo_5(RuntimeObject* value)
	{
		___sourceReaderSchemaInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___sourceReaderSchemaInfo_5), value);
	}

	inline static int32_t get_offset_of_readerLineInfo_6() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___readerLineInfo_6)); }
	inline RuntimeObject* get_readerLineInfo_6() const { return ___readerLineInfo_6; }
	inline RuntimeObject** get_address_of_readerLineInfo_6() { return &___readerLineInfo_6; }
	inline void set_readerLineInfo_6(RuntimeObject* value)
	{
		___readerLineInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___readerLineInfo_6), value);
	}

	inline static int32_t get_offset_of_validationType_7() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___validationType_7)); }
	inline int32_t get_validationType_7() const { return ___validationType_7; }
	inline int32_t* get_address_of_validationType_7() { return &___validationType_7; }
	inline void set_validationType_7(int32_t value)
	{
		___validationType_7 = value;
	}

	inline static int32_t get_offset_of_schemas_8() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___schemas_8)); }
	inline XmlSchemaSet_t266093086 * get_schemas_8() const { return ___schemas_8; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_8() { return &___schemas_8; }
	inline void set_schemas_8(XmlSchemaSet_t266093086 * value)
	{
		___schemas_8 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_8), value);
	}

	inline static int32_t get_offset_of_namespaces_9() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___namespaces_9)); }
	inline bool get_namespaces_9() const { return ___namespaces_9; }
	inline bool* get_address_of_namespaces_9() { return &___namespaces_9; }
	inline void set_namespaces_9(bool value)
	{
		___namespaces_9 = value;
	}

	inline static int32_t get_offset_of_validationStarted_10() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___validationStarted_10)); }
	inline bool get_validationStarted_10() const { return ___validationStarted_10; }
	inline bool* get_address_of_validationStarted_10() { return &___validationStarted_10; }
	inline void set_validationStarted_10(bool value)
	{
		___validationStarted_10 = value;
	}

	inline static int32_t get_offset_of_checkIdentity_11() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___checkIdentity_11)); }
	inline bool get_checkIdentity_11() const { return ___checkIdentity_11; }
	inline bool* get_address_of_checkIdentity_11() { return &___checkIdentity_11; }
	inline void set_checkIdentity_11(bool value)
	{
		___checkIdentity_11 = value;
	}

	inline static int32_t get_offset_of_idManager_12() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___idManager_12)); }
	inline XsdIDManager_t1008806102 * get_idManager_12() const { return ___idManager_12; }
	inline XsdIDManager_t1008806102 ** get_address_of_idManager_12() { return &___idManager_12; }
	inline void set_idManager_12(XsdIDManager_t1008806102 * value)
	{
		___idManager_12 = value;
		Il2CppCodeGenWriteBarrier((&___idManager_12), value);
	}

	inline static int32_t get_offset_of_checkKeyConstraints_13() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___checkKeyConstraints_13)); }
	inline bool get_checkKeyConstraints_13() const { return ___checkKeyConstraints_13; }
	inline bool* get_address_of_checkKeyConstraints_13() { return &___checkKeyConstraints_13; }
	inline void set_checkKeyConstraints_13(bool value)
	{
		___checkKeyConstraints_13 = value;
	}

	inline static int32_t get_offset_of_keyTables_14() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___keyTables_14)); }
	inline ArrayList_t2718874744 * get_keyTables_14() const { return ___keyTables_14; }
	inline ArrayList_t2718874744 ** get_address_of_keyTables_14() { return &___keyTables_14; }
	inline void set_keyTables_14(ArrayList_t2718874744 * value)
	{
		___keyTables_14 = value;
		Il2CppCodeGenWriteBarrier((&___keyTables_14), value);
	}

	inline static int32_t get_offset_of_currentKeyFieldConsumers_15() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___currentKeyFieldConsumers_15)); }
	inline ArrayList_t2718874744 * get_currentKeyFieldConsumers_15() const { return ___currentKeyFieldConsumers_15; }
	inline ArrayList_t2718874744 ** get_address_of_currentKeyFieldConsumers_15() { return &___currentKeyFieldConsumers_15; }
	inline void set_currentKeyFieldConsumers_15(ArrayList_t2718874744 * value)
	{
		___currentKeyFieldConsumers_15 = value;
		Il2CppCodeGenWriteBarrier((&___currentKeyFieldConsumers_15), value);
	}

	inline static int32_t get_offset_of_tmpKeyrefPool_16() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___tmpKeyrefPool_16)); }
	inline ArrayList_t2718874744 * get_tmpKeyrefPool_16() const { return ___tmpKeyrefPool_16; }
	inline ArrayList_t2718874744 ** get_address_of_tmpKeyrefPool_16() { return &___tmpKeyrefPool_16; }
	inline void set_tmpKeyrefPool_16(ArrayList_t2718874744 * value)
	{
		___tmpKeyrefPool_16 = value;
		Il2CppCodeGenWriteBarrier((&___tmpKeyrefPool_16), value);
	}

	inline static int32_t get_offset_of_elementQNameStack_17() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___elementQNameStack_17)); }
	inline ArrayList_t2718874744 * get_elementQNameStack_17() const { return ___elementQNameStack_17; }
	inline ArrayList_t2718874744 ** get_address_of_elementQNameStack_17() { return &___elementQNameStack_17; }
	inline void set_elementQNameStack_17(ArrayList_t2718874744 * value)
	{
		___elementQNameStack_17 = value;
		Il2CppCodeGenWriteBarrier((&___elementQNameStack_17), value);
	}

	inline static int32_t get_offset_of_state_18() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___state_18)); }
	inline XsdParticleStateManager_t726654767 * get_state_18() const { return ___state_18; }
	inline XsdParticleStateManager_t726654767 ** get_address_of_state_18() { return &___state_18; }
	inline void set_state_18(XsdParticleStateManager_t726654767 * value)
	{
		___state_18 = value;
		Il2CppCodeGenWriteBarrier((&___state_18), value);
	}

	inline static int32_t get_offset_of_skipValidationDepth_19() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___skipValidationDepth_19)); }
	inline int32_t get_skipValidationDepth_19() const { return ___skipValidationDepth_19; }
	inline int32_t* get_address_of_skipValidationDepth_19() { return &___skipValidationDepth_19; }
	inline void set_skipValidationDepth_19(int32_t value)
	{
		___skipValidationDepth_19 = value;
	}

	inline static int32_t get_offset_of_xsiNilDepth_20() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___xsiNilDepth_20)); }
	inline int32_t get_xsiNilDepth_20() const { return ___xsiNilDepth_20; }
	inline int32_t* get_address_of_xsiNilDepth_20() { return &___xsiNilDepth_20; }
	inline void set_xsiNilDepth_20(int32_t value)
	{
		___xsiNilDepth_20 = value;
	}

	inline static int32_t get_offset_of_storedCharacters_21() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___storedCharacters_21)); }
	inline StringBuilder_t * get_storedCharacters_21() const { return ___storedCharacters_21; }
	inline StringBuilder_t ** get_address_of_storedCharacters_21() { return &___storedCharacters_21; }
	inline void set_storedCharacters_21(StringBuilder_t * value)
	{
		___storedCharacters_21 = value;
		Il2CppCodeGenWriteBarrier((&___storedCharacters_21), value);
	}

	inline static int32_t get_offset_of_shouldValidateCharacters_22() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___shouldValidateCharacters_22)); }
	inline bool get_shouldValidateCharacters_22() const { return ___shouldValidateCharacters_22; }
	inline bool* get_address_of_shouldValidateCharacters_22() { return &___shouldValidateCharacters_22; }
	inline void set_shouldValidateCharacters_22(bool value)
	{
		___shouldValidateCharacters_22 = value;
	}

	inline static int32_t get_offset_of_defaultAttributes_23() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___defaultAttributes_23)); }
	inline XmlSchemaAttributeU5BU5D_t346244693* get_defaultAttributes_23() const { return ___defaultAttributes_23; }
	inline XmlSchemaAttributeU5BU5D_t346244693** get_address_of_defaultAttributes_23() { return &___defaultAttributes_23; }
	inline void set_defaultAttributes_23(XmlSchemaAttributeU5BU5D_t346244693* value)
	{
		___defaultAttributes_23 = value;
		Il2CppCodeGenWriteBarrier((&___defaultAttributes_23), value);
	}

	inline static int32_t get_offset_of_currentDefaultAttribute_24() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___currentDefaultAttribute_24)); }
	inline int32_t get_currentDefaultAttribute_24() const { return ___currentDefaultAttribute_24; }
	inline int32_t* get_address_of_currentDefaultAttribute_24() { return &___currentDefaultAttribute_24; }
	inline void set_currentDefaultAttribute_24(int32_t value)
	{
		___currentDefaultAttribute_24 = value;
	}

	inline static int32_t get_offset_of_defaultAttributesCache_25() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___defaultAttributesCache_25)); }
	inline ArrayList_t2718874744 * get_defaultAttributesCache_25() const { return ___defaultAttributesCache_25; }
	inline ArrayList_t2718874744 ** get_address_of_defaultAttributesCache_25() { return &___defaultAttributesCache_25; }
	inline void set_defaultAttributesCache_25(ArrayList_t2718874744 * value)
	{
		___defaultAttributesCache_25 = value;
		Il2CppCodeGenWriteBarrier((&___defaultAttributesCache_25), value);
	}

	inline static int32_t get_offset_of_defaultAttributeConsumed_26() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___defaultAttributeConsumed_26)); }
	inline bool get_defaultAttributeConsumed_26() const { return ___defaultAttributeConsumed_26; }
	inline bool* get_address_of_defaultAttributeConsumed_26() { return &___defaultAttributeConsumed_26; }
	inline void set_defaultAttributeConsumed_26(bool value)
	{
		___defaultAttributeConsumed_26 = value;
	}

	inline static int32_t get_offset_of_currentAttrType_27() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___currentAttrType_27)); }
	inline RuntimeObject * get_currentAttrType_27() const { return ___currentAttrType_27; }
	inline RuntimeObject ** get_address_of_currentAttrType_27() { return &___currentAttrType_27; }
	inline void set_currentAttrType_27(RuntimeObject * value)
	{
		___currentAttrType_27 = value;
		Il2CppCodeGenWriteBarrier((&___currentAttrType_27), value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_28() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___ValidationEventHandler_28)); }
	inline ValidationEventHandler_t791314227 * get_ValidationEventHandler_28() const { return ___ValidationEventHandler_28; }
	inline ValidationEventHandler_t791314227 ** get_address_of_ValidationEventHandler_28() { return &___ValidationEventHandler_28; }
	inline void set_ValidationEventHandler_28(ValidationEventHandler_t791314227 * value)
	{
		___ValidationEventHandler_28 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_28), value);
	}
};

struct XsdValidatingReader_t3961132625_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_t346244693* ___emptyAttributeArray_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map3
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map3_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map4
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map4_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map5
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map5_31;

public:
	inline static int32_t get_offset_of_emptyAttributeArray_2() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625_StaticFields, ___emptyAttributeArray_2)); }
	inline XmlSchemaAttributeU5BU5D_t346244693* get_emptyAttributeArray_2() const { return ___emptyAttributeArray_2; }
	inline XmlSchemaAttributeU5BU5D_t346244693** get_address_of_emptyAttributeArray_2() { return &___emptyAttributeArray_2; }
	inline void set_emptyAttributeArray_2(XmlSchemaAttributeU5BU5D_t346244693* value)
	{
		___emptyAttributeArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptyAttributeArray_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_29() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625_StaticFields, ___U3CU3Ef__switchU24map3_29)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map3_29() const { return ___U3CU3Ef__switchU24map3_29; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map3_29() { return &___U3CU3Ef__switchU24map3_29; }
	inline void set_U3CU3Ef__switchU24map3_29(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map3_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_30() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625_StaticFields, ___U3CU3Ef__switchU24map4_30)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map4_30() const { return ___U3CU3Ef__switchU24map4_30; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map4_30() { return &___U3CU3Ef__switchU24map4_30; }
	inline void set_U3CU3Ef__switchU24map4_30(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map4_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map4_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_31() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625_StaticFields, ___U3CU3Ef__switchU24map5_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map5_31() const { return ___U3CU3Ef__switchU24map5_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map5_31() { return &___U3CU3Ef__switchU24map5_31; }
	inline void set_U3CU3Ef__switchU24map5_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map5_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSDVALIDATINGREADER_T3961132625_H
#ifndef XMLWHITESPACE_T131741354_H
#define XMLWHITESPACE_T131741354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWhitespace
struct  XmlWhitespace_t131741354  : public XmlCharacterData_t1167807131
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWHITESPACE_T131741354_H
#ifndef VALIDATIONEVENTARGS_T2784773869_H
#define VALIDATIONEVENTARGS_T2784773869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationEventArgs
struct  ValidationEventArgs_t2784773869  : public EventArgs_t3591816995
{
public:
	// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::exception
	XmlSchemaException_t3511258692 * ___exception_1;
	// System.String System.Xml.Schema.ValidationEventArgs::message
	String_t* ___message_2;
	// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::severity
	int32_t ___severity_3;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t2784773869, ___exception_1)); }
	inline XmlSchemaException_t3511258692 * get_exception_1() const { return ___exception_1; }
	inline XmlSchemaException_t3511258692 ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(XmlSchemaException_t3511258692 * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t2784773869, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_severity_3() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t2784773869, ___severity_3)); }
	inline int32_t get_severity_3() const { return ___severity_3; }
	inline int32_t* get_address_of_severity_3() { return &___severity_3; }
	inline void set_severity_3(int32_t value)
	{
		___severity_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTARGS_T2784773869_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef VALIDATIONEVENTHANDLER_T791314227_H
#define VALIDATIONEVENTHANDLER_T791314227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationEventHandler
struct  ValidationEventHandler_t791314227  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTHANDLER_T791314227_H
#ifndef CHARGETTER_T1703763694_H
#define CHARGETTER_T1703763694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderBinarySupport/CharGetter
struct  CharGetter_t1703763694  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARGETTER_T1703763694_H
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
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
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_t431163322  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XmlNodeInfo_t4030693883 * m_Items[1];

public:
	inline XmlNodeInfo_t4030693883 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlNodeInfo_t4030693883 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlNodeInfo_t4030693883 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline XmlNodeInfo_t4030693883 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlNodeInfo_t4030693883 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlNodeInfo_t4030693883 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C"  void Stack_1__ctor_m3164958980_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(!0)
extern "C"  bool Stack_1_Contains_m1578348417_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C"  void Stack_1_Push_m1669856732_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C"  RuntimeObject * Stack_1_Pop_m756553478_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m182537451_gshared (Dictionary_2_t3384741 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m1279427033_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3959998165_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C"  XmlLinkedNode_t1437094927 * XmlLinkedNode_get_NextLinkedSibling_m4215230027 (XmlLinkedNode_t1437094927 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::ReferenceEquals(System.Object,System.Object)
extern "C"  bool Object_ReferenceEquals_m610702577 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
extern "C"  void XmlNode__ctor_m2694942411 (XmlNode_t3767805227 * __this, XmlDocument_t2837193595 * ___ownerDocument0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
extern "C"  XmlNameTable_t71772148 * XmlDocument_get_NameTable_m3351667098 (XmlDocument_t2837193595 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m1245162613 (XmlParserContext_t2544895291 * __this, XmlNameTable_t71772148 * ___nt0, XmlNamespaceManager_t418790500 * ___nsMgr1, String_t* ___docTypeName2, String_t* ___pubId3, String_t* ___sysId4, String_t* ___internalSubset5, String_t* ___baseURI6, String_t* ___xmlLang7, int32_t ___xmlSpace8, Encoding_t1523322056 * ___enc9, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m3591085177 (XmlTextReader_t3455035481 * __this, TextReader_t283511965 * ___input0, XmlNameTable_t71772148 * ___nt1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String)
extern "C"  DTDObjectModel_t1729680289 * XmlTextReader_GenerateDTDObjectModel_m1291768325 (XmlTextReader_t3455035481 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m2145142613 (XmlParserContext_t2544895291 * __this, XmlNameTable_t71772148 * ___nt0, XmlNamespaceManager_t418790500 * ___nsMgr1, DTDObjectModel_t1729680289 * ___dtd2, String_t* ___baseURI3, String_t* ___xmlLang4, int32_t ___xmlSpace5, Encoding_t1523322056 * ___enc6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_Name()
extern "C"  String_t* DTDObjectModel_get_Name_m4149993094 (DTDObjectModel_t1729680289 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern "C"  void XmlParserContext_set_DocTypeName_m1738723375 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_PublicId()
extern "C"  String_t* DTDObjectModel_get_PublicId_m664009037 (DTDObjectModel_t1729680289 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern "C"  void XmlParserContext_set_PublicId_m3531550524 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_SystemId()
extern "C"  String_t* DTDObjectModel_get_SystemId_m2725442049 (DTDObjectModel_t1729680289 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern "C"  void XmlParserContext_set_SystemId_m2348109559 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_InternalSubset()
extern "C"  String_t* DTDObjectModel_get_InternalSubset_m3920583053 (DTDObjectModel_t1729680289 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern "C"  void XmlParserContext_set_InternalSubset_m2419608887 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern "C"  void XmlParserContext_set_BaseURI_m3915640945 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern "C"  void XmlParserContext_set_XmlLang_m1868304449 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext/ContextItem::.ctor()
extern "C"  void ContextItem__ctor_m4162607161 (ContextItem_t3112052795 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C"  String_t* XmlParserContext_get_BaseURI_m3403405423 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C"  String_t* XmlParserContext_get_XmlLang_m3854899066 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C"  int32_t XmlParserContext_get_XmlSpace_m672663556 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String)
extern "C"  void XmlException__ctor_m3751204500 (XmlException_t1761730631 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String,System.Int32,System.Int32)
extern "C"  void XmlParserInput__ctor_m323061724 (XmlParserInput_t2182411204 * __this, TextReader_t283511965 * ___reader0, String_t* ___baseURI1, int32_t ___line2, int32_t ___column3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor()
extern "C"  void Stack__ctor_m2907601956 (Stack_t2329662280 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C"  void XmlParserInputSource__ctor_m340894289 (XmlParserInputSource_t3533005609 * __this, TextReader_t283511965 * ___reader0, String_t* ___baseUri1, bool ___pe2, int32_t ___line3, int32_t ___column4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C"  void XmlParserInputSource_Close_m3296961761 (XmlParserInputSource_t3533005609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ReplacementText()
extern "C"  String_t* DTDEntityBase_get_ReplacementText_m2400228330 (DTDEntityBase_t1228162861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C"  void StringReader__ctor_m126993932 (StringReader_t3465604688 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ActualUri()
extern "C"  String_t* DTDEntityBase_get_ActualUri_m3317770620 (DTDEntityBase_t1228162861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C"  int32_t XmlParserInputSource_Read_m188586768 (XmlParserInputSource_t3533005609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadSourceChar()
extern "C"  int32_t XmlParserInput_ReadSourceChar_m479227790 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::PeekChar()
extern "C"  int32_t XmlParserInput_PeekChar_m2826906097 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C"  int32_t XmlParserInputSource_get_LineNumber_m2358449795 (XmlParserInputSource_t3533005609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C"  int32_t XmlParserInputSource_get_LinePosition_m2775212307 (XmlParserInputSource_t3533005609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C"  void XmlLinkedNode__ctor_m1742070414 (XmlLinkedNode_t1437094927 * __this, XmlDocument_t2837193595 * ___doc0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyName(System.String)
extern "C"  String_t* XmlConvert_VerifyName_m2131148908 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Data()
extern "C"  String_t* XmlProcessingInstruction_get_Data_m288714794 (XmlProcessingInstruction_t425688976 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::.ctor(System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlProcessingInstruction__ctor_m3762799159 (XmlProcessingInstruction_t425688976 * __this, String_t* ___target0, String_t* ___data1, XmlDocument_t2837193595 * ___doc2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C"  void XmlQualifiedName__ctor_m835061046 (XmlQualifiedName_t2760654312 * __this, String_t* ___name0, String_t* ___ns1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
extern "C"  int32_t String_GetHashCode_m1906374149 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor()
extern "C"  void XmlQualifiedName__ctor_m1240160807 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  bool XmlQualifiedName_op_Equality_m1684199236 (RuntimeObject * __this /* static, unused */, XmlQualifiedName_t2760654312 * ___a0, XmlQualifiedName_t2760654312 * ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String)
extern "C"  void XmlQualifiedName__ctor_m270143366 (XmlQualifiedName_t2760654312 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C"  void ArgumentOutOfRangeException__ctor_m2047740448 (ArgumentOutOfRangeException_t777629997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor()
extern "C"  void StringWriter__ctor_m1244548890 (StringWriter_t802263757 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C"  void XmlTextWriter__ctor_m1850551870 (XmlTextWriter_t2114213153 * __this, TextWriter_t3478189236 * ___writer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::Invoke(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t CharGetter_Invoke_m2044290462 (CharGetter_t1703763694 * __this, CharU5BU5D_t3528271667* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::.ctor()
extern "C"  void XmlSchemaSet__ctor_m2333710421 (XmlSchemaSet_t266093086 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C"  bool Uri_op_Equality_m685520154 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * p0, Uri_t100236324 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C"  bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m800430703 (Uri_t100236324 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFullPath(System.String)
extern "C"  String_t* Path_GetFullPath_m4142135635 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C"  String_t* XmlResolver_EscapeRelativeUriBody_m3919279314 (XmlResolver_t626023767 * __this, String_t* ___src0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C"  void Uri__ctor_m4293005803 (Uri_t100236324 * __this, Uri_t100236324 * p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCharacterData::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlCharacterData__ctor_m3935345337 (XmlCharacterData_t1167807131 * __this, String_t* ___data0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.String)
extern "C"  bool XmlChar_IsWhitespace_m2421104119 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCharacterData::set_Data(System.String)
extern "C"  void XmlCharacterData_set_Data_m1077571986 (XmlCharacterData_t1167807131 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C"  XmlNode_t3767805227 * XmlNode_get_ParentNode_m3304904414 (XmlNode_t3767805227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlSignificantWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlSignificantWhitespace__ctor_m3379707424 (XmlSignificantWhitespace_t1052520128 * __this, String_t* ___strData0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.XmlInputStream::get_ActualEncoding()
extern "C"  Encoding_t1523322056 * XmlInputStream_get_ActualEncoding_m3321735681 (XmlInputStream_t1691369434 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void NonBlockingStreamReader__ctor_m3980822218 (NonBlockingStreamReader_t2495303928 * __this, Stream_t1273022909 * ___stream0, Encoding_t1523322056 * ___encoding1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::.ctor(System.IO.Stream)
extern "C"  void XmlInputStream__ctor_m3269376818 (XmlInputStream_t1691369434 * __this, Stream_t1273022909 * ___stream0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
extern "C"  void XmlStreamReader__ctor_m3688274484 (XmlStreamReader_t727818754 * __this, XmlInputStream_t1691369434 * ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t NonBlockingStreamReader_Read_m583787078 (NonBlockingStreamReader_t2495303928 * __this, CharU5BU5D_t3528271667* ___dest_buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Dispose(System.Boolean)
extern "C"  void NonBlockingStreamReader_Dispose_m2043563007 (NonBlockingStreamReader_t2495303928 * __this, bool ___disposing0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::.ctor()
extern "C"  void XmlReader__ctor_m2242864879 (XmlReader_t3121518892 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m3779111233 (XmlTextReader_t3455035481 * __this, String_t* ___url0, XmlNameTable_t71772148 * ___nt1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
extern "C"  void XmlStreamReader__ctor_m3403779607 (XmlStreamReader_t727818754 * __this, Stream_t1273022909 * ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m2025294095 (XmlTextReader_t4233384356 * __this, String_t* ___url0, TextReader_t283511965 * ___input1, XmlNameTable_t71772148 * ___nt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m3612242620 (XmlTextReader_t3455035481 * __this, String_t* ___url0, TextReader_t283511965 * ___input1, XmlNameTable_t71772148 * ___nt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m4089766063 (XmlTextReader_t3455035481 * __this, String_t* ___xmlFragment0, int32_t ___fragType1, XmlParserContext_t2544895291 * ___context2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C"  XmlParserContext_t2544895291 * XmlTextReader_get_ParserContext_m2090305018 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C"  XmlReader_t3121518892 * XmlTextReader_get_Current_m3824742842 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C"  XmlReaderSettings_t2186285234 * XmlReader_get_Settings_m3232276411 (XmlReader_t3121518892 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C"  bool XmlTextReader_get_CharacterChecking_m142279829 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CharacterChecking()
extern "C"  bool XmlTextReader_get_CharacterChecking_m322676875 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C"  void XmlTextReader_set_CharacterChecking_m1374136630 (XmlTextReader_t4233384356 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C"  void XmlTextReader_set_CharacterChecking_m824755556 (XmlTextReader_t3455035481 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C"  bool XmlTextReader_get_CloseInput_m4005923126 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CloseInput()
extern "C"  bool XmlTextReader_get_CloseInput_m2055464539 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C"  void XmlTextReader_set_CloseInput_m2512558630 (XmlTextReader_t4233384356 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CloseInput(System.Boolean)
extern "C"  void XmlTextReader_set_CloseInput_m4163528207 (XmlTextReader_t3455035481 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C"  void XmlTextReader_set_Conformance_m4265718394 (XmlTextReader_t4233384356 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C"  void XmlTextReader_set_Conformance_m1985097490 (XmlTextReader_t3455035481 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::get_Resolver()
extern "C"  XmlResolver_t626023767 * XmlTextReader_get_Resolver_m2264491068 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::get_ConformanceLevel()
extern "C"  int32_t XmlReaderSettings_get_ConformanceLevel_m2244916470 (XmlReaderSettings_t2186285234 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C"  XmlResolver_t626023767 * XmlTextReader_get_Resolver_m258955197 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XmlTextReader_set_XmlResolver_m1445354776 (XmlTextReader_t4233384356 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::get_EntityHandling()
extern "C"  int32_t XmlTextReader_get_EntityHandling_m1829511007 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C"  int32_t XmlTextReader_get_LineNumber_m577852368 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber()
extern "C"  int32_t XmlTextReader_get_LineNumber_m718766076 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C"  int32_t XmlTextReader_get_LinePosition_m724764794 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition()
extern "C"  int32_t XmlTextReader_get_LinePosition_m3838196996 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Namespaces()
extern "C"  bool XmlTextReader_get_Namespaces_m56588872 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Normalization()
extern "C"  bool XmlTextReader_get_Normalization_m1218533950 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C"  void XmlTextReader_set_Normalization_m1302478956 (XmlTextReader_t4233384356 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Normalization(System.Boolean)
extern "C"  void XmlTextReader_set_Normalization_m906147869 (XmlTextReader_t3455035481 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::get_WhitespaceHandling()
extern "C"  int32_t XmlTextReader_get_WhitespaceHandling_m3804345083 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C"  void XmlTextReader_set_WhitespaceHandling_m109745019 (XmlTextReader_t4233384356 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C"  void XmlTextReader_set_WhitespaceHandling_m239529318 (XmlTextReader_t3455035481 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XmlTextReader_set_XmlResolver_m151906742 (XmlTextReader_t3455035481 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C"  void XmlTextReader_SkipTextDeclaration_m1501695552 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SkipTextDeclaration()
extern "C"  void XmlTextReader_SkipTextDeclaration_m484952237 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C"  void XmlTextReader_CloseEntity_m366351831 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C"  int32_t XmlTextReader_get_EntityHandling_m2980571846 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C"  DTDObjectModel_t1729680289 * XmlParserContext_get_Dtd_m2960147355 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
extern "C"  XmlTextReader_t3455035481 * DTDObjectModel_GenerateEntityContentReader_m3148241306 (DTDObjectModel_t1729680289 * __this, String_t* ___entityName0, XmlParserContext_t2544895291 * ___context1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.String,System.String)
extern "C"  void XmlException__ctor_m212897041 (XmlException_t1761730631 * __this, RuntimeObject* ___li0, String_t* ___sourceUri1, String_t* ___message2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.String>::.ctor()
#define Stack_1__ctor_m936691270(__this, method) ((  void (*) (Stack_1_t2690840144 *, const RuntimeMethod*))Stack_1__ctor_m3164958980_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.String>::Contains(!0)
#define Stack_1_Contains_m1213713845(__this, p0, method) ((  bool (*) (Stack_1_t2690840144 *, String_t*, const RuntimeMethod*))Stack_1_Contains_m1578348417_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Stack`1<System.String>::Push(!0)
#define Stack_1_Push_m570958490(__this, p0, method) ((  void (*) (Stack_1_t2690840144 *, String_t*, const RuntimeMethod*))Stack_1_Push_m1669856732_gshared)(__this, p0, method)
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C"  void XmlTextReader__ctor_m918862940 (XmlTextReader_t4233384356 * __this, XmlTextReader_t3455035481 * ___entityContainer0, bool ___insideAttribute1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C"  void XmlTextReader_CopyProperties_m12151598 (XmlTextReader_t4233384356 * __this, XmlTextReader_t4233384356 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Stack`1<System.String>::Pop()
#define Stack_1_Pop_m2585401118(__this, method) ((  String_t* (*) (Stack_1_t2690840144 *, const RuntimeMethod*))Stack_1_Pop_m756553478_gshared)(__this, method)
// System.Void System.Xml.XmlReader::Skip()
extern "C"  void XmlReader_Skip_m2445993341 (XmlReader_t3121518892 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader Mono.Xml2.XmlTextReader::GetRemainder()
extern "C"  TextReader_t283511965 * XmlTextReader_GetRemainder_m3291199686 (XmlTextReader_t3455035481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::.ctor()
extern "C"  void XmlWriter__ctor_m2782267819 (XmlWriter_t127905479 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C"  void XmlTextWriter_Initialize_m3279439671 (XmlTextWriter_t2114213153 * __this, TextWriter_t3478189236 * ___writer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
extern "C"  void UTF8Encoding__ctor_m1391509536 (UTF8Encoding_t3956466879 * __this, bool p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NameTable::.ctor()
extern "C"  void NameTable__ctor_m874080766 (NameTable_t3178203267 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlNamespaceManager__ctor_m3238790559 (XmlNamespaceManager_t418790500 * __this, XmlNameTable_t71772148 * ___nameTable0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C"  Exception_t * XmlTextWriter_ArgumentError_m3627124320 (XmlTextWriter_t2114213153 * __this, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefixExclusive_m4193555037 (XmlNamespaceManager_t418790500 * __this, String_t* ___uri0, bool ___atomizedName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C"  Exception_t * XmlTextWriter_StateError_m571999665 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C"  Exception_t * XmlTextWriter_InvalidOperation_m988191293 (XmlTextWriter_t2114213153 * __this, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsName(System.String)
extern "C"  bool XmlChar_IsName_m846619221 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C"  void XmlTextWriter_OutputAutoStartDocument_m96032915 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C"  void XmlTextWriter_WriteIndent_m534435357 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupNamespace_m2828740952 (XmlNamespaceManager_t418790500 * __this, String_t* ___prefix0, bool ___atomizedNames1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C"  void XmlTextWriter_CloseStartElement_m3029087518 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C"  void Array_Copy_m1988217701 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter/XmlNodeInfo::.ctor()
extern "C"  void XmlNodeInfo__ctor_m1232608472 (XmlNodeInfo_t4030693883 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C"  void XmlTextWriter_CloseStartElementCore_m1099456942 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedString_m3514294598 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, bool ___isAttribute1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C"  void XmlTextWriter_WriteEndElementCore_m4151593863 (XmlTextWriter_t2114213153 * __this, bool ___full0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C"  void XmlTextWriter_WriteIndentEndElement_m1797366262 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C"  String_t* XmlTextWriter_DetermineAttributePrefix_m2990155447 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C"  void XmlTextWriter_WriteIndentAttribute_m3288075110 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C"  void StringBuilder_set_Length_m1410065908 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C"  String_t* XmlTextWriter_MockupPrefix_m1608841972 (XmlTextWriter_t2114213153 * __this, String_t* ___ns0, bool ___skipLookup1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter/StringUtil::Format(System.String,System.Object[])
extern "C"  String_t* StringUtil_Format_m4156193709 (RuntimeObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m2392909825(__this, p0, method) ((  void (*) (Dictionary_2_t2736202052 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m182537451_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
#define Dictionary_2_Add_m282647386(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2736202052 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m1279427033_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1013208020(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2736202052 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m3959998165_gshared)(__this, p0, p1, method)
// System.Int32 System.Xml.XmlTextWriter/StringUtil::IndexOf(System.String,System.String)
extern "C"  int32_t StringUtil_IndexOf_m1748403443 (RuntimeObject * __this /* static, unused */, String_t* ___src0, String_t* ___target1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateTopLevel_m3589898271 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, bool ___allowAttribute1, bool ___dontCheckXmlDecl2, bool ___isCharacter3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfNonWhitespace(System.String)
extern "C"  int32_t XmlChar_IndexOfNonWhitespace_m2684163220 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateContent_m1491671115 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, bool ___allowAttribute1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C"  void XmlTextWriter_WriteCheckedString_m2937191976 (XmlTextWriter_t2114213153 * __this, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C"  bool XmlTextWriter_WriteIndentCore_m729468996 (XmlTextWriter_t2114213153 * __this, int32_t ___nestFix0, bool ___attribute1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_WriteStartDocumentCore_m3985718073 (XmlTextWriter_t2114213153 * __this, bool ___outputStd0, bool ___standalone1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C"  void XmlTextWriter_CheckMixedContentState_m804091766 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C"  int32_t String_IndexOfAny_m4159774896 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C"  void XmlTextWriter_WriteCheckedBuffer_m275259173 (XmlTextWriter_t2114213153 * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___idx1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedBuffer_m903990798 (XmlTextWriter_t2114213153 * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___index1, int32_t ___length2, bool ___isAttribute3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.String,System.Boolean)
extern "C"  int32_t XmlChar_IndexOfInvalid_m478649474 (RuntimeObject * __this /* static, unused */, String_t* ___s0, bool ___allowSurrogate1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Int32_ToString_m2507389746 (int32_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t XmlChar_IndexOfInvalid_m211553919 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___s0, int32_t ___start1, int32_t ___length2, bool ___allowSurrogate3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C"  String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlResolver::.ctor()
extern "C"  void XmlResolver__ctor_m2276492248 (XmlResolver_t626023767 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C"  bool Uri_get_IsAbsoluteUri_m3666899587 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m2109479391 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsolutePath()
extern "C"  String_t* Uri_get_AbsolutePath_m590948575 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_LocalPath()
extern "C"  String_t* Uri_get_LocalPath_m2837234216 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C"  String_t* XmlUrlResolver_UnescapeRelativeUriBody_m2976662118 (XmlUrlResolver_t817895037 * __this, String_t* ___src0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  void FileStream__ctor_m2889718780 (FileStream_t4292183065 * __this, String_t* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C"  WebRequest_t1939381076 * WebRequest_Create_m2603246108 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t100236324 * XmlResolver_ResolveUri_m3051172150 (XmlResolver_t626023767 * __this, Uri_t100236324 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C"  void XmlUrlResolver__ctor_m1338399436 (XmlUrlResolver_t817895037 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.DTDValidatingReader::get_ParserContext()
extern "C"  XmlParserContext_t2544895291 * DTDValidatingReader_get_ParserContext_m883207457 (DTDValidatingReader_t3946379043 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void DTDValidatingReader_set_EntityHandling_m3201559656 (DTDValidatingReader_t3946379043 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C"  bool XmlValidatingReader_get_Namespaces_m3935643757 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Namespaces()
extern "C"  bool XmlTextReader_get_Namespaces_m3871412690 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlSchemaCollection__ctor_m3228921192 (XmlSchemaCollection_t3610399789 * __this, XmlNameTable_t71772148 * ___nameTable0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C"  void IndexOutOfRangeException__ctor_m3408750441 (IndexOutOfRangeException_t1578797820 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
extern "C"  int32_t XmlValidatingReader_get_ValidationType_m768883523 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlValidatingReader)
extern "C"  void DTDValidatingReader__ctor_m3400285377 (DTDValidatingReader_t3946379043 * __this, XmlReader_t3121518892 * ___reader0, XmlValidatingReader_t1719295192 * ___validatingReader1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
extern "C"  XmlResolver_t626023767 * XmlValidatingReader_get_Resolver_m1269208747 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void DTDValidatingReader_set_XmlResolver_m3887196702 (DTDValidatingReader_t3946379043 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::.ctor(System.Xml.XmlReader)
extern "C"  void XsdValidatingReader__ctor_m1875465247 (XsdValidatingReader_t3961132625 * __this, XmlReader_t3121518892 * ___reader0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ValidationEventHandler__ctor_m2945978529 (ValidationEventHandler_t791314227 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C"  void XsdValidatingReader_set_ValidationType_m2062431012 (XsdValidatingReader_t3961132625 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
extern "C"  XmlSchemaCollection_t3610399789 * XmlValidatingReader_get_Schemas_m1542506967 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C"  XmlSchemaSet_t266093086 * XmlSchemaCollection_get_SchemaSet_m2053221801 (XmlSchemaCollection_t3610399789 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_Schemas(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XsdValidatingReader_set_Schemas_m1687221862 (XsdValidatingReader_t3961132625 * __this, XmlSchemaSet_t266093086 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XsdValidatingReader_set_XmlResolver_m2067506225 (XsdValidatingReader_t3961132625 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::Invoke(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void ValidationEventHandler_Invoke_m3984227947 (ValidationEventHandler_t791314227 * __this, RuntimeObject * ___sender0, ValidationEventArgs_t2784773869 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::get_Severity()
extern "C"  int32_t ValidationEventArgs_get_Severity_m1798521934 (ValidationEventArgs_t2784773869 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::get_Exception()
extern "C"  XmlSchemaException_t3511258692 * ValidationEventArgs_get_Exception_m2119547120 (ValidationEventArgs_t2784773869 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlWhitespace__ctor_m949230574 (XmlWhitespace_t131741354 * __this, String_t* ___strData0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor()
extern "C"  void ArgumentException__ctor_m3698743796 (ArgumentException_t132251570 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m3614493714 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlNodeListChildren/Enumerator::.ctor(System.Xml.IHasXmlChildNode)
extern "C"  void Enumerator__ctor_m618683170 (Enumerator_t97922292 * __this, RuntimeObject* ___parent0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_currentChild_1((XmlLinkedNode_t1437094927 *)NULL);
		RuntimeObject* L_0 = ___parent0;
		__this->set_parent_0(L_0);
		__this->set_passedLastNode_2((bool)0);
		return;
	}
}
// System.Object System.Xml.XmlNodeListChildren/Enumerator::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m1556743441 (Enumerator_t97922292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_get_Current_m1556743441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlLinkedNode_t1437094927 * L_0 = __this->get_currentChild_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_parent_0();
		XmlLinkedNode_t1437094927 * L_2 = InterfaceFuncInvoker0< XmlLinkedNode_t1437094927 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2708887342_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		bool L_3 = __this->get_passedLastNode_2();
		if (!L_3)
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		InvalidOperationException_t56020091 * L_4 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Enumerator_get_Current_m1556743441_RuntimeMethod_var);
	}

IL_002c:
	{
		XmlLinkedNode_t1437094927 * L_5 = __this->get_currentChild_1();
		return L_5;
	}
}
// System.Boolean System.Xml.XmlNodeListChildren/Enumerator::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3130128147 (Enumerator_t97922292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_MoveNext_m3130128147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = __this->get_parent_0();
		XmlLinkedNode_t1437094927 * L_1 = InterfaceFuncInvoker0< XmlLinkedNode_t1437094927 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2708887342_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0079;
	}

IL_0019:
	{
		XmlLinkedNode_t1437094927 * L_2 = __this->get_currentChild_1();
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_parent_0();
		XmlLinkedNode_t1437094927 * L_4 = InterfaceFuncInvoker0< XmlLinkedNode_t1437094927 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2708887342_il2cpp_TypeInfo_var, L_3);
		XmlLinkedNode_t1437094927 * L_5 = XmlLinkedNode_get_NextLinkedSibling_m4215230027(L_4, /*hidden argument*/NULL);
		__this->set_currentChild_1(L_5);
		goto IL_0079;
	}

IL_003f:
	{
		XmlLinkedNode_t1437094927 * L_6 = __this->get_currentChild_1();
		RuntimeObject* L_7 = __this->get_parent_0();
		XmlLinkedNode_t1437094927 * L_8 = InterfaceFuncInvoker0< XmlLinkedNode_t1437094927 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2708887342_il2cpp_TypeInfo_var, L_7);
		bool L_9 = Object_ReferenceEquals_m610702577(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		V_0 = (bool)0;
		__this->set_passedLastNode_2((bool)1);
		goto IL_0079;
	}

IL_0068:
	{
		XmlLinkedNode_t1437094927 * L_10 = __this->get_currentChild_1();
		XmlLinkedNode_t1437094927 * L_11 = XmlLinkedNode_get_NextLinkedSibling_m4215230027(L_10, /*hidden argument*/NULL);
		__this->set_currentChild_1(L_11);
	}

IL_0079:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void System.Xml.XmlNodeListChildren/Enumerator::Reset()
extern "C"  void Enumerator_Reset_m1661354496 (Enumerator_t97922292 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentChild_1((XmlLinkedNode_t1437094927 *)NULL);
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
// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlNotation__ctor_m1743872963 (XmlNotation_t1476580686 * __this, String_t* ___localName0, String_t* ___prefix1, String_t* ___publicId2, String_t* ___systemId3, XmlDocument_t2837193595 * ___doc4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlNotation__ctor_m1743872963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t2837193595 * L_0 = ___doc4;
		IL2CPP_RUNTIME_CLASS_INIT(XmlNode_t3767805227_il2cpp_TypeInfo_var);
		XmlNode__ctor_m2694942411(__this, L_0, /*hidden argument*/NULL);
		XmlDocument_t2837193595 * L_1 = ___doc4;
		XmlNameTable_t71772148 * L_2 = XmlDocument_get_NameTable_m3351667098(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___localName0;
		String_t* L_4 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_2, L_3);
		__this->set_localName_5(L_4);
		XmlDocument_t2837193595 * L_5 = ___doc4;
		XmlNameTable_t71772148 * L_6 = XmlDocument_get_NameTable_m3351667098(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___prefix1;
		String_t* L_8 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_6, L_7);
		__this->set_prefix_8(L_8);
		String_t* L_9 = ___publicId2;
		__this->set_publicId_6(L_9);
		String_t* L_10 = ___systemId3;
		__this->set_systemId_7(L_10);
		return;
	}
}
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
extern "C"  bool XmlNotation_get_IsReadOnly_m2678663317 (XmlNotation_t1476580686 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.String System.Xml.XmlNotation::get_LocalName()
extern "C"  String_t* XmlNotation_get_LocalName_m3137172851 (XmlNotation_t1476580686 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_localName_5();
		return L_0;
	}
}
// System.String System.Xml.XmlNotation::get_Name()
extern "C"  String_t* XmlNotation_get_Name_m3496767814 (XmlNotation_t1476580686 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlNotation_get_Name_m3496767814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0 = __this->get_prefix_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_2 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_3 = __this->get_prefix_8();
		String_t* L_4 = __this->get_localName_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, L_3, _stringLiteral3452614550, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0036;
	}

IL_0030:
	{
		String_t* L_6 = __this->get_localName_5();
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
extern "C"  int32_t XmlNotation_get_NodeType_m3459874412 (XmlNotation_t1476580686 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)12));
	}
}
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
extern "C"  XmlNode_t3767805227 * XmlNotation_CloneNode_m141780236 (XmlNotation_t1476580686 * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlNotation_CloneNode_m141780236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t56020091 * L_0 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_0, _stringLiteral3117374684, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, XmlNotation_CloneNode_m141780236_RuntimeMethod_var);
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
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
extern "C"  void XmlParserContext__ctor_m52393894 (XmlParserContext_t2544895291 * __this, XmlNameTable_t71772148 * ___nt0, XmlNamespaceManager_t418790500 * ___nsMgr1, String_t* ___xmlLang2, int32_t ___xmlSpace3, const RuntimeMethod* method)
{
	{
		XmlNameTable_t71772148 * L_0 = ___nt0;
		XmlNamespaceManager_t418790500 * L_1 = ___nsMgr1;
		String_t* L_2 = ___xmlLang2;
		int32_t L_3 = ___xmlSpace3;
		XmlParserContext__ctor_m1245162613(__this, L_0, L_1, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, L_2, L_3, (Encoding_t1523322056 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m1245162613 (XmlParserContext_t2544895291 * __this, XmlNameTable_t71772148 * ___nt0, XmlNamespaceManager_t418790500 * ___nsMgr1, String_t* ___docTypeName2, String_t* ___pubId3, String_t* ___sysId4, String_t* ___internalSubset5, String_t* ___baseURI6, String_t* ___xmlLang7, int32_t ___xmlSpace8, Encoding_t1523322056 * ___enc9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserContext__ctor_m1245162613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNamespaceManager_t418790500 * G_B3_0 = NULL;
	XmlNameTable_t71772148 * G_B3_1 = NULL;
	XmlParserContext_t2544895291 * G_B3_2 = NULL;
	XmlNamespaceManager_t418790500 * G_B1_0 = NULL;
	XmlNameTable_t71772148 * G_B1_1 = NULL;
	XmlParserContext_t2544895291 * G_B1_2 = NULL;
	XmlNamespaceManager_t418790500 * G_B2_0 = NULL;
	XmlNameTable_t71772148 * G_B2_1 = NULL;
	XmlParserContext_t2544895291 * G_B2_2 = NULL;
	DTDObjectModel_t1729680289 * G_B4_0 = NULL;
	XmlNamespaceManager_t418790500 * G_B4_1 = NULL;
	XmlNameTable_t71772148 * G_B4_2 = NULL;
	XmlParserContext_t2544895291 * G_B4_3 = NULL;
	{
		XmlNameTable_t71772148 * L_0 = ___nt0;
		XmlNamespaceManager_t418790500 * L_1 = ___nsMgr1;
		String_t* L_2 = ___docTypeName2;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (!L_2)
		{
			G_B3_0 = L_1;
			G_B3_1 = L_0;
			G_B3_2 = __this;
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = ___docTypeName2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_5 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		if (!L_5)
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t283511965_il2cpp_TypeInfo_var);
		TextReader_t283511965 * L_6 = ((TextReader_t283511965_StaticFields*)il2cpp_codegen_static_fields_for(TextReader_t283511965_il2cpp_TypeInfo_var))->get_Null_0();
		XmlNameTable_t71772148 * L_7 = ___nt0;
		XmlTextReader_t3455035481 * L_8 = (XmlTextReader_t3455035481 *)il2cpp_codegen_object_new(XmlTextReader_t3455035481_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m3591085177(L_8, L_6, L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___docTypeName2;
		String_t* L_10 = ___pubId3;
		String_t* L_11 = ___sysId4;
		String_t* L_12 = ___internalSubset5;
		DTDObjectModel_t1729680289 * L_13 = XmlTextReader_GenerateDTDObjectModel_m1291768325(L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		G_B4_0 = L_13;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		goto IL_0036;
	}

IL_0035:
	{
		G_B4_0 = ((DTDObjectModel_t1729680289 *)(NULL));
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
	}

IL_0036:
	{
		String_t* L_14 = ___baseURI6;
		String_t* L_15 = ___xmlLang7;
		int32_t L_16 = ___xmlSpace8;
		Encoding_t1523322056 * L_17 = ___enc9;
		XmlParserContext__ctor_m2145142613(G_B4_3, G_B4_2, G_B4_1, G_B4_0, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m2145142613 (XmlParserContext_t2544895291 * __this, XmlNameTable_t71772148 * ___nt0, XmlNamespaceManager_t418790500 * ___nsMgr1, DTDObjectModel_t1729680289 * ___dtd2, String_t* ___baseURI3, String_t* ___xmlLang4, int32_t ___xmlSpace5, Encoding_t1523322056 * ___enc6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserContext__ctor_m2145142613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlParserContext_t2544895291 * G_B2_0 = NULL;
	XmlParserContext_t2544895291 * G_B1_0 = NULL;
	XmlNameTable_t71772148 * G_B5_0 = NULL;
	XmlParserContext_t2544895291 * G_B5_1 = NULL;
	XmlParserContext_t2544895291 * G_B4_0 = NULL;
	XmlParserContext_t2544895291 * G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_baseURI_0(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_docTypeName_1(L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_internalSubset_3(L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_publicID_6(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_systemID_7(L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_xmlLang_8(L_5);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XmlNamespaceManager_t418790500 * L_6 = ___nsMgr1;
		__this->set_namespaceManager_4(L_6);
		XmlNameTable_t71772148 * L_7 = ___nt0;
		G_B1_0 = __this;
		if (!L_7)
		{
			G_B2_0 = __this;
			goto IL_005c;
		}
	}
	{
		XmlNameTable_t71772148 * L_8 = ___nt0;
		G_B5_0 = L_8;
		G_B5_1 = G_B1_0;
		goto IL_006e;
	}

IL_005c:
	{
		XmlNamespaceManager_t418790500 * L_9 = ___nsMgr1;
		G_B3_0 = G_B2_0;
		if (!L_9)
		{
			G_B4_0 = G_B2_0;
			goto IL_006d;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_10 = ___nsMgr1;
		XmlNameTable_t71772148 * L_11 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(7 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_10);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = ((XmlNameTable_t71772148 *)(NULL));
		G_B5_1 = G_B4_0;
	}

IL_006e:
	{
		G_B5_1->set_nameTable_5(G_B5_0);
		DTDObjectModel_t1729680289 * L_12 = ___dtd2;
		if (!L_12)
		{
			goto IL_00b0;
		}
	}
	{
		DTDObjectModel_t1729680289 * L_13 = ___dtd2;
		String_t* L_14 = DTDObjectModel_get_Name_m4149993094(L_13, /*hidden argument*/NULL);
		XmlParserContext_set_DocTypeName_m1738723375(__this, L_14, /*hidden argument*/NULL);
		DTDObjectModel_t1729680289 * L_15 = ___dtd2;
		String_t* L_16 = DTDObjectModel_get_PublicId_m664009037(L_15, /*hidden argument*/NULL);
		XmlParserContext_set_PublicId_m3531550524(__this, L_16, /*hidden argument*/NULL);
		DTDObjectModel_t1729680289 * L_17 = ___dtd2;
		String_t* L_18 = DTDObjectModel_get_SystemId_m2725442049(L_17, /*hidden argument*/NULL);
		XmlParserContext_set_SystemId_m2348109559(__this, L_18, /*hidden argument*/NULL);
		DTDObjectModel_t1729680289 * L_19 = ___dtd2;
		String_t* L_20 = DTDObjectModel_get_InternalSubset_m3920583053(L_19, /*hidden argument*/NULL);
		XmlParserContext_set_InternalSubset_m2419608887(__this, L_20, /*hidden argument*/NULL);
		DTDObjectModel_t1729680289 * L_21 = ___dtd2;
		__this->set_dtd_12(L_21);
	}

IL_00b0:
	{
		Encoding_t1523322056 * L_22 = ___enc6;
		__this->set_encoding_2(L_22);
		String_t* L_23 = ___baseURI3;
		XmlParserContext_set_BaseURI_m3915640945(__this, L_23, /*hidden argument*/NULL);
		String_t* L_24 = ___xmlLang4;
		XmlParserContext_set_XmlLang_m1868304449(__this, L_24, /*hidden argument*/NULL);
		int32_t L_25 = ___xmlSpace5;
		__this->set_xmlSpace_9(L_25);
		ArrayList_t2718874744 * L_26 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_26, /*hidden argument*/NULL);
		__this->set_contextItems_10(L_26);
		return;
	}
}
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C"  String_t* XmlParserContext_get_BaseURI_m3403405423 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_baseURI_0();
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern "C"  void XmlParserContext_set_BaseURI_m3915640945 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserContext_set_BaseURI_m3915640945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlParserContext_t2544895291 * G_B2_0 = NULL;
	XmlParserContext_t2544895291 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XmlParserContext_t2544895291 * G_B3_1 = NULL;
	{
		String_t* L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		G_B3_1->set_baseURI_0(G_B3_0);
		return;
	}
}
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern "C"  void XmlParserContext_set_DocTypeName_m1738723375 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserContext_set_DocTypeName_m1738723375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlParserContext_t2544895291 * G_B2_0 = NULL;
	XmlParserContext_t2544895291 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XmlParserContext_t2544895291 * G_B3_1 = NULL;
	{
		String_t* L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		G_B3_1->set_docTypeName_1(G_B3_0);
		return;
	}
}
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C"  DTDObjectModel_t1729680289 * XmlParserContext_get_Dtd_m2960147355 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method)
{
	{
		DTDObjectModel_t1729680289 * L_0 = __this->get_dtd_12();
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
extern "C"  void XmlParserContext_set_Dtd_m1723887828 (XmlParserContext_t2544895291 * __this, DTDObjectModel_t1729680289 * ___value0, const RuntimeMethod* method)
{
	{
		DTDObjectModel_t1729680289 * L_0 = ___value0;
		__this->set_dtd_12(L_0);
		return;
	}
}
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
extern "C"  void XmlParserContext_set_Encoding_m532670954 (XmlParserContext_t2544895291 * __this, Encoding_t1523322056 * ___value0, const RuntimeMethod* method)
{
	{
		Encoding_t1523322056 * L_0 = ___value0;
		__this->set_encoding_2(L_0);
		return;
	}
}
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C"  String_t* XmlParserContext_get_InternalSubset_m850815881 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method)
{
	String_t* G_B5_0 = NULL;
	{
		String_t* L_0 = __this->get_internalSubset_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = __this->get_internalSubset_3();
		G_B5_0 = L_1;
		goto IL_0032;
	}

IL_0016:
	{
		DTDObjectModel_t1729680289 * L_2 = __this->get_dtd_12();
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		DTDObjectModel_t1729680289 * L_3 = __this->get_dtd_12();
		String_t* L_4 = DTDObjectModel_get_InternalSubset_m3920583053(L_3, /*hidden argument*/NULL);
		G_B5_0 = L_4;
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = ((String_t*)(NULL));
	}

IL_0032:
	{
		return G_B5_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern "C"  void XmlParserContext_set_InternalSubset_m2419608887 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserContext_set_InternalSubset_m2419608887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlParserContext_t2544895291 * G_B2_0 = NULL;
	XmlParserContext_t2544895291 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XmlParserContext_t2544895291 * G_B3_1 = NULL;
	{
		String_t* L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		G_B3_1->set_internalSubset_3(G_B3_0);
		return;
	}
}
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
extern "C"  XmlNamespaceManager_t418790500 * XmlParserContext_get_NamespaceManager_m1180655003 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method)
{
	{
		XmlNamespaceManager_t418790500 * L_0 = __this->get_namespaceManager_4();
		return L_0;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
extern "C"  XmlNameTable_t71772148 * XmlParserContext_get_NameTable_m157015535 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method)
{
	{
		XmlNameTable_t71772148 * L_0 = __this->get_nameTable_5();
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern "C"  void XmlParserContext_set_PublicId_m3531550524 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserContext_set_PublicId_m3531550524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlParserContext_t2544895291 * G_B2_0 = NULL;
	XmlParserContext_t2544895291 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XmlParserContext_t2544895291 * G_B3_1 = NULL;
	{
		String_t* L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		G_B3_1->set_publicID_6(G_B3_0);
		return;
	}
}
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern "C"  void XmlParserContext_set_SystemId_m2348109559 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserContext_set_SystemId_m2348109559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlParserContext_t2544895291 * G_B2_0 = NULL;
	XmlParserContext_t2544895291 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XmlParserContext_t2544895291 * G_B3_1 = NULL;
	{
		String_t* L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		G_B3_1->set_systemID_7(G_B3_0);
		return;
	}
}
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C"  String_t* XmlParserContext_get_XmlLang_m3854899066 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_xmlLang_8();
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern "C"  void XmlParserContext_set_XmlLang_m1868304449 (XmlParserContext_t2544895291 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserContext_set_XmlLang_m1868304449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlParserContext_t2544895291 * G_B2_0 = NULL;
	XmlParserContext_t2544895291 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XmlParserContext_t2544895291 * G_B3_1 = NULL;
	{
		String_t* L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		G_B3_1->set_xmlLang_8(G_B3_0);
		return;
	}
}
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C"  int32_t XmlParserContext_get_XmlSpace_m672663556 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_xmlSpace_9();
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
extern "C"  void XmlParserContext_set_XmlSpace_m3309771565 (XmlParserContext_t2544895291 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_xmlSpace_9(L_0);
		return;
	}
}
// System.Void System.Xml.XmlParserContext::PushScope()
extern "C"  void XmlParserContext_PushScope_m4047975352 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserContext_PushScope_m4047975352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ContextItem_t3112052795 * V_0 = NULL;
	{
		V_0 = (ContextItem_t3112052795 *)NULL;
		ArrayList_t2718874744 * L_0 = __this->get_contextItems_10();
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		int32_t L_2 = __this->get_contextItemCount_11();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0030;
		}
	}
	{
		ContextItem_t3112052795 * L_3 = (ContextItem_t3112052795 *)il2cpp_codegen_object_new(ContextItem_t3112052795_il2cpp_TypeInfo_var);
		ContextItem__ctor_m4162607161(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		ArrayList_t2718874744 * L_4 = __this->get_contextItems_10();
		ContextItem_t3112052795 * L_5 = V_0;
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_5);
		goto IL_0047;
	}

IL_0030:
	{
		ArrayList_t2718874744 * L_6 = __this->get_contextItems_10();
		int32_t L_7 = __this->get_contextItemCount_11();
		RuntimeObject * L_8 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_6, L_7);
		V_0 = ((ContextItem_t3112052795 *)CastclassClass((RuntimeObject*)L_8, ContextItem_t3112052795_il2cpp_TypeInfo_var));
	}

IL_0047:
	{
		ContextItem_t3112052795 * L_9 = V_0;
		String_t* L_10 = XmlParserContext_get_BaseURI_m3403405423(__this, /*hidden argument*/NULL);
		L_9->set_BaseURI_0(L_10);
		ContextItem_t3112052795 * L_11 = V_0;
		String_t* L_12 = XmlParserContext_get_XmlLang_m3854899066(__this, /*hidden argument*/NULL);
		L_11->set_XmlLang_1(L_12);
		ContextItem_t3112052795 * L_13 = V_0;
		int32_t L_14 = XmlParserContext_get_XmlSpace_m672663556(__this, /*hidden argument*/NULL);
		L_13->set_XmlSpace_2(L_14);
		int32_t L_15 = __this->get_contextItemCount_11();
		__this->set_contextItemCount_11(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
		return;
	}
}
// System.Void System.Xml.XmlParserContext::PopScope()
extern "C"  void XmlParserContext_PopScope_m4042017474 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserContext_PopScope_m4042017474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ContextItem_t3112052795 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_contextItemCount_11();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlException_t1761730631 * L_1 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_1, _stringLiteral1518790419, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlParserContext_PopScope_m4042017474_RuntimeMethod_var);
	}

IL_0016:
	{
		int32_t L_2 = __this->get_contextItemCount_11();
		__this->set_contextItemCount_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)));
		ArrayList_t2718874744 * L_3 = __this->get_contextItems_10();
		int32_t L_4 = __this->get_contextItemCount_11();
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_0 = ((ContextItem_t3112052795 *)CastclassClass((RuntimeObject*)L_5, ContextItem_t3112052795_il2cpp_TypeInfo_var));
		ContextItem_t3112052795 * L_6 = V_0;
		String_t* L_7 = L_6->get_BaseURI_0();
		__this->set_baseURI_0(L_7);
		ContextItem_t3112052795 * L_8 = V_0;
		String_t* L_9 = L_8->get_XmlLang_1();
		__this->set_xmlLang_8(L_9);
		ContextItem_t3112052795 * L_10 = V_0;
		int32_t L_11 = L_10->get_XmlSpace_2();
		__this->set_xmlSpace_9(L_11);
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
// System.Void System.Xml.XmlParserContext/ContextItem::.ctor()
extern "C"  void ContextItem__ctor_m4162607161 (ContextItem_t3112052795 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String)
extern "C"  void XmlParserInput__ctor_m2345243315 (XmlParserInput_t2182411204 * __this, TextReader_t283511965 * ___reader0, String_t* ___baseURI1, const RuntimeMethod* method)
{
	{
		TextReader_t283511965 * L_0 = ___reader0;
		String_t* L_1 = ___baseURI1;
		XmlParserInput__ctor_m323061724(__this, L_0, L_1, 1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String,System.Int32,System.Int32)
extern "C"  void XmlParserInput__ctor_m323061724 (XmlParserInput_t2182411204 * __this, TextReader_t283511965 * ___reader0, String_t* ___baseURI1, int32_t ___line2, int32_t ___column3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserInput__ctor_m323061724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_t2329662280 * L_0 = (Stack_t2329662280 *)il2cpp_codegen_object_new(Stack_t2329662280_il2cpp_TypeInfo_var);
		Stack__ctor_m2907601956(L_0, /*hidden argument*/NULL);
		__this->set_sourceStack_0(L_0);
		__this->set_allowTextDecl_4((bool)1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TextReader_t283511965 * L_1 = ___reader0;
		String_t* L_2 = ___baseURI1;
		int32_t L_3 = ___line2;
		int32_t L_4 = ___column3;
		XmlParserInputSource_t3533005609 * L_5 = (XmlParserInputSource_t3533005609 *)il2cpp_codegen_object_new(XmlParserInputSource_t3533005609_il2cpp_TypeInfo_var);
		XmlParserInputSource__ctor_m340894289(L_5, L_1, L_2, (bool)0, L_3, L_4, /*hidden argument*/NULL);
		__this->set_source_1(L_5);
		return;
	}
}
// System.Void System.Xml.XmlParserInput::Close()
extern "C"  void XmlParserInput_Close_m3748074016 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserInput_Close_m3748074016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001a;
	}

IL_0005:
	{
		Stack_t2329662280 * L_0 = __this->get_sourceStack_0();
		RuntimeObject * L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(19 /* System.Object System.Collections.Stack::Pop() */, L_0);
		XmlParserInputSource_Close_m3296961761(((XmlParserInputSource_t3533005609 *)CastclassClass((RuntimeObject*)L_1, XmlParserInputSource_t3533005609_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_001a:
	{
		Stack_t2329662280 * L_2 = __this->get_sourceStack_0();
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Stack::get_Count() */, L_2);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		XmlParserInputSource_t3533005609 * L_4 = __this->get_source_1();
		XmlParserInputSource_Close_m3296961761(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserInput::PushPEBuffer(Mono.Xml.DTDParameterEntityDeclaration)
extern "C"  void XmlParserInput_PushPEBuffer_m2114889766 (XmlParserInput_t2182411204 * __this, DTDParameterEntityDeclaration_t3796253422 * ___pe0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserInput_PushPEBuffer_m2114889766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_t2329662280 * L_0 = __this->get_sourceStack_0();
		XmlParserInputSource_t3533005609 * L_1 = __this->get_source_1();
		VirtActionInvoker1< RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Stack::Push(System.Object) */, L_0, L_1);
		DTDParameterEntityDeclaration_t3796253422 * L_2 = ___pe0;
		String_t* L_3 = DTDEntityBase_get_ReplacementText_m2400228330(L_2, /*hidden argument*/NULL);
		StringReader_t3465604688 * L_4 = (StringReader_t3465604688 *)il2cpp_codegen_object_new(StringReader_t3465604688_il2cpp_TypeInfo_var);
		StringReader__ctor_m126993932(L_4, L_3, /*hidden argument*/NULL);
		DTDParameterEntityDeclaration_t3796253422 * L_5 = ___pe0;
		String_t* L_6 = DTDEntityBase_get_ActualUri_m3317770620(L_5, /*hidden argument*/NULL);
		XmlParserInputSource_t3533005609 * L_7 = (XmlParserInputSource_t3533005609 *)il2cpp_codegen_object_new(XmlParserInputSource_t3533005609_il2cpp_TypeInfo_var);
		XmlParserInputSource__ctor_m340894289(L_7, L_4, L_6, (bool)1, 1, 0, /*hidden argument*/NULL);
		__this->set_source_1(L_7);
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput::ReadSourceChar()
extern "C"  int32_t XmlParserInput_ReadSourceChar_m479227790 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlParserInput_ReadSourceChar_m479227790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlParserInputSource_t3533005609 * L_0 = __this->get_source_1();
		int32_t L_1 = XmlParserInputSource_Read_m188586768(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0033;
	}

IL_0011:
	{
		Stack_t2329662280 * L_2 = __this->get_sourceStack_0();
		RuntimeObject * L_3 = VirtFuncInvoker0< RuntimeObject * >::Invoke(19 /* System.Object System.Collections.Stack::Pop() */, L_2);
		__this->set_source_1(((XmlParserInputSource_t3533005609 *)IsInstClass((RuntimeObject*)L_3, XmlParserInputSource_t3533005609_il2cpp_TypeInfo_var)));
		XmlParserInputSource_t3533005609 * L_4 = __this->get_source_1();
		int32_t L_5 = XmlParserInputSource_Read_m188586768(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0033:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		Stack_t2329662280 * L_7 = __this->get_sourceStack_0();
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Stack::get_Count() */, L_7);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}

IL_004b:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Int32 System.Xml.XmlParserInput::PeekChar()
extern "C"  int32_t XmlParserInput_PeekChar_m2826906097 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_has_peek_2();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->get_peek_char_3();
		return L_1;
	}

IL_0012:
	{
		int32_t L_2 = XmlParserInput_ReadSourceChar_m479227790(__this, /*hidden argument*/NULL);
		__this->set_peek_char_3(L_2);
		int32_t L_3 = __this->get_peek_char_3();
		if ((((int32_t)L_3) < ((int32_t)((int32_t)55296))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_4 = __this->get_peek_char_3();
		if ((((int32_t)L_4) > ((int32_t)((int32_t)56319))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_5 = __this->get_peek_char_3();
		__this->set_peek_char_3(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65536), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)55296)))<<(int32_t)((int32_t)10))))));
		int32_t L_6 = XmlParserInput_ReadSourceChar_m479227790(__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)56320))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57343))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_9 = __this->get_peek_char_3();
		int32_t L_10 = V_0;
		__this->set_peek_char_3(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)56320))))));
	}

IL_008a:
	{
		__this->set_has_peek_2((bool)1);
		int32_t L_11 = __this->get_peek_char_3();
		return L_11;
	}
}
// System.Int32 System.Xml.XmlParserInput::ReadChar()
extern "C"  int32_t XmlParserInput_ReadChar_m3809194942 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = XmlParserInput_PeekChar_m2826906097(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		__this->set_has_peek_2((bool)0);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String System.Xml.XmlParserInput::get_BaseURI()
extern "C"  String_t* XmlParserInput_get_BaseURI_m1478609455 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method)
{
	{
		XmlParserInputSource_t3533005609 * L_0 = __this->get_source_1();
		String_t* L_1 = L_0->get_BaseURI_0();
		return L_1;
	}
}
// System.Boolean System.Xml.XmlParserInput::get_HasPEBuffer()
extern "C"  bool XmlParserInput_get_HasPEBuffer_m4279701287 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method)
{
	{
		Stack_t2329662280 * L_0 = __this->get_sourceStack_0();
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Stack::get_Count() */, L_0);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Xml.XmlParserInput::get_LineNumber()
extern "C"  int32_t XmlParserInput_get_LineNumber_m2843176613 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method)
{
	{
		XmlParserInputSource_t3533005609 * L_0 = __this->get_source_1();
		int32_t L_1 = XmlParserInputSource_get_LineNumber_m2358449795(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlParserInput::get_LinePosition()
extern "C"  int32_t XmlParserInput_get_LinePosition_m3993856854 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method)
{
	{
		XmlParserInputSource_t3533005609 * L_0 = __this->get_source_1();
		int32_t L_1 = XmlParserInputSource_get_LinePosition_m2775212307(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlParserInput::get_AllowTextDecl()
extern "C"  bool XmlParserInput_get_AllowTextDecl_m3233152787 (XmlParserInput_t2182411204 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_allowTextDecl_4();
		return L_0;
	}
}
// System.Void System.Xml.XmlParserInput::set_AllowTextDecl(System.Boolean)
extern "C"  void XmlParserInput_set_AllowTextDecl_m1259857254 (XmlParserInput_t2182411204 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_allowTextDecl_4(L_0);
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
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C"  void XmlParserInputSource__ctor_m340894289 (XmlParserInputSource_t3533005609 * __this, TextReader_t283511965 * ___reader0, String_t* ___baseUri1, bool ___pe2, int32_t ___line3, int32_t ___column4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___baseUri1;
		__this->set_BaseURI_0(L_0);
		TextReader_t283511965 * L_1 = ___reader0;
		__this->set_reader_1(L_1);
		bool L_2 = ___pe2;
		__this->set_isPE_3(L_2);
		int32_t L_3 = ___line3;
		__this->set_line_4(L_3);
		int32_t L_4 = ___column4;
		__this->set_column_5(L_4);
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C"  int32_t XmlParserInputSource_get_LineNumber_m2358449795 (XmlParserInputSource_t3533005609 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_line_4();
		return L_0;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C"  int32_t XmlParserInputSource_get_LinePosition_m2775212307 (XmlParserInputSource_t3533005609 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_column_5();
		return L_0;
	}
}
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C"  void XmlParserInputSource_Close_m3296961761 (XmlParserInputSource_t3533005609 * __this, const RuntimeMethod* method)
{
	{
		TextReader_t283511965 * L_0 = __this->get_reader_1();
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_0);
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C"  int32_t XmlParserInputSource_Read_m188586768 (XmlParserInputSource_t3533005609 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}

IL_000e:
	{
		bool L_1 = __this->get_isPE_3();
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = __this->get_state_2();
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		__this->set_state_2(1);
		return ((int32_t)32);
	}

IL_002e:
	{
		TextReader_t283511965 * L_3 = __this->get_reader_1();
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = __this->get_line_4();
		__this->set_line_4(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		__this->set_column_5(1);
		goto IL_0071;
	}

IL_005c:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_8 = __this->get_column_5();
		__this->set_column_5(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
	}

IL_0071:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_10 = __this->get_state_2();
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_008e;
		}
	}
	{
		__this->set_state_2(2);
		return ((int32_t)32);
	}

IL_008e:
	{
		int32_t L_11 = V_0;
		return L_11;
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
// System.Void System.Xml.XmlProcessingInstruction::.ctor(System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlProcessingInstruction__ctor_m3762799159 (XmlProcessingInstruction_t425688976 * __this, String_t* ___target0, String_t* ___data1, XmlDocument_t2837193595 * ___doc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlProcessingInstruction__ctor_m3762799159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t2837193595 * L_0 = ___doc2;
		XmlLinkedNode__ctor_m1742070414(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		XmlConvert_VerifyName_m2131148908(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___data1;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___data1 = L_3;
	}

IL_001b:
	{
		String_t* L_4 = ___target0;
		__this->set_target_6(L_4);
		String_t* L_5 = ___data1;
		__this->set_data_7(L_5);
		return;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Data()
extern "C"  String_t* XmlProcessingInstruction_get_Data_m288714794 (XmlProcessingInstruction_t425688976 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_data_7();
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_InnerText()
extern "C"  String_t* XmlProcessingInstruction_get_InnerText_m1551347228 (XmlProcessingInstruction_t425688976 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = XmlProcessingInstruction_get_Data_m288714794(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_LocalName()
extern "C"  String_t* XmlProcessingInstruction_get_LocalName_m2432238331 (XmlProcessingInstruction_t425688976 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_target_6();
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Name()
extern "C"  String_t* XmlProcessingInstruction_get_Name_m322476319 (XmlProcessingInstruction_t425688976 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_target_6();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlProcessingInstruction::get_NodeType()
extern "C"  int32_t XmlProcessingInstruction_get_NodeType_m1135291724 (XmlProcessingInstruction_t425688976 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(7);
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Target()
extern "C"  String_t* XmlProcessingInstruction_get_Target_m2836240761 (XmlProcessingInstruction_t425688976 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_target_6();
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Value()
extern "C"  String_t* XmlProcessingInstruction_get_Value_m3253730816 (XmlProcessingInstruction_t425688976 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_data_7();
		return L_0;
	}
}
// System.Void System.Xml.XmlProcessingInstruction::set_Value(System.String)
extern "C"  void XmlProcessingInstruction_set_Value_m567587449 (XmlProcessingInstruction_t425688976 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlProcessingInstruction_set_Value_m567587449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlNode::get_IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral272001162, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlProcessingInstruction_set_Value_m567587449_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_2 = ___value0;
		__this->set_data_7(L_2);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlProcessingInstruction::CloneNode(System.Boolean)
extern "C"  XmlNode_t3767805227 * XmlProcessingInstruction_CloneNode_m1738034480 (XmlProcessingInstruction_t425688976 * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlProcessingInstruction_CloneNode_m1738034480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	{
		String_t* L_0 = __this->get_target_6();
		String_t* L_1 = __this->get_data_7();
		XmlDocument_t2837193595 * L_2 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(21 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlProcessingInstruction_t425688976 * L_3 = (XmlProcessingInstruction_t425688976 *)il2cpp_codegen_object_new(XmlProcessingInstruction_t425688976_il2cpp_TypeInfo_var);
		XmlProcessingInstruction__ctor_m3762799159(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		XmlNode_t3767805227 * L_4 = V_0;
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
// System.Void System.Xml.XmlQualifiedName::.ctor()
extern "C"  void XmlQualifiedName__ctor_m1240160807 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName__ctor_m1240160807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		XmlQualifiedName__ctor_m835061046(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String)
extern "C"  void XmlQualifiedName__ctor_m270143366 (XmlQualifiedName_t2760654312 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName__ctor_m270143366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		XmlQualifiedName__ctor_m835061046(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C"  void XmlQualifiedName__ctor_m835061046 (XmlQualifiedName_t2760654312 * __this, String_t* ___name0, String_t* ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName__ctor_m835061046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlQualifiedName_t2760654312 * G_B2_0 = NULL;
	XmlQualifiedName_t2760654312 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XmlQualifiedName_t2760654312 * G_B3_1 = NULL;
	XmlQualifiedName_t2760654312 * G_B5_0 = NULL;
	XmlQualifiedName_t2760654312 * G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	XmlQualifiedName_t2760654312 * G_B6_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		String_t* L_2 = ___name0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		G_B3_1->set_name_1(G_B3_0);
		String_t* L_3 = ___ns1;
		G_B4_0 = __this;
		if (L_3)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_4;
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		String_t* L_5 = ___ns1;
		G_B6_0 = L_5;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		G_B6_1->set_ns_2(G_B6_0);
		String_t* L_6 = __this->get_name_1();
		int32_t L_7 = String_GetHashCode_m1906374149(L_6, /*hidden argument*/NULL);
		String_t* L_8 = __this->get_ns_2();
		int32_t L_9 = String_GetHashCode_m1906374149(L_8, /*hidden argument*/NULL);
		__this->set_hash_3(((int32_t)((int32_t)L_7^(int32_t)L_9)));
		return;
	}
}
// System.Void System.Xml.XmlQualifiedName::.cctor()
extern "C"  void XmlQualifiedName__cctor_m2817193852 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName__cctor_m2817193852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlQualifiedName_t2760654312 * L_0 = (XmlQualifiedName_t2760654312 *)il2cpp_codegen_object_new(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m1240160807(L_0, /*hidden argument*/NULL);
		((XmlQualifiedName_t2760654312_StaticFields*)il2cpp_codegen_static_fields_for(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var))->set_Empty_0(L_0);
		return;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::get_IsEmpty()
extern "C"  bool XmlQualifiedName_get_IsEmpty_m1430090042 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = __this->get_name_1();
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = __this->get_ns_2();
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		return (bool)G_B3_0;
	}
}
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C"  String_t* XmlQualifiedName_get_Name_m815040483 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_1();
		return L_0;
	}
}
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C"  String_t* XmlQualifiedName_get_Namespace_m3957593392 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_ns_2();
		return L_0;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::Equals(System.Object)
extern "C"  bool XmlQualifiedName_Equals_m4044727681 (XmlQualifiedName_t2760654312 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_Equals_m4044727681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		bool L_1 = XmlQualifiedName_op_Equality_m1684199236(NULL /*static, unused*/, __this, ((XmlQualifiedName_t2760654312 *)IsInstClass((RuntimeObject*)L_0, XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlQualifiedName::GetHashCode()
extern "C"  int32_t XmlQualifiedName_GetHashCode_m639794089 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_hash_3();
		return L_0;
	}
}
// System.String System.Xml.XmlQualifiedName::ToString()
extern "C"  String_t* XmlQualifiedName_ToString_m3581571648 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_ToString_m3581571648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_ns_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_3 = __this->get_name_1();
		return L_3;
	}

IL_001c:
	{
		String_t* L_4 = __this->get_ns_2();
		String_t* L_5 = __this->get_name_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, L_4, _stringLiteral3452614550, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.IXmlNamespaceResolver,System.Boolean)
extern "C"  XmlQualifiedName_t2760654312 * XmlQualifiedName_Parse_m1094507201 (RuntimeObject * __this /* static, unused */, String_t* ___name0, RuntimeObject* ___resolver1, bool ___considerDefaultNamespace2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_Parse_m1094507201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B9_0 = NULL;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = String_IndexOf_m363431711(L_0, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = ___considerDefaultNamespace2;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_4 = ___name0;
		XmlQualifiedName_t2760654312 * L_5 = (XmlQualifiedName_t2760654312 *)il2cpp_codegen_object_new(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m270143366(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_7;
		goto IL_0036;
	}

IL_002e:
	{
		String_t* L_8 = ___name0;
		int32_t L_9 = V_0;
		String_t* L_10 = String_Substring_m1610150815(L_8, 0, L_9, /*hidden argument*/NULL);
		G_B6_0 = L_10;
	}

IL_0036:
	{
		V_1 = G_B6_0;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_12 = ___name0;
		G_B9_0 = L_12;
		goto IL_004d;
	}

IL_0044:
	{
		String_t* L_13 = ___name0;
		int32_t L_14 = V_0;
		String_t* L_15 = String_Substring_m2848979100(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		G_B9_0 = L_15;
	}

IL_004d:
	{
		V_2 = G_B9_0;
		RuntimeObject* L_16 = ___resolver1;
		String_t* L_17 = V_1;
		String_t* L_18 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* System.String System.Xml.IXmlNamespaceResolver::LookupNamespace(System.String) */, IXmlNamespaceResolver_t535375154_il2cpp_TypeInfo_var, L_16, L_17);
		V_3 = L_18;
		String_t* L_19 = V_3;
		if (L_19)
		{
			goto IL_0067;
		}
	}
	{
		ArgumentException_t132251570 * L_20 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_20, _stringLiteral2645001532, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, XmlQualifiedName_Parse_m1094507201_RuntimeMethod_var);
	}

IL_0067:
	{
		String_t* L_21 = V_2;
		String_t* L_22 = V_3;
		XmlQualifiedName_t2760654312 * L_23 = (XmlQualifiedName_t2760654312 *)il2cpp_codegen_object_new(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m835061046(L_23, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.XmlReader)
extern "C"  XmlQualifiedName_t2760654312 * XmlQualifiedName_Parse_m1187782343 (RuntimeObject * __this /* static, unused */, String_t* ___name0, XmlReader_t3121518892 * ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_Parse_m1187782343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = String_IndexOf_m363431711(L_0, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ___name0;
		XmlQualifiedName_t2760654312 * L_4 = (XmlQualifiedName_t2760654312 *)il2cpp_codegen_object_new(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m270143366(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0017:
	{
		XmlReader_t3121518892 * L_5 = ___reader1;
		String_t* L_6 = ___name0;
		int32_t L_7 = V_0;
		String_t* L_8 = String_Substring_m1610150815(L_6, 0, L_7, /*hidden argument*/NULL);
		String_t* L_9 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_5, L_8);
		V_1 = L_9;
		String_t* L_10 = V_1;
		if (L_10)
		{
			goto IL_0037;
		}
	}
	{
		ArgumentException_t132251570 * L_11 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_11, _stringLiteral2645001532, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, XmlQualifiedName_Parse_m1187782343_RuntimeMethod_var);
	}

IL_0037:
	{
		String_t* L_12 = ___name0;
		int32_t L_13 = V_0;
		String_t* L_14 = String_Substring_m2848979100(L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_15 = V_1;
		XmlQualifiedName_t2760654312 * L_16 = (XmlQualifiedName_t2760654312 *)il2cpp_codegen_object_new(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m835061046(L_16, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  bool XmlQualifiedName_op_Equality_m1684199236 (RuntimeObject * __this /* static, unused */, XmlQualifiedName_t2760654312 * ___a0, XmlQualifiedName_t2760654312 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_op_Equality_m1684199236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B9_0 = 0;
	{
		XmlQualifiedName_t2760654312 * L_0 = ___a0;
		XmlQualifiedName_t2760654312 * L_1 = ___b1;
		if ((!(((RuntimeObject*)(XmlQualifiedName_t2760654312 *)L_0) == ((RuntimeObject*)(XmlQualifiedName_t2760654312 *)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)1;
	}

IL_0009:
	{
		XmlQualifiedName_t2760654312 * L_2 = ___a0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		XmlQualifiedName_t2760654312 * L_3 = ___b1;
		if (L_3)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return (bool)0;
	}

IL_0017:
	{
		XmlQualifiedName_t2760654312 * L_4 = ___a0;
		int32_t L_5 = L_4->get_hash_3();
		XmlQualifiedName_t2760654312 * L_6 = ___b1;
		int32_t L_7 = L_6->get_hash_3();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0051;
		}
	}
	{
		XmlQualifiedName_t2760654312 * L_8 = ___a0;
		String_t* L_9 = L_8->get_name_1();
		XmlQualifiedName_t2760654312 * L_10 = ___b1;
		String_t* L_11 = L_10->get_name_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		XmlQualifiedName_t2760654312 * L_13 = ___a0;
		String_t* L_14 = L_13->get_ns_2();
		XmlQualifiedName_t2760654312 * L_15 = ___b1;
		String_t* L_16 = L_15->get_ns_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_17));
		goto IL_0052;
	}

IL_0051:
	{
		G_B9_0 = 0;
	}

IL_0052:
	{
		return (bool)G_B9_0;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::op_Inequality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  bool XmlQualifiedName_op_Inequality_m3449274916 (RuntimeObject * __this /* static, unused */, XmlQualifiedName_t2760654312 * ___a0, XmlQualifiedName_t2760654312 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_op_Inequality_m3449274916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlQualifiedName_t2760654312 * L_0 = ___a0;
		XmlQualifiedName_t2760654312 * L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		bool L_2 = XmlQualifiedName_op_Equality_m1684199236(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void System.Xml.XmlReader::.ctor()
extern "C"  void XmlReader__ctor_m2242864879 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C"  void XmlReader_System_IDisposable_Dispose_m2306994792 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(27 /* System.Void System.Xml.XmlReader::Dispose(System.Boolean) */, __this, (bool)0);
		return;
	}
}
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C"  XmlReaderBinarySupport_t1809665003 * XmlReader_get_Binary_m3370719164 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	{
		XmlReaderBinarySupport_t1809665003 * L_0 = __this->get_binary_0();
		return L_0;
	}
}
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C"  bool XmlReader_get_CanResolveEntity_m4267562488 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C"  bool XmlReader_get_HasAttributes_m3048375563 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, __this);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C"  bool XmlReader_get_IsDefault_m2045325336 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C"  String_t* XmlReader_get_Item_m2769107566 (XmlReader_t3121518892 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(28 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, __this, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlReader::get_Item(System.String,System.String)
extern "C"  String_t* XmlReader_get_Item_m3539447096 (XmlReader_t3121518892 * __this, String_t* ___name0, String_t* ___namespaceURI1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___namespaceURI1;
		String_t* L_2 = VirtFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(29 /* System.String System.Xml.XmlReader::GetAttribute(System.String,System.String) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.String System.Xml.XmlReader::get_Name()
extern "C"  String_t* XmlReader_get_Name_m733252909 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_get_Name_m733252909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, __this);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, __this);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, L_2, _stringLiteral3452614550, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0032;
	}

IL_002c:
	{
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		G_B3_0 = L_5;
	}

IL_0032:
	{
		return G_B3_0;
	}
}
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C"  RuntimeObject* XmlReader_get_SchemaInfo_m3204510401 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C"  XmlReaderSettings_t2186285234 * XmlReader_get_Settings_m3232276411 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	{
		XmlReaderSettings_t2186285234 * L_0 = __this->get_settings_1();
		return L_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C"  int32_t XmlReader_get_XmlSpace_m3646315816 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C"  void XmlReader_Dispose_m203017332 (XmlReader_t3121518892 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(26 /* System.Void System.Xml.XmlReader::Close() */, __this);
	}

IL_0012:
	{
		return;
	}
}
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C"  void XmlReader_MoveToAttribute_m673667036 (XmlReader_t3121518892 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_MoveToAttribute_m673667036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___i0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, __this);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlReader_MoveToAttribute_m673667036_RuntimeMethod_var);
	}

IL_0012:
	{
		VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, __this);
		V_0 = 0;
		goto IL_002b;
	}

IL_0020:
	{
		VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, __this);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___i0;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C"  String_t* XmlReader_ReadOuterXml_m27436192 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_ReadOuterXml_m27436192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t802263757 * V_0 = NULL;
	XmlTextWriter_t2114213153 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_001f;
		}
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_2;
	}

IL_001f:
	{
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0055;
	}

IL_0039:
	{
		StringWriter_t802263757 * L_6 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m1244548890(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		StringWriter_t802263757 * L_7 = V_0;
		XmlTextWriter_t2114213153 * L_8 = (XmlTextWriter_t2114213153 *)il2cpp_codegen_object_new(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		XmlTextWriter__ctor_m1850551870(L_8, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		XmlTextWriter_t2114213153 * L_9 = V_1;
		VirtActionInvoker2< XmlReader_t3121518892 *, bool >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, L_9, __this, (bool)0);
		StringWriter_t802263757 * L_10 = V_0;
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_10);
		return L_11;
	}

IL_0055:
	{
		VirtActionInvoker0::Invoke(41 /* System.Void System.Xml.XmlReader::Skip() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_12;
	}
}
// System.Void System.Xml.XmlReader::Skip()
extern "C"  void XmlReader_Skip_m2445993341 (XmlReader_t3121518892 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, __this);
		if (!L_2)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return;
	}

IL_0033:
	{
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		V_0 = L_3;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_003f;
		}
	}

IL_0056:
	{
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_006a;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
	}

IL_006a:
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
// System.Void System.Xml.XmlReaderBinarySupport::Reset()
extern "C"  void XmlReaderBinarySupport_Reset_m4149730773 (XmlReaderBinarySupport_t1809665003 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_dontReset_4();
		if (L_0)
		{
			goto IL_00aa;
		}
	}
	{
		__this->set_dontReset_4((bool)1);
		bool L_1 = __this->get_hasCache_3();
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		XmlReader_t3121518892 * L_2 = __this->get_reader_0();
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)13))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)14))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_005d;
	}

IL_004c:
	{
		XmlReader_t3121518892 * L_8 = __this->get_reader_0();
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::Read() */, L_8);
		goto IL_005d;
	}

IL_005d:
	{
		int32_t L_9 = __this->get_state_2();
		V_1 = L_9;
		int32_t L_10 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))
		{
			case 0:
			{
				goto IL_007d;
			}
			case 1:
			{
				goto IL_008e;
			}
			case 2:
			{
				goto IL_007d;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_007d:
	{
		XmlReader_t3121518892 * L_11 = __this->get_reader_0();
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::Read() */, L_11);
		goto IL_008e;
	}

IL_008e:
	{
		__this->set_base64CacheStartsAt_1((-1));
		__this->set_state_2(0);
		__this->set_hasCache_3((bool)0);
		__this->set_dontReset_4((bool)0);
	}

IL_00aa:
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
extern "C"  int32_t DelegatePInvokeWrapper_CharGetter_t1703763694 (CharGetter_t1703763694 * __this, CharU5BU5D_t3528271667* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___buffer0' to native representation
	uint8_t* ____buffer0_marshaled = NULL;
	if (___buffer0 != NULL)
	{
		il2cpp_array_size_t ____buffer0_Length = (___buffer0)->max_length;
		____buffer0_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(____buffer0_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____buffer0_Length); i++)
		{
			(____buffer0_marshaled)[i] = static_cast<uint8_t>((___buffer0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____buffer0_marshaled = NULL;
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____buffer0_marshaled, ___offset1, ___length2);

	// Marshaling cleanup of parameter '___buffer0' native representation
	if (____buffer0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____buffer0_marshaled);
		____buffer0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void System.Xml.XmlReaderBinarySupport/CharGetter::.ctor(System.Object,System.IntPtr)
extern "C"  void CharGetter__ctor_m3616306258 (CharGetter_t1703763694 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::Invoke(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t CharGetter_Invoke_m2044290462 (CharGetter_t1703763694 * __this, CharU5BU5D_t3528271667* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		CharGetter_Invoke_m2044290462((CharGetter_t1703763694 *)__this->get_prev_9(), ___buffer0, ___offset1, ___length2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, CharU5BU5D_t3528271667*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___buffer0, ___offset1, ___length2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, CharU5BU5D_t3528271667*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___buffer0, ___offset1, ___length2, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___buffer0, ___offset1, ___length2);
					else
						result = GenericVirtFuncInvoker3< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___buffer0, ___offset1, ___length2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___offset1, ___length2);
					else
						result = VirtFuncInvoker3< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___offset1, ___length2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, CharU5BU5D_t3528271667*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___offset1, ___length2, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(targetMethod, ___buffer0, ___offset1, ___length2);
					else
						result = GenericVirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(targetMethod, ___buffer0, ___offset1, ___length2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___buffer0, ___offset1, ___length2);
					else
						result = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___buffer0, ___offset1, ___length2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (CharU5BU5D_t3528271667*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___offset1, ___length2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Xml.XmlReaderBinarySupport/CharGetter::BeginInvoke(System.Char[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* CharGetter_BeginInvoke_m1792834121 (CharGetter_t1703763694 * __this, CharU5BU5D_t3528271667* ___buffer0, int32_t ___offset1, int32_t ___length2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharGetter_BeginInvoke_m1792834121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___length2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CharGetter_EndInvoke_m3314326019 (CharGetter_t1703763694 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
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
// System.Boolean System.Xml.XmlReaderSettings::get_CheckCharacters()
extern "C"  bool XmlReaderSettings_get_CheckCharacters_m1683653392 (XmlReaderSettings_t2186285234 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_checkCharacters_0();
		return L_0;
	}
}
// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::get_ConformanceLevel()
extern "C"  int32_t XmlReaderSettings_get_ConformanceLevel_m2244916470 (XmlReaderSettings_t2186285234 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_conformance_1();
		return L_0;
	}
}
// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::get_Schemas()
extern "C"  XmlSchemaSet_t266093086 * XmlReaderSettings_get_Schemas_m1700956566 (XmlReaderSettings_t2186285234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReaderSettings_get_Schemas_m1700956566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_schemasNeedsInitialization_3();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		XmlSchemaSet_t266093086 * L_1 = (XmlSchemaSet_t266093086 *)il2cpp_codegen_object_new(XmlSchemaSet_t266093086_il2cpp_TypeInfo_var);
		XmlSchemaSet__ctor_m2333710421(L_1, /*hidden argument*/NULL);
		__this->set_schemas_2(L_1);
		__this->set_schemasNeedsInitialization_3((bool)0);
	}

IL_001d:
	{
		XmlSchemaSet_t266093086 * L_2 = __this->get_schemas_2();
		return L_2;
	}
}
// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::get_ValidationFlags()
extern "C"  int32_t XmlReaderSettings_get_ValidationFlags_m2837396330 (XmlReaderSettings_t2186285234 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationFlags_4();
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
// System.Void System.Xml.XmlResolver::.ctor()
extern "C"  void XmlResolver__ctor_m2276492248 (XmlResolver_t626023767 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t100236324 * XmlResolver_ResolveUri_m3051172150 (XmlResolver_t626023767 * __this, Uri_t100236324 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlResolver_ResolveUri_m3051172150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t100236324 * L_0 = ___baseUri0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Equality_m685520154(NULL /*static, unused*/, L_0, (Uri_t100236324 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_2 = ___relativeUri1;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2467068554, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlResolver_ResolveUri_m3051172150_RuntimeMethod_var);
	}

IL_001d:
	{
		String_t* L_4 = ___relativeUri1;
		bool L_5 = String_StartsWith_m1759067526(L_4, _stringLiteral1973861598, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_6 = ___relativeUri1;
		bool L_7 = String_StartsWith_m1759067526(L_6, _stringLiteral1976352021, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___relativeUri1;
		bool L_9 = String_StartsWith_m1759067526(L_8, _stringLiteral2612015252, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_10 = ___relativeUri1;
		bool L_11 = String_StartsWith_m1759067526(L_10, _stringLiteral452222980, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}

IL_005d:
	{
		String_t* L_12 = ___relativeUri1;
		Uri_t100236324 * L_13 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m800430703(L_13, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0064:
	{
		String_t* L_14 = ___relativeUri1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_15 = Path_GetFullPath_m4142135635(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Uri_t100236324 * L_16 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m800430703(L_16, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0070:
	{
		String_t* L_17 = ___relativeUri1;
		if (L_17)
		{
			goto IL_0078;
		}
	}
	{
		Uri_t100236324 * L_18 = ___baseUri0;
		return L_18;
	}

IL_0078:
	{
		Uri_t100236324 * L_19 = ___baseUri0;
		String_t* L_20 = ___relativeUri1;
		String_t* L_21 = XmlResolver_EscapeRelativeUriBody_m3919279314(__this, L_20, /*hidden argument*/NULL);
		Uri_t100236324 * L_22 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_22, L_19, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C"  String_t* XmlResolver_EscapeRelativeUriBody_m3919279314 (XmlResolver_t626023767 * __this, String_t* ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlResolver_EscapeRelativeUriBody_m3919279314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___src0;
		String_t* L_1 = String_Replace_m1273907647(L_0, _stringLiteral3452614548, _stringLiteral3403826294, /*hidden argument*/NULL);
		String_t* L_2 = String_Replace_m1273907647(L_1, _stringLiteral3452614546, _stringLiteral271658412, /*hidden argument*/NULL);
		String_t* L_3 = String_Replace_m1273907647(L_2, _stringLiteral3452614525, _stringLiteral2671228134, /*hidden argument*/NULL);
		String_t* L_4 = String_Replace_m1273907647(L_3, _stringLiteral3452614523, _stringLiteral3834027548, /*hidden argument*/NULL);
		String_t* L_5 = String_Replace_m1273907647(L_4, _stringLiteral3452614526, _stringLiteral4237312075, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XmlSignificantWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlSignificantWhitespace__ctor_m3379707424 (XmlSignificantWhitespace_t1052520128 * __this, String_t* ___strData0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t2837193595 * L_1 = ___doc1;
		XmlCharacterData__ctor_m3935345337(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_LocalName()
extern "C"  String_t* XmlSignificantWhitespace_get_LocalName_m4159671614 (XmlSignificantWhitespace_t1052520128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSignificantWhitespace_get_LocalName_m4159671614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1556661878;
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_Name()
extern "C"  String_t* XmlSignificantWhitespace_get_Name_m1975580024 (XmlSignificantWhitespace_t1052520128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSignificantWhitespace_get_Name_m1975580024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1556661878;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlSignificantWhitespace::get_NodeType()
extern "C"  int32_t XmlSignificantWhitespace_get_NodeType_m677035314 (XmlSignificantWhitespace_t1052520128 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)14));
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_Value()
extern "C"  String_t* XmlSignificantWhitespace_get_Value_m2364606983 (XmlSignificantWhitespace_t1052520128 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlSignificantWhitespace::set_Value(System.String)
extern "C"  void XmlSignificantWhitespace_set_Value_m2869339402 (XmlSignificantWhitespace_t1052520128 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSignificantWhitespace_set_Value_m2869339402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_1 = XmlChar_IsWhitespace_m2421104119(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3922471879, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlSignificantWhitespace_set_Value_m2869339402_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = ___value0;
		XmlCharacterData_set_Data_m1077571986(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlSignificantWhitespace::get_ParentNode()
extern "C"  XmlNode_t3767805227 * XmlSignificantWhitespace_get_ParentNode_m4164245132 (XmlSignificantWhitespace_t1052520128 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t3767805227 * L_0 = XmlNode_get_ParentNode_m3304904414(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlSignificantWhitespace::CloneNode(System.Boolean)
extern "C"  XmlNode_t3767805227 * XmlSignificantWhitespace_CloneNode_m1103115458 (XmlSignificantWhitespace_t1052520128 * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSignificantWhitespace_CloneNode_m1103115458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlDocument_t2837193595 * L_1 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(21 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlSignificantWhitespace_t1052520128 * L_2 = (XmlSignificantWhitespace_t1052520128 *)il2cpp_codegen_object_new(XmlSignificantWhitespace_t1052520128_il2cpp_TypeInfo_var);
		XmlSignificantWhitespace__ctor_m3379707424(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		XmlNode_t3767805227 * L_3 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
extern "C"  void XmlStreamReader__ctor_m3688274484 (XmlStreamReader_t727818754 * __this, XmlInputStream_t1691369434 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlStreamReader__ctor_m3688274484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlInputStream_t1691369434 * G_B2_0 = NULL;
	XmlStreamReader_t727818754 * G_B2_1 = NULL;
	XmlInputStream_t1691369434 * G_B1_0 = NULL;
	XmlStreamReader_t727818754 * G_B1_1 = NULL;
	Encoding_t1523322056 * G_B3_0 = NULL;
	XmlInputStream_t1691369434 * G_B3_1 = NULL;
	XmlStreamReader_t727818754 * G_B3_2 = NULL;
	{
		XmlInputStream_t1691369434 * L_0 = ___input0;
		XmlInputStream_t1691369434 * L_1 = ___input0;
		Encoding_t1523322056 * L_2 = XmlInputStream_get_ActualEncoding_m3321735681(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (!L_2)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0018;
		}
	}
	{
		XmlInputStream_t1691369434 * L_3 = ___input0;
		Encoding_t1523322056 * L_4 = XmlInputStream_get_ActualEncoding_m3321735681(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlInputStream_t1691369434_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_5 = ((XmlInputStream_t1691369434_StaticFields*)il2cpp_codegen_static_fields_for(XmlInputStream_t1691369434_il2cpp_TypeInfo_var))->get_StrictUTF8_1();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001d:
	{
		NonBlockingStreamReader__ctor_m3980822218(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		XmlInputStream_t1691369434 * L_6 = ___input0;
		__this->set_input_12(L_6);
		return;
	}
}
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
extern "C"  void XmlStreamReader__ctor_m3403779607 (XmlStreamReader_t727818754 * __this, Stream_t1273022909 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlStreamReader__ctor_m3403779607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t1273022909 * L_0 = ___input0;
		XmlInputStream_t1691369434 * L_1 = (XmlInputStream_t1691369434 *)il2cpp_codegen_object_new(XmlInputStream_t1691369434_il2cpp_TypeInfo_var);
		XmlInputStream__ctor_m3269376818(L_1, L_0, /*hidden argument*/NULL);
		XmlStreamReader__ctor_m3688274484(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlStreamReader::.cctor()
extern "C"  void XmlStreamReader__cctor_m3453438400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlStreamReader__cctor_m3453438400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlException_t1761730631 * L_0 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_0, _stringLiteral152590758, /*hidden argument*/NULL);
		((XmlStreamReader_t727818754_StaticFields*)il2cpp_codegen_static_fields_for(XmlStreamReader_t727818754_il2cpp_TypeInfo_var))->set_invalidDataException_13(L_0);
		return;
	}
}
// System.Void System.Xml.XmlStreamReader::Close()
extern "C"  void XmlStreamReader_Close_m1534444935 (XmlStreamReader_t727818754 * __this, const RuntimeMethod* method)
{
	{
		XmlInputStream_t1691369434 * L_0 = __this->get_input_12();
		VirtActionInvoker0::Invoke(12 /* System.Void System.Xml.XmlInputStream::Close() */, L_0);
		return;
	}
}
// System.Int32 System.Xml.XmlStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlStreamReader_Read_m1535597101 (XmlStreamReader_t727818754 * __this, CharU5BU5D_t3528271667* ___dest_buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlStreamReader_Read_m1535597101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			CharU5BU5D_t3528271667* L_0 = ___dest_buffer0;
			int32_t L_1 = ___index1;
			int32_t L_2 = ___count2;
			int32_t L_3 = NonBlockingStreamReader_Read_m583787078(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			goto IL_0020;
		}

IL_000f:
		{
			; // IL_000f: leave IL_0020
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t132251570_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0014;
		throw e;
	}

CATCH_0014:
	{ // begin catch(System.ArgumentException)
		{
			IL2CPP_RUNTIME_CLASS_INIT(XmlStreamReader_t727818754_il2cpp_TypeInfo_var);
			XmlException_t1761730631 * L_4 = ((XmlStreamReader_t727818754_StaticFields*)il2cpp_codegen_static_fields_for(XmlStreamReader_t727818754_il2cpp_TypeInfo_var))->get_invalidDataException_13();
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlStreamReader_Read_m1535597101_RuntimeMethod_var);
		}

IL_001b:
		{
			goto IL_0020;
		}
	} // end catch (depth: 1)

IL_0020:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Xml.XmlStreamReader::Dispose(System.Boolean)
extern "C"  void XmlStreamReader_Dispose_m3655811970 (XmlStreamReader_t727818754 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		NonBlockingStreamReader_Dispose_m2043563007(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void System.Xml.XmlStreamReader::Close() */, __this);
	}

IL_0013:
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
// System.Void System.Xml.XmlText::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlText__ctor_m469415401 (XmlText_t2682211705 * __this, String_t* ___strData0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t2837193595 * L_1 = ___doc1;
		XmlCharacterData__ctor_m3935345337(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlText::get_LocalName()
extern "C"  String_t* XmlText_get_LocalName_m3191567904 (XmlText_t2682211705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlText_get_LocalName_m3191567904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2649583896;
	}
}
// System.String System.Xml.XmlText::get_Name()
extern "C"  String_t* XmlText_get_Name_m2818861068 (XmlText_t2682211705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlText_get_Name_m2818861068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2649583896;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlText::get_NodeType()
extern "C"  int32_t XmlText_get_NodeType_m34749006 (XmlText_t2682211705 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(3);
	}
}
// System.String System.Xml.XmlText::get_Value()
extern "C"  String_t* XmlText_get_Value_m1942877057 (XmlText_t2682211705 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlText::set_Value(System.String)
extern "C"  void XmlText_set_Value_m3917363118 (XmlText_t2682211705 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(38 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_0);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlText::get_ParentNode()
extern "C"  XmlNode_t3767805227 * XmlText_get_ParentNode_m3466872034 (XmlText_t2682211705 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t3767805227 * L_0 = XmlNode_get_ParentNode_m3304904414(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlText::CloneNode(System.Boolean)
extern "C"  XmlNode_t3767805227 * XmlText_CloneNode_m2822403235 (XmlText_t2682211705 * __this, bool ___deep0, const RuntimeMethod* method)
{
	XmlText_t2682211705 * V_0 = NULL;
	{
		XmlDocument_t2837193595 * L_0 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(21 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlText_t2682211705 * L_2 = VirtFuncInvoker1< XmlText_t2682211705 *, String_t* >::Invoke(49 /* System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String) */, L_0, L_1);
		V_0 = L_2;
		XmlText_t2682211705 * L_3 = V_0;
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
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m1872711927 (XmlTextReader_t4233384356 * __this, String_t* ___url0, XmlNameTable_t71772148 * ___nt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader__ctor_m1872711927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader__ctor_m2242864879(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		XmlNameTable_t71772148 * L_1 = ___nt1;
		XmlTextReader_t3455035481 * L_2 = (XmlTextReader_t3455035481 *)il2cpp_codegen_object_new(XmlTextReader_t3455035481_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m3779111233(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_source_3(L_2);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m2920712854 (XmlTextReader_t4233384356 * __this, String_t* ___url0, Stream_t1273022909 * ___input1, XmlNameTable_t71772148 * ___nt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader__ctor_m2920712854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		Stream_t1273022909 * L_1 = ___input1;
		XmlStreamReader_t727818754 * L_2 = (XmlStreamReader_t727818754 *)il2cpp_codegen_object_new(XmlStreamReader_t727818754_il2cpp_TypeInfo_var);
		XmlStreamReader__ctor_m3403779607(L_2, L_1, /*hidden argument*/NULL);
		XmlNameTable_t71772148 * L_3 = ___nt2;
		XmlTextReader__ctor_m2025294095(__this, L_0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m2025294095 (XmlTextReader_t4233384356 * __this, String_t* ___url0, TextReader_t283511965 * ___input1, XmlNameTable_t71772148 * ___nt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader__ctor_m2025294095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader__ctor_m2242864879(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		TextReader_t283511965 * L_1 = ___input1;
		XmlNameTable_t71772148 * L_2 = ___nt2;
		XmlTextReader_t3455035481 * L_3 = (XmlTextReader_t3455035481 *)il2cpp_codegen_object_new(XmlTextReader_t3455035481_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m3612242620(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_source_3(L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m873020869 (XmlTextReader_t4233384356 * __this, String_t* ___xmlFragment0, int32_t ___fragType1, XmlParserContext_t2544895291 * ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader__ctor_m873020869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader__ctor_m2242864879(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___xmlFragment0;
		int32_t L_1 = ___fragType1;
		XmlParserContext_t2544895291 * L_2 = ___context2;
		XmlTextReader_t3455035481 * L_3 = (XmlTextReader_t3455035481 *)il2cpp_codegen_object_new(XmlTextReader_t3455035481_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m4089766063(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_source_3(L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C"  void XmlTextReader__ctor_m918862940 (XmlTextReader_t4233384356 * __this, XmlTextReader_t3455035481 * ___entityContainer0, bool ___insideAttribute1, const RuntimeMethod* method)
{
	{
		XmlReader__ctor_m2242864879(__this, /*hidden argument*/NULL);
		XmlTextReader_t3455035481 * L_0 = ___entityContainer0;
		__this->set_source_3(L_0);
		bool L_1 = ___insideAttribute1;
		__this->set_entityInsideAttribute_4(L_1);
		return;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t2544895291 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m1973359660 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlParserContext_t2544895291 * L_0 = XmlTextReader_get_ParserContext_m2090305018(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C"  XmlReader_t3121518892 * XmlTextReader_get_Current_m3824742842 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	XmlTextReader_t4233384356 * G_B4_0 = NULL;
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		XmlTextReader_t4233384356 * L_3 = __this->get_entity_2();
		G_B4_0 = L_3;
		goto IL_002c;
	}

IL_0026:
	{
		XmlTextReader_t3455035481 * L_4 = __this->get_source_3();
		G_B4_0 = ((XmlTextReader_t4233384356 *)(L_4));
	}

IL_002c:
	{
		return G_B4_0;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C"  int32_t XmlTextReader_get_AttributeCount_m1748564162 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C"  String_t* XmlTextReader_get_BaseURI_m294283768 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
extern "C"  bool XmlTextReader_get_CanResolveEntity_m3758127034 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C"  int32_t XmlTextReader_get_Depth_m2224977374 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0036;
		}
	}
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Mono.Xml2.XmlTextReader::get_Depth() */, L_3);
		XmlTextReader_t4233384356 * L_5 = __this->get_entity_2();
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlTextReader::get_Depth() */, L_5);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_6)), (int32_t)1));
	}

IL_0036:
	{
		XmlTextReader_t3455035481 * L_7 = __this->get_source_3();
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Mono.Xml2.XmlTextReader::get_Depth() */, L_7);
		return L_8;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C"  bool XmlTextReader_get_EOF_m3933784007 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3455035481 * L_0 = __this->get_source_3();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean Mono.Xml2.XmlTextReader::get_EOF() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C"  bool XmlTextReader_get_IsDefault_m2403109145 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C"  bool XmlTextReader_get_IsEmptyElement_m3134890967 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C"  String_t* XmlTextReader_get_LocalName_m3718465889 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_Name()
extern "C"  String_t* XmlTextReader_get_Name_m753020598 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C"  String_t* XmlTextReader_get_NamespaceURI_m2025103778 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C"  XmlNameTable_t71772148 * XmlTextReader_get_NameTable_m362460519 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		XmlNameTable_t71772148 * L_1 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(18 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C"  int32_t XmlTextReader_get_NodeType_m2701651356 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	int32_t G_B6_0 = 0;
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_3);
		G_B6_0 = ((int32_t)(L_4));
		goto IL_004d;
	}

IL_002b:
	{
		XmlTextReader_t4233384356 * L_5 = __this->get_entity_2();
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_5);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		G_B6_0 = ((int32_t)16);
		goto IL_004d;
	}

IL_0042:
	{
		XmlTextReader_t4233384356 * L_7 = __this->get_entity_2();
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType() */, L_7);
		G_B6_0 = ((int32_t)(L_8));
	}

IL_004d:
	{
		return (int32_t)(G_B6_0);
	}

IL_004e:
	{
		XmlTextReader_t3455035481 * L_9 = __this->get_source_3();
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_9);
		return L_10;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C"  XmlParserContext_t2544895291 * XmlTextReader_get_ParserContext_m2090305018 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader_get_ParserContext_m2090305018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		XmlParserContext_t2544895291 * L_1 = InterfaceFuncInvoker0< XmlParserContext_t2544895291 * >::Invoke(0 /* System.Xml.XmlParserContext Mono.Xml.IHasXmlParserContext::get_ParserContext() */, IHasXmlParserContext_t1330489402_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IHasXmlParserContext_t1330489402_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C"  String_t* XmlTextReader_get_Prefix_m934778099 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, L_0);
		return L_1;
	}
}
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C"  int32_t XmlTextReader_get_ReadState_m3285913362 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_001c;
	}

IL_0011:
	{
		XmlTextReader_t3455035481 * L_1 = __this->get_source_3();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C"  XmlReaderSettings_t2186285234 * XmlTextReader_get_Settings_m3492311416 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReaderSettings_t2186285234 * L_0 = XmlReader_get_Settings_m3232276411(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Xml.XmlTextReader::get_Value()
extern "C"  String_t* XmlTextReader_get_Value_m1654814823 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C"  int32_t XmlTextReader_get_XmlSpace_m2648889774 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C"  bool XmlTextReader_get_CharacterChecking_m142279829 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		bool L_2 = XmlTextReader_get_CharacterChecking_m142279829(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		bool L_4 = XmlTextReader_get_CharacterChecking_m322676875(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C"  void XmlTextReader_set_CharacterChecking_m1374136630 (XmlTextReader_t4233384356 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		bool L_2 = ___value0;
		XmlTextReader_set_CharacterChecking_m1374136630(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		bool L_4 = ___value0;
		XmlTextReader_set_CharacterChecking_m824755556(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C"  bool XmlTextReader_get_CloseInput_m4005923126 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		bool L_2 = XmlTextReader_get_CloseInput_m4005923126(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		bool L_4 = XmlTextReader_get_CloseInput_m2055464539(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C"  void XmlTextReader_set_CloseInput_m2512558630 (XmlTextReader_t4233384356 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		bool L_2 = ___value0;
		XmlTextReader_set_CloseInput_m2512558630(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		bool L_4 = ___value0;
		XmlTextReader_set_CloseInput_m4163528207(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C"  void XmlTextReader_set_Conformance_m4265718394 (XmlTextReader_t4233384356 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		int32_t L_2 = ___value0;
		XmlTextReader_set_Conformance_m4265718394(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		int32_t L_4 = ___value0;
		XmlTextReader_set_Conformance_m1985097490(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C"  XmlResolver_t626023767 * XmlTextReader_get_Resolver_m258955197 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3455035481 * L_0 = __this->get_source_3();
		XmlResolver_t626023767 * L_1 = XmlTextReader_get_Resolver_m2264491068(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C"  void XmlTextReader_CopyProperties_m12151598 (XmlTextReader_t4233384356 * __this, XmlTextReader_t4233384356 * ___other0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = ___other0;
		bool L_1 = XmlTextReader_get_CharacterChecking_m142279829(L_0, /*hidden argument*/NULL);
		XmlTextReader_set_CharacterChecking_m1374136630(__this, L_1, /*hidden argument*/NULL);
		XmlTextReader_t4233384356 * L_2 = ___other0;
		bool L_3 = XmlTextReader_get_CloseInput_m4005923126(L_2, /*hidden argument*/NULL);
		XmlTextReader_set_CloseInput_m2512558630(__this, L_3, /*hidden argument*/NULL);
		XmlTextReader_t4233384356 * L_4 = ___other0;
		XmlReaderSettings_t2186285234 * L_5 = VirtFuncInvoker0< XmlReaderSettings_t2186285234 * >::Invoke(23 /* System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings() */, L_4);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		XmlTextReader_t4233384356 * L_6 = ___other0;
		XmlReaderSettings_t2186285234 * L_7 = VirtFuncInvoker0< XmlReaderSettings_t2186285234 * >::Invoke(23 /* System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings() */, L_6);
		int32_t L_8 = XmlReaderSettings_get_ConformanceLevel_m2244916470(L_7, /*hidden argument*/NULL);
		XmlTextReader_set_Conformance_m4265718394(__this, L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		XmlTextReader_t4233384356 * L_9 = ___other0;
		XmlResolver_t626023767 * L_10 = XmlTextReader_get_Resolver_m258955197(L_9, /*hidden argument*/NULL);
		XmlTextReader_set_XmlResolver_m1445354776(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C"  int32_t XmlTextReader_get_EntityHandling_m2980571846 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3455035481 * L_0 = __this->get_source_3();
		int32_t L_1 = XmlTextReader_get_EntityHandling_m1829511007(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C"  int32_t XmlTextReader_get_LineNumber_m577852368 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		int32_t L_2 = XmlTextReader_get_LineNumber_m577852368(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		int32_t L_4 = XmlTextReader_get_LineNumber_m718766076(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C"  int32_t XmlTextReader_get_LinePosition_m724764794 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		int32_t L_2 = XmlTextReader_get_LinePosition_m724764794(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		int32_t L_4 = XmlTextReader_get_LinePosition_m3838196996(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_Namespaces()
extern "C"  bool XmlTextReader_get_Namespaces_m3871412690 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3455035481 * L_0 = __this->get_source_3();
		bool L_1 = XmlTextReader_get_Namespaces_m56588872(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_Normalization()
extern "C"  bool XmlTextReader_get_Normalization_m4194310650 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3455035481 * L_0 = __this->get_source_3();
		bool L_1 = XmlTextReader_get_Normalization_m1218533950(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C"  void XmlTextReader_set_Normalization_m1302478956 (XmlTextReader_t4233384356 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		bool L_2 = ___value0;
		XmlTextReader_set_Normalization_m1302478956(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		bool L_4 = ___value0;
		XmlTextReader_set_Normalization_m906147869(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
extern "C"  int32_t XmlTextReader_get_WhitespaceHandling_m1514032766 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3455035481 * L_0 = __this->get_source_3();
		int32_t L_1 = XmlTextReader_get_WhitespaceHandling_m3804345083(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C"  void XmlTextReader_set_WhitespaceHandling_m109745019 (XmlTextReader_t4233384356 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		int32_t L_2 = ___value0;
		XmlTextReader_set_WhitespaceHandling_m109745019(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		int32_t L_4 = ___value0;
		XmlTextReader_set_WhitespaceHandling_m239529318(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XmlTextReader_set_XmlResolver_m1445354776 (XmlTextReader_t4233384356 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		XmlResolver_t626023767 * L_2 = ___value0;
		XmlTextReader_set_XmlResolver_m1445354776(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		XmlResolver_t626023767 * L_4 = ___value0;
		XmlTextReader_set_XmlResolver_m151906742(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C"  void XmlTextReader_SkipTextDeclaration_m1501695552 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		XmlTextReader_SkipTextDeclaration_m1501695552(L_1, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_001b:
	{
		XmlTextReader_t3455035481 * L_2 = __this->get_source_3();
		XmlTextReader_SkipTextDeclaration_m484952237(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextReader::Close()
extern "C"  void XmlTextReader_Close_m605672602 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		VirtActionInvoker0::Invoke(26 /* System.Void System.Xml.XmlTextReader::Close() */, L_1);
	}

IL_0016:
	{
		XmlTextReader_t3455035481 * L_2 = __this->get_source_3();
		VirtActionInvoker0::Invoke(26 /* System.Void Mono.Xml2.XmlTextReader::Close() */, L_2);
		return;
	}
}
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m406168892 (XmlTextReader_t4233384356 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(28 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.String System.Xml.XmlTextReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m2585113541 (XmlTextReader_t4233384356 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___localName0;
		String_t* L_2 = ___namespaceURI1;
		String_t* L_3 = VirtFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(29 /* System.String System.Xml.XmlReader::GetAttribute(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String System.Xml.XmlTextReader::LookupNamespace(System.String)
extern "C"  String_t* XmlTextReader_LookupNamespace_m2584532653 (XmlTextReader_t4233384356 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___prefix0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
extern "C"  void XmlTextReader_MoveToAttribute_m2693201884 (XmlTextReader_t4233384356 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_4();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		XmlTextReader_CloseEntity_m366351831(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		XmlReader_t3121518892 * L_2 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___i0;
		VirtActionInvoker1< int32_t >::Invoke(31 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_2, L_3);
		__this->set_insideAttribute_5((bool)1);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m1767681524 (XmlTextReader_t4233384356 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_4();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		XmlTextReader_t4233384356 * L_2 = __this->get_entity_2();
		String_t* L_3 = ___name0;
		bool L_4 = VirtFuncInvoker1< bool, String_t* >::Invoke(32 /* System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String) */, L_2, L_3);
		return L_4;
	}

IL_0023:
	{
		XmlTextReader_t3455035481 * L_5 = __this->get_source_3();
		String_t* L_6 = ___name0;
		bool L_7 = VirtFuncInvoker1< bool, String_t* >::Invoke(32 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String) */, L_5, L_6);
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		XmlTextReader_t4233384356 * L_8 = __this->get_entity_2();
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		bool L_9 = __this->get_entityInsideAttribute_4();
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		XmlTextReader_CloseEntity_m366351831(__this, /*hidden argument*/NULL);
	}

IL_0052:
	{
		__this->set_insideAttribute_5((bool)1);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m368710257 (XmlTextReader_t4233384356 * __this, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_4();
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		XmlTextReader_t4233384356 * L_2 = __this->get_entity_2();
		String_t* L_3 = ___localName0;
		String_t* L_4 = ___namespaceName1;
		bool L_5 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(33 /* System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String) */, L_2, L_3, L_4);
		return L_5;
	}

IL_0024:
	{
		XmlTextReader_t3455035481 * L_6 = __this->get_source_3();
		String_t* L_7 = ___localName0;
		String_t* L_8 = ___namespaceName1;
		bool L_9 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(33 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String,System.String) */, L_6, L_7, L_8);
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0038:
	{
		XmlTextReader_t4233384356 * L_10 = __this->get_entity_2();
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		bool L_11 = __this->get_entityInsideAttribute_4();
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		XmlTextReader_CloseEntity_m366351831(__this, /*hidden argument*/NULL);
	}

IL_0054:
	{
		__this->set_insideAttribute_5((bool)1);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C"  bool XmlTextReader_MoveToElement_m1938806187 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_4();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		XmlTextReader_CloseEntity_m366351831(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		XmlReader_t3121518892 * L_2 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->set_insideAttribute_5((bool)0);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C"  bool XmlTextReader_MoveToFirstAttribute_m4069294905 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_4();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		XmlTextReader_t4233384356 * L_2 = __this->get_entity_2();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute() */, L_2);
		return L_3;
	}

IL_0022:
	{
		XmlTextReader_t3455035481 * L_4 = __this->get_source_3();
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute() */, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		XmlTextReader_t4233384356 * L_6 = __this->get_entity_2();
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		bool L_7 = __this->get_entityInsideAttribute_4();
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		XmlTextReader_CloseEntity_m366351831(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		__this->set_insideAttribute_5((bool)1);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C"  bool XmlTextReader_MoveToNextAttribute_m352155988 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_4();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		XmlTextReader_t4233384356 * L_2 = __this->get_entity_2();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute() */, L_2);
		return L_3;
	}

IL_0022:
	{
		XmlTextReader_t3455035481 * L_4 = __this->get_source_3();
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute() */, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		XmlTextReader_t4233384356 * L_6 = __this->get_entity_2();
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		bool L_7 = __this->get_entityInsideAttribute_4();
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		XmlTextReader_CloseEntity_m366351831(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		__this->set_insideAttribute_5((bool)1);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C"  bool XmlTextReader_Read_m3883600120 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		__this->set_insideAttribute_5((bool)0);
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_4();
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		XmlTextReader_t4233384356 * L_2 = __this->get_entity_2();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_2);
		if (!L_3)
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		XmlTextReader_CloseEntity_m366351831(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		XmlTextReader_t4233384356 * L_4 = __this->get_entity_2();
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		XmlTextReader_t4233384356 * L_5 = __this->get_entity_2();
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlTextReader::Read() */, L_5);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		return (bool)1;
	}

IL_0050:
	{
		int32_t L_7 = XmlTextReader_get_EntityHandling_m2980571846(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		XmlTextReader_CloseEntity_m366351831(__this, /*hidden argument*/NULL);
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlTextReader::Read() */, __this);
		return L_8;
	}

IL_0069:
	{
		return (bool)1;
	}

IL_006b:
	{
		XmlTextReader_t3455035481 * L_9 = __this->get_source_3();
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, L_9);
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		return (bool)0;
	}

IL_007d:
	{
		int32_t L_11 = XmlTextReader_get_EntityHandling_m2980571846(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00a7;
		}
	}
	{
		XmlTextReader_t3455035481 * L_12 = __this->get_source_3();
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_12);
		if ((!(((uint32_t)L_13) == ((uint32_t)5))))
		{
			goto IL_00a7;
		}
	}
	{
		VirtActionInvoker0::Invoke(40 /* System.Void System.Xml.XmlTextReader::ResolveEntity() */, __this);
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlTextReader::Read() */, __this);
		return L_14;
	}

IL_00a7:
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C"  bool XmlTextReader_ReadAttributeValue_m5842778 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_4();
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		XmlTextReader_t4233384356 * L_2 = __this->get_entity_2();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_2);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		XmlTextReader_CloseEntity_m366351831(__this, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_0031:
	{
		XmlTextReader_t4233384356 * L_4 = __this->get_entity_2();
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlTextReader::Read() */, L_4);
		return (bool)1;
	}

IL_003f:
	{
		XmlReader_t3121518892 * L_5 = XmlTextReader_get_Current_m3824742842(__this, /*hidden argument*/NULL);
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_5);
		return L_6;
	}
}
// System.Void System.Xml.XmlTextReader::ResolveEntity()
extern "C"  void XmlTextReader_ResolveEntity_m1104020615 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader_ResolveEntity_m1104020615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlTextReader_t3455035481 * V_0 = NULL;
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		VirtActionInvoker0::Invoke(40 /* System.Void System.Xml.XmlTextReader::ResolveEntity() */, L_1);
		goto IL_011a;
	}

IL_001b:
	{
		XmlTextReader_t3455035481 * L_2 = __this->get_source_3();
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0037;
		}
	}
	{
		InvalidOperationException_t56020091 * L_4 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_4, _stringLiteral899481384, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextReader_ResolveEntity_m1104020615_RuntimeMethod_var);
	}

IL_0037:
	{
		V_0 = (XmlTextReader_t3455035481 *)NULL;
		XmlParserContext_t2544895291 * L_5 = XmlTextReader_get_ParserContext_m2090305018(__this, /*hidden argument*/NULL);
		DTDObjectModel_t1729680289 * L_6 = XmlParserContext_get_Dtd_m2960147355(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		XmlParserContext_t2544895291 * L_7 = XmlTextReader_get_ParserContext_m2090305018(__this, /*hidden argument*/NULL);
		DTDObjectModel_t1729680289 * L_8 = XmlParserContext_get_Dtd_m2960147355(L_7, /*hidden argument*/NULL);
		XmlTextReader_t3455035481 * L_9 = __this->get_source_3();
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Xml2.XmlTextReader::get_Name() */, L_9);
		XmlParserContext_t2544895291 * L_11 = XmlTextReader_get_ParserContext_m2090305018(__this, /*hidden argument*/NULL);
		XmlTextReader_t3455035481 * L_12 = DTDObjectModel_GenerateEntityContentReader_m3148241306(L_8, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_006b:
	{
		XmlTextReader_t3455035481 * L_13 = V_0;
		if (L_13)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlTextReader::get_BaseURI() */, __this);
		XmlTextReader_t3455035481 * L_15 = __this->get_source_3();
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Xml2.XmlTextReader::get_Name() */, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2705683803, L_16, /*hidden argument*/NULL);
		XmlException_t1761730631 * L_18 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m212897041(L_18, __this, L_14, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, XmlTextReader_ResolveEntity_m1104020615_RuntimeMethod_var);
	}

IL_0093:
	{
		Stack_1_t2690840144 * L_19 = __this->get_entityNameStack_6();
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		Stack_1_t2690840144 * L_20 = (Stack_1_t2690840144 *)il2cpp_codegen_object_new(Stack_1_t2690840144_il2cpp_TypeInfo_var);
		Stack_1__ctor_m936691270(L_20, /*hidden argument*/Stack_1__ctor_m936691270_RuntimeMethod_var);
		__this->set_entityNameStack_6(L_20);
		goto IL_00da;
	}

IL_00ae:
	{
		Stack_1_t2690840144 * L_21 = __this->get_entityNameStack_6();
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		bool L_23 = Stack_1_Contains_m1213713845(L_21, L_22, /*hidden argument*/Stack_1_Contains_m1213713845_RuntimeMethod_var);
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3575895782, L_24, /*hidden argument*/NULL);
		XmlException_t1761730631 * L_26 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, XmlTextReader_ResolveEntity_m1104020615_RuntimeMethod_var);
	}

IL_00da:
	{
		Stack_1_t2690840144 * L_27 = __this->get_entityNameStack_6();
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		Stack_1_Push_m570958490(L_27, L_28, /*hidden argument*/Stack_1_Push_m570958490_RuntimeMethod_var);
		XmlTextReader_t3455035481 * L_29 = V_0;
		bool L_30 = __this->get_insideAttribute_5();
		XmlTextReader_t4233384356 * L_31 = (XmlTextReader_t4233384356 *)il2cpp_codegen_object_new(XmlTextReader_t4233384356_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m918862940(L_31, L_29, L_30, /*hidden argument*/NULL);
		__this->set_entity_2(L_31);
		XmlTextReader_t4233384356 * L_32 = __this->get_entity_2();
		Stack_1_t2690840144 * L_33 = __this->get_entityNameStack_6();
		L_32->set_entityNameStack_6(L_33);
		XmlTextReader_t4233384356 * L_34 = __this->get_entity_2();
		XmlTextReader_CopyProperties_m12151598(L_34, __this, /*hidden argument*/NULL);
	}

IL_011a:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C"  void XmlTextReader_CloseEntity_m366351831 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader_CloseEntity_m366351831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		VirtActionInvoker0::Invoke(26 /* System.Void System.Xml.XmlTextReader::Close() */, L_0);
		__this->set_entity_2((XmlTextReader_t4233384356 *)NULL);
		Stack_1_t2690840144 * L_1 = __this->get_entityNameStack_6();
		Stack_1_Pop_m2585401118(L_1, /*hidden argument*/Stack_1_Pop_m2585401118_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::Skip()
extern "C"  void XmlTextReader_Skip_m1832488631 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_Skip_m2445993341(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern "C"  TextReader_t283511965 * XmlTextReader_GetRemainder_m3491863577 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader_GetRemainder_m3491863577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_entity_2();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_entity_2();
		VirtActionInvoker0::Invoke(26 /* System.Void System.Xml.XmlTextReader::Close() */, L_1);
		__this->set_entity_2((XmlTextReader_t4233384356 *)NULL);
		Stack_1_t2690840144 * L_2 = __this->get_entityNameStack_6();
		Stack_1_Pop_m2585401118(L_2, /*hidden argument*/Stack_1_Pop_m2585401118_RuntimeMethod_var);
	}

IL_0029:
	{
		XmlTextReader_t3455035481 * L_3 = __this->get_source_3();
		TextReader_t283511965 * L_4 = XmlTextReader_GetRemainder_m3291199686(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Xml.XmlTextReader::HasLineInfo()
extern "C"  bool XmlTextReader_HasLineInfo_m2379716864 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
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
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C"  void XmlTextWriter__ctor_m1850551870 (XmlTextWriter_t2114213153 * __this, TextWriter_t3478189236 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__ctor_m1850551870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_close_output_stream_10((bool)1);
		__this->set_namespaces_12((bool)1);
		__this->set_newline_handling_15(2);
		__this->set_elements_21(((XmlNodeInfoU5BU5D_t431163322*)SZArrayNew(XmlNodeInfoU5BU5D_t431163322_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10))));
		Stack_t2329662280 * L_0 = (Stack_t2329662280 *)il2cpp_codegen_object_new(Stack_t2329662280_il2cpp_TypeInfo_var);
		Stack__ctor_m2907601956(L_0, /*hidden argument*/NULL);
		__this->set_new_local_namespaces_22(L_0);
		ArrayList_t2718874744 * L_1 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_1, /*hidden argument*/NULL);
		__this->set_explicit_nsdecls_23(L_1);
		__this->set_indent_count_26(2);
		__this->set_indent_char_27(((int32_t)32));
		__this->set_indent_string_28(_stringLiteral3450517376);
		__this->set_quote_char_31(((int32_t)34));
		XmlWriter__ctor_m2782267819(__this, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_2 = ___writer0;
		if (L_2)
		{
			goto IL_0071;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter__ctor_m1850551870_RuntimeMethod_var);
	}

IL_0071:
	{
		TextWriter_t3478189236 * L_4 = ___writer0;
		Encoding_t1523322056 * L_5 = VirtFuncInvoker0< Encoding_t1523322056 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_4);
		__this->set_ignore_encoding_11((bool)((((RuntimeObject*)(Encoding_t1523322056 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0));
		TextWriter_t3478189236 * L_6 = ___writer0;
		XmlTextWriter_Initialize_m3279439671(__this, L_6, /*hidden argument*/NULL);
		__this->set_allow_doc_fragment_9((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.cctor()
extern "C"  void XmlTextWriter__cctor_m1817862492 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__cctor_m1817862492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t3956466879 * L_0 = (UTF8Encoding_t3956466879 *)il2cpp_codegen_object_new(UTF8Encoding_t3956466879_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m1391509536(L_0, (bool)0, (bool)0, /*hidden argument*/NULL);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_unmarked_utf8encoding_0(L_0);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C"  void XmlTextWriter_Initialize_m3279439671 (XmlTextWriter_t2114213153 * __this, TextWriter_t3478189236 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_Initialize_m3279439671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNameTable_t71772148 * V_0 = NULL;
	CharU5BU5D_t3528271667* G_B7_0 = NULL;
	{
		TextWriter_t3478189236 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_Initialize_m3279439671_RuntimeMethod_var);
	}

IL_0011:
	{
		NameTable_t3178203267 * L_2 = (NameTable_t3178203267 *)il2cpp_codegen_object_new(NameTable_t3178203267_il2cpp_TypeInfo_var);
		NameTable__ctor_m874080766(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		TextWriter_t3478189236 * L_3 = ___writer0;
		__this->set_writer_5(L_3);
		TextWriter_t3478189236 * L_4 = ___writer0;
		if (!((StreamWriter_t1266378904 *)IsInstClass((RuntimeObject*)L_4, StreamWriter_t1266378904_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		TextWriter_t3478189236 * L_5 = ___writer0;
		Stream_t1273022909 * L_6 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(19 /* System.IO.Stream System.IO.StreamWriter::get_BaseStream() */, ((StreamWriter_t1266378904 *)CastclassClass((RuntimeObject*)L_5, StreamWriter_t1266378904_il2cpp_TypeInfo_var)));
		__this->set_base_stream_3(L_6);
	}

IL_003a:
	{
		TextWriter_t3478189236 * L_7 = ___writer0;
		__this->set_source_4(L_7);
		XmlNameTable_t71772148 * L_8 = V_0;
		XmlNamespaceManager_t418790500 * L_9 = (XmlNamespaceManager_t418790500 *)il2cpp_codegen_object_new(XmlNamespaceManager_t418790500_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m3238790559(L_9, L_8, /*hidden argument*/NULL);
		__this->set_nsmanager_19(L_9);
		TextWriter_t3478189236 * L_10 = ___writer0;
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.IO.TextWriter::get_NewLine() */, L_10);
		__this->set_newline_29(L_11);
		int32_t L_12 = __this->get_newline_handling_15();
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t3528271667* L_13 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)5));
		RuntimeFieldHandle_t1871169219  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D43_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		G_B7_0 = L_13;
		goto IL_0090;
	}

IL_007b:
	{
		CharU5BU5D_t3528271667* L_15 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)3));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)38));
		CharU5BU5D_t3528271667* L_16 = L_15;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)60));
		CharU5BU5D_t3528271667* L_17 = L_16;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)((int32_t)62));
		G_B7_0 = L_17;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_escaped_text_chars_1(G_B7_0);
		CharU5BU5D_t3528271667* L_18 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)6));
		RuntimeFieldHandle_t1871169219  L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D44_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_18, L_19, /*hidden argument*/NULL);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_escaped_attr_chars_2(L_18);
		return;
	}
}
// System.String System.Xml.XmlTextWriter::get_XmlLang()
extern "C"  String_t* XmlTextWriter_get_XmlLang_m234129010 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_open_count_20();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0025;
	}

IL_0011:
	{
		XmlNodeInfoU5BU5D_t431163322* L_1 = __this->get_elements_21();
		int32_t L_2 = __this->get_open_count_20();
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5 = L_4->get_XmlLang_5();
		G_B3_0 = L_5;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
extern "C"  int32_t XmlTextWriter_get_XmlSpace_m3846401545 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_open_count_20();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		XmlNodeInfoU5BU5D_t431163322* L_1 = __this->get_elements_21();
		int32_t L_2 = __this->get_open_count_20();
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = L_4->get_XmlSpace_6();
		G_B3_0 = ((int32_t)(L_5));
	}

IL_0025:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
extern "C"  String_t* XmlTextWriter_LookupPrefix_m1332716567 (XmlTextWriter_t2114213153 * __this, String_t* ___namespaceUri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_LookupPrefix_m1332716567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___namespaceUri0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = ___namespaceUri0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}

IL_0016:
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral654685373, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_LookupPrefix_m1332716567_RuntimeMethod_var);
	}

IL_0022:
	{
		String_t* L_5 = ___namespaceUri0;
		XmlNamespaceManager_t418790500 * L_6 = __this->get_nsmanager_19();
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_9;
	}

IL_003e:
	{
		XmlNamespaceManager_t418790500 * L_10 = __this->get_nsmanager_19();
		String_t* L_11 = ___namespaceUri0;
		String_t* L_12 = XmlNamespaceManager_LookupPrefixExclusive_m4193555037(L_10, L_11, (bool)0, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.Void System.Xml.XmlTextWriter::Close()
extern "C"  void XmlTextWriter_Close_m3579947138 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_state_17();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->get_state_17();
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_001e;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_001e:
	{
		goto IL_0029;
	}

IL_0023:
	{
		VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlTextWriter::WriteEndElement() */, __this);
	}

IL_0029:
	{
		int32_t L_2 = __this->get_open_count_20();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0035:
	{
		bool L_3 = __this->get_close_output_stream_10();
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		TextWriter_t3478189236 * L_4 = __this->get_writer_5();
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextWriter::Close() */, L_4);
		goto IL_005b;
	}

IL_0050:
	{
		TextWriter_t3478189236 * L_5 = __this->get_writer_5();
		VirtActionInvoker0::Invoke(9 /* System.Void System.IO.TextWriter::Flush() */, L_5);
	}

IL_005b:
	{
		__this->set_state_17(5);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_WriteStartDocumentCore_m3985718073 (XmlTextWriter_t2114213153 * __this, bool ___outputStd0, bool ___standalone1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartDocumentCore_m3985718073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextWriter_t3478189236 * G_B11_0 = NULL;
	TextWriter_t3478189236 * G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	TextWriter_t3478189236 * G_B12_1 = NULL;
	{
		int32_t L_0 = __this->get_state_17();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral1924938561, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteStartDocumentCore_m3985718073_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_2 = __this->get_xmldecl_state_13();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0044;
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		Exception_t * L_4 = XmlTextWriter_InvalidOperation_m988191293(__this, _stringLiteral553656983, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteStartDocumentCore_m3985718073_RuntimeMethod_var);
	}

IL_0044:
	{
		__this->set_state_17(1);
		TextWriter_t3478189236 * L_5 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral950831942);
		TextWriter_t3478189236 * L_6 = __this->get_writer_5();
		Il2CppChar L_7 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, L_7);
		TextWriter_t3478189236 * L_8 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteral3073726249);
		TextWriter_t3478189236 * L_9 = __this->get_writer_5();
		Il2CppChar L_10 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, L_10);
		bool L_11 = __this->get_ignore_encoding_11();
		if (L_11)
		{
			goto IL_00e5;
		}
	}
	{
		TextWriter_t3478189236 * L_12 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral3906513894);
		TextWriter_t3478189236 * L_13 = __this->get_writer_5();
		Il2CppChar L_14 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, L_14);
		TextWriter_t3478189236 * L_15 = __this->get_writer_5();
		TextWriter_t3478189236 * L_16 = __this->get_writer_5();
		Encoding_t1523322056 * L_17 = VirtFuncInvoker0< Encoding_t1523322056 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_16);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Text.Encoding::get_WebName() */, L_17);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_18);
		TextWriter_t3478189236 * L_19 = __this->get_writer_5();
		Il2CppChar L_20 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, L_20);
	}

IL_00e5:
	{
		bool L_21 = ___outputStd0;
		if (!L_21)
		{
			goto IL_013d;
		}
	}
	{
		TextWriter_t3478189236 * L_22 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, _stringLiteral2960723134);
		TextWriter_t3478189236 * L_23 = __this->get_writer_5();
		Il2CppChar L_24 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_23, L_24);
		TextWriter_t3478189236 * L_25 = __this->get_writer_5();
		bool L_26 = ___standalone1;
		G_B10_0 = L_25;
		if (!L_26)
		{
			G_B11_0 = L_25;
			goto IL_0122;
		}
	}
	{
		G_B12_0 = _stringLiteral4119301762;
		G_B12_1 = G_B10_0;
		goto IL_0127;
	}

IL_0122:
	{
		G_B12_0 = _stringLiteral3454777282;
		G_B12_1 = G_B11_0;
	}

IL_0127:
	{
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B12_1, G_B12_0);
		TextWriter_t3478189236 * L_27 = __this->get_writer_5();
		Il2CppChar L_28 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_27, L_28);
	}

IL_013d:
	{
		TextWriter_t3478189236 * L_29 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_29, _stringLiteral3451697041);
		__this->set_xmldecl_state_13(1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteDocType_m3875009899 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, String_t* ___pubid1, String_t* ___sysid2, String_t* ___subset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteDocType_m3875009899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteDocType_m3875009899_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_m846619221(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteDocType_m3875009899_RuntimeMethod_var);
	}

IL_0029:
	{
		int32_t L_5 = __this->get_node_state_18();
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		Exception_t * L_6 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral2588054203, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlTextWriter_WriteDocType_m3875009899_RuntimeMethod_var);
	}

IL_0040:
	{
		__this->set_node_state_18(((int32_t)10));
		int32_t L_7 = __this->get_xmldecl_state_13();
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m96032915(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		XmlTextWriter_WriteIndent_m534435357(__this, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_8 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteral3664297627);
		TextWriter_t3478189236 * L_9 = __this->get_writer_5();
		String_t* L_10 = ___name0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_10);
		String_t* L_11 = ___pubid1;
		if (!L_11)
		{
			goto IL_0106;
		}
	}
	{
		TextWriter_t3478189236 * L_12 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral4026494280);
		TextWriter_t3478189236 * L_13 = __this->get_writer_5();
		Il2CppChar L_14 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, L_14);
		TextWriter_t3478189236 * L_15 = __this->get_writer_5();
		String_t* L_16 = ___pubid1;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
		TextWriter_t3478189236 * L_17 = __this->get_writer_5();
		Il2CppChar L_18 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, L_18);
		TextWriter_t3478189236 * L_19 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, ((int32_t)32));
		TextWriter_t3478189236 * L_20 = __this->get_writer_5();
		Il2CppChar L_21 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_20, L_21);
		String_t* L_22 = ___sysid2;
		if (!L_22)
		{
			goto IL_00f0;
		}
	}
	{
		TextWriter_t3478189236 * L_23 = __this->get_writer_5();
		String_t* L_24 = ___sysid2;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_24);
	}

IL_00f0:
	{
		TextWriter_t3478189236 * L_25 = __this->get_writer_5();
		Il2CppChar L_26 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_25, L_26);
		goto IL_014a;
	}

IL_0106:
	{
		String_t* L_27 = ___sysid2;
		if (!L_27)
		{
			goto IL_014a;
		}
	}
	{
		TextWriter_t3478189236 * L_28 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, _stringLiteral2551850054);
		TextWriter_t3478189236 * L_29 = __this->get_writer_5();
		Il2CppChar L_30 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_29, L_30);
		TextWriter_t3478189236 * L_31 = __this->get_writer_5();
		String_t* L_32 = ___sysid2;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_31, L_32);
		TextWriter_t3478189236 * L_33 = __this->get_writer_5();
		Il2CppChar L_34 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_33, L_34);
	}

IL_014a:
	{
		String_t* L_35 = ___subset3;
		if (!L_35)
		{
			goto IL_017e;
		}
	}
	{
		TextWriter_t3478189236 * L_36 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_36, _stringLiteral3452614645);
		TextWriter_t3478189236 * L_37 = __this->get_writer_5();
		String_t* L_38 = ___subset3;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, L_38);
		TextWriter_t3478189236 * L_39 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_39, _stringLiteral3452614643);
	}

IL_017e:
	{
		TextWriter_t3478189236 * L_40 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)62));
		__this->set_state_17(1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteStartElement_m362096410 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartElement_m362096410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XmlNodeInfoU5BU5D_t431163322* V_1 = NULL;
	XmlNodeInfo_t4030693883 * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = __this->get_state_17();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_state_17();
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		Exception_t * L_2 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral885171343, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlTextWriter_WriteStartElement_m362096410_RuntimeMethod_var);
	}

IL_0024:
	{
		__this->set_node_state_18(1);
		String_t* L_3 = ___prefix0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		String_t* L_4 = ___prefix0;
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___prefix0 = L_5;
	}

IL_003d:
	{
		bool L_6 = __this->get_namespaces_12();
		if (L_6)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_7 = ___namespaceUri2;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_8 = ___namespaceUri2;
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		Exception_t * L_10 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral3884394238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, XmlTextWriter_WriteStartElement_m362096410_RuntimeMethod_var);
	}

IL_0066:
	{
		bool L_11 = __this->get_namespaces_12();
		if (L_11)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_12 = ___prefix0;
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		Exception_t * L_14 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral4155493995, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, XmlTextWriter_WriteStartElement_m362096410_RuntimeMethod_var);
	}

IL_0089:
	{
		String_t* L_15 = ___prefix0;
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_17 = ___namespaceUri2;
		if (L_17)
		{
			goto IL_00c7;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_18 = __this->get_nsmanager_19();
		String_t* L_19 = ___prefix0;
		String_t* L_20 = XmlNamespaceManager_LookupNamespace_m2828740952(L_18, L_19, (bool)0, /*hidden argument*/NULL);
		___namespaceUri2 = L_20;
		String_t* L_21 = ___namespaceUri2;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_22 = ___namespaceUri2;
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00c7;
		}
	}

IL_00bb:
	{
		Exception_t * L_24 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral1065548103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, XmlTextWriter_WriteStartElement_m362096410_RuntimeMethod_var);
	}

IL_00c7:
	{
		bool L_25 = __this->get_namespaces_12();
		if (!L_25)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_26 = ___prefix0;
		if (!L_26)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_27 = ___prefix0;
		int32_t L_28 = String_get_Length_m3847582255(L_27, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)3))))
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_29 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_29, _stringLiteral2984480440, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_31 = ___prefix0;
		Il2CppChar L_32 = String_get_Chars_m2986988803(L_31, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)120))))
		{
			goto IL_0110;
		}
	}
	{
		String_t* L_33 = ___prefix0;
		Il2CppChar L_34 = String_get_Chars_m2986988803(L_33, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0153;
		}
	}

IL_0110:
	{
		String_t* L_35 = ___prefix0;
		Il2CppChar L_36 = String_get_Chars_m2986988803(L_35, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)109))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_37 = ___prefix0;
		Il2CppChar L_38 = String_get_Chars_m2986988803(L_37, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0153;
		}
	}

IL_012c:
	{
		String_t* L_39 = ___prefix0;
		Il2CppChar L_40 = String_get_Chars_m2986988803(L_39, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_40) == ((int32_t)((int32_t)108))))
		{
			goto IL_0148;
		}
	}
	{
		String_t* L_41 = ___prefix0;
		Il2CppChar L_42 = String_get_Chars_m2986988803(L_41, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_0153;
		}
	}

IL_0148:
	{
		ArgumentException_t132251570 * L_43 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_43, _stringLiteral3156561689, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, NULL, XmlTextWriter_WriteStartElement_m362096410_RuntimeMethod_var);
	}

IL_0153:
	{
		int32_t L_44 = __this->get_xmldecl_state_13();
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m96032915(__this, /*hidden argument*/NULL);
	}

IL_0165:
	{
		int32_t L_45 = __this->get_state_17();
		if ((!(((uint32_t)L_45) == ((uint32_t)2))))
		{
			goto IL_0177;
		}
	}
	{
		XmlTextWriter_CloseStartElement_m3029087518(__this, /*hidden argument*/NULL);
	}

IL_0177:
	{
		int32_t L_46 = __this->get_open_count_20();
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_47 = __this->get_elements_21();
		int32_t L_48 = __this->get_open_count_20();
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		L_50->set_HasElements_4((bool)1);
	}

IL_0198:
	{
		XmlNamespaceManager_t418790500 * L_51 = __this->get_nsmanager_19();
		VirtActionInvoker0::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_51);
		bool L_52 = __this->get_namespaces_12();
		if (!L_52)
		{
			goto IL_01e7;
		}
	}
	{
		String_t* L_53 = ___namespaceUri2;
		if (!L_53)
		{
			goto IL_01e7;
		}
	}
	{
		bool L_54 = V_0;
		if (!L_54)
		{
			goto IL_01cf;
		}
	}
	{
		String_t* L_55 = ___namespaceUri2;
		int32_t L_56 = String_get_Length_m3847582255(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01cf;
		}
	}
	{
		String_t* L_57 = ___namespaceUri2;
		String_t* L_58 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_57);
		___prefix0 = L_58;
	}

IL_01cf:
	{
		String_t* L_59 = ___prefix0;
		if (!L_59)
		{
			goto IL_01e0;
		}
	}
	{
		String_t* L_60 = ___namespaceUri2;
		int32_t L_61 = String_get_Length_m3847582255(L_60, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_01e7;
		}
	}

IL_01e0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___prefix0 = L_62;
	}

IL_01e7:
	{
		XmlTextWriter_WriteIndent_m534435357(__this, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_63 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_63, _stringLiteral3452614548);
		String_t* L_64 = ___prefix0;
		int32_t L_65 = String_get_Length_m3847582255(L_64, /*hidden argument*/NULL);
		if ((((int32_t)L_65) <= ((int32_t)0)))
		{
			goto IL_0222;
		}
	}
	{
		TextWriter_t3478189236 * L_66 = __this->get_writer_5();
		String_t* L_67 = ___prefix0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_66, L_67);
		TextWriter_t3478189236 * L_68 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_68, ((int32_t)58));
	}

IL_0222:
	{
		TextWriter_t3478189236 * L_69 = __this->get_writer_5();
		String_t* L_70 = ___localName1;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_69, L_70);
		XmlNodeInfoU5BU5D_t431163322* L_71 = __this->get_elements_21();
		int32_t L_72 = __this->get_open_count_20();
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_71)->max_length))))) == ((uint32_t)L_72))))
		{
			goto IL_0268;
		}
	}
	{
		int32_t L_73 = __this->get_open_count_20();
		V_1 = ((XmlNodeInfoU5BU5D_t431163322*)SZArrayNew(XmlNodeInfoU5BU5D_t431163322_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_73<<(int32_t)1))));
		XmlNodeInfoU5BU5D_t431163322* L_74 = __this->get_elements_21();
		XmlNodeInfoU5BU5D_t431163322* L_75 = V_1;
		int32_t L_76 = __this->get_open_count_20();
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_74, (RuntimeArray *)(RuntimeArray *)L_75, L_76, /*hidden argument*/NULL);
		XmlNodeInfoU5BU5D_t431163322* L_77 = V_1;
		__this->set_elements_21(L_77);
	}

IL_0268:
	{
		XmlNodeInfoU5BU5D_t431163322* L_78 = __this->get_elements_21();
		int32_t L_79 = __this->get_open_count_20();
		int32_t L_80 = L_79;
		XmlNodeInfo_t4030693883 * L_81 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		if (L_81)
		{
			goto IL_028c;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_82 = __this->get_elements_21();
		int32_t L_83 = __this->get_open_count_20();
		XmlNodeInfo_t4030693883 * L_84 = (XmlNodeInfo_t4030693883 *)il2cpp_codegen_object_new(XmlNodeInfo_t4030693883_il2cpp_TypeInfo_var);
		XmlNodeInfo__ctor_m1232608472(L_84, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_82, L_84);
		(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83), (XmlNodeInfo_t4030693883 *)L_84);
	}

IL_028c:
	{
		XmlNodeInfoU5BU5D_t431163322* L_85 = __this->get_elements_21();
		int32_t L_86 = __this->get_open_count_20();
		int32_t L_87 = L_86;
		XmlNodeInfo_t4030693883 * L_88 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		V_2 = L_88;
		XmlNodeInfo_t4030693883 * L_89 = V_2;
		String_t* L_90 = ___prefix0;
		L_89->set_Prefix_0(L_90);
		XmlNodeInfo_t4030693883 * L_91 = V_2;
		String_t* L_92 = ___localName1;
		L_91->set_LocalName_1(L_92);
		XmlNodeInfo_t4030693883 * L_93 = V_2;
		String_t* L_94 = ___namespaceUri2;
		L_93->set_NS_2(L_94);
		XmlNodeInfo_t4030693883 * L_95 = V_2;
		L_95->set_HasSimple_3((bool)0);
		XmlNodeInfo_t4030693883 * L_96 = V_2;
		L_96->set_HasElements_4((bool)0);
		XmlNodeInfo_t4030693883 * L_97 = V_2;
		String_t* L_98 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlTextWriter::get_XmlLang() */, __this);
		L_97->set_XmlLang_5(L_98);
		XmlNodeInfo_t4030693883 * L_99 = V_2;
		int32_t L_100 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace() */, __this);
		L_99->set_XmlSpace_6(L_100);
		int32_t L_101 = __this->get_open_count_20();
		__this->set_open_count_20(((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1)));
		bool L_102 = __this->get_namespaces_12();
		if (!L_102)
		{
			goto IL_0327;
		}
	}
	{
		String_t* L_103 = ___namespaceUri2;
		if (!L_103)
		{
			goto IL_0327;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_104 = __this->get_nsmanager_19();
		String_t* L_105 = ___prefix0;
		String_t* L_106 = XmlNamespaceManager_LookupNamespace_m2828740952(L_104, L_105, (bool)0, /*hidden argument*/NULL);
		V_3 = L_106;
		String_t* L_107 = V_3;
		String_t* L_108 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_109 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_107, L_108, /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_0327;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_110 = __this->get_nsmanager_19();
		String_t* L_111 = ___prefix0;
		String_t* L_112 = ___namespaceUri2;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_110, L_111, L_112);
		Stack_t2329662280 * L_113 = __this->get_new_local_namespaces_22();
		String_t* L_114 = ___prefix0;
		VirtActionInvoker1< RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Stack::Push(System.Object) */, L_113, L_114);
	}

IL_0327:
	{
		__this->set_state_17(2);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C"  void XmlTextWriter_CloseStartElement_m3029087518 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_CloseStartElementCore_m1099456942(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_state_17();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		TextWriter_t3478189236 * L_1 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)62));
	}

IL_001f:
	{
		__this->set_state_17(4);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C"  void XmlTextWriter_CloseStartElementCore_m1099456942 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_CloseStartElementCore_m1099456942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		int32_t L_0 = __this->get_state_17();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_0012:
	{
		Stack_t2329662280 * L_1 = __this->get_new_local_namespaces_22();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Stack::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		ArrayList_t2718874744 * L_3 = __this->get_explicit_nsdecls_23();
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		ArrayList_t2718874744 * L_5 = __this->get_explicit_nsdecls_23();
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_5);
	}

IL_003e:
	{
		return;
	}

IL_003f:
	{
		ArrayList_t2718874744 * L_6 = __this->get_explicit_nsdecls_23();
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_0 = L_7;
		goto IL_00ba;
	}

IL_0050:
	{
		Stack_t2329662280 * L_8 = __this->get_new_local_namespaces_22();
		RuntimeObject * L_9 = VirtFuncInvoker0< RuntimeObject * >::Invoke(19 /* System.Object System.Collections.Stack::Pop() */, L_8);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var));
		V_2 = (bool)0;
		V_3 = 0;
		goto IL_0091;
	}

IL_006a:
	{
		ArrayList_t2718874744 * L_10 = __this->get_explicit_nsdecls_23();
		int32_t L_11 = V_3;
		RuntimeObject * L_12 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_10, L_11);
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m920492651(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_00a2;
	}

IL_008d:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_16 = V_3;
		ArrayList_t2718874744 * L_17 = __this->get_explicit_nsdecls_23();
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_006a;
		}
	}

IL_00a2:
	{
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00ba;
	}

IL_00ad:
	{
		ArrayList_t2718874744 * L_20 = __this->get_explicit_nsdecls_23();
		String_t* L_21 = V_1;
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_00ba:
	{
		Stack_t2329662280 * L_22 = __this->get_new_local_namespaces_22();
		int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Stack::get_Count() */, L_22);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_24 = V_0;
		V_4 = L_24;
		goto IL_0180;
	}

IL_00d3:
	{
		ArrayList_t2718874744 * L_25 = __this->get_explicit_nsdecls_23();
		int32_t L_26 = V_4;
		RuntimeObject * L_27 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_25, L_26);
		V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_27, String_t_il2cpp_TypeInfo_var));
		XmlNamespaceManager_t418790500 * L_28 = __this->get_nsmanager_19();
		String_t* L_29 = V_5;
		String_t* L_30 = XmlNamespaceManager_LookupNamespace_m2828740952(L_28, L_29, (bool)0, /*hidden argument*/NULL);
		V_6 = L_30;
		String_t* L_31 = V_6;
		if (L_31)
		{
			goto IL_0103;
		}
	}
	{
		goto IL_017a;
	}

IL_0103:
	{
		String_t* L_32 = V_5;
		int32_t L_33 = String_get_Length_m3847582255(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		TextWriter_t3478189236 * L_34 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteral3073361429);
		TextWriter_t3478189236 * L_35 = __this->get_writer_5();
		String_t* L_36 = V_5;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_35, L_36);
		goto IL_0142;
	}

IL_0132:
	{
		TextWriter_t3478189236 * L_37 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, _stringLiteral2787691749);
	}

IL_0142:
	{
		TextWriter_t3478189236 * L_38 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_38, ((int32_t)61));
		TextWriter_t3478189236 * L_39 = __this->get_writer_5();
		Il2CppChar L_40 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_39, L_40);
		String_t* L_41 = V_6;
		XmlTextWriter_WriteEscapedString_m3514294598(__this, L_41, (bool)1, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_42 = __this->get_writer_5();
		Il2CppChar L_43 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_42, L_43);
	}

IL_017a:
	{
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0180:
	{
		int32_t L_45 = V_4;
		ArrayList_t2718874744 * L_46 = __this->get_explicit_nsdecls_23();
		int32_t L_47 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_46);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_00d3;
		}
	}
	{
		ArrayList_t2718874744 * L_48 = __this->get_explicit_nsdecls_23();
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_48);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C"  void XmlTextWriter_WriteEndElement_m4081619786 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteEndElementCore_m4151593863(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C"  void XmlTextWriter_WriteFullEndElement_m164880516 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteEndElementCore_m4151593863(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C"  void XmlTextWriter_WriteEndElementCore_m4151593863 (XmlTextWriter_t2114213153 * __this, bool ___full0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEndElementCore_m4151593863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeInfo_t4030693883 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_state_17();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_state_17();
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		Exception_t * L_2 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral3333968179, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlTextWriter_WriteEndElementCore_m4151593863_RuntimeMethod_var);
	}

IL_0024:
	{
		int32_t L_3 = __this->get_open_count_20();
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_InvalidOperation_m988191293(__this, _stringLiteral3986749280, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteEndElementCore_m4151593863_RuntimeMethod_var);
	}

IL_003b:
	{
		XmlTextWriter_CloseStartElementCore_m1099456942(__this, /*hidden argument*/NULL);
		XmlNamespaceManager_t418790500 * L_5 = __this->get_nsmanager_19();
		VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_5);
		int32_t L_6 = __this->get_state_17();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0081;
		}
	}
	{
		bool L_7 = ___full0;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		TextWriter_t3478189236 * L_8 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)62));
		goto IL_0081;
	}

IL_0071:
	{
		TextWriter_t3478189236 * L_9 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, _stringLiteral1910861284);
	}

IL_0081:
	{
		bool L_10 = ___full0;
		if (L_10)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_11 = __this->get_state_17();
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0099;
		}
	}

IL_0093:
	{
		XmlTextWriter_WriteIndentEndElement_m1797366262(__this, /*hidden argument*/NULL);
	}

IL_0099:
	{
		XmlNodeInfoU5BU5D_t431163322* L_12 = __this->get_elements_21();
		int32_t L_13 = __this->get_open_count_20();
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		V_1 = L_14;
		__this->set_open_count_20(L_14);
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		XmlNodeInfo_t4030693883 * L_17 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = L_17;
		bool L_18 = ___full0;
		if (L_18)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_19 = __this->get_state_17();
		if ((!(((uint32_t)L_19) == ((uint32_t)4))))
		{
			goto IL_0121;
		}
	}

IL_00c4:
	{
		TextWriter_t3478189236 * L_20 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_20, _stringLiteral3450582932);
		XmlNodeInfo_t4030693883 * L_21 = V_0;
		String_t* L_22 = L_21->get_Prefix_0();
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		TextWriter_t3478189236 * L_24 = __this->get_writer_5();
		XmlNodeInfo_t4030693883 * L_25 = V_0;
		String_t* L_26 = L_25->get_Prefix_0();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_24, L_26);
		TextWriter_t3478189236 * L_27 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_27, ((int32_t)58));
	}

IL_0103:
	{
		TextWriter_t3478189236 * L_28 = __this->get_writer_5();
		XmlNodeInfo_t4030693883 * L_29 = V_0;
		String_t* L_30 = L_29->get_LocalName_1();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, L_30);
		TextWriter_t3478189236 * L_31 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_31, ((int32_t)62));
	}

IL_0121:
	{
		__this->set_state_17(4);
		int32_t L_32 = __this->get_open_count_20();
		if (L_32)
		{
			goto IL_013b;
		}
	}
	{
		__this->set_node_state_18(((int32_t)15));
	}

IL_013b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteStartAttribute_m796971626 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartAttribute_m796971626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	XmlTextWriter_t2114213153 * G_B52_0 = NULL;
	XmlTextWriter_t2114213153 * G_B51_0 = NULL;
	String_t* G_B53_0 = NULL;
	XmlTextWriter_t2114213153 * G_B53_1 = NULL;
	{
		int32_t L_0 = __this->get_state_17();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_0012:
	{
		int32_t L_1 = __this->get_state_17();
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->get_state_17();
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Exception_t * L_3 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral4158462482, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter_WriteStartAttribute_m796971626_RuntimeMethod_var);
	}

IL_0035:
	{
		String_t* L_4 = ___prefix0;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___prefix0 = L_5;
	}

IL_0042:
	{
		V_0 = (bool)0;
		String_t* L_6 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral2829469855, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (bool)1;
		String_t* L_8 = ___prefix0;
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0078;
		}
	}
	{
		String_t* L_10 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_10, _stringLiteral3929236445, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		___prefix0 = _stringLiteral3929236445;
	}

IL_0078:
	{
		goto IL_00ad;
	}

IL_007d:
	{
		String_t* L_12 = ___prefix0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral3929236445, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00ab;
		}
	}
	{
		String_t* L_14 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, _stringLiteral3929236445, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_16 = ___prefix0;
		int32_t L_17 = String_get_Length_m3847582255(L_16, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 0;
	}

IL_00a9:
	{
		G_B18_0 = G_B16_0;
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B18_0 = 1;
	}

IL_00ac:
	{
		V_0 = (bool)G_B18_0;
	}

IL_00ad:
	{
		bool L_18 = __this->get_namespaces_12();
		if (!L_18)
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_19 = ___prefix0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Equality_m920492651(NULL /*static, unused*/, L_19, _stringLiteral2909972470, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00d4;
		}
	}
	{
		___namespaceUri2 = _stringLiteral2984480440;
		goto IL_00f3;
	}

IL_00d4:
	{
		String_t* L_21 = ___namespaceUri2;
		if (L_21)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_22 = V_0;
		if (!L_22)
		{
			goto IL_00ec;
		}
	}
	{
		___namespaceUri2 = _stringLiteral2829469855;
		goto IL_00f3;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___namespaceUri2 = L_23;
	}

IL_00f3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		String_t* L_25 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_25, _stringLiteral2829469855, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3406152438, _stringLiteral2829469855, /*hidden argument*/NULL);
		Exception_t * L_28 = XmlTextWriter_ArgumentError_m3627124320(__this, L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, NULL, XmlTextWriter_WriteStartAttribute_m796971626_RuntimeMethod_var);
	}

IL_011f:
	{
		String_t* L_29 = ___prefix0;
		int32_t L_30 = String_get_Length_m3847582255(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_31 = ___namespaceUri2;
		int32_t L_32 = String_get_Length_m3847582255(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0162;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_33 = __this->get_nsmanager_19();
		String_t* L_34 = ___prefix0;
		String_t* L_35 = XmlNamespaceManager_LookupNamespace_m2828740952(L_33, L_34, (bool)0, /*hidden argument*/NULL);
		___namespaceUri2 = L_35;
		String_t* L_36 = ___namespaceUri2;
		if (!L_36)
		{
			goto IL_0156;
		}
	}
	{
		String_t* L_37 = ___namespaceUri2;
		int32_t L_38 = String_get_Length_m3847582255(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0162;
		}
	}

IL_0156:
	{
		Exception_t * L_39 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral1065548103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, NULL, XmlTextWriter_WriteStartAttribute_m796971626_RuntimeMethod_var);
	}

IL_0162:
	{
		bool L_40 = V_0;
		if (L_40)
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_41 = ___namespaceUri2;
		int32_t L_42 = String_get_Length_m3847582255(L_41, /*hidden argument*/NULL);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_43 = ___prefix0;
		String_t* L_44 = ___localName1;
		String_t* L_45 = ___namespaceUri2;
		String_t* L_46 = XmlTextWriter_DetermineAttributePrefix_m2990155447(__this, L_43, L_44, L_45, /*hidden argument*/NULL);
		___prefix0 = L_46;
	}

IL_017f:
	{
		bool L_47 = __this->get_indent_attributes_30();
		if (!L_47)
		{
			goto IL_0195;
		}
	}
	{
		XmlTextWriter_WriteIndentAttribute_m3288075110(__this, /*hidden argument*/NULL);
		goto IL_01ad;
	}

IL_0195:
	{
		int32_t L_48 = __this->get_state_17();
		if (!L_48)
		{
			goto IL_01ad;
		}
	}
	{
		TextWriter_t3478189236 * L_49 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_49, ((int32_t)32));
	}

IL_01ad:
	{
		String_t* L_50 = ___prefix0;
		int32_t L_51 = String_get_Length_m3847582255(L_50, /*hidden argument*/NULL);
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_01d2;
		}
	}
	{
		TextWriter_t3478189236 * L_52 = __this->get_writer_5();
		String_t* L_53 = ___prefix0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_52, L_53);
		TextWriter_t3478189236 * L_54 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_54, ((int32_t)58));
	}

IL_01d2:
	{
		TextWriter_t3478189236 * L_55 = __this->get_writer_5();
		String_t* L_56 = ___localName1;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_55, L_56);
		TextWriter_t3478189236 * L_57 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_57, ((int32_t)61));
		TextWriter_t3478189236 * L_58 = __this->get_writer_5();
		Il2CppChar L_59 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_58, L_59);
		bool L_60 = V_0;
		if (L_60)
		{
			goto IL_0212;
		}
	}
	{
		String_t* L_61 = ___prefix0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_62 = String_op_Equality_m920492651(NULL /*static, unused*/, L_61, _stringLiteral2909972470, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_028b;
		}
	}

IL_0212:
	{
		StringWriter_t802263757 * L_63 = __this->get_preserver_6();
		if (L_63)
		{
			goto IL_022d;
		}
	}
	{
		StringWriter_t802263757 * L_64 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m1244548890(L_64, /*hidden argument*/NULL);
		__this->set_preserver_6(L_64);
		goto IL_023e;
	}

IL_022d:
	{
		StringWriter_t802263757 * L_65 = __this->get_preserver_6();
		StringBuilder_t * L_66 = VirtFuncInvoker0< StringBuilder_t * >::Invoke(18 /* System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder() */, L_65);
		StringBuilder_set_Length_m1410065908(L_66, 0, /*hidden argument*/NULL);
	}

IL_023e:
	{
		StringWriter_t802263757 * L_67 = __this->get_preserver_6();
		__this->set_writer_5(L_67);
		bool L_68 = V_0;
		if (L_68)
		{
			goto IL_0263;
		}
	}
	{
		__this->set_is_preserved_xmlns_8((bool)0);
		String_t* L_69 = ___localName1;
		__this->set_preserved_name_7(L_69);
		goto IL_028b;
	}

IL_0263:
	{
		__this->set_is_preserved_xmlns_8((bool)1);
		String_t* L_70 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_71 = String_op_Equality_m920492651(NULL /*static, unused*/, L_70, _stringLiteral3929236445, /*hidden argument*/NULL);
		G_B51_0 = __this;
		if (!L_71)
		{
			G_B52_0 = __this;
			goto IL_0285;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B53_0 = L_72;
		G_B53_1 = G_B51_0;
		goto IL_0286;
	}

IL_0285:
	{
		String_t* L_73 = ___localName1;
		G_B53_0 = L_73;
		G_B53_1 = G_B52_0;
	}

IL_0286:
	{
		G_B53_1->set_preserved_name_7(G_B53_0);
	}

IL_028b:
	{
		__this->set_state_17(3);
		return;
	}
}
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C"  String_t* XmlTextWriter_DetermineAttributePrefix_m2990155447 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_DetermineAttributePrefix_m2990155447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		V_0 = (bool)0;
		String_t* L_0 = ___prefix0;
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = ___ns2;
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_2);
		___prefix0 = L_3;
		String_t* L_4 = ___prefix0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_5 = ___prefix0;
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_7 = ___prefix0;
		return L_7;
	}

IL_002a:
	{
		V_0 = (bool)1;
		goto IL_009a;
	}

IL_0031:
	{
		XmlNamespaceManager_t418790500 * L_8 = __this->get_nsmanager_19();
		XmlNameTable_t71772148 * L_9 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(7 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_8);
		String_t* L_10 = ___prefix0;
		String_t* L_11 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_9, L_10);
		___prefix0 = L_11;
		XmlNamespaceManager_t418790500 * L_12 = __this->get_nsmanager_19();
		String_t* L_13 = ___prefix0;
		String_t* L_14 = XmlNamespaceManager_LookupNamespace_m2828740952(L_12, L_13, (bool)1, /*hidden argument*/NULL);
		V_1 = L_14;
		String_t* L_15 = V_1;
		String_t* L_16 = ___ns2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m920492651(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_18 = ___prefix0;
		return L_18;
	}

IL_0060:
	{
		String_t* L_19 = V_1;
		if (!L_19)
		{
			goto IL_009a;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_20 = __this->get_nsmanager_19();
		String_t* L_21 = ___prefix0;
		String_t* L_22 = V_1;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String) */, L_20, L_21, L_22);
		XmlNamespaceManager_t418790500 * L_23 = __this->get_nsmanager_19();
		String_t* L_24 = ___prefix0;
		String_t* L_25 = XmlNamespaceManager_LookupNamespace_m2828740952(L_23, L_24, (bool)1, /*hidden argument*/NULL);
		String_t* L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		V_0 = (bool)1;
		XmlNamespaceManager_t418790500 * L_28 = __this->get_nsmanager_19();
		String_t* L_29 = ___prefix0;
		String_t* L_30 = V_1;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_28, L_29, L_30);
	}

IL_009a:
	{
		bool L_31 = V_0;
		if (!L_31)
		{
			goto IL_00aa;
		}
	}
	{
		String_t* L_32 = ___ns2;
		String_t* L_33 = XmlTextWriter_MockupPrefix_m1608841972(__this, L_32, (bool)1, /*hidden argument*/NULL);
		___prefix0 = L_33;
	}

IL_00aa:
	{
		Stack_t2329662280 * L_34 = __this->get_new_local_namespaces_22();
		String_t* L_35 = ___prefix0;
		VirtActionInvoker1< RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Stack::Push(System.Object) */, L_34, L_35);
		XmlNamespaceManager_t418790500 * L_36 = __this->get_nsmanager_19();
		String_t* L_37 = ___prefix0;
		String_t* L_38 = ___ns2;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_36, L_37, L_38);
		String_t* L_39 = ___prefix0;
		return L_39;
	}
}
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C"  String_t* XmlTextWriter_MockupPrefix_m1608841972 (XmlTextWriter_t2114213153 * __this, String_t* ___ns0, bool ___skipLookup1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_MockupPrefix_m1608841972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___skipLookup1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_1 = ___ns0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_1);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4 = V_0;
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_0028:
	{
		V_1 = 1;
		goto IL_00b2;
	}

IL_002f:
	{
		ObjectU5BU5D_t2843939325* L_7 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		int32_t L_8 = __this->get_open_count_20();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		String_t* L_15 = StringUtil_Format_m4156193709(NULL /*static, unused*/, _stringLiteral3967258293, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		Stack_t2329662280 * L_16 = __this->get_new_local_namespaces_22();
		String_t* L_17 = V_0;
		bool L_18 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(15 /* System.Boolean System.Collections.Stack::Contains(System.Object) */, L_16, L_17);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00ae;
	}

IL_006d:
	{
		XmlNamespaceManager_t418790500 * L_19 = __this->get_nsmanager_19();
		XmlNamespaceManager_t418790500 * L_20 = __this->get_nsmanager_19();
		XmlNameTable_t71772148 * L_21 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(7 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_20);
		String_t* L_22 = V_0;
		String_t* L_23 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_21, L_22);
		String_t* L_24 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(10 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_19, L_23);
		if (!L_24)
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00ae;
	}

IL_0093:
	{
		XmlNamespaceManager_t418790500 * L_25 = __this->get_nsmanager_19();
		String_t* L_26 = V_0;
		String_t* L_27 = ___ns0;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_25, L_26, L_27);
		Stack_t2329662280 * L_28 = __this->get_new_local_namespaces_22();
		String_t* L_29 = V_0;
		VirtActionInvoker1< RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Stack::Push(System.Object) */, L_28, L_29);
		String_t* L_30 = V_0;
		return L_30;
	}

IL_00ae:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00b2:
	{
		goto IL_002f;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
extern "C"  void XmlTextWriter_WriteEndAttribute_m380495009 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEndAttribute_m380495009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t2736202052 * V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->get_state_17();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral1135920161, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteEndAttribute_m380495009_RuntimeMethod_var);
	}

IL_0018:
	{
		TextWriter_t3478189236 * L_2 = __this->get_writer_5();
		StringWriter_t802263757 * L_3 = __this->get_preserver_6();
		if ((!(((RuntimeObject*)(TextWriter_t3478189236 *)L_2) == ((RuntimeObject*)(StringWriter_t802263757 *)L_3))))
		{
			goto IL_02e2;
		}
	}
	{
		TextWriter_t3478189236 * L_4 = __this->get_source_4();
		__this->set_writer_5(L_4);
		StringWriter_t802263757 * L_5 = __this->get_preserver_6();
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_5);
		V_0 = L_6;
		bool L_7 = __this->get_is_preserved_xmlns_8();
		if (!L_7)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_8 = __this->get_preserved_name_7();
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_10 = V_0;
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		Exception_t * L_12 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral1168662249, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, XmlTextWriter_WriteEndAttribute_m380495009_RuntimeMethod_var);
	}

IL_0074:
	{
		XmlNamespaceManager_t418790500 * L_13 = __this->get_nsmanager_19();
		String_t* L_14 = __this->get_preserved_name_7();
		String_t* L_15 = XmlNamespaceManager_LookupNamespace_m2828740952(L_13, L_14, (bool)0, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = __this->get_namespace_handling_24();
		if (!((int32_t)((int32_t)L_16&(int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_17 = V_1;
		String_t* L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b2;
		}
	}

IL_00a0:
	{
		ArrayList_t2718874744 * L_20 = __this->get_explicit_nsdecls_23();
		String_t* L_21 = __this->get_preserved_name_7();
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_00b2:
	{
		int32_t L_22 = __this->get_open_count_20();
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_018c;
		}
	}
	{
		bool L_23 = __this->get_v2_32();
		if (!L_23)
		{
			goto IL_0122;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_24 = __this->get_elements_21();
		int32_t L_25 = __this->get_open_count_20();
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		String_t* L_28 = L_27->get_Prefix_0();
		String_t* L_29 = __this->get_preserved_name_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Equality_m920492651(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0122;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_31 = __this->get_elements_21();
		int32_t L_32 = __this->get_open_count_20();
		int32_t L_33 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		String_t* L_35 = L_34->get_NS_2();
		String_t* L_36 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_38 = __this->get_preserved_name_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2919775337, L_38, /*hidden argument*/NULL);
		XmlException_t1761730631 * L_40 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, NULL, XmlTextWriter_WriteEndAttribute_m380495009_RuntimeMethod_var);
	}

IL_0122:
	{
		XmlNodeInfoU5BU5D_t431163322* L_41 = __this->get_elements_21();
		int32_t L_42 = __this->get_open_count_20();
		int32_t L_43 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		String_t* L_45 = L_44->get_NS_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_47 = String_op_Equality_m920492651(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_016e;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_48 = __this->get_elements_21();
		int32_t L_49 = __this->get_open_count_20();
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		String_t* L_52 = L_51->get_Prefix_0();
		String_t* L_53 = __this->get_preserved_name_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_54 = String_op_Equality_m920492651(NULL /*static, unused*/, L_52, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_018c;
	}

IL_016e:
	{
		String_t* L_55 = V_1;
		String_t* L_56 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_57 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_55, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_018c;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_58 = __this->get_nsmanager_19();
		String_t* L_59 = __this->get_preserved_name_7();
		String_t* L_60 = V_0;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_58, L_59, L_60);
	}

IL_018c:
	{
		goto IL_02d6;
	}

IL_0191:
	{
		String_t* L_61 = __this->get_preserved_name_7();
		V_2 = L_61;
		String_t* L_62 = V_2;
		if (!L_62)
		{
			goto IL_02d6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_63 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map54_34();
		if (L_63)
		{
			goto IL_01cd;
		}
	}
	{
		Dictionary_2_t2736202052 * L_64 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_64, 2, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_3 = L_64;
		Dictionary_2_t2736202052 * L_65 = V_3;
		Dictionary_2_Add_m282647386(L_65, _stringLiteral2409271576, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_66 = V_3;
		Dictionary_2_Add_m282647386(L_66, _stringLiteral1613539661, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_67 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map54_34(L_67);
	}

IL_01cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_68 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map54_34();
		String_t* L_69 = V_2;
		bool L_70 = Dictionary_2_TryGetValue_m1013208020(L_68, L_69, (int32_t*)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_70)
		{
			goto IL_02d6;
		}
	}
	{
		int32_t L_71 = V_4;
		if (!L_71)
		{
			goto IL_01f3;
		}
	}
	{
		int32_t L_72 = V_4;
		if ((((int32_t)L_72) == ((int32_t)1)))
		{
			goto IL_0219;
		}
	}
	{
		goto IL_02d6;
	}

IL_01f3:
	{
		int32_t L_73 = __this->get_open_count_20();
		if ((((int32_t)L_73) <= ((int32_t)0)))
		{
			goto IL_0214;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_74 = __this->get_elements_21();
		int32_t L_75 = __this->get_open_count_20();
		int32_t L_76 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		String_t* L_78 = V_0;
		L_77->set_XmlLang_5(L_78);
	}

IL_0214:
	{
		goto IL_02d6;
	}

IL_0219:
	{
		String_t* L_79 = V_0;
		V_5 = L_79;
		String_t* L_80 = V_5;
		if (!L_80)
		{
			goto IL_02c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_81 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map53_33();
		if (L_81)
		{
			goto IL_0252;
		}
	}
	{
		Dictionary_2_t2736202052 * L_82 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_82, 2, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_3 = L_82;
		Dictionary_2_t2736202052 * L_83 = V_3;
		Dictionary_2_Add_m282647386(L_83, _stringLiteral1948332219, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_84 = V_3;
		Dictionary_2_Add_m282647386(L_84, _stringLiteral3137061838, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_85 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map53_33(L_85);
	}

IL_0252:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_86 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map53_33();
		String_t* L_87 = V_5;
		bool L_88 = Dictionary_2_TryGetValue_m1013208020(L_86, L_87, (int32_t*)(&V_6), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_88)
		{
			goto IL_02c5;
		}
	}
	{
		int32_t L_89 = V_6;
		if (!L_89)
		{
			goto IL_0279;
		}
	}
	{
		int32_t L_90 = V_6;
		if ((((int32_t)L_90) == ((int32_t)1)))
		{
			goto IL_029f;
		}
	}
	{
		goto IL_02c5;
	}

IL_0279:
	{
		int32_t L_91 = __this->get_open_count_20();
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_029a;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_92 = __this->get_elements_21();
		int32_t L_93 = __this->get_open_count_20();
		int32_t L_94 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_95 = (L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		L_95->set_XmlSpace_6(1);
	}

IL_029a:
	{
		goto IL_02d1;
	}

IL_029f:
	{
		int32_t L_96 = __this->get_open_count_20();
		if ((((int32_t)L_96) <= ((int32_t)0)))
		{
			goto IL_02c0;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_97 = __this->get_elements_21();
		int32_t L_98 = __this->get_open_count_20();
		int32_t L_99 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_100 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		L_100->set_XmlSpace_6(2);
	}

IL_02c0:
	{
		goto IL_02d1;
	}

IL_02c5:
	{
		Exception_t * L_101 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral162476857, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, NULL, XmlTextWriter_WriteEndAttribute_m380495009_RuntimeMethod_var);
	}

IL_02d1:
	{
		goto IL_02d6;
	}

IL_02d6:
	{
		TextWriter_t3478189236 * L_102 = __this->get_writer_5();
		String_t* L_103 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_102, L_103);
	}

IL_02e2:
	{
		TextWriter_t3478189236 * L_104 = __this->get_writer_5();
		Il2CppChar L_105 = __this->get_quote_char_31();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_104, L_105);
		__this->set_state_17(2);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern "C"  void XmlTextWriter_WriteComment_m3551275356 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteComment_m3551275356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral3987835854, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteComment_m3551275356_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___text0;
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4 = ___text0;
		String_t* L_5 = ___text0;
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		Il2CppChar L_7 = String_get_Chars_m2986988803(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_003f;
		}
	}
	{
		Exception_t * L_8 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral4015390292, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, XmlTextWriter_WriteComment_m3551275356_RuntimeMethod_var);
	}

IL_003f:
	{
		String_t* L_9 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		int32_t L_10 = StringUtil_IndexOf_m1748403443(NULL /*static, unused*/, L_9, _stringLiteral3450713987, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		Exception_t * L_11 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral4102181145, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, XmlTextWriter_WriteComment_m3551275356_RuntimeMethod_var);
	}

IL_005c:
	{
		int32_t L_12 = __this->get_state_17();
		if ((((int32_t)L_12) == ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_13 = __this->get_state_17();
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_007a;
		}
	}

IL_0074:
	{
		XmlTextWriter_CloseStartElement_m3029087518(__this, /*hidden argument*/NULL);
	}

IL_007a:
	{
		XmlTextWriter_WriteIndent_m534435357(__this, /*hidden argument*/NULL);
		XmlTextWriter_ShiftStateTopLevel_m3589898271(__this, _stringLiteral3796264707, (bool)0, (bool)0, (bool)0, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_14 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_14, _stringLiteral792871693);
		TextWriter_t3478189236 * L_15 = __this->get_writer_5();
		String_t* L_16 = ___text0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
		TextWriter_t3478189236 * L_17 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_17, _stringLiteral1910992359);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern "C"  void XmlTextWriter_WriteProcessingInstruction_m1814082884 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, String_t* ___text1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteProcessingInstruction_m1814082884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteProcessingInstruction_m1814082884_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___text1;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Exception_t * L_3 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral3987835854, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter_WriteProcessingInstruction_m1814082884_RuntimeMethod_var);
	}

IL_0024:
	{
		XmlTextWriter_WriteIndent_m534435357(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_5 = XmlChar_IsName_m846619221(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		Exception_t * L_6 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral690829814, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlTextWriter_WriteProcessingInstruction_m1814082884_RuntimeMethod_var);
	}

IL_0041:
	{
		String_t* L_7 = ___text1;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		int32_t L_8 = StringUtil_IndexOf_m1748403443(NULL /*static, unused*/, L_7, _stringLiteral3451697041, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Exception_t * L_9 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral4143504235, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, XmlTextWriter_WriteProcessingInstruction_m1814082884_RuntimeMethod_var);
	}

IL_005e:
	{
		String_t* L_10 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, _stringLiteral2909972470, /*hidden argument*/NULL);
		XmlTextWriter_ShiftStateTopLevel_m3589898271(__this, _stringLiteral3127550563, (bool)0, L_11, (bool)0, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_12 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral3451631508);
		TextWriter_t3478189236 * L_13 = __this->get_writer_5();
		String_t* L_14 = ___name0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_14);
		TextWriter_t3478189236 * L_15 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_15, ((int32_t)32));
		TextWriter_t3478189236 * L_16 = __this->get_writer_5();
		String_t* L_17 = ___text1;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, L_17);
		TextWriter_t3478189236 * L_18 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteral3451697041);
		int32_t L_19 = __this->get_state_17();
		if (L_19)
		{
			goto IL_00cd;
		}
	}
	{
		__this->set_state_17(1);
	}

IL_00cd:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern "C"  void XmlTextWriter_WriteWhitespace_m1664061271 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteWhitespace_m1664061271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral3987835854, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteWhitespace_m1664061271_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___text0;
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		int32_t L_5 = XmlChar_IndexOfNonWhitespace_m2684163220(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		Exception_t * L_6 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral247049230, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlTextWriter_WriteWhitespace_m1664061271_RuntimeMethod_var);
	}

IL_0035:
	{
		XmlTextWriter_ShiftStateTopLevel_m3589898271(__this, _stringLiteral1557367511, (bool)1, (bool)0, (bool)1, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_7 = __this->get_writer_5();
		String_t* L_8 = ___text0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern "C"  void XmlTextWriter_WriteCData_m644505252 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteCData_m644505252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___text0 = L_1;
	}

IL_000d:
	{
		XmlTextWriter_ShiftStateContent_m1491671115(__this, _stringLiteral2359536473, (bool)0, /*hidden argument*/NULL);
		String_t* L_2 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		int32_t L_3 = StringUtil_IndexOf_m1748403443(NULL /*static, unused*/, L_2, _stringLiteral1918332503, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral2919660641, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteCData_m644505252_RuntimeMethod_var);
	}

IL_0036:
	{
		TextWriter_t3478189236 * L_5 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral191191352);
		String_t* L_6 = ___text0;
		XmlTextWriter_WriteCheckedString_m2937191976(__this, L_6, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_7 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, _stringLiteral1918332503);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern "C"  void XmlTextWriter_WriteString_m406191177 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteString_m406191177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = ___text0;
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = __this->get_v2_32();
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		XmlTextWriter_ShiftStateContent_m1491671115(__this, _stringLiteral3987835886, (bool)1, /*hidden argument*/NULL);
		String_t* L_4 = ___text0;
		int32_t L_5 = __this->get_state_17();
		XmlTextWriter_WriteEscapedString_m3514294598(__this, L_4, (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern "C"  void XmlTextWriter_WriteEntityRef_m586114214 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEntityRef_m586114214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteEntityRef_m586114214_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_m846619221(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral4206759088, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteEntityRef_m586114214_RuntimeMethod_var);
	}

IL_0029:
	{
		XmlTextWriter_ShiftStateContent_m1491671115(__this, _stringLiteral4078869393, (bool)1, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_5 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)38));
		TextWriter_t3478189236 * L_6 = __this->get_writer_5();
		String_t* L_7 = ___name0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_7);
		TextWriter_t3478189236 * L_8 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)59));
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C"  void XmlTextWriter_WriteIndent_m534435357 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteIndentCore_m729468996(__this, 0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C"  void XmlTextWriter_WriteIndentEndElement_m1797366262 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteIndentCore_m729468996(__this, (-1), (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C"  void XmlTextWriter_WriteIndentAttribute_m3288075110 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = XmlTextWriter_WriteIndentCore_m729468996(__this, 0, (bool)1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		TextWriter_t3478189236 * L_1 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)32));
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C"  bool XmlTextWriter_WriteIndentCore_m729468996 (XmlTextWriter_t2114213153 * __this, int32_t ___nestFix0, bool ___attribute1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_indent_25();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		int32_t L_1 = __this->get_open_count_20();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0039;
	}

IL_001b:
	{
		bool L_2 = ___attribute1;
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_3 = __this->get_elements_21();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		XmlNodeInfo_t4030693883 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7 = L_6->get_HasSimple_3();
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_10 = __this->get_state_17();
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_t3478189236 * L_11 = __this->get_writer_5();
		String_t* L_12 = __this->get_newline_29();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_12);
	}

IL_005c:
	{
		V_1 = 0;
		goto IL_0078;
	}

IL_0063:
	{
		TextWriter_t3478189236 * L_13 = __this->get_writer_5();
		String_t* L_14 = __this->get_indent_string_28();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = __this->get_open_count_20();
		int32_t L_18 = ___nestFix0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)))))
		{
			goto IL_0063;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C"  void XmlTextWriter_OutputAutoStartDocument_m96032915 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_state_17();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		XmlTextWriter_WriteStartDocumentCore_m3985718073(__this, (bool)0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateTopLevel_m3589898271 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, bool ___allowAttribute1, bool ___dontCheckXmlDecl2, bool ___isCharacter3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_ShiftStateTopLevel_m3589898271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_17();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00a1;
			}
			case 2:
			{
				goto IL_0077;
			}
			case 3:
			{
				goto IL_0067;
			}
			case 4:
			{
				goto IL_008f;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_00a1;
	}

IL_002e:
	{
		String_t* L_2 = ___occured0;
		Exception_t * L_3 = XmlTextWriter_StateError_m571999665(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter_ShiftStateTopLevel_m3589898271_RuntimeMethod_var);
	}

IL_0036:
	{
		bool L_4 = ___isCharacter3;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_5 = __this->get_xmldecl_state_13();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		bool L_6 = ___dontCheckXmlDecl2;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m96032915(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		__this->set_state_17(1);
		goto IL_00a1;
	}

IL_0067:
	{
		bool L_7 = ___allowAttribute1;
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		goto IL_00a1;
	}

IL_0072:
	{
		goto IL_002e;
	}

IL_0077:
	{
		bool L_8 = ___isCharacter3;
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
	}

IL_0084:
	{
		XmlTextWriter_CloseStartElement_m3029087518(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008f:
	{
		bool L_9 = ___isCharacter3;
		if (!L_9)
		{
			goto IL_009c;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
	}

IL_009c:
	{
		goto IL_00a1;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C"  void XmlTextWriter_CheckMixedContentState_m804091766 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_open_count_20();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_1 = __this->get_elements_21();
		int32_t L_2 = __this->get_open_count_20();
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		L_4->set_HasSimple_3((bool)1);
	}

IL_0021:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateContent_m1491671115 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, bool ___allowAttribute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_ShiftStateContent_m1491671115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_17();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0085;
			}
			case 3:
			{
				goto IL_0075;
			}
			case 4:
			{
				goto IL_0096;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_00a1;
	}

IL_002e:
	{
		String_t* L_2 = ___occured0;
		Exception_t * L_3 = XmlTextWriter_StateError_m571999665(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter_ShiftStateContent_m1491671115_RuntimeMethod_var);
	}

IL_0036:
	{
		bool L_4 = __this->get_allow_doc_fragment_9();
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = __this->get_is_document_entity_16();
		if (!L_5)
		{
			goto IL_0051;
		}
	}

IL_004c:
	{
		goto IL_002e;
	}

IL_0051:
	{
		int32_t L_6 = __this->get_xmldecl_state_13();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0063;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m96032915(__this, /*hidden argument*/NULL);
	}

IL_0063:
	{
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
		__this->set_state_17(4);
		goto IL_00a1;
	}

IL_0075:
	{
		bool L_7 = ___allowAttribute1;
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00a1;
	}

IL_0080:
	{
		goto IL_002e;
	}

IL_0085:
	{
		XmlTextWriter_CloseStartElement_m3029087518(__this, /*hidden argument*/NULL);
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0096:
	{
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedString_m3514294598 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, bool ___isAttribute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEscapedString_m3514294598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	CharU5BU5D_t3528271667* V_2 = NULL;
	CharU5BU5D_t3528271667* G_B3_0 = NULL;
	{
		bool L_0 = ___isAttribute1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_1 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_escaped_attr_chars_2();
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_2 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_escaped_text_chars_1();
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		String_t* L_3 = ___text0;
		CharU5BU5D_t3528271667* L_4 = V_0;
		int32_t L_5 = String_IndexOfAny_m4159774896(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_7 = ___text0;
		CharU5BU5D_t3528271667* L_8 = String_ToCharArray_m1492846834(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		CharU5BU5D_t3528271667* L_9 = V_2;
		int32_t L_10 = V_1;
		XmlTextWriter_WriteCheckedBuffer_m275259173(__this, L_9, 0, L_10, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_11 = V_2;
		int32_t L_12 = V_1;
		CharU5BU5D_t3528271667* L_13 = V_2;
		int32_t L_14 = V_1;
		bool L_15 = ___isAttribute1;
		XmlTextWriter_WriteEscapedBuffer_m903990798(__this, L_11, L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), (int32_t)L_14)), L_15, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0048:
	{
		String_t* L_16 = ___text0;
		XmlTextWriter_WriteCheckedString_m2937191976(__this, L_16, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C"  void XmlTextWriter_WriteCheckedString_m2937191976 (XmlTextWriter_t2114213153 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteCheckedString_m2937191976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t3528271667* V_1 = NULL;
	{
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		int32_t L_1 = XmlChar_IndexOfInvalid_m478649474(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_3 = ___s0;
		CharU5BU5D_t3528271667* L_4 = String_ToCharArray_m1492846834(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		TextWriter_t3478189236 * L_5 = __this->get_writer_5();
		CharU5BU5D_t3528271667* L_6 = V_1;
		int32_t L_7 = V_0;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		CharU5BU5D_t3528271667* L_8 = V_1;
		int32_t L_9 = V_0;
		CharU5BU5D_t3528271667* L_10 = V_1;
		int32_t L_11 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m275259173(__this, L_8, L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), (int32_t)L_11)), /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0036:
	{
		TextWriter_t3478189236 * L_12 = __this->get_writer_5();
		String_t* L_13 = ___s0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, L_13);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C"  void XmlTextWriter_WriteCheckedBuffer_m275259173 (XmlTextWriter_t2114213153 * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___idx1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteCheckedBuffer_m275259173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___idx1;
		V_0 = L_0;
		int32_t L_1 = ___idx1;
		int32_t L_2 = ___length2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		goto IL_0096;
	}

IL_000b:
	{
		bool L_3 = __this->get_check_character_validity_14();
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = ___idx1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		CharU5BU5D_t3528271667* L_7 = ___text0;
		int32_t L_8 = ___idx1;
		int32_t L_9 = L_8;
		uint16_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ((int32_t)L_10);
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3560330814, L_6, L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = XmlTextWriter_ArgumentError_m3627124320(__this, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, XmlTextWriter_WriteCheckedBuffer_m275259173_RuntimeMethod_var);
	}

IL_0035:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___idx1;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_004c;
		}
	}
	{
		TextWriter_t3478189236 * L_17 = __this->get_writer_5();
		CharU5BU5D_t3528271667* L_18 = ___text0;
		int32_t L_19 = V_0;
		int32_t L_20 = ___idx1;
		int32_t L_21 = V_0;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_17, L_18, L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)));
	}

IL_004c:
	{
		TextWriter_t3478189236 * L_22 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, _stringLiteral4162292604);
		TextWriter_t3478189236 * L_23 = __this->get_writer_5();
		CharU5BU5D_t3528271667* L_24 = ___text0;
		int32_t L_25 = ___idx1;
		int32_t L_26 = L_25;
		uint16_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_2 = L_27;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_28 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_29 = Int32_ToString_m2507389746((int32_t*)(&V_2), _stringLiteral3452614648, L_28, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_29);
		TextWriter_t3478189236 * L_30 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_30, ((int32_t)59));
		int32_t L_31 = ___length2;
		int32_t L_32 = ___idx1;
		int32_t L_33 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33)), (int32_t)1))));
		int32_t L_34 = ___idx1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0096:
	{
		CharU5BU5D_t3528271667* L_35 = ___text0;
		int32_t L_36 = V_0;
		int32_t L_37 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		int32_t L_38 = XmlChar_IndexOfInvalid_m211553919(NULL /*static, unused*/, L_35, L_36, L_37, (bool)1, /*hidden argument*/NULL);
		int32_t L_39 = L_38;
		___idx1 = L_39;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_00bf;
		}
	}
	{
		TextWriter_t3478189236 * L_42 = __this->get_writer_5();
		CharU5BU5D_t3528271667* L_43 = ___text0;
		int32_t L_44 = V_0;
		int32_t L_45 = V_1;
		int32_t L_46 = V_0;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_42, L_43, L_44, ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)L_46)));
	}

IL_00bf:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedBuffer_m903990798 (XmlTextWriter_t2114213153 * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___index1, int32_t ___length2, bool ___isAttribute3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEscapedBuffer_m903990798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	TextWriter_t3478189236 * G_B30_0 = NULL;
	TextWriter_t3478189236 * G_B29_0 = NULL;
	String_t* G_B31_0 = NULL;
	TextWriter_t3478189236 * G_B31_1 = NULL;
	TextWriter_t3478189236 * G_B37_0 = NULL;
	TextWriter_t3478189236 * G_B36_0 = NULL;
	String_t* G_B38_0 = NULL;
	TextWriter_t3478189236 * G_B38_1 = NULL;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___length2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = V_0;
		V_2 = L_3;
		goto IL_0231;
	}

IL_000d:
	{
		CharU5BU5D_t3528271667* L_4 = ___text0;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Il2CppChar L_8 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_0139;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_0032;
			}
			case 4:
			{
				goto IL_006a;
			}
			case 5:
			{
				goto IL_0139;
			}
		}
	}

IL_0032:
	{
		Il2CppChar L_9 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0174;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0158;
			}
		}
	}

IL_004b:
	{
		Il2CppChar L_10 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)60))))
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_022d;
	}

IL_006a:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_007c;
		}
	}
	{
		CharU5BU5D_t3528271667* L_13 = ___text0;
		int32_t L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m275259173(__this, L_13, L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), /*hidden argument*/NULL);
	}

IL_007c:
	{
		TextWriter_t3478189236 * L_17 = __this->get_writer_5();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, ((int32_t)38));
		CharU5BU5D_t3528271667* L_18 = ___text0;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		uint16_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = L_21;
		Il2CppChar L_22 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_011f;
			}
			case 1:
			{
				goto IL_00b0;
			}
			case 2:
			{
				goto IL_00b0;
			}
			case 3:
			{
				goto IL_00b0;
			}
			case 4:
			{
				goto IL_00cb;
			}
			case 5:
			{
				goto IL_010a;
			}
		}
	}

IL_00b0:
	{
		Il2CppChar L_23 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)((int32_t)60))))
		{
			case 0:
			{
				goto IL_00e0;
			}
			case 1:
			{
				goto IL_0134;
			}
			case 2:
			{
				goto IL_00f5;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_00cb:
	{
		TextWriter_t3478189236 * L_24 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_24, _stringLiteral272773273);
		goto IL_0134;
	}

IL_00e0:
	{
		TextWriter_t3478189236 * L_25 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_25, _stringLiteral2319061079);
		goto IL_0134;
	}

IL_00f5:
	{
		TextWriter_t3478189236 * L_26 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_26, _stringLiteral2319061068);
		goto IL_0134;
	}

IL_010a:
	{
		TextWriter_t3478189236 * L_27 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_27, _stringLiteral3509435951);
		goto IL_0134;
	}

IL_011f:
	{
		TextWriter_t3478189236 * L_28 = __this->get_writer_5();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, _stringLiteral1159970975);
		goto IL_0134;
	}

IL_0134:
	{
		goto IL_0229;
	}

IL_0139:
	{
		bool L_29 = ___isAttribute3;
		if (!L_29)
		{
			goto IL_0153;
		}
	}
	{
		CharU5BU5D_t3528271667* L_30 = ___text0;
		int32_t L_31 = V_2;
		int32_t L_32 = L_31;
		uint16_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		Il2CppChar L_34 = __this->get_quote_char_31();
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0153;
		}
	}
	{
		goto IL_006a;
	}

IL_0153:
	{
		goto IL_022d;
	}

IL_0158:
	{
		int32_t L_35 = V_2;
		int32_t L_36 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1))) >= ((int32_t)L_36)))
		{
			goto IL_016f;
		}
	}
	{
		CharU5BU5D_t3528271667* L_37 = ___text0;
		int32_t L_38 = V_2;
		int32_t L_39 = L_38;
		uint16_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_016f;
		}
	}
	{
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_016f:
	{
		goto IL_0174;
	}

IL_0174:
	{
		int32_t L_42 = V_0;
		int32_t L_43 = V_2;
		if ((((int32_t)L_42) >= ((int32_t)L_43)))
		{
			goto IL_0186;
		}
	}
	{
		CharU5BU5D_t3528271667* L_44 = ___text0;
		int32_t L_45 = V_0;
		int32_t L_46 = V_2;
		int32_t L_47 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m275259173(__this, L_44, L_45, ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), /*hidden argument*/NULL);
	}

IL_0186:
	{
		bool L_48 = ___isAttribute3;
		if (!L_48)
		{
			goto IL_01b6;
		}
	}
	{
		TextWriter_t3478189236 * L_49 = __this->get_writer_5();
		CharU5BU5D_t3528271667* L_50 = ___text0;
		int32_t L_51 = V_2;
		int32_t L_52 = L_51;
		uint16_t L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		G_B29_0 = L_49;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)13)))))
		{
			G_B30_0 = L_49;
			goto IL_01a7;
		}
	}
	{
		G_B31_0 = _stringLiteral1415199655;
		G_B31_1 = G_B29_0;
		goto IL_01ac;
	}

IL_01a7:
	{
		G_B31_0 = _stringLiteral4136188839;
		G_B31_1 = G_B30_0;
	}

IL_01ac:
	{
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B31_1, G_B31_0);
		goto IL_0229;
	}

IL_01b6:
	{
		int32_t L_54 = __this->get_newline_handling_15();
		V_5 = L_54;
		int32_t L_55 = V_5;
		if (!L_55)
		{
			goto IL_01fb;
		}
	}
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) == ((int32_t)1)))
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_0211;
	}

IL_01d2:
	{
		TextWriter_t3478189236 * L_57 = __this->get_writer_5();
		CharU5BU5D_t3528271667* L_58 = ___text0;
		int32_t L_59 = V_2;
		int32_t L_60 = L_59;
		uint16_t L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		G_B36_0 = L_57;
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)13)))))
		{
			G_B37_0 = L_57;
			goto IL_01ec;
		}
	}
	{
		G_B38_0 = _stringLiteral1415199655;
		G_B38_1 = G_B36_0;
		goto IL_01f1;
	}

IL_01ec:
	{
		G_B38_0 = _stringLiteral4136188839;
		G_B38_1 = G_B37_0;
	}

IL_01f1:
	{
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B38_1, G_B38_0);
		goto IL_0224;
	}

IL_01fb:
	{
		TextWriter_t3478189236 * L_62 = __this->get_writer_5();
		String_t* L_63 = __this->get_newline_29();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_62, L_63);
		goto IL_0224;
	}

IL_0211:
	{
		TextWriter_t3478189236 * L_64 = __this->get_writer_5();
		CharU5BU5D_t3528271667* L_65 = ___text0;
		int32_t L_66 = V_2;
		int32_t L_67 = L_66;
		uint16_t L_68 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_64, L_68);
		goto IL_0224;
	}

IL_0224:
	{
		goto IL_0229;
	}

IL_0229:
	{
		int32_t L_69 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_022d:
	{
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0231:
	{
		int32_t L_71 = V_2;
		int32_t L_72 = V_1;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_73 = V_0;
		int32_t L_74 = V_1;
		if ((((int32_t)L_73) >= ((int32_t)L_74)))
		{
			goto IL_024a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_75 = ___text0;
		int32_t L_76 = V_0;
		int32_t L_77 = V_1;
		int32_t L_78 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m275259173(__this, L_75, L_76, ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)L_78)), /*hidden argument*/NULL);
	}

IL_024a:
	{
		return;
	}
}
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C"  Exception_t * XmlTextWriter_ArgumentError_m3627124320 (XmlTextWriter_t2114213153 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_ArgumentError_m3627124320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_state_17(6);
		String_t* L_0 = ___msg0;
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C"  Exception_t * XmlTextWriter_InvalidOperation_m988191293 (XmlTextWriter_t2114213153 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_InvalidOperation_m988191293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_state_17(6);
		String_t* L_0 = ___msg0;
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C"  Exception_t * XmlTextWriter_StateError_m571999665 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_StateError_m571999665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___occured0;
		int32_t L_1 = __this->get_state_17();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(WriteState_t3983380671_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral592849640, L_0, L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = XmlTextWriter_InvalidOperation_m988191293(__this, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XmlTextWriter/StringUtil::.cctor()
extern "C"  void StringUtil__cctor_m1463895374 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil__cctor_m1463895374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->set_cul_0(L_0);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		CompareInfo_t1092934962 * L_2 = VirtFuncInvoker0< CompareInfo_t1092934962 * >::Invoke(11 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_1);
		((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->set_cmp_1(L_2);
		return;
	}
}
// System.Int32 System.Xml.XmlTextWriter/StringUtil::IndexOf(System.String,System.String)
extern "C"  int32_t StringUtil_IndexOf_m1748403443 (RuntimeObject * __this /* static, unused */, String_t* ___src0, String_t* ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil_IndexOf_m1748403443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		CompareInfo_t1092934962 * L_0 = ((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->get_cmp_1();
		String_t* L_1 = ___src0;
		String_t* L_2 = ___target1;
		int32_t L_3 = VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(9 /* System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String System.Xml.XmlTextWriter/StringUtil::Format(System.String,System.Object[])
extern "C"  String_t* StringUtil_Format_m4156193709 (RuntimeObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil_Format_m4156193709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = ((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->get_cul_0();
		String_t* L_1 = ___format0;
		ObjectU5BU5D_t2843939325* L_2 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m1881875187(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextWriter/XmlNodeInfo::.ctor()
extern "C"  void XmlNodeInfo__ctor_m1232608472 (XmlNodeInfo_t4030693883 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C"  void XmlUrlResolver__ctor_m1338399436 (XmlUrlResolver_t817895037 * __this, const RuntimeMethod* method)
{
	{
		XmlResolver__ctor_m2276492248(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C"  RuntimeObject * XmlUrlResolver_GetEntity_m2245402732 (XmlUrlResolver_t817895037 * __this, Uri_t100236324 * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_GetEntity_m2245402732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebRequest_t1939381076 * V_0 = NULL;
	{
		Type_t * L_0 = ___ofObjectToReturn2;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Stream_t1273022909_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		___ofObjectToReturn2 = L_2;
	}

IL_0012:
	{
		Type_t * L_3 = ___ofObjectToReturn2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (Stream_t1273022909_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5)))
		{
			goto IL_002d;
		}
	}
	{
		XmlException_t1761730631 * L_6 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_6, _stringLiteral109070372, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlUrlResolver_GetEntity_m2245402732_RuntimeMethod_var);
	}

IL_002d:
	{
		Uri_t100236324 * L_7 = ___absoluteUri0;
		bool L_8 = Uri_get_IsAbsoluteUri_m3666899587(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_9, _stringLiteral3264822601, _stringLiteral1705633010, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, XmlUrlResolver_GetEntity_m2245402732_RuntimeMethod_var);
	}

IL_0048:
	{
		Uri_t100236324 * L_10 = ___absoluteUri0;
		String_t* L_11 = Uri_get_Scheme_m2109479391(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral1629333464, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0097;
		}
	}
	{
		Uri_t100236324 * L_13 = ___absoluteUri0;
		String_t* L_14 = Uri_get_AbsolutePath_m590948575(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0082;
		}
	}
	{
		ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_17, _stringLiteral3264822601, _stringLiteral1705633010, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, XmlUrlResolver_GetEntity_m2245402732_RuntimeMethod_var);
	}

IL_0082:
	{
		Uri_t100236324 * L_18 = ___absoluteUri0;
		String_t* L_19 = Uri_get_LocalPath_m2837234216(L_18, /*hidden argument*/NULL);
		String_t* L_20 = XmlUrlResolver_UnescapeRelativeUriBody_m2976662118(__this, L_19, /*hidden argument*/NULL);
		FileStream_t4292183065 * L_21 = (FileStream_t4292183065 *)il2cpp_codegen_object_new(FileStream_t4292183065_il2cpp_TypeInfo_var);
		FileStream__ctor_m2889718780(L_21, L_20, 3, 1, 1, /*hidden argument*/NULL);
		return L_21;
	}

IL_0097:
	{
		Uri_t100236324 * L_22 = ___absoluteUri0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t1939381076_il2cpp_TypeInfo_var);
		WebRequest_t1939381076 * L_23 = WebRequest_Create_m2603246108(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		RuntimeObject* L_24 = __this->get_credential_0();
		if (!L_24)
		{
			goto IL_00b5;
		}
	}
	{
		WebRequest_t1939381076 * L_25 = V_0;
		RuntimeObject* L_26 = __this->get_credential_0();
		VirtActionInvoker1< RuntimeObject* >::Invoke(6 /* System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials) */, L_25, L_26);
	}

IL_00b5:
	{
		WebRequest_t1939381076 * L_27 = V_0;
		WebResponse_t229922639 * L_28 = VirtFuncInvoker0< WebResponse_t229922639 * >::Invoke(14 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_27);
		Stream_t1273022909 * L_29 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(7 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_28);
		return L_29;
	}
}
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t100236324 * XmlUrlResolver_ResolveUri_m3714454862 (XmlUrlResolver_t817895037 * __this, Uri_t100236324 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = ___baseUri0;
		String_t* L_1 = ___relativeUri1;
		Uri_t100236324 * L_2 = XmlResolver_ResolveUri_m3051172150(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C"  String_t* XmlUrlResolver_UnescapeRelativeUriBody_m2976662118 (XmlUrlResolver_t817895037 * __this, String_t* ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_UnescapeRelativeUriBody_m2976662118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___src0;
		String_t* L_1 = String_Replace_m1273907647(L_0, _stringLiteral3403826294, _stringLiteral3452614548, /*hidden argument*/NULL);
		String_t* L_2 = String_Replace_m1273907647(L_1, _stringLiteral271658412, _stringLiteral3452614546, /*hidden argument*/NULL);
		String_t* L_3 = String_Replace_m1273907647(L_2, _stringLiteral2671228134, _stringLiteral3452614525, /*hidden argument*/NULL);
		String_t* L_4 = String_Replace_m1273907647(L_3, _stringLiteral4237312075, _stringLiteral3452614526, /*hidden argument*/NULL);
		String_t* L_5 = String_Replace_m1273907647(L_4, _stringLiteral3074512661, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_6 = String_Replace_m1273907647(L_5, _stringLiteral3834027548, _stringLiteral3452614523, /*hidden argument*/NULL);
		return L_6;
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
// System.Void System.Xml.XmlValidatingReader::.ctor(System.Xml.XmlReader)
extern "C"  void XmlValidatingReader__ctor_m746074126 (XmlValidatingReader_t1719295192 * __this, XmlReader_t3121518892 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader__ctor_m746074126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader__ctor_m2242864879(__this, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_0 = ___reader0;
		__this->set_sourceReader_3(L_0);
		XmlReader_t3121518892 * L_1 = ___reader0;
		__this->set_xmlTextReader_4(((XmlTextReader_t4233384356 *)IsInstClass((RuntimeObject*)L_1, XmlTextReader_t4233384356_il2cpp_TypeInfo_var)));
		XmlTextReader_t4233384356 * L_2 = __this->get_xmlTextReader_4();
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		XmlUrlResolver_t817895037 * L_3 = (XmlUrlResolver_t817895037 *)il2cpp_codegen_object_new(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m1338399436(L_3, /*hidden argument*/NULL);
		__this->set_resolver_6(L_3);
	}

IL_002f:
	{
		__this->set_entityHandling_2(1);
		__this->set_validationType_8(1);
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_4, /*hidden argument*/NULL);
		__this->set_storedCharacters_12(L_4);
		return;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlValidatingReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t2544895291 * XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m2551608519 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m2551608519_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlParserContext_t2544895291 * G_B5_0 = NULL;
	{
		DTDValidatingReader_t3946379043 * L_0 = __this->get_dtdReader_10();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		DTDValidatingReader_t3946379043 * L_1 = __this->get_dtdReader_10();
		XmlParserContext_t2544895291 * L_2 = DTDValidatingReader_get_ParserContext_m883207457(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlReader_t3121518892 * L_3 = __this->get_sourceReader_3();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IHasXmlParserContext_t1330489402_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		XmlParserContext_t2544895291 * L_6 = InterfaceFuncInvoker0< XmlParserContext_t2544895291 * >::Invoke(0 /* System.Xml.XmlParserContext Mono.Xml.IHasXmlParserContext::get_ParserContext() */, IHasXmlParserContext_t1330489402_il2cpp_TypeInfo_var, L_5);
		G_B5_0 = L_6;
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = ((XmlParserContext_t2544895291 *)(NULL));
	}

IL_0035:
	{
		return G_B5_0;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_AttributeCount()
extern "C"  int32_t XmlValidatingReader_get_AttributeCount_m3036345306 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::get_BaseURI()
extern "C"  String_t* XmlValidatingReader_get_BaseURI_m1476328842 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_sourceReader_3();
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_t3121518892 * L_3 = __this->get_validatingReader_5();
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_CanResolveEntity()
extern "C"  bool XmlValidatingReader_get_CanResolveEntity_m282081771 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_Depth()
extern "C"  int32_t XmlValidatingReader_get_Depth_m2789143630 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Xml.EntityHandling System.Xml.XmlValidatingReader::get_EntityHandling()
extern "C"  int32_t XmlValidatingReader_get_EntityHandling_m3276362566 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_entityHandling_2();
		return L_0;
	}
}
// System.Void System.Xml.XmlValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void XmlValidatingReader_set_EntityHandling_m2734813455 (XmlValidatingReader_t1719295192 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_entityHandling_2(L_0);
		DTDValidatingReader_t3946379043 * L_1 = __this->get_dtdReader_10();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		DTDValidatingReader_t3946379043 * L_2 = __this->get_dtdReader_10();
		int32_t L_3 = ___value0;
		DTDValidatingReader_set_EntityHandling_m3201559656(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_EOF()
extern "C"  bool XmlValidatingReader_get_EOF_m3706696912 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_IsDefault()
extern "C"  bool XmlValidatingReader_get_IsDefault_m1076375084 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_IsEmptyElement()
extern "C"  bool XmlValidatingReader_get_IsEmptyElement_m3829672649 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_LineNumber()
extern "C"  int32_t XmlValidatingReader_get_LineNumber_m4160044902 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_LineNumber_m4160044902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlValidatingReader::get_IsDefault() */, __this);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_3);
		G_B5_0 = L_4;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 0;
	}

IL_002b:
	{
		return G_B5_0;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_LinePosition()
extern "C"  int32_t XmlValidatingReader_get_LinePosition_m2821670432 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_LinePosition_m2821670432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlValidatingReader::get_IsDefault() */, __this);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_3);
		G_B5_0 = L_4;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 0;
	}

IL_002b:
	{
		return G_B5_0;
	}
}
// System.String System.Xml.XmlValidatingReader::get_LocalName()
extern "C"  String_t* XmlValidatingReader_get_LocalName_m3935686416 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_LocalName_m3935686416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0011:
	{
		bool L_2 = XmlValidatingReader_get_Namespaces_m3935643757(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		XmlReader_t3121518892 * L_3 = __this->get_validatingReader_5();
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_3);
		return L_4;
	}

IL_0028:
	{
		XmlReader_t3121518892 * L_5 = __this->get_validatingReader_5();
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_5);
		return L_6;
	}
}
// System.String System.Xml.XmlValidatingReader::get_Name()
extern "C"  String_t* XmlValidatingReader_get_Name_m2521889568 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Name_m2521889568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_5();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C"  bool XmlValidatingReader_get_Namespaces_m3935643757 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_xmlTextReader_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_xmlTextReader_4();
		bool L_2 = XmlTextReader_get_Namespaces_m3871412690(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		return (bool)1;
	}
}
// System.String System.Xml.XmlValidatingReader::get_NamespaceURI()
extern "C"  String_t* XmlValidatingReader_get_NamespaceURI_m606176985 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_NamespaceURI_m606176985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0011:
	{
		bool L_2 = XmlValidatingReader_get_Namespaces_m3935643757(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		XmlReader_t3121518892 * L_3 = __this->get_validatingReader_5();
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_3);
		return L_4;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_5;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t71772148 * XmlValidatingReader_get_NameTable_m386478333 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	XmlNameTable_t71772148 * G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_sourceReader_3();
		XmlNameTable_t71772148 * L_2 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(18 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_t3121518892 * L_3 = __this->get_validatingReader_5();
		XmlNameTable_t71772148 * L_4 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(18 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlValidatingReader::get_NodeType()
extern "C"  int32_t XmlValidatingReader_get_NodeType_m2271835609 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.String System.Xml.XmlValidatingReader::get_Prefix()
extern "C"  String_t* XmlValidatingReader_get_Prefix_m754810542 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Prefix_m754810542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_5();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState()
extern "C"  int32_t XmlValidatingReader_get_ReadState_m483710833 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_1);
		return L_2;
	}
}
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
extern "C"  XmlResolver_t626023767 * XmlValidatingReader_get_Resolver_m1269208747 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_xmlTextReader_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_xmlTextReader_4();
		XmlResolver_t626023767 * L_2 = XmlTextReader_get_Resolver_m258955197(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		bool L_3 = __this->get_resolverSpecified_7();
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		XmlResolver_t626023767 * L_4 = __this->get_resolver_6();
		return L_4;
	}

IL_0029:
	{
		return (XmlResolver_t626023767 *)NULL;
	}
}
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
extern "C"  XmlSchemaCollection_t3610399789 * XmlValidatingReader_get_Schemas_m1542506967 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Schemas_m1542506967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlSchemaCollection_t3610399789 * L_0 = __this->get_schemas_9();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		XmlNameTable_t71772148 * L_1 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(18 /* System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable() */, __this);
		XmlSchemaCollection_t3610399789 * L_2 = (XmlSchemaCollection_t3610399789 *)il2cpp_codegen_object_new(XmlSchemaCollection_t3610399789_il2cpp_TypeInfo_var);
		XmlSchemaCollection__ctor_m3228921192(L_2, L_1, /*hidden argument*/NULL);
		__this->set_schemas_9(L_2);
	}

IL_001c:
	{
		XmlSchemaCollection_t3610399789 * L_3 = __this->get_schemas_9();
		return L_3;
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlValidatingReader::get_Settings()
extern "C"  XmlReaderSettings_t2186285234 * XmlValidatingReader_get_Settings_m4192388192 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	XmlReaderSettings_t2186285234 * G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_sourceReader_3();
		XmlReaderSettings_t2186285234 * L_2 = VirtFuncInvoker0< XmlReaderSettings_t2186285234 * >::Invoke(23 /* System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings() */, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_t3121518892 * L_3 = __this->get_validatingReader_5();
		XmlReaderSettings_t2186285234 * L_4 = VirtFuncInvoker0< XmlReaderSettings_t2186285234 * >::Invoke(23 /* System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings() */, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
extern "C"  int32_t XmlValidatingReader_get_ValidationType_m768883523 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationType_8();
		return L_0;
	}
}
// System.Void System.Xml.XmlValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C"  void XmlValidatingReader_set_ValidationType_m3850545770 (XmlValidatingReader_t1719295192 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_set_ValidationType_m3850545770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral224365628, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlValidatingReader_set_ValidationType_m3850545770_RuntimeMethod_var);
	}

IL_0016:
	{
		int32_t L_2 = __this->get_validationType_8();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_0048;
			}
			case 4:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_004e;
	}

IL_003c:
	{
		int32_t L_4 = ___value0;
		__this->set_validationType_8(L_4);
		goto IL_004e;
	}

IL_0048:
	{
		NotSupportedException_t1314879016 * L_5 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, XmlValidatingReader_set_ValidationType_m3850545770_RuntimeMethod_var);
	}

IL_004e:
	{
		return;
	}
}
// System.String System.Xml.XmlValidatingReader::get_Value()
extern "C"  String_t* XmlValidatingReader_get_Value_m2511111829 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Value_m2511111829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_5();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlValidatingReader::get_XmlSpace()
extern "C"  int32_t XmlValidatingReader_get_XmlSpace_m58584745 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Void System.Xml.XmlValidatingReader::Close()
extern "C"  void XmlValidatingReader_Close_m24546856 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_sourceReader_3();
		VirtActionInvoker0::Invoke(26 /* System.Void System.Xml.XmlReader::Close() */, L_1);
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_5();
		VirtActionInvoker0::Invoke(26 /* System.Void System.Xml.XmlReader::Close() */, L_2);
	}

IL_0026:
	{
		return;
	}
}
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String)
extern "C"  String_t* XmlValidatingReader_GetAttribute_m1372195914 (XmlValidatingReader_t1719295192 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001d;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		String_t* L_2 = ___name0;
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_1, L_2);
		G_B3_0 = L_3;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlValidatingReader_GetAttribute_m2636608846 (XmlValidatingReader_t1719295192 * __this, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		String_t* L_2 = ___localName0;
		String_t* L_3 = ___namespaceName1;
		String_t* L_4 = VirtFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.String,System.String) */, L_1, L_2, L_3);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::HasLineInfo()
extern "C"  bool XmlValidatingReader_HasLineInfo_m870518869 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_HasLineInfo_m870518869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* XmlValidatingReader_LookupNamespace_m1366491815 (XmlValidatingReader_t1719295192 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		String_t* L_2 = ___prefix0;
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_1, L_2);
		return L_3;
	}

IL_0018:
	{
		XmlReader_t3121518892 * L_4 = __this->get_sourceReader_3();
		String_t* L_5 = ___prefix0;
		String_t* L_6 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_4, L_5);
		return L_6;
	}
}
// System.Void System.Xml.XmlValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void XmlValidatingReader_MoveToAttribute_m565086185 (XmlValidatingReader_t1719295192 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_MoveToAttribute_m565086185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IndexOutOfRangeException_t1578797820 * L_1 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_1, _stringLiteral349273836, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlValidatingReader_MoveToAttribute_m565086185_RuntimeMethod_var);
	}

IL_0016:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_5();
		int32_t L_3 = ___i0;
		VirtActionInvoker1< int32_t >::Invoke(31 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_2, L_3);
		return;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String)
extern "C"  bool XmlValidatingReader_MoveToAttribute_m2298075513 (XmlValidatingReader_t1719295192 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		String_t* L_2 = ___name0;
		bool L_3 = VirtFuncInvoker1< bool, String_t* >::Invoke(32 /* System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String) */, L_1, L_2);
		return L_3;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlValidatingReader_MoveToAttribute_m3515077069 (XmlValidatingReader_t1719295192 * __this, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		String_t* L_2 = ___localName0;
		String_t* L_3 = ___namespaceName1;
		bool L_4 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(33 /* System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String,System.String) */, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToElement()
extern "C"  bool XmlValidatingReader_MoveToElement_m2423364559 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToFirstAttribute()
extern "C"  bool XmlValidatingReader_MoveToFirstAttribute_m3181606727 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToNextAttribute()
extern "C"  bool XmlValidatingReader_MoveToNextAttribute_m3038240404 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::Read()
extern "C"  bool XmlValidatingReader_Read_m3555356476 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_Read_m3555356476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XsdValidatingReader_t3961132625 * V_0 = NULL;
	int32_t V_1 = 0;
	DTDValidatingReader_t3946379043 * V_2 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_1 = XmlValidatingReader_get_ValidationType_m768883523(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_00ed;
			}
			case 4:
			{
				goto IL_0067;
			}
		}
	}
	{
		goto IL_00f3;
	}

IL_0031:
	{
		goto IL_0067;
	}

IL_0036:
	{
		XmlReader_t3121518892 * L_3 = __this->get_sourceReader_3();
		DTDValidatingReader_t3946379043 * L_4 = (DTDValidatingReader_t3946379043 *)il2cpp_codegen_object_new(DTDValidatingReader_t3946379043_il2cpp_TypeInfo_var);
		DTDValidatingReader__ctor_m3400285377(L_4, L_3, __this, /*hidden argument*/NULL);
		DTDValidatingReader_t3946379043 * L_5 = L_4;
		V_2 = L_5;
		__this->set_dtdReader_10(L_5);
		DTDValidatingReader_t3946379043 * L_6 = V_2;
		__this->set_validatingReader_5(L_6);
		DTDValidatingReader_t3946379043 * L_7 = __this->get_dtdReader_10();
		XmlResolver_t626023767 * L_8 = XmlValidatingReader_get_Resolver_m1269208747(__this, /*hidden argument*/NULL);
		DTDValidatingReader_set_XmlResolver_m3887196702(L_7, L_8, /*hidden argument*/NULL);
		goto IL_00f3;
	}

IL_0067:
	{
		XmlReader_t3121518892 * L_9 = __this->get_sourceReader_3();
		DTDValidatingReader_t3946379043 * L_10 = (DTDValidatingReader_t3946379043 *)il2cpp_codegen_object_new(DTDValidatingReader_t3946379043_il2cpp_TypeInfo_var);
		DTDValidatingReader__ctor_m3400285377(L_10, L_9, __this, /*hidden argument*/NULL);
		__this->set_dtdReader_10(L_10);
		DTDValidatingReader_t3946379043 * L_11 = __this->get_dtdReader_10();
		XsdValidatingReader_t3961132625 * L_12 = (XsdValidatingReader_t3961132625 *)il2cpp_codegen_object_new(XsdValidatingReader_t3961132625_il2cpp_TypeInfo_var);
		XsdValidatingReader__ctor_m1875465247(L_12, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		XsdValidatingReader_t3961132625 * L_13 = V_0;
		XsdValidatingReader_t3961132625 * L_14 = L_13;
		ValidationEventHandler_t791314227 * L_15 = L_14->get_ValidationEventHandler_28();
		intptr_t L_16 = (intptr_t)XmlValidatingReader_OnValidationEvent_m367061793_RuntimeMethod_var;
		ValidationEventHandler_t791314227 * L_17 = (ValidationEventHandler_t791314227 *)il2cpp_codegen_object_new(ValidationEventHandler_t791314227_il2cpp_TypeInfo_var);
		ValidationEventHandler__ctor_m2945978529(L_17, __this, L_16, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_18 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		L_14->set_ValidationEventHandler_28(((ValidationEventHandler_t791314227 *)CastclassSealed((RuntimeObject*)L_18, ValidationEventHandler_t791314227_il2cpp_TypeInfo_var)));
		XsdValidatingReader_t3961132625 * L_19 = V_0;
		int32_t L_20 = XmlValidatingReader_get_ValidationType_m768883523(__this, /*hidden argument*/NULL);
		XsdValidatingReader_set_ValidationType_m2062431012(L_19, L_20, /*hidden argument*/NULL);
		XsdValidatingReader_t3961132625 * L_21 = V_0;
		XmlSchemaCollection_t3610399789 * L_22 = XmlValidatingReader_get_Schemas_m1542506967(__this, /*hidden argument*/NULL);
		XmlSchemaSet_t266093086 * L_23 = XmlSchemaCollection_get_SchemaSet_m2053221801(L_22, /*hidden argument*/NULL);
		XsdValidatingReader_set_Schemas_m1687221862(L_21, L_23, /*hidden argument*/NULL);
		XsdValidatingReader_t3961132625 * L_24 = V_0;
		XmlResolver_t626023767 * L_25 = XmlValidatingReader_get_Resolver_m1269208747(__this, /*hidden argument*/NULL);
		XsdValidatingReader_set_XmlResolver_m2067506225(L_24, L_25, /*hidden argument*/NULL);
		XsdValidatingReader_t3961132625 * L_26 = V_0;
		__this->set_validatingReader_5(L_26);
		DTDValidatingReader_t3946379043 * L_27 = __this->get_dtdReader_10();
		XmlResolver_t626023767 * L_28 = XmlValidatingReader_get_Resolver_m1269208747(__this, /*hidden argument*/NULL);
		DTDValidatingReader_set_XmlResolver_m3887196702(L_27, L_28, /*hidden argument*/NULL);
		goto IL_00f3;
	}

IL_00ed:
	{
		NotSupportedException_t1314879016 * L_29 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, NULL, XmlValidatingReader_Read_m3555356476_RuntimeMethod_var);
	}

IL_00f3:
	{
		XmlReader_t3121518892 * L_30 = __this->get_validatingReader_5();
		__this->set_schemaInfo_11(((RuntimeObject*)IsInst((RuntimeObject*)L_30, IHasXmlSchemaInfo_t74872415_il2cpp_TypeInfo_var)));
	}

IL_0104:
	{
		XmlReader_t3121518892 * L_31 = __this->get_validatingReader_5();
		bool L_32 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::Read() */, L_31);
		return L_32;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::ReadAttributeValue()
extern "C"  bool XmlValidatingReader_ReadAttributeValue_m2604418746 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_5();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_1);
		return L_2;
	}
}
// System.Void System.Xml.XmlValidatingReader::ResolveEntity()
extern "C"  void XmlValidatingReader_ResolveEntity_m513506040 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_5();
		VirtActionInvoker0::Invoke(40 /* System.Void System.Xml.XmlReader::ResolveEntity() */, L_0);
		return;
	}
}
// System.Void System.Xml.XmlValidatingReader::OnValidationEvent(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void XmlValidatingReader_OnValidationEvent_m367061793 (XmlValidatingReader_t1719295192 * __this, RuntimeObject * ___o0, ValidationEventArgs_t2784773869 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_OnValidationEvent_m367061793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValidationEventHandler_t791314227 * L_0 = __this->get_ValidationEventHandler_13();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		ValidationEventHandler_t791314227 * L_1 = __this->get_ValidationEventHandler_13();
		RuntimeObject * L_2 = ___o0;
		ValidationEventArgs_t2784773869 * L_3 = ___e1;
		ValidationEventHandler_Invoke_m3984227947(L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_001d:
	{
		int32_t L_4 = XmlValidatingReader_get_ValidationType_m768883523(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		ValidationEventArgs_t2784773869 * L_5 = ___e1;
		int32_t L_6 = ValidationEventArgs_get_Severity_m1798521934(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ValidationEventArgs_t2784773869 * L_7 = ___e1;
		XmlSchemaException_t3511258692 * L_8 = ValidationEventArgs_get_Exception_m2119547120(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, XmlValidatingReader_OnValidationEvent_m367061793_RuntimeMethod_var);
	}

IL_003a:
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
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlWhitespace__ctor_m949230574 (XmlWhitespace_t131741354 * __this, String_t* ___strData0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t2837193595 * L_1 = ___doc1;
		XmlCharacterData__ctor_m3935345337(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlWhitespace::get_LocalName()
extern "C"  String_t* XmlWhitespace_get_LocalName_m4124641324 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_LocalName_m4124641324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1653520728;
	}
}
// System.String System.Xml.XmlWhitespace::get_Name()
extern "C"  String_t* XmlWhitespace_get_Name_m3062444240 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_Name_m3062444240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1653520728;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
extern "C"  int32_t XmlWhitespace_get_NodeType_m4071479963 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)13));
	}
}
// System.String System.Xml.XmlWhitespace::get_Value()
extern "C"  String_t* XmlWhitespace_get_Value_m3008068225 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
extern "C"  void XmlWhitespace_set_Value_m1380309567 (XmlWhitespace_t131741354 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_set_Value_m1380309567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_1 = XmlChar_IsWhitespace_m2421104119(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3922471879, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlWhitespace_set_Value_m1380309567_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(38 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_3);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
extern "C"  XmlNode_t3767805227 * XmlWhitespace_get_ParentNode_m3161215339 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t3767805227 * L_0 = XmlNode_get_ParentNode_m3304904414(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
extern "C"  XmlNode_t3767805227 * XmlWhitespace_CloneNode_m2585972626 (XmlWhitespace_t131741354 * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_CloneNode_m2585972626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(37 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlDocument_t2837193595 * L_1 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(21 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlWhitespace_t131741354 * L_2 = (XmlWhitespace_t131741354 *)il2cpp_codegen_object_new(XmlWhitespace_t131741354_il2cpp_TypeInfo_var);
		XmlWhitespace__ctor_m949230574(L_2, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Xml.XmlWriter::.ctor()
extern "C"  void XmlWriter__ctor_m2782267819 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C"  void XmlWriter_System_IDisposable_Dispose_m1610106051 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, (bool)0);
		return;
	}
}
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C"  String_t* XmlWriter_get_XmlLang_m3841313567 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C"  int32_t XmlWriter_get_XmlSpace_m866999307 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C"  void XmlWriter_Dispose_m3961600049 (XmlWriter_t127905479 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::Close() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m3614493714 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = ___defattr1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = ___reader0;
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		XmlReader_t3121518892 * L_3 = ___reader0;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, L_3);
		XmlReader_t3121518892 * L_5 = ___reader0;
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_5);
		XmlReader_t3121518892 * L_7 = ___reader0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_7);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_4, L_6, L_8);
		goto IL_0071;
	}

IL_002f:
	{
		XmlReader_t3121518892 * L_9 = ___reader0;
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_0 = L_10;
		int32_t L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)3)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0071;
	}

IL_004f:
	{
		XmlReader_t3121518892 * L_12 = ___reader0;
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_12);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_13);
		goto IL_0071;
	}

IL_0060:
	{
		XmlReader_t3121518892 * L_14 = ___reader0;
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_14);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_15);
		goto IL_0071;
	}

IL_0071:
	{
		XmlReader_t3121518892 * L_16 = ___reader0;
		bool L_17 = VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_16);
		if (L_17)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteNode_m263666930 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteNode_m263666930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		XmlReader_t3121518892 * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlWriter_WriteNode_m263666930_RuntimeMethod_var);
	}

IL_000c:
	{
		XmlReader_t3121518892 * L_2 = ___reader0;
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		XmlReader_t3121518892 * L_4 = ___reader0;
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::Read() */, L_4);
	}

IL_001e:
	{
		XmlReader_t3121518892 * L_5 = ___reader0;
		bool L_6 = ___defattr1;
		VirtActionInvoker2< XmlReader_t3121518892 *, bool >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_5, L_6);
		XmlReader_t3121518892 * L_7 = ___reader0;
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_7);
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_0032:
	{
		XmlReader_t3121518892 * L_9 = ___reader0;
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_2 = L_10;
		int32_t L_11 = V_2;
		switch (L_11)
		{
			case 0:
			{
				goto IL_01db;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_012c;
			}
			case 3:
			{
				goto IL_012d;
			}
			case 4:
			{
				goto IL_013e;
			}
			case 5:
			{
				goto IL_014f;
			}
			case 6:
			{
				goto IL_01e0;
			}
			case 7:
			{
				goto IL_0160;
			}
			case 8:
			{
				goto IL_0177;
			}
			case 9:
			{
				goto IL_01e0;
			}
			case 10:
			{
				goto IL_0188;
			}
			case 11:
			{
				goto IL_01e0;
			}
			case 12:
			{
				goto IL_01e0;
			}
			case 13:
			{
				goto IL_01ba;
			}
			case 14:
			{
				goto IL_01b5;
			}
			case 15:
			{
				goto IL_01cb;
			}
			case 16:
			{
				goto IL_01d6;
			}
			case 17:
			{
				goto IL_0160;
			}
		}
	}
	{
		goto IL_01e0;
	}

IL_008c:
	{
		XmlReader_t3121518892 * L_12 = ___reader0;
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, L_12);
		XmlReader_t3121518892 * L_14 = ___reader0;
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		XmlReader_t3121518892 * L_16 = ___reader0;
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, L_13, L_15, L_17);
		XmlReader_t3121518892 * L_18 = ___reader0;
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_18);
		if (!L_19)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = 0;
		goto IL_00c9;
	}

IL_00b6:
	{
		XmlReader_t3121518892 * L_20 = ___reader0;
		int32_t L_21 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(31 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_20, L_21);
		XmlReader_t3121518892 * L_22 = ___reader0;
		bool L_23 = ___defattr1;
		XmlWriter_WriteAttribute_m3614493714(__this, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00c9:
	{
		int32_t L_25 = V_0;
		XmlReader_t3121518892 * L_26 = ___reader0;
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		XmlReader_t3121518892 * L_28 = ___reader0;
		VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_28);
	}

IL_00dc:
	{
		XmlReader_t3121518892 * L_29 = ___reader0;
		bool L_30 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_29);
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		goto IL_0127;
	}

IL_00f2:
	{
		XmlReader_t3121518892 * L_31 = ___reader0;
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_31);
		V_1 = L_32;
		XmlReader_t3121518892 * L_33 = ___reader0;
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::Read() */, L_33);
		XmlReader_t3121518892 * L_34 = ___reader0;
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_34);
		if ((((int32_t)L_35) == ((int32_t)((int32_t)15))))
		{
			goto IL_0121;
		}
	}

IL_010d:
	{
		XmlReader_t3121518892 * L_36 = ___reader0;
		bool L_37 = ___defattr1;
		VirtActionInvoker2< XmlReader_t3121518892 *, bool >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_36, L_37);
		int32_t L_38 = V_1;
		XmlReader_t3121518892 * L_39 = ___reader0;
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_39);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_010d;
		}
	}

IL_0121:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
	}

IL_0127:
	{
		goto IL_0218;
	}

IL_012c:
	{
		return;
	}

IL_012d:
	{
		XmlReader_t3121518892 * L_41 = ___reader0;
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_41);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_42);
		goto IL_0218;
	}

IL_013e:
	{
		XmlReader_t3121518892 * L_43 = ___reader0;
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_43);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, __this, L_44);
		goto IL_0218;
	}

IL_014f:
	{
		XmlReader_t3121518892 * L_45 = ___reader0;
		String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_45);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_46);
		goto IL_0218;
	}

IL_0160:
	{
		XmlReader_t3121518892 * L_47 = ___reader0;
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_47);
		XmlReader_t3121518892 * L_49 = ___reader0;
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, __this, L_48, L_50);
		goto IL_0218;
	}

IL_0177:
	{
		XmlReader_t3121518892 * L_51 = ___reader0;
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_51);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, __this, L_52);
		goto IL_0218;
	}

IL_0188:
	{
		XmlReader_t3121518892 * L_53 = ___reader0;
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_53);
		XmlReader_t3121518892 * L_55 = ___reader0;
		String_t* L_56 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_55, _stringLiteral3984887517);
		XmlReader_t3121518892 * L_57 = ___reader0;
		String_t* L_58 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_57, _stringLiteral3261774195);
		XmlReader_t3121518892 * L_59 = ___reader0;
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_59);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, __this, L_54, L_56, L_58, L_60);
		goto IL_0218;
	}

IL_01b5:
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		XmlReader_t3121518892 * L_61 = ___reader0;
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_61);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, __this, L_62);
		goto IL_0218;
	}

IL_01cb:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
		goto IL_0218;
	}

IL_01d6:
	{
		goto IL_0218;
	}

IL_01db:
	{
		goto IL_0218;
	}

IL_01e0:
	{
		ObjectU5BU5D_t2843939325* L_63 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_63, _stringLiteral1152083996);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1152083996);
		ObjectU5BU5D_t2843939325* L_64 = L_63;
		XmlReader_t3121518892 * L_65 = ___reader0;
		String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_65);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_66);
		ObjectU5BU5D_t2843939325* L_67 = L_64;
		ArrayElementTypeCheck (L_67, _stringLiteral3442940761);
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3442940761);
		ObjectU5BU5D_t2843939325* L_68 = L_67;
		XmlReader_t3121518892 * L_69 = ___reader0;
		int32_t L_70 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_69);
		int32_t L_71 = L_70;
		RuntimeObject * L_72 = Box(XmlNodeType_t1672767151_il2cpp_TypeInfo_var, &L_71);
		ArrayElementTypeCheck (L_68, L_72);
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_72);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = String_Concat_m2971454694(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		XmlException_t1761730631 * L_74 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_74, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, NULL, XmlWriter_WriteNode_m263666930_RuntimeMethod_var);
	}

IL_0218:
	{
		XmlReader_t3121518892 * L_75 = ___reader0;
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::Read() */, L_75);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
