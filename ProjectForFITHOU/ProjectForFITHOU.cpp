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
void main()
{
	cout << "Hello My Bae!\n";
	//Question1();
	//Question2();
	//Question3();
}