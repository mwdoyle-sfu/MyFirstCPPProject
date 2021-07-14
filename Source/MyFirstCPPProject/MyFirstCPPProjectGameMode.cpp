// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyFirstCPPProjectGameMode.h"
#include "MyFirstCPPProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyFirstCPPProjectGameMode::AMyFirstCPPProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
