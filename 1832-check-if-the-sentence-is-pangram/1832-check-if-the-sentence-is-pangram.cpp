class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(),sentence.end());
        int n=sentence.length();
        int x=0;
        for(int i=0;i<n;i++){
            if(sentence[i]==x+'a'){
                x++;
            }
        }
        return x==26;
    }
};