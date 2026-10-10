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
    unordered_map<int,int> mp;
    int idx = 0;

    TreeNode* build(vector<int>& postorder,int st,int end){
        if(st>end){
            return NULL;
        }

        int val = postorder[idx--];
        TreeNode* root = new TreeNode(val);
        int mid = mp[val];

        root->right = build(postorder,mid+1,end);
        root->left = build(postorder,st,mid-1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        idx = postorder.size()-1;
        for(int i=0;i<idx+1;i++){
            mp[inorder[i]] = i;
        }

        return build(postorder,0,postorder.size()-1);


    }
};