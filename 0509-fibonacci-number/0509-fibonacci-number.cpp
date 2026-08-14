class Solution {
public:
    int fib(int n) {
        // if(n==0){
        //     return 0;
        // }
        // else if(n==1){
        //     return 1;
        // }
        // return fib(n-1)+fib(n-2);
        int a=0,b=1;

         if(n==0){
             return a;
         }
         else if(n==1){
             return b;
         }
         

         for(int i=2;i<=n;i++){
            int sum=a+b;
            a=b;
            b=sum;
         }
         return b;
         
    }
};