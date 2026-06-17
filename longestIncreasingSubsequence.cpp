//Given an integer array nums, return the length of the longest strictly increasing subsequence.
//Input: nums = [10,9,2,5,3,7,101,18] --> Output: 4 --> Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp (n , 1);

        int ans = 1;

        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < n ;j++){
                if (nums[j] < nums[i]){
                    dp[i]= max(dp[i] , dp[j] + 1);
                }
            }
            ans = max(ans , dp[i]);
        }
        return ans;
    }
};

int main() {

    vector<int> nums = {10,9,2,5,3,7,101,18};

    Solution obj;

    int res = obj.lengthOfLIS(nums);

    cout << "Result: " << res << endl;

    return 0;
}