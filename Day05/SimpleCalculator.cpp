// Simple Calculator

#include<iostream>
using namespace std;

int main() {
    int a, b;
    char sign;

    cout << "A (+, -, x, /) B: " << endl;
    cin >> a >> sign >> b;

    switch(sign) {
        case '+': cout << a + b;
                  break;
        case '-': cout << a - b;
                  break;
        case 'x':
        case 'X':
        case '*': cout << a * b;
                  break;
        case '/': cout << a / b;
                  break;
        default: cout << "Wrong choice!!";
    }

    return 0;
}