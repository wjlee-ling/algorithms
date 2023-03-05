class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> vocab; // e.g. {sum_of_ascii_code_each_char: [list of words]}
        vector<vector<string>> ans;
        for (auto word:strs) {
            string sorted = word;
            sort(sorted.begin(), sorted.end());
            vocab[sorted].push_back(word);
            /*
            if (ans.find(sorted_word) == ans.end()) {
                ans[sorted_word].push_back(word);
            } else {
                
            }
            */
        }
        for (auto [_, words]:vocab) {
            ans.push_back(words);
        } return ans;
    }
};