#include <cstdlib>
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;


void nhap() {
	int a, b;
	cout << "Nhap a";
	cout << "Nhap b";
	cin >> a;
	cin >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
}
void RandomTong()
{
	srand((int)time(0));
	int a = rand() % 101;
	int b = rand() % 101;
	cout << a << endl;
	cout << b << endl;
	cout << "Tong la: " << a + b << endl;
}

void randomhieu()
{
	int newnum1, newnum2, Hieu;
	newnum1 = rand() % 100 + 1;
	newnum2 = rand() % 100 + 1;
	Hieu = newnum1 - newnum2;
	cout << "So ngau nhien thu nhat la: " << newnum1 << endl;
	cout << "So ngau nhien thu 2 la: " << newnum2 << endl;
	cout << "Hieu 2 so la: " << Hieu << endl;
	
	system("pause");


}
int main() {
	RandomTong();
	randomhieu();
	system("pause");
	return 0;
}
