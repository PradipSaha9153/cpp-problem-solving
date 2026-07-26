// 4 1 5 2 3
// 1 4 5 2 3
// 1 2 5 4 3
// 1 2 3 4 5
// 1 2 3 4 5

#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        int smallestIdx = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[smallestIdx])
                smallestIdx = j;
        }

        swap(arr[i], arr[smallestIdx]);
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

    selectionSort(arr, n);

    cout << endl;
    cout << "After sorting: " << endl;
    display(arr, n);

    return 0;
}