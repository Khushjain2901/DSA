class Solution {
public:
    int Rectangle(vector<int>&nums){
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
    }


    int maximalRectangle(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int cols=matrix[0].size();
        vector<int>arr(cols,0);
        int ans=INT_MIN;
        for(int i=0;i<row;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]=='0'){
                    arr[j]=0;
                }
                else {
                    arr[j]+=1;
                }
            }
            ans=max(ans,Rectangle(arr));
        }
        return ans;

    }
};