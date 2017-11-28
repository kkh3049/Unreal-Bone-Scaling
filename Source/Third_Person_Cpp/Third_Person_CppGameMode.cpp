// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Third_Person_CppGameMode.h"
#include "Third_Person_CppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThird_Person_CppGameMode::AThird_Person_CppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
