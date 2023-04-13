# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        
        def search(node, cumsum):
            if node is None:
                return cumsum
            
            if node.val > high:
                return search(node.left, cumsum)
            
            elif node.val < low:
                return search(node.right, cumsum)
            
            left = search(node.left, cumsum)
            right = search(node.right, cumsum)
            
            return left+right+node.val # count the curr node
    
        return search(root, 0)