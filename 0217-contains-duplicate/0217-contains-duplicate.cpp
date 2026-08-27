class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it:mp){
        //     if(it.second>=2){
        //         return true;
        //     }
        // }
        

        if(nums.size()<2) return 0;
        
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return true;
            }
        }
             return false;
    }
};