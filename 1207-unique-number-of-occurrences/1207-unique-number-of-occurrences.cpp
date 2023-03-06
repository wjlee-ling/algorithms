class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> counts;
        for (int num:arr) {
            counts[num]++;
        }
        unordered_set<int> seen;
        for (auto& [num, count]: counts) {
            if (seen.find(count) != seen.end()) return false;
            else seen.insert(count);
        }
        return true;
    }
};