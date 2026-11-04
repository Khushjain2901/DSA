class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int x:nums){
            maxi=max(x,maxi);
        }
        int ans=0;
        for(int x:nums){
            ans+=(maxi-x);
        }
        return ans;

    }
};