class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=arr[n-1];
        int val;
        for(int i=n-2;i>=0;i--){
            val=maxi;
            maxi=max(maxi,arr[i]);
            arr[i]=val;
        }
        arr[n-1]=-1;
        return arr;
    }
};