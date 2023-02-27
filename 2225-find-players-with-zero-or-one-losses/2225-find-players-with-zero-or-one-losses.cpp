class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> counts;
        unordered_set<int> players;
        vector<vector<int>> ans(2, vector<int>());
        
        for (auto match:matches) {
            counts[match[1]]++;
            players.insert(match[0]);
            players.insert(match[1]);
        }
        for (auto player: players) {
            if (counts.find(player) == counts.end()) ans[0].push_back(player);
            else if (counts[player] == 1) ans[1].push_back(player);
        }
        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(), ans[1].end());
        return ans;
    }
};