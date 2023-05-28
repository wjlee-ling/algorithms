class Solution {
public:
    int helper(vector<int>& piles, int k, int h){
        long total=0;
        for (double p:piles) {
            total += ceil(p/k);
        }
        return (total <= h);
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int left, right, mid;
        left = 1;
        right = *max_element(piles.begin(), piles.end());
        // for (auto const p:piles){
        //     right = max(p, right);
        // }
        
        while (left <= right){
            mid = left + (right-left)/2;
            if (helper(piles, mid, h)) {
                right = mid-1;
            } else {
                left = mid+1;
            }
        }
        return left;
    }
};
