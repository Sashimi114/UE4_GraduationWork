// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MATCHPROJECT_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "MyBPLibrary")
		static FString ReplaceUnsupportedCharacter(const UFont* Font, FString SourceStr, FString ReplaceStr);

private:
	static bool IsSupportedCharacter(const UFont* Font, TCHAR SourceChar);
};
