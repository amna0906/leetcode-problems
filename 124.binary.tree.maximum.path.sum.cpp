/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxsum;
    int sum(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int l = sum(root->left);
        int r = sum(root->right);
        int a = l + r + root->val;
        int b = max(l, r) + root->val;
        int c = root->val;
        maxsum = max(maxsum, max(max(a, b), c));
        return max(b, c);
    }
    int maxPathSum(TreeNode* root) {
        maxsum = INT_MIN;
        sum(root);
        return maxsum;
    }
};