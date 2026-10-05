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

    void target(TreeNode* root,int &targetSum,int sum,int &flag){
        if(root==NULL||flag==1) return;

        sum+=root->val;

        if(root->left==NULL&&root->right==NULL){
          if(sum==targetSum){
            flag=1;
            return ;
            }
        }
        target(root->left,targetSum,sum,flag);
        target(root->right,targetSum,sum,flag);
       
      
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0,flag=0;
        target(root,targetSum,sum,flag);
        return flag;
        
    }
};