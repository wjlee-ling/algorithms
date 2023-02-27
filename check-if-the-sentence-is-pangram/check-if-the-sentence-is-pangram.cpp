class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,bool> mp;
        for (char chr:sentence) {
            mp[chr] = true;
        }
        if (mp.size() == 26) return true;
        return false;
    }
};