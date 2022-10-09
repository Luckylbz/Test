// Copyright Epic Games, Inc. All Rights Reserved.

#include "cupupGameMode.h"
#include "cupupHUD.h"
#include "cupupCharacter.h"
#include "UObject/ConstructorHelpers.h"

AcupupGameMode::AcupupGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AcupupHUD::StaticClass();
}
