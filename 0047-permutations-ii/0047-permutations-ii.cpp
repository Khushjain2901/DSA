class Solution {
public:
    
        
        
    void permut(vector<int>& nums,vector<vector<int> >&ans,int index,int n){
        vector<bool>visited(21,false);
        if(index==n){
            ans.push_back(nums);
            return;
        }

        for(int i=index;i<n;i++){
            if(visited[nums[i]+10]==false){
                visited[nums[i]+10]=true;
                swap(nums[i],nums[index]);
                permut(nums,ans,index+1,n);
                swap(nums[i],nums[index]);
              
                
            }
        }
    }

    
   vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int> >ans;
        int n=nums.size();
        int index=0;
        permut(nums,ans,index,n);
        return ans;
    }
};

