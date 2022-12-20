// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "BlogComboAttributeSet.h" 
//#include <gs2/ez/Gs2Ez.hpp>
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS(config = Game)
class MATCHPROJECT_API APlayerCharacter : public ACharacterBase
{
	GENERATED_BODY()
	
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;



public:
	// Sets default values for this character's properties
	APlayerCharacter();

	//// GS2-Identifier で発行したクライアントID
	//UPROPERTY(EditAnywhere, Category = GS2)
	//	FString ClientId;

	//// GS2-Identifier で発行したクライアントシークレット
	//UPROPERTY(EditAnywhere, Category = GS2)
	//	FString ClientSecret;

	//// アカウントを作成する GS2-Account のネームスペース名
	//UPROPERTY(EditAnywhere, Category = GS2)
	//	FString AccountNamespaceName;

	//// アカウントの認証結果に付与する署名を計算するのに使用する暗号鍵
	//UPROPERTY(EditAnywhere, Category = GS2)
	//	FString AccountEncryptionKeyId;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;
private:
	/*std::shared_ptr<gs2::ez::Profile> ProfilePtr;
	std::shared_ptr<gs2::ez::Client> ClientPtr;

	gs2::ez::GameSession GameSession;
	gs2::ez::account::EzAccount EzAccount;

	void ProfileInitialize();
	void AccountCreate();
	void ProfileLogin();
	void AccountListTakeOverSettings();
	void ProfileFinalize();*/

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	UFUNCTION(BlueprintCallable, Category = "Iwax UE Cpp")
	void MoveForward(float Value);

	/** Called for side to side input */
	UFUNCTION(BlueprintCallable, Category = "Iwax UE Cpp")
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** CameraBoomオブジェクトを返す **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** FollowCameraオブジェクトを返す **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	/** BeginPlay, PossessedBy override */
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;
	
	/****/

};
