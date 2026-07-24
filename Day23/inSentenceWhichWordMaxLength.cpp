/*
Sample Input 1
Knowledge is the greatest gift

Sample Output 
9

Explanation
Words and their number of alphabetic characters:
Knowledge: 9
is: 2
the: 3
greatest: 8
gift: 4

The longest word is "Knowledge" with 9 characters.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    int max = 0;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            count++;
        }
        else if (ch == ' ') {
            if (count > max) {
                max = count;
            }
            count = 0;
        }
    }

    if (count > max) {
        max = count;
    }

    cout << max << endl;

    return 0;
}