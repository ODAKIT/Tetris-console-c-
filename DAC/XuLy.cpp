#include "pch.h"
#include<stdio.h>
#include <iostream>	
#include"Library.h"
#include<conio.h>
#include<ctime>
#include <windows.h>
#include<thread>
#include<mutex>
#include"XuLy.h"
#include<string.h>

using namespace std;

void Nocursortype()   // An con tro chuot.
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
//void InRaKhiCham(ManhTru a[])
//{
//	if (a->xeploai == 1)
//	{
//
//		for (int i = 0; i < 32; i++)
//		{
//			std::lock_guard<std::mutex> lock(g_i_mutex);
//
//			gotoXY(a[i].td.x, a[i].td.y);
//			TextColor(a[i].mau);
//			putchar(178);
//		}
//	}
//	else if (a->xeploai == 2)
//	{
//
//		for (int i = 0; i < 20; i++)
//		{
//			std::lock_guard<std::mutex> lock(g_i_mutex);
//
//			gotoXY(a[i].td.x, a[i].td.y);
//			TextColor(a[i].mau);
//			putchar(178);
//		}
//	}
//	else if (a->xeploai == 3)
//	{
//
//
//
//		for (int i = 0; i < 32; i++)
//		{
//			std::lock_guard<std::mutex> lock(g_i_mutex);
//
//			gotoXY(a[i].td.x, a[i].td.y);
//			TextColor(a[i].mau);
//			putchar(178);
//		}
//
//	}
//	else if (a->xeploai == 4)
//	{
//
//		for (int i = 0; i < 20; i++)
//		{
//			std::lock_guard<std::mutex> lock(g_i_mutex);
//
//			gotoXY(a[i].td.x, a[i].td.y);
//			TextColor(a[i].mau);
//			putchar(178);
//		}
//	}
//	if (a->xeploai == 5)
//	{
//
//		for (int i = 0; i < 32; i++)
//		{
//			std::lock_guard<std::mutex> lock(g_i_mutex);
//
//			gotoXY(a[i].td.x, a[i].td.y);
//			TextColor(a[i].mau);
//			putchar(178);
//		}
//	}
//}
void KhoiTaoBoard(Board board[][100])
{

	for (int i = 0; i < 100; i++)
	{
		board[i][-1].gt = -1;
		for (int j = 0; j < 100; j++)
		{
			board[i][j].gt = 0;
		}
	}
}
void DiChuyenXuong(ManhTru a[], Board board[][100])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.y + 1 > MAXCOL)
			return;
	}
	for (int i = 0; i < 32; i++)
	{
		if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
		{
			return;
		}
	}
	if (a->xeploai == 1)
	{
		// Xoa di cai cu:
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// In ra cai moi.
		for (int i = 0; i < 32; i++)
		{
			a[i].td.y++;
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
		// sau khi xoa thi in ra cai moi
		for (int i = 0; i < 32; i++)
		{
			a[i].td.y++;
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
		//Sau khi xoa thi in ra cai moi



		for (int i = 0; i < 32; i++)
		{
			a[i].td.y++;
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
		//Sau khi xoa thi in ra cai moi



		for (int i = 0; i < 32; i++)
		{
			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
	else if (a->xeploai == 5)
	{
		// Xoa di cai cu:
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// In ra cai moi.
		for (int i = 0; i < 32; i++)
		{
			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
}


void DiChuyenXuong2(ManhTru a[], Board board[][100])
{

	if (a->xeploai == 1)
	{

		// Xoa di cai cu:
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// In ra cai moi.
		for (int i = 0; i < 32; i++)
		{

			a[i].td.y++;
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
		// sau khi xoa thi in ra cai moi
		for (int i = 0; i < 32; i++)
		{

			a[i].td.y++;
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
		//Sau khi xoa thi in ra cai moi



		for (int i = 0; i < 32; i++)
		{

			a[i].td.y++;
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
		//Sau khi xoa thi in ra cai moi



		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);
			a[i].td.y++;
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);

			putchar(178);
		}
	}
	else if (a->xeploai == 5)
	{
		// Xoa di cai cu:
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// In ra cai moi.
		for (int i = 0; i < 32; i++)
		{

			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);

			putchar(178);
		}
	}
}


void DiChuyenQuaTrai(ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.x - 4 < 9)
			return;
	}
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
			a[i].td.x -= 4;
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
		// Lay toa do tru di
		//Xoa cai cu
		for (int i = 0; i < 32; i++)
		{
			a[i].td.x -= 4;
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
		// Lay toa do tru di
		for (int i = 0; i < 32; i++)
		{
			a[i].td.x -= 4;
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
		// Lay toa do tru di
		for (int i = 0; i < 32; i++)
		{
			a[i].td.x -= 4;
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
			a[i].td.x -= 4;
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


void DiChuyenQuaPhai(ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.x + 4 > 49)
			return;
	}

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


void XoayChu(ManhTru a[])
{
	if (a->xeploai == 2)
	{
		a->n++;
		if (a->n > 4)
		{
			a->n = 1;
		}
		if (a->n == 1)
		{
			int dem = 0;
			for (int i = 0; i < 32; i++)
			{
				std::lock_guard<std::mutex> lock(g_i_mutex);

				gotoXY(a[i].td.x, a[i].td.y);
				printf(" ");
			}
			int k = a[12].td.x;
			int h = a[12].td.y - 2;
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (dem < 2)
						a[i * 4 + j].mau = 12;
					else if (dem >= 2 && dem < 4)
						a[i * 4 + j].mau = 8;
					a[i * 4 + j].td.x = k++;
					a[i * 4 + j].td.y = h;
				}
				dem++;
				if (dem == 4)
				{
					dem = 0;
				}
				k = a[0].td.x;
				h++;
			}
			k = a[19].td.x + 1;
			h = a[19].td.y;
			for (int i = 24; i < 32; i++)
			{
				a[i].mau = 8;
				a[i].td.x = k++;
				a[i].td.y = h;
				if (i == 27)
				{
					k = a[19].td.x + 1;
					h++;

				}

			}
			//Xuat ra
		}

		else if (a->n == 2)
		{
			int dem = 0, q = 12, w = 8;
			
		
				for (int i = 0; i < 32; i++)
				{
					std::lock_guard<std::mutex> lock(g_i_mutex);

					gotoXY(a[i].td.x, a[i].td.y);
					printf(" ");
				}
				int k = a[0].td.x - 4;
				int tempk = k;
				int h = a[12].td.y;
				int temph = h;
				for (int i = 0; i < 2; i++)
				{
					for (int j = 0; j < 12; j++)
					{

						if (dem == 8)
							dem = 0;
						if (dem < 4)
						{
							a[i * 12 + j].mau = q;
						}
						else if (dem >= 4 && dem < 8)
						{
							a[i * 12 + j].mau = w;
						}
						a[i * 12 + j].td.x = k++;
						a[i * 12 + j].td.y = h;
						dem++;
					}
					h++;
					q = 8;
					w = 12;
					k = tempk;
				}
				k = a[8].td.x;
				tempk = k;
				temph = a[8].td.y - 2;
				for (int i = 24; i < 32; i++)
				{
					a[i].mau = 8;
					a[i].td.x = k++;
					a[i].td.y = temph;
					if (i == 27)
					{
						temph++;
						k = tempk;
					}
				}
			
		}
		else if (a->n == 3)
		{
			int dem = 0;
			for (int i = 0; i < 32; i++)
			{
				std::lock_guard<std::mutex> lock(g_i_mutex);

				gotoXY(a[i].td.x, a[i].td.y);
				printf(" ");
			}
			int k = a[4].td.x;
			int tempk = k;
			int h = a[12].td.y;
			int temph = h;
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (dem < 2)
						a[i * 4 + j].mau = 12;
					else if (dem >= 2 && dem < 4)
						a[i * 4 + j].mau = 8;
					a[i * 4 + j].td.x = k++;
					a[i * 4 + j].td.y = h;
				}
				dem++;
				if (dem == 4)
				{
					dem = 0;
				}
				k = tempk;
				h--;

			}
			k = a[16].td.x - 1;
			tempk = k;
			h = a[16].td.y;
			for (int i = 24; i < 32; i++)
			{
				a[i].mau = 8;
				a[i].td.x = k--;
				a[i].td.y = h;
				if (i == 27)
				{
					h--;
					k = tempk;
				}
			}

		}
		else if (a->n == 4)
		{
			int dem = 0;
			for (int i = 0; i < 32; i++)
			{
				std::lock_guard<std::mutex> lock(g_i_mutex);

				gotoXY(a[i].td.x, a[i].td.y);
				printf(" ");
			}
			int k = a[4].td.x - 4;
			int tempk = k;
			int h = a[4].td.y;
			int temph = h;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (dem < 2)
						a[i * 4 + j].mau = 12;
					else if (dem >= 2 && dem < 4)
						a[i * 4 + j].mau = 8;
					a[i * 4 + j].td.x = k++;
					a[i * 4 + j].td.y = h;
				}
				dem++;

				k = tempk;
				h--;

			}
			dem = 0;
			k = a[15].td.x + 1;
			h = a[15].td.y;
			for (int i = 16; i < 32; i++)
			{
				if (dem < 4)
					a[i].mau = 12;
				else if (dem >= 4 && dem < 8)
					a[i].mau = 8;
				a[i].td.x = k++;
				a[i].td.y = h;
				if (i == 23)
				{
					dem = -1;
					k = a[15].td.x + 1;
					h++;
				}
				dem++;

			}



		}


	}
	else if (a->xeploai == 3)
	{
		a->n++;
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		if (a->n > 3)
		{
			a->n = 1;
		}
		if (a->n == 2)
		{
			Tao_XuatKhoiCauChuZ2(a);
		}
		else if (a->n == 1)
		{
			int dem = 0;
			int k = a[15].td.x;
			int h = a[0].td.y;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (dem == 8)
						dem = 0;
					if (dem < 4)
						a[i * 8 + j].mau = 9;
					else if (dem >= 4 && dem < 8)
						a[i * 8 + j].mau = 1;
					a[i * 8 + j].td.x = k++;
					a[i * 8 + j].td.y = h;
					dem++;
				}
				k = a[15].td.x;
				h++;
			}
			k = a[0].td.x + 4;
			for (int i = 16; i <= 23; i++)
			{
				if (i <= 19)
					a[i].mau = 9;
				else
					a[i].mau = 1;
				a[i].td.x = k++;
				a[i].td.y = h;
			}
			k = a[0].td.x + 4;
			h++;
			for (int i = 24; i < 32; i++)
			{
				if (i <= 27)
					a[i].mau = 9;
				else
					a[i].mau = 1;
				a[i].td.x = k++;
				a[i].td.y = h;
			}
		}
	}
	else if (a->xeploai == 4)
	{
		if (a->n > 4)
		{
			a->n = 0;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		a->n++;
		if (a->n == 2)
		{
			int dem = 0;
			int k = a[11].td.x;
			int tempk = k;
			int h = a[0].td.y;
			h -= 2;
			for (int i = 8; i < 32; i++)
			{

				if (dem < 2)
					a[i].mau = 13;
				else if (dem >= 2 && dem < 4)
					a[i].mau = 7;
				else
					a[i].mau = 13;
				a[i].td.x = k;
				a[i].td.y = h++;
				if (i == 13 || i == 19 || i == 25)
				{
					dem = -1;
					k--;
					h = a[8].td.y;

				}
				dem++;
			}
		}
		else if (a->n == 3)
		{
			int dem = 8;
			int k = a[0].td.x;
			int h = a[0].td.y;
			h--;
			k -= 4;
			for (int i = 8; i < 32; i++)
			{
				if (dem < 12)
					a[i].mau = 13;
				else if (dem >= 12 && dem <= 15)
					a[i].mau = 7;
				else
					a[i].mau = 13;
				a[i].td.x = k++;
				a[i].td.y = h;
				if (i == 19)
				{
					dem = 7;
					k = a[8].td.x;
					h--;
				}
				dem++;

			}
		}
		else if (a->n == 4)
		{
			int dem = 0;
			int k = a[3].td.x;
			int h = a[3].td.y;
			h -= 2;
			k++;
			for (int i = 8; i < 32; i++)
			{
				if (dem < 2)
					a[i].mau = 13;
				else if (dem >= 2 && dem < 4)
					a[i].mau = 7;
				else
					a[i].mau = 13;
				a[i].td.x = k;
				a[i].td.y = h++;
				if (i == 13 || i == 19 || i == 25)
				{
					k++;
					h = a[8].td.y;
					dem = -1;
				}
				dem++;

			}
		}
		else if (a->n == 1)
		{
			int dem = 8;
			int k = a[0].td.x;
			k -= 4;
			int h = a[0].td.y;
			h += 2;
			for (int i = 8; i < 32; i++)
			{
				if (dem < 12)
					a[i].mau = 13;
				else if (dem >= 12 && dem <= 15)
					a[i].mau = 7;
				else
					a[i].mau = 13;
				a[i].td.x = k++;
				a[i].td.y = h;
				if (i == 19)
				{
					k = a[8].td.x;
					h++;
					dem = 7;
				}
				dem++;

			}
		}
	}
	else if (a->xeploai == 5)
	{
		a->n++;
		if (a->n > 3)
			a->n = 1;
		if (a->n == 1)
		{
			int dem = 0;
			for (int i = 0; i < 32; i++)
			{
				std::lock_guard<std::mutex> lock(g_i_mutex);

				gotoXY(a[i].td.x, a[i].td.y);
				printf(" ");
			}
			int k = a[4].td.x;
			int h = a[4].td.y - 3;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (dem == 4)
					{
						dem = 0;
					}
					if (dem < 2)
						a[i * 4 + j].mau = 8;
					else if (dem >= 2 && dem < 4)
						a[i * 4 + j].mau = 7;
					a[i * 4 + j].td.x = k++;
					a[i * 4 + j].td.y = h;
				}

				k = a[4].td.x;
				dem++;
				h++;
			}
		}
		if (a->n == 2)
		{
			for (int i = 0; i < 32; i++)
			{
				std::lock_guard<std::mutex> lock(g_i_mutex);

				gotoXY(a[i].td.x, a[i].td.y);
				printf(" ");
			}
			int k = 0;
			if (a[0].td.x - 4 > 9)
			{
				k = a[0].td.x - 4;
			}
			else
				k = 9;
			if (a[0].td.x + 16 > 49)
			{
				k -= a[0].td.x + 16 - 49 - 4;
			}

			int tempk = k;
			int h = a[12].td.y;
			int temph = h;
			int dem = 0;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 16; j++)
				{
					if (dem == 8)
						dem = 0;
					if (dem < 4)
						a[i * 16 + j].mau = 8;
					else if (dem >= 4 && dem < 8)
						a[i * 16 + j].mau = 7;
					a[i * 16 + j].td.x = k++;
					a[i * 16 + j].td.y = h;
					dem++;
				}
				h++;
				k = tempk;
			}

		}
	}
	
}


