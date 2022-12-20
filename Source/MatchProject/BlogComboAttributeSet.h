// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BlogComboAttributeSet.generated.h"

//アクセサ(Setter、Getter)を生成するためのマクロ
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
	// コンストラクタ
	UBlogComboAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/*HP*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, Health)

	/*HPの最大値*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, MaxHealth)

	/*スタミナ*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, Stamina)

	/*スタミナの最大値*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, MaxStamina)

	/*必殺ゲージ*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData Deadly;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, Deadly)

	/*必殺ゲージの最大値*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData MaxDeadly;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, MaxDeadly)

	/*攻撃力*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData AttackPower;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, AttackPower)

	/*空中コンボの回数*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData SkyComboCount;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, SkyComboCount)

	/*空中コンボの最大回数*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData MaxSkyComboCount;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, MaxSkyComboCount)

	/*ダメージカット*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlogComboAttributes)
		FGameplayAttributeData DamageCut;
	ATTRIBUTE_ACCESSORS(UBlogComboAttributeSet, DamageCut)

	//GameplayEffect実行の後に実行される関数
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)override;

protected:
	/*マルチ用*/
	/*Healthの値が変更された際に呼び出す関数*/
	UFUNCTION()
		virtual void OnRep_Health(const FGameplayAttributeData& OldValue);
	/*MaxHealthの値が変更された際に呼び出す関数*/
	UFUNCTION()
		virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);
	/*Staminaの値が変更された際に呼び出す関数*/
	UFUNCTION()
		virtual void OnRep_Stamina(const FGameplayAttributeData& OldValue);
	/*MaxStaminaの値が変更された際に呼び出す関数*/
	UFUNCTION()
		virtual void OnRep_MaxStamina(const FGameplayAttributeData& OldValue);
	/*Deadlyの値が変更された際に呼び出す関数*/
	UFUNCTION()
		virtual void OnRep_Deadly(const FGameplayAttributeData& OldValue);
	/*MaxDeadlyの値が変更された際に呼び出す関数*/
	UFUNCTION()
		virtual void OnRep_MaxDeadly(const FGameplayAttributeData& OldValue);
	/*Powerの値が変更された際に呼び出す関数*/
	UFUNCTION()
		virtual void OnRep_AttackPower(const FGameplayAttributeData& OldValue);
	/*SkyComboCountの値が変更された際に呼び出す関数*/
	UFUNCTION()
		virtual void OnRep_SkyComboCount(const FGameplayAttributeData& OldValue);
	/*MaxSkyComboCountの値が変更された際に呼び出す関数*/
	UFUNCTION()
		virtual void OnRep_MaxSkyComboCount(const FGameplayAttributeData& OldValue);
	/*DamageCutの値が変更された際に呼び出す関数*/
	UFUNCTION()
		virtual void OnRep_DamageCut(const FGameplayAttributeData& OldValue);

};
