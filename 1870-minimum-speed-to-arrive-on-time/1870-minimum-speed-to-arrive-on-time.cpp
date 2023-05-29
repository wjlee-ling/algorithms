class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        if (dist.size() > ceil(hour)) return -1;
        
        int left = 1;
        int right = 1e+7; // *max_element(dist.begin(), dist.end());
        while (left<=right){
            int mid = left + (right-left) / 2;
            if (check(dist, mid, hour)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
    
    bool check(vector<int>& dist, double speed, double hour){
        double sum = 0.0;
        for (int idx=0; idx < dist.size(); idx++) {
            if (idx < dist.size()-1){
                sum += ceil(dist[idx] / speed);
            } else {
                sum += dist[idx] / speed;
            }
            
            if (sum > hour) return false;
        }
        return true;
    }
};