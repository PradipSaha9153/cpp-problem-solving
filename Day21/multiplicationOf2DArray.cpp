#include<iostream>
using namespace std;

int main (){
    int n, m;
    cout << "Enter two number for size of an array : " << endl;
    cin >> n >> m;
    
    int arr1[n][m];
    int arr2[n][m];
    cout << "\nEnter matrix 1 value: " << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) 
            cin >> arr1[i][j];
        
    cout << "\nEnter matrix 2 value: " << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) 
            cin >> arr2[i][j];

    int sum[n][m];
    cout << "\nThe matrix is: " << endl;
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) 
            sum[i][j] = arr1[i][j] * arr2[j][i];

    cout << "\nResult = " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}