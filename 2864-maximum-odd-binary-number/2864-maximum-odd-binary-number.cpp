class Solution {
public:
    string maximumOddBinaryNumber(string s) {
       int n=s.length();
       int count=0;
       for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
        }
        s="";
        for(int i=0;i<n-1;i++){
            if(count>1){
                s+="1";
                count--;
            }else{
                s+="0";
            }
        }
        s+="1";
        return s;
    }
};