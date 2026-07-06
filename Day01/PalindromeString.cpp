// Palindrome String

#include<iostream>
using namespace std;

int palindromeString(string str) {
    int left = 0;
    int right = str.length() - 1;

    while(left < right) {
        if(str[left] != str[right]) 
            return false;
        left++;
        right--;
    }

    return true;
}

int main() {
    string str;

    cout << "Enter a string to check palindrome: ";
    cin >> str;

    if(palindromeString(str))
        cout << str << " is a palindrome string";
    else
        cout << str << " is not a palindrome string";

    return 0;
}