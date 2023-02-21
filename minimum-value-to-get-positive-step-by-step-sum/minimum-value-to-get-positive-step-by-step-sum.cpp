class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int global_min = 0;
        for (int idx =0; idx < nums.size(); idx++) {
            if (idx == 0) nums[idx] = nums[idx];
            else nums[idx] = nums[idx-1] + nums[idx];
            global_min = min(global_min, nums[idx]);
        }
        return abs(global_min) + 1;
    }
};