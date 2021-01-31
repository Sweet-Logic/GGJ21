// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LateForWorkPlayerController.h"

#include "LateForWorkCharacter.generated.h"

UCLASS(Blueprintable)
class ALateForWorkCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ALateForWorkCharacter();

	virtual void BeginPlay() override;

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(UInputComponent* _inputComponent) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UFUNCTION(BlueprintNativeEvent, Category = "C++ Functions")
		void InteractButtonPressed();

	void InteractButtonPressed_Implementation();

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float m_movementSpeed = 20.f;





	ALateForWorkPlayerController* m_playerController = nullptr;

	FVector m_forwardVector = FVector(0.0f, 0.0f, 0.0f);
	FVector m_rightVector = FVector(0.0f,0.0f,0.0f);

	//Action Mappings
	//Input handlers for Interact
	void InteractPressed();

	//Input handlers for Pause
	void PausePressed();

	//Input handlers for Display List
	void DisplayListPressed();

	//Axis Mappings
//Input handlers for Move Forward
	void OnMoveForwardPressed(float Value);

	//Input handlers for Move Right
	void OnMoveRightPressed(float Value);
};

