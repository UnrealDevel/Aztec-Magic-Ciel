// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileReaderLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPARXMAGIC_API UFileReaderLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "External Process")
	static void LaunchExternalProcess(const FString& ExecutablePath);

};
