#include"pch.h"
#include<iostream>
using namespace std;


#include<mutex>
#include"Intro.h"
#include "Library.h"



#include<conio.h>
#include<time.h>
#include<Windows.h>



void Show_round1() {
	int random = rand() % 10 + 1;
	TextColor(random);
	cout << "JJJJJJJJJJJJJJJJ IIIIIIIIIIIIIIIIII    GGGGGGGGGGGGGG    SSSSSSSSSSSSS        AAAAA          WWWW                 WWWW " << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "J::::::::::::::J I................I   G?????????????G   S-------------S      A.....A         W--W                 W--W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "J..............J I````````````````I  G::::::::::::::G  S------SSSS----S     A.......A        W--W                 W--W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "J--------------J I~~~~~~~~~~~~~~~~I  G----GGGGG-----G  S:::::S     S::S    A----A----A       W--W                 W--W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "JJJJJJJJJJJJ===J IIIII--------IIIII G-----G     GGGGG S++++S      SSSSS   A:::A  A::::A      W--W                 W--W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J===J     I++++++++I     G+++++G           S---_S             A:::A     A:::A     W--W                 W--W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J+++J     I--------I     G.....G           S----S            A;;;A       A;;;A     W::W                W::W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J---J     I--------I     G,,,,,G            S....S          A---AAAAAAAAAAA---A    W::W               W::W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J+++J     I++++++++I     G:::::G              S++++S       A-------------------A   W:::W             W:::W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J---J     I--------I     G:::::G               S::::S      A---A AAAAAAAAAA A---A   W::W      W      W::W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J+++J     I++++++++I     G:::::G   GGGGGGG       S----S    A...A            A...A    W--W    W  W   W--W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J---J     I!!!!!!!!I     G:::::G     G---G        S++++S   A...A            A...A    W--W   W -  W  W--W" << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J+++J     I........I     G......GGGGG----G         S====S  A...A            A...A     W--- W ---  W --W " << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "          J---J   IIII,,,,,,,,IIII  G'''''''''''''''G  SSSSSS S.....S A---A            A---A     W  W  - W -  W  W " << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "         J+++J    I**************I   G~~~~~~~~~~~~~~G  S.....S......S A---A            A---A      W ... W  W ...W  " << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "        J---J     I--------------I    G~~~~~~~~~~~~~G   S,,,,,,,,,,S  A---A            A---A      W .. W    W . W  " << endl;
	Sleep(sleep_round1);


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "      JJJJJ       IIIIIIIIIIIIIIII      GGGGGGGGGGGGG    SSSSSSSSSS   AAAAA            AAAAA       WWWW      WWW " << endl;
	Sleep(sleep_round1);


	Sleep(1000);


	system("cls");
}


void Show_round2() {


	int random = rand() % 10 + 1;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 0);
	cout << "JJJJJJJJJJJJJJJJ IIIIIIIIIIIIIIIIII    GGGGGGGGGGGGGG    SSSSSSSSSSSSS        AAAAA          WWWW                 WWWW " << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 16);
	cout << "      JJJJJ       IIIIIIIIIIIIIIII      GGGGGGGGGGGGG    SSSSSSSSSS   AAAAA            AAAAA       WWWW      WWW " << endl;
	Sleep(sleep_round2);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 1);
	cout << "J::::::::::::::J I................I   G?????????????G   S-------------S      A.....A         W--W                 W--W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 15);
	cout << "        J---J     I--------------I    G~~~~~~~~~~~~~G   S,,,,,,,,,,S  A---A            A---A      W .. W    W . W  " << endl;
	Sleep(sleep_round2);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 2);
	cout << "J--------------J I~~~~~~~~~~~~~~~~I  G----GGGGG-----G  S:::::S     S::S    A----A----A       W--W                 W--W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 14);
	cout << "         J+++J    I**************I   G~~~~~~~~~~~~~~G  S.....S......S A---A            A---A      W ... W  W ...W  " << endl;
	Sleep(sleep_round2);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 3);
	cout << "J--------------J I~~~~~~~~~~~~~~~~I  G----GGGGG-----G  S:::::S     S::S    A----A----A       W--W                 W--W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 13);
	cout << "          J---J   IIII,,,,,,,,IIII  G'''''''''''''''G  SSSSSS S.....S A---A            A---A     W  W  - W -  W  W " << endl;
	Sleep(sleep_round2);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 4);
	cout << "JJJJJJJJJJJJ===J IIIII--------IIIII G-----G     GGGGG S++++S      SSSSS   A:::A  A::::A      W--W                 W--W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 12);
	cout << "           J+++J     I........I     G......GGGGG----G         S====S  A...A            A...A     W--- W ---  W --W " << endl;
	Sleep(sleep_round2);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 5);
	cout << "           J===J     I++++++++I     G+++++G           S---_S             A:::A     A:::A     W--W                 W--W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 11);
	cout << "           J---J     I!!!!!!!!I     G:::::G     G---G        S++++S   A...A            A...A    W--W   W -  W  W--W" << endl;
	Sleep(sleep_round2);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 6);
	cout << "           J+++J     I--------I     G.....G           S____S            A;;;A       A;;;A     W::W                W::W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 10);
	cout << "           J+++J     I++++++++I     G:::::G   GGGGGGG       S----S    A...A            A...A    W--W    W  W   W--W" << endl;
	Sleep(sleep_round2);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 7);
	cout << "           J---J     I--------I     G,,,,,G            S....S          A---AAAAAAAAAAA---A    W::W               W::W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 9);
	cout << "           J---J     I--------I     G:::::G               S::::S      A---A AAAAAAAAAA A---A   W::W      W      W::W" << endl;
	Sleep(sleep_round2);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 8);
	cout << "           J+++J     I++++++++I     G:::::G              S++++S       A-------------------A   W:::W             W:::W" << endl;
	Sleep(sleep_round2);


	Sleep(400);


	system("cls");

}


