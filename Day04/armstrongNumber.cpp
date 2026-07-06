// Check Armstrong Number

#include<iostream>
#include<cmath>
using namespace std;

void armstrongNumber(int n) {
    int copy = n;
    int temp = n;
    int digits = 0;
    int sum = 0;

    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    while(n != 0) {
        int rem = n % 10;
        sum += (int)pow(rem, digits);
        n /= 10;
    }
    if(copy == sum)
        cout << copy << " is armstrong number";
    else
        cout << copy << " is not armstrong number";
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    armstrongNumber(n);

    return 0;
}