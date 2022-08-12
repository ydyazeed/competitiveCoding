class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* p = root;
        if(root == NULL) {
            return NULL;
        }
        
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        
        return p;
    }
};