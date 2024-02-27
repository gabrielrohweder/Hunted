// Copyright Epic Games, Inc. All Rights Reserved.

#include "HuntedGameMode.h"
#include "HuntedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHuntedGameMode::AHuntedGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
