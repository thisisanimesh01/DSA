// remove the duplicate elements from the sorted array
// input : nums = [1,1,2]  --> Output: 2

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int>& nums){
    int n = nums.size();

    if (n == 0) return 0;

    int i = 0 ;

    for (int j = 1 ; j < n ; j++){
        if (nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;

}

int main (){
    int n ;
    cin >> n;

    vector<int> num(n);
    for (int i = 0 ; i < n ; i++){
        cin >> num[i];
    }

    int k = removeDuplicate(num);

    cout << k << endl ;

    for (int i = 0; i < k; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}
