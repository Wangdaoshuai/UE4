// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	//此函数声明允许你重载StartPlay，以便游戏启动时在屏幕上打印日志消息。
private:
	virtual void StartPlay() override;// override 确保该函数为虚函数并覆写来自基类的虚函数
};
