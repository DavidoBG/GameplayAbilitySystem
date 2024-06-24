// Copyright bolasGrandes

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBaseAura.generated.h"

UCLASS(Abstract)
class AURA_API ACharacterBaseAura : public ACharacter
{
	GENERATED_BODY()

public:
	ACharacterBaseAura();

protected:
	virtual void BeginPlay() override;

};
