class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> mp;
        char ans;
        for (int i=0; i < s.size(); i++) {
            if (mp.find(s[i]) != mp.end()) {
                ans = s[i];
                break;
            }
            else mp[s[i]] = i;
        }
        return ans;
    }
};