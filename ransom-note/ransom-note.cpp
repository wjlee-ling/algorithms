class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> vocab;
        for (char s:magazine) {
            vocab[s]++;
        }
        for (char s:ransomNote) {
            vocab[s]--;
            if (vocab[s] < 0) {
                return false;
            }
        } return true;
    }
};