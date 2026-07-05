// Program For Fibonacci Numbers

#include<iostream>
using namespace std;

void fibonacci(int n) {
    if(n == 0) {
        cout << "Fibonacci series of " << n << " is: 0";
        return;
    }
    
    int a = 0, b = 1;

    cout << "Fibonacci series of " << n << " is: " << endl;
    cout << a << " " << b << " ";
    for(int i = 2; i <= n; i++) {
        cout << a + b << " ";
        int t = a;
        a = b;
        b = t + b;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    fibonacci(n);

    return 0;
}