// Copyright Epic Games, Inc. All Rights Reserved.

#include "LateForWorkGameMode.h"
#include "LateForWorkPlayerController.h"
#include "LateForWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALateForWorkGameMode::ALateForWorkGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALateForWorkPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}