class Solution {
public:
    string reverseWords(string s) {
        int left = 0, right = 0;
        while (right < s.size()) {
            if (right==s.size()-1 || s[right+1]==' '){
                int l = left, r = right;
                left = right+2, right = right+2; // skip space
                while (l < r) {
                    char temp = s[l];
                    s[l]= s[r];
                    s[r] = temp;
                    l++;
                    r--;
                }
            }
            else right++;
        }
        return s;
    }
};