int KiemTraVaChamDay(ManhTru a[])
{
	if (a->xeploai == 2)
	{
		for (int i = 0; i < 32; i++)
		{
			if (a[i].td.y == consoleHeight)
			{
				return 1;
			}
		}
	}
	else if (a->xeploai == 1)
	{
		for (int i = 0; i < 32; i++)
		{
			if (a[i].td.y == consoleHeight)
			{
				return 1;
			}
		}
	}
	else if (a->xeploai == 3)
	{
		for (int i = 0; i < 32; i++)
		{
			if (a[i].td.y == consoleHeight)
			{
				return 1;
			}
		}
	}
	else if (a->xeploai == 4)
	{
		for (int i = 0; i < 32; i++)
		{
			if (a[i].td.y == consoleHeight)
			{
				return 1;
			}
		}
	}
	else if (a->xeploai == 5)
	{
		for (int i = 0; i < 32; i++)
		{
			if (a[i].td.y == consoleHeight)
			{
				return 1;
			}
		}
	}
}


void GanChoBoard(ManhTru a[], Board board[][100])
{
	if (KiemTraVaChamDay(a) == 1)
	{
		if (a->xeploai == 1)
		{

			for (int i = 0; i < 32; i++)
			{
				board[a[i].td.x][a[i].td.y].gt = 1;
				board[a[i].td.x][a[i].td.y].mau = a[i].mau;

			}
		}
		else if (a->xeploai == 2)
		{

			for (int i = 0; i < 32; i++)
			{
				board[a[i].td.x][a[i].td.y].gt = 1;
				board[a[i].td.x][a[i].td.y].mau = a[i].mau;
			}

		}
		else if (a->xeploai == 3)
		{



			for (int i = 0; i < 32; i++)
			{
				board[a[i].td.x][a[i].td.y].gt = 1;
				board[a[i].td.x][a[i].td.y].mau = a[i].mau;
			}


		}
		else if (a->xeploai == 4)
		{

			for (int i = 0; i < 32; i++)
			{
				board[a[i].td.x][a[i].td.y].gt = 1;
				board[a[i].td.x][a[i].td.y].mau = a[i].mau;
			}
		}
		if (a->xeploai == 5)
		{

			for (int i = 0; i < 32; i++)
			{
				board[a[i].td.x][a[i].td.y].gt = 1;
				board[a[i].td.x][a[i].td.y].mau = a[i].mau;
			}
		}
	}
}


