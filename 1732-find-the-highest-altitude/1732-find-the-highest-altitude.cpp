class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0, maxi = gain[0];
        for (int i = 1 ; i < gain.size(); i++) {
            gain[i] += gain[i-1];
            maxi = max(maxi, gain[i]);
        }
        return max(0, maxi);
    }
};