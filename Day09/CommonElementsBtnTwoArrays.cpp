// Program to Find Common Elements Between Two Arrays

#include<iostream>
#include<vector>
using namespace std;

void commonElement(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> cm;
    for(int i : arr1)
        for(int j : arr2)
            if(i == j){
                cm.push_back(i);
                break;
            }

    cout << "Common element between two arrays is: " << endl;
    for(int n : cm)
        cout << n << " ";
    cout << endl;
}

int main() {
    int size1, size2;
    int n;

    cout << "Enter size of an array01: ";
    cin >> size1;
    vector<int> arr1(size1);

    cout << "Enter array01 Element: ";
    for(int i = 0; i < size1; i++){
        cin >> arr1[i];
    }

    cout << "Enter size of an array02: ";
    cin >> size2;    
    vector<int> arr2(size2);

    cout << "Enter array02 Element: ";
    for(int i = 0; i < size2; i++){
        cin >> arr2[i];
    }

    commonElement(arr1, arr2);

    return 0;
}