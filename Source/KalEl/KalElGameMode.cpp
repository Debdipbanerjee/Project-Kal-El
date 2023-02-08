// Copyright Epic Games, Inc. All Rights Reserved.

#include "KalElGameMode.h"
#include "KalElCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKalElGameMode::AKalElGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
