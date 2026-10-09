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

    void view(TreeNode* root,int level,vector<int> &ans){
        if(root==NULL) return;

        if(level==ans.size()){
            ans.push_back(root->val);
        }

        view(root->right,level+1,ans);
        view(root->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {

        // First method by traversing level by level
        // queue<TreeNode*>q;
        // if(root==NULL) return {};
        // q.push(root);
        // vector<int>ans;
        // TreeNode* temp;
        // while(!q.empty()){
        //     int n=q.size();
        //     ans.push_back(q.front()->val);
        //     for(int i=0;i<n;i++){
        //         temp=q.front();
        //         q.pop();

        //         if(temp->right) q.push(temp->right);
        //         if(temp->left) q.push(temp->left);

        //     }
            
        // }
        // return ans;


        // Second method by recursion

        vector<int>ans;
        int level=0;
        view(root,level,ans);
        return ans;
    }
};