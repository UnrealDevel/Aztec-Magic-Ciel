// Fill out your copyright notice in the Description page of Project Settings.


#include "FileReaderLibrary.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFilemanager.h"
#include "HAL/PlatformProcess.h"
/*
void UFileReaderLibrary::LaunchExternalProcess(const FString& ExecutablePath)
{
		if (FPaths::FileExists(ExecutablePath))
		{
			// Launch the executable
			FProcHandle ProcessHandle = FPlatformProcess::CreateProc(
				*ExecutablePath,
				nullptr,
				true,  // bLaunchDetached
				false, // bLaunchHidden
				false, // bLaunchReallyHidden
				nullptr, // OutProcessID
				0,      // PriorityModifier
				nullptr, // OptionalWorkingDirectory
				nullptr, // PipeWriteChild
				nullptr  // PipeReadChild
			);

			if (ProcessHandle.IsValid())
			{
				UE_LOG(LogTemp, Log, TEXT("Process launched successfully: %s"), *ExecutablePath);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to launch process: %s"), *ExecutablePath);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Executable not found: %s"), *ExecutablePath);
		}
}
*/
void UFileReaderLibrary::LaunchExternalProcess(const FString& ExecutablePath)
{
	if (FPaths::FileExists(ExecutablePath))
	{
		// Launch the executable
		FProcHandle ProcessHandle = FPlatformProcess::CreateProc(
			*ExecutablePath,
			nullptr,
			true,  // bLaunchDetached
			false, // bLaunchHidden
			false, // bLaunchReallyHidden
			nullptr, // OutProcessID
			0,      // PriorityModifier
			nullptr, // OptionalWorkingDirectory
			nullptr, // PipeWriteChild
			nullptr  // PipeReadChild
		);
		if (ProcessHandle.IsValid())
		{
			UE_LOG(LogTemp, Log, TEXT("Process launched successfully: %s"), *ExecutablePath);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to launch process: %s"), *ExecutablePath);
		}
	}
}
