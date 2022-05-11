// Fill out your copyright notice in the Description page of Project Settings.


#include "AdvancedActor.h"

// Sets default values
AAdvancedActor::AAdvancedActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdvancedActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAdvancedActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

