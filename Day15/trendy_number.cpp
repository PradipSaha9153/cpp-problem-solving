/*
1. If the number is not a 3-digit number, it should print "Invalid Number".
2. If the number is a 3-digit number and its middle digit is divisible by 3, it should print "Trendy Number".
3. If the number is a 3-digit number but its middle digit is not divisible by 3, it should print "Not a Trendy Number".
*/

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(100 <= n && n <= 999) {
        int mid = (n / 10) % 10;
        if(mid % 3 == 0)
            cout << "Trendy Number" << endl;
        else
            cout << "Not a Trendy Number" << endl;
    } else {
        cout << "Invalid Number" << endl;
    }

    return 0;
}