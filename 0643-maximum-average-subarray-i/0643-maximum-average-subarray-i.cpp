class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        double ans=-1e9;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double val=(double)sum/k;
        ans=max(ans,val);
        for(int i=k;i<n;i++){
            sum-=nums[i-k];
            sum+=nums[i];
            val=(double)sum/k;
            ans=max(val,ans);
        }
        return ans;
    }
};