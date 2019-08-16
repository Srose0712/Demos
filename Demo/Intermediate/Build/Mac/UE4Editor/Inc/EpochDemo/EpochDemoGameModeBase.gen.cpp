// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpochDemo/EpochDemoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpochDemoGameModeBase() {}
// Cross Module References
	EPOCHDEMO_API UClass* Z_Construct_UClass_AEpochDemoGameModeBase_NoRegister();
	EPOCHDEMO_API UClass* Z_Construct_UClass_AEpochDemoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EpochDemo();
// End Cross Module References
	void AEpochDemoGameModeBase::StaticRegisterNativesAEpochDemoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AEpochDemoGameModeBase_NoRegister()
	{
		return AEpochDemoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEpochDemoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEpochDemoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EpochDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEpochDemoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EpochDemoGameModeBase.h" },
		{ "ModuleRelativePath", "EpochDemoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEpochDemoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEpochDemoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEpochDemoGameModeBase_Statics::ClassParams = {
		&AEpochDemoGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AEpochDemoGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEpochDemoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEpochDemoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEpochDemoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEpochDemoGameModeBase, 2313908658);
	template<> EPOCHDEMO_API UClass* StaticClass<AEpochDemoGameModeBase>()
	{
		return AEpochDemoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEpochDemoGameModeBase(Z_Construct_UClass_AEpochDemoGameModeBase, &AEpochDemoGameModeBase::StaticClass, TEXT("/Script/EpochDemo"), TEXT("AEpochDemoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEpochDemoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