void Show_round3() {

	int random = rand() % 10 + 1;


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 8);
	cout << "           J+++J     I++++++++I     G:::::G              S++++S       A-------------------A   W:::W             W:::W" << endl;
	Sleep(sleep_round3);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 7);
	cout << "           J---J     I--------I     G,,,,,G            S....S          A---AAAAAAAAAAA---A    W::W               W::W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 9);
	cout << "           J---J     I--------I     G:::::G               S::::S      A---A AAAAAAAAAA A---A   W::W      W      W::W" << endl;
	Sleep(sleep_round3);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 6);
	cout << "           J+++J     I--------I     G.....G           S____S            A;;;A       A;;;A     W::W                W::W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 10);
	cout << "           J+++J     I++++++++I     G:::::G   GGGGGGG       S----S    A...A            A...A    W--W    W  W   W--W" << endl;
	Sleep(sleep_round3);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 5);
	cout << "           J===J     I++++++++I     G+++++G           S---_S             A:::A     A:::A     W--W                 W--W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 11);
	cout << "           J---J     I!!!!!!!!I     G:::::G     G---G        S++++S   A...A            A...A    W--W   W -  W  W--W" << endl;
	Sleep(sleep_round3);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 4);
	cout << "JJJJJJJJJJJJ===J IIIII--------IIIII G-----G     GGGGG S++++S      SSSSS   A:::A  A::::A      W--W                 W--W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 12);
	cout << "           J+++J     I........I     G......GGGGG----G         S====S  A...A            A...A     W--- W ---  W --W " << endl;
	Sleep(sleep_round3);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 3);
	cout << "J--------------J I~~~~~~~~~~~~~~~~I  G----GGGGG-----G  S:::::S     S::S    A----A----A       W--W                 W--W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 13);
	cout << "          J---J   IIII,,,,,,,,IIII  G'''''''''''''''G  SSSSSS S.....S A---A            A---A     W  W  - W -  W  W " << endl;
	Sleep(sleep_round3);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 2);
	cout << "J--------------J I~~~~~~~~~~~~~~~~I  G----GGGGG-----G  S:::::S     S::S    A----A----A       W--W                 W--W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 14);
	cout << "         J+++J    I**************I   G~~~~~~~~~~~~~~G  S.....S......S A---A            A---A      W ... W  W ...W  " << endl;
	Sleep(sleep_round3);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 1);
	cout << "J::::::::::::::J I................I   G?????????????G   S-------------S      A.....A         W--W                 W--W" << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 15);
	cout << "        J---J     I--------------I    G~~~~~~~~~~~~~G   S,,,,,,,,,,S  A---A            A---A      W .. W    W . W  " << endl;
	Sleep(sleep_round3);


	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 0);
	cout << "JJJJJJJJJJJJJJJJ IIIIIIIIIIIIIIIIII    GGGGGGGGGGGGGG    SSSSSSSSSSSSS        AAAAA          WWWW                 WWWW " << endl;

	random = rand() % 10 + 1;
	TextColor(random);
	gotoXY(0, 16);
	cout << "      JJJJJ       IIIIIIIIIIIIIIII      GGGGGGGGGGGGG    SSSSSSSSSS   AAAAA            AAAAA       WWWW      WWW " << endl;
	Sleep(sleep_round3);


	Sleep(500);


	system("cls");

}


