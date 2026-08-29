class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> ans;
        int n=nums.size();

        for(int i=0;i<n;i++){
            vector<int> arr(26,0);
            int num=nums[i];
            int j=0;
            string s="";

            while(num && j<25){
                arr[j]=num%2;
                num/=2;
                j++;
            }
            while(num){
                s+='z';
                num/=2;
            }

            for(int k=25;k>=0;k--){
                if(arr[k]){
                    s+='a'+k;
                }
            }

            ans.push_back(s);
        }

        return ans;
    }
};