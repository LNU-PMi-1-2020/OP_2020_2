#include <iostream>
using namespace std;
int main() {
    float a, b, c, d, x1, x2;
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;
    cout << "enter c" << endl;
    cin >> c;;
    d = b * b - 4 * a * c;
    if (d == 0) {
        x1 = (-b) / (2 * a);
        cout << "x=" << x1 << endl;
    }
    else if (d < 0) {
        cout << "no solutions" << endl;
    }
    else if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        cout << "x1=" << x1 << endl;
        cout << "x1=" << x2 << endl;
    };
}