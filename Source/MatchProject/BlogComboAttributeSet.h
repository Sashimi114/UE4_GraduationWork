// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BlogComboAttributeSet.generated.h"

//�A�N�Z�T(Setter�AGetter)�𐶐����邽�߂̃}�N��
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
*
*/
UCLASS()
class MATCHPROJECT_API UBlogComboAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	// �R���X�g���N�^
	UBlogComboAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/*HP*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, Health)

	/*HP�̍ő�l*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, MaxHealth)

	/*�X�^�~�i*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, Stamina)

	/*�X�^�~�i�̍ő�l*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, MaxStamina)

	/*�K�E�Q�[�W*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData Deadly;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, Deadly)

	/*�K�E�Q�[�W�̍ő�l*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData MaxDeadly;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, MaxDeadly)

	/*�U����*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData AttackPower;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, AttackPower)

	/*�󒆃R���{�̉�*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData SkyComboCount;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, SkyComboCount)

	/*�󒆃R���{�̍ő��*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData MaxSkyComboCount;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, MaxSkyComboCount)

	/*�_���[�W�J�b�g*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData DamageCut;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, DamageCut)

	//GameplayEffect���s�̌�Ɏ��s�����֐�
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)override;

protected:
	/*�}���`�p*/
	/*Health�̒l���ύX���ꂽ�ۂɌĂяo���֐�*/
	UFUNCTION()
		virtual void OnRep_Health(const FGameplayAttributeData& OldValue);
	/*MaxHealth�̒l���ύX���ꂽ�ۂɌĂяo���֐�*/
	UFUNCTION()
		virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);
	/*Stamina�̒l���ύX���ꂽ�ۂɌĂяo���֐�*/
	UFUNCTION()
		virtual void OnRep_Stamina(const FGameplayAttributeData& OldValue);
	/*MaxStamina�̒l���ύX���ꂽ�ۂɌĂяo���֐�*/
	UFUNCTION()
		virtual void OnRep_MaxStamina(const FGameplayAttributeData& OldValue);
	/*Deadly�̒l���ύX���ꂽ�ۂɌĂяo���֐�*/
	UFUNCTION()
		virtual void OnRep_Deadly(const FGameplayAttributeData& OldValue);
	/*MaxDeadly�̒l���ύX���ꂽ�ۂɌĂяo���֐�*/
	UFUNCTION()
		virtual void OnRep_MaxDeadly(const FGameplayAttributeData& OldValue);
	/*Power�̒l���ύX���ꂽ�ۂɌĂяo���֐�*/
	UFUNCTION()
		virtual void OnRep_AttackPower(const FGameplayAttributeData& OldValue);
	/*SkyComboCount�̒l���ύX���ꂽ�ۂɌĂяo���֐�*/
	UFUNCTION()
		virtual void OnRep_SkyComboCount(const FGameplayAttributeData& OldValue);
	/*MaxSkyComboCount�̒l���ύX���ꂽ�ۂɌĂяo���֐�*/
	UFUNCTION()
		virtual void OnRep_MaxSkyComboCount(const FGameplayAttributeData& OldValue);
	/*DamageCut�̒l���ύX���ꂽ�ۂɌĂяo���֐�*/
	UFUNCTION()
		virtual void OnRep_DamageCut(const FGameplayAttributeData& OldValue);

};
