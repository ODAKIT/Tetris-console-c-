#pragma once
#include"Tetromino.h"

#include"pch.h"

static int stopthread = 0;
//void InRaKhiCham(ManhTru a[]);


void DiChuyenXuong(ManhTru a[], Board board[][100]);

void DiChuyenXuong2(ManhTru a[], Board board[][100]);

void DiChuyenQuaTrai(ManhTru a[]);

void DiChuyenQuaPhai(ManhTru a[]);

void XoayChu(ManhTru a[]);

int KiemTraVaChamDay(ManhTru a[]);  // .	Kiểm tra va chạm đáy thì dừng lại

void KhoiTaoBoard(Board board[][100]);

void GanChoBoard(ManhTru a[], Board board[][100]); 

void Background1(int score, char s[], int level);

int KiemTraVaChamNhau(ManhTru a[], Board board[][100]);  // .	Kiểm tra các khối va chạm nhau 

void  CheckMax(Board board[][100], ManhTru a[], int &score);

int GameOver(Board board[][100], ManhTru a[]);


int Check(ManhTru a[], Board board[][100]);


int CheckChamCotTrai(ManhTru a[], Board board[][100]);


int CheckChamCotPhai(ManhTru a[], Board board[][100]);

int CheckChamPhai(ManhTru a[], Board board[][100]); //Ham nay tranh truong hop cac khoi va cham ngang nhau.
int CheckChamTrai(ManhTru a[], Board board[][100]);

void Background2(int score , char name[]);

int InRaRank(int score);


void Nocursortype();

// Xử lý in 3 2 1 go!
void _321GO();
void PrintGo();
void PrintNum3();


void PrintNum2();


void PrintNum1();

