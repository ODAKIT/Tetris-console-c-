#include"pch.h"
#include"XuLy.h"
#include"Superman.h"
#include<iostream>
#include"1_Player.h"
using namespace std;
	
void Levelup()
{
	gotoXY(consoleWidth - 38, 2);
	printf("LEVEL UP        ");
	Sleep(200);
	gotoXY(consoleWidth - 38, 2);
	printf("             ");
	Sleep(200);
	gotoXY(consoleWidth - 38, 2);
	printf("LEVEL UP        ");
	gotoXY(consoleWidth - 38, 2);
	Sleep(200);
	gotoXY(consoleWidth - 38, 2);
	printf("           ");
	gotoXY(consoleWidth - 38, 2);
	printf("LEVEL UP        ");
	gotoXY(consoleWidth - 38, 2);
	Sleep(200);
	printf("            ");
	Sleep(200);
	gotoXY(consoleWidth - 38, 2);
	printf("LEVEL UP        ");
	Sleep(200);
	gotoXY(consoleWidth - 38, 2);
	printf("             ");
	Sleep(200);
	gotoXY(consoleWidth - 38, 2);
	printf("LEVEL UP        ");
	Sleep(200);
	gotoXY(consoleWidth - 38, 2);
	printf("          ");
	Sleep(200);
	gotoXY(consoleWidth - 38, 2);
	printf("LEVEL UP        ");
	Sleep(200);
	gotoXY(consoleWidth - 38, 2);
	printf("           ");
	gotoXY(consoleWidth - 38, 2);
}
int Player1()
{
	
	Nocursortype();
	ManhTru a[50];
	ManhTru b[50];
	Board Board[100][100];
	int lv1 = 350, dem = 0;
	srand(time(NULL));
	int score = 0, lv = 1;
	

	int random1=5, random2; //random 1 la cai in ra , random 2 la block tiep theo
	random2 = 1;
	KhoiTaoBoard(Board);
	NewBlock(b, random2);
	//CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&ThreadProc1, NULL, 0, NULL);

	Tao_XuatKhoiCauChuI(a);
	//

	while (1)
	{

		GanChoBoard(a, Board);
		


		// Xu ly di chuyen : 

		if (_kbhit())
		{
			char key = _getch();
			if ((key == 'S' || key == 's') && Check(a, Board) != 1)
			{
				DiChuyenXuong(a, Board);
				Sleep(50);
				continue;
			}
			else if ((key == 'A' || key == 'a') && CheckChamCotTrai(a, Board) != 1 && CheckChamTrai(a,Board)==1)
			{
				DiChuyenQuaTrai(a);
				Sleep(100);
				continue;
			}
			else if ((key == 'D' || key == 'd') && CheckChamCotPhai(a, Board) != 1 && CheckChamPhai(a, Board) == 1)
			{
				DiChuyenQuaPhai(a);
				Sleep(100);
				continue;
			}
			else if (key == 'w' || key == 'W')
			{
				XoayChu(a);
				//InRaKhiCham(a);
				continue;
			}
			else if (key == 32)
			{
				gotoXY(95, 21);
				printf("PAUSE");
				_getch();
				gotoXY(95, 21);
				printf("     ");

			}
			else if (key == 27)
			{
				return 0;

			}
		}


		// Xu ly level : 

		if ((score == 100 && lv != 2) || (score == 200 && lv != 3) || (score == 300 && lv != 4) || (score == 400 && lv != 5))
		{
			lv++;
			if (lv == 2)
			{
				lv1 = 200;
			}
			else if (lv == 3)
			{
				lv1 = 150;
			}
			else if (lv == 4)
			{
				lv1 = 100;
			}
			else if (lv >= 5)
			{
				lv1 = 50;
			}
			Levelup();
			gotoXY(consoleWidth - 38, 2);
			printf("LEVEL: %d ", lv);
		}


		 // Xu ly va cham 

		if (KiemTraVaChamNhau(a, Board) == 1 || KiemTraVaChamDay(a) == 1)
		{
			
			
			if (GameOver(Board, a) == 1)
			{
				
				FILE *fo = fopen("PointData.txt" , "a+"); // Ghi diem vao file.
				fprintf(fo, "\t%d\t", score);
				fclose(fo);
				gotoXY(consoleWidth-35-4, consoleHeight - 15);
				printf("Rank hien tai cua ban la : %d", InRaRank(score));
				gotoXY(consoleWidth - 39, consoleHeight - 14);
				gotoXY(consoleWidth - 39+5, consoleHeight - 13);
				printf("Press Enter to continue");
				char gotomenu;
				while (1)
				{
					
					if (_kbhit())
					{
						gotomenu = _getch();
						if (gotomenu == 13)
							return 0;
					}
				}
				
			}
			dem++;
			//InRaKhiCham(a);
			random1 = random2;
			random2 = rand() % 5+1;
			if (random1 == 1)
				Tao_XuatKhoiCauVuong(a);
			else if (random1 == 2)
				Tao_XuatKhoiCauChuL(a);
			else if (random1 == 3)
				Tao_XuatKhoiCauChuZ(a);
			else if (random1 == 4)
				Tao_XuatKhoiCauDauCong(a);
			else if (random1 == 5)
				Tao_XuatKhoiCauChuI(a);
			NewBlock(b, random2);
		}
		else
		{
			DiChuyenXuong(a, Board);
			Sleep(lv1);

		}

		//An diem .
		CheckMax(Board, a, score);


	}
}