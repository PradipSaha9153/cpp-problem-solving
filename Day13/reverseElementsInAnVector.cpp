#include<iostream>
#include<vector>
using namespace std;

void reverseVectorElemnts(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;

    while(start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> nums = {4, 2, 7, 8, 1, 2, 5};


    cout << "Before reverse:";
    for(int n : nums)
        cout << n << " ";
    cout << endl;
    
    reverseVectorElemnts(nums);

    cout << "After reverse:";
    for(int n : nums)
        cout << n << " ";
    cout << endl;

    return 0;
}