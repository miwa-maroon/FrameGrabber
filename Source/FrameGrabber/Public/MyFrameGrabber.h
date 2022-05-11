// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FrameGrabber.h"
#include "GameFramework/Actor.h"
#include "Engine/GameEngine.h"
#include "Materials/MaterialInstanceDynamic.h"

#include "MyFrameGrabber.generated.h"

UCLASS()
class FRAMEGRABBER_API AMyFrameGrabber : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFrameGrabber();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	UTexture2D* StartFrameGrab();

	UFUNCTION(BlueprintCallable)
	void StopFrameGrab();

	UFUNCTION(BlueprintCallable)
	void SetMaterialInstanceDynamic(UMaterialInstanceDynamic* MI);

private:
	void ReleaseFrameGrabber();
	void Capture();

public:

	UPROPERTY()
	UMaterialInstanceDynamic* MaterialInstanceDynamic;

	UPROPERTY()
	TArray<uint8> CaptureFrameData;

	UPROPERTY()
	UTexture2D* CaptureFrameTexture;

private:
	TSharedPtr<FFrameGrabber> FrameGrabber;
};
