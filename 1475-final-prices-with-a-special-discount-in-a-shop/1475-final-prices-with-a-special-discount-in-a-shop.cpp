class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
       
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&prices[st.top()]>=prices[i]){
                int index=st.top();
                prices[index]=prices[index]-prices[i];
                st.pop();
            }
            st.push(i);

        }
        return prices;
    }
};