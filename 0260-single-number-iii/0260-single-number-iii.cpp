class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // vector<int>ans;
        // for(auto x:nums){
        //     mp[x]++;
        // }
        // for(auto x:nums){
        //     if(mp[x]==1) ans.push_back(x);
        // }
        // return ans;


        int Xor=0;
        for(auto x:nums){
            Xor=Xor^x;
        }
        int bit=1;
        while((Xor&bit)==0){
            bit=bit<<1;
        }
        int xor1=0,xor2=0;
        for(auto x:nums){
            if((x&bit)==0){
                xor1=xor1^x;
            }
            else{
                xor2=xor2^x;
            }
        }
        return {xor1,xor2};

    }
};