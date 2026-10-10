class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        for(int i=1;i<n;i++){
            nums1[0]+=nums1[i];
            nums2[0]+=nums2[i];
        }
        return (nums2[0]-nums1[0])/n;
    }
};