// Copyright 2020 soapsoapsoaps@outlook.com


#include "SS_GameMode.h"
#include "Succu_Service/Controller/Player/SS_PlayerController.h"
#include "Succu_Service/Character/SS_Character.h"
#include "UObject/ConstructorHelpers.h"

ASS_GameMode::ASS_GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASS_PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/PlayerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}