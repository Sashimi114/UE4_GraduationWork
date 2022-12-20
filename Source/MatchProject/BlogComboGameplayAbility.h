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

		/** AbilitySystemComponent‚ÌGameplayTagCountContainer‚ÉV‚µ‚¢GameplayTag‚ğ’Ç‰Á‚·‚é */
		UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
		virtual void AddGameplayTags(const FGameplayTagContainer GameplayTags);

	/** AbilitySystemComponent‚ÌGameplayTagCountContainer‚ÌGameplayTag‚ğíœ‚·‚é */
	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
		virtual void RemoveGameplayTags(const FGameplayTagContainer GameplayTags);

};