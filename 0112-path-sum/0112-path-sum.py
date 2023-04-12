# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if root == None:
            return False
        
        stack = [root]
        while stack:
            curr = stack.pop()
            
            if curr.left:
                curr.left.val += curr.val
                stack.append(curr.left)
            if curr.right:
                curr.right.val += curr.val
                stack.append(curr.right)
                
            if not curr.left and not curr.right and curr.val == targetSum:
                return True
        
        return False