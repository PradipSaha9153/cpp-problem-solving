// Write a program to input three numbers and print the largest.
#include<iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three digits: ";
    cin >> a>> b>> c;

    // if(a > b)
    //     if(a > c)
    //         cout << a;
    //     else
    //         cout << c;
    // else if(b > c)
    //     cout << b;
    // else
    //     cout << c;

    cout << (a > b ? (a > c ? a : c) : (b > c ? b : c));

    return 0;
}
