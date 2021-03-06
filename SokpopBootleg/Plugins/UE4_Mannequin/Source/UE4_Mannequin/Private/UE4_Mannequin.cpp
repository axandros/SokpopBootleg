// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4_Mannequin.h"

#define LOCTEXT_NAMESPACE "FUE4_MannequinModule"

void FUE4_MannequinModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FUE4_MannequinModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUE4_MannequinModule, UE4_Mannequin)