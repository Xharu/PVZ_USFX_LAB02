// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
AZombie::AZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));

	ZombieMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);

	RootComponent = ZombieMeshComponent;
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	
	//SetLifeSpan(10);
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