void Background2(int score , char s[])
{


	//  KHUNG Game

	//khung Player 
	for (int i = consoleHeight / 2; i >= 0; i--)
	{
		TextColor(14);
		gotoXY(8, i);
		putchar(219);
		gotoXY(70 + 44, i);
		putchar(219);
		gotoXY(consoleWidth - 70, i);
		putchar(219);
		gotoXY(consoleWidth2 - 18 + 5 + 5 + 13, i);
		putchar(219);

		TextColor(6);
		gotoXY(7, i);
		putchar(219);
		gotoXY(59 + 5 + 5 + 44, i);
		putchar(219);
		gotoXY(consoleWidth - 69, i);
		putchar(219);
		gotoXY(consoleWidth2 - 17 + 5 + 5 + 13, i);
		putchar(219);

		gotoXY(59 + 5 + 5 + 44, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth2 - 17 + 5 + 5 + 13, consoleHeight - i);
		putchar(219);
		gotoXY(7, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth - 69, consoleHeight - i);
		putchar(219);

		TextColor(14);
		gotoXY(8, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth - 70, consoleHeight - i);
		putchar(219);
		gotoXY(70 + 44, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth2 - 18 + 5 + 5 + 13, consoleHeight - i);
		putchar(219);



		Sleep(40);
	}





	for (int i = 6; i <= consoleHeight / 2 + 2; i++)
	{
		TextColor(1);
		gotoXY(consoleWidth - 63, i);
		putchar(219);
		TextColor(9);
		gotoXY(consoleWidth - 64, i);
		putchar(219);

		TextColor(1);
		gotoXY(consoleWidth - 63, 36 - i);
		putchar(219);
		TextColor(9);
		gotoXY(consoleWidth - 64, 36 - i);
		putchar(219);

		Sleep(30);

		TextColor(1);
		gotoXY(consoleWidth - 13, i);
		putchar(219);
		TextColor(9);
		gotoXY(consoleWidth - 12, i);
		putchar(219);

		TextColor(1);
		gotoXY(consoleWidth - 13, 36 - i);
		putchar(219);
		TextColor(9);
		gotoXY(consoleWidth - 12, 36 - i);
		putchar(219);

		Sleep(30);
	}


	//3 do?n n?i ( |=| )

	TextColor(7);
	gotoXY(consoleWidth - 62, 7);
	printf("%c%c%c%c", 219, 254, 254, 219);
	gotoXY(consoleWidth - 62, consoleHeight - 16);
	printf("%c%c%c%c", 219, 254, 254, 219);
	gotoXY(consoleWidth - 62, consoleHeight - 6);
	printf("%c%c%c%c", 219, 254, 254, 219);

	gotoXY(consoleWidth - 17, 7);
	printf("%c%c%c%c", 219, 254, 254, 219);
	gotoXY(consoleWidth - 17, consoleHeight - 16);
	printf("%c%c%c%c", 219, 254, 254, 219);
	gotoXY(consoleWidth - 17, consoleHeight - 6);
	printf("%c%c%c%c", 219, 254, 254, 219);


	// 3 ô ch? nh?t

	//RED
	TextColor(4);
	for (int i = 0; i <= consoleHeight - 21; i++) // c?t
	{
		gotoXY(consoleWidth - 18, i);
		putchar(219);
		gotoXY(consoleWidth - 58, i);
		putchar(219);


		Sleep(10);
	}

	for (int i = consoleWidth - 58; i <= consoleWidth - 18; i++) //hàng
	{
		gotoXY(i, 0);
		putchar(220);
		gotoXY(i, consoleHeight - 21);
		putchar(223);

		Sleep(10);
	}


	//Yellow
	TextColor(6);
	for (int i = consoleHeight - 19; i <= consoleHeight - 12; i++) // c?t 
	{
		gotoXY(consoleWidth - 18, i);
		putchar(219);
		gotoXY(consoleWidth - 58, i);
		putchar(219);

		Sleep(10);
	}

	for (int i = consoleWidth - 58; i <= consoleWidth - 18; i++)  //hàng
	{
		gotoXY(i, consoleHeight - 20);
		putchar(220);
		gotoXY(i, consoleHeight - 11);
		putchar(223);

		Sleep(10);
	}

	//Green
	TextColor(2);
	for (int i = consoleHeight - 10; i <= consoleHeight; i++) // c?t
	{
		gotoXY(consoleWidth - 18, i);
		putchar(219);
		gotoXY(consoleWidth - 58, i);
		putchar(219);

		Sleep(10);
	}

	for (int i = consoleWidth - 58; i <= consoleWidth - 18; i++)  //hàng
	{
		gotoXY(i, consoleHeight - 10);
		putchar(220);
		gotoXY(i, consoleHeight);
		putchar(223);

		Sleep(10);
	}

	Sleep(20);


	//Ph?n ch? trong khung
	TextColor(15);
	gotoXY(consoleWidth - 56, 2);
	printf("LEVEL: ");
	gotoXY(consoleWidth - 56, 5);
	printf("NEXT BLOCK: ");
	gotoXY(consoleWidth - 56, consoleHeight - 8);
	printf("NAME PLAYER: %s", s);

	gotoXY(consoleWidth - 56, consoleHeight - 3);
	printf("Press ECS return to Menu ");

	Sleep(10);
	

	////khung Player 1
	//for (int i = consoleHeight / 2; i >= 0; i--)
	//{
	//	TextColor(14);
	//	gotoXY(8, i);
	//	putchar(219);
	//	gotoXY(consoleWidth - 70, i);
	//	putchar(219);

	//	TextColor(6);
	//	gotoXY(7, i);
	//	putchar(219);
	//	gotoXY(consoleWidth - 69, i);
	//	putchar(219);

	//	gotoXY(7, consoleHeight - i);
	//	putchar(219);
	//	gotoXY(consoleWidth - 69, consoleHeight - i);
	//	putchar(219);

	//	TextColor(14);
	//	gotoXY(8, consoleHeight - i);
	//	putchar(219);
	//	gotoXY(consoleWidth - 70, consoleHeight - i);
	//	putchar(219);



	//	Sleep(40);
	//}


	////khung Player 2


	//for (int i = consoleHeight / 2; i >= 0; i--)
	//{
	//	TextColor(14);
	//	gotoXY(70 + 44, i);
	//	putchar(219);
	//	gotoXY(consoleWidth2 - 18 + 5 + 5 + 13, i);
	//	putchar(219);

	//	TextColor(6);
	//	gotoXY(59 + 5 + 5 + 44, i);
	//	putchar(219);
	//	gotoXY(consoleWidth2 - 17 + 5 + 5 + 13, i);
	//	putchar(219);

	//	gotoXY(59 + 5 + 5 + 44, consoleHeight - i);
	//	putchar(219);
	//	gotoXY(consoleWidth2 - 17 + 5 + 5 + 13, consoleHeight - i);
	//	putchar(219);

	//	TextColor(14);
	//	gotoXY(70 + 44, consoleHeight - i);
	//	putchar(219);
	//	gotoXY(consoleWidth2 - 18 + 5 + 5 + 13, consoleHeight - i);
	//	putchar(219);



	//	Sleep(40);
	//}




	////RED
	//TextColor(4);
	//for (int i = 0; i <= consoleHeight - 21; i++) // c?t
	//{
	//	gotoXY(consoleWidth - 12, i);
	//	putchar(219);
	//	gotoXY(consoleWidth - 58, i);
	//	putchar(219);


	//	Sleep(10);
	//}

	//for (int i = consoleWidth - 58; i <= consoleWidth - 12; i++) //hàng
	//{
	//	gotoXY(i, 0);
	//	putchar(220);
	//	gotoXY(i, consoleHeight - 21);
	//	putchar(223);

	//	Sleep(10);
	//}


	////Yellow
	//TextColor(6);
	//for (int i = consoleHeight - 19; i <= consoleHeight - 12; i++) // c?t 
	//{
	//	gotoXY(consoleWidth - 12, i);
	//	putchar(219);
	//	gotoXY(consoleWidth - 58, i);
	//	putchar(219);
	//	Sleep(10);
	//}

	//for (int i = consoleWidth - 58; i <= consoleWidth - 12; i++)  //hàng
	//{
	//	gotoXY(i, consoleHeight - 20);
	//	putchar(220);
	//	gotoXY(i, consoleHeight - 11);
	//	putchar(223);

	//	Sleep(10);
	//}
	//
	////Green
	//TextColor(2);
	//for (int i = consoleHeight - 10; i <= consoleHeight; i++) // c?t
	//{
	//	gotoXY(consoleWidth - 12, i);
	//	putchar(219);
	//	gotoXY(consoleWidth - 58, i);
	//	putchar(219);

	//	Sleep(10);
	//}

	//for (int i = consoleWidth - 58; i <= consoleWidth - 12; i++)  //hàng
	//{
	//	gotoXY(i, consoleHeight - 10);
	//	putchar(220);
	//	gotoXY(i, consoleHeight);
	//	putchar(223);

	//	Sleep(10);
	//}

	//Sleep(20);

	////Ph?n ch? trong khung
	//TextColor(15);
	//gotoXY(consoleWidth - 56, 2);
	//printf("LEVEL: ");
	//gotoXY(consoleWidth - 56, 5);
	//printf("NEXT BLOCK: ");
	//gotoXY(consoleWidth - 56, consoleHeight - 8);
	//printf("NAME PLAYER: %s",s);
	//gotoXY(consoleWidth - 56, consoleHeight - 5);
	//gotoXY(consoleWidth - 56, consoleHeight - 3);
	//printf("TIME: ");

	//Sleep(10);

	

	


}

