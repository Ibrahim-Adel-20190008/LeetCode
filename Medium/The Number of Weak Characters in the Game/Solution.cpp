class Solution {
public:
    static bool compare(vector<int> &v1, vector<int> &v2){
        if(v1[0]==v2[0]){
            return v1[1]>v2[1];
        }
        return v1[0]<v2[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int result=0;
        sort(properties.begin(),properties.end(),compare);
        int max = INT_MIN;

        for(int i=properties.size()-1;i>-1;i--){
                if(max>properties[i][1]) result++;
                else max = properties[i][1];
        }
        return result;
    }
};