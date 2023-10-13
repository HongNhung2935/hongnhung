#include <iostream>
using namespace std;

int Nhap()
{
	int x;
	do
	{
		cin >> x;
		if (x < 0)
			cout << "Nhap sai, yeu cau nhap lai!";
	} while (x < 0);
	return x;
}

long Tinh(int n)
{
	long s = 0;
	for(int i = 1; i <= n; i++)
		s = s + i * i;
	return s;
}

int main()
{
	int n;

	cout << "Nhap so nguyen n: ";
	n = Nhap();
	cout << "Ket qua la: "<< Tinh(n) << endl;

	return 0;
}
