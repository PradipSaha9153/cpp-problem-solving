// Program calculates the maximum product obtained by breaking an integer into at least two positive integers

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(n == 0) {
        cout << 1 << endl;
        return 0;
    }

    if(n == 3) {
        cout << 2 << endl;
        return 0;
    }

    int p = 1;

    while(n > 4) {
        p *= 3;
        n -= 3;
    }

    p *= n;

    cout << p << endl;
}