class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        int n=nums2.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums2[i]>nums2[st.top()]){
                ans[st.top()]=nums2[i];
                st.pop();
                }
            st.push(i);
        }

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[nums2[i]]=i;
        }

        for(int i=0;i<nums1.size();i++){
            int index=mp[nums1[i]];
            nums1[i]=ans[index];
        }
        return nums1;
        
    }
};