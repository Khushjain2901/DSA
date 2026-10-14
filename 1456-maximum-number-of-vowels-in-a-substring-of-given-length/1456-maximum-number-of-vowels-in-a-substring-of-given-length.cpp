class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int count=0;
        int ans=0;
        if(n<k) return 0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])) count++;
        }
        ans=max(ans,count);

        for(int i=k;i<n;i++){
            if(isVowel(s[i])) count++;
            if(isVowel(s[i-k]) && count>0 ) count--;

            ans=max(ans,count);
        }
        return ans;
    }
};