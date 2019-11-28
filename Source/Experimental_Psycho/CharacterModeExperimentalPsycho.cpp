// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterModeExperimentalPsycho.h"
#include "Experimental_PsychoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACharacterModeExperimentalPsycho::ACharacterModeExperimentalPsycho()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BluePrints/MyCharacter.MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}