// Factorial Of A Number

#include<iostream>
using namespace std;

int fact(int num) {
    if(num == 0 || num == 1)
        return 1;
    return num * fact(num - 1);
}

int main() {
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of this number is: " << fact(num);

    return 0;
}