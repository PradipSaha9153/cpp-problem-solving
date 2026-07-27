#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;

    // Compare value and store in temporary storage
    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // For the remaining elements on the left half
    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    
    // For the remaining elements on the right half
    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy on the original array
    for(int idx = 0; idx < temp.size(); idx++) {
        arr[idx + st] = temp[idx];
    }

}

void mergeSort(vector<int> &arr, int st, int end) {
    if(st < end) {
        int mid = st + (end - st) / 2;

        mergeSort(arr, st, mid);    // Left half
        mergeSort(arr, mid + 1, end); // Right half

        merge(arr, st, mid, end);
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

    mergeSort(arr, 0, n - 1);

    cout << endl;
    cout << "After sorting: " << endl;
    display(arr);

    return 0;
}