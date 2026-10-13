class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int a1=0;
        int a2=0;
        int n=gas.size();
        int x=0;
        int ans=0;
        for(int i=0;i<n;i++){
            a1+=gas[i];
            a2+=cost[i];
            x+=(gas[i]-cost[i]);
            if(x<0){
                ans=i+1;
                x=0;
            }
        }
        return a1<a2 ? -1 : ans;
    }
};