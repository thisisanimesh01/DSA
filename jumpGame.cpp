// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
// Return true if you can reach the last index, or false otherwise.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i > farthest) {
                return false;
            }

            farthest = max(farthest, i + nums[i]);

            if (farthest >= nums.size() - 1) {
                return true;
            }
        }

        return true;
    }
};


int main (){
    vector<int> nums = {2,0};

    Solution ans;

    if (ans.canJump(nums) == 1){
        cout << "true" << endl;
    }else{
        cout <<"false" << endl;
    }

    return 0;
}