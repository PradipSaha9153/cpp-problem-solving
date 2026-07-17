/*
Sample Input 1
956781
3

Sample Output 1
6
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
    string n;
    int k;

    cout << "Enter a number: ";
    cin >> n;
    cout <<"Enter the position: ";
    cin >> k;

    if(k > 0 && k <= n.length())
        cout << n[k - 1] << endl;
    else
        cout << "Invalid Position" << endl;

    return 0;
}