// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SokpopBootleg/SokpopBootlegGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSokpopBootlegGameModeBase() {}
// Cross Module References
	SOKPOPBOOTLEG_API UClass* Z_Construct_UClass_ASokpopBootlegGameModeBase_NoRegister();
	SOKPOPBOOTLEG_API UClass* Z_Construct_UClass_ASokpopBootlegGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SokpopBootleg();
// End Cross Module References
	void ASokpopBootlegGameModeBase::StaticRegisterNativesASokpopBootlegGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASokpopBootlegGameModeBase_NoRegister()
	{
		return ASokpopBootlegGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASokpopBootlegGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASokpopBootlegGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SokpopBootleg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASokpopBootlegGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SokpopBootlegGameModeBase.h" },
		{ "ModuleRelativePath", "SokpopBootlegGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASokpopBootlegGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASokpopBootlegGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASokpopBootlegGameModeBase_Statics::ClassParams = {
		&ASokpopBootlegGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASokpopBootlegGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASokpopBootlegGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASokpopBootlegGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASokpopBootlegGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASokpopBootlegGameModeBase, 1079710871);
	template<> SOKPOPBOOTLEG_API UClass* StaticClass<ASokpopBootlegGameModeBase>()
	{
		return ASokpopBootlegGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASokpopBootlegGameModeBase(Z_Construct_UClass_ASokpopBootlegGameModeBase, &ASokpopBootlegGameModeBase::StaticClass, TEXT("/Script/SokpopBootleg"), TEXT("ASokpopBootlegGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASokpopBootlegGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
