// longest consecutive sequence
// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
// You must write an algorithm that runs in O(n) time.
// Input: nums = [100,4,200,1,3,2] --> Output: 4 --> Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;

    sort(nums.begin(), nums.end());

    int count = 1;
    int longest = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            continue;  // Ignore duplicates
        }
        else if (nums[i] == nums[i - 1] + 1) {
            count++;
        }
        else {
            count = 1;
        }

        longest = max(longest, count);
    }

    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout << longestConsecutive(nums)  << endl;

    return 0;
}
