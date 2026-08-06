#include <stack>
class Solution {
public:
    bool isValid(string s) {
        map<char, char> mpp;
        mpp[')'] = '(';
        mpp['}'] = '{';
        mpp[']'] = '[';
        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {st.push(s[i]);}
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if (st.empty() || mpp[s[i]] != st.top()) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};