class Solution {
public:
    bool isValid(string str) {
       stack<char>st;
       for(int i=0;i<str.length();i++){
        if(st.empty()){
            st.push(str[i]);
        }
        else{
            if(str[i]=='('||str[i]=='['||str[i]=='{'){
                st.push(str[i]);
            }
            else if((st.top()=='('&&str[i]==')')||(st.top()=='['&&str[i]==']')||(st.top()=='{'&&str[i]=='}')){
                st.pop();
            }
            else{
                return false;
            }
        }
       }
       return st.empty();
  }
    };