#include <iostream>
using namespace std;

int main()
{
    double a, b, c, x, x1, x2;

    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 0)
        cout << " not a quadratic equation";
    else
    {
        double d = b * b - 4 * a * c;
        if (d < 0)
            cout << "no solution";
        else if (d == 0)
        {
            x = (-b) / (2 * a);
            cout << x;
        }
        else
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << x1 << " " << x2;
        }

    }
  
}

