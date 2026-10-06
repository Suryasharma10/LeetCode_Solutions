class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>a;
        int n=0;
        for(int i=0;i<s.length();i++){
            if(!a.empty() && a.top()=='(' && s[i]==')'){
                a.pop();
            }else{
                a.push(s[i]);
            }
        } 
        while(!a.empty()){
            n++;
            a.pop();
        }
        return n;  
    }
};