class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        ans = 0
        turned = list(map(list, zip(*grid))) # turned 90 degree
        for col in turned:
            if col in grid:
                ans += grid.count(col)
       
        return ans

        