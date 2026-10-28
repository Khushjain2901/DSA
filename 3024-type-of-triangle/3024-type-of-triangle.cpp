class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a=nums[0],b=nums[1],c=nums[2];
        if((a+b>c)&&(a+c>b)&&(c+b>a)){
            if(a!=b&&b!=c&&c!=a){
                return "scalene";
            }
            else if(a==b&&b==c&&c==a){
                return "equilateral";
            }
            else if((a==b&&b!=c)||(b==c&&c!=a)||(a==c&&c!=b)){
                return "isosceles";
            }
        }
        return "none";
    }
};