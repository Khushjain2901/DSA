class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        int gap=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            gap=max(gap,nums[i]-nums[i-1]);
        }
        return gap;
    }
};