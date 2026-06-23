// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and using only constant extra space.
// Input: nums = [1,3,4,2,2] --> Output: 2

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans ;
        sort(nums.begin() , nums.end());

        for(int i = 0 ; i < n - 1 ; i++){
            if (nums[i] == nums[i + 1]){
                ans =  nums[i];
            }
        }

        return ans;
    }
};

int main (){
    vector<int> nums;

    int x ;
    for ( ; cin >> x ; ){
        nums.push_back(x);
    }

    Solution obj;
    cout << obj.findDuplicate(nums) << endl;
}