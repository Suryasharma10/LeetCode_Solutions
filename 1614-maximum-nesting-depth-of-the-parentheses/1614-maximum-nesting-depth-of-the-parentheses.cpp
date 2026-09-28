class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int count=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            if(s[i]==')'){
                ans=max(ans,count);
                count--;
            }
        }
        return ans;
    }
};