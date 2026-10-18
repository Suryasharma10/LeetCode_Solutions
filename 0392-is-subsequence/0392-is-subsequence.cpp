class Solution {
public:
    bool isSubsequence(string s, string t) {
        int t1=t.length();
        int s1=s.length();
        int j =0;
        for(int i=0;i<t1;i++){
            if(s[j]==t[i] && j<s1){
                j++;
            }
        }
        if(j==s1){
            return true;
        }else{
            return false;
        }
    }
};