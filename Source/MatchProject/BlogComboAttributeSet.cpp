// Fill out your copyright notice in the Description page of Project Settings.


#include "BlogComboAttributeSet.h"
#include "Net/UnrealNetWork.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "AbilitySystemComponent.h"
#include "CharacterBase.h"

//初期化
UBlogComboAttributeSet::UBlogComboAttributeSet()
	:Health(1000.0f)
	,MaxHealth(1000.0f)
	,Stamina(100.0f)
    ,MaxStamina(100.0f)
	,Deadly(3.0f)
    ,MaxDeadly(3.0f)
	,AttackPower(1.0f)
    ,SkyComboCount(0.0f)
    ,MaxSkyComboCount(3.0f)
	,DamageCut(7.0f)
{
}

//
void UBlogComboAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UBlogComboAttributeSet, Health);
    DOREPLIFETIME(UBlogComboAttributeSet, MaxHealth);
    DOREPLIFETIME(UBlogComboAttributeSet, Stamina);
    DOREPLIFETIME(UBlogComboAttributeSet, MaxStamina);
    DOREPLIFETIME(UBlogComboAttributeSet, Deadly);
    DOREPLIFETIME(UBlogComboAttributeSet, MaxDeadly);
    DOREPLIFETIME(UBlogComboAttributeSet, AttackPower);
    DOREPLIFETIME(UBlogComboAttributeSet, SkyComboCount);
    DOREPLIFETIME(UBlogComboAttributeSet, MaxSkyComboCount);
    DOREPLIFETIME(UBlogComboAttributeSet, DamageCut);
}

//
void UBlogComboAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

    FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
    UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
    const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();

    float DeltaValue = 0.f;
    if (Data.EvaluatedData.ModifierOp == EGameplayModOp::Type::Additive)
    {
        DeltaValue = Data.EvaluatedData.Magnitude;
    }

    /* これはこのAttributeSetのオーナーであるはずです */
    AActor* TargetActor = nullptr;
    AController* TargetController = nullptr;
    ACharacterBase* TargetCharacter = nullptr;
    if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
    {
        TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
        TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
        TargetCharacter = Cast<ACharacterBase>(TargetActor);
    }
    if (IsValid(TargetCharacter) == true)
    {
        if (Data.EvaluatedData.Attribute == GetHealthAttribute())
        {
            SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
            TargetCharacter->HandleHealthChanged(DeltaValue, SourceTags);
        }
        if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
        {
            SetStamina(FMath::Clamp(GetStamina(), 0.f, GetMaxStamina()));
            TargetCharacter->HandleStaminaChanged(DeltaValue, SourceTags);
        }
        if (Data.EvaluatedData.Attribute == GetDeadlyAttribute())
        {
            SetDeadly(FMath::Clamp(GetDeadly(), 0.f, GetMaxDeadly()));
            TargetCharacter->HandleDeadlyChanged(DeltaValue, SourceTags);
        }
        if (Data.EvaluatedData.Attribute == GetSkyComboCountAttribute())
        {
            SetSkyComboCount(FMath::Clamp(GetSkyComboCount(), 0.f, GetMaxSkyComboCount()));
            TargetCharacter->HandleSkyComboCountChanged(DeltaValue, SourceTags);
        }
    }

}

void UBlogComboAttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBlogComboAttributeSet,Health,OldValue);
}

void UBlogComboAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBlogComboAttributeSet, MaxHealth, OldValue);
}

void UBlogComboAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBlogComboAttributeSet, Stamina, OldValue);
}

void UBlogComboAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UBlogComboAttributeSet, MaxStamina, OldValue);
}

void UBlogComboAttributeSet::OnRep_Deadly(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBlogComboAttributeSet, Deadly, OldValue);
}

void UBlogComboAttributeSet::OnRep_MaxDeadly(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UBlogComboAttributeSet, MaxDeadly, OldValue);
}

void UBlogComboAttributeSet::OnRep_AttackPower(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBlogComboAttributeSet, AttackPower, OldValue);
}

void UBlogComboAttributeSet::OnRep_SkyComboCount(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UBlogComboAttributeSet, SkyComboCount, OldValue);
}

void UBlogComboAttributeSet::OnRep_MaxSkyComboCount(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UBlogComboAttributeSet, MaxSkyComboCount, OldValue);
}

void UBlogComboAttributeSet::OnRep_DamageCut(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBlogComboAttributeSet, DamageCut, OldValue);
}
