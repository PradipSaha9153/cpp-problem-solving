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