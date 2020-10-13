#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	cout << "Enter a, b, c\n";
	float a, b, c, D, sD;
	cin >> a>> b>> c;
	if (a != 0) {
		cout << a << "x^2+" << b << "x+" << c << "=0\n";
		D = b * b - 4 * a * c;
		sD = sqrt(D);
		if (D > 0) {
			float x1, x2;
			x1 = (-b - sD) / (2 * a);
			x2 = (-b + sD) / (2 * a);
			cout << "x1=" << x1 << "\nx2=" << x2;
		}
		else {
			if (D == 0) {
				float x;
				x = -b / (2 * a);
				cout << "x=" << x;
			}
			else {
				cout << "X do not exist\n";
			}
		}
	}
	else {
		cout << b << "x+" << c << "=0 - is not a quadratic equation\n";
	}
}