// Fill out your copyright notice in the Description page of Project Settings.

#include "SchoolOfFish.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"
#include "Runtime/RenderCore/Public/ShaderCore.h"

//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, SchoolOfFish, "SchoolOfFish" );

void FSchoolOfFishModule::StartupModule()
{
	FString realFolder = FPaths::Combine(
		IPluginManager::Get().FindPlugin(TEXT("ShaderFishPlugin"))->GetBaseDir(),
		TEXT("Shaders"));

	AddShaderSourceDirectoryMapping(TEXT("/Plugin/ShaderFishPlugin"), realFolder);
}

void FSchoolOfFishModule::ShutdownModule()
{
}

IMPLEMENT_PRIMARY_GAME_MODULE(FSchoolOfFishModule, SchoolOfFish, "SchoolOfFish");
