class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        size_t len = nums.size();
        // cumsum
        for (int i = 1; i < len; i++) {
            nums[i] += nums[i-1];
        }
        // find answer
        int lhs, rhs;
        for (int i = 0; i < len; i++) {
            lhs = (i != 0) ? nums[i-1] : 0;
            rhs = (i != len-1) ? nums[len-1] - nums[i] : 0;
            if (lhs == rhs) return i;
        }
        return -1;
    }
};