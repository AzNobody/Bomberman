// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP2_EQUIPE_BRAVOGameMode.h"
#include "TP2_EQUIPE_BRAVOCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATP2_EQUIPE_BRAVOGameMode::ATP2_EQUIPE_BRAVOGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
