class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=0,zeros=0;
        int maxi=0;
        while(right<n){
            if(nums[right]==0){
                zeros++;
                
            }
            while(zeros>1){
                if(nums[left]==0){
                    zeros--;
                }
                left++;
            }
            
            maxi=max(maxi,right-left);
            right++;
        }
        return maxi;
    }
};