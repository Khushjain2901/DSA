class Solution {
public:

    void subset(int n,int index,vector<vector<int>>&ans,vector<int>&temp,vector<int>nums){

        if(index>=n){
            ans.push_back(temp);
            return;
        }
        subset(n,index+1,ans,temp,nums);
        temp.push_back(nums[index]);
        subset(n,index+1,ans,temp,nums);
        temp.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        vector<vector<int> >ans;
        vector<int>temp;
        subset(n,index,ans,temp,nums);
        return ans;
    }
};