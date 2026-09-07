class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int one=0;
        int zero=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==1){
                one++;
            }else{
                zero++;
            }
        }
        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==1){
                if(one==0){
                    break;
                }
                one--;
            }else{
                if(zero==0){
                    break;
                }
                zero--;
            }
        }
        return one+zero;
    }
};