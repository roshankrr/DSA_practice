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
    bool ans=true;
    int DFS(TreeNode* root,int depth){
        if(root==NULL)return depth;
        int left=DFS(root->left,depth+1);
        int right=DFS(root->right,depth+1);
        if(abs(left-right)>1)ans=false;
        return max(left,right);
    }

    bool isBalanced(TreeNode* root) {
        DFS(root,0);
        return ans;
    }
};