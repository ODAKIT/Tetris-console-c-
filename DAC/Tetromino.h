#include "pch.h"
#include<stdio.h>
#include <iostream>	
#include"Library.h"
#include<conio.h>
#include<ctime>
#include <windows.h>
#include<thread>
#include<mutex>
static std::mutex g_i_mutex;




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

struct ToaDo
{
	int x, y;
};

struct ManhTru  // Manh tru tao nen cac block.
{
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

	


// Tao Khoi cau
void Tao_XuatKhoiCauVuong(ManhTru a[]);

void Tao_XuatKhoiCauChuL(ManhTru a[]);

void Tao_XuatKhoiCauChuI(ManhTru a[]);

void Tao_XuatKhoiCauChuZ(ManhTru a[]);

void Tao_XuatKhoiCauChuZ2(ManhTru a[]);

void Tao_XuatKhoiCauDauCong(ManhTru a[]);

void NewBlockVuong(ManhTru a[]);

void NewBlockL(ManhTru a[]);

void NewBlockI(ManhTru a[]);

void NewBlockZ(ManhTru a[]);

void NewBlockCong(ManhTru a[]);


//Player 2

void Tao_XuatKhoiCauChuI2(ManhTru a[]);

void Tao_XuatKhoiCauChuL2(ManhTru a[]);

void Tao_XuatKhoiCauVuong2(ManhTru a[]);

void Tao_XuatKhoiCauDauCong2(ManhTru a[]);

void NewBlock(ManhTru a[], int random); 