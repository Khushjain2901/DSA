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

    int maxSum(TreeNode* root,int &maxi){
        if(root==NULL) return 0;

        int leftSum=maxSum(root->left,maxi);
        int rightSum=maxSum(root->right,maxi);

// to ignore the -ve sum of any path
        leftSum = max(0, leftSum);
        rightSum = max(0, rightSum);

        maxi=max(maxi,root->val+leftSum+rightSum);

        return max(leftSum,rightSum)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi=root->val;
        maxSum(root,maxi);
        return maxi;
    }
};