// You want to build n new buildings in a city. The new buildings will be built in a line and are labeled from 1 to n.
// However, there are city restrictions on the heights of the new buildings:
// The height of each building must be a non-negative integer.
// The height of the first building must be 0.
// The height difference between any two adjacent buildings cannot exceed 1.
// Additionally, there are city restrictions on the maximum height of specific buildings. These restrictions are given as a 2D integer array restrictions where restrictions[i] = [idi, maxHeighti] indicates that building idi must have a height less than or equal to maxHeighti.
// It is guaranteed that each building will appear at most once in restrictions, and building 1 will not be in restrictions.
// Return the maximum possible height of the tallest building.
// input : n = 5, restrictions = [[2,1],[4,1]] --> Output: 2 --> Explanation: The building heights can be [0,1,2,1,2]. The tallest building has a height of 2.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        restrictions.push_back({1, 0});
        restrictions.push_back({n, n - 1});
        sort(restrictions.begin(), restrictions.end());

        for (int i = 1; i < restrictions.size(); i++) {
            int diff = restrictions[i][0] - restrictions[i - 1][0];
            int maxHeight = restrictions[i - 1][1] + diff;
            if (maxHeight < restrictions[i][1]) {
                restrictions[i][1] = maxHeight;
            }
        }

        for (int i = restrictions.size() - 2; i >= 0; i--) {
            int diff = restrictions[i + 1][0] - restrictions[i][0];
            int maxHeight = restrictions[i + 1][1] + diff;
            if (maxHeight < restrictions[i][1]) {
                restrictions[i][1] = maxHeight;
            }
        }

        int maxBuildingHeight = 0;
        for (int i = 1; i < restrictions.size(); i++) {
            int leftBuilding = restrictions[i - 1][0];
            int rightBuilding = restrictions[i][0];
            int leftHeight = restrictions[i - 1][1];
            int rightHeight = restrictions[i][1];

            int heightDiff = abs(rightHeight - leftHeight);
            int distance = rightBuilding - leftBuilding;

            if (heightDiff > distance) {
                return -1; // Not possible to satisfy the height difference constraint
            }

            int peakHeight = (leftHeight + rightHeight + distance) / 2;
            maxBuildingHeight = max(maxBuildingHeight, peakHeight);
        }

        return maxBuildingHeight;
    }
};

int main() {
    int n = 5;
    vector<vector<int>> restrictions = {{2, 1}, {4, 1}};

    Solution obj;
    int res = obj.maxBuilding(n, restrictions);

    cout << "Result: " << res << endl;

    return 0;
}