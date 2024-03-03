#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int year = 2024;
    int month = 3;
    int day = 1;


    stringstream ss;
    ss << year << month << day;
    string date = ss.str();

    int sum = 0;
    for (char d : date) {
        sum += d - '0';
    }

    cout << sum;

    return 0;
}
