/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/

#include<iostream>
using namespace std;

int main() {
    int n = 5;

    // Top
    for(int i = 0; i < n; i++) {
        // Top-1
        for(int j = 0; j <= i; j++)
            cout << "*";

        // Top-2
        for(int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";

        // Top-3
        for(int j = 0; j <= i; j++)
            cout << "*";
        
        cout << endl;
    }

    // Bottom
    for(int i = 0; i < n; i++) {
        // Bottom-1
        for(int j = n; j > i; j--)
            cout << "*";

        // Bottom-2
        for(int j = 0; j < i * 2; j++)
            cout << " ";

        // Bottom-3
        for(int j = n; j > i; j--)
            cout << "*";

        cout << endl;
    }
}