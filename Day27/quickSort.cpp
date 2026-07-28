#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int st, int end) {
    int idx = st - 1; // It decide pivot position
    int pivot = arr[end];
    for(int j = st; j < end; j++) {
        if(arr[j] <= pivot) {
            idx++;
            swap(arr[idx], arr[j]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);

    return idx;
}

void quickSort(vector<int> &arr, int st, int end) {
    if(st < end) {
        int pivIdx = partition(arr, st, end);
        
        quickSort(arr, st, pivIdx - 1); // Left half
        quickSort(arr, pivIdx + 1, end); // Right half
    }
}

void display(vector<int> arr) {
    for(int val: arr) {
        cout << val << " ";
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

    cout << endl;
    cout << "Before sorting: " << endl;
    display(arr);

    quickSort(arr, 0, n - 1);

    cout << endl;
    cout << "After sorting: " << endl;
    display(arr);

    return 0;
}