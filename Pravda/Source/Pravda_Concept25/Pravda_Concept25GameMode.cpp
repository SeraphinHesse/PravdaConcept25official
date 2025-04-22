// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pravda_Concept25GameMode.h"
#include "Pravda_Concept25Character.h"
#include "UObject/ConstructorHelpers.h"

APravda_Concept25GameMode::APravda_Concept25GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SC_ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
