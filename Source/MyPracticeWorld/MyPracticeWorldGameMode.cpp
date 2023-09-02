// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyPracticeWorldGameMode.h"
#include "MyPracticeWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyPracticeWorldGameMode::AMyPracticeWorldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
