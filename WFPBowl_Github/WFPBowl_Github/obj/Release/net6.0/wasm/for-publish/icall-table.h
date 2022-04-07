#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
175,
180,
181,
182,
183,
184,
185,
186,
188,
189,
236,
237,
239,
263,
264,
265,
275,
276,
277,
278,
279,
346,
347,
348,
351,
383,
384,
386,
388,
390,
392,
397,
405,
406,
407,
408,
409,
410,
411,
412,
413,
414,
510,
511,
518,
521,
523,
528,
529,
531,
532,
536,
537,
538,
539,
541,
542,
543,
546,
548,
549,
550,
611,
612,
614,
622,
623,
624,
625,
626,
630,
631,
632,
633,
634,
635,
637,
638,
639,
641,
642,
643,
645,
832,
975,
976,
5300,
5301,
5303,
5304,
5305,
5306,
5307,
5309,
5311,
5313,
5314,
5321,
5323,
5327,
5328,
5330,
5332,
5334,
5346,
5355,
5356,
5358,
5359,
5360,
5361,
5362,
5364,
5366,
6203,
6207,
6209,
6210,
6211,
6212,
6256,
6257,
6258,
6273,
6274,
6275,
6276,
6307,
6350,
6360,
6361,
6362,
6610,
6612,
6613,
6637,
6638,
6639,
6653,
6659,
6666,
6676,
6679,
6747,
6753,
6754,
6755,
6756,
6762,
6775,
6795,
6796,
6804,
6806,
6813,
6814,
6817,
6819,
6824,
6830,
6831,
6838,
6840,
6850,
6853,
6854,
6855,
6865,
6876,
6882,
6883,
6884,
6886,
6887,
6897,
6915,
6928,
6947,
6971,
6972,
7305,
7434,
7611,
7612,
7615,
7618,
7666,
7817,
7818,
8828,
8847,
8854,
8855,
8857,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 175,
ves_icall_System_Array_InternalCreate,
// token 180,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 181,
ves_icall_System_Array_CanChangePrimitive,
// token 182,
ves_icall_System_Array_FastCopy_raw,
// token 183,
ves_icall_System_Array_GetLength_raw,
// token 184,
ves_icall_System_Array_GetLowerBound_raw,
// token 185,
ves_icall_System_Array_GetGenericValue_icall,
// token 186,
ves_icall_System_Array_GetValueImpl_raw,
// token 188,
ves_icall_System_Array_SetValueImpl_raw,
// token 189,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 236,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 237,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 239,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 263,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 264,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 265,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 275,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 276,
ves_icall_System_Enum_ToObject_raw,
// token 277,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 278,
ves_icall_System_Enum_get_underlying_type_raw,
// token 279,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 346,
ves_icall_System_Environment_get_ProcessorCount,
// token 347,
ves_icall_System_Environment_get_TickCount,
// token 348,
ves_icall_System_Environment_get_TickCount64,
// token 351,
ves_icall_System_Environment_FailFast_raw,
// token 383,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 384,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 386,
ves_icall_System_GC_SuppressFinalize_raw,
// token 388,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 390,
ves_icall_System_GC_GetGCMemoryInfo,
// token 392,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 397,
ves_icall_System_Object_MemberwiseClone_raw,
// token 405,
ves_icall_System_Math_Abs_double,
// token 406,
ves_icall_System_Math_Ceiling,
// token 407,
ves_icall_System_Math_Cos,
// token 408,
ves_icall_System_Math_Floor,
// token 409,
ves_icall_System_Math_Log10,
// token 410,
ves_icall_System_Math_Pow,
// token 411,
ves_icall_System_Math_Sin,
// token 412,
ves_icall_System_Math_Sqrt,
// token 413,
ves_icall_System_Math_Tan,
// token 414,
ves_icall_System_Math_ModF,
// token 510,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 511,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 518,
ves_icall_RuntimeType_make_array_type_raw,
// token 521,
ves_icall_RuntimeType_make_byref_type_raw,
// token 523,
ves_icall_RuntimeType_MakePointerType_raw,
// token 528,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 529,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 531,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 532,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 536,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 537,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 538,
ves_icall_System_RuntimeType_getFullName_raw,
// token 539,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 541,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 542,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 543,
ves_icall_RuntimeType_GetFields_native_raw,
// token 546,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 548,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 549,
ves_icall_RuntimeType_get_Name_raw,
// token 550,
ves_icall_RuntimeType_get_Namespace_raw,
// token 611,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 612,
ves_icall_reflection_get_token_raw,
// token 614,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 622,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 623,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 624,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 625,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 626,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 630,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 631,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 632,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 633,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 634,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 635,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 637,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 638,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 639,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 641,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 642,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 643,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 645,
ves_icall_System_String_FastAllocateString_raw,
// token 832,
ves_icall_System_Type_internal_from_handle_raw,
// token 975,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 976,
ves_icall_System_ValueType_Equals_raw,
// token 5300,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5301,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5303,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5304,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5305,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5306,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5307,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5309,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5311,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5313,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5314,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5321,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5323,
mono_monitor_exit_icall_raw,
// token 5327,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5328,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5330,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5332,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5334,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5346,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5355,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5356,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5358,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5359,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5360,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5361,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5362,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5364,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5366,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6203,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6207,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6209,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6210,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6211,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6212,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6256,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6257,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6258,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6273,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6274,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6275,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6276,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6307,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6350,
mono_object_hash_icall_raw,
// token 6360,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6361,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6362,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6610,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6612,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6613,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6637,
mono_digest_get_public_token,
// token 6638,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6639,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6653,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6659,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6666,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6676,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6679,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6747,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6753,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6754,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6755,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6756,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6762,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6775,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6795,
ves_icall_reflection_get_token_raw,
// token 6796,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6804,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6806,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6813,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6814,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6817,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6819,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6824,
ves_icall_reflection_get_token_raw,
// token 6830,
ves_icall_get_method_info_raw,
// token 6831,
ves_icall_get_method_attributes,
// token 6838,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6840,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6850,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6853,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6854,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6855,
ves_icall_reflection_get_token_raw,
// token 6865,
ves_icall_InternalInvoke_raw,
// token 6876,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6882,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6883,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6884,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6886,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6887,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6897,
ves_icall_InternalInvoke_raw,
// token 6915,
ves_icall_reflection_get_token_raw,
// token 6928,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6947,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6971,
ves_icall_reflection_get_token_raw,
// token 6972,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7305,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7434,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7611,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7612,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7615,
ves_icall_ModuleBuilder_getToken_raw,
// token 7618,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7666,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7817,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7818,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8828,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8847,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8854,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 8855,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8857,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
