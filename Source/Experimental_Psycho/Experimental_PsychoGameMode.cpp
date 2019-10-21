// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Experimental_PsychoGameMode.h"
#include "Experimental_PsychoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExperimental_PsychoGameMode::AExperimental_PsychoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
