//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <iostream>
#include <vector>
using namespace std;

class solution{
    public:
        int singleNumber(vector<int>& nums){
            int res = 0;

            for (int num : nums){
                res = res ^ num;
            }
            return res;
        }
};

int main(){
    vector<int> nums = {4,1,2,1,2};

    solution obj;

    int res = obj.singleNumber(nums);
    cout << "result : " << res << endl;

    return 0;
}