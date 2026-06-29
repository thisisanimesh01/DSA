// Given an input string s, reverse the order of the words.
// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
// Return a string of the words in reverse order concatenated by a single space.
// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.
//Input: s = "the sky is blue"   ---> Output: "blue is sky the"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Sol{
    public :
    string reverseWords(string s){
        int n = s.length();
        reverse(s.begin() , s.end());

        string new_String = "";

        for (int i = 0 ; i < n ; i++){
            string word ="";

            while( i < n && s[i] != ' '){
                word += s[i];
                i++;
            }

            reverse(word.begin() , word.end());

            if(word.length() > 0){
                new_String += ' ' + word;
            }
        }
        return new_String.substr(1);
    }
};

int main (){
string s= "sky is blue";

Sol word ;

string res = word.reverseWords(s);

cout << res << endl;

return 0;

}