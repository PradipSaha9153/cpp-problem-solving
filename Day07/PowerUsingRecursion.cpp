// Program To Calculate the Power of a Number

#include<iostream>
using namespace std;

int poweOfANumber(int b, int p) {
    if(p == 0)
        return 1;
    if(p == 1)
        return b;

    return b * poweOfANumber(b, p - 1);
}

int main() {
    int base;
    int power;
    
    cout << "Enter the number: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;

    cout << base << "^" << power << " = " << poweOfANumber(base, power) << endl;

    return 0;
}