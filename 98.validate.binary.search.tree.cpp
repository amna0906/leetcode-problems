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
    bool isValidBST(TreeNode* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
    bool check(TreeNode* root, long long minvalue, long long maxvalue) {
        if (root == NULL) {
            return true;
        }
        if (root->val <= minvalue || root->val >= maxvalue) {
            return false;
        }
        return check(root->left, minvalue, root->val) &&
               check(root->right, root->val, maxvalue);
    }
};