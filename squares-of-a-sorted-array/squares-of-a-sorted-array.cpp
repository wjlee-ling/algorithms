class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        size_t n = nums.size();
        vector<int> ans(n);
        
        int left = 0;
        int right = n - 1;
        for (int idx = n-1; idx >= 0; idx--) {
            int ele;
            if (abs(nums[left]) < abs(nums[right])) {
                ele = abs(nums[right]); 
                right--;
            } else {
                ele = abs(nums[left]);
                left++;
            }
            ans[idx] = ele * ele;
        }
        return ans;
    }
};