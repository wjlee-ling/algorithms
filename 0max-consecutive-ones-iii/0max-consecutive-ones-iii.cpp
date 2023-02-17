class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, kcount = k, right;
        for (right = 0; right < nums.size(); right++) {
            if (nums[right]==0) kcount--;
            if (kcount < 0) {
                kcount += 1-nums[left]; 
                left++;
            }
        }
        return right-left;
    }      
};