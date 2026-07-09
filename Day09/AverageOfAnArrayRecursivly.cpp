// Program For Average of an Array (Recursive)

#include<iostream>
using namespace std;

int sum(int arr[], int size) {
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];

    return arr[size - 1] + sum(arr, size - 1);
}

float average(int arr[], int size) {
    if(size == 0)
        return 0;

    return sum(arr, size) / (float)(size);
}

int main() {
    int n = 0;

    cout << "Enter array size: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter array element: " << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Average of all elements is: " << average(arr, n) << endl;

    delete[] arr;

    return 0;
}