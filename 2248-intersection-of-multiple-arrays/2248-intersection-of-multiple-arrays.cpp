class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> counts;
        vector<int> ans;
        for (int i=0; i < nums.size(); i++) {
            for (int num:nums[i]) {
                counts[num]++;
            }
        }
        for (auto& [key, value]:counts){
            if (value==nums.size()) {
                ans.push_back(key);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};