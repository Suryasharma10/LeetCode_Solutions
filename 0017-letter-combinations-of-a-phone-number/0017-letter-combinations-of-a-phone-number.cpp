class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,vector<string>>m;
        vector<string>res;
        m['2']={"a","b","c"};
        m['3']={"d","e","f"};
        m['4']={"g","h","i"};
        m['5']={"j","k","l"};
        m['6']={"m","n","o"};
        m['7']={"p","q","r","s"};
        m['8']={"t","u","v"};
        m['9']={"w","x","y","z"};
        if(digits.length()==1){
            return m[digits[0]];
        }else if(digits.length()==2){
            for(int i=0;i<m[digits[0]].size();i++){
                for(int j=0;j<m[digits[1]].size();j++){
                    res.push_back(m[digits[0]][i]+m[digits[1]][j]);
                }
            }
        }else if(digits.length()==3){
            for(int i=0;i<m[digits[0]].size();i++){
                for(int j=0;j<m[digits[1]].size();j++){
                    for(int k=0;k<m[digits[2]].size();k++){
                        res.push_back(m[digits[0]][i]+m[digits[1]][j]+m[digits[2]][k]);
                    }
                }
            }
        }else{
            for(int i=0;i<m[digits[0]].size();i++){
                for(int j=0;j<m[digits[1]].size();j++){
                    for(int k=0;k<m[digits[2]].size();k++){
                        for(int l=0;l<m[digits[3]].size();l++){
                            res.push_back(m[digits[0]][i]+m[digits[1]][j]+m[digits[2]][k]+m[digits[3]][l]);
                        }
                    }
                }
            }
        }
        return res;
    }
};