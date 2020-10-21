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


void CV_DT() {
	int a, b;
	cout << "-----------Tinh CV DT HCN----------\n";
	cout << "nhap vao 2 canh a, b: ";
	cin >> a >> b;
	cout << "Dien tich hcn : " << a * b <<endl;
	cout << "Chu vi hcn : " << (a + b) * 2;

	cout << "\n-----------Tinh CV DT HV----------\n";
	cout << "nhap vao 2 canh a = ";
	cin >> a;
	cout << "Dien tich hinh vuong : " << a * a << endl;
	cout << "Chu vi hinh vuong : " << a * 4;

	cout << "\n-----------Tinh CV DT HT----------\n";
	float r;
	cout << "nhap vao ban kinh r = ";
	cin >> r;
	cout << "Dien tich hinh tron la : " << r * r*3.14 << endl;
	cout << "Chu vi hinh tron la : " << r * 2 * 3.14;

}
int main() {
	RandomTong();
	randomhieu();
	CV_DT();
	system("pause");
	return 0;

}