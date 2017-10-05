// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Public/TankAimingComponent.h"
#include "TankAIController.generated.h"

UCLASS()
class BATTLETANKS_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float AcceptanceRadius = 3000;

	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

private:
	UTankAimingComponent* GetAimingComponent();
};
