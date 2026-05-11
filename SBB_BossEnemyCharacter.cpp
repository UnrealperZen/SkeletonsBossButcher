// Fill out your copyright notice in the Description page of Project Settings.


#include "SBB_BossEnemyCharacter.h"

// Sets default values
ASBB_BossEnemyCharacter::ASBB_BossEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASBB_BossEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASBB_BossEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASBB_BossEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

