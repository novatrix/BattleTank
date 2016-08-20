// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankMovementComponent.h"



void UTankMovementComponent::IntendMoveForward(float Throw)
{
	auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s intend to move forward %f"), *Name, Throw);
}
