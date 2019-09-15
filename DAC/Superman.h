#pragma once

#include"pch.h"




int KiemTraVaChamNhau2(ManhTru a[], Board board[][100]);

// Xu Ly Bot

int CheckChamCotTraiBot(ManhTru a[], Board board[][100]);

int CheckChamCotPhaiBot(ManhTru a[], Board board[][100]);

void DiChuyenQuaPhaiBot(ManhTru a[]);

int BotDown(ManhTru a[], Board board[][100]);

int BotRight(ManhTru a[], Board board[][100]);

void  CheckMaxBot(Board board[][100], ManhTru a[], int &score);

void Player2(ManhTru a[], Board Board[][100], int &score);

