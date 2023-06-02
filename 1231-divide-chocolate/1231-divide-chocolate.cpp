class Solution {
public:
    int maximizeSweetness(vector<int>& sweetness, int k) {
        int numPeople = k+1;
        int left = *min_element(sweetness.begin(), sweetness.end());
        int right = accumulate(sweetness.begin(), sweetness.end(), 0) / numPeople; // numeric::
        
        while (left < right) {
            int mid = (left + right + 1) / 2;
            int curr = 0; // current sweetness
            int people = 0;  // people w/ chocolate
            
            for (int s: sweetness){
                curr += s;
                if (curr >= mid) {
                    people += 1;
                    curr = 0;
                }
            }
            
            if (people >= numPeople) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return right;
    }
};