class Solution {
public:
    int minimizedStringLength(string s) {
        int count=0;
        map<char,int>a;
        if(s.length()==1) return 1;
        sort(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            if(!a[s[i]]){
                count++;
                a[s[i]]++;
            }

        }
        return count;
    }
};