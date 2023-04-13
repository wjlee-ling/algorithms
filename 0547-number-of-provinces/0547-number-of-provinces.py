class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        from collections import defaultdict
        edges = defaultdict(set)
        N = len(isConnected)
        for i in range(N):
            for j in range(i+1, N):
                if isConnected[i][j] == 1:
                    edges[i].add(j)
                    edges[j].add(i)
        
        seen = set()
        count = 0
        
        for i in range(N):
            if i in seen:
                continue
            count += 1
            stack = [i]
            while stack:
                curr = stack.pop()
                seen.add(curr)
                for _next in edges[curr]:
                    if _next not in seen:
                        stack.append(_next)
            
        return count