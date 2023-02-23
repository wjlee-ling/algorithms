class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        /* Time Exceeded
        int ans = 1001;
        for (int left=0; left < nums.size(); left++) {
            int right=left, sum=0;
            while (sum < target && right < nums.size()) {
                sum += nums[right++];
            }
            if (sum >= target) ans = min(ans, right-left);
            if ((left == nums.size()-1) && (ans==1001)) return 0;
        }
        return ans;
        */
        int ans = INT_MAX;
        int sum = 0, left = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum >= target) {
                ans = min(ans, right + 1 - left);
                // minimize
                sum -= nums[left++];
            }
        }
        return (ans != INT_MAX) ? ans : 0;
    }
};