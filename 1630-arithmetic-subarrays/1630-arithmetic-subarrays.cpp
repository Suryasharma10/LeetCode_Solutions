class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>s;
        int m=l.size();
        for(int i=0;i<m;i++){
            vector<int>temp;
            for(int k=l[i];k<=r[i];k++){
                temp.push_back(nums[k]);
            }
            sort(temp.begin(),temp.end());
            bool a=true;
            for(int j=1;j<temp.size()-1;j++){
                if(temp[j]-temp[j-1]!=temp[j+1]-temp[j]){
                    a=false;
                }
            }
            s.push_back(a);
            
        }
        return s;
    }
};