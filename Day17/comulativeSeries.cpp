/*
n = 5
1
1 + 2 = 3
1 + 2 + 3 = 6
1 + 2 + 3 + 4 = 10
1 + 2 + 3 + 4 + 5 = 15
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
        cout << sum;

        if(i != n)
            cout << " ";
    }
    cout << endl;

    return 0;
}