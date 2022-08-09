// Fill out your copyright notice in the Description page of Project Settings.
//#include "Components/StaticMeshComponent.h"
//#include "Particles/ParticleSystemComponent.h"
//#include "Components/AudioComponent.h"
//#include "Components/BoxComponent.h"
#include "ActorLevel.h"

// Sets default values
AActorLevel::AActorLevel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyScene = CreateAbstractDefaultSubobject<USceneComponent>(TEXT("MyScene"));
	RootComponent = MyScene;
	//添加静态mesh，用于显示的物体的形状
	MyMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	MyMesh->SetupAttachment(MyScene);
	//添加粒子组件
	MyParticle = CreateAbstractDefaultSubobject<UParticleSystemComponent>(TEXT("MyParticle"));
	MyParticle->SetupAttachment(MyMesh);
	//添加声音组件
	MyAudio = CreateAbstractDefaultSubobject<UAudioComponent>(TEXT("MyAudio"));
	MyAudio->SetupAttachment(MyMesh);
	//添加盒体组件
	MyBoxComponent = CreateAbstractDefaultSubobject<UBoxComponent>(TEXT("MyBoxComponent"));
	MyBoxComponent->SetupAttachment(MyMesh);
}

// Called when the game starts or when spawned
void AActorLevel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorLevel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

