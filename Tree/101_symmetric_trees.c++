class Solution {
public:
    bool CheckSym(TreeNode* l, TreeNode* r){
        if(l == NULL || r == NULL){
            return l == r;
        }
        if(l->val != r->val){
            return false;
        }

        return CheckSym(l->left, r->right) && CheckSym(l->right, r->left);
    }
    bool isSymmetric(TreeNode* root) {
        return root == NULL || CheckSym(root->left, root->right);
    }
};