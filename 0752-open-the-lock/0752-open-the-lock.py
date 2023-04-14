class Solution:
    def openLock(self, deadends: List[str], target: str) -> int:
        from collections import deque
        num = "0000"
        q = deque([(num, 0)])
        seen = set(num)
        if "0000" in deadends:
             return -1
        if "0000" == target:
            return 0
            
        while q:
            num, step = q.popleft()
            for pos in range(4):
                for dx in [1,-1]:
                    old = num[pos]
                    new = int(old) + dx
                    if new == -1:
                        new = "9"
                    elif new == 10:
                        new = "0"
                    else:
                        new = str(new)
                    new_num = num[:pos] + new + num[pos+1:]
                    if new_num == target:
                        return step+1
                    
                    if new_num not in seen and new_num not in deadends:
                        seen.add(new_num)
                        q.append((new_num, step+1))
        
        return -1