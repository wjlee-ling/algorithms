class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        from collections import defaultdict
        ls = [idx for idx in range(n)]
        
        # build dict
        paths = defaultdict(list)
        for x,y in edges:
            paths[x].append(y)
            paths[y].append(x)
        
        # loop through and change values of ls: e.g. 3 <-> 4 (mark 4th as 3)
        seen = set()
        ans = 0
        for idx in range(n):
            stack = [idx]
            if idx in seen:
                continue
            ans += 1
            while stack:
                curr = stack.pop()
                for ele in paths[curr]:
                    if ele not in seen:
                        seen.add(ele)
                        stack.append(ele)
        return ans