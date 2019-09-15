#include"Superman.h"
#include"pch.h"
#include <iostream>	
#include <windows.h>
#include<mutex>
#include"XuLy.h"
#include"1_Player.h"


//static std::mutex g_i_mutex;

int KiemTraVaChamNhau2(ManhTru a[], Board board[][100])
{
	if (a->xeploai == 1)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
			{
				for (int i = 0; i < 32; i++)
				{
					board[a[i].td.x][a[i].td.y].gt = 1;
					board[a[i].td.x][a[i].td.y].mau = a[i].mau;
				}
				return 1;
			}
		}
	}
	else if (a->xeploai == 2)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
			{
				for (int i = 0; i < 32; i++)
				{
					board[a[i].td.x][a[i].td.y].gt = 1;
					board[a[i].td.x][a[i].td.y].mau = a[i].mau;
				}
				return 1;
			}
		}

	}
	else if (a->xeploai == 3)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
			{
				for (int i = 0; i < 32; i++)
				{
					board[a[i].td.x][a[i].td.y].gt = 1;
					board[a[i].td.x][a[i].td.y].mau = a[i].mau;
				}
				return 1;
			}
		}


	}
	else if (a->xeploai == 4)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
			{
				for (int i = 0; i < 32; i++)
				{
					board[a[i].td.x][a[i].td.y].gt = 1;
					board[a[i].td.x][a[i].td.y].mau = a[i].mau;
				}
				return 1;
			}
		}
	}
	if (a->xeploai == 5)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
			{
				for (int i = 0; i < 32; i++)
				{
					board[a[i].td.x][a[i].td.y].gt = 1;
					board[a[i].td.x][a[i].td.y].mau = a[i].mau;
				}
				return 1;
			}
		}
	}
}


// Xu Ly Bot
int CheckChamCotTraiBot(ManhTru a[], Board board[][100])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.x - 4 < 115)
			return 1;
	}
	return 0;

}


int CheckChamCotPhaiBot(ManhTru a[], Board board[][100])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.x + 4 > 154)
			return 1;
	}
	return 0;
}


void DiChuyenQuaPhaiBot(ManhTru a[])
{

	if (a->xeploai == 1)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x += 4;
		}

		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
	else if (a->xeploai == 2)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x += 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
	else if (a->xeploai == 3)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x += 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}

	}

	else if (a->xeploai == 4)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x += 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}

	else if (a->xeploai == 5)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x += 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}

}


int BotDown(ManhTru a[], Board board[][100]) // Kiem tra xem cho nao nen ha xuong.
{
	if (a->xeploai == 5)
	{
		if (a->n == 1)
		{
			for (int i = a[28].td.y; i <= consoleHeight; i++)
			{

				if (board[a[28].td.x][i].gt == 1)
				{
					return 0;
				}
				else
					if (board[a[28].td.x][i].gt != 1 && i == consoleHeight)
					{
						return 1;
					}
			}
		}
	}
	else if (a->xeploai == 2)
	{
		if (a->n == 1)
		{
			for (int i = a[20].td.y; i <= consoleHeight; i++)
			{

				if (board[a[20].td.x][i].gt == 1)
				{
					return 0;
				}
				else
					if (board[a[20].td.x][i].gt != 1 && i == consoleHeight)
					{
						return 1;
					}
			}
		}
	}
	else if (a->xeploai == 1)
	{
		if (a->n == 1)
		{
			for (int i = a[24].td.y; i <= consoleHeight; i++)
			{

				if (board[a[24].td.x][i].gt == 1)
				{
					return 0;
				}
				else
					if (board[a[24].td.x][i].gt != 1 && i == consoleHeight)
					{
						return 1;
					}
			}
		}
	}
	else if (a->xeploai == 4)
	{
		for (int i = a[20].td.y; i <= consoleHeight; i++)
		{

			if (board[a[20].td.x][i].gt == 1)
			{
				return 0;
			}
			else
				if (board[a[20].td.x][i].gt != 1 && i == consoleHeight)
				{
					return 1;
				}
		}

	}
}