void Background1(int score, char s[] , int level)
{
	
	for (int i = consoleHeight / 2; i >= 0; i--)
	{
		TextColor(14);
		gotoXY(8, i);
		putchar(219);
		gotoXY(consoleWidth - 70, i);
		putchar(219);

		TextColor(6);
		gotoXY(7, i);
		putchar(219);
		gotoXY(consoleWidth - 69, i);
		putchar(219);

		gotoXY(7, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth - 69, consoleHeight - i);
		putchar(219);

		TextColor(14);
		gotoXY(8, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth - 70, consoleHeight - i);
		putchar(219);



		Sleep(40);
	}


	// Ô ch?a Ch? JAGSAW
	for (int i = consoleWidth - 68; i < consoleWidth - 46; i++)
	{
		TextColor(6);
		gotoXY(i, consoleHeight - 18);
		putchar(36);
		gotoXY(i, consoleHeight - 16);
		putchar(36);
		TextColor(1);
		gotoXY(i, consoleHeight - 19);
		putchar(223);
		gotoXY(i, consoleHeight - 15);
		putchar(220);


		Sleep(20);
	}



	//Ph?n ch? JIGSAW

	TextColor(9);
	gotoXY(consoleWidth - 66, consoleHeight - 17);
	printf("J");
	TextColor(11);
	gotoXY(consoleWidth - 63, consoleHeight - 17);
	printf("I");
	TextColor(13);
	gotoXY(consoleWidth - 60, consoleHeight - 17);
	printf("G");
	TextColor(12);
	gotoXY(consoleWidth - 57, consoleHeight - 17);
	printf("S");
	TextColor(14);
	gotoXY(consoleWidth - 54, consoleHeight - 17);
	printf("A");
	TextColor(7);
	gotoXY(consoleWidth - 51, consoleHeight - 17);
	printf("W");

	Sleep(200);


	//?ng d?ng ( || )
	for (int i = 6; i <= consoleHeight / 2 + 1; i++)
	{
		TextColor(1);
		gotoXY(consoleWidth - 45, i);
		putchar(219);
		TextColor(9);
		gotoXY(consoleWidth - 46, i);
		putchar(219);

		TextColor(1);
		gotoXY(consoleWidth - 45, 36 - i);
		putchar(219);
		TextColor(9);
		gotoXY(consoleWidth - 46, 36 - i);
		putchar(219);

		Sleep(50);
	}
	/*


		*/
		//3 do?n n?i ( |=| )
	TextColor(7);
	gotoXY(consoleWidth - 44, 7);
	printf("%c%c%c%c", 219, 254, 254, 219);
	gotoXY(consoleWidth - 44, consoleHeight - 16);
	printf("%c%c%c%c", 219, 254, 254, 219);
	gotoXY(consoleWidth - 44, consoleHeight - 5);
	printf("%c%c%c%c", 219, 254, 254, 219);


	// 3 ô ch? nh?t

	//RED
	TextColor(4);
	for (int i = 0; i <= consoleHeight - 21; i++) // c?t
	{
		gotoXY(consoleWidth - 5, i);
		putchar(219);
		gotoXY(consoleWidth - 40, i);
		putchar(219);


		Sleep(10);
	}

	for (int i = consoleWidth - 40; i <= consoleWidth - 5; i++) //hàng
	{
		gotoXY(i, 0);
		putchar(220);
		gotoXY(i, consoleHeight - 21);
		putchar(223);

		Sleep(10);
	}


	//Yellow
	TextColor(6);
	for (int i = consoleHeight - 19; i <= consoleHeight - 12; i++) // c?t 
	{
		gotoXY(consoleWidth - 5, i);
		putchar(219);
		gotoXY(consoleWidth - 40, i);
		putchar(219);

		Sleep(10);
	}

	for (int i = consoleWidth - 40; i <= consoleWidth - 5; i++)  //hàng
	{
		gotoXY(i, consoleHeight - 20);
		putchar(220);
		gotoXY(i, consoleHeight - 11);
		putchar(223);

		Sleep(10);
	}



	//Green
	TextColor(2);
	for (int i = consoleHeight - 10; i <= consoleHeight; i++) // c?t
	{
		gotoXY(consoleWidth - 5, i);
		putchar(219);
		gotoXY(consoleWidth - 40, i);
		putchar(219);

		Sleep(10);
	}

	for (int i = consoleWidth - 40; i <= consoleWidth - 5; i++)  //hàng
	{
		gotoXY(i, consoleHeight - 10);
		putchar(220);
		gotoXY(i, consoleHeight);
		putchar(223);

		Sleep(10);
	}

	Sleep(20);
	level = 1;
	//Ph?n ch? trong khung
	TextColor(15);
	gotoXY(consoleWidth - 38, 2);
	printf("LEVEL: %d",level);
	gotoXY(consoleWidth - 38, 5);
	printf("NEXT BLOCK: ");
	gotoXY(consoleWidth - 38, consoleHeight - 8);
	printf("NAME PLAYER: ");
	printf("%s", s);
	gotoXY(consoleWidth - 38, consoleHeight - 5);
	printf("SCORE: %d", score);
	gotoXY(consoleWidth - 38, consoleHeight - 3);
	printf("Press SPACE to pause Game. ");
	gotoXY(consoleWidth - 38, consoleHeight - 4);
	printf("Press ESC return Menu ");

	Sleep(10);

	_321GO();
}





