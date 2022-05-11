// Fill out your copyright notice in the Description page of Project Settings.


#include "cppTest.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AcppTest::AcppTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(Root);
}

// Called when the game starts or when spawned
void AcppTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AcppTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

