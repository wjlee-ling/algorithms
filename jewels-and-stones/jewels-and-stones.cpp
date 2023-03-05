class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> counts;
        for (char stone:stones) {
            counts[stone]++;
        }
        int ans=0;
        for (char jewel:jewels){
            ans += counts[jewel];
        } return ans;
    }
};