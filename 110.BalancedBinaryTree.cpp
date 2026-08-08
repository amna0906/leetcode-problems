class Solution {
public:

    int height(TreeNode* root) {

        if (root == NULL) {
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if (abs(leftHeight - rightHeight) > 1) {
            return -1;
        }

        if (leftHeight == -1 || rightHeight == -1) {
            return -1;
        }

        return max(leftHeight, rightHeight) + 1;
    }

    bool isBalanced(TreeNode* root) {

        return height(root) != -1;
    }
};