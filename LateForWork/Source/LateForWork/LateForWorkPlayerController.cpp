// Copyright Epic Games, Inc. All Rights Reserved.

#include "LateForWorkPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "LateForWorkCharacter.h"
#include "Engine/World.h"

#include "Engine/Engine.h"


ALateForWorkPlayerController::ALateForWorkPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ALateForWorkPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void ALateForWorkPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("UIBack", EInputEvent::IE_Pressed, this, &ALateForWorkPlayerController::UIBackPressed);
	InputComponent->BindAction("UIBack", EInputEvent::IE_Released, this, &ALateForWorkPlayerController::UIBackReleased);

	InputComponent->BindAction("UISelect", EInputEvent::IE_Pressed, this, &ALateForWorkPlayerController::UISelectPressed);
	InputComponent->BindAction("UISelect", EInputEvent::IE_Released, this, &ALateForWorkPlayerController::UISelectReleased);

	InputComponent->BindAxis("UIUp", this, &ALateForWorkPlayerController::OnUIUpPressed);

	InputComponent->BindAxis("UIRight", this, &ALateForWorkPlayerController::OnUIRightPressed);
}

//Action Mappings

//Input handlers for UI Back
void ALateForWorkPlayerController::UIBackPressed()
{
}

void ALateForWorkPlayerController::UIBackReleased()
{
}

//Input handlers for UI Select
void ALateForWorkPlayerController::UISelectPressed()
{
}

void ALateForWorkPlayerController::UISelectReleased()
{
}

//Axis Mappings
//Input handlers for UI Up
void ALateForWorkPlayerController::OnUIUpPressed(float Value)
{
}
//Input handlers for UI Right
void ALateForWorkPlayerController::OnUIRightPressed(float Value)
{
}