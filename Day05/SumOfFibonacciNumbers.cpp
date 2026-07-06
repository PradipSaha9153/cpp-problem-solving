// Sum of Fibonacci Numbers at Even Indexes Upto N Terms

#include<iostream>
using namespace std;

int fibonacci(int n) {
    if(n == 0) return 0;

    int sum = 0;
    int a = 0, b = 1;

    for(int i = 2; i <= n; i++) {
        int t = a;
        a = b;
        b = t + b;

        if(i % 2 == 0)
            sum += b;
    }

    return sum;
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Even indexed Fibonacci Sum upto " << n << " terms: " << fibonacci(n);

    return 0;
}