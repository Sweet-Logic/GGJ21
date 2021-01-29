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

}

//Action Mappings

//Input handlers for UI Back
void ALateForWorkPlayerController::UIBackPressed()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("UI Back, But there is no functionality yet!"));
}

void ALateForWorkPlayerController::UIBackReleased()
{
}

//Input handlers for UI Select
void ALateForWorkPlayerController::UISelectPressed()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("UI Select, But there is no functionality yet!"));

}

void ALateForWorkPlayerController::UISelectReleased()
{
}

//Axis Mappings
//Input handlers for UI Up
void ALateForWorkPlayerController::OnUIUpPressed()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("OnUIUpPressed, But there is no functionality yet!"));

}

void ALateForWorkPlayerController::OnUIUpReleased()
{

}

//Input handlers for UI Right
void ALateForWorkPlayerController::OnUIRightPressed()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("OnUIRightPressed, But there is no functionality yet!"));
}

void ALateForWorkPlayerController::OnUIRightRealease()
{

}