// Copyright bolasGrandes


#include "CharacterBaseAura.h"

// Sets default values
ACharacterBaseAura::ACharacterBaseAura()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterBaseAura::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterBaseAura::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterBaseAura::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

