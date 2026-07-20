/*
Method / Logic
To find the count of numbers with no repeated digits within a given range [n1, n2]:

Iterate through every number from n1 to n2 (inclusive).

For each number, convert it to a string so you can examine its individual digits.

Use a Set data structure. A set automatically removes duplicate elements.

Compare the length of the string to the length of the set. If they are equal, it means all digits are unique (no repeated digits).

Increment a counter for every number that satisfies this condition and print the final count.
*/

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

// Function to check if a number has repeated digits
bool hasUniqueDigits(int num) {
    string str_num = to_string(num);
    unordered_set<char> digits;
    
    for (char digit : str_num) {
        // If the digit is already in the set, it's a repeat
        if (digits.find(digit) != digits.end()) {
            return false;
        }
        digits.insert(digit);
    }
    return true;
}

int main() {
    int n1, n2;
    if (cin >> n1 >> n2) {
        int count = 0;
        for (int i = n1; i <= n2; ++i) {
            if (hasUniqueDigits(i)) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}