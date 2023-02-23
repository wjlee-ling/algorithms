/* my original code
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0, right = s.size()-1;
        while (left < right){
            if (not (s[left] >= 'a' && s[left] <= 'z') && not (s[left] >= 'A' && s[left] <= 'Z')) {
                left++;
                continue;
            }
            if (not (s[right] >= 'a' && s[right] <= 'z') && not (s[right] >= 'A' && s[right] <= 'Z')) {
                right--;
                continue;
            }
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        return s;
    }
};
*/
// using functions
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0, right = s.size()-1;
        while (left < right){
            if (!isalpha(s[left])) {
                left++;
                continue;
            }
            if (!isalpha(s[right])) {
                right--;
                continue;
            }
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};
