class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_set<int> seen;
        int left = 0, ans = 100001;
        for (int right=0; right<cards.size(); right++) {
            if (seen.find(cards[right]) == seen.end()) {
                seen.insert(cards[right]);
            } else {
                while (left < right && cards[left] != cards[right]) {
                    seen.erase(cards[left++]);;
                }
                ans = min(ans, right-left+1);
                left++; // [1,2,1,1]
            }

        } return (ans != 100001) ? ans : -1;
    }
};