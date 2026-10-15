// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// A subarray is a contiguous non-empty sequence of elements within an array.
// Input: nums = [1,1,1], k = 2   -->  Output: 2


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> hashmap;

        hashmap[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (hashmap.find(sum - k) != hashmap.end()) {
                count += hashmap[sum - k];
            }


            hashmap[sum]++;
        }

        return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 5;

    cout << "Number of subarrays with sum " << k << " is " << subarraySum(arr, k) << endl;

    return 0;
}
