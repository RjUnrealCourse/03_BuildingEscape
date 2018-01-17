// Copyright Ramachandra Junior 2018

#include "BuildingEscape.h"
#include "FPSCharacter.h"


// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // create a subobject
    FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(FName("FPS Camera"));
    // Attach camera to capsule
    FPSCameraComponent->SetupAttachment(GetCapsuleComponent());

    // set position
    FPSCameraComponent->SetRelativeLocation(FVector(0.f, 0.f, BaseEyeHeight + 50.f));
    // rotate with controller
    FPSCameraComponent->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString("I am FPSCharacter!"));
    }
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

