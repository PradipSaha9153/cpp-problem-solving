// Greatest Common Divisor (GCD) of two numbers

#include<iostream>
using namespace std;

int gcd(int n1, int n2) {
    int GCD;

    for(int i = 1; i <= n1 && i <= n2; i++) {
        if(n1 % i == 0 && n2 % i == 0)
            GCD = i;
    }

    return GCD;
}

int main() {
    int n1, n2;

    cout << "Enter the 1st number: ";
    cin >> n1;
    cout << "Enter the 2nd number: ";
    cin >> n2;

    cout << "Greatest Common Divisor (GCD) of two numbers: " << gcd(n1, n2);

    return 0;
}