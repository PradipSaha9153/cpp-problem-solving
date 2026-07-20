/*
Sample Input 1
10 2 5


Sample Output 1
10 20 40 80 160


Explanation
Given the first term a=, common ratio r=, and number of terms n=5, the series is:
10×2^0=10
10×2^1=20
10×2^2=40
10×2^3=80
10×2^4=160
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, r, n;

    cout << "Enter a first term: ";
    cin >> a;
    cout << "Enter a ratio: ";
    cin >> r;
    cout << "Enter a number of term: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int cal = a * pow(r, i);       
        cout << cal << " ";     
    }   

    cout << endl;

    return 0;
}