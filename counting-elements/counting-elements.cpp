class Solution {
public:
    int countElements(vector<int>& arr) {
        int cnt = 0;
        unordered_set<int> set;
        for (int num: arr) {
            set.insert(num);
        }
        for (int i=0; i < arr.size(); i++) {
            int curr = arr[i];
            if (set.find(curr+1) != set.end()) cnt++;
        }
        return cnt;
    }
};