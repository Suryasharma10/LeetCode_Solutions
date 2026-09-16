class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string>m;
        for(int i=0;i<paths.size();i++){
            m[paths[i][0]]=paths[i][1];
        }
        string s=paths[0][0];
        cout<<s;
        while(true){
            if(m.find(s)!=m.end()){
                s=m[s];
            }else{
                break;
            }
            
        }
        return s;
    }
};