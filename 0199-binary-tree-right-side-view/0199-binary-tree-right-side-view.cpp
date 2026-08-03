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
    int max=0;
    void preorder_in(TreeNode* root,int j,unordered_map <int,int> &mp){
        if(root==NULL){
            return;
        }
        if(j>max) max=j;
        if(!mp.count(j)){
            mp[j] = root->val;
        }
        preorder_in(root->right,j+1,mp);
        preorder_in(root->left,j+1,mp);
    }

    vector<int> rightSideView(TreeNode* root) {
        unordered_map <int,int> mp;
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        preorder_in(root,0,mp);
        for(int i=0;i<=max;i++){
            ans.push_back(mp[i]);
        }

        return ans;
    }
};