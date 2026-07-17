/*
195 + 591 = 786 (Not a palindrome)
786 + 687 = 1473 (Not a palindrome)
1473 + 3741 = 5214 (Not a palindrome)
5214 + 4125 = 9339 (Palindrome)
*/

#include<iostream>
using namespace std;

long reverse(long n) {
    long rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool isPalindrome(long n) {
    return n == reverse(n);
}

int main() {
    long n;
    cout << "Enter a number: ";
    cin >> n;

    while(!isPalindrome(n)) {
        n = n + reverse(n);
    }

    cout << n << endl;

    return 0;
}