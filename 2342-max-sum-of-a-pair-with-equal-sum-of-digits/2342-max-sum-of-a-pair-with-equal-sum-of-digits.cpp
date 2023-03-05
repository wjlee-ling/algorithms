class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for (auto num:nums) {
            string str = to_string(num);
            int sum = 0;
            for (char s:str) {
                int sint = s - '0';
                sum += sint;
            }
            mp[sum].push_back(num);
        }
        int ans=0;
        for (auto& [k, v]:mp) {
            if (v.size() == 1) continue;
            sort(v.begin(), v.end());
            ans = max(ans, v[v.size()-1] + v[v.size()-2]);
        } return ans !=0 ? ans : -1;
    }
};