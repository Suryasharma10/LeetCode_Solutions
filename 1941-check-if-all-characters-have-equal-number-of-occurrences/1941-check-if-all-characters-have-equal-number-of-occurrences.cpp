class Solution {
public:
    bool areOccurrencesEqual(string s) {
        sort(s.begin(),s.end());
        stack<int>st;
        int ans=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
                ans++;
                if(!st.empty() && st.top()!=ans){
                    return false;
                }
                if(st.empty()){
                    st.push(ans);
                    ans=0;
                }else{
                    st.push(ans);
                    ans=0;
                }
                if(i==s.length()-2 && s[i]!=s[i+1]){
                    ans=1;
                    if(!st.empty() && st.top()!=ans){
                    return false;
                    }
                }
            }else{
                ans++;
                if(i==s.length()-2){
                    ans++;
                    if(!st.empty() && st.top()!=ans){
                    return false;
                }
                }
            }
        }
        return true;
    }
};