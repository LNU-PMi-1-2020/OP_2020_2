#include <iostream>
using namespace std;
#include <math.h>
int main () {
    int a,b,c;
    double d;
    cin >> a >> b >> c;
    d=(b*b)-(4*a*c);
    if (d>0){
        int x1,x2;
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout << "Два корені: " << ((x1>x2)? x2: x1) << " " << ((x1>x2)? x1: x2);
    }
    else
    if (d==0){
        cout << "Один корінь:" << " " << -b/(2*a) << endl;
    }
    else
        cout << "Немає коренів" << endl;
    return 0;
}