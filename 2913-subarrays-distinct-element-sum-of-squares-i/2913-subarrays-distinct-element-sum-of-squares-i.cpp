class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            map<int,int>m;
            int count=0;
            for(int j=i;j<nums.size();j++){
                if(!m[nums[j]]){
                    m[nums[j]]++;
                    count++;
                }
                ans+=count*count;
            }
        }
        return ans;
    }
};