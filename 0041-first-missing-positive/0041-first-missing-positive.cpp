class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]>0 && nums[i]<=n){
                int j =nums[i]-1;
                if(nums[i]!=nums[j]){
                    int temp = nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                }else{
                    i++;
                }
            }else{
                i++;
            }
        }
        for(int k=0;k<n;k++){
            if(nums[k]!=k+1){
                return k+1;
            }
        }
        return n+1;
    }
};