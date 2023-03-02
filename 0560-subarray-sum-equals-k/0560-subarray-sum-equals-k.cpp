class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        counts[0] = 1;
        int cumsum = 0, ans = 0;
        
        for (int num: nums) {
            cumsum += num; 
            ans += counts[cumsum-k];
            cout << counts[cumsum];
            counts[cumsum]++;
            cout << " -> " << counts[cumsum] << endl; 
        } return ans;
    }
};