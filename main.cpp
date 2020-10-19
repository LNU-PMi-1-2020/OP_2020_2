#include <iostream>
#include <math.h>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int a, b, c;
	cout << "Введіть коефіцієнти a,b,c" << endl;
	cin >> a >> b >> c;
	cout << "Ваше рівняння:" << a << "x`2" << "+" << b << "x" << "+" << c << "=" << "0" << endl;
	int d = b * b - 4 * a * c;
	if (d >= 0)
	{
		cout << "Дискримінант=" << d << endl;


	}
	else
	{
		cout << "Дискримінант менший нуля" << endl;
	}

	float sqrt_d = sqrt(d);
	float x1, x2;
	x1 = ((-1) * b + sqrt_d) / 2 * a;
	x2 = ((-1) * b - sqrt_d) / 2 * a;
	cout << "x1=" << x1 << endl;
	cout << "x2=" << x2 << endl;
	return(0);

}
