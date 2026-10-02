class Solution {
public:
    vector<string>ans;
    void generate(int a,int b,string s,int n){
        if(s.size()==2*n){
            ans.push_back(s);
        }
        if(a<n){
            s.push_back('(');
            generate(a+1,b,s,n);
            s.pop_back();
        }
        if(b<a){
            s.push_back(')');
            generate(a,b+1,s,n);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        generate(0,0,s,n);
        return ans;
    }
};