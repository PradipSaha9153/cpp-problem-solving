// Program to Find the Minimum and Maximum Element of an Array

#include<iostream>
using namespace std;

int findMinimum(int arr[]) {
    int min = arr[0];
    
    for(int i = 0; i < 6; i++)
        if(arr[i] < min)
            min = arr[i];

    return min;
}

int findMaximum(int arr[]) {
    int max = arr[0];
    
    for(int i = 0; i < 6; i++)
        if(arr[i] > max)
            max = arr[i];

    return max;
}

int main() {
    int arr[] = {5, 7, 1, 9, 4, 3};

    cout << "Minimum is: " << findMinimum(arr) << endl;
    cout << "Maximum is: " << findMaximum(arr) << endl;


    return 0;
}