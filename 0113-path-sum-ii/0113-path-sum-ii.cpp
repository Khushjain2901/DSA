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
    void target(TreeNode* root, int targetSum,int sum,vector<vector<int> > &ans,vector<int>arr){
        if(root==NULL) return;

        arr.push_back(root->val);
        sum+=root->val;

        if(root->left==NULL&&root->right==NULL){
                if(sum==targetSum){
                ans.push_back(arr);
                return;
             }
        }
         
        target(root->left,targetSum,sum,ans,arr);
        target(root->right,targetSum,sum,ans,arr);
        

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        int sum=0;
        vector<vector<int> >ans;
        vector<int>arr;
        target(root,targetSum,sum,ans,arr);
        return ans;
    }
};