// Copyright © 2023 Tyci. All rights reserved.


#include "Utils/GameplayUtilsLibrary.h"
#include "GenericPlatform/GenericApplication.h"
//#include "SlateApplication.h"

bool UGameplayUtilsLibrary::AreCapsLocked()
{
	return FSlateApplication::Get().GetModifierKeys().AreCapsLocked();
}
