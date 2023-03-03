class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> dict;
        for (char t:text) {
            dict[t]++;
        }
        int sgl = 10001, dbl = 10001;
        unordered_set<char> vocab = {'b', 'a', 'l', 'o', 'n'};
        for (auto& v : vocab) {
            if (v == 'b' || v == 'a' || v == 'n') {
                sgl = min(sgl, dict[v]);
            } else if (v == 'l' || v == 'o') {
                dbl = min(dbl, dict[v]);
            }            
        }
        int ans = min(sgl, dbl/2);
        return ans;
        
    }
};