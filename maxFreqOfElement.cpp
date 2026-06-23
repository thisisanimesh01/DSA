// You are given an array nums consisting of positive integers.
// Return the total frequencies of elements in nums such that those elements all have the maximum frequency.
// The frequency of an element is the number of occurrences of that element in the array.
// input : nums = [1,1,2,2,3] --> Output: 4 --> Explanation: The maximum frequency is 2, and the elements with that frequency are 1 and 2. So the total frequencies are 2 + 2 = 4.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public :
    int maxFreqOfElement(vector<int>& nums){
        int n = nums.size();
        int maxFreq = 0;
        int totalFreq = 0;
        unordered_map<int, int> freqMap;

        for (int i = 0 ; i < n ; i++){
            freqMap[nums[i]]++;
            maxFreq = max(maxFreq, freqMap[nums[i]]);
        }

        for (auto& pair : freqMap){
            if (pair.second == maxFreq){
                totalFreq += pair.second;
            }
        }
        return totalFreq;
    }
};

int main (){
    vector<int> nums = {1, 1, 2, 2, 3};

    Solution obj;
    int res = obj.maxFreqOfElement(nums);

    cout << "result : " << res << endl;

    return 0;
}