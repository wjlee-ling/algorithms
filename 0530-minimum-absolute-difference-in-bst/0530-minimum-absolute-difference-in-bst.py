# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        ## 하위 왼쪽 자식의 맨 오른쪽 손자 + 오른 자시ㄱ의 맨 왼쪽 손자와 비교 
        stack = [root]
        d = float('inf')
        while stack:
            curr = stack.pop()
            if curr.left:
                stack.append(curr.left)
                temp = curr.left
                d = min(d, abs(curr.val-temp.val))
                while (temp.right):
                    temp = temp.right
                d = min(d, abs(curr.val-temp.val))
            
            if curr.right:
                stack.append(curr.right)
                temp = curr.right
                d = min(d, abs(curr.val-temp.val))
                while temp.left:
                    temp = temp.left
                d = min(d, abs(curr.val-temp.val))
                
            
        return d
            