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
    bool ans=true;
public:
    void DFS(TreeNode* p, TreeNode* q){
        if(p==NULL and q==NULL) return;
        if((p==NULL and q!=NULL) ||(p!=NULL and q==NULL) || (p->val!=q->val)){
            ans=false;
            return;
        }
        DFS(p->left,q->left);
        DFS(p->right,q->right);
        return;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        DFS(p,q);
        return ans;
    }
};