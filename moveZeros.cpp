// move Zeros
//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.
//Input: nums = [0,1,0,3,12] -- > Output: [1,3,12,0,0]


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i = 0 ; i < nums.size() ; i++){
                if (nums[i] != 0){
                    swap(nums[i] , nums[j]);
                    j++;
                }
            }
        }
    };

int main() {
    vector<int> nums = {8, 4, 5, 0, 1, 9, 0, 5, 0};

    Solution obj;
    obj.moveZeroes(nums);

    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}