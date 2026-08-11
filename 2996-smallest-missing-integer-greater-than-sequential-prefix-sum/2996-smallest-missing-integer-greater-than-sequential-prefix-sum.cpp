class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i=1;
        int sum=nums[0];
            while(i<nums.size()){
                if(nums[i]==nums[i-1]+1){
                    sum=sum+nums[i];
                    i++;
                    
                }
                else{
                break;}
            }

            unordered_set<int>s;
           for(int x:nums){
                s.insert(x);
            }

            while(s.find(sum)!=s.end()){
                sum++;
            }
           
        return sum;    
    }
};