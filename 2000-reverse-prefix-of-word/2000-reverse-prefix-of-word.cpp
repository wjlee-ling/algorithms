class Solution {
public:
    string reversePrefix(string word, char ch) {
        for (int r=0; r < word.size(); r++) {
            if (word[r] == ch) {
                int l = 0;
                while (l < r){
                    swap(word[l++], word[r--]);
                }
                break;
            }
        } return word;
    }
};