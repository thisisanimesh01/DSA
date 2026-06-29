//You are given an array prices where prices[i] is the price of a given stock on the ith day.
//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
// input : prices = [7,1,5,3,6,4] --> Output: 5 --> Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy_price = prices[0];
        int max_profit = 0;

        for (int i = 1; i < n; i++) {
            if (prices[i] < buy_price) {
                buy_price = prices[i];
            } else {
                max_profit = max(max_profit, prices[i] - buy_price);
            }
        }
        return max_profit;
    }
};

int main (){
    cout << "Enter the number of days: ";
    int n;
    cin >> n;
    vector<int> prices(n);
    cout << "Enter the prices for each day: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    Solution s;
    int result = s.maxProfit(prices);
    cout << "Maximum profit: " << result << endl;

    return 0;
}