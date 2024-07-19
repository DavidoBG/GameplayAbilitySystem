// Copyright bolasGrandes

#pragma once


#include "CoreMinimal.h"
#include "Character/CharacterBaseAura.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public ACharacterBaseAura, public IEnemyInterface
{
	GENERATED_BODY()
public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bHighlighted = false;
	
};
