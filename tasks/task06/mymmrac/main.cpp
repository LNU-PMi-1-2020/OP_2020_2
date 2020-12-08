#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

struct Data {
    int day;
    int month;
    int year;
};

struct User {
    string name;
    string lastName;
    Data birthday{};
};

User strToUsr(const string &row) {
    User u;

    int ix = row.find(';');
    u.name = row.substr(0, ix);

    ix = row.find(';', ix + 1);
    u.lastName = row.substr(u.name.length() + 1, ix - u.name.length() - 1);

    string birthday;
    birthday = row.substr(ix + 1, row.length());

    Data d{};
    d.day = stoi(birthday.substr(0, 2));
    d.month = stoi(birthday.substr(3, 2));
    d.year = stoi(birthday.substr(6, 4));
    u.birthday = d;
    return u;
}

string usrToStr(const User &u) {
    return u.name + ";" + u.lastName + ";" + to_string(u.birthday.day) + "." + to_string(u.birthday.month) + "." +
           to_string(u.birthday.year);
}

int main() {
    ifstream in;
    in.open("in.txt");

    string s;
    getline(in, s);
    int n = stoi(s);

    auto *users = new User[n];
    for (size_t i = 0; i < n; ++i) {
        getline(in, s);
        users[i] = strToUsr(s);
    }

    ofstream out1;
    out1.open("out1.txt");

    ofstream out2;
    out2.open("out2.txt");

    time_t now = time(nullptr);
    tm *t = localtime(&now);

    string set;
    for (size_t i = 0; i < n; i++) {
        bool ok1 = false;
        if (1900 + t->tm_year - users[i].birthday.year >= 18) {
            ok1 = true;
        } else if (1900 + t->tm_year - users[i].birthday.year == 17 && (t->tm_mon + 1) > users[i].birthday.month) {
            ok1 = true;
        } else if (1900 + t->tm_year - users[i].birthday.year == 17 && (t->tm_mon + 1) == users[i].birthday.month &&
                   (t->tm_mday) > users[i].birthday.day) {
            ok1 = true;
        }

        if (ok1) {
            out1 << usrToStr(users[i]) << endl;
        }

        if (set.find(users[i].name) == -1) {
            set += users[i].name + '\n';
        }
    }

    out2 << set;
}