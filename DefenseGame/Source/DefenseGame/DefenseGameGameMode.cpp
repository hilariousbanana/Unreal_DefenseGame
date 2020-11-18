// Copyright Epic Games, Inc. All Rights Reserved.

#include "DefenseGameGameMode.h"
#include "DefenseGamePlayerController.h"
#include "DefenseGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADefenseGameGameMode::ADefenseGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADefenseGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}