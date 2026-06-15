//Problem: Given an array where every element appears even times except one, find the odd occurring element.
//Hint: Use XOR operation (a ^ a = 0, a ^ 0 = a)
//Input: {7, 1, 1, 2, 2, 3, 3}  Output: 7

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int oddOccuringElement(vector<int>& nums){
    int output = 0 ;
    for (int i = 0 ; i < nums.size() ; i++ ) {
        output = output ^ nums[i];
    }
    return output;
};

int main(){
    vector<int> nums = {7, 1, 1, 2, 2, 3, 3};

    int res = oddOccuringElement(nums);
    cout << "result : " << res << endl;

    return 0;

}