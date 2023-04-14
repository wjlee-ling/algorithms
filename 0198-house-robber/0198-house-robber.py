class Solution:
    def rob(self, nums: List[int]) -> int:
        from collections import defaultdict
        d = defaultdict(int)
        
        def dp(idx):
            if idx < 0:
                return 0
            
            if idx-2 not in d:
                dp(idx-2)
            
            if idx-1 not in d:
                dp(idx-1)
            
            d[idx] = max(d[idx-2] + nums[idx], d[idx-1])
            return d[idx]
        
        return dp(len(nums)-1)