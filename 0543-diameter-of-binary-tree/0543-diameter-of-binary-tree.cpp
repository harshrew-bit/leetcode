class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
    int ans=0;
    if(root==NULL) return 0;
    height(root,ans);       
    return ans; 
    }

private:
int height(TreeNode*root,int& ans){
    if(root==NULL) return 0;
    int l=height(root->left,ans);
    int r=height(root->right,ans);
    ans=max(ans,l+r);
    return 1+max(l,r); 
}
};