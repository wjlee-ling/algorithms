class Solution {
public:
    bool checkIfPangram(string sentence) {
        for (int i=0; i <26; i++){
            char curr = 'a' + i;
            if (sentence.find(curr) == string::npos) return false;
        }
        return true;
        
        /*
        unordered_set<char> st;
        for (char chr:sentence){
            st.insert(chr);
        }
        if (st.size() == 26) return true;
        return false;
        */
        
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