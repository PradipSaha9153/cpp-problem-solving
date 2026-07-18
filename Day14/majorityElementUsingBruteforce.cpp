#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> nums) {
    int n = nums.size();

    for(int n : nums) {
        int freq = 0;
        for(int i : nums) {
            if(n == i)
                freq++;
        }
        if(freq > n/2)
            return n;
    }

    return -1;
}

int main() {
    vector<int> nums = {2, 1, 2, 1, 1};

    cout << "Majority element in an array is: " << majorityElement(nums) << endl;

    return 0;
}