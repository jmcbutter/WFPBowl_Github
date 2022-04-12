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
511,
512,
519,
522,
524,
529,
530,
532,
533,
537,
538,
539,
540,
542,
543,
544,
547,
549,
550,
551,
612,
613,
615,
623,
624,
625,
626,
627,
631,
632,
633,
634,
635,
636,
638,
639,
640,
642,
643,
644,
646,
833,
976,
977,
5331,
5332,
5334,
5335,
5336,
5337,
5338,
5340,
5342,
5344,
5345,
5352,
5354,
5358,
5359,
5361,
5363,
5365,
5377,
5386,
5387,
5389,
5390,
5391,
5392,
5393,
5395,
5397,
6235,
6239,
6241,
6242,
6243,
6244,
6289,
6290,
6291,
6306,
6307,
6308,
6309,
6340,
6383,
6393,
6394,
6395,
6643,
6645,
6646,
6670,
6671,
6672,
6686,
6692,
6699,
6709,
6712,
6780,
6786,
6787,
6788,
6789,
6795,
6808,
6828,
6829,
6837,
6839,
6846,
6847,
6850,
6852,
6857,
6863,
6864,
6871,
6873,
6883,
6886,
6887,
6888,
6898,
6909,
6915,
6916,
6917,
6919,
6920,
6930,
6948,
6961,
6980,
7004,
7005,
7338,
7467,
7644,
7645,
7648,
7651,
7699,
7850,
7851,
8861,
8880,
8887,
8888,
8890,
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
// token 511,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 512,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 519,
ves_icall_RuntimeType_make_array_type_raw,
// token 522,
ves_icall_RuntimeType_make_byref_type_raw,
// token 524,
ves_icall_RuntimeType_MakePointerType_raw,
// token 529,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 530,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 532,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 533,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 537,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 538,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 539,
ves_icall_System_RuntimeType_getFullName_raw,
// token 540,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 542,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 543,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 544,
ves_icall_RuntimeType_GetFields_native_raw,
// token 547,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 549,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 550,
ves_icall_RuntimeType_get_Name_raw,
// token 551,
ves_icall_RuntimeType_get_Namespace_raw,
// token 612,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 613,
ves_icall_reflection_get_token_raw,
// token 615,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 623,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 624,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 625,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 626,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 627,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 631,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 632,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 633,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 634,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 635,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 636,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 638,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 639,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 640,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 642,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 643,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 644,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 646,
ves_icall_System_String_FastAllocateString_raw,
// token 833,
ves_icall_System_Type_internal_from_handle_raw,
// token 976,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 977,
ves_icall_System_ValueType_Equals_raw,
// token 5331,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5332,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5334,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5335,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5336,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5337,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5338,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5340,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5342,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5344,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5345,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5352,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5354,
mono_monitor_exit_icall_raw,
// token 5358,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5359,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5361,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5363,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5365,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5377,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5386,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5387,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5389,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5390,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5391,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5392,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5393,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5395,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5397,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6235,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6239,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6241,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6242,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6243,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6244,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6289,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6290,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6291,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6306,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6307,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6308,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6309,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6340,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6383,
mono_object_hash_icall_raw,
// token 6393,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6394,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6395,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6643,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6645,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6646,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6670,
mono_digest_get_public_token,
// token 6671,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6672,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6686,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6692,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6699,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6709,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6712,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6780,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6786,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6787,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6788,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6789,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6795,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6808,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6828,
ves_icall_reflection_get_token_raw,
// token 6829,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6837,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6839,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6846,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6847,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6850,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6852,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6857,
ves_icall_reflection_get_token_raw,
// token 6863,
ves_icall_get_method_info_raw,
// token 6864,
ves_icall_get_method_attributes,
// token 6871,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6873,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6883,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6886,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6887,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6888,
ves_icall_reflection_get_token_raw,
// token 6898,
ves_icall_InternalInvoke_raw,
// token 6909,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6915,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6916,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6917,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6919,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6920,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6930,
ves_icall_InternalInvoke_raw,
// token 6948,
ves_icall_reflection_get_token_raw,
// token 6961,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6980,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7004,
ves_icall_reflection_get_token_raw,
// token 7005,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7338,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7467,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7644,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7645,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7648,
ves_icall_ModuleBuilder_getToken_raw,
// token 7651,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7699,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7850,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7851,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8861,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8880,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8887,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 8888,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8890,
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
