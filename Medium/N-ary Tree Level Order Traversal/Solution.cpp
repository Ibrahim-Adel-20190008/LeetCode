/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        vector<vector<int>> result;
        if(root){
            q.push(root);
        }
        while(!q.empty()){
            vector<int> tmp;
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                Node* tmpNode = q.front();
                tmp.push_back(tmpNode->val);
                q.pop();
            for(auto it : tmpNode->children){
                q.push(it);
            }
            }
            result.push_back(tmp);
        }
        return result;
    }
};