// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RWTxt.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL5_ORCA_API URWTxt : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() public:

	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadTxt"))
		static bool FileLoadString(FString FileNameA, FString& SaveTextA);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveTxt"))
		static bool FileSaveString(FString SaveTextB, FString FileNameB);
	
};
