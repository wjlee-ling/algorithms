class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l=0, r=0, sum=0;
        while (r < s.length()){
            sum += abs(s[r] - t[r++]);
            if (sum > maxCost) {
                sum -= abs(s[l] - t[l++]);
            }
        }
        return r-l;
    }
};