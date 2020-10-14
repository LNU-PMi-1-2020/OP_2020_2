#include <iostream>
#include <math.h>

using namespace std;

int main() {
	cout << "y=ax^2+bx+c" << endl;
	float a, b, c, x1, x2, d;
	int y = 0;

	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	cout <<"Enter c"<< endl;
	cin >> c;
	d = ((b*b) - 4 * a * c);

	if ( d>0){
		x1 = ((-b) + sqrt(d)) / 2 * a;
		x2 = ((-b) - sqrt(d)) / 2 * a;
		cout << "x1 = " << x1 << ": x2 = " << x2 << endl;
	}
	else if (d == 0) {
		x1 = (-b) / 2 * a;
		cout << "x1" << x1 << endl;
	}
	else if (d < 0) {
		cout << "x1 and x2 do not exist." << endl;
	}


	return 0;
}
git add --all