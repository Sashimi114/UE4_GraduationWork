#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "BlogComboGameplayAbility.generated.h"

/**
*
*/
UCLASS()
class MATCHPROJECT_API UBlogComboGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

		/** AbilitySystemComponent��GameplayTagCountContainer�ɐV����GameplayTag��ǉ����� */
		UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
		virtual void AddGameplayTags(const FGameplayTagContainer GameplayTags);

	/** AbilitySystemComponent��GameplayTagCountContainer��GameplayTag���폜���� */
	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
		virtual void RemoveGameplayTags(const FGameplayTagContainer GameplayTags);

};