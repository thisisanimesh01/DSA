//Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
//Input: nums1 = [1,2,2,1], nums2 = [2,2]  --> Output: [2]

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> firstArrayElements(nums1.begin(), nums1.end());
        unordered_set<int> commonElements;

        for (int currentNumber : nums2) {
            if (firstArrayElements.count(currentNumber)) {
                commonElements.insert(currentNumber);
            }
        }

        return vector<int>(commonElements.begin(), commonElements.end());
    }
};

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {1, 2};

    Solution obj;
    vector<int> result = obj.intersection(nums1, nums2);

    cout << "Result: ";
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}