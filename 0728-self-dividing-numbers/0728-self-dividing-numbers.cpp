class Solution {
public:
    bool check(string s,int num){
        
        for(int i=0;i<s.size();i++){
            int n=s[i]-48;
            if(n==0) return false;
            if(n!=0&&num%n!=0) return false;
        }
        
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            string s=to_string(i);
            if(check(s,i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};