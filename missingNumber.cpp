// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
// Input: nums = [3,0,1] --> Output: 2

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
};

int main (){
    vector<int> nums = {3, 0, 1};

    Solution obj;

    int res = obj.missingNumber(nums);

    cout << "result : " << res << endl;

    return 0;
}