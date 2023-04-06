class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> q;
        for (int i=0; i<nums.size(); i++) {
            while (!q.empty() && nums[i] > nums[q.back()]) {
                q.pop_back();
            }
            // out of window
            while (!q.empty() && q.front() <= i-k) {
                q.pop_front();
            }
            q.push_back(i);
            if (i >= k-1){
                ans.push_back(nums[q.front()]);
            }
        }
    return ans;
    }
};