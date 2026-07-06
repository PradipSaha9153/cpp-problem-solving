// Palindrome number

#include<iostream>
using namespace std;

void palindrome(int num) {
    int rev = 0;
    int copy = num;

    while(num != 0) {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if(copy == rev)
        cout << "It is a palindrome number.";
    else
        cout << "It is not a palindrome number.";
}

int main() {
    int num;

    cout << "Enter a number to check it ";
    cin >> num;

    palindrome(num);

    return 0;
}