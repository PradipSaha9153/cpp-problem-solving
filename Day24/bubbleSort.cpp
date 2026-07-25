#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
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

    bubbleSort(arr, n);

    cout << endl;
    cout << "After sorting: " << endl;
    display(arr, n);

    return 0;
}