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