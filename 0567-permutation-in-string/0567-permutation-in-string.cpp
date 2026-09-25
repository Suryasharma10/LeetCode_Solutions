class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>m;
        sort(s1.begin(),s1.end());
        int n=s1.length();
        for(int i=0;i<n;i++){
            m[s1[i]]++;
        }
        int k=s2.length();
        for(int i=0;i<k-n+1;i++){
            if(m[s2[i]]){
                string s=s2.substr(i,n);
                sort(s.begin(),s.end());
                if(s==s1){
                    return true;
                }
            }
        }
        return false;
    }
};