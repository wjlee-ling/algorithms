class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        n = len(cost)
        
        def cal_min(idx):
            if idx <=1:
                return 0
            
            if idx in memo:
                return memo[idx]
            
            memo[idx] =  min(cal_min(idx-2)+cost[idx-2], cal_min(idx-1) +cost[idx-1])
            return memo[idx]
        
        memo = {}
        return cal_min(n) # on top        