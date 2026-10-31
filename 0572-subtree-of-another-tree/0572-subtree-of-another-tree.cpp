class Solution {
public:
    bool Same(TreeNode* root, TreeNode* subroot) {
        if (!root && !subroot) return true;
        if (!root || !subroot) return false;

        if (root->val != subroot->val) return false;

        return Same(root->left, subroot->left) &&
               Same(root->right, subroot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!subRoot) return true;
        if (!root) return false;

        if (Same(root, subRoot)) return true;

        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};