int BotRight(ManhTru a[], Board board[][100]) // Di chuyen sang phai
{
	while (BotDown(a, board) == 0)
	{
		if (a->xeploai == 5)
		{
			if (a[0].td.x < 150)
			{
				DiChuyenQuaPhaiBot(a);
			}
			if (a[0].td.x == 151)
			{
				return 1;
			}
		}
		else if (a->xeploai == 2)
		{
			if (a[0].td.x < 147)
			{
				DiChuyenQuaPhaiBot(a);
			}
			if (a[0].td.x == 147)
			{
				return 1;
			}
		}
		else if (a->xeploai == 1)
		{
			if (a[0].td.x < 146)
			{
				DiChuyenQuaPhaiBot(a);
			}
			if (a[0].td.x == 146)
			{
				return 1;
			}
		}
		else if (a->xeploai == 4)
		{
			if (a[20].td.x < 142)
			{
				DiChuyenQuaPhaiBot(a);
			}
			if (a[20].td.x == 142)
			{
				return 1;
			}
		}
	}
	/*while (1)
	{
		printf("1111");
	}*/
}


void  CheckMaxBot(Board board[][100], ManhTru a[], int &score)
{
	int dem = 0, temp1;
	for (int i = consoleHeight; i >= 0; i--)
	{
		for (int j = 115; j <= 154; j++)
		{
			if (board[j][i].gt != 1)
			{
				dem = 0;
				temp1 = 0;
				break;
			}
			else if (j == 154)
			{
				dem++;
				if (dem == 1)
					temp1 = i;
				if (dem == 2)
				{
					for (int k = 115; k <= 154; k++)
					{
						board[k][i].gt = 0;
						board[k][temp1].gt = 0;
						std::lock_guard<std::mutex> lock(g_i_mutex);
						gotoXY(k, i);
						printf(" ");
						gotoXY(k, temp1);
						printf(" ");
					}
					dem = 0;
					score += 10;
					TextColor(15);
					//std::lock_guard<std::mutex> lock(g_i_mutex);
					gotoXY(consoleWidth - 50, consoleHeight - 15);
					printf("Bot score : %d", score);

					//Sau khi an diem thi don xuong.
					for (int k = 115; k <= 154; k++)
					{
						for (int z = temp1; z >= 1; z--)
						{
							if (board[k][z].gt == 0)
							{
								for (int h = z - 1; h >= 0; h--)
								{
									if (board[k][h].gt == 1)
									{
										board[k][z].gt = 1;
										board[k][h].gt = 0;
										std::lock_guard<std::mutex> lock(g_i_mutex);

										gotoXY(k, h);
										printf(" ");
										gotoXY(k, z);
										TextColor(board[k][h].mau);
										putchar(178);

										break;
									}
									else
										continue;
								}
							}

						}
					}
				}
			}
		}

	}


}


void Player2(ManhTru a[], Board Board[][100], int &score)
{
	srand(time(NULL));
	int random;
	int count = 0, dem = 1;
	Sleep(1100);

	Tao_XuatKhoiCauChuI2(a);
	while (1)
	{
		CheckMaxBot(Board, a, score);
		if (BotDown(a, Board) == 0)
		{
			BotRight(a, Board);
		}

		if (KiemTraVaChamDay(a) == 1 || KiemTraVaChamNhau2(a, Board) == 1)
		{
			GanChoBoard(a, Board);
			if (dem == 25)
			{
				dem = 15;
			}
			if (dem == 2 || dem == 13 || dem == 19 || dem == 23)
				Tao_XuatKhoiCauVuong2(a);
			else if (dem == 0)
				Tao_XuatKhoiCauChuL2(a);
			else if (dem == 1)
				Tao_XuatKhoiCauChuI2(a);
			else if (dem == 3)
				Tao_XuatKhoiCauDauCong2(a);
			if (dem == 4 || dem == 9)
				Tao_XuatKhoiCauChuL2(a);
			if (dem == 5 || dem == 6 || dem == 7 || dem == 8 || dem == 10 || dem == 11 || dem == 12 || dem == 14 || dem == 15 || dem == 16 || dem == 17 || dem == 18 || dem == 20 || dem == 21
				|| dem == 22 || dem == 24)
				Tao_XuatKhoiCauChuI2(a);





			dem++;

		}
		else
		{

			DiChuyenXuong(a, Board);
			Sleep(250);

		}
	}
}


