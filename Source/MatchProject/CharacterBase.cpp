// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "AbilitySystemComponent.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
	AttributeSet = CreateDefaultSubobject<UBlogComboAttributeSet>(TEXT("AttributeSet"));
	AbilitySystem->ReplicationMode = EGameplayEffectReplicationMode::Full;
}

void ACharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void ACharacterBase::AddStartupGameplayAbilities()
{
	if (IsValid(AbilitySystem) == true)
	{
		for (TSubclassOf<UGameplayAbility>& StartupAbility : AbilityList)
		{
			AbilitySystem->GiveAbility(FGameplayAbilitySpec(StartupAbility, 1, INDEX_NONE, this));
		}

		for (TSubclassOf<UGameplayEffect>& Effect : AbilityEffectList)
		{
			FGameplayEffectContextHandle EffectContext = AbilitySystem->MakeEffectContext();
			EffectContext.AddSourceObject(this);

			FGameplayEffectSpecHandle NewHandle = AbilitySystem->MakeOutgoingSpec(Effect, 1, EffectContext);
			if (NewHandle.IsValid())
			{
				FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystem->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystem);
			}
		}

		bAbilitiesInitialized = true;
	}
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void ACharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (IsValid(AbilitySystem) == true)
	{
		AbilitySystem->InitAbilityActorInfo(this, this);
		AddStartupGameplayAbilities();
	}
}

void ACharacterBase::OnRep_Controller()
{
	Super::OnRep_Controller();

	if (IsValid(AbilitySystem) == true)
	{
		AbilitySystem->RefreshAbilityActorInfo();
	}
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float ACharacterBase::GetHealth() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetHealth();
	}
	return 1.0f;
}

float ACharacterBase::GetMaxHealth() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxHealth();
	}
	return 1.0f;
}

float ACharacterBase::GetStamina() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetStamina();
	}
	return 1.0f;
}

float ACharacterBase::GetMaxStamina() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxStamina();
	}
	return 1.0f;
}

float ACharacterBase::GetDeadly() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetDeadly();
	}
	return 1.0f;
}

float ACharacterBase::GetMaxDeadly() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxDeadly();
	}
	return 1.0f;
}

float ACharacterBase::GetAttackPower() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetAttackPower();
	}
	return 1.0f;
}

float ACharacterBase::GetSkyComboCount() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetSkyComboCount();
	}
	return 1.0f;
}

float ACharacterBase::GetMaxSkyComboCount() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxSkyComboCount();
	}
	return 1.0f;
}

float ACharacterBase::GetDamageCut() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetDamageCut();
	}
	return 1.0f;
}

void ACharacterBase::HandleHealthChanged(float DeltaValue, const FGameplayTagContainer& EventTags)
{
	if (bAbilitiesInitialized)
	{
		OnHealthChanged(DeltaValue, EventTags);
	}
}

void ACharacterBase::HandleStaminaChanged(float DeltaValue, const FGameplayTagContainer& EventTags)
{
	if (bAbilitiesInitialized)
	{
		OnStaminaChanged(DeltaValue, EventTags);
	}
}

void ACharacterBase::HandleDeadlyChanged(float DeltaValue, const FGameplayTagContainer& EventTags)
{
	if (bAbilitiesInitialized)
	{
		OnDeadlyChanged(DeltaValue, EventTags);
	}
}

void ACharacterBase::HandleSkyComboCountChanged(float DeltaValue, const FGameplayTagContainer& EventTags)
{
	if (bAbilitiesInitialized)
	{
		OnSkyComboCountChanged(DeltaValue, EventTags);
	}
}


