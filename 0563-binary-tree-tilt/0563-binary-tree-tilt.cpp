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
    int tilt(TreeNode* root){
        if(!root) return 0;
        int ls = tilt(root->left);
        int rs = tilt(root->right);
        int temp = root->val;
        root->val = abs(ls-rs);
        return temp + ls + rs; 
    }

    int Sum(TreeNode* root){
        if(!root) return 0;
        return root->val + Sum(root->left) + Sum(root->right);
    }

    int findTilt(TreeNode* root) {
        tilt(root);
        return Sum(root);
    }
};