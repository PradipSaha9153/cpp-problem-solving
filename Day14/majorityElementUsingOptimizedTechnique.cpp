#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();

    int freq = 1, ans = nums[0];
    for(int i = 1; i < n; i++) {
        if(nums[i] == nums[i - 1])
            freq++;
        else {
            freq = 1;
            ans = nums[i];
        }
        if(freq > n / 2)
            return ans;
    }

    return -1;
}

int main() {
    vector<int> nums = {2, 1, 2, 1, 1, 2, 2};

    cout << "Majority element in an array is: " << majorityElement(nums) << endl;

    return 0;
}