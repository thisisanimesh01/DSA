// reverse a string using recursion
#include <iostream>
#include <string>
using namespace std;

string reverseWords(const string& str) {
    string ans = "";
    int n = str.length();
    int i = n - 1;
    while (i >= 0) {
        while (i >= 0 && str[i] == ' ') i--;
        int j = i;
        if (i < 0) break;
        while (i >= 0 && str[i] != ' ') i--;
        if (!ans.empty()) ans += ' ';
        ans += str.substr(i + 1, j - i);
    }
    return ans;
}

int main () {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string reversedStr = reverseWords(str);
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}