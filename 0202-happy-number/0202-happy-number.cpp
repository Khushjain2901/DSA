class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(true){
            int num=0;
            while(n){
                num+=(n%10)*(n%10);
                n=n/10;
            }
            if(num==1){
                return true;
            }
            else if(s.count(num)==1){
                return false;
            }
            else{
                s.insert(num);
                n=num;
            }
            
        }
        return false;
    }
};