/*
Input1: An integer value N representing the given year.

Output: Return an integer value representing the next nearest leap year for a given year.
*/

#include<iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    do {
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            cout << "Leap year: " << year << endl;
            return 0;
        }
        year++;
    } while(true);
}