// Xep hinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Ki tu 178 177 176 tu dam den nhat.
#include"pch.h"
#include<stdio.h>
#include <iostream>	
#include"Library.h"
#include<conio.h>
#include<ctime>
#include <windows.h>
#include<thread>
#include<mutex>
#define MAXCOL 35
#define MAXROW 85
#define consoleHeight 35
#define consoleWidth 119
#define consoleHeight2 35
#define consoleWidth2 150
#define MaxLeft 8
#define MaxRight 47
#define MinPL2 115
#define MaxPL2 154	

using namespace std;
// Cai thread de o day
std::mutex g_i_mutex;

//
struct ToaDo
{
	int x, y;
};
struct ManhTru  // Manh tru tao nen cac block.
{
	int a[50];
	ToaDo td;
	int xeploai;
	int n;
	int mau;

};
struct Board
{
	int gt;
	int mau;
};
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



// Tao Khoi cau
void Tao_XuatKhoiCauVuong(ManhTru a[]) // Dai : 5 , rong 3. // Truy xuat : 0 > 14 5*i+j
{
	int k = 21;
	int dem = 0, x = 4, y = 10, temp = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (dem == 8)
				dem = 0;
			if (dem < 4)
				a[8 * i + j].mau = x;
			else if (dem >= 4 && dem < 8)
				a[8 * i + j].mau = y;
			a[8 * i + j].td.x = k++;
			a[8 * i + j].td.y = i;
			dem++;
		}
		temp++;
		if (temp == 2)
		{
			int temp = x;
			x = y;
			y = temp;
		}
		k = 21;
	}
	 
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
	a->xeploai = 1;

} // Da to mau   // Da To mau

void Tao_XuatKhoiCauChuL(ManhTru a[])
{
	int k = 21;
	int dem = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (dem < 2)
				a[i * 4 + j].mau = 12;
			else if (dem >= 2 && dem < 4)
				a[i * 4 + j].mau = 8;
			a[i * 4 + j].td.x = k++;
			a[i * 4 + j].td.y = i;
		}
		dem++;
		if (dem == 4)
		{
			dem = 0;
		}
		k = 21;
	}
	k = a[19].td.x+1;
	int h = 4;
	for (int i = 24; i < 32; i++)
	{
		a[i].mau = 8;
		a[i].td.x = k++;
		a[i].td.y = h;
		if (i == 27)
		{
			h++;
			k = a[19].td.x + 1;
		}

	}
	/*Xuat ra*/
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		putchar(178);
	}
	a->xeploai = 2;
	a->n = 1;
}   

void Tao_XuatKhoiCauChuI(ManhTru a[])
{
	int dem = 0;
	int k = 25;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (dem < 2)
				a[i*4+j].mau = 8;
			else if(dem>=2 && dem<4)
				a[i * 4 + j].mau = 7;
			a[i * 4 + j].td.x = k++;
			a[i * 4 + j].td.y = i;
		}
		dem++;
		if (dem == 4)
		{
			dem = 0;
		}
		k = 25;
	}
	/*Xuat ra*/
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
	a->xeploai = 5;
	a->n = 1;
}

void Tao_XuatKhoiCauChuZ(ManhTru a[])
{
	int k = 21;
	int dem = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (dem == 8)
				dem = 0;
			if (dem < 4)
				a[i * 8 + j].mau = 9;
			else if(dem>=4 && dem<8)
				a[i * 8 + j].mau = 1;

			a[i * 8 + j].td.x = k++;
			a[i * 8 + j].td.y = i;
			dem++;
		}
		k = 21;
	}
	k = 25;
	for (int i = 16; i <= 23; i++)
	{   
		if (i <= 19)
			a[i].mau = 9;
		else
			a[i].mau = 1;
		a[i].td.x = k++; 
		a[i].td.y = 2;
	}
	k = 25;
	for (int i = 24; i < 32; i++)
	{
		if (i <= 27)
			a[i].mau = 9;
		else
			a[i].mau = 1;
		a[i].td.x = k++;
		a[i].td.y = 3;
	}

	// Xuat ra
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
	a->n = 1;
	a->xeploai = 3;
}

