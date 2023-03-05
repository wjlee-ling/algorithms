class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, vector<int>> mp;
        int ans = INT_MAX;
        for (int i=0; i<cards.size(); i++) {
            int card = cards[i];
            mp[card].push_back(i);
        }
        for (auto [card, indices]: mp) {
            for (int i=0; i<indices.size()-1; i++) {
                ans = min(ans, indices[i+1]-indices[i]+1);
            }
        } return ans != INT_MAX ? ans : -1;
        
        /*
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
        */
    }
};