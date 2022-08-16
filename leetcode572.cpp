class Solution {
public:
    bool isSame(TreeNode* r, TreeNode* s) {
        if(r == NULL && s == NULL)
            return true;
        if(r != NULL and s != NULL and r->val == s->val)
            return (isSame(r->left,s->left) && isSame(r->right,s->right));
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == NULL)
            return true;
        if(root == NULL)
            return false;
        if(isSame(root, subRoot))
            return true;
        
        return (isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot));
    }
};