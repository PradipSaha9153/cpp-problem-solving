#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;

    for(int val : nums)
        ans ^= val;

    return ans;
}

int main() {
    vector<int> v = {4, 1, 2, 1, 2};

    cout << singleNumber(v) << endl;

    return 0;git
}