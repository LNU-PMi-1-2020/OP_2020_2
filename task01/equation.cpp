
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	float a, b, c, x1, x2, x;
	cout << "Введiть коефiцiєнти квадратного рiвняння" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	if ((a == 0) && (b != 0))
	{
		x = ((-c )/ b);
		cout << "x = " << x;
	}
	else if ((a == 0) && (b == 0))
	{
		cout << "Рiвняння не має розв'язкiв ";
	}
	else if (a != 0)
	{
		float d;
		d = (pow(b, 2) - 4 * a * c);
		if (d > 0)
		{
			x1 =((-b - sqrt(d)) / (2 * a));
			x2 = ((-b + sqrt(d)) / (2 * a));
			cout << "x1 = " << x1<< endl;
	        cout << "x2 = " << x2<< endl;
		}
		else if (d == 0)
		{
			x = ((-b) / (2 * a));
			cout << "x = " << x;
		}
		else
		{
			cout << "Рiвняння не має розв'язкiв ";
		}
	}
	



}


