// Fill out your copyright notice in the Description page of Project Settings.


#include "SBB_PlayerCharacterNero.h"

// Sets default values
ASBB_PlayerCharacterNero::ASBB_PlayerCharacterNero()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASBB_PlayerCharacterNero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASBB_PlayerCharacterNero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASBB_PlayerCharacterNero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

