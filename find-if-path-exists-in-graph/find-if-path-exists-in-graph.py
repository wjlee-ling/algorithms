class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        from collections import defaultdict
        paths = defaultdict(list)
        if source == destination: return True;
        for (x,y) in edges:
            paths[x].append(y)
            paths[y].append(x)
        stack = [source]
        seen = set()
        while stack:
            curr = stack.pop()
            for ele in paths[curr]:
                if ele == destination:
                    return True;
                if ele not in seen:
                    stack.append(ele)
            seen.add(curr)
        
        return False