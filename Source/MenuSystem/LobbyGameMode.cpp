// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if (GameState)
	{
		// You can add custom logic here to handle new players joining the lobby
		int32 NumberOfPlayers = GameState.Get()->PlayerArray.Num();
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Yellow, FString::Printf(TEXT("Player %d has joined game."), NumberOfPlayers));
			
			APlayerState* PlayerState = NewPlayer->GetPlayerState<APlayerState>();
			if (PlayerState)
			{
				FString PlayerName = PlayerState->GetPlayerName();
				GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Cyan, FString::Printf(TEXT("%s has joined game."), *PlayerName));
			}
		}
	}
}

void ALobbyGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	APlayerState* PlayerState = Exiting->GetPlayerState<APlayerState>();
	if (PlayerState)
	{
		int32 NumberOfPlayers = GameState.Get()->PlayerArray.Num();
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Yellow, FString::Printf(TEXT("Player %d left in game."), NumberOfPlayers - 1));
		FString PlayerName = PlayerState->GetPlayerName();
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Cyan, FString::Printf(TEXT("%s has exited game."), *PlayerName));
	}
}
