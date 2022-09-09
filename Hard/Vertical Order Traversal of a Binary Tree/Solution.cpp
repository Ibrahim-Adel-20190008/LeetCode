/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void addToMap(map<int, vector<int>> &map1, map<int, priority_queue<int, vector<int>, greater<int>>> map2){
    for(auto it = map2.begin();it!=map2.end();it++)
    {
        while(!it->second.empty()){
            map1[it->first].push_back(it->second.top());
            it->second.pop();
        }
    }
}

void solve(TreeNode* root, map<int,vector<int>> &m){
    // node , row , column
    queue<pair<TreeNode*,pair<int,int>>>q;
    if(root!= nullptr)q.push({root,{0,0}});
    bool first = true;
    // column , pq of values
    map<int,priority_queue<int,vector<int>,greater<int>>>m1;
    int currentRow=0;
    while(!q.empty())
    {
        const pair<TreeNode*,pair<int,int>> tmp = q.front();
        q.pop();
        if(currentRow!=tmp.second.first)
        {
            addToMap(m,m1);
            m1.clear();
            currentRow = tmp.second.first;
        }
        m1[tmp.second.second].push(tmp.first->val);
        if(tmp.first->left!= nullptr) q.push({tmp.first->left,{tmp.second.first+1,tmp.second.second-1}});
        if(tmp.first->right!= nullptr) q.push({tmp.first->right,{tmp.second.first+1,tmp.second.second+1}});
    }
    addToMap(m,m1);
}
vector<vector<int>> verticalTraversal(TreeNode* root) {
    map<int,vector<int>>  m;
    vector<vector<int>> result;
    solve(root,m);
    for(auto it=m.begin();it!=m.end();it++){
        result.push_back(it->second);
    }
    return result;
}
};