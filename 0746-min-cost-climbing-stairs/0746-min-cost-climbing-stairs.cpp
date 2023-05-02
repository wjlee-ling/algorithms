class Solution {
public:
    int dp(int idx, vector<int>& cost, unordered_map<int, int>& mp){
        // unordered_map<int, int> mp;
        // mp.reserve(cost.size());
        
        if (idx == 0 || idx==1) return 0;
        if (mp.find(idx) != mp.end()) return mp[idx];
        
        mp[idx] = min(dp(idx-2, cost, mp)+cost[idx-2], dp(idx-1, cost, mp)+cost[idx-1]);
        return mp[idx];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int, int> mp;
        mp.reserve(cost.size());
        int ans = dp(cost.size(), cost, mp);
        return ans;
    }
};