/*
For n = 5, the series starts at 2 and increases in the following pattern:

1st term: 2 (Start)
2nd term: 2 + 13 = 15
3rd term: 15 + (2 * 13) = 41
4th term: 41 + (3 * 13) = 80
5th term: 80 + (4 * 13) = 132

Thus, the output is 2 ,15 ,41, 80 ,132.
*/

#include<iostream>
using namespace std;

int main() {   
    int n;

    cout << "Enter a number: ";
    cin >> n;
    
    int val = 2;     
    for(int i = 1; i <= n; i++){       
        cout << val;              
        val = val + i * 13;        
        
        if(n > 0)     
             cout << " ";     
    }
    cout << endl;
    return 0;
}