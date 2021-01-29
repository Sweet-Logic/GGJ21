// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LateForWorkPlayerController.generated.h"

UCLASS()
class ALateForWorkPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ALateForWorkPlayerController();

protected:

	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

	//Action Mappings	
	//Input handlers for UI Back
	void UIBackPressed();
	void UIBackReleased();
	
	//Input handlers for UI Select
	void UISelectPressed();
	void UISelectReleased();
	
	//Axis Mappings	
	//Input handlers for UI Up
	void OnUIUpPressed();
	void OnUIUpReleased();
	
	//Input handlers for UI Right
	void OnUIRightPressed();
	void OnUIRightRealease();
};


