class Solution:
    def nearestExit(self, maze: List[List[str]], entrance: List[int]) -> int:
        m,n = len(maze), len(maze[0])
        
        def valid(x,y):
            if x <0 or y <0 or x >= m or y>=n:
                return False
            if maze[x][y] == "+":
                # wall
                return False
            return True
        
        def exit(x,y):
            if maze[x][y] == ".":
                if x == 0 or y == 0 or x == m-1 or y == n-1:
                    # edge
                    return True
            return False
        
        from collections import deque
        queue = deque()
        queue.append((entrance[0], entrance[1], 0))
        seen = set(set(entrance))
        moves = [(0,1),(1,0),(-1,0),(0,-1)]
        step = 0
        while queue:
            cx, cy, step = queue.popleft()
            for dx,dy in moves:
                nx,ny = cx+dx, cy+dy
                if valid(nx,ny) and exit(nx,ny) and [nx,ny] !=entrance:
                    return step+1
                
                elif valid(nx,ny) and (nx,ny) not in seen:
                    # no wall
                    seen.add((nx,ny))
                    queue.append((nx,ny,step+1))                
        return -1
        