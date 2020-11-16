#include <iostream>;
#include <cmath>;
using namespace std;

int main() {
	int a, b, c;
	double x1, x2;

	cout << "a(x^2)+bx+c=0" << endl;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;



	int D;
	D = (b * b) - 4 * a * c;
	cout << "D= " << D << endl;

	if (D > 0) {
		x1 = ((-b) + (sqrt(D))) / (2 * a);
		cout << "x1=" << x1 << endl;

		x2 = ((-b) - (sqrt(D))) / (2 * a);
		cout << "x2=" << x2 << endl;
	}

	else if (D == 0) {
		x1 = (-b) / (2 * a);
		cout << "x1=" << x1 << endl;
	}

	else {
		cout << "The function does not exist" << endl;
	}


	system("pause");
	return 0;
}