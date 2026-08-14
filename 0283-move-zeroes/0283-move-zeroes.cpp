class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        int end=0;
        while(start<nums.size()){
            if(nums[start]!=0){
                swap(nums[start],nums[end]);
                end++;          
                  }
             start++;
        }
        
    }
};