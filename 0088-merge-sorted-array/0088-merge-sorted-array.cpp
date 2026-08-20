class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int s1=0,s2=0,s3=0;
        // int l=min(n,m);
        // while(s1<n&&s2<m){
        //     if()
        // }

        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
        sort(nums1.begin(),nums1.end());
        
    }
};