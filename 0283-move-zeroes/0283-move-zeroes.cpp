class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, count=0;
        while (i < nums.size()){
            if (nums[i] == 0) {
                nums.erase(nums.begin()+i);
                count++;
            } else {
                i++;
            }
        }
        while (count > 0) {
            nums.push_back(0);
            count--;
        }
    }
};
/* solution
class Solution {
public:
    void moveZeros(vector<int>& nums) {
    int lastNonZeroFoundAt = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];    
        }
    }
    for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
        nums[i] = 0;
    }
    }
}
*/
