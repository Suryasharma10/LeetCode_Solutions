class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int inc=1;
        int dec=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                int j=i;
                int ans=1;
                while(j<n-1 && nums[j]<nums[j+1]){
                    ans++;
                    j++;
                }
                inc=max(inc,ans);
            }
            if(nums[i]>nums[i+1]){
                int j=i;
                int ans=1;
                while(j<n-1 && nums[j]>nums[j+1]){
                    ans++;
                    j++;
                }
                dec=max(dec,ans);cout<<ans<<" "<<dec;
            }
        }
        return max(inc,dec);
    }
};