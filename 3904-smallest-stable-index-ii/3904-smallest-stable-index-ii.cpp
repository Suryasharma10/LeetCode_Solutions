class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int a=0;
        int b=0;
        int n=nums.size();
        vector<int>mini(n);
        mini[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            mini[i]=min(mini[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
            a=max(a,nums[i]);
            if(a-mini[i]<=k){
                return i;
            }
        }
        return -1;
    }
};