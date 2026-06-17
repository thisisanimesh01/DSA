//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
//You must write an algorithm that runs in O(n) time and without using the division operation.
// Input: nums = [1,2,3,4] --> Output: [24,12,8,6]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        //prefix
        for (int i = 1 ; i < n ; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        //suffix
        int suffix = 1;

        for (int i = n - 2 ; i >= 0 ; i--){
            suffix = suffix * nums[i+1];
            ans[i] = ans[i] * suffix;
        }
        return ans;
    }
};

int main (){
    vector<int> nums={1,2,3,4};

    Solution obj;

    vector<int> res = obj.productExceptSelf(nums);

    for ( auto x : res){
        cout << x <<" " ;
    }
    cout << endl;

    return 0;
}