void Tao_XuatKhoiCauChuZ2(ManhTru a[])
{
	int k = a[4].td.x;
	int temp = k;
	int h = a[4].td.y;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i * 4 + j <= 7)
				a[i * 4 + j].mau = 9;
			else
				a[i * 4 + j].mau = 1;
			a[i * 4 + j].td.x = k++;
			a[i * 4 + j].td.y = h;
		}
		k = temp;
		h++;
	}
	h = a[7].td.y;
	k = a[3].td.x;
	h++;
	for (int i = 8; i <= 15; i++)
	{
		if (i <= 11)
			a[i].mau = 1;
		else a[i].mau = 9;

		a[i].td.x = k--;
		a[i].td.y = h;
	}
	h = a[15].td.y;
	h++;
	k = a[15].td.x;;
	for (int i = 16; i <= 23; i++)
	{
		if (i <= 19)
			a[i].mau = 9;
		else
			a[i].mau = 1;
		a[i].td.x = k++;
		a[i].td.y = h;
	}
	h++;
	k = a[16].td.x;
	for (int i = 24 ;i < 32; i++)
	{
		a[i].mau = 1;
		a[i].td.x = k++;
		a[i].td.y = h;
		if (i == 27)
		{
			k = a[16].td.x;
			h++;
		}
	}

	// Xuat ra
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
	a->xeploai = 3;
}

void Tao_XuatKhoiCauDauCong(ManhTru a[])
{
	int k = 25;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i * 4 + j].mau = 13;
			a[i * 4 + j].td.x = k++;
			a[i * 4 + j].td.y = i;
		}
		k = 25;
	}
	k = 25 - 4;
	int h = 2;
	for (int i = 8; i < 32; i++)
	{
		if (i <= 11 || (i > 15 && i < 20) || (i>=20 && i<=23 || (i>=28 && i<=31)))
		{
			a[i].mau = 13;
		}
		else if (i > 11 && i <= 15 || (i>=24 && i<=27))
			a[i].mau = 7;
		a[i].td.x = k++;
		a[i].td.y = h;
		if (i == 19)
		{
			h++;
			k = 25 - 4;
		}

	}
	//Xuat ra
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
	a->xeploai = 4;
	a->n = 1;
}

void NewBlockVuong(ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		printf(" ");
	}
	int k = 119-40+13;
	int dem = 0, x = 4, y = 10, temp = 0;
	int h = 5;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (dem == 8)
				dem = 0;
			if (dem < 4)
				a[8 * i + j].mau = x;
			else if (dem >= 4 && dem < 8)
				a[8 * i + j].mau = y;
			a[8 * i + j].td.x = k++;
			a[8 * i + j].td.y = h;
			dem++;
		}
		temp++;
		h++;
		if (temp == 2)
		{
			int temp = x;
			x = y;
			y = temp;
		}
		k = 92;
	}

	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
}

void NewBlockL(ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		printf(" ");
	}
	int k = 92;
	int dem = 0;
	int g = 5;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (dem < 2)
				a[i * 4 + j].mau = 12;
			else if (dem >= 2 && dem < 4)
				a[i * 4 + j].mau = 8;
			a[i * 4 + j].td.x = k++;
			a[i * 4 + j].td.y = g;
		}
		dem++;
		if (dem == 4)
		{
			dem = 0;
		}
		k = 92;
		g++;
	}
	k = 96;
	int h = 9;
	for (int i = 24; i < 32; i++)
	{
		a[i].mau = 8;
		a[i].td.x = k++;
		a[i].td.y = h;
		if (i == 27)
		{
			h++;
			k = 96;
		}

	}
	/*Xuat ra*/
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
}

void NewBlockI(ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		printf(" ");
	}
	int dem = 0;
	int k = 92;
	int h = 5;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (dem < 2)
				a[i * 4 + j].mau = 8;
			else if (dem >= 2 && dem < 4)
				a[i * 4 + j].mau = 7;
			a[i * 4 + j].td.x = k++;
			a[i * 4 + j].td.y = h;
		}
		dem++;
		if (dem == 4)
		{
			dem = 0;
		}
		k = 92;
		h++;
	}
	/*Xuat ra*/
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
}

