// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB02GameMode.generated.h"

UCLASS(MinimalAPI)
class APVZ_USFX_LAB02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_USFX_LAB02GameMode();


protected:
	virtual void BeginPlay() override;
	void SpawnZombie(FVector _spawnPosition);

};



