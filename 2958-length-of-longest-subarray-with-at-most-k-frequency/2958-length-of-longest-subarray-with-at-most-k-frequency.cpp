class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        

        int first=0,second=0;
        int count=0;
        while(second<nums.size()){
            
            freq[nums[second]]++;

            while(freq[nums[second]]>k){
                 freq[nums[first]]--;
                 first++;
            }
            count=max(count,second-first+1);
            second++;

        }

        return count;
    }
};