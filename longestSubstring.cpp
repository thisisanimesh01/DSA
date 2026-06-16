//Given a string s, find the length of the longest substring without duplicate characters.
//Input: s = "abcabcbb" --> Output: 3 --> Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        map<char , int > m ;
        int ans = 0;

        int i = 0 , j = 0 ;

        while (j < n){
            if (m.find(s[j]) != m.end()){
                i = max(m[s[j]] + 1 , i);
            }
            m[s[j]] = j ;
            ans = max(ans , j - i + 1);
            j++;
        }

        return ans;
    }
};

int main (){
    string s = "abcabcbb";
    Solution obj;
    int ans = obj.lengthOfLongestSubstring(s);
    cout << "result : " << ans << endl;
    return 0;
}