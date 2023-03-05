class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> vocab; 
        vector<vector<string>> ans;
        for (auto& word:strs) {
            string sorted = word;
            sort(sorted.begin(), sorted.end());
            vocab[sorted].push_back(word);

        }
        for (auto [_, words]:vocab) {
            ans.push_back(words);
        } return ans;
    }
};