// Check the number is prime or not

#include<iostream>
#include<cmath>
using namespace std;

void prime(int n) {
    if(n < 2) {
        cout << n << " is neither prime nor composite" << endl;
        return;
    }

    for(int i = 2; i < sqrt(n); i++)
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