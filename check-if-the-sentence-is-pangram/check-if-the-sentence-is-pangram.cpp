class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> st;
        for (char chr:sentence){
            st.insert(chr);
        }
        if (st.size() == 26) return true;
        return false;
        
        /*
        unordered_map<char,bool> mp;
        for (char chr:sentence) {
            mp[chr] = true;
        }
        if (mp.size() == 26) return true;
        return false;
        */
    }
};