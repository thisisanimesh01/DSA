//Problem: Count how many positive, negative, and zero elements are in the array.
// Input: 6 5 -3 0 8 -1 0 Output: 2 2 2

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "enter the number of element : " ;
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: "  << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int pos = 0 , neg = 0 , zero = 0 ;
    for (int i = 0 ; i < nums.size() ; i++){
        if (nums[i] > 0){
            pos++;
        }
        else if (nums[i]== 0){
            zero++;
        }
        else{
            neg++;
        }
    }

    cout <<"positive : " << pos << endl;
    cout <<"negative : " << neg << endl;
    cout <<"zero : " << zero << endl;

    return 0;
}