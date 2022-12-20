// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GenericPlatform/GenericPlatform.h"
#include "AbilitySystemInterface.h"
#include "BlogComboAttributeSet.h"
#include "CharacterBase.generated.h"

UCLASS()

class MATCHPROJECT_API ACharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** ability system **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities, meta = (AllowPrivateAccess = "true"))
		class UAbilitySystemComponent* AbilitySystem;
	UAbilitySystemComponent* GetAbilitySystemComponent() const
	{
		return AbilitySystem;
	};

	/** ability list **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		TArray<TSubclassOf<class UGameplayAbility>> AbilityList;
	/** abilityeffect list **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		TArray<TSubclassOf<class UGameplayEffect>> AbilityEffectList;
	void AddStartupGameplayAbilities();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;

	virtual void OnRep_Controller() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** AbilitySet����̗́iHP�j���擾�i�u���[�v�����g�ł��g����j**/
	UFUNCTION(BlueprintCallable)
		virtual float GetHealth() const;
	/** AbilitySet����̗́iHP�j�̍ő�l���擾�i�u���[�v�����g�ł��g����j**/
	UFUNCTION(BlueprintCallable)
		virtual float GetMaxHealth() const;
	/** AbilitySet����X�^�~�i���擾�i�u���[�v�����g�ł��g����j**/
	UFUNCTION(BlueprintCallable)
		virtual float GetStamina() const;
	/** AbilitySet����X�^�~�i�̍ő�l���擾�i�u���[�v�����g�ł��g����j**/
	UFUNCTION(BlueprintCallable)
		virtual float GetMaxStamina() const;
	/** AbilitySet����K�E�Q�[�W���擾�i�u���[�v�����g�ł��g����j**/
	UFUNCTION(BlueprintCallable)
		virtual float GetDeadly() const;
	/** AbilitySet����K�E�Q�[�W�̍ő�l���擾�i�u���[�v�����g�ł��g����j**/
	UFUNCTION(BlueprintCallable)
		virtual float GetMaxDeadly() const;
	/** AbilitySet����U���͂��擾�i�u���[�v�����g�ł��g����j**/
	UFUNCTION(BlueprintCallable)
		virtual float GetAttackPower() const;
	/** AbilitySet����U���͂��擾�i�u���[�v�����g�ł��g����j**/
	UFUNCTION(BlueprintCallable)
		virtual float GetSkyComboCount() const;
	/** AbilitySet����U���͂��擾�i�u���[�v�����g�ł��g����j**/
	UFUNCTION(BlueprintCallable)
		virtual float GetMaxSkyComboCount() const;
	/** AbilitySet����_���[�W�J�b�g���擾�i�u���[�v�����g�ł��g����j**/
	UFUNCTION(BlueprintCallable)
		virtual float GetDamageCut() const;

	virtual void HandleHealthChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	virtual void HandleStaminaChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	virtual void HandleDeadlyChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	virtual void HandleSkyComboCountChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);

protected:

	/** AttributeSet **/
	UPROPERTY()
		UBlogComboAttributeSet* AttributeSet;

	UPROPERTY()
		bool bAbilitiesInitialized;

	/** **/
	UFUNCTION(BlueprintImplementableEvent)
		void OnHealthChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	/** **/
	UFUNCTION(BlueprintImplementableEvent)
		void OnStaminaChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	/** **/
	UFUNCTION(BlueprintImplementableEvent)
		void OnDeadlyChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	/** **/
	UFUNCTION(BlueprintImplementableEvent)
		void OnSkyComboCountChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);

	

};
