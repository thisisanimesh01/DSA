//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// input : s = "()" --> Output: true

#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s){
    int n = s.length();
    stack<char> st;

    for(char ch : s){
        if ( ch == '(' || ch == '[' || ch == '{'){
            st.push(ch);
        }
        else{
            if(st.empty()){
                return false;
            }
            char top = st.top();
            st.pop();

            if( ch == ')' && top != '(') return false;
            if( ch == ']' && top != '[') return false;
            if( ch == '}' && top != '{') return false;
        }
    }
    return st.empty();
}

int main (){
    string s ;
    cin >> s;

    cout << "result : " << (isValid(s) ? "true" : "false") << endl;

    return 0;
}