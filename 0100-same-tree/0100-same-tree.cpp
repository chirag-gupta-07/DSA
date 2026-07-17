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
    void inorderCheck(TreeNode* p,TreeNode*q,int* a){
        if(p==NULL || q==NULL){
            if(p==NULL && q==NULL){
                return;
            }else{
                *a=0;
                return;
            }
        }

        inorderCheck(p->left,q->left,a);
        if(p->val==q->val){
        }else{
            *a=0;
            return;
        }
        inorderCheck(p->right,q->right,a);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        int a=1;
        inorderCheck(p,q,&a);

        return a==1;
        
    }
};