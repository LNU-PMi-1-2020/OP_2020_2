#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);

	int a, b, c, discr;
	cout << "Введіть коефіцієнт 'a' : " << endl;
	cin >> a;
	cout << "Введіть коефіцієнт 'b' : " << endl;
	cin >> b;
	cout << "Введіть вільний член 'c' : " << endl;
	cin >> c;

	discr = b * b - 4 * a * c;

	if (discr < 0) {
		cout << "Коренів не існує!" << endl;
	}
	else if (discr == 0) {
		cout << "Існує один корінь:" << (-b + sqrt(discr))/(2*a) << endl;
	}
	else {
		cout << "Існує два корені: \n Перший:" << (-b + sqrt(discr)) / (2 * a) << endl << "Другий: \n" << (-b - sqrt(discr)) / (2 * a);
	}
}
