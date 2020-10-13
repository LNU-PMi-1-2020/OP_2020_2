#include <iostream>
#include "cmath"

using namespace std;

int main() {
    cout << "ax^2 + bx + c = 0" << endl;
    cout << "Enter a, b, c" << endl;
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (c == 0) {
            if (b == 0) {
                cout << "X can be anything" << endl;
            }else {
                cout << "No solutions" << endl;
            }
        }else {
            double x;
            x = -c / b;
            cout << "Solution: " << x << endl;
        }
    }else {
        double d = b*b - 4 * a * c;
        if (d < 0) {
            cout << "No solutions" << endl;
        }else if (d == 0) {
            double x = -b / (2 * a);
            cout << "Solution: " << x << endl;
        }else {
            double x1, x2;
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "Solutions: " << x1 << " " << x2 << endl;
        }
    }
}
