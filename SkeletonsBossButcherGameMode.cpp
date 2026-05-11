// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkeletonsBossButcherGameMode.h"
#include "SkeletonsBossButcherCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASkeletonsBossButcherGameMode::ASkeletonsBossButcherGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
