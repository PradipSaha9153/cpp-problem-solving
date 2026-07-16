/*
This program finds and prints all "special numbers" within a given range [m, n]. A number is considered special if the sum of its digits plus the product of its digits equals the original number itself (e.g., for 19: 1+9 + 1×9 = 19). The program takes two integers (m and n) as input and outputs each qualifying number on a separate line.
*/

#include<iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter two number for range: ";
    cin >> n >> m;

    cout << "Special between " << n << " and " << m << endl;
    if(n <= m) {
        for(int i = n; i <= m; i++) {
            int sum = 0;
            int product = 1;
            int c = i;

            while(c > 0) {
                int rem = c % 10;
                sum += rem;
                product *= rem;
                c /= 10;
            }
            
            int f = sum + product;
            if(i == f)
                cout << i << endl;
        }
    } else {
        cout << "Invalid Input!!" << endl;
    }

    return 0;
}