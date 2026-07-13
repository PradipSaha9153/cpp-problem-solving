// Reverse an array using 2 pointer approach

#include<iostream>
using namespace std;

void reverseArray(int arr[], int s) {
    int start = 0;
    int end = s - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    reverseArray(arr, size);

    for(int i = 0; i < size; i++)
        cout << arr[i] << endl;

    return 0;
}