void NewBlockZ(ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		printf(" ");
	}
	int k = 92;
	int h = 5;
	int dem = 0;
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
		k = 92;
		h++;
	}
	k = 96;
	for (int i = 16; i <= 23; i++)
	{
		if (i <= 19)
			a[i].mau = 9;
		else
			a[i].mau = 1;
		a[i].td.x = k++;
		a[i].td.y = 7;
	}
	k = 96;
	for (int i = 24; i < 32; i++)
	{
		if (i <= 27)
			a[i].mau = 9;
		else
			a[i].mau = 1;
		a[i].td.x = k++;
		a[i].td.y = 8;
	}

	// Xuat ra
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
}

void NewBlockCong(ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		printf(" ");
	}
	int k = 96;
	int h = 5;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i * 4 + j].mau = 13;
			a[i * 4 + j].td.x = k++;
			a[i * 4 + j].td.y = h;
		}
		k = 96;
		h++;
	}
	k = 96 - 4;
	h=7;
	for (int i = 8; i < 32; i++)
	{
		if (i <= 11 || (i > 15 && i < 20) || (i >= 20 && i <= 23 || (i >= 28 && i <= 31)))
		{
			a[i].mau = 13;
		}
		else if (i > 11 && i <= 15 || (i >= 24 && i <= 27))
			a[i].mau = 7;
		a[i].td.x = k++;
		a[i].td.y = h;
		if (i == 19)
		{
			h++;
			k = 96 - 4;
		}

	}
	//Xuat ra
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}

}

//Player 2



void Tao_XuatKhoiCauChuI2(ManhTru a[])
{
	int dem = 0;
	int k = 115;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (dem < 2)
				a[i * 4 + j].mau = 8;
			else if (dem >= 2 && dem < 4)
				a[i * 4 + j].mau = 7;
			a[i * 4 + j].td.x = k++;
			a[i * 4 + j].td.y = i;
		}
		dem++;
		if (dem == 4)
		{
			dem = 0;
		}
		k = 115;
	}
	/*Xuat ra*/
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);
		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
	a->xeploai = 5;
	a->n = 1;
}

void Tao_XuatKhoiCauChuL2(ManhTru a[])
{
	int k = 115;
	int dem = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (dem < 2)
				a[i * 4 + j].mau = 12;
			else if (dem >= 2 && dem < 4)
				a[i * 4 + j].mau = 8;
			a[i * 4 + j].td.x = k++;
			a[i * 4 + j].td.y = i;
		}
		dem++;
		if (dem == 4)
		{
			dem = 0;
		}
		k = 115;
	}
	k = a[19].td.x + 1;
	int h = 4;
	for (int i = 24; i < 32; i++)
	{
		a[i].mau = 8;
		a[i].td.x = k++;
		a[i].td.y = h;
		if (i == 27)
		{
			h++;
			k = a[19].td.x + 1;
		}

	}
	/*Xuat ra*/
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		putchar(178);
	}
	a->xeploai = 2;
	a->n = 1;
}

void Tao_XuatKhoiCauVuong2(ManhTru a[]) // Dai : 5 , rong 3. // Truy xuat : 0 > 14 5*i+j
{
	int k = 115;
	int dem = 0, x = 4, y = 10, temp = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (dem == 8)
				dem = 0;
			if (dem < 4)
				a[8 * i + j].mau = x;
			else if (dem >= 4 && dem < 8)
				a[8 * i + j].mau = y;
			a[8 * i + j].td.x = k++;
			a[8 * i + j].td.y = i;
			dem++;
		}
		temp++;
		if (temp == 2)
		{
			int temp = x;
			x = y;
			y = temp;
		}
		k = 115;
	}

	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
	a->xeploai = 1;

} // Da to mau   // Da To mau

void Tao_XuatKhoiCauDauCong2(ManhTru a[])
{
	int k = 119;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i * 4 + j].mau = 13;
			a[i * 4 + j].td.x = k++;
			a[i * 4 + j].td.y = i;
		}
		k = 119;
	}
	k = 119 - 4;
	int h = 2;
	for (int i = 8; i < 32; i++)
	{
		if (i <= 11 || (i > 15 && i < 20) || (i >= 20 && i <= 23 || (i >= 28 && i <= 31)))
		{
			a[i].mau = 13;
		}
		else if (i > 11 && i <= 15 || (i >= 24 && i <= 27))
			a[i].mau = 7;
		a[i].td.x = k++;
		a[i].td.y = h;
		if (i == 19)
		{
			h++;
			k =119 - 4;
		}

	}
	//Xuat ra
	for (int i = 0; i < 32; i++)
	{
		std::lock_guard<std::mutex> lock(g_i_mutex);

		gotoXY(a[i].td.x, a[i].td.y);
		TextColor(a[i].mau);
		putchar(178);
	}
	a->xeploai = 4;
	a->n = 1;
}
// Xu ly


