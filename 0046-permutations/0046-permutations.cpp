class Solution {
public:
    void permut(vector<int>& nums,vector<vector<int> >&ans,vector<int>&temp,vector<bool>&visited,int n){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }

        for(int i=0;i<visited.size();i++){
            if(visited[i]==0){
                visited[i]=1;
                temp.push_back(nums[i]);
                permut(nums,ans,temp,visited,n);
                visited[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> >ans;
        int n=nums.size();
        vector<int>temp;
        vector<bool>visited(n,0);
        permut(nums,ans,temp,visited,n);
        return ans;
    }
};