void Name_Flicker() {

	system("cls");

	int random = rand() % 10 + 1;
	TextColor(random);
	cout << "JJJJJJJJJJJJJJJJ IIIIIIIIIIIIIIIIII    GGGGGGGGGGGGGG    SSSSSSSSSSSSS        AAAAA          WWWW                 WWWW " << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "J::::::::::::::J I................I   G?????????????G   S-------------S      A.....A         W--W                 W--W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "J..............J I````````````````I  G::::::::::::::G  S------SSSS----S     A.......A        W--W                 W--W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "J--------------J I~~~~~~~~~~~~~~~~I  G----GGGGG-----G  S:::::S     S::S    A----A----A       W--W                 W--W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "JJJJJJJJJJJJ===J IIIII--------IIIII G-----G     GGGGG S++++S      SSSSS   A:::A  A::::A      W--W                 W--W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J===J     I++++++++I     G+++++G           S---_S             A:::A     A:::A     W--W                 W--W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J+++J     I--------I     G.....G           S____S            A;;;A       A;;;A     W::W                W::W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J---J     I--------I     G,,,,,G            S....S          A---AAAAAAAAAAA---A    W::W               W::W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J+++J     I++++++++I     G:::::G              S++++S       A-------------------A   W:::W             W:::W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J---J     I--------I     G:::::G               S::::S      A---A AAAAAAAAAA A---A   W::W      W      W::W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J+++J     I++++++++I     G:::::G   GGGGGGG       S----S    A...A            A...A    W--W    W  W   W--W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J---J     I!!!!!!!!I     G:::::G     G---G        S++++S   A...A            A...A    W--W   W -  W  W--W" << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "           J+++J     I........I     G......GGGGG----G         S====S  A...A            A...A     W--- W ---  W --W " << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "          J---J   IIII,,,,,,,,IIII  G'''''''''''''''G  SSSSSS S.....S A---A            A---A     W  W  - W -  W  W " << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "         J+++J    I**************I   G~~~~~~~~~~~~~~G  S.....S......S A---A            A---A      W ... W  W ...W  " << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "        J---J     I--------------I    G~~~~~~~~~~~~~G   S,,,,,,,,,,S  A---A            A---A      W .. W    W . W  " << endl;


	random = rand() % 10 + 1;
	TextColor(random);
	cout << "      JJJJJ       IIIIIIIIIIIIIIII      GGGGGGGGGGGGG    SSSSSSSSSS   AAAAA            AAAAA       WWWW      WWW " << endl;


	Sleep(200);
}


void Word_motion() {
	char pagragraph[1000] = " --Welcome To OCEAN TEAM >>---";
	char temp[1000];
	char out[100];
	int count = 0;

	strcpy(temp, pagragraph);
	strcat(pagragraph, temp);

	srand(time(NULL));

	for (int i = 0; i < strlen(pagragraph); i++) {
		int  random = rand() % 10 + 1;
		TextColor(random);

		strncpy(out, pagragraph + i, 70);

		out[60] = 0;
		Sleep(100);
		gotoXY(40, 18);
		cout << out;

		if (i == strlen(temp)) {
			i = 0;
			count++;
		}
		if (count == 2)
			break;

	}
	Sleep(1000);
}


void Framing() {
	int x = 15;
	int y = 20;
	int z = 101;
	int t = 28;

	TextColor(3);

	for (int i = 0; i < 9; i++) {
		gotoXY(x, y++);
		cout << (char)175;

		gotoXY(z, t--);
		cout << (char)174;

		Sleep(100);
	}



	for (int i = 0; i < 87; i++) {

		gotoXY(z--, t);
		cout << (char)174;

		gotoXY(x++, y);
		cout << (char)175;

		Sleep(15);
	}
	Sleep(1500);
}


void Close_Framing() {
	int x = 15;
	int y = 20;
	int z = 101;
	int t = 28;

	TextColor(3);

	for (int i = 0; i < 9; i++) {
		gotoXY(x, y++);
		cout << " ";

		gotoXY(z, t--);
		cout << " ";

		Sleep(100);
	}

	for (int i = 0; i < 87; i++) {

		gotoXY(z--, t);
		cout << " ";

		gotoXY(x++, y);
		cout << " ";

		Sleep(10);
	}
	Sleep(500);
}


void Show_game_name() {

	Show_round1();
	Show_round2();
	Show_round3();

	for (int i = 0; i < 3; i++)
		Name_Flicker();

	Word_motion();

	Framing();


}