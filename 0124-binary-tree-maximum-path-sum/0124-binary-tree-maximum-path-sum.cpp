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
    int mx = INT_MIN;
    int maxPathSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        maxSum(root);
        return mx;
        
    }

    int maxSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int lsum = maxSum(root->left);
        int rsum = maxSum(root->right);

        mx = max(max(max(mx,root->val+lsum+rsum),root->val+max(lsum,rsum)),root->val);
        return max(root->val + max(lsum,rsum),root->val);
    }
};