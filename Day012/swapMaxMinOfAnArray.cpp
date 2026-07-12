// Swap the max & min number of an array

#include<iostream>
using namespace std;

void swapMaxMin(int arr[], int s) {
    int min_index = 0, max_index = 0;
    int smallest = arr[0], largest = arr[0];

    for(int i = 1; i < s; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
            min_index = i;
        }

        if(arr[i] > largest) {
            largest = arr[i];
            max_index = i;
        }
    }
    
    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;
}

int main() {
    int arr[] = {9, 4, 2, 7, 8, 1, 2, 5};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Before swap: \n";
    for(int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << endl << endl;

    swapMaxMin(arr, s);

    cout << "After swap: \n";
    for(int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}