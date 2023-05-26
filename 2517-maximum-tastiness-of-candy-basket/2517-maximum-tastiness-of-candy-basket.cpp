class Solution {
public:
    bool check(vector<int>& price, int diff, int k){
        int last = price[0], cnt = 1, idx=1;
        while (cnt < k && idx < price.size()) {
            if (price[idx] - last >= diff) {
                last = price[idx];
                cnt++;
            }
            idx++;
        }
        return cnt==k;
    }
    
    int maximumTastiness(vector<int>& price, int k) {
        int lo=1, hi=1e9;
        sort(price.begin(), price.end());
        while (lo<=hi){
            int mid = lo + (hi-lo) /2;
            if (check(price, mid, k)) {
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
        return lo-1;
    }
};
