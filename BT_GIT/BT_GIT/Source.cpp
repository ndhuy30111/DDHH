#include <cstdlib>
#include <iostream>
using namespace std;
//void nhap() {
//	int a, b;
//	cout << a + b << endl;
//	cout << a - b << endl;
//	cout << a * b << endl;
//cout << a / b << endl;}
int main()
{
	int newnum1, newnum2, Hieu;
	newnum1 = rand() % 100 + 1;
	newnum2 = rand() % 100 + 1;
	Hieu = newnum1 - newnum2;
	cout << "So ngau nhien thu nhat la: " << newnum1 << endl;
	cout << "So ngau nhien thu 2 la: " << newnum2 << endl;
	cout << "Hieu 2 so la: " << Hieu << endl;
	return Hieu;
	system("pause");

}