int KiemTraVaChamNhau(ManhTru a[], Board board[][100])
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
int CheckChamPhai(ManhTru a[], Board board[][100]) //Ham nay tranh truong hop cac khoi va cham ngang nhau.
{
	for (int i = 0; i < 32; i++)
	{
		if (board[a[i].td.x + 1][a[i].td.y].gt == 1)
			return 0;
	}
	return 1;
}
int CheckChamTrai(ManhTru a[], Board board[][100]) //Ham nay tranh truong hop cac khoi va cham ngang nhau.
{
	for (int i = 0; i < 32; i++)
	{
		if (board[a[i].td.x - 1][a[i].td.y].gt == 1)
			return 0;
	}
	return 1;
}
void  CheckMax(Board board[][100], ManhTru a[], int &score)
{
	int dem = 0, temp1;
	for (int i = consoleHeight; i >= 0; i--)
	{
		for (int j = 9; j <= consoleWidth - 71; j++)
		{
			if (board[j][i].gt != 1)
			{
				dem = 0;
				temp1 = 0;
				break;
			}
			else if (j == consoleWidth - 71)
			{
				dem++;
				if (dem == 1)
					temp1 = i;
				if (dem == 2)
				{
					for (int k = 9; k <= consoleWidth - 71; k++)
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
					gotoXY(consoleWidth - 38, consoleHeight - 5);
					printf("SCORE: %d", score);
					
					//Sau khi an diem thi don xuong.
					for (int k = 9; k <= consoleWidth - 71; k++)
					{
						for (int z = temp1; z >= 1; z--)
						{
							if (board[k][z].gt == 0)
							{/*
								int h = z - 1;
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
								}*/

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
									else if (board[k][h - 1].gt == 0)
										break;
										
								}
							}

						}
					}
				}
			}
		}

	}


}


