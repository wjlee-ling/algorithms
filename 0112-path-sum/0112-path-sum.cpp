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
    bool hasPathSum(TreeNode* root, int targetSum, int cumSum=0) {
        if (root == nullptr) {
            return false;
        }
        cumSum += root->val;
        if (root->left == nullptr && root->right == nullptr) {
            return (cumSum == targetSum);
        }
        bool lhs = hasPathSum(root->left, targetSum, cumSum);
        bool rhs = hasPathSum(root->right, targetSum, cumSum);
        
        return (lhs || rhs);
    }
};