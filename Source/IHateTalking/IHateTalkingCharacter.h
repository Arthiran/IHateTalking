// Copyright Epic Games, Inc. All Rights Reserved.ACharacter

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IHateTalkingCharacter.generated.h"

UCLASS(config=Game)
class AIHateTalkingCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:

	virtual void Tick(float DeltaTime) override;

	void MoveRight(float Val);

	float currentDirection;

public:
	AIHateTalkingCharacter();

	/** Called for side to side input */
	UFUNCTION(BlueprintCallable, Category = "IHT Functions")
		void ChangeDirection(float direction);

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
