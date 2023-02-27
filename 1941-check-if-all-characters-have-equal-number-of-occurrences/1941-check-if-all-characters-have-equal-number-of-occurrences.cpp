class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> counts;
        for (char ch:s){
            counts[ch]++;
        }
        int prev = 0;
        for (auto [key, value] : counts) {
            if (prev == 0) prev = value;
            else if (prev != value) return false;
        }
            
        return true;
    }
};