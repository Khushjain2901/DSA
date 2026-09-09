// class Solution {
// public:
//     long long countCommas(long long n) {
//         long long ans=0;
//         long long start=1000;
//         int commas=1;

//         while(start<=n){
//             long long end=min(n,start*1000-1);

//             ans+=(end-start+1)*commas;

//             start*=1000;
//             commas++;
//         }

//         return ans;
//     }
// };


class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000){
            return 0;
        }
        else if(n<1000000){
            return n-999;
        }
        else if(n<1000000000LL){
            return (1000000LL-1000)*1+
                   (n-1000000LL+1)*2;
        }
        else if(n<1000000000000LL){
            return (1000000LL-1000)*1+
                   (1000000000LL-1000000LL)*2+
                   (n-1000000000LL+1)*3;
        }
        else if(n<1000000000000000LL){
            return (1000000LL-1000)*1+
                   (1000000000LL-1000000LL)*2+
                   (1000000000000LL-1000000000LL)*3+
                   (n-1000000000000LL+1)*4;
        }
        else{
            return (1000000LL-1000)*1+
                   (1000000000LL-1000000LL)*2+
                   (1000000000000LL-1000000000LL)*3+
                   (1000000000000000LL-1000000000000LL)*4+
                   (n-1000000000000000LL+1)*5;
        }
    }
};