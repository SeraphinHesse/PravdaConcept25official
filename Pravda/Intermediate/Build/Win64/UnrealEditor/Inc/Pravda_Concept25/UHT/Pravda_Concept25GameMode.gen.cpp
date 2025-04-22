// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pravda_Concept25/Pravda_Concept25GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePravda_Concept25GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PRAVDA_CONCEPT25_API UClass* Z_Construct_UClass_APravda_Concept25GameMode();
PRAVDA_CONCEPT25_API UClass* Z_Construct_UClass_APravda_Concept25GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pravda_Concept25();
// End Cross Module References

// Begin Class APravda_Concept25GameMode
void APravda_Concept25GameMode::StaticRegisterNativesAPravda_Concept25GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APravda_Concept25GameMode);
UClass* Z_Construct_UClass_APravda_Concept25GameMode_NoRegister()
{
	return APravda_Concept25GameMode::StaticClass();
}
struct Z_Construct_UClass_APravda_Concept25GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Pravda_Concept25GameMode.h" },
		{ "ModuleRelativePath", "Pravda_Concept25GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APravda_Concept25GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APravda_Concept25GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Pravda_Concept25,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APravda_Concept25GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APravda_Concept25GameMode_Statics::ClassParams = {
	&APravda_Concept25GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APravda_Concept25GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APravda_Concept25GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APravda_Concept25GameMode()
{
	if (!Z_Registration_Info_UClass_APravda_Concept25GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APravda_Concept25GameMode.OuterSingleton, Z_Construct_UClass_APravda_Concept25GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APravda_Concept25GameMode.OuterSingleton;
}
template<> PRAVDA_CONCEPT25_API UClass* StaticClass<APravda_Concept25GameMode>()
{
	return APravda_Concept25GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APravda_Concept25GameMode);
APravda_Concept25GameMode::~APravda_Concept25GameMode() {}
// End Class APravda_Concept25GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_serap_P4_Workspaces_sehesse_pravda_Pravda_Source_Pravda_Concept25_Pravda_Concept25GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APravda_Concept25GameMode, APravda_Concept25GameMode::StaticClass, TEXT("APravda_Concept25GameMode"), &Z_Registration_Info_UClass_APravda_Concept25GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APravda_Concept25GameMode), 3313723859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_serap_P4_Workspaces_sehesse_pravda_Pravda_Source_Pravda_Concept25_Pravda_Concept25GameMode_h_1788093276(TEXT("/Script/Pravda_Concept25"),
	Z_CompiledInDeferFile_FID_Users_serap_P4_Workspaces_sehesse_pravda_Pravda_Source_Pravda_Concept25_Pravda_Concept25GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_serap_P4_Workspaces_sehesse_pravda_Pravda_Source_Pravda_Concept25_Pravda_Concept25GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
