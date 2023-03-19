class Solution {
public:
    pair<bool, int> makePairfast( TreeNode* root){
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<bool, int> theRight = makePairfast(root->right);
        pair<bool, int> theLeft = makePairfast(root->left);
        bool diff = abs(theRight.second- theLeft.second) <= 1;

        int height = max(theRight.second, theLeft.second) + 1;
        pair<bool , int>ans;
        if(theRight.first && theLeft.first && diff){
            ans.first = true;
            ans.second= height;
        }
        else{
            ans.first = false;
            ans.second= height;
        }

        return ans;

    }
    bool isBalanced(TreeNode* root) {
        return makePairfast(root).first;
    }
};