// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB02GameMode.h"
#include "PVZ_USFX_LAB02Pawn.h"
#include "Zombie.h"

APVZ_USFX_LAB02GameMode::APVZ_USFX_LAB02GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APVZ_USFX_LAB02Pawn::StaticClass();
}

void APVZ_USFX_LAB02GameMode::BeginPlay()
{
	Super::BeginPlay();

	float initialPositionX = -350.0f;
	for (int i = 0; i < 10; i++)
	{
		SpawnZombie(FVector(initialPositionX + i * 100.0f, 90.0f, 250.0f));
	} 

}

void APVZ_USFX_LAB02GameMode::SpawnZombie(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	//SpawnLocation.SetLocation(FVector(-350.0f, 90.0f, 250.0f));

	GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation);
}