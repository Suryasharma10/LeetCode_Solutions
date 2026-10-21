class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        int ans=0;
        int sum=0;
        for(int i=1;i<nums.size();i++){
            ans+=nums[i];
        }
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            if(abs(ans-sum)%2==0){
                count++;
            }
            ans-=nums[i+1];
        }
        return count;
    }
};