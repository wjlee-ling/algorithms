# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxAncestorDiff(self, root: Optional[TreeNode]) -> int:
        
        def recur(node, cur_max, cur_min):
            # leaf node
            if not node:
                return cur_max - cur_min
            
            cur_max = max(cur_max, node.val)
            cur_min = min(cur_min, node.val)
            
            left = recur(node.left, cur_max, cur_min)
            right = recur(node.right, cur_max, cur_min)
        
            return max(left, right)
        
        return recur(root, root.val, root.val)
        