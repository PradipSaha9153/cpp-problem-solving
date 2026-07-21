#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    
    cout << "Enter array values: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int newValue;
    cout << "Enter new value: ";
    cin >> newValue;

    int i = n - 1;

    while (i >= 0 && arr[i] > newValue) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = newValue;

    for (int j = 0; j <= n; j++) {
        cout << arr[j];
        if (j < n) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}