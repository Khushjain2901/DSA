class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>solve;
        int fre=0,ans=0;
        int fre1=0,ans1=0;
        for(int i=0;i<n;i++){

            if(ans==nums[i]){
                fre++;
            }
            else if(ans1==nums[i]){
                fre1++;
                }

            else if(fre==0){
                ans=nums[i];
                fre=1;
            }

            else if(fre1==0){
                ans1=nums[i];
                fre1=1;
            }
            else{
                fre--;
                fre1--;
            }
        }
        int count=0,count1=0;

        for(int i=0;i<n;i++){
            if(nums[i]==ans){
                count++;
            }
            if(nums[i]==ans1){
                count1++;
            }
        }

        if(count>floor(n/3)){
            solve.push_back(ans);
        }
        
        if(ans!=ans1&&count1>floor(n/3))
        solve.push_back(ans1);

        return solve;

    }
};