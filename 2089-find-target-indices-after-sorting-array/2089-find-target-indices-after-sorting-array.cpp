class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>l;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                l.push_back(i);
            }else if(nums[i]>target){
                break;
            }
        }
        return l;
    }
};