// Check the number is prime or not

#include<iostream>
using namespace std;

void prime(int n) {
    for(int i = 2; i < n; i++)
        if(n % i == 0) {
            cout << n << " number is not a prime number";
            return;
        }
    cout << n << " number is a prime number";
}

int main() {
    int n;

    cout << "Enter the number to check it is prime or not: ";
    cin >> n;

    prime(n);

    return 0;
}