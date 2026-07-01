// Leap Year Check

#include<iostream>
using namespace std;

int LeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int year;

    cout << "Enter the number: ";
    cin >> year;

    if(LeapYear(year))
        cout << "This year is leap year";
    else 
        cout << "This year is non leap year";

    return 0;
}