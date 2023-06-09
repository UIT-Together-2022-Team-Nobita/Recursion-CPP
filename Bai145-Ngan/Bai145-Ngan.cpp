#include <iostream>
#include <iomanip>

using namespace std;

int ktToanChan(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int ktToanChan(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
	{
		if (a[n - 1] % 2 == 0)
			return 1;
		return 0;
	}
	if (a[n - 1] % 2 == 0 && ktToanChan(a, n - 1) == 1)
		return 1;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	int kq = ktToanChan(b, k);
	if (kq == 0)
		cout << "Mang khong toan chan ";
	else
		cout << "Mang toan chan";
	return 1;
}