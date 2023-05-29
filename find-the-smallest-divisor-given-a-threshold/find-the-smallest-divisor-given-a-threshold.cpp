class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left, right, mid;
        left = 0;
        right = 1e6;
        
        while (left <= right) {
            mid = left + (right - left) /2;
            if (check(nums, threshold, mid)){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
    
    bool check(vector<int>& nums, int threshold, double divisor) {
        double sum = 0;
        for (int& num:nums){
            sum += ceil(num / divisor);
            if (sum > threshold) return false;
        }
        return true;
    }
};