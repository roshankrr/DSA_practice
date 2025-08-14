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

    TreeNode* solve(int inS,int inE, int preS, int preE,vector<int>& preorder, vector<int>& inorder,unordered_map<int,int>&mp ){
        if(preS>preE or inS>inE)return NULL;
        TreeNode* root=new TreeNode(preorder[preS]);
        int idx=mp[root->val];
        int left=idx-inS;
        root->left=solve(inS,idx-1,preS+1,preS+left,preorder,inorder,mp);
        root->right=solve(idx+1,inE,preS+left+1,preE,preorder,inorder,mp);
        return root;
    }


    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
        return solve(0,n-1,0,n-1,preorder,inorder,mp);
    }
};