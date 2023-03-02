class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        counts[0] = 1;
        int cumsum = 0, ans = 0;
        
        for (int num: nums) {
            cumsum += num; 
            ans += counts[cumsum-k]; 
            // +=1 이 아닌 이유:
            // cumsum이 겹친다는 것은 중간에 상쇄시키는 음수값(들)이 있다는 뜻
            // 이전에 동일한 cumsum-k을 가졌던 인덱스들 만큼의 경우의 수
            counts[cumsum]++; // counts에 없는 key는 자동으로 0의 value 
        } return ans;

    }
};