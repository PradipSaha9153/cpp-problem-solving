// Check the given number is Neon number or not

#include<iostream>
using namespace std;

void neonNumber(int n) {
    int sq = n * n;
    int sum = 0;

    while(sq != 0) {
        sum += sq % 10;
        sq /= 10;
    }

    if(sum == n)
        cout << n << " number is a neon number";
    else
        cout << n << " number is not a neon number";
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    neonNumber(n);

    return 0;
}