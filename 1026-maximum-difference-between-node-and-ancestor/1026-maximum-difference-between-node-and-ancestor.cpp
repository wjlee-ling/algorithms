/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* node, int maxi, int mini){
        if (node == nullptr) {
            return maxi-mini;
        }
        maxi = max(maxi, node->val);
        mini = min(mini, node->val);
        
        int left = helper(node->left, maxi, mini);
        int right = helper(node->right, maxi, mini);
        
        return max(left, right);
    }
    
    int maxAncestorDiff(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        return helper(root, root->val, root->val);
        
    }
};