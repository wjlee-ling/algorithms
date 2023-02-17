class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double max_sum = sum;
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i-k];
            max_sum = max(max_sum, sum);
        }

        double answer = max_sum / k;
        return answer;
    }
};