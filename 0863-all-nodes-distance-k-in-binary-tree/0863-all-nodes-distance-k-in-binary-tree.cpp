class Solution {
public:
unordered_map<TreeNode*,TreeNode*>parent;
    void makeparent(TreeNode*root,TreeNode*par){
        if(root==NULL) return;
        parent[root]=par;
        makeparent(root->left,root);
        makeparent(root->right,root);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        makeparent(root,NULL);      
        queue<TreeNode*>q;
        unordered_set<TreeNode*>visited;
        q.push(target);
        visited.insert(target);
        int dis=0;
        while(!q.empty()){
            int size=q.size();
            if(dis==k){
                vector<int>ans;
                while(!q.empty()){
                    ans.push_back(q.front()->val);
                    q.pop();
                }
                return ans;
            }
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                q.pop();
                if(node->left&&!visited.count(node->left)){
                    visited.insert(node->left);
                    q.push(node->left);
                }
                if(node->right&&!visited.count(node->right)){
                    visited.insert(node->right);
                    q.push(node->right);
                }
                if(parent[node]&&!visited.count(parent[node])){
                    visited.insert(parent[node]);
                    q.push(parent[node]);
                }
            }
            dis++;
        }
        return {};

    }
};