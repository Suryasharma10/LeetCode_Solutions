class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>m;
        vector<int>ans;
        for(int i=0;i<arr1.size();i++){
            m[arr1[i]]++;
        }
        for(int j=0;j<arr2.size();j++){
            while(m[arr2[j]]){
                ans.push_back(arr2[j]);
                m[arr2[j]]--;
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++){
            if(m[arr1[i]]){
                ans.push_back(arr1[i]);
                m[arr1[i]]--;
            }
        }
        return ans;
    }
};