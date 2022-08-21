// Fill out your copyright notice in the Description page of Project Settings.


#include "RWTxt.h"

bool URWTxt::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameSourceDir() + FileNameB));
}

bool URWTxt::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameSourceDir() + FileNameA));
}

