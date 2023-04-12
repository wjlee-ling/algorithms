# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        self.ans = 0;
        
        def dfs(node, maxi):
            if node == None:
                return ;
            
            if node.val >= maxi:
                self.ans += 1;
            
            dfs(node.left, max(maxi, node.val));
            dfs(node.right, max(maxi, node.val));
        
        dfs(root, root.val);
        
        return self.ans; 
                