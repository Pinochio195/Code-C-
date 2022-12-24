#include <iostream>

using namespace std;
//QUestion 1:
void Question1()
{
	long double x;
	cout << "QUESTION 1";
	cout << "Nhap so chinh phuong can kiem tra : \n";
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
		cout << " So chinh phuong >= 0 !!!";
	}
}
void main()
{
	cout << "Hello World!\n";
	Question1();
}