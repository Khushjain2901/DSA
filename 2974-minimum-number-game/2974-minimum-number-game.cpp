class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int odd=1;
        int even=0;
        // while(odd<nums.size()&&even<nums.size()){
        //     ans.push_back(nums[odd]);
        //     ans.push_back(nums[even]);

        //     odd+=2;
        //     even+=2;
        // }
        for(int i=1;i<nums.size();i+=2){
            ans.push_back(nums[i]);
            ans.push_back(nums[i-1]);
        }

        return ans;
    }
};