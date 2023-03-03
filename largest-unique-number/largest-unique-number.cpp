class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_set<int> counts;
        unordered_set<int> seen;
        for (int num:nums){
            if (counts.find(num) != counts.end()) {
                counts.erase(num);
            } else {
                if (seen.find(num) == seen.end())
                counts.insert(num);
            }
            seen.insert(num);
        } 
        //sort(counts.begin(), counts.end());
        int ans=0;
        if (counts.size() == 0) 
            return -1;
        
        for (int num:counts) {
            ans = max(ans, num);
        }
        return ans;
    }
};