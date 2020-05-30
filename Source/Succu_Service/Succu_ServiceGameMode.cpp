// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Succu_ServiceGameMode.h"
#include "Succu_ServicePlayerController.h"
#include "Succu_ServiceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASuccu_ServiceGameMode::ASuccu_ServiceGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASuccu_ServicePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}