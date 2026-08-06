class Solution {
public:
    string sortSentence(string s) {
        vector<string>str(10);
        string temp;

        for(int i=0;i<=s.size();i++){
            if(s[i]==' '||i==s.size()){
                int index=temp.back()-'0';
                temp.pop_back();
                str[index]=temp;
                temp.clear();
            }
            else{
                temp+=s[i];
            }
        }
        string ans;
        for(int i=1;i<10;i++){
           if (str[i].empty()) continue;
            if (!ans.empty()) ans += " ";
            ans += str[i];
        }
        return ans;

    }
};