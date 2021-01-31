// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LATEFORWORK_LateForWorkCharacter_generated_h
#error "LateForWorkCharacter.generated.h already included, missing '#pragma once' in LateForWorkCharacter.h"
#endif
#define LATEFORWORK_LateForWorkCharacter_generated_h

#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_SPARSE_DATA
#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_RPC_WRAPPERS \
	virtual void InteractButtonPressed_Implementation(); \
 \
	DECLARE_FUNCTION(execInteractButtonPressed);


#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteractButtonPressed);


#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_EVENT_PARMS
#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_CALLBACK_WRAPPERS
#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALateForWorkCharacter(); \
	friend struct Z_Construct_UClass_ALateForWorkCharacter_Statics; \
public: \
	DECLARE_CLASS(ALateForWorkCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LateForWork"), NO_API) \
	DECLARE_SERIALIZER(ALateForWorkCharacter)


#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALateForWorkCharacter(); \
	friend struct Z_Construct_UClass_ALateForWorkCharacter_Statics; \
public: \
	DECLARE_CLASS(ALateForWorkCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LateForWork"), NO_API) \
	DECLARE_SERIALIZER(ALateForWorkCharacter)


#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALateForWorkCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALateForWorkCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALateForWorkCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALateForWorkCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALateForWorkCharacter(ALateForWorkCharacter&&); \
	NO_API ALateForWorkCharacter(const ALateForWorkCharacter&); \
public:


#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALateForWorkCharacter(ALateForWorkCharacter&&); \
	NO_API ALateForWorkCharacter(const ALateForWorkCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALateForWorkCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALateForWorkCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALateForWorkCharacter)


#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ALateForWorkCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ALateForWorkCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__m_movementSpeed() { return STRUCT_OFFSET(ALateForWorkCharacter, m_movementSpeed); }


#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_11_PROLOG \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_EVENT_PARMS


#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_SPARSE_DATA \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_RPC_WRAPPERS \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_CALLBACK_WRAPPERS \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_INCLASS \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_SPARSE_DATA \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_CALLBACK_WRAPPERS \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_INCLASS_NO_PURE_DECLS \
	LateForWork_Source_LateForWork_LateForWorkCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LATEFORWORK_API UClass* StaticClass<class ALateForWorkCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LateForWork_Source_LateForWork_LateForWorkCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
