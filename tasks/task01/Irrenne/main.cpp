#include

<iostream>

#include
<cmath>
using namespace std;

int main() {
    double a, b, c, x1, x2, x;

    cout << "ax^2+bx+c=0" << endl;

    cout << "Введіть а:" << endl;
    cin >> a;
    cout << "Введіть b" << endl;
    cin >> b;
    cout << "Введіть c:" << endl;
    cin >> c;

    if ((b * b - 4 * a * c) > 0) {
        x1 = ((-b) - sqrt(b * b - 4 * a * c)) / (a * 2);
        cout << "x1=" << x1 << endl;

        x2 = ((-b) + sqrt(b * b - 4 * a * c)) / (a * 2);
        cout << "x2=" << x2 << endl;
    }

    if ((b * b - 4 * a * c) == 0) {
        x = -(b / (a * 2));
        cout << "x1=x2=" << x << endl;
    }

    if ((b * b - 4 * a * c) < 0) {
        cout << "Коренів рівняння не існує ;(" << endl;
    }

    return 0;
}
