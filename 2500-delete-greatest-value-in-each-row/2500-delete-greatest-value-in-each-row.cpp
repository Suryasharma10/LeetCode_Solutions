class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end(),greater<int>());
        }
        int ans=0;
        for(int i=0;i<grid[0].size();i++){
            int greater=0;
            for(int j=0;j<grid.size();j++){
                greater=max(greater,grid[j][i]);
            }
            ans+=greater;
        }
        return ans;
    }
};