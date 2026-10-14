class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(m<n) return false;
        vector<int>a(26,0),b(26,0); 

        for(char c:s1){
           a[(c-'a')]++;
        }

        for(int i=0;i<n;i++){
            b[s2[i]-'a']++;
        }
        if(a==b) return true;

        for(int i=n;i<m;i++){
            b[s2[i-n]-'a']--;
            b[s2[i]-'a']++;

            if(a==b) return true;
        }

        return false;
        
    }
};