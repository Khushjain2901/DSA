class Solution {
public:

    void sort(string &s){
        int n=s.size();
        string ans;
        vector<int>alpha(26,0);
        
        for(int i=0;i<n;i++){
            alpha[s[i]-'a']++;
        }
        
        for(int i =0;i<26;i++){
            while(alpha[i]){
            char c='a'+i;
            ans+=c;
            alpha[i]--;}
        }
        s=ans;
    }

    bool isAnagram(string s, string t) {
        
        sort(s);
        sort(t);
        if(s==t){
            return true;
        }
        else{
            return false;
        }
    }
};