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
    // int maxi=0;
    // int findHeight(TreeNode* root){
    //     if(root==NULL) return 0;

    //     int l=findHeight(root->left);
    //     int r=findHeight(root->right);

    //     return 1+max(l,r);
    // }

    int findHeight(TreeNode* root,int &diameter){
        if(root==NULL) return 0;

        int l=findHeight(root->left,diameter);
        int r=findHeight(root->right,diameter);
        diameter=max(diameter,l+r);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // if(root==NULL) return 0;

        // int lh=findHeight(root->left);
        // int rh=findHeight(root->right);

        // maxi=max(maxi,lh+rh);

        // diameterOfBinaryTree(root->left);
        // diameterOfBinaryTree(root->right);
        //  return maxi;

        int diameter=0;
        findHeight(root,diameter);
        return diameter;

    }
};