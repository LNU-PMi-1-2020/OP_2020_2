#ifndef LNU_DATETIME_H
#define LNU_DATETIME_H

#include <iostream>

using namespace std;

// toString

class DateTime {
private:
    int second;
    int minute;
    int hour;
    int day;
    int month;
    int year;
public:
    DateTime();

    DateTime(int day, int month, int year);

    DateTime(int second, int minute, int hour, int day, int month, int year);

    DateTime(const DateTime &dt);

    int getSecond() const;

    void setSecond(int second);

    int getMinute() const;

    void setMinute(int minute);

    int getHour() const;

    void setHour(int hour);

    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);

    friend ostream &operator<<(ostream &os, const DateTime &time);

    friend istream &operator>>(istream &in, DateTime &time);

    bool operator<(const DateTime &dt) const;

    bool operator>(const DateTime &dt) const;

    bool operator<=(const DateTime &dt) const;

    bool operator>=(const DateTime &dt) const;

    long int toTimestamp() const;

    string toString() const;
};


#endif //LNU_DATETIME_H
