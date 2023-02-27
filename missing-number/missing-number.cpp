class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,bool> mp;
        for (int i=0; i<nums.size(); i++) {
            mp[nums[i]] = true;
        }
        
        for (int i=0; i<nums.size()+1; i++) {
            if (mp.find(i) == mp.end()) return i;
        }
        return 0;
    }
};