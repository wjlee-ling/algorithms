class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        for (int i=1; i<nums.size(); i++) {
            nums[i] += nums[i-1]; // get prefix sum
        }
        vector<int> ans;
        for (auto query: queries) {
            int index = upper_bound(nums.begin(), nums.end(), query) - nums.begin();
            ans.push_back(index);
        }
        return ans;
    }
};