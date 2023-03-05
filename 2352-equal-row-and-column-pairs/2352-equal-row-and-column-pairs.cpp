class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        size_t n = grid.size();
        map<vector<int>, int> counts;
        for (auto row:grid) {
            counts[row]++;
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            vector<int> col = {};
            for (int j = 0; j < n; j++) {
                col.push_back(grid[j][i]);
            }
            ans += counts[col];
        } return ans;
    }
};