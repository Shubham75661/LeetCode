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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> que;
        int max_lv = 0;
        que.push(root);

        while(!que.empty()){
            max_lv = 0;
            int size = que.size();
            for(int i = 0; i<size; i++){
                TreeNode* cur = que.front();
                max_lv += cur->val;
                que.pop();

                if(cur->left!=NULL){
                    que.push(cur->left);
                }

                if(cur->right!=NULL){
                    que.push(cur->right);
                }
            }
        }
        return max_lv;
    }
};