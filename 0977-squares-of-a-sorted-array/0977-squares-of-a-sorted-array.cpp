class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        vector<int>ans(n);
        
        while(left<=right){
            if((nums[left]*nums[left])>(nums[right]*nums[right])){
                ans[right-left]=nums[left]*nums[left];
                left++;
            }
            else{
                ans[right-left]=nums[right]*nums[right];
                right--;
            }
            
        }
        return ans;
    }
};