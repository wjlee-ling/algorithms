class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1 ;
        vector<int> indices;

        while (left < right) {
            int curr = numbers[left] + numbers[right];
            if (curr == target) {
                indices.push_back(left+1);
                indices.push_back(right+1);
                break;
            } 
            if (curr < target) {
                left ++;
            } else {
                right --;
            }
        }
        return indices;
    }
};