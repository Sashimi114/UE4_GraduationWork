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

/*初期化*/
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
//    // GS2 SDK のクライアントを初期化
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
//                // 初期化に失敗した場合はエラー処理へ
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
//    // アカウントを新規作成
//
//    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "account.create");
//
//    ClientPtr->account.create(
//        [this](gs2::ez::account::AsyncEzCreateResult r)
//        {
//            if (r.getError())
//            {
//                // アカウントが作成できなかった場合は終了
//                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "account.create failed.");
//            }
//            else
//            {
//                // 作成したアカウント情報を取得
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
//    // ログイン
//
//    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "profile.login");
//
//    ProfilePtr->login(
//        [this](gs2::ez::Profile::AsyncLoginResult r)
//        {
//            if (r.getError())
//            {
//                // ゲームセッションオブジェクトが作成できなかった場合は終了
//                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "profile.login failed.");
//            }
//            else
//            {
//                // ログイン状態を表すゲームセッションオブジェクトを取得
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
//    // 引き継ぎ情報の一覧を取得
//
//    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "account.listTakeOverSettings");
//
//    ClientPtr->account.listTakeOverSettings(
//        [this](gs2::ez::account::AsyncEzListTakeOverSettingsResult r)
//        {
//            if (r.getError())
//            {
//                // 引き継ぎ情報の一覧が取得できなかった場合は終了
//                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "account.listTakeOverSettings failed.");
//            }
//            else
//            {
//                auto& items = r.getResult()->getItems();
//                for (auto i = 0; i < items.getCount(); ++i)
//                {
//                    // 引き継ぎに関する情報が取得される
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
//    // GS2 SDK の終了処理
//
//    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "profile.finalize");
//
//    // ゲームを終了するときなどに呼び出してください。
//    // 頻繁に呼び出すことは想定していません。
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



