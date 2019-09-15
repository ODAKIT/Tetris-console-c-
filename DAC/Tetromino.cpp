#include"pch.h"
#include"Tetromino.h"






// Tao Khoi cau
void Tao_XuatKhoiCauVuong(ManhTru a[]) // Dai : 5 , rong 3. // Truy xuat : 0 > 14 5*i+j
{
	int k = 21;
	int dem = 0, x = 2, y = 10, temp = 0;
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


void Tao_XuatKhoiCauChuI(ManhTru a[])
{
	int dem = 0;
	int k = 25;
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
			else if (dem >= 4 && dem < 8)
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
	for (int i = 24; i < 32; i++)
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
	int k = 119 - 40 + 13;
	int dem = 0, x = 2, y = 10, temp = 0;
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
	h = 7;
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
	int dem = 0, x = 2, y = 10, temp = 0;
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
			k = 119 - 4;
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


void NewBlock(ManhTru a[], int random)
{
	Sleep(5);
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