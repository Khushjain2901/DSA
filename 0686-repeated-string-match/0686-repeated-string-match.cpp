class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp="";
        int count=0;
        while(b.length()>temp.length()){
            temp+=a;
            count++;
        }
        if(temp.contains(b)){
            return count;
        }

        temp+=a;
        count++;
        if(temp.contains(b)){
            return count;
        }

    return -1;
    }
};