int GameOver(Board board[][100], ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		if (KiemTraVaChamNhau(a, board) == 1 && a[i].td.y == 0)
		{
			return 1;
		}

	}
	
	return 0;
}



int Check(ManhTru a[], Board board[][100])
{
	for (int i = 0; i < 32; i++)
	{
		if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
		{
			return 1;
		}
	}
	return 0;
}


int CheckChamCotTrai(ManhTru a[], Board board[][100])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.x - 4 < 9)
			return 1;
	}
	return 0;

}


int CheckChamCotPhai(ManhTru a[], Board board[][100])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.x + 4 > 49)
			return 1;
	}
	return 0;
}

int InRaRank(int score)
{
	int *a;
	int dem = 0, temp;
	FILE *fi = fopen("PointData.txt", "r");
	while (!feof(fi))
	{
		fscanf(fi, "%d", &temp);
		dem++;
	}
	a = new int[dem];
	rewind(fi);
	int i = 0;
	while (!feof(fi))
	{

		fscanf(fi, "%d", &a[i]);
		i++;

	}
	;
	for (int i = 0; i < dem-1; i++)
	{
		for (int j = i + 1; j < dem; j++)
		{
			if (a[i] < a[j])
				swap(a[i], a[j]);

		}
	}
	for (int k = 0; k < dem; k++)
	{
		if (score > a[k])
			return k;
	}
}


