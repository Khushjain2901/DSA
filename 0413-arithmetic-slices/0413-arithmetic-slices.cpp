class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int count=0;
        int curr=0;
        for(int i=0;i<n-2;i++){
        
                if(nums[i+1]-nums[i]==nums[i+2]-nums[i+1]){
                    curr++;
                    count+=curr;
                }
                else{
                    curr=0;
                }
            
        }
        return count;
    }
};