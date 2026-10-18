class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int index=i+1;
            int c=123-s[i];
            sum+=c*index;
        }
        return sum;
    }
};