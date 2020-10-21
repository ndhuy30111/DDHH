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
int main() {
	RandomTong();
	system("pause");
	return 0;
}