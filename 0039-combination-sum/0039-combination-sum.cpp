class Solution {
public:

    void combination(vector<int>& candidates,vector<vector<int> >& ans, int target,int index,vector<int>&temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(index==candidates.size()||target<0){
            return;
        }
        temp.push_back(candidates[index]);
        combination(candidates,ans,target-candidates[index],index,temp);
        temp.pop_back();
        combination(candidates,ans,target,index+1,temp);
        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int> >ans;
        vector<int>temp;
        int index=0;
        combination(candidates,ans,target,index,temp);
        return ans;
    }
};