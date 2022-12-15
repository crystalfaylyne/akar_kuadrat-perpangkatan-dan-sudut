#include <iostream>
#include <math.h>
using namespace std;

int main() {

	float a, b, c, d, e;
	cout << "Masukkan nillai untuk dipangkatkan : "; cin >> a;
	cout << "Masukkan pangkat : "; cin >> b;
	cout << "Masukkan nilai yang akan diakarkan : "; cin >> c;
	cout << "Masukkan sudut : "; cin >> d;

	cout << "\n----------------------------------" << endl;

	cout << a << '^' << b << " = " << pow(a, b) << endl;
	cout << "akar dari " << c << " = " << sqrt(c) << endl;
	cout << "sin " << d << " = " << sin(d * 3.14 / 180) << endl;
	cout << "cos " << d << " = " << cos(d * 3.14 / 180) << endl;
	cout << "tan " << d << " = " << tan(d * 3.14 / 180) << endl;
	return 0;
}