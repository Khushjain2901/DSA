class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>less;
        vector<int>great;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }
            else if(nums[i]==pivot) count++;

            else{
                great.push_back(nums[i]);
            }
        }
        while(count){
            less.push_back(pivot);
            count--;
        }
        less.insert(less.end(),great.begin(),great.end());
        
        return less;
    }
};