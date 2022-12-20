// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine.h"

/*������*/
APlayerCharacter::APlayerCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

}

//void APlayerCharacter::ProfileInitialize()
//{
//    // GS2 SDK �̃N���C�A���g��������
//
//    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "profile.initialize");
//
//    ProfilePtr = std::make_shared<gs2::ez::Profile>(
//        TCHAR_TO_ANSI(*ClientId),
//        TCHAR_TO_ANSI(*ClientSecret),
//        gs2::ez::Gs2BasicReopener()
//        );
//
//    ClientPtr = std::make_shared<gs2::ez::Client>(
//        *ProfilePtr
//        );
//
//    ProfilePtr->initialize(
//        [this](gs2::ez::Profile::AsyncInitializeResult r)
//        {
//            if (r.getError())
//            {
//                // �������Ɏ��s�����ꍇ�̓G���[������
//                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "profile.initialize failed.");
//            }
//            else
//            {
//                AccountCreate();
//            }
//        }
//    );
//}
//
//void APlayerCharacter::AccountCreate()
//{
//    // �A�J�E���g��V�K�쐬
//
//    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "account.create");
//
//    ClientPtr->account.create(
//        [this](gs2::ez::account::AsyncEzCreateResult r)
//        {
//            if (r.getError())
//            {
//                // �A�J�E���g���쐬�ł��Ȃ������ꍇ�͏I��
//                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "account.create failed.");
//            }
//            else
//            {
//                // �쐬�����A�J�E���g�����擾
//                EzAccount = r.getResult()->getItem();
//
//                ProfileLogin();
//            }
//        },
//        TCHAR_TO_ANSI(*AccountNamespaceName)
//            );
//}
//
//void APlayerCharacter::ProfileLogin()
//{
//    // ���O�C��
//
//    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "profile.login");
//
//    ProfilePtr->login(
//        [this](gs2::ez::Profile::AsyncLoginResult r)
//        {
//            if (r.getError())
//            {
//                // �Q�[���Z�b�V�����I�u�W�F�N�g���쐬�ł��Ȃ������ꍇ�͏I��
//                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "profile.login failed.");
//            }
//            else
//            {
//                // ���O�C����Ԃ�\���Q�[���Z�b�V�����I�u�W�F�N�g���擾
//                GameSession = *r.getResult();
//
//                AccountListTakeOverSettings();
//            }
//        },
//        gs2::ez::Gs2AccountAuthenticator(
//            ProfilePtr->getGs2Session(),
//            TCHAR_TO_ANSI(*AccountNamespaceName),
//            TCHAR_TO_ANSI(*AccountEncryptionKeyId),
//            EzAccount.getUserId(),
//            EzAccount.getPassword()
//        )
//            );
//}
//
//void APlayerCharacter::AccountListTakeOverSettings()
//{
//    // �����p�����̈ꗗ���擾
//
//    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "account.listTakeOverSettings");
//
//    ClientPtr->account.listTakeOverSettings(
//        [this](gs2::ez::account::AsyncEzListTakeOverSettingsResult r)
//        {
//            if (r.getError())
//            {
//                // �����p�����̈ꗗ���擾�ł��Ȃ������ꍇ�͏I��
//                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "account.listTakeOverSettings failed.");
//            }
//            else
//            {
//                auto& items = r.getResult()->getItems();
//                for (auto i = 0; i < items.getCount(); ++i)
//                {
//                    // �����p���Ɋւ����񂪎擾�����
//                }
//
//                ProfileFinalize();
//            }
//        },
//        GameSession,
//            TCHAR_TO_ANSI(*AccountNamespaceName)
//            );
//}
//
//void APlayerCharacter::ProfileFinalize()
//{
//    // GS2 SDK �̏I������
//
//    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "profile.finalize");
//
//    // �Q�[�����I������Ƃ��ȂǂɌĂяo���Ă��������B
//    // �p�ɂɌĂяo�����Ƃ͑z�肵�Ă��܂���B
//    ProfilePtr->finalize(
//        [this]()
//        {
//            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "successfull.");
//        }
//    );
//}

//////////////////////////////////////////////////////////////////////////
// Input
// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	//// Set up gameplay key bindings
	//check(PlayerInputComponent);
	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	//PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	/*PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &APlayerCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APlayerCharacter::LookUpAtRate);*/

	//// handle touch devices
	//PlayerInputComponent->BindTouch(IE_Pressed, this, &APlayerCharacter::TouchStarted);
	//PlayerInputComponent->BindTouch(IE_Released, this, &APlayerCharacter::TouchStopped);

	//// VR headset functionality
	//PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &APlayerCharacter::OnResetVR);

}



void APlayerCharacter::OnResetVR()
{
	// If ActionRPGProject is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in ActionRPGProject.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void APlayerCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void APlayerCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void APlayerCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);

	}

}

void APlayerCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	//ProfileInitialize();
}

void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

}



