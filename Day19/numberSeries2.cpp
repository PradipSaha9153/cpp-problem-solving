/*
Sample Input 1
6


Sample Output 1
6 11 21 36 56 81


Explanation 1
For example, if n = 6, the sequence is calculated as follows:

1st term: 6
2nd term: 6 + (5 × 1) = 11
3rd term: 11 + (5 × 2) = 21
4th term: 21 + (5 × 3) = 36
5th term: 36 + (5 × 4) = 56
6th term: 56 + (5 × 5) = 81
Thus, the final output for n = 6 is:

6 11 21 36 56 81.
*/
#include<iostream>
using namespace std;

int main() {     
    int n;
    cout << "Enter a number: ";      
    cin >> n;
    
    int val = 6;     
    for(int i = 1; i <= n; i++) {       
        cout << val << " ";       
        val = (val + (5 * i));
    } 

    cout << endl;

    return 0;
}