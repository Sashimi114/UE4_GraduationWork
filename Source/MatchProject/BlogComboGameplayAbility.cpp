#include "BlogComboGameplayAbility.h"
#include "AbilitySystemComponent.h"

void UBlogComboGameplayAbility::AddGameplayTags(const FGameplayTagContainer GameplayTags)
{
	UAbilitySystemComponent* Comp = GetAbilitySystemComponentFromActorInfo();

	Comp -> AddLooseGameplayTags(GameplayTags);
}

void UBlogComboGameplayAbility::RemoveGameplayTags(const FGameplayTagContainer GameplayTags)
{
	UAbilitySystemComponent* Comp = GetAbilitySystemComponentFromActorInfo();

	Comp -> RemoveLooseGameplayTags(GameplayTags);
}