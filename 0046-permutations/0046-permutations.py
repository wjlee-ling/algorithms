class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        def backtrack(ls):
            if len(ls) == len(nums):
                self.ans.append(ls.copy())
                return ;
            
            for ele in nums:
                if ele not in ls:
                    ls.append(ele)
                    backtrack(ls)
                    ls.pop()
        ls = []
        self.ans = []
        backtrack(ls)
        return self.ans