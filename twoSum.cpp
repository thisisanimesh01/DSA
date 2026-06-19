//Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.
//Input: nums = [2,7,11,15] target = 9 --> Output:[0,1]

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum (vector<int>& nums , int target){
    unordered_map<int, int> mp;

    for(int left = 0 ; left < nums.size() ; left++){
        int right = target - nums[left];

        if (mp.find(right) != mp.end()){
            return {mp [right] , left};
        }
        mp[nums[left]] = left ;
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> res = twoSum(nums, target);

    cout << "index : ";
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}