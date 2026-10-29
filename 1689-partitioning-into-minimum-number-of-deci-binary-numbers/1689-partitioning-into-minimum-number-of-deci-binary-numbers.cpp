class Solution {
public:
    int minPartitions(string n) {
        int maxi=INT_MIN;
        for(int i=0;i<n.size();i++){
            int num=n[i]-48;
            maxi=max(maxi,num);

        }
        return maxi;
    }
};