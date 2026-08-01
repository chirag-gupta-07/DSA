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
    int min=0;
    void preorder_in(TreeNode* root,int i,int j,unordered_map <int,vector<pair<int,int>>> &mp){
        if(root==NULL){
            return;
        }
        if(i>max) max=i;
        if(i<min) min=i;
        mp[i].push_back({j,root->val});
        preorder_in(root->left,i-1,j+1,mp);
        preorder_in(root->right,i+1,j+1,mp);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        unordered_map <int,vector<pair<int,int>>> mp;
        int i=0;
        int j=0;
        preorder_in(root,i,j,mp);
        vector <vector<int>> ans;
        for(int i=min;i<=max;i++){
            sort(mp[i].begin(),mp[i].end());
            vector<int> col;
            for(int j=0;j<mp[i].size();j++){
                col.push_back(mp[i][j].second);
            }
            ans.push_back(col);
        }
        return ans;
    }
};