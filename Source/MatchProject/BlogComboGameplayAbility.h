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

		/** AbilitySystemComponentのGameplayTagCountContainerに新しいGameplayTagを追加する */
		UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
		virtual void AddGameplayTags(const FGameplayTagContainer GameplayTags);

	/** AbilitySystemComponentのGameplayTagCountContainerのGameplayTagを削除する */
	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
		virtual void RemoveGameplayTags(const FGameplayTagContainer GameplayTags);

};