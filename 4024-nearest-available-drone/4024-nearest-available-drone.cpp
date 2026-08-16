class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mini=INT_MAX,index=-1;
        for(int i=0;i<drones.size();i++){
            int store=abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(store <=drones[i][2]){
                if(store<mini){
                    mini=store;
                    index=i;
                }
            }
        }
                
        return  index;
    }
};