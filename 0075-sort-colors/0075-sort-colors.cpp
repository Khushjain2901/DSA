class Solution {
public:
    void sortColors(vector<int>& nums) {
        // DUTCH FLAG ALGO
        int n=nums.size();
        int low=0,mid=0,high=n-1;
        int i=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }




        // OPTIMAL
        // int count0=0;
        // int count1=0;
        // int count2=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0) count0++;
        //     else if(nums[i]==1) count1++;
        //     else count2++;
            
        // }
        // int i=0;
        // while(count0){
        //     nums[i]=0;
        //     i++;
        //     count0--;
        // }
        //  while(count1){
        //     nums[i]=1;
        //     i++;
        //     count1--;
        // }
        //  while(count2){
        //     nums[i]=2;
        //     i++;
        //     count2--;
        // }
       
    }
};