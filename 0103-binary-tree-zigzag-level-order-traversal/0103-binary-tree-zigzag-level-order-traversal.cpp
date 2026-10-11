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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int> >ans;
        if(root==NULL) return ans;
        q.push(root);
        int count=1;
        TreeNode* temp;
        while(!q.empty()){
            int n=q.size();
            vector<int>arr;
            for(int i=0;i<n;i++){
                temp=q.front();
                q.pop();
                arr.push_back(temp->val);

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(count%2==0) reverse(arr.begin(),arr.end());
            ans.push_back(arr);
            count++;

        }
        return ans;
    }
};