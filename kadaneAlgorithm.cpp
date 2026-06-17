// Problem - Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4] --> Output: 6 --> Explanation: The subarray [4,-1,2,1] has the largest sum 6.

#include <iostream>
#include <vector>
using namespace std;

int kadane_Algo(vector<int>& nums){
    int currSum = 0 ;
    int maxSum = INT_MIN;

    for(int i = 0 ; i < nums.size() ; i++){
        currSum += nums[i];
        maxSum = max(currSum , maxSum);

        if(currSum < 0 ){
            currSum = 0;
        }
    }

    return maxSum;
}

int main (){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    int res = kadane_Algo(nums);

    cout << "result : " << res << endl;

    return 0 ;
}