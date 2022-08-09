// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"
#include <Math/Quat.h>

// Sets default values
AFloatingActor::AFloatingActor()
{

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//创建一个指向该组件的指针
	//创建出来组件并且把地址赋值给指针
	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);//把静态mesh组件附加到根组件上

	/*
	ConstructorHelpers是ObjectBase.h中定义的特殊命名空间 例如为资源或类寻找引用、以及创建并寻找组件的助手模板
	静态类中包含了一个声明模板结构体
	去资源文件夹下寻找一个资源并加载
	*/
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	if (CubeVisualAsset.Succeeded())
	{
		VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	//调用父类有参数的构造方法，也必须放在子类的构造方法（成员方法不可用）里面，
//并且只能放在构造方法的首句。
	Super::Tick(DeltaTime);
	//获取当前物体位置
	FVector NewLocation = GetActorLocation();
	//获取当前物体的旋转
	FRotator NewRotation = GetActorRotation();
	//获取当前物体的运行时间
	float RunningTime = GetGameTimeSinceCreation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	//把高度以20的系数进行缩放
	NewLocation.Z += DeltaHeight * FloatSpeed;       //Scale our height by a factor of 20
	float DeltaRotation = DeltaTime * RotationSpeed;    //Rotate by 20 degrees per second
	NewRotation.Yaw += DeltaRotation;
	//设置位置喝旋转
	SetActorLocationAndRotation(NewLocation, NewRotation);
	
}



