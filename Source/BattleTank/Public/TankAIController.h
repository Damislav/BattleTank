// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

	
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 *
 */
class ATank;	

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()


protected:
	// how clsoe can ai tank coem to player
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float AcceptanceRadius = 3000;
 


private:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;


	
	 
};