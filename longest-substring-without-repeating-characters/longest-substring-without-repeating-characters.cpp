class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, ans = 0;
        unordered_set<char> counts;
        for (int right=0; right < s.size(); right++) {
            // if already exists
            while (counts.find(s[right]) != counts.end()) {
                counts.erase(s[left++]);
            }
            counts.insert(s[right]);
            ans = max(ans, right-left+1);
        } return ans;
    }
};