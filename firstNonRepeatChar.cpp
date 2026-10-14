// first non repeating character in a string
// input -> "swiss"  output -> 'w'  --> Explanation: The first non-repeating character in the string is 'w', which appears only once.

#include <iostream>
#include <string>
using namespace std;

char firstNonRepeatChar(string s){
    int n = s.length();

    for (int i = 0 ; i < n ; i++){
        int count = 0;

        for (int j = 0 ; j < n ; j++){
            if (s[i] == s[j]){
                count++;
            }
        }

        if (count == 1){
            return s[i];
        }
    }
    return 0;
}

int main (){
    string s ;

    cin >> s ;

    char r = firstNonRepeatChar(s);

    if (r == '\0'){
        cout << -1 << endl;
    }
    else {
        cout << r << endl;
    }

    return 0;
}