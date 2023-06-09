#include<iostream>
#include<iomanip>
using namespace std;
int TongGiaTri(int[], int);
bool ChuSoDau(int);
void Nhap(int[], int&);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = TongGiaTri(a, n);
	cout << "Tong cac gia tri co chu so dau tien chan la :" << kq;
	return 0;
}
bool ChuSoDau(int n)
{
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	ChuSoDau(n / 10);
}
int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (ChuSoDau(a[n - 1]) == 1)
		s = s + a[n - 1];
	return s;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}
