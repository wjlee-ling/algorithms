class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        self.ans = []
        def backtrack(curr, i):
            if i > len(nums) :
                return 
            
            self.ans.append(curr[:])
            for j in range(i, len(nums)):
                curr.append(nums[j])
                backtrack(curr, j+1)
                curr.pop()
            
            
        backtrack([], 0)
        return self.ans