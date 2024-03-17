// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB02GameMode.h"
#include "Galaga_USFX_LAB02Pawn.h"
//#include "NaveEnemiga.h"
//#include "NaveEnemigaCaza.h"

AGalaga_USFX_LAB02GameMode::AGalaga_USFX_LAB02GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_LAB02Pawn::StaticClass();
}

