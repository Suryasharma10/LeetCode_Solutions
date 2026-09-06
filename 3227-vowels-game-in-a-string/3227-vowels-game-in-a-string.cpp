class Solution {
public:
    bool doesAliceWin(string s) {
        int a=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                a++;
            }
        }
        if(a==0){
            return false;
        }
        return true;
    }
};