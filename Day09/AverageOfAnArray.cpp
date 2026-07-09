// Program For Average of an Array (Iterative)

#include<iostream>
using namespace std;

float average(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];

    return (sum / (float)size);
}

int main() {
    int n = 0;

    cout << "Enter array size: ";
    cin >> n;
    int arr[n];

    cout << "Enter array element: " << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Average of all elements is: " << average(arr, n) << endl;

    return 0;
}