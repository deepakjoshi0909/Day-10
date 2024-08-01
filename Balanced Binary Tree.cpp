
class Solution {
public:
    pair<bool, int> solve(TreeNode* root) {
        if (root == NULL) {
            return {true, 0};
        }
        
        pair<bool, int> left = solve(root->left);
        pair<bool, int> right = solve(root->right);

        bool isBalanced = left.first && right.first && abs(left.second - right.second) <= 1;
        int height = max(left.second, right.second) + 1;

        return {isBalanced, height};
    }

    bool isBalanced(TreeNode* root) {
        return solve(root).first;
    }
};
