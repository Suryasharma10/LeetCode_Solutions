class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string>m;
        int n= knowledge.size();
        for(int i=0;i<n;i++){
            m[knowledge[i][0]]=knowledge[i][1];
        }
        int k=s.length();
        string ans="";
        for(int i=0;i<k;i++){
            if(s[i]=='('){
                i++;
                string a="";
                while(s[i]!=')'){
                    a+=s[i];
                    i++;
                }
                if(m.find(a)!=m.end()){
                    ans+=m[a];
                }else{
                    ans+="?";
                }
            }else{
                ans+=s[i];
            }
        }
        return ans;
    }
};