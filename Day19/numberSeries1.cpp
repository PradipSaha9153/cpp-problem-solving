/*
Sample Input 1
6

Sample Output 1
6 3 10 5 16 8 4 2 1


Explanation
Starting with N=6N = 6N=6:
6 is even, so 6/2=3
3 is odd, so 3×3+1=10
10 is even, so 10/2=5
5 is odd, so 5×3+1=16
16 is even, so 16/2=8
8 is even, so 8/2=4
4 is even, so 4/2=2
2 is even, so 2/2=1
The sequence continues until the number reaches 1.
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int val = n;     
    while(true) {
        cout << val << " ";        
        if(val == 1)         
            break;              
        
        if(val % 2 == 0)         
            val = val / 2;       
        else         
            val = val * 3 + 1;     
    }   

    cout << endl;

    return 0;
}