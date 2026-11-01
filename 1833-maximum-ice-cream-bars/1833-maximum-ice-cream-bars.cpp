class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            int rem=coins-costs[i];
            if(rem>=0){
                count++;
                coins=rem;
            }
            else return count;
        }
        return count;
    }
};