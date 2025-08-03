class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()&1) return {};
        
        sort(changed.begin(),changed.end());
        map<int,int> m;
        vector<int>res;
        
        for(int i=0;i<changed.size();i++){
            m[changed[i]]++;
        }
        
        for(int i=0;i<changed.size();i++){
            if(m[changed[i]]==0) continue;
            if(m[changed[i] * 2]==0) return {};
            res.push_back(changed[i]);
            m[changed[i]]--;
            m[changed[i]*2]--;
        }
        return res;
    }
};