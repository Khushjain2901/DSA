class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini= INT_MAX;
        int maxi=INT_MIN;
        int max_index=0;
        int min_index=0;

        // if(n==1){
        //     return 1;
        // }
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                max_index=i;
                maxi=nums[i];
            }
            if(nums[i]<mini){
                min_index=i;
                mini=nums[i];
            }
        }
        int ans;
        
        // dono aage se
        
           int front= max(max_index,min_index)+1;
        
        
            int back=max((n-max_index),(n-min_index));
        
        
            int both1=min(min_index+1,(n-min_index));
            int both2=min(max_index+1,(n-max_index));
            
       
         ans=min({front,back,both1+both2});
         return ans;
    }
};