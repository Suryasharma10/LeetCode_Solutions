class Solution {
public:
    string largestEven(string s) {
        while(s.length()>0 && s[s.length()-1]!='2'){
            s.erase(s.length()-1,1);
        }
        return s;
    }
};