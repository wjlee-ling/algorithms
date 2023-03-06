bool cmp(pair<char,int>& a, pair<char,int>& b){
        return a.second > b.second;
}

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> counts;
        for (auto& ch:s) {
            counts[ch]++;
        }
        // sort by value
        vector<pair<char, int>> vec(counts.begin(), counts.end());
        sort(vec.begin(), vec.end(), cmp);
        
        string ans = "";
        for (auto& item:vec) {
            for (int i=0; i<item.second; i++){
                ans += item.first;
            }
        }
        return ans;
    }
};