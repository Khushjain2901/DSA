class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(int i=0;i<text.size();i++){
         if(text[i]=='b') mp['b']++;
         else if(text[i]=='a') mp['a']++;
         else if(text[i]=='l') mp['l']++;
         else if(text[i]=='o') mp['o']++;
         else if(text[i]=='n') mp['n']++;
        }

        int ans=min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});
        return ans;
    }
};