#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x;
    cout << "Enter value a: ";
    cin >> a;
    cout << "Enter value b: ";
    cin >> b;
    cout << "Enter value c: ";
    cin >> c;

    if ((b * b - 4 * a * c) > 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x1= " << x << endl;
        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x2= " << x << endl;
    }

    else if ((b * b - 4 * a * c) == 0)
    {
        x = (-1 * b / (2 * a));
        cout << "x= " << x << endl;
    }

    else
    {
        cout << "D<0" << endl;
    }
    system("pause");
    return 0;
}
