class Solution {
public:
    bool isValid(string s) {
            // int n=s.length();
            // vector<char>res(n);
            // int j=0;
            // if(n<=1){
            //     return false;
            // }
            // for(int i=0;i<n;i++){
            //     if(s[i]=='('||s[i]=='['||s[i]=='{'){
            //         res[j]=s[i];
            //         j++;
            //     }
            //     if(s[i]==')'|| s[i]==']'|| s[i]=='}'){
            //         if(j==0){
            //             return false;
            //         }else if(s[i]==')' && res[j-1]=='('){
            //             j--;
            //         }else if(s[i]==']'&& res[j-1]=='['){
            //             j--;
            //         }else if(s[i]=='}'&& res[j-1]=='{'){
            //             j--;
            //         }else{
            //             return false;
            //         }
            //     }
            // }
            // if(j==0){
            //     return true;
            // }
            // return false;
        stack<char>res;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(!res.empty() && (s[i]==')' || s[i]=='}' || s[i]==']')){
                if(s[i]==')' && res.top()=='('){
                    res.pop();
                }else if(s[i]==']' && res.top()=='['){
                    res.pop();
                }else if(s[i]=='}' && res.top()=='{'){
                    res.pop();
                }else{
                    return false;
                }
            }else{
                res.push(s[i]);
            }
        }
        if(!res.empty()){
            return false;
        }
        return true;
    }
};