class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int max_sum = 0, sum = 0, left = 0;
        unordered_map<int,int> idx;
        for (int right=0; right < nums.size(); right++) {
            // new item
            if (idx.find(nums[right]) != idx.end()) {
                while (left <= idx[nums[right]]) {
                    sum -= nums[left];
                    idx.erase(nums[left]);
                    left++;
                }
            }
            idx[nums[right]] = right;
            sum += nums[right];
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};