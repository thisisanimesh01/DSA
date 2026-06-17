//Given an array nums of size n, return the majority element.
//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
//Input: nums = [3,2,3] -->  Output: 3

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

    unordered_map<int,int> freq;

    int n = nums.size();

    for(int num : nums){
        freq[num]++;

        if(freq[num] > n/2){
            return num;
        }
    }

    return -1;
}
};

int main (){
    vector<int> nums{2,2,1,1,1,2,2};

    Solution obj;
    int res = obj.majorityElement(nums);

    cout << "result : " << res << endl;

    return 0;
}