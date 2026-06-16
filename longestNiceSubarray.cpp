// You are given an array nums consisting of positive integers.
// We call a subarray of nums nice if the bitwise AND of every pair of elements that are in different positions in the subarray is equal to 0.
// Return the length of the longest nice subarray.
// A subarray is a contiguous part of an array.
// Note that subarrays of length 1 are always considered nice.
// Input: nums = [1,3,8,48,10] --> Output: 3 -->Explanation: The longest nice subarray is [3,8,48]. This subarray satisfies the conditions:- 3 AND 8 = 0.- 3 AND 48 = 0.- 8 AND 48 = 0.It can be proven that no longer nice subarray can be obtained, so we return 3.

#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;

        for (int i = 0 ; i < n ; i++){
            int j = i + 1 ;
            while (j < n && (nums[i] & nums[j]) == 0){
                j++;
            }
            ans = max(ans , j - i);
        }
        return ans;
    }
};

int main (){
    vector<int> nums = {1,3,8,48,10};

    Solution obj;
    int res = obj.longestNiceSubarray(nums);
    cout << "result : " << res << endl;

    return 0;
}