// Hàm xử lý in 3 2 1 GO


#define XXX consoleWidth - 25
#define YYY consoleHeight - 19

// ---------***********+++++++++ In Khung ++++++++++***********---------//


//----------*********+++++++++ IN SO ++++++++++************------------//
void PrintNum3()
{
	TextColor(9);
	//------------------ Láº§n in 1 ---------------------//

	gotoXY(XXX, YYY);
	printf("%c", 219);
	gotoXY(XXX + 6, YYY);
	printf("%c", 219);
	Sleep(125);

	//------------------ Láº§n in 2 ---------------------//	

	gotoXY(XXX, YYY);
	printf("%c%c", 219, 186);
	gotoXY(XXX + 5, YYY);
	printf("%c%c", 186, 219);
	gotoXY(XXX, YYY + 1);
	printf(" ");
	gotoXY(XXX + 6, YYY + 1);
	printf("%c", 219);
	Sleep(125);
	//---------------IN láº§n 3 -------------------//
	gotoXY(XXX, YYY);
	printf("%c%c%c", 219, 186, 219);
	gotoXY(XXX + 4, YYY);
	printf("%c%c%c", 219, 186, 219);
	gotoXY(XXX, YYY + 1);
	printf("  ");
	gotoXY(XXX + 5, YYY + 1);
	printf("%c%c", 186, 219);
	gotoXY(XXX, YYY + 2);
	printf("%c", 219);
	gotoXY(XXX + 6, YYY + 2);
	printf("%c", 219);
	Sleep(125);

	//---------------- In láº§n 4 ----------------//
	gotoXY(XXX, YYY);
	printf("%c%c%c%c%c%c%c\n", 219, 186, 219, 186, 219, 186, 219);
	gotoXY(XXX + 4, YYY + 1);
	printf(" %c%c", 186, 219);
	gotoXY(XXX, YYY + 1);
	printf("   ");
	gotoXY(XXX + 5, YYY + 2);
	printf("%c%c", 186, 219);
	gotoXY(XXX, YYY + 2);
	printf("%c%c", 219, 186);
	gotoXY(XXX + 5, YYY + 2);
	printf("%c%c", 186, 219);
	gotoXY(XXX + 6, YYY + 3);
	printf("%c", 219);
	gotoXY(XXX, YYY + 3);
	printf(" ");
	Sleep(125);
	//---------------------In láº§n 5 --------------------//

	gotoXY(XXX, YYY + 1);
	printf("     %c%c\n", 186, 219);
	gotoXY(XXX + 4, YYY + 2);
	printf("%c%c%c", 219, 186, 219);
	gotoXY(XXX, YYY + 2);
	printf("%c%c%c", 219, 186, 219);
	gotoXY(XXX + 5, YYY + 3);
	printf("%c%c", 186, 219);
	gotoXY(XXX, YYY + 3);
	printf("  ");
	gotoXY(XXX + 6, YYY + 4);
	printf("%c", 219);
	gotoXY(XXX, YYY + 4);
	printf("%c", 219);
	Sleep(125);

	//-------------------- In láº§n 6 ---------------------//

	gotoXY(XXX, YYY + 2);
	printf("%c%c%c%c%c%c%c\n", 219, 186, 219, 186, 219, 186, 219);
	gotoXY(XXX + 4, YYY + 3);
	printf(" %c%c", 186, 219);
	gotoXY(XXX, YYY + 3);
	printf("   ");
	gotoXY(XXX + 5, YYY + 4);
	printf("%c%c", 186, 219);
	gotoXY(XXX, YYY + 4);
	printf("%c%c", 219, 186);
	Sleep(125);

	// ****************** In láº§n 7 ***********************//
	gotoXY(XXX, YYY + 3);
	printf("     %c%c\n", 186, 219);
	gotoXY(XXX + 4, YYY + 4);
	printf("%c%c%c", 219, 186, 219);
	gotoXY(XXX, YYY + 4);
	printf("%c%c%c", 219, 186, 219);
	Sleep(125);

	// -------------------In Láº§n 8 ---------------//

	gotoXY(XXX, YYY + 4);
	printf("%c%c%c%c%c%c%c\n", 219, 186, 219, 186, 219, 186, 219);

}


