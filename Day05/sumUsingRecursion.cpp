// Program For Sum of Natural Numbers Using Recursion

#include<iostream>
using namespace std;

int sumOfNaturalNumber(int n) {
    if(n == 0)
        return 0;
    
    return n + sumOfNaturalNumber(n - 1);
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Sum of natural number is: " << sumOfNaturalNumber(n);

    return 0;
}