# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        
        def recur(node, d): 
            if node is None:
                return 0
            
            if not node.left and not node.right:
                return d
            
            left, right = float('inf'), float('inf')
            if node.left:
                left = recur(node.left, d+1)
            if node.right:
                right = recur(node.right, d+1)
            
            min_d = min(left, right)
            
            return min_d
        
        ans = recur(root, d=1)
        
        return ans
        