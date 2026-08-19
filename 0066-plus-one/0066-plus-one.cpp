class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int >ans;
        int n=digits.size();
        int sum=digits[n-1]+1;
        ans.push_back(sum%10);
        int carry=sum/10;
        int i=n-2;
        while(i>=0){
            int sum=digits[i]+carry;
            ans.push_back(sum%10);
            carry=sum/10;
            i--;
        }
        if(carry){
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans ;
    }
};