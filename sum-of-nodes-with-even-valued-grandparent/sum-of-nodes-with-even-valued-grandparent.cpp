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
    int sumEvenGrandparent(TreeNode* root) {
        return (root==NULL? 0:(sumEvenGrandparent(root->left)+sumEvenGrandparent(root->right)+(root->val&1?0:((root->left&&root->left->left?root->left->left->val:0)+(root->left&&root->left->right?root->left->right->val:0)+(root->right&&root->right->left?root->right->left->val:0)+(root->right&&root->right->right?root->right->right->val:0)))));
    }
};