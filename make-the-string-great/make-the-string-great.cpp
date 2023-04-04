class Solution {
public:
    string makeGood(string s) {
        string ans="";
        for (int i=0; i<s.size(); i++) {
            if (ans.empty()) {
                ans.push_back(s[i]);
                continue;
            } else if (abs(ans.back()-s[i]) != 32) {
                ans.push_back(s[i]);
                continue;
            }
            
            else if (!ans.empty() && abs(ans.back()-s[i]) == 32) {
                ans.pop_back();
            }
            
        }
        return ans;
    }
};