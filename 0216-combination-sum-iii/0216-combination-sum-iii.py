from itertools import combinations

class Solution:
    
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        combns = combinations(list(range(1,10)), k)
        return [combn for combn in combns if sum(combn) == n] 