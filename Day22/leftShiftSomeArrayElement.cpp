/*
problem :- Left Shift Some Array Element


Input : 
5
1 2 3 4 5
2

Output : 
3 4 5 1 2
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> leftRotate(vector<int> &arr, int n, int d) {
    d = d % n;   // Handle d > n

    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        ans[i] = arr[(i + d) % n];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cin >> d;

    vector<int> result = leftRotate(arr, n, d);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    cout << endl;
    
    return 0;
}