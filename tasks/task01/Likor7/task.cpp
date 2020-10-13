#include<iostream>
#include <cstdlib>
#include <locale>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	double a, b, c, d;
	cout << "Уведiть зміннy a: ";
	cin >> a;
	cout << "Уведiть зміннy b: ";
	cin >> b;
	cout << "Уведiть зміннy c: ";
	cin >> c;
	d = b * b - 4 * a * c;
	if (a == 0)
	{
		cout << "Рiвняння не є квадратним" << endl;
	}
	else
	{
		if (d > 0)
		{
			cout << "x1 = " << ((-b) - sqrt(d)) / 2 * a << endl;
			cout << "x2 = " << ((-b) + sqrt(d)) / 2 * a << endl;
		}
		else if (d == 0)
		{
			cout << "x = " << (-b) / 2 * a << endl;
		}
		else
		{
			cout << "Коренiв рiвняння не icнує" << endl;
		}
	}
	system("pause");
	return 0;
}