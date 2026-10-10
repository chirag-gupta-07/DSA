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
    TreeNode *build(vector<int> &preorder,int st,int end,unordered_map<int,int>&mp,int &i){
        if(st > end){
            return NULL;
        }
        int val = preorder[i++];
        TreeNode *root = new TreeNode(val);
        int mid = mp[val];

        root->left = build(preorder,st,mid-1,mp,i);
        root->right = build(preorder,mid+1,end,mp,i);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<preorder.size();i++){
            mp[inorder[i]] = i;
        }
        int i=0;

        return build(preorder,0,inorder.size()-1,mp,i);
       
    }
};