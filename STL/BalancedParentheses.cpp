#include <bits/stdc++.h>
using namespace std;
bool isBalancedParentheses(const string s){
    stack<char> stk;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){
            stk.push(s[i]); // Push open braces to stk
        } else{
            if (!stk.empty() &&
                    (stk.top() == '{' && s[i] == '}')||
                    (stk.top() == '[' && s[i] == ']')||
                    (stk.top() == '(' && s[i] == ')')){
                stk.pop(); // Matching, remove them
            } else{
                return false; // Mismatch or Stk -> empty
            }
        }
    }
    return stk.empty(); // All elements popped -> True
}
int main() {
    string string1 = "{[(){}]}";
    string string2 = "{[(]})";
    if (isBalancedParentheses(string1)){
        cout << "true" << endl;
    } else{
        cout << "false" << endl;
    }
    if (isBalancedParentheses(string2)){
        cout << "true" << endl;
    } else{
        cout << "false" << endl;
    }
    return 0;
}
