// Program that convert binary to decimal number

#include<iostream>
using namespace std;

int main() {
    int n, decimal = 0, pow = 1;

    cout << "Enter binary number: ";
    cin >> n;

    while(n > 0) {
        int rem = n % 10;
        n /= 10;
        decimal += (rem * pow);
        pow *= 2;
    }

    cout << "Decimal number is: " << decimal << endl;

    return 0;
}