class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    
    int maxVowels(string s, int k) {
        int ans = 0, count = 0, left, right=k-1;
        for (left = 0; left < s.size()-k+1; left++) {
            if (left == 0) {
                for (int i = 0; i < k; i++) {
                    if (isVowel(s[i])) {
                        count++;
                    }
                }
            } else {
                if (isVowel(s[left-1])) count--;
                if (isVowel(s[right])) count++;
            }
            ans = max(ans, count);
            right++;
        }
        return ans;
    }
};