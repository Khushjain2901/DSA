class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {

        int n=nums.size();
        stack<int>st;
        int maxi=INT_MIN;
        int ans;
        for(int i=0;i<n;i++){
             if(st.empty()){
                ans=nums[i]*i;
                maxi=max(ans,maxi);
            }
            while(!st.empty()&&nums[st.top()]>nums[i]){
                int index=st.top();
                st.pop();
                if(!st.empty()){
                    ans=nums[index]*(i-st.top()-1);
                    maxi=max(maxi,ans);
                }
                else{
                    maxi=max(maxi,nums[index]*i);
                }
                
            }
            st.push(i);

        }
        while(!st.empty()){
            int index=st.top();
            st.pop();
            if(!st.empty()){
                ans=nums[index]*(n-st.top()-1);
                maxi=max(maxi,ans);
            }
            else{
                maxi=max(maxi,nums[index]*n);
            }
        }

        return maxi;



    //     int n=nums.size();
    //     stack<int>st1;
    //     stack<int>st2;
    //     vector<int>next(n,n);
    //     vector<int>prev(n,-1);

    //     // next smallest ke liye

    //     for(int i=0;i<n;i++){
    //         while(!st1.empty()&&nums[st1.top()]>nums[i]){
    //             next[st1.top()]=i;
    //             st1.pop();
    //         }
    //         st1.push(i);
    //     }


    //     // prev small ke liye


    //      for(int i=n-1;i>=0;i--){
    //         while(!st2.empty()&&nums[st2.top()]>nums[i]){
    //             prev[st2.top()]=i;
    //             st2.pop();
    //         }
    //         st2.push(i);
    //     }

    //    int maxi=INT_MIN;

    //    for(int i=0;i<n;i++){
    //     // int ans=(nums[i]*(next[i]-i))+nums[i]*(i-prev[i]-1);
    //     int ans=nums[i]*(next[i]-prev[i]-1);
    //     maxi=max(ans,maxi);
    //    }
    //    return maxi;

    }
  
};