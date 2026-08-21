class Solution {
public:

    void counter(vector<int>& nums, int target,int index,int temp,int n,int &count){
        
        if(index>=n){
            if(temp==target){
                count++;
            }
           
            return;
        }

        
        counter(nums,target,index+1,temp-nums[index],n,count);
        
        
        counter(nums,target,index+1,temp+nums[index],n,count);
        


    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int temp=0;
        int index=0;
        int count=0;
        counter(nums,target,index,temp,n,count);
        return count;
    }
};