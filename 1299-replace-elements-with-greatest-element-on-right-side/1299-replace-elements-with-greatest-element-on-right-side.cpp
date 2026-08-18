class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=INT_MIN;
        vector<int>ans(n);
        for(int i=n-1;i>0;i--){
            maxi=max(maxi,arr[i]);
            ans[i-1]=maxi;
        }
        ans[n-1]=-1;
        return ans;
    }
};