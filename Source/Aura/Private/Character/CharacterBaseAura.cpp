// Copyright bolasGrandes


#include "Character/CharacterBaseAura.h"

ACharacterBaseAura::ACharacterBaseAura()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACharacterBaseAura::BeginPlay()
{
	Super::BeginPlay();
	
}