#include<iostream>
#include <cstdlib>
#include <locale>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	double a, b, c, d;
	cout << "����i�� ����y a: ";
	cin >> a;
	cout << "����i�� ����y b: ";
	cin >> b;
	cout << "����i�� ����y c: ";
	cin >> c;
	d = b * b - 4 * a * c;
	if (a == 0)
	{
		cout << "�i������ �� � ����������" << endl;
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
			cout << "�����i� �i������ �� ic��" << endl;
		}
	}
	system("pause");
	return 0;
}