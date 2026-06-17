//The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.
//You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
//Input: nums1 = [4,1,2], nums2 = [1,3,4,2] --> Output: [-1,3,-1]
// Explanation: The next greater element for each value of nums1 is as follows:
// - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
// - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                if (nums1[i] == nums2[j]) {

                    for (int k = j + 1; k < m; k++) {

                        if (nums2[k] > nums1[i]) {
                            ans[i] = nums2[k];
                            break;
                        }
                    }

                    break;
                }
            }
        }

        return ans;
    }
};

int main() {

    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};

    Solution obj;

    vector<int> res = obj.nextGreaterElement(nums1, nums2);

    cout << "Result: ";

    for (int x : res) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}