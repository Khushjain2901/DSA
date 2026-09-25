class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int k=sum-x;
        if (k < 0) return -1;
        if (k == 0) return n;
        int start=0,end=0;
        int total=0,l=0;
       while(end<n){
            total+=nums[end];
            while (total>k) {
                total-=nums[start];
                start++;
            }
            if (total==k) {
                l=max(l,end-start+1);
            }
            end++;
        }
        if(l==0) return -1;
        return n-l;
    }
};