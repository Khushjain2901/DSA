class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>a;
        stack<char>b;
        for(int i=0;i<s.length();i++){
            if(a.empty()){
                if(s[i]=='#'){
                    continue;
                }
                else{
                    a.push(s[i]);
                }
            }
            else{
                if(s[i]=='#'){
                    a.pop();
                }
                else{
                    a.push(s[i]);
                }
            }

        }
        for(int i=0;i<t.length();i++){
            if(b.empty()){
                if(t[i]=='#'){
                    continue;
                }
                else{
                    b.push(t[i]);
                }
            }
            else{
                if(t[i]=='#'){
                    b.pop();
                }
                else{
                    b.push(t[i]);
                }
            }

        }
        string str1,str2;
        while(!a.empty()){
            str1+=a.top();
            a.pop();
        }
        while(!b.empty()){
            str2+=b.top();
            b.pop();
        }

        if(str1==str2){
            return true;
        }
        else{
            return false;
        }


    }
};