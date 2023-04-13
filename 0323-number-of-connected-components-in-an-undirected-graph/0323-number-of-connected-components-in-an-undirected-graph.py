class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        def find(x):
            if parent[x] != x:
                parent[x] = find(parent[x])
            return parent[x]
            
        def union(xy):
            x, y = list(map(find, xy))
            if rank[x] < rank[y]:
                parent[x] = y
            else:
                parent[y] = x
                if rank[x] == rank[y]:
                    rank[x] += 1
        
        parent, rank = [i for i in range(n)], [0] * n
        list(map(union, edges))
        return len({find(x) for x in parent})

        
#         # iterative dfs        
#         from collections import defaultdict
#         ls = [idx for idx in range(n)]
        
#         # build dict
#         paths = defaultdict(list)
#         for x,y in edges:
#             paths[x].append(y)
#             paths[y].append(x)
        
#         # loop through and change values of ls: e.g. 3 <-> 4 (mark 4th as 3)
#         seen = set()
#         ans = 0
#         for idx in range(n):
#             stack = [idx]
#             if idx in seen:
#                 continue
#             ans += 1
#             while stack:
#                 curr = stack.pop()
#                 for ele in paths[curr]:
#                     if ele not in seen:
#                         seen.add(ele)
#                         stack.append(ele)
#         return ans