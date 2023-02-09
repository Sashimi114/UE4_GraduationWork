// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Engine/Engine.h"
#include "Engine/Font.h"
#include "Fonts/SlateFontInfo.h"
#include "EngineFontServices.h"

FString UMyBlueprintFunctionLibrary::ReplaceUnsupportedCharacter(const UFont* Font, FString SourceStr, FString ReplaceStr)
{
	FString Result;

	for (TCHAR SourceChar : SourceStr)
	{
		if (IsSupportedCharacter(Font, SourceChar))
		{
			//フォントが対応してるので元の文字を使う
			Result.AppendChar(SourceChar);
		}
		else
		{
			//フォントが対応していないのでReplaceStrを使う
			Result.Append(ReplaceStr);
		}
	}
	return Result;
}
bool UMyBlueprintFunctionLibrary::IsSupportedCharacter(const UFont* Font, TCHAR SourceChar)
{
	TSharedPtr<FSlateFontCache> FontCache = FEngineFontServices::Get().GetFontCache();
	if (FontCache.IsValid())
	{
		const float FontScale = 1.0f;
		const FSlateFontInfo FontInfo = Font->GetLegacySlateFontInfo();
		FCharacterList& CharacterList = FontCache->GetCharacterList(FontInfo, FontScale);

		const FCharacterEntry& Entry = CharacterList.GetCharacter(SourceChar, FontInfo.FontFallback);
		return Entry.Valid;
	}
	else
	{
		return false;
	}
}
