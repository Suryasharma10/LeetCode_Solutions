class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        int middle=0; 
        int n =nums.size();
        if(n==1){
            return 0;
        }
        for(int i=0;i<n;){
            middle=0;
            for(int j=i+1;j<n;j++){
                middle+=nums[j];
            }
            if(sum==middle){
                return i;
            }
            i++;
            sum+=nums[i-1];
        }
        return -1;
    }
};