class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        counts[0] = 1;
        int ans = 0;
        int sum = 0; // # of odd numbers
        for (int num:nums) {
            sum += (num % 2 == 1);
            counts[sum] ++;
            ans += counts[sum-k];
            //counts[sum] ++;
        } return ans;
    }
};