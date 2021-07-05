// Copyright Epic Games, Inc. All Rights Reserved.

#include "OffworldInvaderGameMode.h"
#include "OffworldInvaderPawn.h"

AOffworldInvaderGameMode::AOffworldInvaderGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AOffworldInvaderPawn::StaticClass();
}
