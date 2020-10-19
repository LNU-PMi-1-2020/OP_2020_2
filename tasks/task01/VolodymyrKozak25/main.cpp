#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, D, x;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    D = b*b - 4*a*c;
    if (D == 0) {
        float x1;
        x1 = (-b + D) / (2*a);
        cout << "The solution is: " << x1;
    }
    else if (D > 0) {
        float x1, x2;
        x1 = (-b + pow(D, 1/2.0)) / (2.0*a);
        x2 = (-b - pow(D, 1/2.0)) / (2.0*a);
        cout << "The solution is: " << x1 << " and " << x2;
    }
    else {
        cout << "There's no solution";
    }
    return 0;
}
