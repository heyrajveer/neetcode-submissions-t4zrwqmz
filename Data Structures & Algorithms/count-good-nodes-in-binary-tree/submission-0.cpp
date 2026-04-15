class Solution {
public:
    int good(TreeNode* root, int prev) {
        if (!root) return 0;

        int cnt = (root->val >= prev) ? 1 : 0;

        prev = max(prev, root->val);

        cnt += good(root->left, prev);
        cnt += good(root->right, prev);

        return cnt;
    }

    int goodNodes(TreeNode* root) {
        return good(root, INT_MIN);
    }
};