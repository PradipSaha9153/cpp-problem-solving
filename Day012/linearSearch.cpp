#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz, int t) {
    for(int i = 0; i < sz; i++) 
        if(arr[i] == t) // Found
            return i;
    
    return -1; // Not Found
}

int main() {
    int arr[] = {4, 2, 6, 8, 7, 9, 10};
    int sz = 7;
    int target = 8;

    cout << linearSearch(arr, sz, target) << endl;

    return 0;
}