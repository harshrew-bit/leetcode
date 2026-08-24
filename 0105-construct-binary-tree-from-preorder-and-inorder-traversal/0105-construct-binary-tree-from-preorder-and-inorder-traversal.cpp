class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mpp;

        // Store inorder value -> index
        for (int i = 0; i < inorder.size(); i++) {
            mpp[inorder[i]] = i;
        }

        return buildTree(preorder, 0, preorder.size() - 1, inorder, 0,
                         inorder.size() - 1, mpp);
    }

    TreeNode* buildTree(vector<int>& preorder, int prestart, int prend,
                        vector<int>& inorder, int instart, int inend,
                        unordered_map<int, int>& mpp) {
        // No nodes left in this subtree
        if (prestart > prend || instart > inend) {
            return NULL;
        }

        // First element in preorder is the root
        TreeNode* root = new TreeNode(preorder[prestart]);

        // Find root's position in inorder
        int inroot = mpp[root->val];

        // Number of nodes in the left subtree
        int numsleft = inroot - instart;

        // Build left subtree
        root->left = buildTree(preorder, prestart + 1, prestart + numsleft,
                               inorder, instart, inroot - 1, mpp);

        // Build right subtree
        root->right = buildTree(preorder, prestart + numsleft + 1, prend,
                                inorder, inroot + 1, inend, mpp);

        return root;
    }
};