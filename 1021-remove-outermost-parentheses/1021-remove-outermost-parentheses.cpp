class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string res="";
        int count =0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }else{
                count--;
            }
            if(count>1){
                if(s[i]=='('){
                    res+='(';
                    count++;
                }else{
                    res+=')';
                    count--;
                }
            }
        }
        return res;
    }
};