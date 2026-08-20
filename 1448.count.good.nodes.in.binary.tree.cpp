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
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
int dfs(TreeNode* root, int maxroot){
    if(root==NULL){
    return 0;}
    int count=0;
    if(root->val >=maxroot){
    count=1;}
    maxroot=max(root->val,maxroot);
    count=count+dfs(root->left,maxroot);
    count=count+dfs(root->right,maxroot);
    return count;
}
};