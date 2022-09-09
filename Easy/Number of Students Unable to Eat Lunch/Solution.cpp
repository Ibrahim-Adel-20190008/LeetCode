class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int size = students.size();

        for(int i=0;i<size;i++){
            int tmpSan = sandwiches[i];
            bool flag=false;
            for(int j=0;j<size;j++){
                if(tmpSan==students[j]){
                    students[j]=-1;
                    flag=true;
                    break;
                }
            }
            if(!flag) break;
        }
            int count=0;
            for(int i=0;i<students.size();i++)
                if(students[i]!=-1)count++;
            return count;
    }
};