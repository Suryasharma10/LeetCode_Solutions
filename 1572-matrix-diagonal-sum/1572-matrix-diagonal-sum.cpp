class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        if(n%2==0){
            for(int i=0;i<n;i++){
                sum+=(mat[i][i]+mat[i][n-i-1]);
            }
        }else{
            for(int i=0;i<n;i++){
                if(i==n/2){
                    sum+=mat[i][i];
                }else{
                    sum+=(mat[i][i]+mat[i][n-i-1]);
                }
            }
        }
        return sum;
    }
};