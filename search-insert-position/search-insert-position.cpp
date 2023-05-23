class Solution {
public:    
    int searchInsert(vector<int>& nums, int target) {
        int left, right, mid, num;
        left = 0, right = nums.size()-1;
        while (right >= left) {
            mid = left + (right-left)/2;
            num = nums[mid];
            if (num == target) return mid;
            if (num > target) {
                right--;
            }
            else left++;
        }
        return left;
    }
};