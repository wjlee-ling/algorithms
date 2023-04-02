class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp = {
            {'(',')'}, {'{','}'}, {'[',']'}
        };
        for (char ch:s){
            if (ch == '(' || ch == '{'  || ch == '['){
                st.push(ch);
            }
            else if (st.empty()) return false;
            else if (ch != mp[st.top()]) return false;
            else {
                st.pop();
            }
        }
        if (not st.empty()) return false;
        return true;
    }
};