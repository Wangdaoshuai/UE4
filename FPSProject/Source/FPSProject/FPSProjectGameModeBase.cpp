// Copyright Epic Games, Inc. All Rights Reserved.


#include "FPSProjectGameModeBase.h"
#include "Engine/Engine.h"
void AFPSProjectGameModeBase::StartPlay()
{
	Super::StartPlay();//调用父类实现

	check(GEngine != nullptr);

	//游戏启动时，StartPlay()将在屏幕上打印一条新的调试消息（"Hello World, this is FPSGameModeBase!"），采用黄色文本，显示五秒钟。
	// 显示调试消息五秒。 
	// 参数中的-1"键"值类型参数能防止该消息被更新或刷新。
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));

}