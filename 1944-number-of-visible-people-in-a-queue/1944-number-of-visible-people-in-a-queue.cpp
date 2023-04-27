class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n-1; i >= 0; i--) { // 뒤에서
            while (!st.empty() && heights[i] > st.top()) {
                st.pop();
                ans[i]++; // [i+1,] 에서 더 작은 것들
            }
            if (!st.empty())
                ans[i]++; // 스택보다 작음 == 다음 것만 봄
            st.push(heights[i]);
        }
        return ans;
    }
};