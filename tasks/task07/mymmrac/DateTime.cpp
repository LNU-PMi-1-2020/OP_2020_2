#include "DateTime.h"

#include <ostream>

using namespace std;

DateTime::DateTime() : second(0), minute(0), hour(0), day(1), month(1), year(1970) {}

DateTime::DateTime(int day, int month, int year) : second(0), minute(0), hour(0), day(day), month(month), year(year) {}

DateTime::DateTime(int second, int minute, int hour, int day, int month, int year) : second(second), minute(minute),
                                                                                     hour(hour), day(day), month(month),
                                                                                     year(year) {}

DateTime::DateTime(const DateTime &dt) {
    second = dt.second;
    minute = dt.minute;
    hour = dt.hour;
    day = dt.day;
    month = dt.month;
    year = dt.year;
}

int DateTime::getSecond() const {
    return second;
}

void DateTime::setSecond(int second) {
    DateTime::second = second;
}

int DateTime::getMinute() const {
    return minute;
}

void DateTime::setMinute(int minute) {
    DateTime::minute = minute;
}

int DateTime::getHour() const {
    return hour;
}

void DateTime::setHour(int hour) {
    DateTime::hour = hour;
}

int DateTime::getDay() const {
    return day;
}

void DateTime::setDay(int day) {
    DateTime::day = day;
}

int DateTime::getMonth() const {
    return month;
}

void DateTime::setMonth(int month) {
    DateTime::month = month;
}

int DateTime::getYear() const {
    return year;
}

void DateTime::setYear(int year) {
    DateTime::year = year;
}

ostream &operator<<(std::ostream &os, const DateTime &dt) {
    os << "second: " << dt.second << " minute: " << dt.minute << " hour: " << dt.hour << " day: " << dt.day
       << " month: " << dt.month << " year: " << dt.year;
    return os;
}

istream &operator>>(istream &in, DateTime &dt) {
    in >> dt.second >> dt.minute >> dt.hour >> dt.day >> dt.month >> dt.year;
    return in;
}

bool DateTime::operator<(const DateTime &dt) const {
    if (year < dt.year)
        return true;
    if (month < dt.month)
        return true;
    if (day < dt.day)
        return true;
    if (hour < dt.hour)
        return true;
    if (minute < dt.minute)
        return true;
    if (second < dt.second)
        return true;
    return false;
}

bool DateTime::operator>(const DateTime &dt) const {
    return dt < *this;
}

bool DateTime::operator<=(const DateTime &dt) const {
    return !(dt < *this);
}

bool DateTime::operator>=(const DateTime &dt) const {
    return !(*this < dt);
}

long DateTime::toTimestamp() const {
    return second + 60 * (minute + 60 * (hour + 24 * ((day - 1) + 30 * ((month - 1) + 12 * (year - 1970)))));
}

string DateTime::toString() const {
    char str[19]; // len("0000.00.00 00:00:00") = 19;  year.month.day hour:minute:second
    sprintf(str, "%d.%02d.%02d %02d:%02d:%02d", year, month, day, hour, minute, second);
    return str;
}

