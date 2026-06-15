//Problem: Given two numbers m and n, find sum of all integers from m to n (inclusive).
//Input: 5 10 Output: 40 Explanation: 5+6+7+8+9+10 = 40

#include <iostream>
#include <vector>
using namespace std;

int sumInRange(int a , int b){
    int ans = 0 ;

    for (int i = a ; i < b + 1 ; i++){
        ans += i;
    }
    return ans;
}

int main (){
    int a = 1 ;
    int b = 5 ;

    cout << "result : " << sumInRange( a , b) << endl;

    return 0;
}