// Problem: Given an array, find the second largest unique element.
// Input: 5 1 2 3 4 5 Output: 4

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secondLargestElement(vector<int>& nums){
    sort(nums.begin() , nums.end());

    int largest = nums.back();

    int n = nums.size();

    for(int i = nums.size() - 2; i >= 0; i--){
        if (nums[i] != largest){
            return nums[i];
        }
    }
    return -1;
}

int main (){
    vector<int> nums = {5 , 1 , 2 , 3 , 4 , 5 , 6 };
    int ans = secondLargestElement(nums);

    cout << "result : " << ans << endl;

    return 0;
}