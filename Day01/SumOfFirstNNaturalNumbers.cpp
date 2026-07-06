// Sum of First N Natural Numbers

#include<iostream>
using namespace std;

int sumOfANumber(int n) {
    int result = 0;
    for(int i = 1; i <= n; i++)
        result += i;
    return result;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of first N Natural numbers is: " << sumOfANumber(num);

    return 0;
}