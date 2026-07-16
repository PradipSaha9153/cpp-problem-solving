#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 2) {
        cout << -1;
        return 0;
    }

    int largestPrime = 0;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            bool isPrime = true;

            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
                largestPrime = i;
        }
    }

    cout << largestPrime << endl;

    return 0;
}