class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == NULL)
            return 0;
        int lh = lefth(root);
        int rh = righth(root);

        if (lh == rh)
            return (1 << lh) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    int lefth(TreeNode* node) {
        int h = 0;
        while (node) {
            h++;
            node = node->left;
        }
        return h;
    }
    int righth(TreeNode* node) {
        int h = 0;
        while (node) {
            h++;
            node = node->right;
        }
        return h;
    }
};