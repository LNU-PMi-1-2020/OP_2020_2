#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    float a, b, c, x1, x2, d;
    cout << "Введiть числа для утворення квадратного рiвняння " << endl;
    cin >> a >> b >> c;
    d = ((b * b) - (4 * a * c));
    if (d > 0) {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "Рiвняння має два кореня ,а саме " << x1 << " " << x2;
    }
    else if (d == 0) {
        x1 = (-b) / (2 * a);
        cout << "Рiвняння має один корiнь ,а саме " << x1;

    }
    else if (d < 0) {
        cout << "Рiвняння не має коренiв";
    };
}
