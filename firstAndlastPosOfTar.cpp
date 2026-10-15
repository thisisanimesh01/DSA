// First and Last Position of Target in Sorted Array
//input: nums = [5,7,7,8,8,10], target = 8
//output: [3,4] --> Explanation: The target value 8 appears at indices 3 and 4 in the sorted array.


#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int first = -1, last = -1;

    int low = 0, high = nums.size() - 1;

    // Find first position
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    low = 0;
    high = nums.size() - 1;

    // Find last position
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return {first, last};
}

// optimal solution
vector<int> searchRangeOptimal(vector<int>& nums, int target) {
    int first = -1, last = -1;

    // Find first position
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last position
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    return {first, last};
}


int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    vector<int> ans = searchRange(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}


