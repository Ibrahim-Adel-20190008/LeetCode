class Solution {
public:
    const unsigned int mod = 1e9 + 7;
    static bool compare(pair<int,int> &p1,pair<int,int> &p2){
    return p1.second>p2.second;
    }
    int maxPerformance(int n, vector<int> speed, vector<int> efficiency, int k) {
        vector<pair<int,int>> eng;
        
        long long result=-1,totalSpeed=0,minEff=INT_MAX;
        for(int i=0;i<n;i++){
            eng.push_back({speed[i],efficiency[i]});
        }
        sort(eng.begin(),eng.end(),compare);
        priority_queue< pair<int,int> > pq;

        for(int i=0;i<k;i++){
            pq.push({eng[i].first*-1,eng[i].second});
            totalSpeed+=eng[i].first;
            minEff = minEff<eng[i].second?minEff:eng[i].second;
            result = max(result,totalSpeed*minEff);
        }
        
        for(int i=k;i<eng.size();i++){
            totalSpeed-=(pq.top().first*-1);
            pq.pop();
            pq.push({eng[i].first*-1,eng[i].second});
            totalSpeed+=eng[i].first;
            minEff = eng[i].second;
            result = max(result,totalSpeed * minEff);
        }
        return result%mod;
    }
};