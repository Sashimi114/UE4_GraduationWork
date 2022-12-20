// Copyright Epic Games, Inc. All Rights Reserved.

#include "MatchProjectGameMode.h"
#include "MatchProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMatchProjectGameMode::AMatchProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
