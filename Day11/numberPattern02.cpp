/*
1
21
321
4321
*/

#include<iostream>
using namespace std;

// int main() {
//     for(int i = 1; i < 5; i++) {
//         int n = i;
//         for(int j = 1; j <= i; j++) {
//             cout << n;
//             n--;
//         }
//         cout << endl;
//     }
// }

int main() {
    for(int i = 1; i < 5; i++) {
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}