// Copyright Epic Games, Inc. All Rights Reserved.

#include "LateForWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Materials/Material.h"
#include "Engine/World.h"

ALateForWorkCharacter::ALateForWorkCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level


	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Donno if needed
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	
}

void ALateForWorkCharacter::BeginPlay()
{
	Super::BeginPlay();
	m_playerController = Cast<ALateForWorkPlayerController>(GetController());

	m_forwardVector = GetActorForwardVector();
	m_rightVector = GetActorRightVector();
}

void ALateForWorkCharacter::SetupPlayerInputComponent(UInputComponent* _inputComponent)
{
	Super::SetupPlayerInputComponent(_inputComponent);

	// set up gameplay key bindings
	_inputComponent->BindAction("InteractPressed", EInputEvent::IE_Pressed, this, &ALateForWorkCharacter::InteractPressed);
	_inputComponent->BindAction("Pause", EInputEvent::IE_Pressed, this, &ALateForWorkCharacter::PausePressed);
	_inputComponent->BindAction("DisplayList", EInputEvent::IE_Pressed, this, &ALateForWorkCharacter::DisplayListPressed);

	_inputComponent->BindAxis("MoveForward", this, &ALateForWorkCharacter::OnMoveForwardPressed);
	_inputComponent->BindAxis("MoveRight", this, &ALateForWorkCharacter::OnMoveRightPressed);

}

void ALateForWorkCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

	
}

void ALateForWorkCharacter::InteractButtonPressed_Implementation()
{

}


//Action Mappings
void ALateForWorkCharacter::InteractPressed()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Interact Pressed, But there is no functionality yet!"));
}

//Input handlers for Pause
void ALateForWorkCharacter::PausePressed()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Pause Pressed, But there is no functionality yet!"));

}

//Input handlers for Display List
void ALateForWorkCharacter::DisplayListPressed()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("DisplayListPressed, But there is no functionality yet!"));

}

//Axis Mappings
//Input handlers for Move Forward
void ALateForWorkCharacter::OnMoveForwardPressed(float Value)
{ 
	if (nullptr != m_playerController)
	{
		GetActorForwardVector();
		AddMovementInput(m_forwardVector, Value* m_movementSpeed);
	}

}

//Input handlers for Move Right
void ALateForWorkCharacter::OnMoveRightPressed(float Value)
{
	if (nullptr != m_playerController)
	{
		GetActorForwardVector();
		AddMovementInput(m_rightVector, Value* m_movementSpeed);
	}

}