/*
Sample Input 1
Input1: AlohoMora
Input2: 584

Sample Output 1
AlohoM

Explanation
Here, the given string is “AlohoMora”. The ASCII sum of the characters is 65 + 108 + 111 + 104 + 111 + 77 + 111 + 114 + 97 = 898. Now we will remove the characters in the following manner.
We will first remove the character ‘a’ and the sum will become 898 -97 = 801.
Next we will remove the character ‘r’ and the sum will become 801 – 114 = 687.
Then we will remove the character ‘o’ and the sum will become 687 – 111 = 576, which is less than 584.
Therefore, AlohoM is returned as the output.
*/

#include<iostream>
using namespace std;

string encodeMessage(string s, int n) {
    int sum = 0;

    for(int i = 0; i < s.length(); i++) {
        sum += s[i];
    }

    int end = s.length();

    while(sum > n && end > 0) {
        end--;
        sum -= s[end];
    }

    return s.substr(0, end);
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int n;
    cout << "Enter the code: ";
    cin >> n;

    cout << encodeMessage(s, n) << endl;

    return 0;
}