class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right;
        size_t n = nums.size();
        for (right = 0; right < n; right++) {
            if (nums[right] == 0) k--;
            if (k < 0) {
                k += 1 - nums[left];
                left++;
            }
        }
        return right-left;
    }
};