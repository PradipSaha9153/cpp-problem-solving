// Program that convert decimal to binary number

#include<iostream>
using namespace std;

int main() {
    int n, binary = 0, pow = 1;
    cout << "Enter decimal number: ";
    cin >> n;

    while(n > 0) {
        int rem = n % 2;
        n /= 2;
        binary += (rem * pow);
        pow *= 10;
    }

    cout << "Binary number is: " << binary << endl;

    return 0;
}