/*
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
*/
class Solution{
public: 
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, maxi = 0, zeros = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right]==0) zeros++;
            while (left <= right && zeros > k) {
                if (nums[left] == 0) zeros--;
                left++;
            }
            maxi = max(maxi, right-left+1);
        }
        return maxi;
    }
};