// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"

#include "GrabberComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LABAPROJECTSECOND_API UGrabberComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabberComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Use();
	void Grab();
	void Release();
	void Throw();

private:
	UInputComponent* m_inputComponent = nullptr;
	UPhysicsHandleComponent* m_physicsHandle = nullptr;


	UPROPERTY(EditAnywhere)
	float GrabRange = 200.0f;

	UPROPERTY(EditAnywhere)
	float ThrowStrength = 100.0f;
		
};
