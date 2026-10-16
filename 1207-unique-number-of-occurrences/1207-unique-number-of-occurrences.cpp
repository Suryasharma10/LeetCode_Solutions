class Solution {
public:
    bool uniqueOccurrences(vector<int>& num) {
        map<int,int>m;
        int n= num.size();
        for(int i=0;i<n;i++){
           m[num[i]]++;
        }
        set<int>s;
        for (auto it : m) {
            if (s.find(it.second) != s.end()) {
                return false;
            }
            s.insert(it.second);
        }
        return true;
    }
};