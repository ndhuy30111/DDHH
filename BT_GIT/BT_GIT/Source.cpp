#include <iostream>
using namespace std;

void nhap() {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
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
	CV_DT();
	return 0;
}