// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorLevel.generated.h"


//class USceneComponent;
//class UStaticMeshComponent;
//class UParticleSystemComponent;
//class UAudioComponent;
//class UBoxComponent;
UCLASS()
class QUICKSTART_API AActorLevel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorLevel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	USceneComponent *MyScene;

	UPROPERTY(EditAnywhere,Category = "MyMesh")
	UStaticMeshComponent *MyMesh;

	UPROPERTY(EditAnywhere, Category = "MyMesh")
	UParticleSystemComponent *MyParticle;

	UPROPERTY(EditAnywhere, Category = "MyAudio")
	UAudioComponent *MyAudio;

	UPROPERTY(EditAnywhere, Category = "Box")
	UBoxComponent* MyBoxComponent;

};
