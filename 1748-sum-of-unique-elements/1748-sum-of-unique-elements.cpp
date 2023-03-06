class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> counts;
        int ans=0;
        for (auto& num:nums) {
            counts[num]++;
        } 
        for (auto& [k, count]:counts){
            if (count==1) ans += k;
        }
        
        return ans;
    }
};