void PrintNum2()
{
	TextColor(14);
	// ++++++++++++++++++ In DÃ²ng 5 *******************//

	gotoXY(XXX + 5, YYY + 4);
	printf("%c%c", 219, 186); Sleep(80);
	gotoXY(XXX + 3, YYY + 4);
	printf("%c%c", 219, 186); Sleep(80);
	gotoXY(XXX + 2, YYY + 4);
	printf("%c", 186); Sleep(80);
	gotoXY(XXX, YYY + 4);
	printf("%c%c", 186, 219); Sleep(80);
	// ******************* In dÃ²ng 4 *********************//
	gotoXY(XXX + 5, YYY + 3);
	printf("  "); Sleep(80);
	gotoXY(XXX + 3, YYY + 3);
	printf("  "); Sleep(80);
	gotoXY(XXX + 2, YYY + 3);
	printf(" "); Sleep(80);
	gotoXY(XXX, YYY + 3);
	printf("%c%c", 186, 219); Sleep(80);

	// ---------------------- In dÃ²ng 3 ----------------//
	gotoXY(XXX + 5, YYY + 2);
	printf("%c%c", 219, 186); Sleep(80);
	gotoXY(XXX + 3, YYY + 2);
	printf("%c%c", 219, 186); Sleep(80);
	gotoXY(XXX + 2, YYY + 2);
	printf("%c", 186); Sleep(80);
	gotoXY(XXX, YYY + 2);
	printf("%c%c", 186, 219); Sleep(80);
	// -------------------- In dÃ²ng 2 ------------------//

	gotoXY(XXX + 5, YYY + 1);
	printf("%c%c", 186, 219); Sleep(80);
	gotoXY(XXX + 3, YYY + 1);
	printf("  "); Sleep(80);
	gotoXY(XXX + 2, YYY + 1);
	printf(" "); Sleep(80);
	gotoXY(XXX, YYY + 1);
	printf("  "); Sleep(80);

	// ******************* In dÃ²ng 1 ***********************//

	gotoXY(XXX + 5, YYY);
	printf("%c%c", 219, 186); Sleep(80);
	gotoXY(XXX + 3, YYY);
	printf("%c%c", 219, 186); Sleep(80);
	gotoXY(XXX + 2, YYY);
	printf("%c", 186); Sleep(80);
	gotoXY(XXX, YYY);
	printf("%c%c", 186, 219); Sleep(80);
}


void PrintNum1()
{

	TextColor(10);				// In DÃ²ng 1

	gotoXY(XXX, YYY);

	printf("  ");  Sleep(80);
	printf("%c%c", 220, 186); Sleep(80);
	printf("%c ", 219); Sleep(80);
	printf("  "); Sleep(80);
	gotoXY(XXX, YYY + 1);
	printf(" "); Sleep(80);				// In dÃ²ng 2
	printf(" %c", 223); Sleep(80);
	printf("%c%c", 186, 219); Sleep(80);
	printf("   "); Sleep(80);
	gotoXY(XXX, YYY + 2);
	printf("  "); Sleep(80);
	printf(" %c", 186); Sleep(80);
	printf("%c ", 219); Sleep(80);
	printf("  "); Sleep(80);
	gotoXY(XXX, YYY + 3);
	printf("  "); Sleep(80);
	printf(" %c", 186); Sleep(80);
	printf("%c ", 219); Sleep(80);
	printf("  "); Sleep(80);
	gotoXY(XXX, YYY + 4);
	printf(" %c", 186); Sleep(80);
	printf("%c%c", 219, 186); Sleep(80);
	printf("%c%c", 219, 186); Sleep(80);
	printf("%c ", 219); Sleep(80);

}

void PrintGo()
{
	TextColor(13);
	gotoXY(XXX - 1, YYY);
	printf("%c%c%c%c", 219, 186, 219, 186);
	gotoXY(XXX - 1, YYY + 1);
	printf("%c  %c", 219, 223);
	gotoXY(XXX - 1, YYY + 2);
	printf("%c %c%c", 219, 219, 186);
	gotoXY(XXX - 1, YYY + 3);
	printf("%c  %c", 219, 186);
	gotoXY(XXX - 1, YYY + 4);
	printf("%c%c%c%c", 219, 186, 219, 186);

	for (int i = 0; i < 5; i++)
	{
		gotoXY(XXX + 3, YYY + i);
		printf(" ");
	}
	TextColor(9);
	gotoXY(XXX + 5, YYY);
	printf("%c%c%c", 186, 219, 186);
	gotoXY(XXX + 5, YYY + 1);
	printf("  %c", 186);
	gotoXY(XXX + 5, YYY + 2);
	printf("  %c", 186);
	gotoXY(XXX + 5, YYY + 3);
	printf("  %c", 186);
	gotoXY(XXX + 5, YYY + 4);
	printf("%c%c%c", 186, 219, 186);

	Sleep(500);


}


void _321GO()
{
	//PrintKhung();
	PrintNum3();
	PrintNum2();
	PrintNum1();
	PrintGo();
	TextColor(7);
}