// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../DefenseGame.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class DEFENSEGAME_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Pawn", meta = (AllowPrivateAccess = true))
		bool IsDead;

public:
	UMyAnimInstance();
	void SetDeadAnim()
	{
		IsDead = true;
	}
};
