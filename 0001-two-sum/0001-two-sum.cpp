class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = 1;
        vector<int> ans;

        // two-pointer sum-up of O(n^2)
        while (left < nums.size() - 1) {
            if (nums[left] + nums[right] == target) {
                ans.push_back(left);
                ans.push_back(right);
                break;
            } else {
                right++;
                if (right == nums.size()) {
                    left++;
                    right=left+1;
                }
            }
        }
        return ans;
    }
};