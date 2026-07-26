#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr, int n) {
    for(int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

void display(vector<int> arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
} 

int main() {
    int n;
    cout << "Enter how many element: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << endl;
    cout << "After sorting: " << endl;
    display(arr, n);

    return 0;
}