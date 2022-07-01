class Solution {
public:
    static bool compare ( vector<int> a, vector<int> b){
        return a[0]<b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),compare);
        int n = people.size();
        vector<vector<int>> result;

        int rank=0;
        people[0].push_back(0);
        people[0].push_back(rank);
        for (int i=1;i<n;i++)
        {
            if(people[i-1][0]!=people[i][0])
                rank++;
            people[i].push_back(0);
            people[i].push_back(rank);
        }
        
        vector<int> ranks;
        for(int i=0;i<=rank;i++)
            ranks.push_back(0);

        for (int i=0;i<n;i++)
        {
            vector<int> current = {INT_MAX,INT_MAX};
            int index;
            for(int j=0;j<n;j++)
            {
                if(people[j][1]<=result.size() && !people[j][2] && current[0]>people[j][0] &&ranks[people[j][3]]>=people[j][1])
                {
                    current = {people[j][0],people[j][1]};
                    index=j;
                }
            }
            result.push_back(current);

            people[index][2]=1;
            for(int i=0;i<=people[index][3];i++)
                ranks[i]++;

        }
        return result;
    }
};