#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h> 
// Задача ax^2+bx+c=0
using namespace std;



int main()
{
	{
		cout << "ax^2+bx+c=0" << endl;
	}
	int a, b, c;
	double d;

	cout << "Enter a" << endl;
	cin >> a;

	cout << "Enter b" << endl;
	cin >> b;

	cout << "Enter c" << endl;
	cin >> c;

	d = ((b*b) - (4 * a*c));
	if (d > 0)
	{
		int x1, x2;
		x1 = ((-b + sqrt(d)) / (2 * a));
		x2 = ((-b - sqrt(d)) / (2 * a));
		cout << "Two solutions" << endl << x1 << " " << x2 << endl;
	}
	else
		if (d == 0) {
			cout << "One solutions:" << endl << -b / (2 * a) << endl;
		}
		else

			cout << "No solutions" << endl;

	for (int i = 0; i < 5; i++) {
		{
			cout << "ax^2+bx+c=0" << endl;
		}
		int a, b, c;
		double d;

		cout << "Enter a" << endl;
		cin >> a;

		cout << "Enter b" << endl;
		cin >> b;

		cout << "Enter c" << endl;
		cin >> c;

		d = ((b*b) - (4 * a*c));
		if (d > 0)
		{
			int x1, x2;
			x1 = ((-b + sqrt(d)) / (2 * a));
			x2 = ((-b - sqrt(d)) / (2 * a));
			cout << "Two solutions" << endl << x1 << " " << x2 << endl;
		}
		else
			if (d == 0) {
				cout << "One solutions:" << endl << -b / (2 * a) << endl;
			}
			else

				cout << "No solutions" << endl;

	}

	system("pause");
}