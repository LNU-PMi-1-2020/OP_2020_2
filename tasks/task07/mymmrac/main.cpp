#include <iostream>
#include "DateTime.h"

int main() {
    DateTime dt(24, 30, 4, 11, 6, 2016);
    cout << dt << endl;
    cout << dt.toString() << endl;
    cout << dt.toTimestamp() << endl;

    DateTime dt_(dt);
    dt_.setYear(2015);
    dt_.setMinute(48);
    cout << dt_ << endl;
    cout << boolalpha << (dt_ > dt) << endl;
}