void InRaKhiCham(ManhTru a[])
{
	if (a->xeploai == 1)
	{
		
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

		for (int i = 0; i < 20; i++)
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
			TextColor(a[i].mau);
			putchar(178);
		}

	}
	else if (a->xeploai == 4)
	{

		for (int i = 0; i < 20; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
	if (a->xeploai == 5)
	{

		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
}

void DiChuyenXuong(ManhTru a[],Board board[][100])
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
		if (a[i].td.x - 4 <9)
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
			a[i].td.x -=4;
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
			int h = a[12].td.y-2;
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
			k = a[19].td.x+1;
			h = a[19].td.y;
			for (int i = 24; i < 32; i++)
			{
				a[i].mau = 8;
				a[i].td.x = k++;
				a[i].td.y = h;
				if (i == 27)
				{
					k = a[19].td.x+1;
					h++;

				}

			}
			//Xuat ra
		}
		
		else if (a->n == 2)
		{
			int dem = 0, q = 12, w = 8;
			char key = _getch();
			if (key == 'f' || key == 'F')
			{
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
				a->xeploai = 2;
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
			k = a[16].td.x-1;
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
		int k = a[4].td.x-4;
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
		k = a[15].td.x +1;
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
			k = a[0].td.x+4;
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
					a[i].mau=13;
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
				else if (dem >= 12 && dem <= 15	)
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
			if (a[0].td.x+16>49)
			{
				k -= a[0].td.x + 16 - 49-4;
			}
			
			int tempk = k;
			int h = a[12].td.y;
			int temph = h;
			int dem = 0;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 16; j++)
				{
					if(dem==8)
						dem=0;
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

void GanChoBoard(ManhTru a[] , Board board[][100])
{
	if (KiemTraVaChamDay(a) == 1)
	{
		if (a->xeploai == 1)
		{

			for (int i = 0; i <32; i++)
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

void Background(int score)
{


	//  KHUNG Game

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

	for (int i = consoleHeight / 2; i >= 0; i--)
	{
		TextColor(14);
		gotoXY(70+44, i);
		putchar(219);
		gotoXY(consoleWidth2 - 18+5+5+13, i);
		putchar(219);

		TextColor(6);
		gotoXY(59+5+5+44, i);
		putchar(219);
		gotoXY(consoleWidth2 - 17+5+5+13, i);
		putchar(219);

		gotoXY(59+5+5+44, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth2 - 17+5+5+13, consoleHeight - i);
		putchar(219);

		TextColor(14);
		gotoXY(70+44, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth2 - 18+5+5+13, consoleHeight - i);
		putchar(219);



		Sleep(40);
	}

	

}

void NewBlock(ManhTru a[] , int random)
{
	if (random == 1)
		NewBlockVuong(a);
	else if (random == 2)
		NewBlockL(a);
	else if (random == 3)
		NewBlockZ(a);
	else if (random == 4)
		NewBlockCong(a);
	else if (random == 5)
	NewBlockI(a);
}

int KiemTraVaChamNhau(ManhTru a[], Board board[][100])
{
	if (a->xeploai == 1)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y+1].gt==1)
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
			if (board[a[i].td.x][a[i].td.y+1].gt == 1)
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
			if (board[a[i].td.x][a[i].td.y+1].gt == 1)
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
			if (board[a[i].td.x][a[i].td.y+1].gt == 1)
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


int BotDown(ManhTru a[],Board board[][100]) // Kiem tra xem cho nao nen ha xuong.
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
					/*gotoXY(consoleWidth - 38, consoleHeight - 4);
					printf("SCORE: %d", score);*/

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




//Hàm check này dùng để kiểm tra phím thừa trong kbhit(ko cho block đứng yên thì có lệnh continue)
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


// An diem.



void  CheckMax(Board board[][100], ManhTru a[] , int &score)
{
	int dem = 0, temp1;
	for (int i = consoleHeight; i >=0; i--)
	{
		for (int j = 9; j <= consoleWidth-71; j++)
		{
			if (board[j][i].gt!=1)
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
					for (int k = 9; k <= consoleWidth-71; k++)
					{
						for (int z = temp1 ; z >= 1; z--)
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


// Game Over



int GameOver(Board board[][100] , ManhTru a[])
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


//Player 2:

void Player2(ManhTru a[100],Board Board[300][100] , int &score)
{
	srand(time(NULL));
	int random;
	int count = 0, dem = 1;
	Sleep(1800);
	
	Tao_XuatKhoiCauChuI2(a);
	while (1)
	{
		CheckMaxBot(Board, a, score);
		if (BotDown(a, Board) == 0)
		{
			BotRight(a,Board);
		}
		
			if (KiemTraVaChamDay(a) == 1 || KiemTraVaChamNhau2(a, Board) == 1)
			{
				GanChoBoard(a, Board);
				if (dem == 25)
				{
					dem = 15;
				}
				if (dem == 2 || dem==13 || dem == 19 || dem == 23)
					Tao_XuatKhoiCauVuong2(a);
				else if (dem == 0)
					Tao_XuatKhoiCauChuL2(a);
				else if (dem == 1)
					Tao_XuatKhoiCauChuI2(a);
				else if (dem == 3)
					Tao_XuatKhoiCauDauCong2(a);
				if (dem == 4 || dem ==9)
					Tao_XuatKhoiCauChuL2(a);
				if ( dem==5 || dem==6 || dem==7 || dem==8 || dem == 10 || dem == 11 || dem == 12 || dem==14 || dem == 15 || dem == 16 || dem == 17 || dem == 18 || dem == 20 || dem == 21
					|| dem == 22 || dem == 24)
					Tao_XuatKhoiCauChuI2(a);
			

	
				

				dem++;
				
			}
			else
			{

				DiChuyenXuong(a, Board);
				Sleep(5);
			
			}
		}		
}
DWORD WINAPI ThreadProc1(LPVOID param)  // Goi ra viec can lam Trong luong
{
	ManhTru a[100];
	Board Board[300][100];
	int score;
	Player2(a,Board,score);
	return 0;
}
 

// END PLAYER 2


int main()
{

	resizeConsole(1250, 615);// Thay doi kich thuoc console

	ManhTru a[50];
	int score = 0;
	ManhTru b[50];
	ManhTru Bom[50];
	Board Board[100][100];
	int lv1 = 350, dem = 0;
	srand(time(NULL));

	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&ThreadProc1, NULL, 0, NULL);
	Background(score);

	int random1, random2; //random 1 la cai in ra , random 2 la block tiep theo
	random2 = 1;
	KhoiTaoBoard(Board);
	NewBlock(b, random2);
	//Bomb(a);
	Tao_XuatKhoiCauChuI(a);
	//

	while (1)
	{

		GanChoBoard(a, Board);

		if (_kbhit())
		{
			char key = _getch();
			if ((key == 'S' || key == 's') && Check(a, Board) != 1)
			{
				DiChuyenXuong(a,Board);
				Sleep(50);
				continue;
			}
			else if ((key == 'A' || key == 'a') && CheckChamCotTrai(a,Board)!=1)
			{
				DiChuyenQuaTrai(a);
				Sleep(100);
				continue;
			}
			else if (key == 'D' || key == 'd' && CheckChamCotPhai(a, Board) != 1)
			{
				DiChuyenQuaPhai(a);
				Sleep(100);
				continue;
			}
			else if (key == 'f' || key == 'F')
			{
				XoayChu(a);
				InRaKhiCham(a);
				continue;
			}	
			else if (key == 32)
			{
				gotoXY(95, 20);
				printf("PAUSE");
				_getch();
				gotoXY(95, 20);
				printf("     ");

			}
		}
		if (KiemTraVaChamNhau(a, Board) == 1 || KiemTraVaChamDay(a) == 1)
		{
			if (GameOver(Board, a) == 1)
				return 0;
			dem++;
			InRaKhiCham(a);
			random1 = random2;
			random2 = rand() % 6;
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
				DiChuyenXuong(a,Board);
				Sleep(lv1);

		}
		CheckMax(Board,a,score);


	}

	return 0;
}

