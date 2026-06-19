//You are given an array of N integers. Your task is to determine whether the number of odd elements in the array is equal to the number of even elements.
//If the count of odd numbers is equal to the count of even numbers, print the size of the array (N).
//Otherwise, print -1.

#include <iostream>
#include <vector>
using namespace std;

int odd_even(int size , vector<int>& elements){

    int even = 0 , odd = 0;
    for (int i = 0 ; i < size ; i++){
        if(elements[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    if (odd == even ){
        return size;
    }

    return -1;
}

int main() {
    int size;
    cin >> size;

    vector<int> arr;

    for(int i = 0; i < size; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int res = odd_even(size, arr);

    cout << res << endl;

    return 0;
}