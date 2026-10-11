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
    void generate(TreeNode* root,int t,vector<int> &temp,vector<vector<int>>&ans){
        if(root == NULL){
            return;
        }

        if(!root->left && !root->right){
            temp.push_back(root->val);
            if(root->val == t){
                ans.push_back(temp);
            }
            temp.pop_back();
            return;
        }
        temp.push_back(root->val);
        generate(root->left,t-root->val,temp,ans);
        generate(root->right,t-root->val,temp,ans);
        temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        vector<vector<int>> ans;

        generate(root,targetSum,temp,ans);
        return ans;
    }
};