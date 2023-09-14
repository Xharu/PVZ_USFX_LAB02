// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB02GameMode.generated.h"

class APotenciador;

UCLASS(MinimalAPI)
class APVZ_USFX_LAB02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_USFX_LAB02GameMode();

	TArray<class AZombie*> ArrayZombies;
	TArray<class APlant*> ArrayPlants;
	//TMap<APotenciador*, int32> MapPotenciadores;
	TMap<FString, uint32> MapPotenciadores;
	
	int32 NumberZombies = 5;
	int32 NumberZombiesSpawned = 0;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	AZombie* SpawnZombie(FVector _spawnPosition);
	APlant* SpawnPlant(FVector _spawnPosition);

	FTimer Temporizador;
	float TiempoTranscurrido = 0.0f;
	float TiempoTranscurridoSiguientePala = 0.0f;
	float TiempoTranscurridoSiguienteAbono = 0.0f;

	FTimerHandle TimerHandlePotenciadoresAgua;
	float IncrementarAguaCada = 20.0f;

	void TimerCallBackPotenciadoresAgua();
	void VisualizarPotenciadores();
};



