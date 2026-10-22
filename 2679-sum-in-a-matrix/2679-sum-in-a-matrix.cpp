class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            sort(nums[i].begin(),nums[i].end());
        }
        for(int i=0;i<nums[0].size();i++){
            for(int j=0;j<nums.size();j++){
                maxi=max(maxi,nums[j][i]);
            }
            ans+=maxi;
            maxi=0;
        }
        return ans;
    }
};