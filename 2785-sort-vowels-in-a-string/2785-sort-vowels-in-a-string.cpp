class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        string t;

        for(int i=0;i<s.size();i++){
            if(s[i]>='a'){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    lower[s[i]-'a']++;
                    s[i]='#';
                }
            }
            else{
                if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                    upper[s[i]-'A']++;
                    s[i]='#';
                }
            }}

            string vowel;
        // Inserting Capital letters
            for(int i=0;i<upper.size();i++){
                while(upper[i]){
                    vowel.push_back('A'+i);
                    upper[i]--;
                }
            }
            // Inserting lowercase letters

             for(int i=0;i<lower.size();i++){
                while(lower[i]){
                    vowel.push_back('a'+i);
                    lower[i]--;
                }
            }

            int first=0,second=0;

            while(first<s.size()){
                if(s[first]=='#'){
                    s[first]=vowel[second];
                    second++;
                }
                first++;
            }
            
            return s;

        }



    
};