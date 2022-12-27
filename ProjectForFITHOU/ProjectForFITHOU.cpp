#include <iostream>

using namespace std;
//QUestion 1:
void Question1()
{
	long double x;
	cout << "QUESTION 1";
	cout << "Nhap so chinh phuong can kiem tra : ";
	cin >> x;
	if (x >= 0) {
		long long sr = sqrt(x);
		if (sr * sr == x)
		{
			cout << x << " la so chinh phuong";
		}
		else
		{
			cout << x << " ko la so chinh phuong";
		}
	}
	else
	{
		cout << " So chinh phuong >= 0 !!! \n";
	}
}
//Question 2:
void Question2()
{
	string ten;
	int soLuong;
	float donGia;
	cout << "Nhap ten : ";cin >> ten;
	cout << "Nhap so luong :";cin >> soLuong;
	cout << "Nhap don gia :";cin >> donGia;
	//display in window
	cout << "Hien thi : \n";
	cout << "Ten === So Luong === Don Gia \n";
	cout << ten << "\t" << soLuong << "\t" << donGia << "\t" << "\n";
}
//Question 3:
void Question3()
{
	int chuSoX, Tong, soA, soB, soC, soD, count = 0;
	cout << "Nhap 4 chu so :\n";
	cin >> soA >> soB >> soC >> soD;
	Tong = soA + soB + soC + soD;
	while (Tong != 0) {
		Tong = Tong / 10;
		count++;
	}
	if (count == 1)
	{
		cout << "Chu so hang don vi : " << Tong;
	}
	else
	{
		chuSoX = (soA + soB + soC + soD) % 10;
		cout << "Chu so hang don vi : " << chuSoX << "\n";
	}
	//cout << soA << soB << soC << soD;
}
void Question4()
{
	int count = 0, n, numDigit, tmp, sum = 0, last, soN;
	cout << "Nhap so N: ";
	cin >> n;
	soN = n;
	while (n > 0)
	{
		n /= 10;
		++count;
	}
	numDigit = count;

	tmp = soN;
	while (tmp > 0)
	{
		last = tmp % 10;
		tmp /= 10;
		sum += pow(last, numDigit);
	}
	if (sum == soN)
	{
		cout << "So " << sum << " la so amstrong !!! \n";
	}
	else
	{
		cout << "So " << sum << " khong la so amstrong !!! \n";
	}
}
void Question5()
{
	string Chuoi;
	cout << "Nhap chuoi :";
	cin >> Chuoi;
	for (int i = 0; i < Chuoi.length(); i++)
	{
		cout << "SO khoang trang trong xau ki tu :" << Chuoi.length() - 1;
	}
}
void Question6()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int i = 0;
	while (i * i <= n) {
		if (i * i == n) {
			cout << n << " la so chinh phuong!\n";
		}
		++i;
	}
	cout << n << " khong phai so chinh phuong!\n";
}
void Question7()
{
	int n;
	float mangN[50];
	do
	{
		cout << "Nhap so phan tu: ";
		cin >> n;
		if (n <= 0 || n > 50)
		{
			cout << "So phan tu khong hop le";
		}
	} while (n <= 0 || n > 50);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri :";
		cin >> mangN[i];
	}
	cout << "====== \n";
	for (int i = 0; i < n; i++)
	{
		cout << mangN[i] << "\n";
	}
	cout << "====== \n";
	float tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += mangN[i];
	}
	cout << "Tong :" << tong << "\n";
	//dem so phan tu am
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (mangN[i] < 0)
		{
			count++;
		}
	}
	cout << "Cac so am : " << count << "\n";
	//gia tri nho nhat
	float min = mangN[0];
	for (int i = 0; i < n; i++)
	{
		if (min > mangN[i])
		{
			min = mangN[i];
		}
	}
	cout << "So nho nhat : " << min << "\n";
	float soX;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (mangN[i] < mangN[i + 1])
			{
				soX = mangN[i + 1];
				mangN[i + 1] = mangN[i];
				mangN[i] = soX;
			}
		}
	}
	cout << "====== \n";
	for (int i = 0; i < n; i++)
	{
		cout << mangN[i] << "\n";
	}
	cout << "====== \n";
}
void Question8()
{
	int n, m;
	float maTran[50][50];
	cout << "Nhap N:";cin >> n;
	cout << "Nhap M:";cin >> m;
	cout << "Nhap mang hai chieu: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "maTran[" << i << "]" << "[" << j << "] =";
			cin >> maTran[i][j];
			cout << "\n";
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << maTran[i][j] << " ";
			if (j == m - 1)
			{
				cout << "\n";
			}
		}
	}
	//xoa cot hang vi tri h
	int h;
	cout << "Nhap hang h: ";cin >> h;
	cout << "\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (h == i && i < n - 1)
			{
				maTran[i][j] = maTran[i + 1][j];
			}
		}
		if (n - 1 - h > 1)
		{
			h++;
		}
	}
	n = n - 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << maTran[i][j] << " ";
			if (j == m - 1)
			{
				cout << "\n";
			}
		}
	}
	//trung binh cong trong cot j
	int c, tong = 0, count = 0;
	float tbc;
	cout << "Nhap cot C:";cin >> c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (c == j)
			{
				tong += maTran[i][j];
				count++;
			}
		}
	}
	tbc = tong / count;
	cout << "Trung binh cong:" << tbc << "\n";
	//gia tri trung binh cong lon nhat
	int c, tong = 0, count = 0;
	float tbc, tbcMax = 0, cotTbcMax;
	int j;
	for (int a = 0; a < m; a++)
	{
		for (int i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (m == j)
				{
					tong += maTran[i][j];
					count++;
				}
			}
			tbc = tong / count;
			if (tbcMax < tbc)
			{
				tbcMax = tbc;
				cotTbcMax = m;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (cotTbcMax == j)
			{
				cout << maTran[i][j] << " ";
			}
		}
	}
}
void main()
{
	cout << "Hello My Bae!\n";
	//Question1();
	//Question2();
	//Question3();
	//Question4();
	//Question5();
	//Question6();
	//Question7();
	//Question8();
}