// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../DefenseGame.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class DEFENSEGAME_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(VisibleAnywhere, Category = "Camera")
		USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = "Camera")
		UCameraComponent* Camera;
};
