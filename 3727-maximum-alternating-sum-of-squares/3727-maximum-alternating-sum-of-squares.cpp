class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            arr.push_back(abs(nums[i]));
            
        }
    
        sort(arr.begin(),arr.end());

        long long ans=0;
        int i=0;
        int j=n-1;
        int ind=0;
        while(ind<n){
            if(ind%2==0){
                ans+=pow(arr[j],2);
                j--;
            }
            else{
                ans-=pow(arr[i],2);
                i++;
            }
            ind++;
        }
        return ans ;
    }
};