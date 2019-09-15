// Xep hinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Ki tu 178 177 176 tu dam den nhat.

#include"pch.h"
#include"XuLy.h"
#include"Superman.h"
#include"Intro.h"
#include"Menu.h"

#pragma comment(lib, "winmm.lib")
#include<mmsystem.h>



#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;






int main()
{
	PlaySound(TEXT("Music.wav"),NULL, SND_ASYNC);

	Show_game_name();
	MENU();

	
	

	return 0;
}

