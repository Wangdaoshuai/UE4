// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/*
1、CoreMinimal.h 包含UE4核心编程环境普遍存在的类型（包括FString、FName、TArray）

2、GameFramework/Actor.h 因为是基于Actor生成的源代码，所以默认包含Actor的头文件

3、类的命名规则
项目名称大写+_API 类名
类命名只包含字母数字字符，不包括空格。域将通知是否输入了无效命名。

generated.h  虚幻将生成所有反射数据并存入该文件。必须将该文件作为声明类型的标头文件中
最后一个语句，它必须在最下方。

UE4反射机制：反射是指在运行状态下，任意一个实体类都能够知道这个类的所有属性和方法
对于任意一个对象，都能够调用它的任意方法和属性，这种动态获取信息以及动态调用对象方法的功能。

GENERATED_BODY() UE4将这个标记替换为将该类型生成的所有必要的样板代码。

*/
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"//头文件最下边
//标识符，标识出下面是个类 UE4能识别
UCLASS()
class QUICKSTART_API AFloatingActor : public AActor
{
	GENERATED_BODY()//ue4自动生成的一堆代码，编译的时候自动替换掉
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

	//将变量公开到编辑器或者蓝图
	//VisibleAnywhere修饰符设置为该属性为任何地方可见
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* VisualMesh;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "FloatingActor")
		float FloatSpeed = 20.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
		float RotationSpeed = 20.0f;


protected:
	// Called when the game starts or when spawned
   //游戏一开始调用
	virtual void BeginPlay() override;//override说明要重写这个虚函数

public:	
	// Called every frame
	//
	virtual void Tick(float DeltaTime) override;

};
