//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
//input : nums = [1,2,3,4,5,6,7], k = 3 --> Output: [5,6,7,1,2,3,4] --> Explanation: rotate 1 steps to the right: [7,1,2,3,4,5,6] --> rotate 2 steps to the right: [6,7,1,2,3,4,5] --> rotate 3 steps to the right: [5,6,7,1,2,3,4]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < k; i++) {
            int lastElement = nums[n - 1];

            for (int j = n - 1; j > 0; j--) {
                nums[j] = nums[j - 1];
            }

            nums[0] = lastElement;
        }

    }
};

int main (){
    int n ;
    cin >> n;

    vector<int> nums;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    Solution r;
    r.rotate(nums);
    cout << "result : ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
