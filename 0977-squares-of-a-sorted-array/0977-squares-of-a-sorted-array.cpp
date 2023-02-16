class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        size_t n = nums.size();
        vector<int> ans(n);
        
        int left = 0;
        int right = n-1;
        
        for (int i = n - 1; i >= 0 ; i-- ) {
            int ele;
            if (abs(nums[left]) < abs(nums[right])) {
                ele = nums[right];
                right--;
            } else {
                ele = nums[left];
                left++;
            }
            ans[i] = ele * ele;
        }
        
        return ans;
    }
};