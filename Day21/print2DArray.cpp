#include<iostream>
using namespace std;

int main (){
    int n, m;
    cout << "Enter two number for size of an array : " << endl;
    cin >> n >> m;
    
    int arr[n][m];
    cout << "\nEnter matrix value: " << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) 
            cin >> arr[i][j];
        
    cout << "\nThe matrix is: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}